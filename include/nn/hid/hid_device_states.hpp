#pragma once

#include <stdint.h>

#include "nn/hid/hid_types.hpp"

namespace nn::hid {

struct DebugPadAttribute;
struct DebugPadButton;
struct KeyboardKey;
struct KeyboardModifier;
struct MouseAttribute;
struct MouseButton;

struct AnalogStickState {
  int32_t x;
  int32_t y;
};

struct DebugPadState {
  int64_t samplingNumber;
  util::BitFlagSet<32, DebugPadAttribute> attributes;
  util::BitFlagSet<32, DebugPadButton> buttons;
  AnalogStickState analogStickR;
  AnalogStickState analogStickL;
};

struct KeyboardState {
  int64_t samplingNumber;
  util::BitFlagSet<64, KeyboardModifier> modifiers;
  util::BitFlagSet<256, KeyboardKey> keys;
};

struct MouseState {
  int64_t samplingNumber;
  int32_t x;
  int32_t y;
  int32_t deltaX;
  int32_t deltaY;
  int32_t wheelDeltaX;
  int32_t wheelDeltaY;
  util::BitFlagSet<32, MouseButton> buttons;
  util::BitFlagSet<32, MouseAttribute> attributes;
};

struct GesturePoint {
  int32_t x;
  int32_t y;
};

struct GestureState {
  int64_t samplingNumber;
  int64_t contextNumber;
  int32_t type;
  int32_t direction;
  int32_t x;
  int32_t y;
  int32_t deltaX;
  int32_t deltaY;
  float velocityX;
  float velocityY;
  uint32_t attributes;
  float scale;
  float rotationAngle;
  int32_t pointCount;
  GesturePoint points[4];
};

inline void ConvertState(GestureState* pOutState, const GestureState& state) {
  *pOutState = state;
}

struct DigitizerState {
  int64_t samplingNumber;
  uint8_t reserved[0x50];
};

inline void ConvertState(DigitizerState* pOutState,
  const DigitizerState& state) {
  *pOutState = state;
}

inline void ConvertState(DebugPadState* pOutState,
  const DebugPadState& state) {
  *pOutState = state;
}

inline void ConvertState(KeyboardState* pOutState,
  const KeyboardState& state) {
  *pOutState = state;
}

inline void ConvertState(MouseState* pOutState, const MouseState& state) {
  *pOutState = state;
}

namespace system {

struct CaptureButton;
struct CButton;
struct HomeButton;
struct SleepButton;

struct CaptureButtonState {
  int64_t samplingNumber;
  util::BitFlagSet<64, CaptureButton> buttons;
};

struct CButtonState {
  int64_t samplingNumber;
  util::BitFlagSet<64, CButton> buttons;
};

struct HomeButtonState {
  int64_t samplingNumber;
  util::BitFlagSet<64, HomeButton> buttons;
};

struct SleepButtonState {
  int64_t samplingNumber;
  util::BitFlagSet<64, SleepButton> buttons;
};

inline void ConvertState(CaptureButtonState* pOutState,
  const CaptureButtonState& state) {
  *pOutState = state;
}

inline void ConvertState(CButtonState* pOutState, const CButtonState& state) {
  *pOutState = state;
}

inline void ConvertState(HomeButtonState* pOutState,
  const HomeButtonState& state) {
  *pOutState = state;
}

inline void ConvertState(SleepButtonState* pOutState,
  const SleepButtonState& state) {
  *pOutState = state;
}

}

}
