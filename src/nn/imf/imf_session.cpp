#include <new>

#include "nn/diag/diag_abort.hpp"
#include "nn/imf/detail/imf_session.hpp"
#include "nn/os/transfer_memory.hpp"

namespace nn::imf::detail {

namespace {

constexpr size_t SessionStorageSize = 0x1000;
constexpr size_t TransferMemorySize = 0xf000;
constexpr size_t TransferMemoryAlignment = 0x1000;
constexpr size_t HidStateSetUnitSize = sizeof(HidStateSetUnit);

constexpr Result ResultNullSessionHandle = {0x1202f9};
constexpr Result ResultNullInUseFlag = {0x1208f9};
constexpr Result ResultNullSessionBuffer = {0x1222f9};
constexpr Result ResultSessionBufferTooSmall = {0x1224f9};
constexpr Result ResultMisalignedSessionBuffer = {0x1226f9};
constexpr Result ResultNegativeTextSize = {0x1266f9};
constexpr Result ResultNegativeUserWordCount = {0x12a8f9};
constexpr Result ResultNegativeDictionaryCount = {0x12b8f9};
constexpr Result ResultNullDictionaryData = {0x12baf9};
constexpr Result ResultInvalidDictionarySize = {0x12c6f9};
constexpr Result ResultMisalignedDictionaryData = {0x12c8f9};

ISession* GetSession(const SessionHandle& handle) {
  return handle.pStorage->session.Get();
}

void MarkInUse(const SessionHandle& handle) {
  handle.pStorage->isInUse.store(1, std::memory_order_release);
}

}

Result CreateSession(SessionHandle* pOutHandle, const ServiceId& id,
  void* pBuffer, size_t bufferSize) {
  if (pOutHandle == nullptr) {
    return ResultNullSessionHandle;
  }

  if (pBuffer == nullptr) {
    return ResultNullSessionBuffer;
  }

  if (reinterpret_cast<uintptr_t>(pBuffer) % TransferMemoryAlignment != 0) {
    return ResultMisalignedSessionBuffer;
  }

  if (bufferSize < SessionStorageSize + TransferMemorySize) {
    return ResultSessionBufferTooSmall;
  }

  sf::SharedPointer<IClientService> service;
  auto* pStorage = new (pBuffer) SessionStorage();
  NN_RESULT_DO(CreateClientServiceProxyForIpc(&service));

  os::TransferMemoryType transferMemory = {};
  NN_RESULT_DO(os::CreateTransferMemory(&transferMemory,
    static_cast<char*>(pBuffer) + SessionStorageSize, TransferMemorySize,
    os::MemoryPermission_None));
  const uint32_t transferMemoryHandle =
    os::DetachTransferMemory(&transferMemory);
  os::DestroyTransferMemory(&transferMemory);

  sf::SharedPointer<ISession> session;
  NN_RESULT_DO(service->CreateSession(
    sf::Out<sf::SharedPointer<ISession>>(&session),
    GetAppletResourceUserId(), id,
    sf::NativeHandle(transferMemoryHandle, true), TransferMemorySize));

  pStorage->session.Swap(session);
  pOutHandle->pStorage = pStorage;
  return Result();
}

Result DeleteSession(const SessionHandle& handle) {
  handle.pStorage->session.Reset();
  return Result();
}

Result GetSessionInUseFlag(bool* pOutInUse, const SessionHandle& handle) {
  if (pOutInUse == nullptr) {
    return ResultNullInUseFlag;
  }

  *pOutInUse =
    (handle.pStorage->isInUse.load(std::memory_order_acquire) & 1) != 0;
  return Result();
}

Result ReadMessage(bool* pOutIsRead, Message* pOutMessage,
  const SessionHandle& handle) {
  const Result result = GetSession(handle)->ReadMessage(
    sf::Out<bool>(pOutIsRead), sf::Out<Message>(pOutMessage));

  // The session stays in use until the message queue is drained.
  if (pOutIsRead != nullptr && result.IsSuccess() && !*pOutIsRead) {
    handle.pStorage->isInUse.store(0, std::memory_order_release);
  }

  return result;
}

Result PassHidStateSet(HidStateSetUnit* pOutUnit,
  const SessionHandle& handle, const HidStateSetUnit& unit) {
  MarkInUse(handle);
  return GetSession(handle)->PassHidStateSet(
    sf::OutBuffer(pOutUnit, pOutUnit != nullptr ? HidStateSetUnitSize : 0),
    sf::InBuffer(&unit, HidStateSetUnitSize));
}

Result SetSelection(const SessionHandle& handle, int start, int end) {
  MarkInUse(handle);
  return GetSession(handle)->SetSelection(start, end);
}

Result ReadText(int* pOutSize, char* pOutText, int size,
  const SessionHandle& handle) {
  if (size < 0) {
    return ResultNegativeTextSize;
  }

  return GetSession(handle)->ReadText(sf::Out<int>(pOutSize),
    sf::OutBuffer(pOutText, static_cast<uint32_t>(size)));
}

Result ReadText(int* pOutSize, char* pOutText, int size, int start,
  const SessionHandle& handle) {
  if (size < 0) {
    return ResultNegativeTextSize;
  }

  return GetSession(handle)->ReadTextFrom(sf::Out<int>(pOutSize),
    sf::OutBuffer(pOutText, static_cast<uint32_t>(size)), start);
}

Result WriteText(int* pOutSize, const SessionHandle& handle,
  const char* pText, int size) {
  if (size < 0) {
    return ResultNegativeTextSize;
  }

  MarkInUse(handle);
  return GetSession(handle)->WriteText(sf::Out<int>(pOutSize),
    sf::InBuffer(pText, static_cast<uint32_t>(size)));
}

Result TerminateComposition(const SessionHandle& handle) {
  MarkInUse(handle);
  return GetSession(handle)->TerminateComposition();
}

Result EnableUserWords(const SessionHandle& handle, int count) {
  return GetSession(handle)->EnableUserWords(count);
}

Result DisableUserWords(const SessionHandle& handle) {
  return GetSession(handle)->DisableUserWords();
}

Result SetUserWords(const SessionHandle& handle, const UserWord* pWords,
  int count) {
  if (count < 0) {
    return ResultNegativeUserWordCount;
  }

  return GetSession(handle)->SetUserWords(
    sf::InArray<UserWord>(pWords, static_cast<uint32_t>(count)));
}

Result EnableAdditionalDictionaries(const SessionHandle& handle,
  uint64_t mask) {
  if ((mask >> 32) != 0) {
    return ResultInvalidDictionarySize;
  }

  return GetSession(handle)->EnableAdditionalDictionaries(mask);
}

Result DisableAdditionalDictionaries(const SessionHandle& handle) {
  return GetSession(handle)->DisableAdditionalDictionaries();
}

Result SetAdditionalDictionaries(const SessionHandle& handle,
  const AdditionalDictionary* pDictionaries, int count, const void* pData,
  size_t dataSize) {
  if (count < 0) {
    return ResultNegativeDictionaryCount;
  }

  if (pData == nullptr) {
    return ResultNullDictionaryData;
  }

  if (reinterpret_cast<uintptr_t>(pData) % TransferMemoryAlignment != 0) {
    return ResultMisalignedDictionaryData;
  }

  if ((dataSize >> 32) != 0 || dataSize == 0 ||
    dataSize % TransferMemoryAlignment != 0) {
    return ResultInvalidDictionarySize;
  }

  os::TransferMemoryType transferMemory = {};
  NN_RESULT_DO(os::CreateTransferMemory(&transferMemory,
    const_cast<void*>(pData), dataSize, os::MemoryPermission_ReadOnly));
  const uint32_t transferMemoryHandle =
    os::DetachTransferMemory(&transferMemory);
  os::DestroyTransferMemory(&transferMemory);

  return GetSession(handle)->SetAdditionalDictionaries(
    sf::InArray<AdditionalDictionary>(pDictionaries,
      static_cast<uint32_t>(count)),
    static_cast<uint32_t>(dataSize),
    sf::NativeHandle(transferMemoryHandle, true), true);
}

Result SetAdditionalDictionaries(const SessionHandle& handle,
  const AdditionalDictionary* pDictionaries, int count, uint64_t size,
  uint32_t transferMemoryHandle) {
  if (count < 0) {
    return ResultNegativeDictionaryCount;
  }

  if ((size >> 32) != 0 || size == 0 ||
    size % TransferMemoryAlignment != 0) {
    return ResultInvalidDictionarySize;
  }

  return GetSession(handle)->SetAdditionalDictionaries(
    sf::InArray<AdditionalDictionary>(pDictionaries,
      static_cast<uint32_t>(count)),
    static_cast<uint32_t>(size),
    sf::NativeHandle(transferMemoryHandle, false), false);
}

applet::AppletResourceUserId GetAppletResourceUserId() {
  return applet::GetAppletResourceUserId();
}

}
