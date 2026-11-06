#include <cstdint>
#include <functional>

#include "game/map/script_singletons.hpp"
#include "game/map/target.hpp"
#include "game/menu/game_menu_item.hpp"
#include "game/unit_item.hpp"

namespace game::map {

#pragma GCC visibility push(hidden)

// The human phase of the map sequence, the menu picks its next label.
class MapSeqHuman : public Singleton<MapSeqHuman> {
public:
  static void SetLabel(int label) {
    if (instance_ != nullptr) {
      instance_->label_ = label;
    }
  }

private:
  uint8_t unknown_08_[0x90];
  int label_;
};

// The mind is read through the global offset table.
[[gnu::visibility("default")]] extern Mind* g_mind;

// The unit the skill menu was opened for, read out of line.
Unit* Unknown15bdea0();

namespace {

class SkillMenuItem : public menu::GameMenuItem {
public:
  SkillMenuItem();

  bool IsDecidable() override { return unknown_59_; }
  void OnSelect() override;
  int ACall() override;
  int BCall() override { return 3; }
  void DrawText() override;
  bool IsActive() override { return unknown_5a_; }

  virtual void CheckEnable() {
    unknown_5a_ = Check([](ITarget& target) {
      return target.CanSelectable();
    });
  }

  virtual bool Enumerate() {
    return Check([](ITarget& target) {
      return target.IsValid();
    });
  }

  virtual void Unknown72() {
    MapSeqHuman::SetLabel(23);
  }

protected:
  // Sets the target up for the skill of the item and checks it.
  bool Check(const std::function<bool(ITarget&)>& check);

  uint8_t unknown_53_;
  UnitSkill skill_;
  uint8_t unknown_58_;
  bool unknown_59_;
  bool unknown_5a_;
};

[[gnu::used]] SkillMenuItem::SkillMenuItem() = default;

bool SkillMenuItem::Check(const std::function<bool(ITarget&)>& check) {
  if (Target::GetInstance() == nullptr || g_mind == nullptr) {
    return false;
  }
  if (!g_mind->CanUseSkill(skill_.GetSharedData())) {
    return false;
  }
  Unit* unit = Unknown15bdea0();
  if (unit == nullptr) {
    return false;
  }
  Target* target = Target::GetInstance();
  target->Setup(unit, g_mind->GetCommand());
  target->SetKey(skill_.GetSharedData());
  return check(*target);
}

int SkillMenuItem::ACall() {
  if (!Enumerate() || !IsActive()) {
    return 1;
  }
  Unknown72();
  return 2;
}

class CmdBtlSkillMenuItem : public SkillMenuItem {
public:
  CmdBtlSkillMenuItem();

  void OnSelect() override;

  void CheckEnable() override {
    unknown_5a_ = Enumerate();
  }

  bool Enumerate() override;
  void Unknown72() override;
};

[[gnu::used]] CmdBtlSkillMenuItem::CmdBtlSkillMenuItem() = default;

}

#pragma GCC visibility pop

}
