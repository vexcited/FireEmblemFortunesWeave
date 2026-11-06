#include <cstdint>

#include "game/game_mode_data.hpp"
#include "game/gmap/blade_resonance.hpp"
#include "game/gmap/cursor.hpp"
#include "game/gmap/gmap_situation.hpp"
#include "game/gmap/proc_gmap_event.hpp"
#include "game/gmap/proc_gmap_phase_seq.hpp"
#include "game/gmap/proc_gmap_seq.hpp"
#include "game/gmap/spot.hpp"
#include "game/gmap/troop_mgr.hpp"
#include "game/menu/basic_menu.hpp"
#include "game/menu/unit_command_menu_item.hpp"
#include "game/sound/se.hpp"

namespace game {

namespace menu {

extern const char* g_mid_cause_invalid;
extern const char* g_mid_cause_shortage_material;

}

// The menu items reach the phase sequence through the global offset table.
extern template class __attribute__((visibility("default")))
  ProcSingleton<gmap::ProcGmapPhaseSeq>;
extern template class __attribute__((visibility("default")))
  ProcSingleton<gmap::ProcGmapSeq>;
extern template class __attribute__((visibility("default")))
  ProcSingleton<gmap::ProcGmapEvent>;

}

namespace game::gmap {

void OpenBoostFarm(menu::BasicMenu* menu);

void OpenTalk(menu::BasicMenu* menu);

void OpenCarriage(menu::BasicMenu* menu);

bool CanOpenShopGuide(Spot* spot);

void OpenShopGuide(menu::BasicMenu* menu, Spot* spot);

void OpenCallAnimal(menu::BasicMenu* menu);

// Tests one of the world map progress variables by its kind.
bool CheckGmapFlag(int kind);

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

  int ACall() override {
    if (!IsActive()) {
      return 1;
    }
    OpenCarriage(menu_->GetParent());
    return 9;
  }

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

  int ACall() override {
    if (!IsActive()) {
      return 1;
    }
    OpenTalk(menu_->GetParent());
    return 9;
  }

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
  void PlayDecideSe() override { sound::PlaySe("SE_SYS_Decide_H"); }
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

private:
  bool force_boost_;
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

  int ACall() override {
    if (!IsActive()) {
      return 1;
    }
    OpenBoostFarm(menu_->GetParent());
    return 9;
  }

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

struct TraderInfo {
  uint8_t unknown_00_[0x28];
  const char* mid;
};

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

private:
  const TraderInfo* trader_;
};

[[gnu::used]] TraderMenuItem::TraderMenuItem() = default;

}

}

namespace game::gmap {

using menu::g_mid_cause_invalid;
using menu::g_mid_cause_shortage_material;

const char* EnterMenuItem::GetMid() {
  switch (unknown_56_) {
    case 1:
    case 2:
    case 7:
      return "MID_GmapMenu_MainQuest";
    case 3:
    case 5:
      return "MID_GmapMenu_Enter";
    case 4:
      return "MID_GmapMenu_Dungeon";
    case 6:
      return "MID_GmapMenu_Hellgate";
    default:
      return nullptr;
  }
}

const char* EnterMenuItem::GetHelpMid() {
  return unknown_56_ == 6 ? "冥界の門" : nullptr;
}

const char* EnterMenuItem::Unknown74() {
  switch (unknown_56_) {
    case 1:
    case 2:
    case 7:
      return "MID_GmapMenu_MainQuest_Help";
    case 3:
    case 5:
      return "MID_GmapMenu_Enter_Help";
    case 4:
      return "MID_GmapMenu_Dungeon_Help";
    case 6:
      return "MID_GmapMenu_Hellgate_Help";
    default:
      return nullptr;
  }
}

const char* EnterMenuItem::Unknown75() {
  return IsActive() ? nullptr : g_mid_cause_invalid;
}

const char* RecruitItem::GetMid() {
  return force_boost_ ? "MID_GmapMenu_Recruit_ForceBoost"
    : "MID_GmapMenu_Recruit";
}

const char* RecruitItem::GetHelpMid() {
  return force_boost_ ? "兵士大募集" : "兵士募集";
}

const char* RecruitItem::Unknown74() {
  return force_boost_ ? "MID_GmapMenu_Recruit_ForceBoost_Help"
    : "MID_GmapMenu_Recruit_Help";
}

const char* BoostFarmItem::Unknown75() {
  if (unknown_54_ & 0x1) {
    return "MID_Menu_Cause_InvalidBoostFarm";
  }
  return unknown_54_ & 0x80 ? g_mid_cause_shortage_material : nullptr;
}

const char* CorpsCreateItem::Unknown75() {
  if (IsActive() || (unknown_54_ & 0x40) == 0) {
    return nullptr;
  }
  return "MID_Menu_Cause_NotCorpsPool";
}

const char* BoostRecruitItem::Unknown75() {
  return unknown_54_ & 0x1 ? "MID_Menu_Cause_CompletedBoostRecruit" : nullptr;
}

const char* CarriageMenuItem::Unknown75() {
  return unknown_54_ != 0 ? g_mid_cause_invalid : nullptr;
}

const char* ReconstructionMenuItem::Unknown75() {
  return IsActive() ? nullptr : g_mid_cause_shortage_material;
}

const char* BladeResonanceItem::Unknown75() {
  if (unknown_54_ & 0x2000) {
    return "MID_Menu_Cause_ShortageBlade";
  }
  return unknown_54_ != 0 ? g_mid_cause_invalid : nullptr;
}

const char* WarpItem::Unknown75() {
  return IsActive() ? nullptr : g_mid_cause_invalid;
}

int DestroyMiasmaMenuItem::ACall() {
  if (!IsActive()) {
    return 1;
  }
  ProcGmapPhaseSeq::GetInstance()->RequestCommand(
    ProcGmapPhaseSeq::kCommandDestroyMiasma);
  return 4;
}

int ContinueMoveMenuItem::ACall() {
  if (!IsActive()) {
    return 1;
  }
  GmapSituation::GetInstance()->RequestContinueMove();
  ProcGmapPhaseSeq::GetInstance()->RequestCommand(
    ProcGmapPhaseSeq::kCommandMove);
  return 4;
}

int FixMenuItem::ACall() {
  if (!IsActive()) {
    return 1;
  }
  ProcGmapPhaseSeq::GetInstance()->RequestCommand(
    ProcGmapPhaseSeq::kCommandMove);
  return 4;
}

}

namespace game::gmap {

namespace {

// The running event takes the command first, then the phase sequence.
void RequestCommand(ProcGmapPhaseSeq::Command command) {
  if (ProcGmapEvent* event = ProcGmapEvent::GetInstance()) {
    event->RequestCommand(command);
  }
  else if (ProcGmapPhaseSeq* phase = ProcGmapPhaseSeq::GetInstance()) {
    phase->RequestCommand(command);
  }
  else {
    ProcGmapSeq::GetInstance()->RequestCommand(command);
  }
}

bool IsClockSet() {
  const GmapClock* clock = GmapClock::instance_;
  if (clock == nullptr) {
    return false;
  }
  const GmapTime& time = clock->GetUnknown14();
  return time.month != 0 && time.year != 0 && time.day != 0;
}

bool IsFreeTroopOfPlayer(const Troop* troop) {
  const GameModeData* data = GameModeData::GetInstance();
  return troop->IsFree() && data != nullptr &&
    data->GetMode() == GameModeData::kModeClear && troop->IsPlayer();
}

}

int SpotMenuItem::ZRCall() {
  const GmapClock* clock = GmapClock::instance_;
  if (clock == nullptr) {
    return 0;
  }
  const GmapTime& time = clock->GetUnknown14();
  if (time.year * time.month * time.day == 0) {
    return 0;
  }
  if (GmapSituation::GetInstance()->GetUnknown3b() != 1) {
    return 0;
  }
  Spot* spot = Cursor::GetInstance()->GetImpl()->GetSpot();
  if (spot == nullptr || !CanOpenShopGuide(spot)) {
    return 0;
  }
  sound::PlaySe("SE_SYS_GMAP_ShopGuideMenu_Open");
  OpenShopGuide(menu_, spot);
  return 13;
}

void SpotMenuItem::PlayCancelSe() {
  const Troop* troop = TroopMgr::GetCurrentTroop();
  if (IsFreeTroopOfPlayer(troop)) {
    sound::PlaySe("SE_SYS_Cancel_M");
  }
  else {
    sound::PlaySe("SE_SYS_GMAP_Cancel_Spot");
  }
}

bool EnterMenuItem::IsActive() {
  const Troop* troop = TroopMgr::GetCurrentTroop();
  if (!IsDecidable()) {
    return false;
  }
  if (!IsFreeTroopOfPlayer(troop)) {
    return true;
  }
  return !GameModeData::IsVariableSet("GMAP_イシュマール_宿泊済");
}

int SideStoryMenuItem::ACall() {
  const char* mid = GetMid();
  if (mid != nullptr && ProcGmapPhaseSeq::GetInstance() != nullptr) {
    ProcGmapPhaseSeq::GetInstance()->SetMid(mid);
  }
  if (ProcGmapPhaseSeq::GetInstance() != nullptr) {
    ProcGmapPhaseSeq::GetInstance()->Unknown14d5420();
  }
  return 2;
}

bool SideStoryMenuItem::IsActive() {
  return TroopMgr::GetCurrentTroop()->GetCurrentSpot()->HasSideStory();
}

int ExploreMenuItem::ACall() {
  if (!IsActive()) {
    return 1;
  }
  RequestCommand(ProcGmapPhaseSeq::kCommandExplore);
  return 2;
}

int CaptureAnimalMenuItem::ACall() {
  if (!IsActive()) {
    return 1;
  }
  RequestCommand(ProcGmapPhaseSeq::kCommandCaptureAnimal);
  return 2;
}

void BladeResonanceItem::OnDeselect() {
  SpotMenuItem::OnDeselect();
  BladeResonance::GetInstance()->GetImpl()->Unknown14b8270();
}

bool FixMenuItem::IsDecidable() {
  const GameModeData* data = GameModeData::GetInstance();
  if (data != nullptr && data->GetMode() == GameModeData::kModeChapter) {
    return true;
  }
  return TroopMgr::GetCurrentTroopId() >= 0;
}

bool FixMenuItem::IsActive() {
  if (GmapSituation::GetInstance()->IsUnknown34()) {
    return false;
  }
  return FixMenuItem::IsDecidable();
}

const char* TraderMenuItem::GetMid() {
  return trader_->mid;
}

bool TraderMenuItem::IsDecidable() {
  return IsClockSet();
}

bool TraderMenuItem::IsActive() {
  return IsClockSet();
}

}

namespace game::gmap {

namespace {

bool IsModeClear() {
  const GameModeData* data = GameModeData::GetInstance();
  return data != nullptr && data->GetMode() == GameModeData::kModeClear;
}

const Spot* GetCurrentSpot() {
  return TroopMgr::GetCurrentTroop()->GetCurrentSpot();
}

}

int CallAnimalMenuItem::ACall() {
  if (!IsActive()) {
    return 1;
  }
  OpenCallAnimal(menu_->GetParent());
  return 9;
}

const char* CallAnimalMenuItem::Unknown75() {
  return unknown_54_ & 0x80 ? "MID_Menu_Cause_ShortageFood" : nullptr;
}

const char* BanquetMenuItem::Unknown75() {
  if (unknown_54_ & 0x2000) {
    return "MID_Menu_Cause_Complete_Heal";
  }
  return unknown_54_ & 0x80 ? "MID_Menu_Cause_ShortageFood" : nullptr;
}

// Farm spots have the type 14 once a farm was made there.
const char* MakeFarmItem::GetMid() {
  if (GetCurrentSpot()->GetType() == 14) {
    return "MID_GmapMenu_ReMakeFarm";
  }
  return "MID_GmapMenu_MakeFarm";
}

const char* MakeFarmItem::Unknown74() {
  if (GetCurrentSpot()->GetType() == 14) {
    return "MID_GmapMenu_ReMakeFarm_Help";
  }
  return "MID_GmapMenu_MakeFarm_Help";
}

const char* WarpItem::GetMid() {
  return GetCurrentSpot()->IsExPortal() ? "MID_Access_ExPortal"
    : "MID_Access_GodlyPortal";
}

const char* WarpItem::GetHelpMid() {
  return GetCurrentSpot()->IsExPortal() ? nullptr : "神の道の門";
}

const char* WarpItem::Unknown74() {
  return GetCurrentSpot()->IsExPortal() ? "MID_GmapMenu_ExPortal_Help"
    : "MID_GmapMenu_GodlyPortal_Help";
}

const char* DispatchItem::GetMid() {
  const Spot* spot = GetCurrentSpot();
  if (spot == nullptr) {
    return "";
  }
  if ((spot->GetFlags() & 4) && IsModeClear()) {
    return "MID_GmapMenu_LegionDispatch_Reconstruction";
  }
  switch (spot->GetType()) {
    case 5:
    case 9:
      return "MID_GmapMenu_LegionDispatch_Explore";
    case 8:
      return "MID_GmapMenu_LegionDispatch_Fort";
    default:
      return "";
  }
}

const char* DispatchItem::GetHelpMid() {
  const Spot* spot = GetCurrentSpot();
  if (spot == nullptr) {
    return nullptr;
  }
  if ((spot->GetFlags() & 4) && IsModeClear()) {
    return "復興時間の短縮";
  }
  switch (spot->GetType()) {
    case 5:
    case 9:
      return "派兵";
    case 8:
      return "スポット「砦」";
    default:
      return nullptr;
  }
}

}

namespace game::gmap {

void BladeResonanceItem::OnSelect() {
  GameMenuItem::OnSelect();
  Unknown16ef450();
  const BladeResonanceImpl* impl = BladeResonance::GetInstance()->GetImpl();
  if (!impl->IsReady()) {
    if (!CheckGmapFlag(5) || impl->GetUnknown10() != nullptr) {
      return;
    }
    const int power = impl->GetPower();
    const HashedString key("Gmap_刃鳴り_パワー_必要量");
    const GameVariable* needed = GameModeData::FindVariable(key);
    if (power < (needed != nullptr ? needed->value : 0)) {
      return;
    }
  }
  if (unknown_54_ & 1) {
    return;
  }
  BladeResonance::GetInstance()->GetImpl()->ShowRange();
}

}
