#include <cstdint>

#include "game/menu/unit_command_menu_item.hpp"

namespace game::map {

namespace {

class UnitMenuItem : public menu::UnitCommandMenuItem {
public:
  UnitMenuItem();

  void OnSelect() override;
  void OnDeselect() override;
  int ACall() override;
  int BCall() override;
  virtual void Unknown71();
  virtual const char* Unknown72() { return nullptr; }
  virtual const char* Unknown73() { return nullptr; }
  virtual void Unknown74();
  virtual void Unknown75();
  virtual int Unknown76() { return 0; }
  virtual void Unknown77();
  virtual void Unknown78();
  virtual void Unknown79();
  virtual int Unknown80() { return 0; }
  virtual void Unknown81();
  virtual void Unknown82();
  virtual void Unknown83() { Unknown78(); }
  virtual bool Unknown84() { return true; }
  virtual void Unknown85();
};

[[gnu::used]] UnitMenuItem::UnitMenuItem() = default;

class IAccessMenuItem : public UnitMenuItem {
public:
  int ACall() override;
  const char* Unknown73() override;
  void Unknown77() override;
  void Unknown81() override;
};

class EscapeMenuItem : public IAccessMenuItem {
public:
  EscapeMenuItem();

  const char* GetMid() override { return "MID_BtlMenu_Secede"; }
  int Unknown76() override { return 22; }
};

[[gnu::used]] EscapeMenuItem::EscapeMenuItem() = default;

class TalkMenuItem : public UnitMenuItem {
public:
  TalkMenuItem();

  const char* GetMid() override { return "MID_BtlMenu_Talk"; }
  int Unknown76() override { return 2; }
  int Unknown80() override { return 20; }
  void Unknown81() override;
};

[[gnu::used]] TalkMenuItem::TalkMenuItem() = default;

class CannonMenuItem : public UnitMenuItem {
public:
  CannonMenuItem();

  const char* GetMid() override { return "MID_BtlMenu_Cannon"; }
  const char* Unknown73() override;
  int Unknown76() override { return 27; }
  int Unknown80() override { return 24; }
  void Unknown83() override;
  bool Unknown84() override;
  void Unknown85() override;
};

[[gnu::used]] CannonMenuItem::CannonMenuItem() = default;

class AttackMenuItem : public UnitMenuItem {
public:
  AttackMenuItem();

  const char* GetMid() override { return "MID_BtlMenu_Attack"; }
  int Unknown76() override { return 3; }
  int Unknown80() override { return 21; }
  void Unknown85() override;
};

[[gnu::used]] AttackMenuItem::AttackMenuItem() = default;

class UnitSkillMenuItem : public UnitMenuItem {
public:
  const char* Unknown72() override;
  bool Unknown84() override;
  virtual int Unknown86() = 0;
};

class SpecialMenuItem : public UnitSkillMenuItem {
public:
  SpecialMenuItem();

  const char* GetMid() override { return "MID_BtlMenu_Special"; }
  int ACall() override;
  void Unknown70() override;
  int Unknown76() override { return 6; }
  int Unknown80() override { return 15; }
  void Unknown83() override;
  bool Unknown84() override;
  int Unknown86() override { return 3; }
};

[[gnu::used]] SpecialMenuItem::SpecialMenuItem() = default;

class PollutionMenuItem : public UnitSkillMenuItem {
public:
  PollutionMenuItem();

  const char* GetMid() override { return "MID_BtlMenu_SpecialGauge"; }
  void OnClose() override;
  void Unknown70() override;
  int Unknown76() override { return 6; }
  int Unknown80() override { return 24; }
  void Unknown83() override;
  bool Unknown84() override { return true; }
  void Unknown85() override;
  int Unknown86() override { return 3; }
};

[[gnu::used]] PollutionMenuItem::PollutionMenuItem() = default;

class ArtsMenuItem : public UnitSkillMenuItem {
public:
  ArtsMenuItem();

  const char* GetMid() override { return "MID_BtlMenu_Arts"; }
  int ACall() override;
  int Unknown76() override { return 5; }
  int Unknown80() override { return 14; }
  void Unknown83() override;
  int Unknown86() override { return 2; }
};

[[gnu::used]] ArtsMenuItem::ArtsMenuItem() = default;

class AssistMenuItem : public UnitMenuItem {
public:
  AssistMenuItem();

  const char* GetMid() override { return "MID_BtlMenu_Assist"; }
  int Unknown76() override { return 4; }
  int Unknown80() override { return 22; }
  void Unknown85() override;
};

[[gnu::used]] AssistMenuItem::AssistMenuItem() = default;

class UniqueSkillMenuItem : public UnitSkillMenuItem {
public:
  int ACall() override;
  void Unknown70() override;
};

class GambitMenuItem : public UniqueSkillMenuItem {
public:
  GambitMenuItem();

  const char* GetMid() override { return "MID_BtlMenu_Gambit"; }
  int Unknown76() override { return 8; }
  void Unknown83() override;
  void Unknown85() override;
  int Unknown86() override { return 5; }
};

[[gnu::used]] GambitMenuItem::GambitMenuItem() = default;

class RageMenuItem : public UniqueSkillMenuItem {
public:
  RageMenuItem();

  const char* GetMid() override { return "MID_BtlMenu_Rage"; }
  int Unknown76() override { return 9; }
  void Unknown83() override;
  void Unknown85() override;
  int Unknown86() override { return 6; }
};

[[gnu::used]] RageMenuItem::RageMenuItem() = default;

class MorphMenuItem : public UnitSkillMenuItem {
public:
  MorphMenuItem();

  const char* GetMid() override { return "MID_BtlMenu_Morph"; }
  int ACall() override;
  int Unknown76() override { return 16; }
  int Unknown80() override { return 16; }
  void Unknown83() override;
  bool Unknown84() override;
  int Unknown86() override { return 9; }
};

[[gnu::used]] MorphMenuItem::MorphMenuItem() = default;

class TreasureboxMenuItem : public IAccessMenuItem {
public:
  TreasureboxMenuItem();

  const char* GetMid() override { return "MID_BtlMenu_Treasurebox"; }
  int Unknown76() override { return 24; }
};

[[gnu::used]] TreasureboxMenuItem::TreasureboxMenuItem() = default;

class GimmickMenuItem : public IAccessMenuItem {
public:
  GimmickMenuItem();

  const char* GetMid() override;
  void Unknown70() override;
  int Unknown76() override { return 26; }
  void Unknown81() override;
  void Unknown82() override;
  void Unknown85() override;
};

[[gnu::used]] GimmickMenuItem::GimmickMenuItem() = default;

class WarpMenuItem : public IAccessMenuItem {
public:
  WarpMenuItem();

  const char* GetMid() override { return "MID_BtlMenu_Warp"; }
  void Unknown70() override;
  int Unknown76() override { return 28; }
  void Unknown81() override;
  bool Unknown84() override { return unknown_60_; }
  void Unknown85() override;

private:
  uint8_t unknown_53_[0xd];
  bool unknown_60_;
};

[[gnu::used]] WarpMenuItem::WarpMenuItem() = default;

class UnitMindMenuItem : public UnitMenuItem {};

class RideMenuItem : public UnitMindMenuItem {
public:
  RideMenuItem();

  const char* GetMid() override;
  int ACall() override;
  int Unknown76() override;
  void Unknown81() override;
  void Unknown82() override;
  void Unknown85() override;
};

[[gnu::used]] RideMenuItem::RideMenuItem() = default;

class ItemMenuItem : public UnitMenuItem {
public:
  ItemMenuItem();

  const char* GetMid() override { return "MID_BtlMenu_Item"; }
  int ACall() override;
  void Unknown81() override;
  void Unknown83() override;
  void Unknown85() override;
};

[[gnu::used]] ItemMenuItem::ItemMenuItem() = default;

class TransportMenuItem : public UnitMenuItem {
public:
  TransportMenuItem();

  const char* GetMid() override { return "MID_BtlMenu_Transport"; }
  int ACall() override;
  void Unknown81() override;
  void Unknown85() override;
};

[[gnu::used]] TransportMenuItem::TransportMenuItem() = default;

class TradeMenuItem : public UnitMenuItem {
public:
  TradeMenuItem();

  const char* GetMid() override { return "MID_BtlMenu_Trade"; }
  int Unknown76() override { return 10; }
  int Unknown80() override { return 24; }
  void Unknown81() override;
};

[[gnu::used]] TradeMenuItem::TradeMenuItem() = default;

class FixedMenuItem : public UnitMenuItem {
public:
  FixedMenuItem();

  const char* GetMid() override { return "MID_BtlMenu_Fixed"; }
  int ACall() override;
  void Unknown85() override;
};

[[gnu::used]] FixedMenuItem::FixedMenuItem() = default;

class DirectSkillMenuItem : public UnitMenuItem {
public:
  DirectSkillMenuItem();

  const char* GetMid() override;
  int ACall() override;
  void Unknown70() override;
  int Unknown76() override { return 18; }
  void Unknown77() override;
  int Unknown80() override { return 24; }
  void Unknown83() override;
  bool Unknown84() override;
  void Unknown85() override;
};

[[gnu::used]] DirectSkillMenuItem::DirectSkillMenuItem() = default;

}

}
