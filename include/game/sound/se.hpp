#pragma once

#include <cstdint>

namespace game::sound {

class PlayParam {
public:
  explicit PlayParam(float fade = 0.0f);
  ~PlayParam();

private:
  uint8_t data_[0xc8];
};

class Handle {
public:
  Handle() = default;
  Handle(const Handle& other);
  ~Handle() {}

private:
  uint64_t id_ = 0;
  uint32_t serial_ = 0x2000;
};

Handle Play(const char* label, const char* group, const PlayParam& param,
  int priority, uint32_t flags, int delay, float start, float volume);

inline void PlaySe(const char* label) {
  Play(label, label, PlayParam(), 0, 0x10001, 0, 0.0f, 1.0f);
}

void PlayDecideSe();
void PlayCancelSe();

}
