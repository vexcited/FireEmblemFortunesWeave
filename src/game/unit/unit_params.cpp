#include "game/unit.hpp"

namespace game {

#pragma GCC visibility push(hidden)

UnitParams Unit::GetParams(int mode) const {
  UnitParams params;
  for (uint8_t kind = 0; kind < UnitParams::kCount; kind++) {
    params.values[kind] = GetParam(kind, mode);
  }
  return params;
}

bool Unit::CanGrow(const uint8_t& kind) const {
  return GetParam(kind, 0) < GetParamLimit(kind);
}

// A pending hit point value is dropped once the hit points change.
int Unit::Recover(int amount) {
  if (amount == 0) {
    return 0;
  }

  if (pending_hp_ != 0) {
    pending_hp_ = 0;
  }

  if (amount < 1 || !IsOnMap()) {
    return 0;
  }

  const int target = hp_ + amount;
  const int max = GetParam(UnitParams::kHp, 1);

  if (pending_hp_ != 0 && target != pending_hp_) {
    pending_hp_ = 0;
  }

  const int hp = target < 0 ? 0 : (max < target ? max : target);
  if (hp != hp_) {
    hp_ = hp;
    OnHpChanged();
  }

  return amount;
}

int Unit::GetStrength(int mode) const {
  return GetParam(UnitParams::kStrength, mode);
}

int Unit::GetTechnique(int mode) const {
  return GetParam(UnitParams::kTechnique, mode);
}

int Unit::GetSpeed(int mode) const {
  return GetParam(UnitParams::kSpeed, mode);
}

int Unit::GetLuck(int mode) const {
  return GetParam(UnitParams::kLuck, mode);
}

int Unit::GetDefense(int mode) const {
  return GetParam(UnitParams::kDefense, mode);
}

int Unit::GetMagic(int mode) const {
  return GetParam(UnitParams::kMagic, mode);
}

int Unit::GetResistance(int mode) const {
  return GetParam(UnitParams::kResistance, mode);
}

int Unit::GetBuild(int mode) const {
  return GetParam(UnitParams::kBuild, mode);
}

int Unit::GetSight(int mode) const {
  return GetParam(UnitParams::kSight, mode);
}

#pragma GCC visibility pop

}
