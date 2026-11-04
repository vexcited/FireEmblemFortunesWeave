#include "nn/hid/detail/hid_touch_screen_accessor.hpp"

namespace nn::hid::system::detail {

namespace {

constexpr int DefaultTouchScreenWidth = 1920;
constexpr int DefaultTouchScreenHeight = 1080;

int g_TouchScreenOutputWidth = DefaultTouchScreenWidth;
int g_TouchScreenOutputHeight = DefaultTouchScreenHeight;

int32_t ScaleCoordinate(int32_t value, float output, float input) {
  return static_cast<int32_t>(output * static_cast<float>(value) / input +
    0.5);
}

template <size_t N>
void ScaleTouchScreenState(TouchScreenState<N>* pState) {
  if (g_TouchScreenOutputWidth == DefaultTouchScreenWidth &&
    g_TouchScreenOutputHeight == DefaultTouchScreenHeight) {
    return;
  }
  const float width = static_cast<float>(g_TouchScreenOutputWidth);
  const float height = static_cast<float>(g_TouchScreenOutputHeight);
  for (size_t i = 0; i < N; ++i) {
    TouchState& touch = pState->touches[i];
    touch.x = ScaleCoordinate(touch.x, width, DefaultTouchScreenWidth);
    touch.y = ScaleCoordinate(touch.y, height, DefaultTouchScreenHeight);
    touch.diameterX =
      ScaleCoordinate(touch.diameterX, width, DefaultTouchScreenWidth);
    touch.diameterY =
      ScaleCoordinate(touch.diameterY, height, DefaultTouchScreenHeight);
  }
}

}

int GetTouchScreenOutputWidthForSystemProcess() {
  return g_TouchScreenOutputWidth;
}

int GetTouchScreenOutputHeightForSystemProcess() {
  return g_TouchScreenOutputHeight;
}

template <size_t N>
Result GetTouchScreenStateForSystemProcess(TouchScreenState<N>* pOutState) {
  if (pOutState == nullptr) {
    return hid::detail::ResultTouchScreenNullStateBuffer;
  }
  const hid::detail::TouchScreenLifo* pLifo =
    hid::detail::GetTouchScreenSharedMemoryAccessor().GetLifo();
  if (pLifo == nullptr) {
    return hid::detail::ResultTouchScreenNotInitialized;
  }
  pLifo->Read(pOutState, 1);
  ScaleTouchScreenState(pOutState);
  return Result{};
}

template <size_t N>
Result GetTouchScreenStatesForSystemProcess(int* pOutCount,
  TouchScreenState<N>* pOutStates, int count) {
  if (pOutStates == nullptr) {
    return hid::detail::ResultTouchScreenNullStateBuffer;
  }
  if (count < 0 || count > TouchStateCountMax) {
    return hid::detail::ResultTouchScreenInvalidStateCount;
  }
  *pOutCount =
    hid::detail::GetTouchScreenSharedMemoryAccessor().GetLifo()->Read(
      pOutStates, count);
  for (int i = 0; i < *pOutCount; ++i) {
    ScaleTouchScreenState(&pOutStates[i]);
  }
  return Result{};
}

template Result GetTouchScreenStateForSystemProcess<1>(
  TouchScreenState<1>*);
template Result GetTouchScreenStateForSystemProcess<2>(
  TouchScreenState<2>*);
template Result GetTouchScreenStateForSystemProcess<3>(
  TouchScreenState<3>*);
template Result GetTouchScreenStateForSystemProcess<4>(
  TouchScreenState<4>*);
template Result GetTouchScreenStateForSystemProcess<5>(
  TouchScreenState<5>*);
template Result GetTouchScreenStateForSystemProcess<6>(
  TouchScreenState<6>*);
template Result GetTouchScreenStateForSystemProcess<7>(
  TouchScreenState<7>*);
template Result GetTouchScreenStateForSystemProcess<8>(
  TouchScreenState<8>*);
template Result GetTouchScreenStateForSystemProcess<9>(
  TouchScreenState<9>*);
template Result GetTouchScreenStateForSystemProcess<10>(
  TouchScreenState<10>*);
template Result GetTouchScreenStateForSystemProcess<11>(
  TouchScreenState<11>*);
template Result GetTouchScreenStateForSystemProcess<12>(
  TouchScreenState<12>*);
template Result GetTouchScreenStateForSystemProcess<13>(
  TouchScreenState<13>*);
template Result GetTouchScreenStateForSystemProcess<14>(
  TouchScreenState<14>*);
template Result GetTouchScreenStateForSystemProcess<15>(
  TouchScreenState<15>*);
template Result GetTouchScreenStateForSystemProcess<16>(
  TouchScreenState<16>*);
template Result GetTouchScreenStatesForSystemProcess<1>(int*,
  TouchScreenState<1>*, int);
template Result GetTouchScreenStatesForSystemProcess<2>(int*,
  TouchScreenState<2>*, int);
template Result GetTouchScreenStatesForSystemProcess<3>(int*,
  TouchScreenState<3>*, int);
template Result GetTouchScreenStatesForSystemProcess<4>(int*,
  TouchScreenState<4>*, int);
template Result GetTouchScreenStatesForSystemProcess<5>(int*,
  TouchScreenState<5>*, int);
template Result GetTouchScreenStatesForSystemProcess<6>(int*,
  TouchScreenState<6>*, int);
template Result GetTouchScreenStatesForSystemProcess<7>(int*,
  TouchScreenState<7>*, int);
template Result GetTouchScreenStatesForSystemProcess<8>(int*,
  TouchScreenState<8>*, int);
template Result GetTouchScreenStatesForSystemProcess<9>(int*,
  TouchScreenState<9>*, int);
template Result GetTouchScreenStatesForSystemProcess<10>(int*,
  TouchScreenState<10>*, int);
template Result GetTouchScreenStatesForSystemProcess<11>(int*,
  TouchScreenState<11>*, int);
template Result GetTouchScreenStatesForSystemProcess<12>(int*,
  TouchScreenState<12>*, int);
template Result GetTouchScreenStatesForSystemProcess<13>(int*,
  TouchScreenState<13>*, int);
template Result GetTouchScreenStatesForSystemProcess<14>(int*,
  TouchScreenState<14>*, int);
template Result GetTouchScreenStatesForSystemProcess<15>(int*,
  TouchScreenState<15>*, int);
template Result GetTouchScreenStatesForSystemProcess<16>(int*,
  TouchScreenState<16>*, int);

}
