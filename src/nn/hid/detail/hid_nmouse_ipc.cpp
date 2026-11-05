#include <new>

#include "nn/hid/detail/hid_abort.hpp"
#include "nn/hid/detail/hid_applet_resource_holder.hpp"
#include "nn/hid/detail/hid_nmouse_accessor.hpp"
#include "nn/hid/detail/hid_ring_lifo.hpp"
#include "nn/hid/detail/hid_server.hpp"
#include "nn/os/transfer_memory.hpp"

namespace nn::hid::detail {

namespace {

constexpr int32_t NmouseRevision = 1;
constexpr uint32_t NmouseTypeMergeableMask = 0xe;
constexpr uint32_t NmouseTypeJoyLeft = 1u << 1;
constexpr uint32_t NmouseTypeJoyRight = 1u << 2;

NmouseTransferMemoryAccessor& GetNmouseTransferMemoryAccessor() {
  return utility::StaticObject<NmouseTransferMemoryAccessor>::Get();
}

util::BitFlagSet<32, NmouseType> MakeNmouseTypeSet(uint32_t value) {
  util::BitFlagSet<32, NmouseType> types;
  types._storage[0] = value;
  return types;
}

}

Result InitializeNmouse(void* pBuffer, unsigned long size, int width,
  int height, NmousePointerType pointerType) {
  os::TransferMemoryType transferMemory;
  NN_RESULT_DO(os::CreateTransferMemory(&transferMemory, pBuffer, size,
    os::MemoryPermission_ReadOnly));
  const uint32_t handle = os::DetachTransferMemory(&transferMemory);
  os::DestroyTransferMemory(&transferMemory);
  NN_RESULT_DO(GetAppletResourceHolder().SetAppletResourceUserId(
    utility::GetAppletResourceUserId()));
  NN_RESULT_DO(GetAppletResourceHolder().Activate());
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  NN_RESULT_DO(proxy->InitializeNmouse(utility::GetAppletResourceUserId(),
    sf::NativeHandle(handle, true), size, width, height, pointerType,
    NmouseRevision));
  return GetNmouseTransferMemoryAccessor().InitializeTransferMemory(pBuffer);
}

Result FinalizeNmouse() {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  NN_RESULT_DO(proxy->FinalizeNmouse(utility::GetAppletResourceUserId()));
  NN_RESULT_DO(GetNmouseTransferMemoryAccessor().FinalizeTransferMemory());
  return GetAppletResourceHolder().Deactivate();
}

Result SetMergedNmouseSourceTypes(util::BitFlagSet<32, NmouseType> types) {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->SetMergedNmouseSourceTypes(utility::GetAppletResourceUserId(),
    MakeNmouseTypeSet(types._storage[0] & NmouseTypeMergeableMask));
}

Result GetNmouseHandles(int* pOutCount, NmouseHandle* pOutHandles, int count,
  NpadIdType id) {
  if (*pOutCount < count) {
    if (GetNmouseTransferMemoryAccessor().GetNpadNmouseHandle(
      &pOutHandles[*pOutCount], id,
      MakeNmouseTypeSet(NmouseTypeJoyLeft)).IsSuccess()) {
      ++*pOutCount;
    }
    if (*pOutCount < count) {
      if (GetNmouseTransferMemoryAccessor().GetNpadNmouseHandle(
        &pOutHandles[*pOutCount], id,
        MakeNmouseTypeSet(NmouseTypeJoyRight)).IsSuccess()) {
        ++*pOutCount;
      }
    }
  }
  return Result{};
}

Result SetNmouseButtonConfigStandardMouse(
  const NmouseButtonConfigStandardMouse& config) {
  sf::SharedPointer<IHidServer> proxy;
  // The proxy creation result is not checked.
  server::CreateHidServerProxy(&proxy);
  return proxy->SetNmouseButtonConfigStandardMouse(
    utility::GetAppletResourceUserId(), config);
}

Result EnableNmousePointer(NmouseHandle handle, bool isEnabled) {
  NN_RESULT_DO(GetNmouseTransferMemoryAccessor().VerifyValidHandle(handle));
  bool isCurrentlyEnabled = false;
  NN_RESULT_DO(GetNmouseTransferMemoryAccessor().IsEnableNmousePointer(
    &isCurrentlyEnabled, handle));
  if (isCurrentlyEnabled == isEnabled) {
    return Result{};
  }
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->EnableNmousePointer(utility::GetAppletResourceUserId(),
    handle, isEnabled);
}

Result SetNmousePointerPosition(NmouseHandle handle, int x, int y) {
  NN_RESULT_DO(GetNmouseTransferMemoryAccessor().VerifyValidHandle(handle));
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->SetNmousePointerPosition(utility::GetAppletResourceUserId(),
    handle, x, y);
}

Result SetSceneIdForPrivateApp(int sceneId) {
  sf::SharedPointer<IHidServer> proxy;
  // The proxy creation result is not checked.
  server::CreateHidServerProxy(&proxy);
  return proxy->SetSceneIdForPrivateApp(utility::GetAppletResourceUserId(),
    sceneId);
}

Result SetTouchScreenConfiguration(
  const TouchScreenConfigurationForNx& configuration) {
  TouchScreenConfigurationForNx value = {};
  value.mode = configuration.mode;
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->SetTouchScreenConfiguration(
    utility::GetAppletResourceUserId(), value);
}

}
