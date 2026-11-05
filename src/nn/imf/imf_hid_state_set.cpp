#include <string.h>

#include <algorithm>

#include "nn/diag/diag_abort.hpp"
#include "nn/imf/imf_types.hpp"

namespace nn::imf {

namespace {

// Each device has a flag telling it holds a state and one telling the last
// call brought a newer state.
constexpr uint32_t KeyboardFlag = 1u << 3;
constexpr uint32_t KeyboardUpdatedFlag = 1u << 4;
constexpr uint32_t TouchScreenFlag = 1u << 7;
constexpr uint32_t TouchScreenUpdatedFlag = 1u << 8;
constexpr uint32_t NpadFullKeyFlag = 1u << 14;
constexpr uint32_t NpadHandheldFlag = 1u << 15;
constexpr uint32_t NpadFullKeyUpdatedFlag = 1u << 16;
constexpr uint32_t NpadHandheldUpdatedFlag = 1u << 17;
constexpr uint32_t NmouseUpdatedFlag = 1u << 19;
constexpr uint32_t NpadJoyDualUpdatedFlag = 1u << 20;
constexpr uint32_t NpadJoyLeftUpdatedFlag = 1u << 21;
constexpr uint32_t NpadJoyRightUpdatedFlag = 1u << 22;
constexpr uint32_t NmouseFlag = 1u << 23;
constexpr uint32_t NpadJoyDualFlag = 1u << 24;
constexpr uint32_t NpadJoyLeftFlag = 1u << 25;
constexpr uint32_t NpadJoyRightFlag = 1u << 26;

constexpr uint32_t ResultInvalidKeyboardStates = 0x1382f9;
constexpr uint32_t ResultInvalidTouchScreenStates = 0x138af9;
constexpr uint32_t ResultInvalidNpadStates = 0x1392f9;
constexpr uint32_t ResultInvalidNmouseStates = 0x1782f9;

void AbortUnlessValidStates(const void* pStates, int count,
  uint32_t resultValue) {
  if (pStates == nullptr && count != 0) {
    const Result result = {resultValue};
    diag::detail::AbortImpl(&result);
  }
}

template <typename State>
void SetLatestState(uint32_t* pFlags, State* pOutState,
  const State* pStates, int count, uint32_t flag, uint32_t updatedFlag) {
  if (count < 1 || pStates[0].samplingNumber <= pOutState->samplingNumber) {
    *pFlags = (*pFlags & ~updatedFlag) | flag;
    return;
  }

  *pOutState = pStates[0];
  *pFlags |= flag | updatedFlag;
}

}

void HidStateSet::Reset() {
  memset(this, 0, sizeof(*this));
}

bool HidStateSet::IsKeyboardStateUpdated() const {
  return (m_Unit.flags & KeyboardUpdatedFlag) != 0;
}

const hid::KeyboardState& HidStateSet::GetKeyboardState() const {
  return m_Unit.keyboardState;
}

void HidStateSet::SetKeyboardStates(const hid::KeyboardState* pStates,
  int count) {
  AbortUnlessValidStates(pStates, count, ResultInvalidKeyboardStates);
  SetLatestState(&m_Unit.flags, &m_Unit.keyboardState, pStates, count,
    KeyboardFlag, KeyboardUpdatedFlag);
}

void HidStateSet::SetKeyboardStateForcibly(const hid::KeyboardState& state) {
  m_Unit.keyboardState = state;
  m_Unit.flags |= KeyboardFlag | KeyboardUpdatedFlag;
}

bool HidStateSet::IsNpadFullKeyStateUpdated() const {
  return (m_Unit.flags & NpadFullKeyUpdatedFlag) != 0;
}

const hid::NpadFullKeyState& HidStateSet::GetNpadFullKeyState() const {
  return m_Unit.npadFullKeyState;
}

void HidStateSet::SetNpadFullKeyStates(const hid::NpadFullKeyState* pStates,
  int count) {
  AbortUnlessValidStates(pStates, count, ResultInvalidNpadStates);
  SetLatestState(&m_Unit.flags, &m_Unit.npadFullKeyState, pStates, count,
    NpadFullKeyFlag, NpadFullKeyUpdatedFlag);
}

void HidStateSet::SetNpadFullKeyStateForcibly(
  const hid::NpadFullKeyState& state) {
  m_Unit.npadFullKeyState = state;
  m_Unit.flags |= NpadFullKeyFlag | NpadFullKeyUpdatedFlag;
}

bool HidStateSet::IsNpadHandheldStateUpdated() const {
  return (m_Unit.flags & NpadHandheldUpdatedFlag) != 0;
}

const hid::NpadHandheldState& HidStateSet::GetNpadHandheldState() const {
  return m_Unit.npadHandheldState;
}

void HidStateSet::SetNpadHandheldStates(
  const hid::NpadHandheldState* pStates, int count) {
  AbortUnlessValidStates(pStates, count, ResultInvalidNpadStates);
  SetLatestState(&m_Unit.flags, &m_Unit.npadHandheldState, pStates, count,
    NpadHandheldFlag, NpadHandheldUpdatedFlag);
}

void HidStateSet::SetNpadHandheldStateForcibly(
  const hid::NpadHandheldState& state) {
  m_Unit.npadHandheldState = state;
  m_Unit.flags |= NpadHandheldFlag | NpadHandheldUpdatedFlag;
}

bool HidStateSet::IsTouchScreenStateUpdated() const {
  return (m_Unit.flags & TouchScreenUpdatedFlag) != 0;
}

template <size_t N>
const hid::TouchScreenState<N>& HidStateSet::GetTouchScreenState() const {
  return *reinterpret_cast<const hid::TouchScreenState<N>*>(
    &m_Unit.touchScreenState);
}

template <size_t N>
void HidStateSet::SetTouchScreenStates(
  const hid::TouchScreenState<N>* pStates, int count) {
  AbortUnlessValidStates(pStates, count, ResultInvalidTouchScreenStates);

  auto& screen = *reinterpret_cast<hid::TouchScreenState<N>*>(
    &m_Unit.touchScreenState);
  const int64_t lastSamplingNumber = screen.samplingNumber;
  if (count < 1 || pStates[0].samplingNumber <= lastSamplingNumber) {
    m_Unit.flags = (m_Unit.flags & ~TouchScreenUpdatedFlag) |
      TouchScreenFlag;
    return;
  }

  uint32_t flags = m_Unit.flags | TouchScreenFlag | TouchScreenUpdatedFlag;
  screen = {};
  screen.samplingNumber = pStates[0].samplingNumber;
  screen.count = std::min(std::max(pStates[0].count, 0),
    static_cast<int32_t>(N));

  // Touches of the newest state are merged with the same fingers of the
  // older new states, adding up their delta times and sticky start flags.
  for (int i = 0; i < screen.count; ++i) {
    hid::TouchState& touch = screen.touches[i];
    const int32_t fingerId = pStates[0].touches[i].fingerId;
    for (int j = 0; j < count; ++j) {
      const hid::TouchScreenState<N>& state = pStates[j];
      if (state.samplingNumber <= lastSamplingNumber) {
        break;
      }

      const int touchCount = std::min(std::max(state.count, 0),
        static_cast<int32_t>(N));
      const hid::TouchState* pFound = nullptr;
      for (int k = 0; k < touchCount; ++k) {
        if (state.touches[k].fingerId == fingerId) {
          pFound = &state.touches[k];
          break;
        }
      }

      if (pFound == nullptr) {
        break;
      }

      if (j == 0) {
        touch = *pFound;
      }
      else {
        touch.deltaTime += pFound->deltaTime;
        if ((pFound->attributes & 1) != 0) {
          touch.attributes |= 1;
        }
      }
    }
  }

  m_Unit.flags = flags;
}

template <size_t N>
void HidStateSet::SetTouchScreenStateForcibly(
  const hid::TouchScreenState<N>& state) {
  *reinterpret_cast<hid::TouchScreenState<N>*>(&m_Unit.touchScreenState) =
    state;
  m_Unit.flags |= TouchScreenFlag | TouchScreenUpdatedFlag;
}

#define NN_IMF_INSTANTIATE_TOUCH_SCREEN(n) \
  template const hid::TouchScreenState<n>& \
    HidStateSet::GetTouchScreenState<n>() const; \
  template void HidStateSet::SetTouchScreenStates<n>( \
    const hid::TouchScreenState<n>* pStates, int count); \
  template void HidStateSet::SetTouchScreenStateForcibly<n>( \
    const hid::TouchScreenState<n>& state)

NN_IMF_INSTANTIATE_TOUCH_SCREEN(1);
NN_IMF_INSTANTIATE_TOUCH_SCREEN(2);
NN_IMF_INSTANTIATE_TOUCH_SCREEN(3);
NN_IMF_INSTANTIATE_TOUCH_SCREEN(4);
NN_IMF_INSTANTIATE_TOUCH_SCREEN(5);
NN_IMF_INSTANTIATE_TOUCH_SCREEN(6);
NN_IMF_INSTANTIATE_TOUCH_SCREEN(7);
NN_IMF_INSTANTIATE_TOUCH_SCREEN(8);
NN_IMF_INSTANTIATE_TOUCH_SCREEN(9);
NN_IMF_INSTANTIATE_TOUCH_SCREEN(10);
NN_IMF_INSTANTIATE_TOUCH_SCREEN(11);
NN_IMF_INSTANTIATE_TOUCH_SCREEN(12);
NN_IMF_INSTANTIATE_TOUCH_SCREEN(13);
NN_IMF_INSTANTIATE_TOUCH_SCREEN(14);
NN_IMF_INSTANTIATE_TOUCH_SCREEN(15);
NN_IMF_INSTANTIATE_TOUCH_SCREEN(16);

bool HidStateSet::IsNmouseStateUpdated() const {
  return (m_Unit.flags & NmouseUpdatedFlag) != 0;
}

const hid::NmouseState& HidStateSet::GetNmouseState() const {
  return m_Unit.nmouseState;
}

void HidStateSet::SetNmouseStates(const hid::NmouseState* pStates,
  int count) {
  AbortUnlessValidStates(pStates, count, ResultInvalidNmouseStates);

  hid::NmouseState& mouse = m_Unit.nmouseState;
  const int64_t lastSamplingNumber = mouse.samplingNumber;
  if (count < 1 || pStates[0].samplingNumber <= lastSamplingNumber) {
    m_Unit.flags = (m_Unit.flags & ~NmouseUpdatedFlag) | NmouseFlag;
    return;
  }

  uint32_t flags = m_Unit.flags | NmouseFlag | NmouseUpdatedFlag;
  mouse = {};

  // Older new states add their timestamps and wheel deltas to the newest.
  for (int i = 0; i < count; ++i) {
    const hid::NmouseState& state = pStates[i];
    if (state.samplingNumber <= lastSamplingNumber) {
      break;
    }

    if (i == 0) {
      mouse = state;
    }
    else {
      mouse.timestamp += state.timestamp;
      mouse.wheelDeltaX += state.wheelDeltaX;
      mouse.wheelDeltaY += state.wheelDeltaY;
    }
  }

  m_Unit.flags = flags;
}

void HidStateSet::SetNmouseStateForcibly(const hid::NmouseState& state) {
  m_Unit.nmouseState = state;
  m_Unit.flags |= NmouseFlag | NmouseUpdatedFlag;
}

bool HidStateSet::IsNpadJoyDualStateUpdated() const {
  return (m_Unit.flags & NpadJoyDualUpdatedFlag) != 0;
}

const hid::NpadJoyDualState& HidStateSet::GetNpadJoyDualState() const {
  return m_Unit.npadJoyDualState;
}

void HidStateSet::SetNpadJoyDualStates(const hid::NpadJoyDualState* pStates,
  int count) {
  AbortUnlessValidStates(pStates, count, ResultInvalidNpadStates);
  SetLatestState(&m_Unit.flags, &m_Unit.npadJoyDualState, pStates, count,
    NpadJoyDualFlag, NpadJoyDualUpdatedFlag);
}

void HidStateSet::SetNpadJoyDualStateForcibly(
  const hid::NpadJoyDualState& state) {
  m_Unit.npadJoyDualState = state;
  m_Unit.flags |= NpadJoyDualFlag | NpadJoyDualUpdatedFlag;
}

bool HidStateSet::IsNpadJoyLeftStateUpdated() const {
  return (m_Unit.flags & NpadJoyLeftUpdatedFlag) != 0;
}

const hid::NpadJoyLeftState& HidStateSet::GetNpadJoyLeftState() const {
  return m_Unit.npadJoyLeftState;
}

void HidStateSet::SetNpadJoyLeftStates(const hid::NpadJoyLeftState* pStates,
  int count) {
  AbortUnlessValidStates(pStates, count, ResultInvalidNpadStates);
  SetLatestState(&m_Unit.flags, &m_Unit.npadJoyLeftState, pStates, count,
    NpadJoyLeftFlag, NpadJoyLeftUpdatedFlag);
}

void HidStateSet::SetNpadJoyLeftStateForcibly(
  const hid::NpadJoyLeftState& state) {
  m_Unit.npadJoyLeftState = state;
  m_Unit.flags |= NpadJoyLeftFlag | NpadJoyLeftUpdatedFlag;
}

bool HidStateSet::IsNpadJoyRightStateUpdated() const {
  return (m_Unit.flags & NpadJoyRightUpdatedFlag) != 0;
}

const hid::NpadJoyRightState& HidStateSet::GetNpadJoyRightState() const {
  return m_Unit.npadJoyRightState;
}

void HidStateSet::SetNpadJoyRightStates(
  const hid::NpadJoyRightState* pStates, int count) {
  AbortUnlessValidStates(pStates, count, ResultInvalidNpadStates);
  SetLatestState(&m_Unit.flags, &m_Unit.npadJoyRightState, pStates, count,
    NpadJoyRightFlag, NpadJoyRightUpdatedFlag);
}

void HidStateSet::SetNpadJoyRightStateForcibly(
  const hid::NpadJoyRightState& state) {
  m_Unit.npadJoyRightState = state;
  m_Unit.flags |= NpadJoyRightFlag | NpadJoyRightUpdatedFlag;
}

}
