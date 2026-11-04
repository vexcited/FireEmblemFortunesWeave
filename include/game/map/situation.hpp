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
  static constexpr uint32_t kFlagTrickHidden = 0x800;

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

  bool IsTrickHidden() const {
    return (flags_ & kFlagTrickHidden) != 0;
  }

private:
  void UpdateVariables();

  uint8_t unknown_10_ = 1;
  uint8_t unknown_11_ = 2;
  uint8_t unknown_12_ = 2;
  uint8_t unknown_13_ = 2;
  uint32_t flags_ = 0;
  uint8_t unknown_18_ = 0;
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
