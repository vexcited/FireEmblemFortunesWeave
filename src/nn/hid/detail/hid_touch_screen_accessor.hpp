#pragma once

#include <algorithm>
#include <new>

#include "nn/hid/detail/hid_abort.hpp"
#include "nn/hid/detail/hid_ring_lifo.hpp"
#include "nn/hid/detail/hid_server.hpp"
#include "nn/hid/detail/hid_shared_memory_accessor.hpp"
#include "nn/hid/hid_touch_screen.hpp"

namespace nn::hid {

template <size_t N, size_t M>
void ConvertState(TouchScreenState<N>* pOutState,
  const TouchScreenState<M>& state) {
  pOutState->samplingNumber = state.samplingNumber;
  pOutState->count = std::min(state.count, static_cast<int32_t>(N));
  pOutState->reserved = state.reserved;
  for (size_t i = 0; i < N; ++i) {
    pOutState->touches[i] = state.touches[i];
  }
}

}

namespace nn::hid::detail {

namespace {

constexpr Result ResultTouchScreenNullStateBuffer = {0x58ca};
constexpr Result ResultTouchScreenNotInitialized = {0x52ca};
constexpr Result ResultTouchScreenInvalidStateCount = {0x5aca};
constexpr Result ResultTouchScreenActivationUpperLimitOver = {0x54ca};
constexpr Result ResultTouchScreenDeactivationLowerLimitOver = {0x56ca};

constexpr int TouchScreenLifoCapacity = 17;
constexpr size_t TouchScreenLifoOffset = 0x400;
constexpr int ActivationCountMax = 0x7ffffffe;

using TouchScreenLifo =
  RingLifo<TouchScreenState<TouchStateCountMax>, TouchScreenLifoCapacity>;

class TouchScreenSharedMemoryAccessor final : public SharedMemoryAccessor {
 public:
  TouchScreenSharedMemoryAccessor() :
    m_ActivationCount(0), m_pLifo(nullptr), m_Width(1920), m_Height(1080) {
    SetResultActivationUpperLimitOver(
      ResultTouchScreenActivationUpperLimitOver);
    SetResultDeactivationLowerLimitOver(
      ResultTouchScreenDeactivationLowerLimitOver);
  }

  Result Activate() override {
    if (m_ActivationCount == 0) {
      NN_RESULT_DO(SharedMemoryAccessor::Activate());
    }
    else if (m_ActivationCount == ActivationCountMax) {
      return ResultTouchScreenActivationUpperLimitOver;
    }
    sf::SharedPointer<IHidServer> proxy;
    NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
    NN_RESULT_DO(proxy->SetTouchScreenResolution(
      utility::GetAppletResourceUserId(), m_Width, m_Height));
    if (m_ActivationCount == 0) {
      NN_RESULT_DO(proxy->ActivateTouchScreen(
        utility::GetAppletResourceUserId()));
    }
    ++m_ActivationCount;
    return Result{};
  }

  Result Deactivate() override {
    if (m_ActivationCount == 0) {
      return ResultTouchScreenDeactivationLowerLimitOver;
    }
    if (--m_ActivationCount != 0) {
      return Result{};
    }
    sf::SharedPointer<IHidDebugServer> proxy;
    NN_RESULT_DO(server::CreateHidDebugServerProxy(&proxy));
    NN_RESULT_DO(proxy->DeactivateTouchScreen());
    NN_RESULT_DO(SharedMemoryAccessor::Deactivate());
    return Result{};
  }

  Result Attach(void* address) override {
    m_pLifo.store(reinterpret_cast<TouchScreenLifo*>(
      static_cast<uint8_t*>(address) + TouchScreenLifoOffset),
      std::memory_order_release);
    return Result{};
  }

  Result Detach() override {
    m_pLifo.store(nullptr, std::memory_order_release);
    return Result{};
  }

  const TouchScreenLifo* GetLifo() const {
    return m_pLifo.load(std::memory_order_acquire);
  }

 private:
  int m_ActivationCount;
  std::atomic<TouchScreenLifo*> m_pLifo;
  int m_Width;
  int m_Height;
};

TouchScreenSharedMemoryAccessor& GetTouchScreenSharedMemoryAccessor() {
  return utility::StaticObject<TouchScreenSharedMemoryAccessor>::Get();
}

}

}
