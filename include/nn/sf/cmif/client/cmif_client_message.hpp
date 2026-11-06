#pragma once

#include <stddef.h>
#include <stdint.h>
#include <string.h>

#include <utility>

#include "nn/result.hpp"
#include "nn/sf/hipc.hpp"
#include "nn/sf/hipc/detail/hipc2_message.hpp"

namespace nn::sf::cmif {

uint32_t GetInlineContext();

}

namespace nn::sf::hipc::detail {

void HandleHipcErrorOnClient(Result result);

}

namespace nn::sf::cmif::client::detail {

constexpr uint32_t CmifInHeaderMagic = 0x49434653;
constexpr uint32_t CmifOutHeaderMagic = 0x4f434653;
constexpr size_t MessageBufferSize = 0x100;

struct CmifInHeader {
  uint32_t magic;
  uint32_t version;
  uint32_t methodId;
  uint32_t token;
};

struct CmifOutHeader {
  uint32_t magic;
  uint32_t version;
  Result result;
  uint32_t token;
};

constexpr Result ResultInvalidCmifOutHeader() {
  return Result{0x1a80a};
}

constexpr size_t AlignUp(size_t value, size_t alignment) {
  return (value + alignment - 1) & ~(alignment - 1);
}

template <typename T>
inline T* AlignUpPointer(void* pointer, size_t alignment) {
  return reinterpret_cast<T*>(AlignUp(
    reinterpret_cast<uintptr_t>(pointer), alignment));
}

// Opaque raw argument, the client message only depends on its layout.
template <size_t Size, size_t Alignment>
struct alignas(Alignment) RawData {
  uint8_t data[Size];
};

// A scalar passed in a register and stored in the in raw data.
template <typename T>
struct InRaw {
  using Parameter = uint64_t;
  static constexpr size_t Size = sizeof(T);
  static constexpr size_t Alignment = alignof(T);
  static constexpr bool IsInRaw = true;
  static constexpr bool IsOutRaw = false;

  // The value holds the zero extended bits of the scalar.
  static void Write(char* pOut, Parameter value) {
    memcpy(pOut, &value, sizeof(T));
  }

  static void Read(Parameter, const char*) {}
};

// A structure passed by reference and copied in the in raw data.
template <typename T>
struct InRawReference {
  using Parameter = const T*;
  static constexpr size_t Size = sizeof(T);
  static constexpr size_t Alignment = alignof(T);
  static constexpr bool IsInRaw = true;
  static constexpr bool IsOutRaw = false;

  static void Write(char* pOut, Parameter value) {
    memcpy(pOut, value, sizeof(T));
  }

  static void Read(Parameter, const char*) {}
};

template <typename T>
struct OutRaw {
  using Parameter = T*;
  static constexpr size_t Size = sizeof(T);
  static constexpr size_t Alignment = alignof(T);
  static constexpr bool IsInRaw = false;
  static constexpr bool IsOutRaw = true;

  static void Write(char*, Parameter) {}

  static void Read(Parameter pOut, const char* raw) {
    memcpy(pOut, raw, sizeof(T));
  }
};

template <typename... Arguments>
struct RawLayout {
  static constexpr size_t Count = sizeof...(Arguments);

  // Raw arguments are packed by increasing alignment, keeping their order.
  static constexpr size_t GetOffset(bool in, size_t index) {
    constexpr size_t sizes[] = {Arguments::Size..., 0};
    constexpr size_t alignments[] = {Arguments::Alignment..., 1};
    constexpr bool inRaw[] = {Arguments::IsInRaw..., false};
    constexpr bool outRaw[] = {Arguments::IsOutRaw..., false};
    size_t offset = 0;
    for (size_t alignment = 1; alignment <= 8; alignment *= 2) {
      for (size_t i = 0; i < Count; i++) {
        if (!(in ? inRaw[i] : outRaw[i]) || alignments[i] != alignment) {
          continue;
        }
        offset = AlignUp(offset, alignment);
        if (i == index) {
          return offset;
        }
        offset += sizes[i];
      }
    }
    return offset;
  }

  static constexpr size_t InRawSize = GetOffset(true, Count);
  static constexpr size_t OutRawSize = GetOffset(false, Count);
};

template <bool HasProcessId, typename... Arguments>
struct CmifClientMessage {
  using Layout = RawLayout<Arguments...>;

  static constexpr size_t HeaderSize = HasProcessId ? 0x14 : 0x8;
  static constexpr uint32_t RawWordCount = static_cast<uint32_t>(
    (0x10 + sizeof(CmifInHeader) + AlignUp(Layout::InRawSize, 4)) / 4);

  template <size_t... Indices>
  static void WriteArguments(char* data, std::index_sequence<Indices...>,
    typename Arguments::Parameter... args) {
    (Arguments::Write(data + Layout::GetOffset(true, Indices), args), ...);
  }

  template <size_t... Indices>
  static void ReadArguments(const char* data,
    std::index_sequence<Indices...>, typename Arguments::Parameter... args) {
    (Arguments::Read(args, data + Layout::GetOffset(false, Indices)), ...);
  }

  static CmifInHeader* SetupHeader(void* buffer, uint32_t type,
    uint32_t extraWordCount) {
    uint32_t* header = static_cast<uint32_t*>(buffer);
    header[0] = type;
    header[1] = (RawWordCount + extraWordCount) |
      (HasProcessId ? 0x80000000u : 0u);
    if (HasProcessId) {
      header[2] = 1;
    }
    return AlignUpPointer<CmifInHeader>(
      static_cast<char*>(buffer) + HeaderSize, 0x10);
  }
};

}

namespace nn::sf::hipc::client {

template <detail::MessageType Type>
class Hipc2ProxyKindBase {
public:
  struct ProxyKindState {
    bool isOwner;
    uint32_t handle;
  };

  template <bool HasProcessId, typename... Arguments>
  [[gnu::noinline]] static Result Process(const ProxyKindState* pState,
    typename Arguments::Parameter... args, int methodId);
};

template <detail::MessageType Type>
template <bool HasProcessId, typename... Arguments>
Result Hipc2ProxyKindBase<Type>::Process(const ProxyKindState* pState,
  typename Arguments::Parameter... args, int methodId) {
  using Message = cmif::client::detail::CmifClientMessage<HasProcessId,
    Arguments...>;
  using namespace cmif::client::detail;

  const uint32_t handle = pState->handle;
  void* buffer = GetMessageBufferOnTls();

  CmifInHeader* pIn = Message::SetupHeader(buffer,
    static_cast<uint32_t>(Type), 0);
  pIn->magic = CmifInHeaderMagic;
  pIn->version = 1;
  pIn->methodId = methodId;
  pIn->token = 0;
  char* inData = reinterpret_cast<char*>(pIn + 1);
  memset(inData, 0, Message::Layout::InRawSize);
  Message::WriteArguments(inData,
    std::index_sequence_for<Arguments...>(), args...);
  pIn->token = cmif::GetInlineContext();

  Result result = Result{SendSyncRequest(handle, buffer,
    MessageBufferSize)};
  if (result.IsFailure()) {
    return result;
  }

  detail::Hipc2MessageReader reader;
  reader.Initialize(buffer);
  const CmifOutHeader* pOut = AlignUpPointer<const CmifOutHeader>(
    reader.GetRawData(), 0x10);
  if (pOut->magic != CmifOutHeaderMagic) {
    return ResultInvalidCmifOutHeader();
  }
  result = pOut->result;
  if (result.IsFailure()) {
    detail::HandleHipcErrorOnClient(result);
    return result;
  }

  Message::ReadArguments(reinterpret_cast<const char*>(pOut + 1),
    std::index_sequence_for<Arguments...>(), args...);
  return result;
}

}

namespace nn::sf::hipc::client {

class HipcClientSessionAllocator {
public:
  virtual uint32_t AllocateSession() = 0;
  virtual void DeallocateSession(uint32_t handle) = 0;
};

template <typename Base>
class Hipc2ClientSessionManagedProxyKindBase {
public:
  struct ProxyKindState {
    bool isOwner;
    HipcClientSessionAllocator* pSessionAllocator;
  };
};

}

namespace nn::sf::cmif::client {

template <typename Base>
class CmifDomainProxyKind {
public:
  struct ProxyKindState {
    bool isOwner;
    hipc::client::HipcClientSessionAllocator* pSessionAllocator;
    uint32_t objectId;
  };

  template <bool HasProcessId, typename... Arguments>
  [[gnu::noinline]] static Result Process(const ProxyKindState* pState,
    typename Arguments::Parameter... args, int methodId);
};

namespace detail {

struct CmifDomainInHeader {
  uint8_t type;
  uint8_t objectCount;
  uint16_t dataSize;
  uint32_t objectId;
  uint32_t reserved;
  uint32_t token;
};

struct CmifDomainOutHeader {
  uint32_t objectCount;
  uint32_t reserved[3];
};

}

template <typename Base>
template <bool HasProcessId, typename... Arguments>
Result CmifDomainProxyKind<Base>::Process(const ProxyKindState* pState,
  typename Arguments::Parameter... args, int methodId) {
  using Message = detail::CmifClientMessage<HasProcessId, Arguments...>;
  using namespace detail;

  hipc::client::HipcClientSessionAllocator* pSessionAllocator =
    pState->pSessionAllocator;
  const uint32_t objectId = pState->objectId;
  const uint32_t handle = pSessionAllocator->AllocateSession();
  void* buffer = hipc::GetMessageBufferOnTls();

  CmifDomainInHeader* pDomain = reinterpret_cast<CmifDomainInHeader*>(
    Message::SetupHeader(buffer, static_cast<uint32_t>(
      hipc::detail::MessageType::CmifRequestWithContext),
      sizeof(CmifDomainInHeader) / 4));
  pDomain->type = 1;
  pDomain->objectCount = 0;
  pDomain->dataSize = static_cast<uint16_t>(
    sizeof(CmifInHeader) + Message::Layout::InRawSize);
  pDomain->objectId = objectId;
  pDomain->reserved = 0;
  pDomain->token = 0;
  CmifInHeader* pIn = reinterpret_cast<CmifInHeader*>(pDomain + 1);
  pIn->magic = CmifInHeaderMagic;
  pIn->version = 1;
  pIn->methodId = methodId;
  pIn->token = 0;
  char* inData = reinterpret_cast<char*>(pIn + 1);
  memset(inData, 0, Message::Layout::InRawSize);
  Message::WriteArguments(inData,
    std::index_sequence_for<Arguments...>(), args...);
  pDomain->token = GetInlineContext();

  Result result = Result{hipc::SendSyncRequest(handle, buffer,
    MessageBufferSize)};
  if (result.IsSuccess()) {
    hipc::detail::Hipc2MessageReader reader;
    reader.Initialize(buffer);
    const CmifOutHeader* pOut = reinterpret_cast<const CmifOutHeader*>(
      AlignUpPointer<const CmifDomainOutHeader>(reader.GetRawData(), 0x10)
      + 1);
    if (pOut->magic != CmifOutHeaderMagic) {
      result = ResultInvalidCmifOutHeader();
    }
    else {
      result = pOut->result;
      if (result.IsFailure()) {
        hipc::detail::HandleHipcErrorOnClient(result);
      }
      else {
        Message::ReadArguments(reinterpret_cast<const char*>(pOut + 1),
          std::index_sequence_for<Arguments...>(), args...);
      }
    }
  }

  pSessionAllocator->DeallocateSession(handle);
  return result;
}

}
