#include <errno.h>
#include <string.h>

#include "nn/os/sdk_mutex.hpp"
#include "nn/socket/detail/socket_api.hpp"
#include "nn/socket/resolver/resolver_alloc_tracker.hpp"
#include "nn/socket/resolver/resolver_client.hpp"
#include "nn/socket/resolver/resolver_interfaces.hpp"
#include "nn/socket/resolver/serializer/dns_serializer.hpp"
#include "nn/socket/socket_api.hpp"

namespace nn::socket::resolver {

namespace {

constexpr Result ResultAlreadyInitialized = {0x81b};
// Result value of an invalid argument, returned as a plain integer.
constexpr int ErrorInvalidArgument = 0xe03;

constexpr Errno ErrnoTryAgain = Errno(11);
constexpr Errno ErrnoOutOfMemory = Errno(12);
constexpr Errno ErrnoInvalid = Errno(22);
constexpr Errno ErrnoNoSpace = Errno(28);

constexpr int AiErrorAgain = 2;
constexpr int AiErrorFail = 4;
constexpr int AiErrorMemory = 6;
constexpr int AiErrorNoName = 8;
constexpr int AiErrorSystem = 11;
constexpr int AiErrorOverflow = 14;

constexpr int HostErrorInternal = -1;
constexpr int HostErrorTryAgain = 2;

constexpr uint32_t OptionKeyLocalFirst = 70000;
constexpr uint32_t OptionKeyLocalLast = 70007;
constexpr uint32_t OptionKeyRandomId = 10001;
constexpr size_t OptionValueSizeMax = 279;
constexpr size_t DnsAddressSize = 28;

const char ErrorStringNotAvailable[] = "Error string is not available";
const char ErrorStringBusy[] = "System busy, try again";

enum BufferSizeIndex {
  BufferSizeIndex_HostEntByName,
  BufferSizeIndex_HostEntByAddr,
  BufferSizeIndex_HostErrorString,
  BufferSizeIndex_GaiErrorString,
  BufferSizeIndex_AddrInfo,
  BufferSizeIndex_AddrInfoHints,
  BufferSizeIndex_Count,
};

// The buffer sizes are the local options 70001 to 70006.
struct ClientState {
  os::SdkMutexType mutex;
  bool isInitialized;
  uint32_t cancelHandle;
  size_t bufferSizes[BufferSizeIndex_Count];
};

ClientState g_ClientState;

inline size_t GetBufferSize(BufferSizeIndex index) {
  g_ClientState.mutex.Lock();
  const size_t size = g_ClientState.bufferSizes[index];
  g_ClientState.mutex.Unlock();
  return size;
}

}

Result InitializeClient(uint32_t cancelHandle) {
  g_ClientState.mutex.Lock();
  Result result;
  if (g_ClientState.isInitialized) {
    result = ResultAlreadyInitialized;
  }
  else {
    result = client::g_AllocTracker.Initialize();
    if (result.IsSuccess()) {
      RefCountHelperInitialize();
      g_ClientState.bufferSizes[BufferSizeIndex_AddrInfoHints] = 1024;
      g_ClientState.cancelHandle = cancelHandle;
      g_ClientState.bufferSizes[BufferSizeIndex_AddrInfo] = 4096;
      g_ClientState.bufferSizes[BufferSizeIndex_GaiErrorString] = 128;
      g_ClientState.bufferSizes[BufferSizeIndex_HostErrorString] = 128;
      g_ClientState.bufferSizes[BufferSizeIndex_HostEntByAddr] = 512;
      g_ClientState.bufferSizes[BufferSizeIndex_HostEntByName] = 512;
      g_ClientState.isInitialized = true;
    }
  }
  g_ClientState.mutex.Unlock();
  return result;
}

Result FinalizeClient() {
  g_ClientState.mutex.Lock();
  Result result;
  if (g_ClientState.isInitialized == true) {
    RefCountHelperFinalize();
    client::g_AllocTracker.Finalize();
    result = Result{0};
    g_ClientState.isInitialized = false;
  }
  else {
    result = ResultAlreadyInitialized;
  }
  g_ClientState.mutex.Unlock();
  return result;
}

const char* GetHostStringError(uint32_t error) {
  ::nn::sf::SharedPointer<IResolver> resolver;
  if (!IncrementSocketIfNeeded()) {
    return ErrorStringNotAvailable;
  }

  const char* string;
  const size_t size = GetBufferSize(BufferSizeIndex_HostErrorString);
  if (size == 0) {
    SetLastError(ErrnoNoSpace);
    string = ErrorStringNotAvailable;
  }
  else if (CreateResolverByHipc(resolver).IsFailure()) {
    SetLastError(ErrnoTryAgain);
    string = ErrorStringBusy;
  }
  else {
    uint8_t* buffer = static_cast<uint8_t*>(detail::Calloc(1, size));
    if (buffer == nullptr) {
      string = ErrorStringNotAvailable;
    }
    else {
      string = ErrorStringNotAvailable;
      if (resolver->GetHostStringErrorRequest(error,
        ::nn::sf::OutBuffer(buffer, size)).IsSuccess()) {
        string = client::g_AllocTracker.Locals()->SetHostErrorStringFromBuffer(
          buffer, size);
        if (string == nullptr) {
          SetLastError(ErrnoOutOfMemory);
          string = ErrorStringNotAvailable;
        }
      }
      detail::Free(buffer);
    }
  }
  resolver.Reset();
  DecrementSocketAndSignalIfNeeded();
  return string;
}

int ResolverGetOption(ResolverOption* pOutOption, ResolverOptionKey key) {
  if (pOutOption == nullptr) {
    return -1;
  }

  const uint32_t value = static_cast<uint32_t>(key);
  if (value >= OptionKeyLocalFirst && value <= OptionKeyLocalLast) {
    if (value == OptionKeyLocalLast || value == OptionKeyLocalFirst) {
      errno = 22;
      return -1;
    }
    const uint32_t index = value - (OptionKeyLocalFirst + 1);
    pOutOption->key = key;
    pOutOption->type = ResolverOptionType::Unsigned64;
    pOutOption->size = sizeof(uint64_t);
    pOutOption->data.unsigned64Value = 0;
    g_ClientState.mutex.Lock();
    pOutOption->data.unsigned64Value = g_ClientState.bufferSizes[index];
    g_ClientState.mutex.Unlock();
    return 0;
  }

  if (value == OptionKeyRandomId) {
    CreateRandomId(pOutOption->data.integerValue);
    pOutOption->size = sizeof(int);
    return 0;
  }

  ::nn::sf::SharedPointer<IResolver> resolver;
  serializer::DNSSerializer serializer;
  int result = -1;
  uint8_t optionValue[OptionValueSizeMax];
  memset(optionValue, 0, sizeof(optionValue));
  uint32_t outSize = 0;
  const size_t size = serializer.SizeOf(*pOutOption);
  uint8_t* buffer = static_cast<uint8_t*>(detail::Calloc(1, size));
  if (buffer == nullptr) {
    SetLastError(ErrnoTryAgain);
    resolver.Reset();
    DecrementSocketAndSignalIfNeeded();
    return result;
  }

  if (serializer.ToBuffer(buffer, size, *pOutOption) == -1 ||
    !IncrementSocketIfNeeded()) {
    SetLastError(ErrnoInvalid);
  }
  else if (CreateResolverByHipc(resolver).IsFailure()) {
    SetLastError(ErrnoTryAgain);
  }
  else if (resolver->ResolverGetOptionRequest(0, 1, value,
    ::nn::sf::InBuffer(buffer, size), ::nn::sf::OutBuffer(optionValue, sizeof(optionValue)),
    ::nn::sf::Out<uint32_t>(&outSize), ::nn::sf::Out<int>(&result),
    ::nn::sf::Out<int>(&errno)).IsFailure()) {
    result = -1;
  }
  else if (result != -1 && outSize != 0) {
    if (pOutOption->type == ResolverOptionType::Pointer) {
      size_t capacity = pOutOption->size;
      char* destination = const_cast<char*>(pOutOption->data.pointerValue);
      if (serializer.FromBuffer(*pOutOption, optionValue, outSize) == -1) {
        result = -1;
      }
      else if (destination != nullptr) {
        if (capacity >= pOutOption->size) {
          capacity = pOutOption->size;
        }
        memcpy(destination, pOutOption->data.pointerValue, capacity);
        pOutOption->size = capacity;
        pOutOption->data.pointerValue = destination;
      }
    }
    else if (serializer.FromBuffer(*pOutOption, optionValue, outSize) == -1) {
      result = -1;
    }
  }
  detail::Free(buffer);
  resolver.Reset();
  DecrementSocketAndSignalIfNeeded();
  return result;
}

const char* GetGaiStringError(uint32_t error) {
  ::nn::sf::SharedPointer<IResolver> resolver;
  if (!IncrementSocketIfNeeded()) {
    return ErrorStringNotAvailable;
  }

  const char* string;
  const size_t size = GetBufferSize(BufferSizeIndex_GaiErrorString);
  uint8_t* buffer;
  if (size == 0) {
    SetLastError(ErrnoNoSpace);
    string = ErrorStringNotAvailable;
  }
  else if (CreateResolverByHipc(resolver).IsFailure() ||
    (buffer = static_cast<uint8_t*>(detail::Calloc(1, size))) == nullptr) {
    SetLastError(ErrnoTryAgain);
    string = ErrorStringBusy;
  }
  else {
    string = ErrorStringNotAvailable;
    if (resolver->GetGaiStringErrorRequest(error,
      ::nn::sf::OutBuffer(buffer, size)).IsSuccess()) {
      string = client::g_AllocTracker.Locals()->SetAddrInfoErrorStringFromBuffer(
        buffer, size);
      if (string == nullptr) {
        SetLastError(ErrnoOutOfMemory);
        string = ErrorStringNotAvailable;
      }
    }
    detail::Free(buffer);
  }
  resolver.Reset();
  DecrementSocketAndSignalIfNeeded();
  return string;
}

int ResolverSetOption(const ResolverOption& option) {
  const uint32_t index =
    static_cast<uint32_t>(option.key) - (OptionKeyLocalFirst + 1);
  if (index < BufferSizeIndex_Count &&
    option.type == ResolverOptionType::Unsigned64 &&
    option.size == sizeof(uint64_t)) {
    g_ClientState.mutex.Lock();
    g_ClientState.bufferSizes[index] = option.data.unsigned64Value;
    g_ClientState.mutex.Unlock();
    return 0;
  }

  ::nn::sf::SharedPointer<IResolver> resolver;
  serializer::DNSSerializer serializer;
  int result = -1;
  const size_t size = serializer.SizeOf(option);
  uint8_t* buffer = static_cast<uint8_t*>(detail::Calloc(1, size));
  if (buffer == nullptr) {
    SetLastError(ErrnoOutOfMemory);
    resolver.Reset();
    DecrementSocketAndSignalIfNeeded();
    return result;
  }

  if (!IncrementSocketIfNeeded()) {
    SetLastError(ErrnoInvalid);
  }
  else if (serializer.ToBuffer(buffer, size, option) != -1) {
    if (CreateResolverByHipc(resolver).IsFailure()) {
      SetLastError(ErrnoTryAgain);
    }
    else if (resolver->ResolverSetOptionRequest(0, 1,
      ::nn::sf::InBuffer(buffer, size), ::nn::sf::Out<int>(&result),
      ::nn::sf::Out<int>(&errno)).IsFailure()) {
      result = -1;
    }
  }
  detail::Free(buffer);
  resolver.Reset();
  DecrementSocketAndSignalIfNeeded();
  return result;
}

int SetSupportedProtocols(uint32_t protocols) {
  if ((protocols & ~2u) != 1) {
    return ErrorInvalidArgument;
  }
  ::nn::sf::SharedPointer<IPrivateResolver> resolver;
  Result result = CreatePrivateResolverByHipc(resolver);
  if (result.IsFailure()) {
    return result.value;
  }
  result = resolver->SetSupportedProtocols(protocols);
  resolver.Reset();
  return result.value;
}

int GetSupportedProtocols(uint32_t* pOutProtocols) {
  if (pOutProtocols == nullptr) {
    return ErrorInvalidArgument;
  }
  *pOutProtocols = 0;
  ::nn::sf::SharedPointer<IPrivateResolver> resolver;
  Result result = CreatePrivateResolverByHipc(resolver);
  if (result.IsFailure()) {
    return result.value;
  }
  result =
    resolver->GetSupportedProtocols(::nn::sf::Out<uint32_t>(pOutProtocols));
  resolver.Reset();
  return result.value;
}

int ResolverSetDnsAddressesRequest(const DnsAddress* addresses,
  uint32_t count) {
  if (addresses == nullptr) {
    return ErrorInvalidArgument;
  }
  ::nn::sf::SharedPointer<IPrivateResolver> resolver;
  Result result = CreatePrivateResolverByHipc(resolver);
  if (result.IsSuccess()) {
    result = resolver->ResolverSetDnsAddressesRequest(
      ::nn::sf::InBuffer(addresses, DnsAddressSize * count), count);
    resolver.Reset();
  }
  return result.value;
}

namespace client {

namespace {

// The service leaves the length byte of returned socket addresses unset.
inline void FixAddressLengths(AddrInfo* pInfo) {
  for (; pInfo != nullptr; pInfo = pInfo->ai_next) {
    if (pInfo->ai_addr != nullptr) {
      *reinterpret_cast<uint8_t*>(pInfo->ai_addr) = pInfo->ai_addrlen;
    }
  }
}

inline void FixAddressLengths(addrinfo*) {}

inline HostEnt** GetEntrySlot(ThreadLocals* pLocals, HostEnt*) {
  return &pLocals->m_pHostEntry;
}

inline hostent** GetEntrySlot(ThreadLocals* pLocals, hostent*) {
  return &pLocals->m_pHostEntryOld;
}

template <typename HostEntType, typename FamilyType>
[[gnu::noinline]] HostEntType* GetHostByAddrImpl(const void* address,
  uint32_t length, FamilyType family, const ResolverOption* options,
  size_t optionCount) {
  ::nn::sf::SharedPointer<IResolver> resolver;
  HostEntType* pHostEnt = nullptr;
  ThreadLocals* pLocals = g_AllocTracker.Locals();
  if (!IncrementSocketIfNeeded()) {
    return nullptr;
  }

  const size_t size = GetBufferSize(BufferSizeIndex_HostEntByAddr);
  if (size == 0) {
    pLocals->m_HostErrno = HostErrorInternal;
    SetLastError(ErrnoNoSpace);
  }
  else if (address == nullptr || length == 0) {
    pLocals->m_HostErrno = HostErrorInternal;
    SetLastError(ErrnoInvalid);
  }
  else {
    serializer::DNSSerializer serializer;
    uint32_t outSize = 0;
    size_t optionsSize = 0;
    uint8_t* optionsBuffer = nullptr;
    if (CreateResolverByHipc(resolver).IsFailure() ||
      (optionsSize = serializer.SizeOf(options, optionCount),
        optionsBuffer = static_cast<uint8_t*>(
          detail::Calloc(1, optionsSize))) == nullptr) {
      pLocals->m_HostErrno = HostErrorTryAgain;
      SetLastError(ErrnoTryAgain);
    }
    else {
      serializer.ToBuffer(optionsBuffer, optionsSize, options, optionCount);
      uint8_t* buffer = static_cast<uint8_t*>(detail::Calloc(1, size));
      if (buffer == nullptr) {
        pLocals->m_HostErrno = HostErrorInternal;
        SetLastError(ErrnoOutOfMemory);
      }
      else {
        int hostError = 0;
        ClearHostEnt(GetEntrySlot(pLocals, pHostEnt));
        const Result result = resolver->GetHostByAddrRequestWithOptions(0,
          ::nn::sf::InBuffer(address, length), length,
          static_cast<uint32_t>(family),
          ::nn::sf::OutBuffer(buffer, size), ::nn::sf::Out<uint32_t>(&outSize),
          g_ClientState.cancelHandle,
          ::nn::sf::InBuffer(optionsBuffer, optionsSize), optionCount,
          ::nn::sf::Out<int>(&hostError), ::nn::sf::Out<int>(&errno));
        pLocals->m_HostErrno = hostError;
        if (result.IsSuccess() && outSize != 0) {
          pHostEnt = static_cast<HostEntType*>(
            detail::Calloc(1, sizeof(HostEntType)));
          if (pHostEnt == nullptr) {
            pLocals->m_HostErrno = HostErrorInternal;
            SetLastError(ErrnoOutOfMemory);
          }
          else {
            if (serializer.FromBuffer(*pHostEnt, buffer, outSize) == -1) {
              pLocals->m_HostErrno = HostErrorInternal;
              ClearHostEnt(&pHostEnt);
            }
            *GetEntrySlot(pLocals, pHostEnt) = pHostEnt;
          }
        }
        detail::Free(buffer);
      }
      detail::Free(optionsBuffer);
    }
  }
  resolver.Reset();
  DecrementSocketAndSignalIfNeeded();
  return pHostEnt;
}

template <typename AddrInfoType>
[[gnu::noinline]] int GetAddrInfoImpl(const char* node, const char* service,
  const AddrInfoType* hints, AddrInfoType** pOutResult,
  const ResolverOption* options, size_t optionCount) {
  ::nn::sf::SharedPointer<IResolver> resolver;
  int error = AiErrorFail;
  ThreadLocals* pLocals = g_AllocTracker.Locals();
  if (!IncrementSocketIfNeeded()) {
    return AiErrorSystem;
  }

  size_t resultSize;
  size_t hintsSize;
  if (node == nullptr && service == nullptr) {
    error = AiErrorNoName;
  }
  else if (pOutResult == nullptr) {
    error = AiErrorSystem;
    SetLastError(ErrnoInvalid);
  }
  else if (CreateResolverByHipc(resolver).IsFailure()) {
    error = AiErrorAgain;
    SetLastError(ErrnoTryAgain);
  }
  else if ((resultSize = GetBufferSize(BufferSizeIndex_AddrInfo)) == 0 ||
    (hintsSize = GetBufferSize(BufferSizeIndex_AddrInfoHints)) == 0) {
    pLocals->m_HostErrno = HostErrorInternal;
    SetLastError(ErrnoNoSpace);
  }
  else {
    *pOutResult = nullptr;
    serializer::DNSSerializer serializer;
    const ::nn::sf::InBuffer nodeBuffer(node,
      node != nullptr ? strlen(node) + 1 : 0);
    const ::nn::sf::InBuffer serviceBuffer(service,
      service != nullptr ? strlen(service) + 1 : 0);
    const size_t optionsSize = serializer.SizeOf(options, optionCount);
    uint8_t* optionsBuffer =
      static_cast<uint8_t*>(detail::Calloc(1, optionsSize));
    if (optionsBuffer != nullptr) {
      serializer.ToBuffer(optionsBuffer, optionsSize, options, optionCount);
      uint8_t* hintsBuffer =
        static_cast<uint8_t*>(detail::Calloc(1, hintsSize));
      if (hintsBuffer != nullptr) {
        const ::nn::sf::InBuffer noHints(nullptr, 0);
        uint8_t* resultBuffer =
          static_cast<uint8_t*>(detail::Calloc(1, resultSize));
        if (resultBuffer == nullptr) {
          pLocals->m_HostErrno = HostErrorInternal;
          SetLastError(ErrnoOutOfMemory);
          error = AiErrorMemory;
        }
        else {
          uint32_t outSize = 0;
          int hostError = 0;
          if (hints != nullptr &&
            serializer.ToBuffer(hintsBuffer, hintsSize, *hints) == -1) {
            error = AiErrorOverflow;
          }
          else if ((*pOutResult = static_cast<AddrInfoType*>(
            detail::Calloc(1, sizeof(AddrInfoType)))) == nullptr) {
            pLocals->m_HostErrno = HostErrorInternal;
            SetLastError(ErrnoOutOfMemory);
            error = AiErrorMemory;
          }
          else {
            const ::nn::sf::InBuffer hintsIn(hintsBuffer, hintsSize);
            const Result result = resolver->GetAddrInfoRequestWithOptions(0,
              nodeBuffer, serviceBuffer, hints != nullptr ? hintsIn : noHints,
              ::nn::sf::OutBuffer(resultBuffer, resultSize),
              ::nn::sf::Out<uint32_t>(&outSize), ::nn::sf::Out<int>(&error),
              g_ClientState.cancelHandle,
              ::nn::sf::InBuffer(optionsBuffer, optionsSize), optionCount,
              ::nn::sf::Out<int>(&hostError), ::nn::sf::Out<int>(&errno));
            pLocals->m_HostErrno = hostError;
            bool isFreed = true;
            if (result.IsSuccess() && error == 0 && outSize != 0) {
              if (serializer.FromBuffer(**pOutResult, resultBuffer,
                outSize) != -1) {
                FixAddressLengths(*pOutResult);
                isFreed = false;
              }
              else {
                pLocals->m_HostErrno = HostErrorInternal;
                if (GetLastError() == ErrnoOutOfMemory) {
                  error = AiErrorMemory;
                }
                isFreed = *pOutResult != nullptr;
              }
            }
            if (isFreed) {
              FreeAddrInfo(*pOutResult);
              *pOutResult = nullptr;
            }
          }
          detail::Free(resultBuffer);
        }
        detail::Free(hintsBuffer);
      }
      detail::Free(optionsBuffer);
    }
  }
  resolver.Reset();
  DecrementSocketAndSignalIfNeeded();
  return error;
}

[[gnu::noinline]] int GetNameInfoImpl(const void* address,
  uint32_t addressLength, char* host, size_t hostLength, char* service,
  size_t serviceLength, uint32_t flags, const ResolverOption* options,
  size_t optionCount) {
  ::nn::sf::SharedPointer<IResolver> resolver;
  int error = 0;
  if (!IncrementSocketIfNeeded()) {
    return AiErrorSystem;
  }

  if (CreateResolverByHipc(resolver).IsFailure()) {
    error = AiErrorAgain;
    SetLastError(ErrnoTryAgain);
  }
  else if ((address != nullptr || addressLength == 0) &&
    (host != nullptr || hostLength == 0) &&
    (service != nullptr || serviceLength == 0)) {
    serializer::DNSSerializer serializer;
    const ::nn::sf::InBuffer addressBuffer(address, addressLength);
    const ::nn::sf::OutBuffer hostBuffer(host, hostLength);
    const ::nn::sf::OutBuffer serviceBuffer(service, serviceLength);
    const size_t optionsSize = serializer.SizeOf(options, optionCount);
    uint8_t* optionsBuffer =
      static_cast<uint8_t*>(detail::Calloc(1, optionsSize));
    if (optionsBuffer != nullptr) {
      serializer.ToBuffer(optionsBuffer, optionsSize, options, optionCount);
      int hostError = 0;
      resolver->GetNameInfoRequestWithOptions(0, addressBuffer, hostBuffer,
        serviceBuffer, flags, ::nn::sf::Out<int>(&error),
        g_ClientState.cancelHandle, ::nn::sf::InBuffer(optionsBuffer, optionsSize),
        optionCount, ::nn::sf::Out<int>(&hostError), ::nn::sf::Out<int>(&errno));
      g_AllocTracker.Locals()->m_HostErrno = hostError;
      detail::Free(optionsBuffer);
    }
  }
  else {
    error = AiErrorFail;
  }
  resolver.Reset();
  DecrementSocketAndSignalIfNeeded();
  return error;
}

}

}

HostEnt* GetHostEntByAddr(const void* address, uint32_t length,
  Family family, const ResolverOption* options, size_t optionCount) {
  return client::GetHostByAddrImpl<HostEnt>(address, length, family, options,
    optionCount);
}

hostent* GetHostByAddr(const void* address, uint32_t length,
  uint32_t family, const ResolverOption* options, size_t optionCount) {
  return client::GetHostByAddrImpl<hostent>(address, length, family, options,
    optionCount);
}

AiErrno GetAddrInfo(const char* node, const char* service,
  const AddrInfo* hints, AddrInfo** pOutResult,
  const ResolverOption* options, size_t optionCount) {
  return static_cast<AiErrno>(client::GetAddrInfoImpl(node, service, hints,
    pOutResult, options, optionCount));
}

int GetAddrInfo(const char* node, const char* service, const addrinfo* hints,
  addrinfo** pOutResult, const ResolverOption* options, size_t optionCount) {
  return client::GetAddrInfoImpl(node, service, hints, pOutResult, options,
    optionCount);
}

AiErrno GetNameInfo(const SockAddr* address, uint32_t addressLength,
  char* host, size_t hostLength, char* service, size_t serviceLength,
  NameInfoFlag flags, const ResolverOption* options, size_t optionCount) {
  return static_cast<AiErrno>(client::GetNameInfoImpl(address, addressLength,
    host, hostLength, service, serviceLength, static_cast<uint32_t>(flags),
    options, optionCount));
}

int GetNameInfo(const sockaddr* address, uint32_t addressLength, char* host,
  size_t hostLength, char* service, size_t serviceLength, int flags,
  const ResolverOption* options, size_t optionCount) {
  return client::GetNameInfoImpl(address, addressLength, host, hostLength,
    service, serviceLength, flags, options, optionCount);
}

}
