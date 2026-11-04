#include "nn/hid/detail/hid_abort.hpp"
#include "nn/hid/detail/hid_ring_lifo.hpp"
#include "nn/hid/detail/hid_server.hpp"
#include "nn/hid/detail/hid_shared_memory_accessor.hpp"
#include "nn/hid/hid_device_states.hpp"

namespace nn::hid::system::detail {

namespace {

constexpr Result ResultGestureNotInitialized = {0x412ca};
constexpr Result ResultGestureActivationUpperLimitOver = {0x414ca};
constexpr Result ResultGestureDeactivationLowerLimitOver = {0x416ca};
constexpr Result ResultGestureNullStateBuffer = {0x418ca};
constexpr Result ResultGestureInvalidStateCount = {0x41aca};

constexpr int GestureLifoCapacity = 17;
constexpr size_t GestureLifoOffset = 0x3ba00;
constexpr int DefaultGestureWidth = 1920;
constexpr int DefaultGestureHeight = 1080;

using GestureLifo = hid::detail::RingLifo<GestureState, GestureLifoCapacity>;

class GestureSharedMemoryAccessor final :
  public hid::detail::LifoSharedMemoryAccessor<GestureSharedMemoryAccessor,
    GestureLifo, GestureLifoOffset> {
 public:
  GestureSharedMemoryAccessor() {
    SetResultActivationUpperLimitOver(ResultGestureActivationUpperLimitOver);
    SetResultDeactivationLowerLimitOver(
      ResultGestureDeactivationLowerLimitOver);
  }

  static Result ActivateServer() {
    sf::SharedPointer<IHidServer> proxy;
    NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
    return proxy->ActivateGesture(utility::GetAppletResourceUserId(), 1);
  }

  static Result DeactivateServer() {
    sf::SharedPointer<IHidDebugServer> proxy;
    NN_RESULT_DO(server::CreateHidDebugServerProxy(&proxy));
    return proxy->DeactivateGesture();
  }
};

int g_GestureOutputWidth = DefaultGestureWidth;
int g_GestureOutputHeight = DefaultGestureHeight;

GestureSharedMemoryAccessor& GetGestureSharedMemoryAccessor() {
  return utility::StaticObject<GestureSharedMemoryAccessor>::Get();
}

Result SetGestureOutputRanges(applet::AppletResourceUserId aruid, int width,
  int height) {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->SetGestureOutputRanges(aruid, width, height);
}

int32_t ScaleCoordinate(int32_t value, float scale) {
  return static_cast<int32_t>(scale * static_cast<float>(value) + 0.5);
}

}

// The service always recognizes gestures in 1920x1080, the system process
// rescales them to its own output size.
Result InitializeGestureForSystemProcess(int width, int height) {
  GestureSharedMemoryAccessor& accessor = GetGestureSharedMemoryAccessor();
  NN_RESULT_DO(
    accessor.SetAppletResourceUserId(utility::GetAppletResourceUserId()));
  NN_RESULT_DO(accessor.Activate());
  NN_RESULT_DO(SetGestureOutputRanges(utility::GetAppletResourceUserId(),
    DefaultGestureWidth, DefaultGestureHeight));
  g_GestureOutputWidth = width;
  g_GestureOutputHeight = height;
  return Result{};
}

Result FinalizeGestureForSystemProcess() {
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
  if (*pOutCount < 1 || (g_GestureOutputWidth == DefaultGestureWidth &&
    g_GestureOutputHeight == DefaultGestureHeight)) {
    return Result{};
  }
  const float scaleX = static_cast<float>(g_GestureOutputWidth) /
    static_cast<float>(DefaultGestureWidth);
  const float scaleY = static_cast<float>(g_GestureOutputHeight) /
    static_cast<float>(DefaultGestureHeight);
  for (int i = 0; i < *pOutCount; ++i) {
    GestureState& state = pOutStates[i];
    state.x = ScaleCoordinate(state.x, scaleX);
    state.y = ScaleCoordinate(state.y, scaleY);
    state.deltaX = ScaleCoordinate(state.deltaX, scaleX);
    state.deltaY = ScaleCoordinate(state.deltaY, scaleY);
    state.velocityX = scaleX * state.velocityX;
    state.velocityY = scaleY * state.velocityY;
    for (int j = 0; j < state.pointCount; ++j) {
      state.points[j].x =
        static_cast<int32_t>(scaleX * static_cast<float>(state.points[j].x));
      state.points[j].y =
        static_cast<int32_t>(scaleY * static_cast<float>(state.points[j].y));
    }
  }
  return Result{};
}

}
