#pragma once

#include <stddef.h>
#include <stdint.h>
#include <string.h>

#include <atomic>
#include <type_traits>
#include <utility>

#include "nn/result.hpp"
#include "nn/sf/hipc.hpp"
#include "nn/sf/hipc/detail/hipc2_message.hpp"
#include "nn/sf/native_handle.hpp"
#include "nn/sf/shared_pointer.hpp"

namespace nn::sf::cmif {

uint32_t GetInlineContext();

}

namespace nn::sf::hipc::detail {

void HandleHipcErrorOnClient(Result result);

}

namespace nn::sf::hipc::detail {

struct BufferParameter {
  uintptr_t pointer;
  size_t size;
};

struct Hipc2MessageInfo {
  uint8_t isValid;
  bool hasProcessId;
  uint8_t copyHandleCount;
  uint8_t moveHandleCount;
  uint32_t header0;
  uint32_t header1;
  uint32_t specialHeader;
  uint8_t processIdOffset;
  uint8_t copyHandleOffset;
  uint8_t moveHandleOffset;
  uint8_t pointerOffset;
  uint8_t sendOffset;
  uint8_t receiveOffset;
  uint8_t exchangeOffset;
  uint8_t rawDataOffset;
  uint8_t receiveListOffset;
  uint8_t reserved;
  uint16_t messageWordCount;
};

static_assert(sizeof(Hipc2MessageInfo) == 0x1c);

struct Hipc2MessageWriter {
  const Hipc2MessageInfo* pInfo;
  void* buffer;
};

Result SetBuffers(Hipc2MessageWriter* pWriter, int count,
  const BufferParameter* pBuffers, const uint32_t* pAttributes,
  size_t pointerBufferSize, size_t pointerSizeOffset);

}

namespace nn::sf::hipc::client {

Result QueryPointerBufferSize(uint16_t* pOutSize, uint32_t handle) asm(
  "_ZN2nn2sf4hipc6client22QueryPointerBufferSizeEPtNS_3svc6HandleE");

}

namespace nn::diag::detail {

[[noreturn]] void AbortImpl(const Result* pResult);

}

namespace nn::sf::cmif::client {

class CmifBaseObject {
public:
  virtual void* GetProxyKindState() = 0;
};

}

namespace nn::sf::cmif::client::detail {

// The first slots that every proxy object shares.
class CmifProxyObject : public IServiceObject {
public:
  virtual CmifBaseObject* GetCmifBaseObject() = 0;
  virtual const void* GetInterfaceInfo() = 0;
};

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
  static constexpr uint32_t BufferAttribute = 0;

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
  static constexpr uint32_t BufferAttribute = 0;

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
  static constexpr uint32_t BufferAttribute = 0;

  static void Write(char*, Parameter) {}

  static void Read(Parameter pOut, const char* raw) {
    memcpy(pOut, raw, sizeof(T));
  }
};

enum BufferAttribute : uint32_t {
  BufferAttribute_In = 1 << 0,
  BufferAttribute_Out = 1 << 1,
  BufferAttribute_HipcMapAlias = 1 << 2,
  BufferAttribute_HipcPointer = 1 << 3,
  BufferAttribute_FixedSize = 1 << 4,
  BufferAttribute_HipcAutoSelect = 1 << 5,
  BufferAttribute_HipcMapTransferAllowsNonSecure = 1 << 6,
  BufferAttribute_HipcMapTransferAllowsNonDevice = 1 << 7,
};

// A handle returned in the copy or move handle list of the reply.
template <bool IsMove>
struct OutHandle {
  using Parameter = NativeHandle*;
  static constexpr size_t Size = 0;
  static constexpr size_t Alignment = 1;
  static constexpr bool IsInRaw = false;
  static constexpr bool IsOutRaw = false;
  static constexpr uint32_t BufferAttribute = 0;
  static constexpr int HandleKind = IsMove ? 2 : 1;

  static void Write(char*, Parameter) {}

  static void Read(Parameter, const char*) {}
};

template <typename T, typename = void>
struct HandleKindOf {
  static constexpr int Value = 0;
};

template <typename T>
struct HandleKindOf<T, std::void_t<decltype(T::HandleKind)>> {
  static constexpr int Value = T::HandleKind;
};

// A buffer passed as its address and byte size.
template <uint32_t Attribute>
struct Buffer {
  using Parameter = hipc::detail::BufferParameter;
  static constexpr size_t Size = 0;
  static constexpr size_t Alignment = 1;
  static constexpr bool IsInRaw = false;
  static constexpr bool IsOutRaw = false;
  static constexpr uint32_t BufferAttribute = Attribute;

  static void Write(char*, Parameter) {}

  static void Read(Parameter, const char*) {}
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

  static constexpr uint32_t Attributes[] = {Arguments::BufferAttribute..., 0};

  static constexpr int CountBuffers(uint32_t required, uint32_t any) {
    int count = 0;
    for (size_t i = 0; i < sizeof...(Arguments); i++) {
      const uint32_t attribute = Attributes[i];
      if ((attribute & required) == required && (attribute & any) != 0) {
        count++;
      }
    }
    return count;
  }

  static constexpr int BufferCount = CountBuffers(0, ~0u);
  static constexpr int PointerCount = CountBuffers(BufferAttribute_In,
    BufferAttribute_HipcPointer | BufferAttribute_HipcAutoSelect);
  static constexpr int SendCount = CountBuffers(BufferAttribute_In,
    BufferAttribute_HipcMapAlias | BufferAttribute_HipcAutoSelect);
  static constexpr int ReceiveCount = CountBuffers(BufferAttribute_Out,
    BufferAttribute_HipcMapAlias | BufferAttribute_HipcAutoSelect);
  static constexpr int ReceiveListCount = CountBuffers(BufferAttribute_Out,
    BufferAttribute_HipcPointer | BufferAttribute_HipcAutoSelect);
  static constexpr int PointerSizeCount = ReceiveListCount -
    CountBuffers(BufferAttribute_Out | BufferAttribute_HipcPointer |
      BufferAttribute_FixedSize, ~0u);
  static constexpr bool NeedsPointerBufferSize = ReceiveListCount > 0 ||
    CountBuffers(BufferAttribute_HipcAutoSelect, ~0u) > 0;

  static constexpr size_t HeaderSize = HasProcessId ? 0x14 : 0x8;

  // The out pointer sizes follow the in raw data as 16 bit values.
  static constexpr size_t GetPointerSizeOffset(size_t extraSize) {
    return 0x10 + extraSize + sizeof(CmifInHeader) + Layout::InRawSize;
  }

  static constexpr uint32_t GetRawWordCount(size_t extraSize) {
    return static_cast<uint32_t>(AlignUp(GetPointerSizeOffset(extraSize) +
      PointerSizeCount * sizeof(uint16_t), 4) / 4);
  }

  static constexpr uint32_t RawWordCount = GetRawWordCount(0);

  static constexpr hipc::detail::Hipc2MessageInfo MakeInfo(
    size_t extraSize) {
    hipc::detail::Hipc2MessageInfo info = {};
    const uint32_t rawWordCount = GetRawWordCount(extraSize);
    info.isValid = 1;
    info.hasProcessId = HasProcessId;
    info.header0 = PointerCount << 16 | SendCount << 20 |
      ReceiveCount << 24;
    info.header1 = rawWordCount |
      (ReceiveListCount > 0 ? (ReceiveListCount + 2) << 10 : 0) |
      (HasProcessId ? 0x80000000u : 0u);
    info.specialHeader = HasProcessId ? 1 : 0;
    uint32_t offset = HasProcessId ? 3 : 2;
    if (HasProcessId) {
      info.processIdOffset = offset;
      offset += 2;
    }
    if (PointerCount > 0) {
      info.pointerOffset = offset;
      offset += PointerCount * 2;
    }
    if (SendCount > 0) {
      info.sendOffset = offset;
      offset += SendCount * 3;
    }
    if (ReceiveCount > 0) {
      info.receiveOffset = offset;
      offset += ReceiveCount * 3;
    }
    info.rawDataOffset = offset;
    offset += rawWordCount;
    if (ReceiveListCount > 0) {
      info.receiveListOffset = offset;
      offset += ReceiveListCount * 2;
    }
    info.messageWordCount = offset;
    return info;
  }

  template <size_t... Indices>
  static void CollectBuffers(hipc::detail::BufferParameter* pOut,
    std::index_sequence<Indices...>, typename Arguments::Parameter... args) {
    (StoreBuffer<Arguments, Indices>(pOut, args), ...);
  }

  template <typename Argument, size_t Index>
  static void StoreBuffer(hipc::detail::BufferParameter* pOut,
    typename Argument::Parameter value) {
    if constexpr (Argument::BufferAttribute != 0) {
      size_t index = 0;
      for (size_t i = 0; i < Index; i++) {
        index += Attributes[i] != 0 ? 1 : 0;
      }
      pOut[index] = value;
    }
  }

  static constexpr int HandleKinds[] = {HandleKindOf<Arguments>::Value..., 0};

  template <size_t... Indices>
  static void ReadHandles(const hipc::detail::Hipc2MessageReader& reader,
    std::index_sequence<Indices...>, typename Arguments::Parameter... args) {
    (ReadHandle<Arguments, Indices>(reader, args), ...);
  }

  template <typename Argument, size_t Index>
  static void ReadHandle(const hipc::detail::Hipc2MessageReader& reader,
    typename Argument::Parameter value) {
    if constexpr (HandleKindOf<Argument>::Value != 0) {
      constexpr int kind = HandleKindOf<Argument>::Value;
      int index = 0;
      for (size_t i = 0; i < Index; i++) {
        index += HandleKinds[i] == kind ? 1 : 0;
      }
      NativeHandle handle(kind == 2 ? reader.GetMoveHandle(index) :
        reader.GetCopyHandle(index), true);
      value->Swap(handle);
    }
  }

  // Writes the header and the buffer descriptors, then returns the in header.
  static Result SetupBufferMessage(CmifInHeader** ppOut, void* buffer,
    uint32_t type, size_t extraSize, size_t pointerBufferSize,
    typename Arguments::Parameter... args) {
    using namespace hipc::detail;
    const Hipc2MessageInfo info = MakeInfo(extraSize);
    uint32_t attributes[BufferCount];
    BufferParameter buffers[BufferCount];
    int index = 0;
    for (size_t i = 0; i < sizeof...(Arguments); i++) {
      if (Attributes[i] != 0) {
        attributes[index++] = Attributes[i];
      }
    }
    CollectBuffers(buffers, std::index_sequence_for<Arguments...>(),
      args...);
    Hipc2MessageWriter writer = {&info, buffer};
    uint32_t* header = static_cast<uint32_t*>(buffer);
    header[0] = type | info.header0;
    header[1] = info.header1;
    if (HasProcessId) {
      header[2] = 1;
    }
    const Result result = SetBuffers(&writer, BufferCount, buffers,
      attributes, pointerBufferSize, GetPointerSizeOffset(extraSize));
    if (result.IsFailure()) {
      return result;
    }
    *ppOut = AlignUpPointer<CmifInHeader>(static_cast<uint32_t*>(
      writer.buffer) + writer.pInfo->rawDataOffset, 0x10);
    return result;
  }

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
    mutable std::atomic<bool> isPointerBufferSizeCached;
    mutable std::atomic<uint16_t> pointerBufferSize;
    uint32_t handle;
  };

  template <bool HasProcessId, typename... Arguments>
  [[gnu::noinline]] static Result Process(const ProxyKindState* pState,
    typename Arguments::Parameter... args, int methodId);

private:
  template <typename Message, typename... Parameters>
  [[gnu::always_inline]] static Result Finish(uint32_t handle, void* buffer,
    cmif::client::detail::CmifInHeader* pIn, int methodId,
    Parameters... args);
};

template <detail::MessageType Type>
template <bool HasProcessId, typename... Arguments>
Result Hipc2ProxyKindBase<Type>::Process(const ProxyKindState* pState,
  typename Arguments::Parameter... args, int methodId) {
  using Message = cmif::client::detail::CmifClientMessage<HasProcessId,
    Arguments...>;
  using namespace cmif::client::detail;

  CmifInHeader* pIn;
  if constexpr (Message::BufferCount > 0) {
    size_t pointerBufferSize = 0;
    if constexpr (Message::NeedsPointerBufferSize) {
      if (!pState->isPointerBufferSizeCached.load(std::memory_order_acquire)) {
        uint16_t size = 0;
        const Result queried = QueryPointerBufferSize(&size, pState->handle);
        if (queried.IsFailure()) {
          diag::detail::AbortImpl(&queried);
        }
        pState->pointerBufferSize.store(size, std::memory_order_release);
        pState->isPointerBufferSizeCached.store(true,
          std::memory_order_release);
      }
      pointerBufferSize = pState->pointerBufferSize.load(
        std::memory_order_acquire);
    }
    const uint32_t handle = pState->handle;
    void* buffer = GetMessageBufferOnTls();
    Result result = Message::SetupBufferMessage(&pIn, buffer,
      static_cast<uint32_t>(Type), 0, pointerBufferSize, args...);
    if (result.IsFailure()) {
      return result;
    }
    return Finish<Message>(handle, buffer, pIn, methodId, args...);
  }
  else {
    const uint32_t handle = pState->handle;
    void* buffer = GetMessageBufferOnTls();
    pIn = Message::SetupHeader(buffer, static_cast<uint32_t>(Type), 0);
    return Finish<Message>(handle, buffer, pIn, methodId, args...);
  }
}

template <detail::MessageType Type>
template <typename Message, typename... Parameters>
Result Hipc2ProxyKindBase<Type>::Finish(uint32_t handle, void* buffer,
  cmif::client::detail::CmifInHeader* pIn, int methodId,
  Parameters... args) {
  using namespace cmif::client::detail;

  pIn->magic = CmifInHeaderMagic;
  pIn->version = 1;
  pIn->methodId = methodId;
  pIn->token = 0;
  char* inData = reinterpret_cast<char*>(pIn + 1);
  memset(inData, 0, Message::Layout::InRawSize);
  Message::WriteArguments(inData,
    std::index_sequence_for<Parameters...>(), args...);
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
    std::index_sequence_for<Parameters...>(), args...);
  Message::ReadHandles(reader, std::index_sequence_for<Parameters...>(),
    args...);
  return result;
}

}

namespace nn::sf::hipc::client {

class HipcClientSessionAllocator {
public:
  virtual uint32_t AllocateSession() = 0;
  virtual void DeallocateSession(uint32_t handle) = 0;

  uint16_t pointerBufferSize;
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

  // The out objects are proxies created by the caller, they get the object
  // ids of the reply or are released when the server returned none.
  template <bool HasProcessId, int ObjectCount, typename... Arguments>
  [[gnu::noinline]] static Result ProcessWithObjects(
    const ProxyKindState* pState,
    SharedPointer<IServiceObject>* const* ppTargets,
    typename Arguments::Parameter... args, int methodId,
    detail::CmifProxyObject** ppObjects);
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
  constexpr uint32_t type = static_cast<uint32_t>(
    hipc::detail::MessageType::CmifRequestWithContext);
  void* buffer;
  CmifDomainInHeader* pDomain;
  if constexpr (Message::BufferCount > 0) {
    const size_t pointerBufferSize = pSessionAllocator->pointerBufferSize;
    buffer = hipc::GetMessageBufferOnTls();
    CmifInHeader* pRaw;
    const Result setup = Message::SetupBufferMessage(&pRaw, buffer, type,
      sizeof(CmifDomainInHeader), pointerBufferSize, args...);
    if (setup.IsFailure()) {
      pSessionAllocator->DeallocateSession(handle);
      return setup;
    }
    pDomain = reinterpret_cast<CmifDomainInHeader*>(pRaw);
  }
  else {
    buffer = hipc::GetMessageBufferOnTls();
    pDomain = reinterpret_cast<CmifDomainInHeader*>(Message::SetupHeader(
      buffer, type, sizeof(CmifDomainInHeader) / 4));
  }
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
        Message::ReadHandles(reader, std::index_sequence_for<Arguments...>(),
          args...);
      }
    }
  }

  pSessionAllocator->DeallocateSession(handle);
  return result;
}

template <typename Base>
template <bool HasProcessId, int ObjectCount, typename... Arguments>
Result CmifDomainProxyKind<Base>::ProcessWithObjects(
  const ProxyKindState* pState,
  SharedPointer<IServiceObject>* const* ppTargets,
  typename Arguments::Parameter... args, int methodId,
  detail::CmifProxyObject** ppObjects) {
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

  uint32_t objectIds[ObjectCount] = {};
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
        const char* outData = reinterpret_cast<const char*>(pOut + 1);
        Message::ReadArguments(outData,
          std::index_sequence_for<Arguments...>(), args...);
        memcpy(objectIds, outData + AlignUp(Message::Layout::OutRawSize, 4),
          sizeof(objectIds));
      }
    }
  }
  pSessionAllocator->DeallocateSession(handle);
  if (result.IsFailure()) {
    return result;
  }

  for (int i = 0; i < ObjectCount; i++) {
    CmifProxyObject* pObject = ppObjects[i];
    if (objectIds[i] != 0) {
      ProxyKindState* pObjectState = static_cast<ProxyKindState*>(
        pObject->GetCmifBaseObject()->GetProxyKindState());
      pObjectState->pSessionAllocator = pSessionAllocator;
      pObjectState->objectId = objectIds[i];
      pObjectState->isOwner = true;
    }
    else {
      ppObjects[i] = nullptr;
      if (pObject != nullptr) {
        pObject->Release();
      }
    }
    SharedPointer<IServiceObject> object(ppObjects[i], false);
    ppObjects[i] = nullptr;
    object.Swap(*ppTargets[i]);
  }
  return result;
}

}
