#pragma once

#include <stdint.h>

#include <utility>
#include <vector>

#include "game/map/image.hpp"
#include "game/map/trick.hpp"
#include "game/singleton.hpp"
#include "game/unit.hpp"

namespace game::map {

#pragma GCC visibility push(hidden)

// The unit a mind command runs for, and the cells and unit it aims at.
class Mind : public Singleton<Mind> {
public:
  static constexpr int kAreaCount = 1024;

  const uint8_t& GetUnit() const {
    return unit_;
  }

  const uint8_t& GetTargetUnit() const {
    return target_unit_;
  }

  const SkillKey& GetActiveSkill() const {
    return active_skill_;
  }

  int GetTargetX() const {
    return target_x_;
  }

  int GetTargetZ() const {
    return target_z_;
  }

  void SetTarget(int8_t x, int8_t z) {
    target_x_ = x;
    target_z_ = z;
  }

  int GetPosX() const {
    return pos_x_;
  }

  int GetPosZ() const {
    return pos_z_;
  }

  void SetPos(int x, int z) {
    pos_x_ = x;
    pos_z_ = z;
  }

  void SetCommand(uint8_t command) {
    command_ = command;
  }

  uint64_t GetFlags() const {
    return flags_;
  }

  // A command waits while the last entry of the stack still holds one.
  bool IsCommandPending() const {
    return !stack_.empty() && stack_.back().first != nullptr;
  }

  bool CanCommand(uint8_t command) const;

  // The target cell or one of the cells of its area.
  bool IsInTargetPos(int x, int z) const {
    if (x == target_x_ && z == target_z_) {
      return true;
    }
    for (uint32_t i = 0; i < area_count_; i++) {
      if (x == areas_[i].x && z == areas_[i].z) {
        return true;
      }
    }
    return false;
  }

private:
  struct Area {
    uint8_t unknown_00_;
    int8_t x;
    int8_t z;
    uint8_t unknown_03_[0x9];
  };

  uint8_t unit_;
  uint8_t unknown_09_[0x3];
  int pos_x_;
  int pos_z_;
  uint8_t command_;
  uint8_t unknown_15_[0x23];
  SkillKey active_skill_;
  uint8_t unknown_3c_[0xfd];
  int8_t target_x_;
  int8_t target_z_;
  uint8_t unknown_13b_[0x2];
  uint8_t target_unit_;
  uint8_t unknown_13e_[0xe];
  Area areas_[kAreaCount];
  uint32_t area_count_;
  uint8_t unknown_3150_[0x30];
  uint64_t flags_;
  std::vector<std::pair<const void*, const void*>> stack_;
};

class Zoom : public Singleton<Zoom> {
public:
  bool IsActive() const {
    return active_;
  }

private:
  uint8_t unknown_08_[0xc];
  bool active_;
};

class CameraControl {
public:
  void SetTilt(float tilt);

  void StopShake() {
    stop_shake_ = true;
  }

private:
  uint8_t unknown_00_[0x190];
  bool stop_shake_;
};

class Camera : public Singleton<Camera> {
public:
  CameraControl* GetControl() const {
    return control_;
  }

private:
  uint8_t unknown_08_[0x1a8];
  CameraControl* control_;
};

// The units of the battle the events run for.
class MapEventManager : public Singleton<MapEventManager> {
public:
  const uint8_t& GetOffenceUnit() const {
    return offence_unit_;
  }

  const uint8_t& GetDefenceUnit() const {
    return defence_unit_;
  }

private:
  uint8_t unknown_08_[0x620];
  uint8_t offence_unit_;
  uint8_t defence_unit_;
};

// The tricks of the map, each cell indexes them on three layers.
class TrickMap {
public:
  static constexpr size_t kTrickSize = 0x90;

  // The top layer first, the lowest one does not check the tricks exist.
  const TrickData* Find(int x, int z) const {
    const unsigned cell = GetCellIndex(x, z);
    int16_t index = layers_[2][cell];
    if (index < 0 || tricks_ == 0) {
      index = layers_[1][cell];
      if (index < 0 || tricks_ == 0) {
        index = layers_[0][cell];
        if (index < 0) {
          return nullptr;
        }
      }
    }
    // An address computed as an integer, the original tests it against null.
    return reinterpret_cast<const TrickData*>(tricks_ + kTrickSize * index);
  }

  const TrickData* Get(int index) const {
    return reinterpret_cast<const TrickData*>(tricks_ + kTrickSize * index);
  }

  // Only the given layer, checking the tricks exist after the index.
  const TrickData* FindOnLayer(int layer, int x, int z) const {
    const int16_t index = layers_[layer][GetCellIndex(x, z)];
    if (index < 0 || tricks_ == 0) {
      return nullptr;
    }
    const char* tricks = reinterpret_cast<const char*>(tricks_);
    return reinterpret_cast<const TrickData*>(tricks + kTrickSize * index);
  }

private:
  uint8_t unknown_00_[0x8];
  uintptr_t tricks_;
  uint8_t unknown_10_[0x58];
  int16_t layers_[3][kGridSize * kGridSize];
};

class Trick : public SerializeSingleton<Trick> {
public:
  const TrickMap* GetMap() const {
    return map_;
  }

  // The trick standing on the cell.
  const TrickData* FindAt(int x, int z) const;

private:
  TrickMap* map_;
};

#pragma GCC visibility pop

}
