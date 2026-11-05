#include <stdio.h>
#include <string.h>

#include "nn/ssl/detail/ssl_api_base.hpp"
#include "nn/ssl/detail/ssl_service.hpp"
#include "nn/ssl/ssl_result.hpp"
#include "nn/ssl/ssl_types.hpp"

namespace nn::ssl {

namespace {

constexpr uint32_t DefaultConcurrencyLimit = 2;
constexpr size_t LibraryHeapSize = 0x2000;
constexpr uint32_t PaddingModeCount = 5;

using Privilege = detail::ServiceSession::Privilege;

char g_LibraryHeap[LibraryHeapSize];

class SslApi : public detail::SslApiBase {
 public:
  Result Initialize() override {
    return InitializeForUser(DefaultConcurrencyLimit);
  }

  Result Finalize() override {
    Result result = SslApiBase::Finalize();
    if (result.IsFailure()) {
      uint32_t value = result.GetInnerValueForDebug();
      if (value == ResultLibraryNotInitialized().value) {
        return result;
      }

      if (value == ResultLibraryStillReferenced().value) {
        return Result{};
      }
    }

    if (!detail::ServiceSession::IsInitialized()) {
      return ResultLibraryNotInitialized();
    }

    detail::ServiceSession::Finalize();
    detail::SslMemoryManager::Finalize();
    return result;
  }

  Result InitializeForUser(uint32_t concurrencyLimit) {
    if (SslApiBase::Initialize().GetInnerValueForDebug() ==
      ResultLibraryAlreadyInitialized().value) {
      return ResultLibraryAlreadyInitialized();
    }

    Result result =
      detail::SslMemoryManager::Initialize(g_LibraryHeap, LibraryHeapSize);
    if (result.IsFailure()) {
      Finalize();
      return result;
    }

    // The system service is preferred and the user one is the fallback.
    if (detail::ServiceSession::Initialize(concurrencyLimit,
      Privilege::SystemOrUser).IsSuccess()) {
      return Result{};
    }

    result = detail::ServiceSession::Initialize(concurrencyLimit,
      Privilege::User);
    if (result.IsFailure()) {
      Finalize();
    }

    return result;
  }

  Result InitializeForSystem(uint32_t concurrencyLimit) {
    if (SslApiBase::Initialize().GetInnerValueForDebug() ==
      ResultLibraryAlreadyInitialized().value) {
      return ResultLibraryAlreadyInitialized();
    }

    Result result =
      detail::SslMemoryManager::Initialize(g_LibraryHeap, LibraryHeapSize);
    if (result.IsFailure()) {
      Finalize();
      return result;
    }

    result = detail::ServiceSession::Initialize(concurrencyLimit,
      Privilege::System);
    if (result.IsFailure()) {
      Finalize();
    }

    return result;
  }
};

SslApi g_SslApi;

}

Result Initialize() {
  return g_SslApi.Initialize();
}

Result Initialize(uint32_t concurrencyLimit) {
  return g_SslApi.InitializeForUser(concurrencyLimit);
}

Result InitializeForSystem() {
  return g_SslApi.InitializeForSystem(DefaultConcurrencyLimit);
}

Result InitializeForSystem(uint32_t concurrencyLimit) {
  return g_SslApi.InitializeForSystem(concurrencyLimit);
}

Result Finalize() {
  return g_SslApi.Finalize();
}

Result GetSslResultFromValue(Result* pOutValue, const char* value,
  uint32_t valueSize) {
  return detail::SslApiBase::GetSslResultFromValue(pOutValue, value,
    valueSize);
}

Result SetThreadCoreMask(uint64_t mask) {
  if (!detail::ServiceSession::IsInitialized()) {
    return ResultLibraryNotInitialized();
  }

  if (detail::ServiceSession::IsInitializedForSystem()) {
    auto pService = detail::ServiceSession::GetServiceSessionForSystem();
    if (pService != nullptr && pService->Get() != nullptr) {
      return (*pService)->SetThreadCoreMask(mask);
    }
  }

  return ResultNoSystemPrivilege();
}

Result GetThreadCoreMask(uint64_t* pOutValue) {
  if (!detail::ServiceSession::IsInitialized()) {
    return ResultLibraryNotInitialized();
  }

  if (!detail::ServiceSession::IsInitializedForSystem()) {
    return ResultNoSystemPrivilege();
  }

  if (pOutValue == nullptr) {
    return ResultInvalidPointer();
  }

  auto pService = detail::ServiceSession::GetServiceSessionForSystem();
  if (pService == nullptr || pService->Get() == nullptr) {
    return ResultNoSystemPrivilege();
  }

  return (*pService)->GetThreadCoreMask(nn::sf::Out<uint64_t>(pOutValue));
}

Result VerifySignature(PaddingMode mode, const char* data, size_t dataSize,
  const char* signature, size_t signatureSize, const char* key,
  size_t keySize) {
  if (!detail::ServiceSession::IsInitialized()) {
    return ResultLibraryNotInitialized();
  }

  if (!detail::ServiceSession::IsInitializedForSystem()) {
    return ResultNoSystemPrivilege();
  }

  if (data == nullptr || signature == nullptr || key == nullptr) {
    return ResultInvalidPointer();
  }

  if (static_cast<uint32_t>(mode) >= PaddingModeCount) {
    return ResultInvalidArgument();
  }

  auto pService = detail::ServiceSession::GetServiceSessionForSystem();
  if (pService == nullptr || pService->Get() == nullptr) {
    return ResultNoSystemPrivilege();
  }

  return (*pService)->VerifySignature(mode,
    nn::sf::InBuffer(data, dataSize),
    nn::sf::InBuffer(signature, signatureSize),
    nn::sf::InBuffer(key, keySize));
}

Result SetDebugOption(const void* value, uint32_t valueSize,
  DebugOption option) {
  static_cast<void>(valueSize);
  static_cast<void>(option);
  if (!detail::ServiceSession::IsInitialized()) {
    return ResultLibraryNotInitialized();
  }

  if (value == nullptr) {
    return ResultInvalidPointer();
  }

  return ResultNotImplemented();
}

Result GetDebugOption(void* pOutValue, uint32_t valueSize,
  DebugOption option) {
  if (!detail::ServiceSession::IsInitialized()) {
    return ResultLibraryNotInitialized();
  }

  if (pOutValue == nullptr) {
    return ResultInvalidPointer();
  }

  auto pService = detail::ServiceSession::GetServiceSession();
  if (pService == nullptr || pService->Get() == nullptr) {
    return ResultLibraryNotInitialized();
  }

  return (*pService)->GetDebugOption(
    nn::sf::OutBuffer(pOutValue, valueSize), option);
}

Result FlushSessionCache(uint32_t* pOutCount, const char* hostName,
  uint32_t hostNameSize, FlushSessionCacheOptionType option) {
  uint32_t count = 0;
  Result result;
  nn::sf::SharedPointer<sf::ISslService>* pService = nullptr;
  if (!detail::ServiceSession::IsInitialized() ||
    (pService = detail::ServiceSession::GetServiceSession()) == nullptr ||
    pService->Get() == nullptr) {
    result = ResultLibraryNotInitialized();
  }
  else if (option == FlushSessionCacheOptionType::AllHosts) {
    if (hostName == nullptr && hostNameSize == 0) {
      result = (*pService)->FlushSessionCache(nn::sf::Out<uint32_t>(&count),
        nn::sf::InBuffer(nullptr, 0), option);
    }
    else {
      result = ResultInvalidArgument();
    }
  }
  else if (option != FlushSessionCacheOptionType::SingleHost) {
    result = ResultInvalidFlushOption();
  }
  else if (hostName == nullptr) {
    result = ResultInvalidPointer();
  }
  else {
    size_t length = strnlen(hostName, hostNameSize);
    if (length == 0) {
      result = ResultInvalidArgument();
    }
    else {
      result = (*pService)->FlushSessionCache(nn::sf::Out<uint32_t>(&count),
        nn::sf::InBuffer(hostName, length + 1), option);
    }
  }

  if (pOutCount != nullptr) {
    *pOutCount = result.IsSuccess() ? count : 0;
  }

  return result;
}

Result ClearTls12FallbackFlag() {
  if (detail::ServiceSession::IsInitialized()) {
    auto pService = detail::ServiceSession::GetServiceSession();
    if (pService != nullptr && pService->Get() != nullptr) {
      return (*pService)->ClearTls12FallbackFlag();
    }
  }

  return ResultLibraryNotInitialized();
}

Debug::HeapTrackPoint::HeapTrackPoint() {
  snprintf(name, sizeof(name), "%lx", reinterpret_cast<uintptr_t>(this));
  isStarted = false;
}

Result Debug::Ioctl(Output* pOutput, Input* pInput, IoctlCommand command) {
  auto pService = detail::ServiceSession::GetServiceSession();
  if (pService == nullptr || pService->Get() == nullptr) {
    return ResultLibraryNotInitialized();
  }

  // Missing buffers are replaced by one byte placeholders.
  char outputPlaceholder;
  char inputPlaceholder;
  char* output = &outputPlaceholder;
  uint64_t outputSize = 1;
  if (pOutput != nullptr) {
    if (pOutput->pBuffer == nullptr) {
      return ResultInvalidPointer();
    }

    if (pOutput->bufferSize == 0) {
      return ResultBufferTooShort();
    }

    output = pOutput->pBuffer;
    outputSize = pOutput->bufferSize;
  }

  char* input = &inputPlaceholder;
  uint64_t inputSize = 1;
  if (pInput != nullptr) {
    if (pInput->pBuffer == nullptr) {
      return ResultInvalidPointer();
    }

    if (pInput->bufferSize == 0) {
      return ResultBufferTooShort();
    }

    input = pInput->pBuffer;
    inputSize = pInput->bufferSize;
  }

  outputPlaceholder = 0;
  inputPlaceholder = 0;
  return (*pService)->DebugIoctl(nn::sf::OutBuffer(output, outputSize),
    nn::sf::InBuffer(input, inputSize), command);
}

}
