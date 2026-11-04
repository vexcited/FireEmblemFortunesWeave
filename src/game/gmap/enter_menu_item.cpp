#include <cstdint>

#include "game/menu/unit_command_menu_item.hpp"

namespace game::gmap {

namespace {

class SpotMenuItem : public menu::UnitCommandMenuItem {
public:
  int BCall() override;
  int ZRCall() override;
  void PlayCancelSe() override;
  void Unknown70() override;
  virtual int Unknown71() = 0;
  virtual bool Unknown72() { return false; }
  virtual bool Unknown73() { return true; }
  virtual const char* Unknown74() { return nullptr; }
  virtual const char* Unknown75() { return nullptr; }

protected:
  uint16_t unknown_54_;
};

class EnterMenuItem : public SpotMenuItem {
public:
  EnterMenuItem();

  const char* GetMid() override;
  const char* GetHelpMid() override;
  bool IsDecidable() override { return unknown_56_ != 0; }
  int ACall() override;
  bool IsActive() override;
  int Unknown71() override { return 0; }
  const char* Unknown74() override;
  const char* Unknown75() override;

private:
  uint8_t unknown_56_;
};

[[gnu::used]] EnterMenuItem::EnterMenuItem() = default;

class SideStoryMenuItem : public SpotMenuItem {
public:
  SideStoryMenuItem();

  const char* GetMid() override { return "MID_GmapMenu_SideStory"; }
  bool IsDecidable() override { return IsActive(); }
  int ACall() override;
  bool IsActive() override;
  int Unknown71() override { return 1; }
  const char* Unknown74() override { return "MID_GmapMenu_SideStory_Help"; }
};

[[gnu::used]] SideStoryMenuItem::SideStoryMenuItem() = default;

class CorpsCreateItem : public SpotMenuItem {
public:
  CorpsCreateItem();

  const char* GetMid() override { return "MID_GmapMenu_CorpsCreate"; }
  const char* GetHelpMid() override { return "部隊編成"; }
  bool IsDecidable() override { return (unknown_54_ & 0x4000) == 0; }
  int ACall() override;
  bool IsActive() override { return unknown_54_ == 0; }
  void Unknown70() override;
  int Unknown71() override { return 24; }
  bool Unknown72() override { return true; }
  const char* Unknown74() override { return "MID_GmapMenu_CorpsCreate_Help"; }
  const char* Unknown75() override;
};

[[gnu::used]] CorpsCreateItem::CorpsCreateItem() = default;

class CorpsDeleteItem : public SpotMenuItem {
public:
  CorpsDeleteItem();

  const char* GetMid() override { return "MID_GmapMenu_CorpsDelete"; }
  bool IsDecidable() override { return IsActive(); }
  int ACall() override;
  bool IsActive() override { return unknown_54_ == 0; }
  int Unknown71() override { return 25; }
  const char* Unknown74() override { return "MID_GmapMenu_CorpsDelete_Help"; }
};

[[gnu::used]] CorpsDeleteItem::CorpsDeleteItem() = default;

class CorpsExchangeMenuItem : public SpotMenuItem {
public:
  CorpsExchangeMenuItem();

  const char* GetMid() override { return "MID_GmapMenu_CorpsExchange"; }
  bool IsDecidable() override { return IsActive(); }
  int ACall() override;
  bool IsActive() override { return unknown_54_ == 0; }
  int Unknown71() override { return 26; }
  bool Unknown72() override { return true; }
  const char* Unknown74() override { return "MID_GmapMenu_CorpsExchange_Help"; }
};

[[gnu::used]] CorpsExchangeMenuItem::CorpsExchangeMenuItem() = default;

class CorpsDivideMenuItem : public SpotMenuItem {
public:
  CorpsDivideMenuItem();

  const char* GetMid() override { return "MID_GmapMenu_CorpsDivide"; }
  bool IsDecidable() override { return (unknown_54_ & 0x4000) == 0; }
  int ACall() override;
  bool IsActive() override { return unknown_54_ == 0; }
  void Unknown70() override;
  int Unknown71() override { return 27; }
  bool Unknown72() override { return true; }
  const char* Unknown74() override { return "MID_GmapMenu_CorpsDivide_Help"; }
};

[[gnu::used]] CorpsDivideMenuItem::CorpsDivideMenuItem() = default;

class DestroyMiasmaMenuItem : public SpotMenuItem {
public:
  DestroyMiasmaMenuItem();

  const char* GetMid() override { return "MID_GmapMenu_DestroyMiasma"; }
  const char* GetHelpMid() override { return "瘴気"; }
  bool IsDecidable() override { return (unknown_54_ & 0x4000) == 0; }
  int ACall() override;
  bool IsActive() override { return unknown_54_ == 0; }
  int Unknown71() override { return 4; }
  const char* Unknown74() override { return "MID_GmapMenu_DestroyMiasma_Help"; }
};

[[gnu::used]] DestroyMiasmaMenuItem::DestroyMiasmaMenuItem() = default;

class ReconstructionMenuItem : public SpotMenuItem {
public:
  ReconstructionMenuItem();

  const char* GetMid() override { return "MID_GmapMenu_Reconstruction"; }
  const char* GetHelpMid() override { return "復興"; }
  bool IsDecidable() override { return (unknown_54_ & 0x4000) == 0; }
  int ACall() override;
  bool IsActive() override { return unknown_54_ == 0; }
  int Unknown71() override { return 5; }
  const char* Unknown74() override {
    return "MID_GmapMenu_Reconstruction_Help";
  }
  const char* Unknown75() override;
};

[[gnu::used]] ReconstructionMenuItem::ReconstructionMenuItem() = default;

class FacilityMenuItem : public SpotMenuItem {
public:
  FacilityMenuItem();

  const char* GetMid() override { return "MID_GmapMenu_Facility"; }
  bool IsDecidable() override { return (unknown_54_ & 0x4000) == 0; }
  int ACall() override;
  bool IsActive() override { return unknown_54_ == 0; }
  int Unknown71() override { return 21; }
  bool Unknown72() override { return true; }
  const char* Unknown74() override { return "MID_GmapMenu_Facility_Help"; }
};

[[gnu::used]] FacilityMenuItem::FacilityMenuItem() = default;

class ExploreMenuItem : public SpotMenuItem {
public:
  ExploreMenuItem();

  const char* GetMid() override { return "MID_GmapMenu_Explore"; }
  const char* GetHelpMid() override { return "探索"; }
  bool IsDecidable() override { return (unknown_54_ & 0x4000) == 0; }
  int ACall() override;
  bool IsActive() override { return unknown_54_ == 0; }
  int Unknown71() override { return 7; }
  const char* Unknown74() override { return "MID_GmapMenu_Explore_Help"; }
};

[[gnu::used]] ExploreMenuItem::ExploreMenuItem() = default;

class BanquetMenuItem : public SpotMenuItem {
public:
  BanquetMenuItem();

  const char* GetMid() override { return "MID_GmapMenu_Banquet"; }
  const char* GetHelpMid() override { return "饗宴"; }
  bool IsDecidable() override { return (unknown_54_ & 0x4000) == 0; }
  int ACall() override;
  bool IsActive() override { return unknown_54_ == 0; }
  int Unknown71() override { return 22; }
  bool Unknown72() override { return true; }
  const char* Unknown74() override { return "MID_GmapMenu_Banquet_Help"; }
  const char* Unknown75() override;
};

[[gnu::used]] BanquetMenuItem::BanquetMenuItem() = default;

class CarriageMenuItem : public SpotMenuItem {
public:
  CarriageMenuItem();

  const char* GetMid() override { return "MID_GmapMenu_Carriage"; }
  bool IsDecidable() override { return (unknown_54_ & 0x4000) == 0; }
  int ACall() override;
  bool IsActive() override { return unknown_54_ == 0; }
  int Unknown71() override { return 6; }
  bool Unknown72() override { return true; }
  const char* Unknown74() override { return "MID_GmapMenu_Carriage_Help"; }
  const char* Unknown75() override;
};

[[gnu::used]] CarriageMenuItem::CarriageMenuItem() = default;

class TalkMenuItem : public SpotMenuItem {
public:
  TalkMenuItem();

  const char* GetMid() override { return "MID_GmapMenu_Talk"; }
  bool IsDecidable() override { return (unknown_54_ & 0x4000) == 0; }
  int ACall() override;
  bool IsActive() override { return unknown_54_ == 0; }
  int Unknown71() override { return 19; }
  const char* Unknown74() override { return "MID_GmapMenu_Talk_Help"; }
};

[[gnu::used]] TalkMenuItem::TalkMenuItem() = default;

class CallAnimalMenuItem : public SpotMenuItem {
public:
  CallAnimalMenuItem();

  const char* GetMid() override { return "MID_GmapMenu_CallAnimal"; }
  const char* GetHelpMid() override { return "おびき寄せる"; }
  bool IsDecidable() override { return (unknown_54_ & 0x4000) == 0; }
  int ACall() override;
  bool IsActive() override { return unknown_54_ == 0; }
  int Unknown71() override { return 8; }
  const char* Unknown74() override { return "MID_GmapMenu_CallAnimal_Help"; }
  const char* Unknown75() override;
};

[[gnu::used]] CallAnimalMenuItem::CallAnimalMenuItem() = default;

class CaptureAnimalMenuItem : public SpotMenuItem {
public:
  CaptureAnimalMenuItem();

  const char* GetMid() override { return "MID_GmapMenu_CaptureAnimal"; }
  const char* GetHelpMid() override { return "おびき寄せる"; }
  bool IsDecidable() override { return (unknown_54_ & 0x4000) == 0; }
  int ACall() override;
  void PlayDecideSe() override;
  bool IsActive() override { return unknown_54_ == 0; }
  int Unknown71() override { return 9; }
  const char* Unknown74() override { return "MID_GmapMenu_CaptureAnimal_Help"; }
};

[[gnu::used]] CaptureAnimalMenuItem::CaptureAnimalMenuItem() = default;

class MakeFarmItem : public SpotMenuItem {
public:
  MakeFarmItem();

  const char* GetMid() override;
  const char* GetHelpMid() override { return "畑を作る①"; }
  bool IsDecidable() override { return (unknown_54_ & 0x4000) == 0; }
  int ACall() override;
  bool IsActive() override { return unknown_54_ == 0; }
  void Unknown70() override;
  int Unknown71() override { return 11; }
  const char* Unknown74() override;
};

[[gnu::used]] MakeFarmItem::MakeFarmItem() = default;

class ShowItem : public SpotMenuItem {
public:
  ShowItem();

  const char* GetMid() override { return "MID_GmapMenu_Show"; }
  const char* GetHelpMid() override { return "地方興行1"; }
  bool IsDecidable() override { return (unknown_54_ & 0x4000) == 0; }
  int ACall() override;
  bool IsActive() override { return unknown_54_ == 0; }
  int Unknown71() override { return 16; }
  const char* Unknown74() override { return "MID_GmapMenu_Show_Help"; }
};

[[gnu::used]] ShowItem::ShowItem() = default;

class RecruitItem : public SpotMenuItem {
public:
  RecruitItem();

  const char* GetMid() override;
  const char* GetHelpMid() override;
  bool IsDecidable() override { return (unknown_54_ & 0x4000) == 0; }
  int ACall() override;
  bool IsActive() override { return unknown_54_ == 0; }
  int Unknown71() override { return 12; }
  const char* Unknown74() override;
};

[[gnu::used]] RecruitItem::RecruitItem() = default;

class DispatchItem : public SpotMenuItem {
public:
  DispatchItem();

  const char* GetMid() override;
  const char* GetHelpMid() override;
  bool IsDecidable() override { return (unknown_54_ & 0x4000) == 0; }
  int ACall() override;
  bool IsActive() override { return unknown_54_ == 0; }
  void Unknown70() override;
  int Unknown71() override { return 14; }
};

[[gnu::used]] DispatchItem::DispatchItem() = default;

class ReDispatchItem : public SpotMenuItem {
public:
  ReDispatchItem();

  const char* GetMid() override { return "MID_GmapMenu_LegionReDispatch"; }
  bool IsDecidable() override { return unknown_54_ == 0x6000; }
  int ACall() override;
  int Unknown71() override { return 15; }
  const char* Unknown74() override {
    return "MID_GmapMenu_LegionReDispatch_Help";
  }
};

[[gnu::used]] ReDispatchItem::ReDispatchItem() = default;

}

}

namespace game::gmap {

class BladeResonanceItem : public SpotMenuItem {
public:
  const char* GetMid() override;
  const char* GetHelpMid() override;
  bool IsDecidable() override;
  bool IsActive() override;
  int Unknown71() override;
  const char* Unknown74() override;
  void OnSelect() override;
  void OnDeselect() override;
  int ACall() override;
  const char* Unknown75() override;
};

const char* BladeResonanceItem::GetMid() {
  return "MID_GmapMenu_Blade";
}

const char* BladeResonanceItem::GetHelpMid() {
  return "刃鳴り";
}

bool BladeResonanceItem::IsDecidable() {
  return (unknown_54_ & 0x4000) == 0;
}

bool BladeResonanceItem::IsActive() {
  return unknown_54_ == 0;
}

int BladeResonanceItem::Unknown71() {
  return 17;
}

const char* BladeResonanceItem::Unknown74() {
  return "MID_GmapMenu_Blade_Help";
}

}

namespace game::gmap {

namespace {

class BoostFarmItem : public SpotMenuItem {
public:
  BoostFarmItem();

  const char* GetMid() override { return "MID_GmapMenu_BoostFarm"; }
  bool IsDecidable() override { return (unknown_54_ & 0x4000) == 0; }
  int ACall() override;
  bool IsActive() override { return unknown_54_ == 0; }
  int Unknown71() override { return 10; }
  const char* Unknown74() override { return "MID_GmapMenu_BoostFarm_Help"; }
  const char* Unknown75() override;
};

[[gnu::used]] BoostFarmItem::BoostFarmItem() = default;

class BoostRecruitItem : public SpotMenuItem {
public:
  BoostRecruitItem();

  const char* GetMid() override { return "MID_GmapMenu_BoostRecruit"; }
  const char* GetHelpMid() override { return "応援演説"; }
  bool IsDecidable() override { return (unknown_54_ & 0x4000) == 0; }
  int ACall() override;
  bool IsActive() override { return unknown_54_ == 0; }
  int Unknown71() override { return 13; }
  const char* Unknown74() override { return "MID_GmapMenu_BoostRecruit_Help"; }
  const char* Unknown75() override;
};

[[gnu::used]] BoostRecruitItem::BoostRecruitItem() = default;

class DestroyHellGateItem : public SpotMenuItem {
public:
  DestroyHellGateItem();

  const char* GetMid() override { return "MID_GmapMenu_HellgateDestroy"; }
  const char* GetHelpMid() override { return "門破壊"; }
  bool IsDecidable() override { return IsActive(); }
  int ACall() override;
  bool IsActive() override;
  int Unknown71() override { return 2; }
  const char* Unknown74() override {
    return "MID_GmapMenu_HellgateDestroy_Help";
  }
};

[[gnu::used]] DestroyHellGateItem::DestroyHellGateItem() = default;

class ContinueMoveMenuItem : public SpotMenuItem {
public:
  ContinueMoveMenuItem();

  const char* GetMid() override { return "MID_GmapMenu_ContinueMove"; }
  bool IsDecidable() override { return (unknown_54_ & 0x4000) == 0; }
  int ACall() override;
  bool IsActive() override { return IsDecidable(); }
  int Unknown71() override { return 23; }
  const char* Unknown74() override { return "MID_GmapMenu_ContinueMove_Help"; }
};

[[gnu::used]] ContinueMoveMenuItem::ContinueMoveMenuItem() = default;

}

}

namespace game::gmap {

class WarpItem : public SpotMenuItem {
public:
  bool IsDecidable() override;
  bool IsActive() override;
  int Unknown71() override;
  const char* GetMid() override;
  const char* GetHelpMid() override;
  int ACall() override;
  const char* Unknown74() override;
  const char* Unknown75() override;
};

bool WarpItem::IsDecidable() {
  return (unknown_54_ & 0x4000) == 0;
}

bool WarpItem::IsActive() {
  return unknown_54_ == 0;
}

int WarpItem::Unknown71() {
  return 3;
}

}

namespace game::gmap {

namespace {

class FixMenuItem : public SpotMenuItem {
public:
  FixMenuItem();

  const char* GetMid() override { return "MID_GmapMenu_Fix"; }
  bool IsDecidable() override;
  int ACall() override;
  bool IsActive() override;
  int Unknown71() override { return 28; }
  const char* Unknown74() override { return "MID_GmapMenu_Fix_Help"; }
};

[[gnu::used]] FixMenuItem::FixMenuItem() = default;

class TraderMenuItem : public SpotMenuItem {
public:
  TraderMenuItem();

  const char* GetMid() override;
  bool IsDecidable() override;
  void OnClose() override;
  int ACall() override;
  bool IsActive() override;
  int Unknown71() override { return 20; }
  bool Unknown72() override { return true; }
};

[[gnu::used]] TraderMenuItem::TraderMenuItem() = default;

}

}
