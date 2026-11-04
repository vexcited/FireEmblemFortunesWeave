#include <functional>

#include "game/menu/basic_menu.hpp"
#include "game/menu/sub_menu_item.hpp"
#include "game/menu/title_menu_item.hpp"

namespace game::facility {

void OpenRideDepository(menu::BasicMenu* menu);

void OpenLegionDepository(menu::BasicMenu* menu);

void OpenMaterialDepository(menu::BasicMenu* menu);

void OpenTransporterDepository(menu::BasicMenu* menu);

void OpenMemoryList(menu::BasicMenu* menu, bool movie);
bool HasMemory(bool movie);
void OpenRelianceMemory(menu::BasicMenu* menu);
void OpenSoundRoom(menu::BasicMenu* menu);
void OpenObeliskDestiny(menu::BasicMenu* menu);
void OpenObeliskCausation(menu::BasicMenu* menu);
void OpenUnitMerge(menu::BasicMenu* menu);

namespace {

class MemoryMenuItem : public menu::TitleMenuItem {
public:
  MemoryMenuItem();

  const char* GetMid() override { return "MID_ObeliskMenu_Memory"; }

  void OnClose() override {
    GameMenuItem::OnClose();
    help_ = nullptr;
    UpdateHelp();
  }

  int ACall() override;
  const char* Unknown70() override { return "MID_ObeliskMenu_Memory_Help"; }
  const char* Unknown71() override { return help_; }
  bool Unknown72() override { return false; }

private:
  const char* help_;
};

[[gnu::used]] MemoryMenuItem::MemoryMenuItem() = default;

class MemoryBaseMenuItem : public menu::SubMenuItem {
public:
  void OnSelect() override {
    GameMenuItem::OnSelect();
    if (on_help_) {
      on_help_(Unknown71());
    }
  }

  virtual const char* Unknown71() {
    return IsActive() ? nullptr : "MID_Menu_Cause_NoCleared";
  }

protected:
  std::function<void(const char*)> on_help_;
};

class MemoryMovieMenuItem : public MemoryBaseMenuItem {
public:
  MemoryMovieMenuItem();

  const char* GetMid() override { return "MID_ObeliskMenu_Memory_Movie"; }

  int ACall() override {
    if (!IsActive()) {
      return 1;
    }
    OpenMemoryList(menu_->GetParent(), true);
    return 9;
  }

  bool IsActive() override { return HasMemory(true); }
};

[[gnu::used]] MemoryMovieMenuItem::MemoryMovieMenuItem() = default;

class MemoryEventMenuItem : public MemoryBaseMenuItem {
public:
  MemoryEventMenuItem();

  const char* GetMid() override { return "MID_ObeliskMenu_Memory_Event"; }

  int ACall() override {
    if (!IsActive()) {
      return 1;
    }
    OpenMemoryList(menu_->GetParent(), false);
    return 9;
  }

  bool IsActive() override { return HasMemory(false); }
};

[[gnu::used]] MemoryEventMenuItem::MemoryEventMenuItem() = default;

class MemorySoundMenuItem : public MemoryBaseMenuItem {
public:
  MemorySoundMenuItem();

  const char* GetMid() override { return "MID_ObeliskMenu_Memory_Sound"; }

  int ACall() override {
    OpenSoundRoom(menu_->GetParent());
    return 9;
  }

  bool IsActive() override { return true; }
};

[[gnu::used]] MemorySoundMenuItem::MemorySoundMenuItem() = default;

class MemoryRelianceMenuItem : public MemoryBaseMenuItem {
public:
  MemoryRelianceMenuItem();

  const char* GetMid() override {
    return "MID_ObeliskMenu_Memory_Reliance";
  }

  int ACall() override {
    if (!IsActive()) {
      return 1;
    }
    OpenRelianceMemory(menu_->GetParent());
    return 9;
  }

  bool IsActive() override;
  const char* Unknown71() override;
};

[[gnu::used]] MemoryRelianceMenuItem::MemoryRelianceMenuItem() = default;

class ObeliskDestinyMenuItem : public menu::TitleMenuItem {
public:
  ObeliskDestinyMenuItem();

  const char* GetMid() override { return "MID_ObeliskMenu_Destiny"; }
  const char* GetHelpMid() override { return "運命の記録・因果の扉"; }

  int ACall() override {
    OpenObeliskDestiny(menu_->GetParent());
    return 9;
  }

  const char* Unknown70() override { return "MID_ObeliskMenu_Destiny_Help"; }
};

[[gnu::used]] ObeliskDestinyMenuItem::ObeliskDestinyMenuItem() = default;

class ObeliskCausationMenuItem : public menu::TitleMenuItem {
public:
  ObeliskCausationMenuItem();

  const char* GetMid() override { return "MID_ObeliskMenu_Causation"; }
  const char* GetHelpMid() override { return "運命の記録・因果の扉"; }

  int ACall() override {
    OpenObeliskCausation(menu_->GetParent());
    return 9;
  }

  const char* Unknown70() override {
    return "MID_ObeliskMenu_Causation_Help";
  }
};

[[gnu::used]] ObeliskCausationMenuItem::ObeliskCausationMenuItem() = default;

class CausationMergeMenuItem : public menu::TitleMenuItem {
public:
  CausationMergeMenuItem();

  const char* GetMid() override { return "MID_ObeliskMenu_UnitMarge"; }
  const char* GetHelpMid() override { return "ユニットマージ"; }

  int ACall() override {
    if (!IsActive()) {
      return 1;
    }
    OpenUnitMerge(menu_->GetParent());
    return 9;
  }

  const char* Unknown70() override {
    return "MID_ObeliskMenu_UnitMarge_Help";
  }

  const char* Unknown71() override {
    return IsActive() ? nullptr : "MID_Menu_Cause_NotPerson";
  }
};

[[gnu::used]] CausationMergeMenuItem::CausationMergeMenuItem() = default;

class CausationTransporterMenuItem : public menu::TitleMenuItem {
public:
  CausationTransporterMenuItem();

  const char* GetMid() override { return "MID_ObeliskMenu_Depository"; }
  const char* GetHelpMid() override { return "方尖塔倉庫"; }
  int ACall() override;

  const char* Unknown70() override {
    return "MID_ObeliskMenu_Depository_Help";
  }
};

[[gnu::used]]
CausationTransporterMenuItem::CausationTransporterMenuItem() = default;

class TransporterDepositoryMenuItem : public menu::SubMenuItem {
public:
  TransporterDepositoryMenuItem();

  const char* GetMid() override { return "MID_BtlMenu_Transport"; }

  int ACall() override {
    if (!IsActive()) {
      return 1;
    }
    OpenTransporterDepository(menu_->GetParent());
    return 9;
  }

  void DrawText() override;
};

[[gnu::used]]
TransporterDepositoryMenuItem::TransporterDepositoryMenuItem() = default;

class MaterialDepositoryMenuItem : public menu::SubMenuItem {
public:
  MaterialDepositoryMenuItem();

  const char* GetMid() override { return "MID_SysMenu_Material"; }

  int ACall() override {
    if (!IsActive()) {
      return 1;
    }
    OpenMaterialDepository(menu_->GetParent());
    return 9;
  }

  void DrawText() override;
};

[[gnu::used]]
MaterialDepositoryMenuItem::MaterialDepositoryMenuItem() = default;

class LegionDepositoryMenuItem : public menu::SubMenuItem {
public:
  LegionDepositoryMenuItem();

  const char* GetMid() override { return "MID_DeployMenu_Legion"; }

  int ACall() override {
    if (!IsActive()) {
      return 1;
    }
    OpenLegionDepository(menu_->GetParent());
    return 9;
  }

  void DrawText() override;
};

[[gnu::used]] LegionDepositoryMenuItem::LegionDepositoryMenuItem() = default;

class RideDepositoryMenuItem : public menu::SubMenuItem {
public:
  RideDepositoryMenuItem();

  const char* GetMid() override { return "MID_DeployMenu_Ride"; }

  int ACall() override {
    if (!IsActive()) {
      return 1;
    }
    OpenRideDepository(menu_->GetParent());
    return 9;
  }

  void DrawText() override;
};

[[gnu::used]] RideDepositoryMenuItem::RideDepositoryMenuItem() = default;

class DownDifficultyItem : public menu::TitleMenuItem {
public:
  DownDifficultyItem();

  const char* GetMid() override { return "MID_ObeliskMenu_DownDifficulty"; }
  int ACall() override;

  const char* Unknown70() override {
    return "MID_ObeliskMenu_DownDifficulty_Help";
  }
};

[[gnu::used]] DownDifficultyItem::DownDifficultyItem() = default;

}

}
