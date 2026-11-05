#pragma once

#include <stdint.h>

#include <map>
#include <string>
#include <vector>

namespace game {

#pragma GCC visibility push(hidden)

class Force {
public:
  uint8_t GetType() const {
    return type_;
  }

private:
  uint8_t unknown_00_[0x10];
  uint8_t type_;
};

// Shared base of units and world map troops.
class UnitActor {
public:
  virtual ~UnitActor();

  virtual void Unknown02();
  virtual void Unknown03();
  virtual void Unknown04();

private:
  uint8_t unknown_08_[0x188];
};

class UnitConst {};

class UnitStatus {};

class UnitEdit {
public:
  virtual ~UnitEdit() = default;

private:
  std::string name_;
  uint8_t unknown_20_[0x40];
};

class Unit : public UnitActor, public UnitConst, public UnitStatus {
public:
  static constexpr uint8_t kNoForce = 9;

  ~Unit() override;

  uint8_t GetForceType() const {
    return force_ != nullptr ? force_->GetType() : kNoForce;
  }

  // Units that left the map keep this flag.
  bool IsOnMap() const {
    return !(state_ & 0x8);
  }

  bool IsInCorps() const {
    return state_ & 0x100000;
  }

  bool IsCorpsLeader() const {
    return state_ & 0x80000;
  }

  int GetCorps() const {
    return IsInCorps() ? corps_ : -1;
  }

  int GetX() const {
    return x_;
  }

  int GetZ() const {
    return z_;
  }

  bool IsDone() const;

  int GetSize() const {
    return size_;
  }

  uint8_t GetIndex() const {
    return index_;
  }

private:
  struct SkillList {
    std::vector<uint32_t> skills;
    uint8_t unknown_18_[0x8];
    std::vector<uint32_t> sources;
    std::vector<uint32_t> levels;
    uint8_t unknown_50_[0x10];
  };

  struct Variables {
    ~Variables() {
      Clear();
    }

    void Clear() {
      flags = 0;
      count = 0;
      name.clear();
      values.clear();
    }

    uint64_t count = 0;
    int flags = 0;
    std::map<uint64_t, int> values;
    std::string name;
  };

  struct Work {
    uint8_t unknown_00_[0x18];
    std::vector<uint8_t> cells;
    uint8_t unknown_30_[0xa20];
    std::vector<uint8_t> routes;
  };

  static int count_;

  uint8_t unknown_190_[0x10];
  uint32_t state_;
  uint8_t unknown_1a4_[0x14];
  const Force* force_;
  uint8_t unknown_1c0_[0x35];
  uint8_t corps_;
  uint8_t unknown_1f6_[0x3a];
  std::vector<uint32_t> items_;
  int8_t x_;
  int8_t z_;
  uint8_t unknown_24a_[0x6];
  int size_;
  uint8_t unknown_254_[0x4];
  std::vector<uint32_t> equips_;
  uint8_t unknown_270_[0x1c0];
  SkillList skill_lists_[8];
  std::vector<uint32_t> unknown_730_;
  uint8_t unknown_748_[0x10];
  Variables variables_;
  uint8_t unknown_798_[0x90];
  uint8_t index_;
  uint8_t unknown_829_[0xf];
  UnitEdit edit_;
  Work* work_;
  uint8_t unknown_8a0_[0x10];
};

static_assert(sizeof(Unit) == 0x8b0);

#pragma GCC visibility pop

}
