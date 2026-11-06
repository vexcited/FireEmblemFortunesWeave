#pragma once

#include <cstdint>

#include "snd/fnd/math.hpp"

namespace game::sound {

class PlayParam {
public:
  explicit PlayParam(float fade = 0.0f);
  explicit PlayParam(const char* fade_label);
  ~PlayParam();

private:
  uint8_t data_[0xc8];
};

class Handle {
public:
  Handle() = default;
  Handle(const Handle& other);
  ~Handle() {}

  Handle& operator=(const Handle& other);

private:
  uint64_t id_ = 0;
  uint32_t serial_ = 0x2000;
};

Handle Play(const char* label, const char* group, const PlayParam& param,
  int priority, uint32_t flags, int delay, float start, float volume);

Handle PlayAt(const char* label, const char* group,
  const snd::fnd::Vec3& position, const PlayParam& param, int priority,
  uint32_t flags, int delay, float start, float volume);
void Stop(Handle& handle, const PlayParam& param);

Handle PlayVibration(const char* label, bool system);
Handle PlaySeAt(const char* label, const snd::fnd::Vec3& position);
void Stop(Handle& handle);

#pragma GCC visibility push(hidden)

extern bool g_vibration_enabled;

#pragma GCC visibility pop

inline void PlaySe(const char* label) {
  Play(label, label, PlayParam(), 0, 0x10001, 0, 0.0f, 1.0f);
}

[[gnu::always_inline]] inline Handle PlayLabel(const char* label) {
  return Play(label, label, PlayParam(), 0, 0x10001, 0, 0.0f, 1.0f);
}

// Each menu sound has a matching controller vibration.
[[gnu::always_inline]] inline void PlaySeWithVibration(
  const char* label, const char* vibration_label
) {
  PlaySe(label);
  Handle vibration;

  if (g_vibration_enabled) {
    vibration = PlayLabel(vibration_label);
  }
}

void PlayCursorSe();
void PlayCursorCharaSe();
// The horizontal cursor sound, with a medium vibration when enabled.
void PlayCursorHorizontalSe();
void PlayCursorHorizontalLeftSe();
void PlayCursorHorizontalRightSe();
void PlayCursorLeftSe();
void PlayCursorRightSe();
void PlayListLeftSe();
void PlayListRightSe();
void PlayGaugeLeftSe();
void PlayGaugeRightSe();
void PlayCursorHelpSe();
void PlayPageSendSe();
void PlayPageBackSe();
void PlayCursorLeftCalendarSe();
void PlayCursorRightCalendarSe();
void PlayDecideSe();
void PlayDecideLightSe();
void PlayTalkSendSe();
void PlayCancelSe();
void PlayCursorTargetSe();
void PlayNgSe();
void PlayDangerZoneOnSe();
void PlayDangerZoneOffSe();
void PlayZoomViewInSe();
void PlayZoomViewOutSe();
void PlayCameraTurnSe();

}
