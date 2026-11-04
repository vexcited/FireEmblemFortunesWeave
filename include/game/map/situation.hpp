#pragma once

#include <stdint.h>

#include <string>
#include <vector>

#include "game/map/map_singletons.hpp"

namespace game {

#pragma GCC visibility push(hidden)

struct HashedString;

class VariableManager {
public:
  static void SetFlag(const HashedString& key, int value);
};

namespace map {

struct SituationRecord {
  ~SituationRecord();

  void Serialize(Stream& stream) const;

  void Clear() {
    name.clear();
    for (int i = 0; i < 4; ++i) {
      details[i].clear();
      values[i] = 0xffff;
    }
  }

  std::string name;
  std::string details[4];
  uint16_t values[4];
};

struct BonusExp {
  int unknown_00;
  int unknown_04;
  int unknown_08;
};

class BonusExpList {
public:
  void Serialize(Stream& stream) const;
  void Deserialize(Stream& stream);

  void Clear() {
    list_.clear();
  }

private:
  std::vector<BonusExp> list_;
};

class SituationObserver {
public:
  static SituationObserver* GetInstance() {
    return instance_;
  }

  void Refresh();

private:
  static SituationObserver* instance_;
};

class Situation : public SerializeSingleton<Situation> {
public:
  // Rain puts out fire tricks.
  static constexpr uint32_t kFlagRain = 0x800;

  ~Situation() override;

  const char* GetName() const override {
    return "Situation";
  }

  int GetVersion() const override {
    return 12;
  }

  void Serialize(Stream& stream) const override;
  void Deserialize(Stream& stream, int version) override;

  void Clear();

  bool IsRaining() const {
    return (flags_ & kFlagRain) != 0;
  }

  // The force whose sight is shown, the player one unless it is their turn.
  uint8_t GetViewForce() const {
    return force_kinds_[current_force_] == 1 ? current_force_ : 0;
  }

  uint8_t GetMiracleCount() const {
    return unknown_1c_;
  }

  const BonusExpList& GetBonusExps() const {
    return bonus_exps_;
  }

  uint8_t GetRuleFlags() const {
    return flags_ & 0x1e;
  }

  uint8_t GetUnknown26() const {
    return unknown_26_;
  }

  uint8_t GetUnknown27() const {
    return unknown_27_;
  }

  const SituationRecord& GetRecord(int index) const {
    return records_[index];
  }

  uint32_t GetHonorExp() const {
    return unknown_140_;
  }

private:
  void UpdateVariables();

  // Kind of each force, 1 is controlled by the player.
  uint8_t force_kinds_[4] = {1, 2, 2, 2};
  uint32_t flags_ = 0;
  uint8_t current_force_ = 0;
  uint8_t unknown_19_ = 0;
  uint16_t unknown_1a_ = 1;
  uint8_t unknown_1c_ = 0xff;
  uint16_t unknown_1e_ = 0;
  uint8_t unknown_20_ = 0;
  uint8_t unknown_21_ = 0;
  uint16_t unknown_22_ = 0;
  uint8_t unknown_24_ = 0;
  uint8_t unknown_25_ = 0;
  uint8_t unknown_26_ = 0;
  uint8_t unknown_27_ = 0;
  SituationRecord records_[2];
  BonusExpList bonus_exps_;
  uint32_t unknown_140_ = 0;
};

}

#pragma GCC visibility pop

}
