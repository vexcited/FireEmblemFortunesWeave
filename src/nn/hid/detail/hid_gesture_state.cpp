#include "nn/hid/detail/hid_abort.hpp"
#include "nn/hid/detail/hid_ring_lifo.hpp"
#include "nn/hid/detail/hid_server.hpp"
#include "nn/hid/detail/hid_shared_memory_accessor.hpp"
#include "nn/hid/hid_device_states.hpp"

namespace nn::hid::detail {

namespace {

constexpr Result ResultGestureNotInitialized = {0x412ca};
constexpr Result ResultGestureActivationUpperLimitOver = {0x414ca};
constexpr Result ResultGestureDeactivationLowerLimitOver = {0x416ca};
constexpr Result ResultGestureNullStateBuffer = {0x418ca};
constexpr Result ResultGestureInvalidStateCount = {0x41aca};

constexpr int GestureLifoCapacity = 17;
constexpr size_t GestureLifoOffset = 0x3ba00;
constexpr int ActivationCountMax = 0x7ffffffe;

using GestureLifo = RingLifo<GestureState, GestureLifoCapacity>;

// Gestures are recognized on the server, which needs the output range of
// the touch coordinates before the first activation.
class GestureSharedMemoryAccessor final : public SharedMemoryAccessor {
 public:
  GestureSharedMemoryAccessor() :
    m_ActivationCount(0), m_pLifo(nullptr), m_Width(1920), m_Height(1080) {
    SetResultActivationUpperLimitOver(ResultGestureActivationUpperLimitOver);
    SetResultDeactivationLowerLimitOver(
      ResultGestureDeactivationLowerLimitOver);
  }

  void SetOutputRanges(int width, int height) {
    m_Width = width;
    m_Height = height;
  }

  Result Activate() override {
    if (m_ActivationCount == 0) {
      NN_RESULT_DO(SharedMemoryAccessor::Activate());
    }
    else if (m_ActivationCount == ActivationCountMax) {
      return ResultGestureActivationUpperLimitOver;
    }
    sf::SharedPointer<IHidServer> proxy;
    NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
    NN_RESULT_DO(proxy->SetGestureOutputRanges(
      utility::GetAppletResourceUserId(), m_Width, m_Height));
    if (m_ActivationCount == 0) {
      NN_RESULT_DO(
        proxy->ActivateGesture(utility::GetAppletResourceUserId(), 1));
    }
    ++m_ActivationCount;
    return Result{};
  }

  Result Deactivate() override {
    if (m_ActivationCount == 0) {
      return ResultGestureDeactivationLowerLimitOver;
    }
    if (--m_ActivationCount != 0) {
      return Result{};
    }
    sf::SharedPointer<IHidDebugServer> proxy;
    NN_RESULT_DO(server::CreateHidDebugServerProxy(&proxy));
    NN_RESULT_DO(proxy->DeactivateGesture());
    NN_RESULT_DO(SharedMemoryAccessor::Deactivate());
    return Result{};
  }

  Result Attach(server::SharedMemoryFormat* pFormat) override {
    m_pLifo.store(reinterpret_cast<GestureLifo*>(
      reinterpret_cast<uint8_t*>(pFormat) + GestureLifoOffset),
      std::memory_order_release);
    return Result{};
  }

  Result Detach() override {
    m_pLifo.store(nullptr, std::memory_order_release);
    return Result{};
  }

  const GestureLifo* GetLifo() const {
    return m_pLifo.load(std::memory_order_acquire);
  }

 private:
  int m_ActivationCount;
  std::atomic<GestureLifo*> m_pLifo;
  int m_Width;
  int m_Height;
};

GestureSharedMemoryAccessor& GetGestureSharedMemoryAccessor() {
  return utility::StaticObject<GestureSharedMemoryAccessor>::Get();
}

}

Result InitializeGesture(int width, int height) {
  GestureSharedMemoryAccessor& accessor = GetGestureSharedMemoryAccessor();
  NN_RESULT_DO(
    accessor.SetAppletResourceUserId(utility::GetAppletResourceUserId()));
  accessor.SetOutputRanges(width, height);
  return accessor.Activate();
}

Result FinalizeGesture() {
  return GetGestureSharedMemoryAccessor().Deactivate();
}

Result GetGestureStates(int* pOutCount, GestureState* pOutStates, int count) {
  if (pOutStates == nullptr) {
    return ResultGestureNullStateBuffer;
  }
  if (count < 0) {
    return ResultGestureInvalidStateCount;
  }
  const GestureLifo* pLifo = GetGestureSharedMemoryAccessor().GetLifo();
  if (pLifo == nullptr) {
    return ResultGestureNotInitialized;
  }
  *pOutCount = pLifo->Read(pOutStates, count);
  return Result{};
}

}
