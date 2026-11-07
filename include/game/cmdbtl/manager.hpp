#pragma once

#include <stdint.h>

#include "game/singleton.hpp"

namespace game::cmdbtl {

#pragma GCC visibility push(hidden)

class Camera {
public:
  float GetYawDeg() const {
    return yaw_;
  }

  float GetPitchDeg() const {
    return pitch_;
  }

private:
  uint8_t unknown_00_[0x54];
  float yaw_;
  float pitch_;
};

class CameraQuake {
public:
  void Once(float power, float sec);
  void Fade(float sec, float power, float noiseSpeed);
  void LoopStart(float power, float noiseSpeed);

  void LoopEnd(float fadeSec) {
    fade_sec_ = fadeSec;
    fade_left_ = fadeSec;
  }

private:
  uint8_t unknown_00_[0x40];
  float fade_sec_;
  float fade_left_;
};

class CameraDirector {
public:
  // The event camera at the position and rotation, in degrees.
  void StartEvent(const float (&transform)[6], float sec);
};

class Manager : public Singleton<Manager> {
public:
  CameraDirector& GetDirector() {
    return director_;
  }

  Camera* GetCamera() const {
    return camera_;
  }

  CameraQuake* GetQuake() const {
    return quake_;
  }

  int GetPhase() const {
    return phase_;
  }

  int GetTurn() const {
    return turn_;
  }

  bool IsLoading() const;

private:
  uint8_t unknown_08_[0x8];
  CameraDirector director_;
  uint8_t unknown_11_[0x1e7];
  Camera* camera_;
  uint8_t unknown_200_[0x20];
  CameraQuake* quake_;
  uint8_t unknown_228_[0x38];
  int phase_;
  int turn_;
};

#pragma GCC visibility pop

}

// The script natives read the manager through the global offset table.
[[gnu::visibility("default")]] extern game::cmdbtl::Manager* g_cmdbtl_manager;
