#include "nn/diag/unexpected_default.hpp"
#include "nn/hid/detail/hid_abort.hpp"
#include "nn/hid/detail/hid_api.hpp"
#include "nn/hid/detail/hid_server.hpp"
#include "nn/os/system_event.hpp"
#include "nn/os/transfer_memory.hpp"

namespace nn::hid::detail {

namespace {

constexpr int PalmaOperationTypeMax = 16;

constexpr uint32_t ResultModuleHid = 202;
constexpr uint32_t ResultModuleSf = 11;

constexpr Result ResultPalmaOperationTimeout = {0x19ccca};
constexpr Result ResultPalmaOperationFailed = {0x19ceca};
constexpr Result ResultPalmaDisallowedConnectionBufferTooSmall = {0x19dcca};

bool IsInRange(Result result, uint32_t module, uint32_t begin, uint32_t end) {
  const uint32_t description = result.value >> 9 & 0x1fff;
  return (result.value & 0x1ff) == module && description >= begin &&
    description < end;
}

bool Includes(Result expected, Result result) {
  return expected.GetInnerValueForDebug() == result.GetInnerValueForDebug();
}

}

Result BindPalmaOperationCompleteEvent(const PalmaConnectionHandle& handle,
  os::SystemEventType* pEvent, os::EventClearMode clearMode) {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  sf::NativeHandle nativeHandle;
  NN_RESULT_DO(proxy->AcquirePalmaOperationCompleteEvent(&nativeHandle,
    handle));
  os::AttachReadableHandleToSystemEvent(pEvent, nativeHandle.GetOsHandle(),
    nativeHandle.IsManaged(), clearMode);
  nativeHandle.Detach();
  return Result{};
}

Result GetPalmaOperationInfo(PalmaOperationInfo* pOutValue,
  const PalmaConnectionHandle& handle) {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  uint64_t type = 0;
  NN_RESULT_DO(proxy->GetPalmaOperationInfo(&type,
    sf::OutBuffer(pOutValue->buffer, sizeof(pOutValue->buffer)), handle));
  const Result result = proxy->GetPalmaOperationResult(handle);
  if (result.IsFailure()) {
    if (Includes(ResultPalmaOperationTimeout, result) ||
      Includes(ResultPalmaOperationFailed, result) ||
      !IsInRange(result, ResultModuleHid, 3300, 3400)) {
      return result;
    }
  }
  pOutValue->result = result;
  if (type > PalmaOperationTypeMax) {
    nn::detail::UnexpectedDefaultImpl();
  }
  pOutValue->type = static_cast<PalmaOperationType>(type);
  return Result{};
}

Result ReadPalmaApplicationSection(const PalmaConnectionHandle& handle,
  int address, unsigned long size) {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->ReadPalmaApplicationSection(handle, address, size);
}

Result WritePalmaApplicationSection(const PalmaConnectionHandle& handle,
  int address, unsigned long size,
  const PalmaApplicationSectionAccessBuffer& buffer) {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->WritePalmaApplicationSection(handle, address, size, buffer);
}

Result WritePalmaActivityEntry(const PalmaConnectionHandle& handle,
  const unsigned short& index, const PalmaActivityEntry* pEntry) {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->WritePalmaActivityEntry(handle, index,
    pEntry->rgbLedPatternIndex, pEntry->waveSet, pEntry->waveIndex);
}

Result WritePalmaRgbLedPatternEntry(const PalmaConnectionHandle& handle,
  const unsigned short& index, const void* pBuffer, unsigned long size) {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->WritePalmaRgbLedPatternEntry(handle, index,
    sf::InBuffer(pBuffer, size));
}

Result WritePalmaWaveEntry(const PalmaConnectionHandle& handle,
  const PalmaWaveSet& waveSet, const unsigned short& index,
  const void* pBuffer, unsigned long bufferSize, unsigned long waveSize) {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  os::TransferMemory transferMemory(const_cast<void*>(pBuffer), bufferSize,
    os::MemoryPermission_ReadOnly);
  sf::NativeHandle nativeHandle(transferMemory.Detach(), true);
  return proxy->WritePalmaWaveEntry(handle, waveSet, index,
    static_cast<sf::NativeHandle&&>(nativeHandle), bufferSize, waveSize);
}

Result SetDisallowedPalmaConnection(const bluetooth::Address* pAddresses,
  int count) {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  const Result result = proxy->SetDisallowedPalmaConnection(
    utility::GetAppletResourceUserId(),
    sf::InArray<bluetooth::Address>(pAddresses, count));
  if (IsInRange(result, ResultModuleSf, 100, 300)) {
    return ResultPalmaDisallowedConnectionBufferTooSmall;
  }
  return result;
}

}
