#include <algorithm>

#include "nn/hid/detail/hid_abort.hpp"
#include "nn/hid/detail/hid_applet_resource_holder.hpp"
#include "nn/hid/detail/hid_ring_lifo.hpp"
#include "nn/hid/detail/hid_server.hpp"
#include "nn/hid/detail/hid_utility.hpp"
#include "nn/os/transfer_memory.hpp"

namespace nn::hid {

struct JcmsState {
  uint64_t reserved;
  int64_t samplingNumber;
  uint64_t data[2];
};

inline void ConvertState(JcmsState* pOutState, const JcmsState& state) {
  *pOutState = state;
}

}

namespace nn::hid::detail {

Result GetJcmsStates(int* pOutCount, JcmsState* pOutStates, int count,
  const JcmsHandle& handle);

namespace {

constexpr int JcmsLifoCapacity = 17;

}

using JcmsLifo = RingLifo<JcmsState, JcmsLifoCapacity>;

[[gnu::visibility("hidden")]] const JcmsLifo* g_pJcmsLifos;

Result InitializeJcms(void* pBuffer, unsigned long size) {
  os::TransferMemoryType transferMemory;
  NN_RESULT_DO(os::CreateTransferMemory(&transferMemory, pBuffer, size,
    os::MemoryPermission_ReadOnly));
  const uint32_t handle = os::DetachTransferMemory(&transferMemory);
  os::DestroyTransferMemory(&transferMemory);
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  NN_RESULT_DO(proxy->InitializeJcms(utility::GetAppletResourceUserId(),
    sf::NativeHandle(handle, true), size));
  NN_RESULT_DO(GetAppletResourceHolder().SetAppletResourceUserId(
    utility::GetAppletResourceUserId()));
  NN_RESULT_DO(GetAppletResourceHolder().Activate());
  g_pJcmsLifos = static_cast<const JcmsLifo*>(pBuffer);
  return Result{};
}

Result FinalizeJcms() {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  NN_RESULT_DO(proxy->FinalizeJcms(utility::GetAppletResourceUserId()));
  g_pJcmsLifos = nullptr;
  return GetAppletResourceHolder().Deactivate();
}

Result GetJcmsState(JcmsState* pOutState, const JcmsHandle& handle) {
  NN_ABORT_UNLESS_NOT_NULL(pOutState);
  NN_ABORT_UNLESS_RESULT_SUCCESS(utility::VerifyValidJcmsHandle(handle));
  int count = 0;
  const Result result = GetJcmsStates(&count, pOutState, 1, handle);
  if (result.IsSuccess() && count == 0) {
    *pOutState = JcmsState{};
  }
  return result;
}

Result GetJcmsStates(int* pOutCount, JcmsState* pOutStates, int count,
  const JcmsHandle& handle) {
  NN_ABORT_UNLESS_NOT_NULL(pOutCount);
  NN_ABORT_UNLESS_NOT_NULL(pOutStates);
  NN_ABORT_UNLESS_RESULT_SUCCESS(utility::VerifyValidJcmsHandle(handle));
  const uint8_t index = utility::GetJcmsIndex(handle);
  *pOutCount = g_pJcmsLifos[index].Read(pOutStates, count);
  return Result{};
}

}
