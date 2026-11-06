#pragma once

#include <stdint.h>

#include <functional>

#include "game/data/data_file.hpp"
#include "game/singleton.hpp"
#include "game/unit.hpp"

namespace game::map {

#pragma GCC visibility push(hidden)

struct TargetData;

// What a command of a unit reaches, the other units read its vtable through
// the global offset table.
class [[gnu::visibility("default")]] ITarget {
public:
  ITarget(const Unit* unit, uint8_t command) : command_(command) {
    if (unit != nullptr) {
      unit_ = unit->GetIndex();
      x_ = unit->GetX();
      z_ = unit->GetZ();
      size_ = unit->GetSize();
    }
  }

  virtual ~ITarget() = default;
  virtual void Unknown02();
  virtual bool IsValid();

  void Each(const std::function<void(const TargetData&)>& callback) const;
  bool CanSelectable() const;

  void SetKey(const Data* data) {
    key_.index = data != nullptr ? data->index : 0;
  }

  void SetTrick(int trick) {
    trick_ = trick;
  }

  void ClearKey() {
    key_.index = 0;
  }

private:
  uint8_t unit_ = 0;
  int x_ = 0;
  int z_ = 0;
  int size_ = 0;
  uint8_t command_;
  int unknown_1c_ = -1;
  uint64_t unknown_20_ = 0;
  SkillKey key_ = {};
  int trick_ = -1;
  bool unknown_30_ = false;
};

// The command target the items check before they are decidable.
class VTarget : public ITarget {
public:
  // The access info of the only target, a cell and the trick on it.
  struct Access {
    uint8_t kind;
    int8_t x;
    int8_t z;
    uint8_t unknown_03_[0x3];
    int16_t trick;
    uint32_t unknown_08_;
  };

  void Setup(Unit* unit, uint8_t command, const void* option = nullptr);

  bool HasSingleAccess() const {
    return access_count_ == 1;
  }

  const Access& GetAccess() const {
    return access_;
  }

private:
  uint8_t unknown_38_[0x4];
  Access access_;
  uint8_t unknown_48_[0x2ff4];
  int access_count_;
};

class Target : public Singleton<Target>, public VTarget {};

#pragma GCC visibility pop

}
