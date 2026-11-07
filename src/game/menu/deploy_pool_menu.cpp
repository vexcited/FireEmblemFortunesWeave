#pragma GCC visibility push(hidden)
#include "game/game_mode_data.hpp"
#include "game/menu/equip_menu_item_animal_pool_base.hpp"
#include "game/menu/game_menu.hpp"
#include "game/sound/se.hpp"
#include "game/unit.hpp"
#pragma GCC visibility pop

namespace game::gameui {

// The footer key help process, its class is internal to its unit.
class [[gnu::visibility("hidden")]] Footer {
public:
  static Footer* instance_;

  void Refresh(bool immediate);
};

}

namespace game::gameui::Help {

// Shows the help of an animal for the unit in the help part.
void SetAnimalHelp(ui::LayoutAccessor* part, const void* animal,
  const Unit* unit, bool unknown);

}

namespace game::menu {

class DeployPoolMenu : public GameMenu {
public:
  ~DeployPoolMenu() override;

  const char* Unknown42() override { return "L_EquipPool/L_PageTab/L_KeySort"; }

  std::weak_ptr<ui::LayoutAccessor> Unknown50() override {
    return accessor_.GetPart("L_UnitEquipInfo/L_UnitInfo/L_ArrowL");
  }

  std::weak_ptr<ui::LayoutAccessor> Unknown51() override {
    return accessor_.GetPart("L_UnitEquipInfo/L_UnitInfo/L_ArrowR");
  }

  void Unknown76(int result) override;
  void Unknown77(int result) override;
  int Unknown103() override;
  int Unknown105() override;
  virtual void Unknown139();
  virtual const char* Unknown140() { return "MID_SysMenu_Deploy"; }
  virtual void Unknown141();
  // Shows the unit information.
  virtual void Unknown142(Unit* unit) = 0;
  virtual bool Unknown143() { return true; }
  // Whether the unit can be switched to.
  virtual bool Unknown144(Unit* unit) = 0;
  virtual void Unknown145(Unit* unit) = 0;
  virtual int Unknown146() { return 0; }
  int InputUnknown12(int direction, bool loop) override;

protected:
  void Unknown185cd60();

  Unit* unit_;
};

class AnimalPoolMenu : public DeployPoolMenu {
public:
  ~AnimalPoolMenu() override;

  const char* Unknown33() override { return "Common_Equip_AnimalExchange"; }
  const char* Unknown35() override { return "L_EquipPool"; }
  const char* Unknown43(uint8_t kind) override;
  void Unknown57(std::vector<int64_t>& handles) override;
  void Unknown75() override;
  void Unknown84() override;
  void Unknown85() override;
  void Unknown88() override;
  void Unknown93() override;
  void Unknown94() override;
  void Unknown96() override;
  int Unknown102() override { return Unknown16e1a00(); }
  void Unknown128() override;
  void Unknown129() override;
  void Unknown131() override;
  void Unknown139() override;
  void Unknown142(Unit* unit) override;
  bool Unknown144(Unit* unit) override;

  void Unknown145(Unit* unit) override {
    unit_ = unit;
    Unknown16e9cd0();
    Unknown16defa0();
    Unknown185cd60();
  }

  // Shows the help of the animal.
  virtual void Unknown148(const void* animal);
  virtual BasicMenuItem* Unknown149(const void* unknown0,
    const void* unknown1, const void* unknown2, int index, int unknown3);
  // Sorts the animal items.
  virtual bool Unknown150(BasicMenuItem* left, BasicMenuItem* right);
  // Adds the animal items.
  virtual void Unknown151();
  // Shows the decide key of the footer for the current animal.
  virtual void Unknown152();
  virtual bool Unknown153() { return false; }
  const char* ImplUnknown05() override { return "MID_DeployMenu_Animal_Help"; }
  int InputUnknown01() override { return 6; }
};

namespace {

class ProcDeleteAnimalMenu : public AnimalPoolMenu {
public:
  ProcDeleteAnimalMenu();

  int Unknown101() override { return 0; }
  const char* Unknown140() override { return "MID_StableMenu_Release"; }
  bool Unknown143() override { return false; }
  int Unknown146() override { return 1; }
  BasicMenuItem* Unknown149(const void* unknown0, const void* unknown1,
    const void* unknown2, int index, int unknown3) override;
  bool Unknown150(BasicMenuItem* left, BasicMenuItem* right) override;
  void Unknown151() override;

  const char* ImplUnknown05() override {
    return "MID_ReleaseMenu_AnimalSelect_Help";
  }
};

[[gnu::used]] ProcDeleteAnimalMenu::ProcDeleteAnimalMenu() = default;

class ProcDeliveryAnimalMenu : public AnimalPoolMenu {
public:
  ProcDeliveryAnimalMenu();

  void Unknown57(std::vector<int64_t>& handles) override;
  void Unknown84() override;
  void Unknown85() override;
  int Unknown100() override;
  int Unknown101() override;
  const char* Unknown140() override { return "MID_DeliveryMenu_Title"; }
  bool Unknown143() override { return false; }
  int Unknown146() override { return 1; }
  BasicMenuItem* Unknown149(const void* unknown0, const void* unknown1,
    const void* unknown2, int index, int unknown3) override;
  bool Unknown150(BasicMenuItem* left, BasicMenuItem* right) override;
  void Unknown151() override;

  const char* ImplUnknown05() override {
    return "MID_DeliveryMenu_AnimalSelect_Help";
  }

private:
  uint8_t unknown_430_[0x10];
  std::vector<const void*> unknown_440_;
};

[[gnu::used]] ProcDeliveryAnimalMenu::ProcDeliveryAnimalMenu() = default;

}

class LegionPoolMenu : public DeployPoolMenu {
public:
  ~LegionPoolMenu() override;

  const char* Unknown33() override { return "Common_Equip_LegionExchange"; }
  const char* Unknown35() override { return "L_EquipPool"; }
  const char* Unknown43(uint8_t kind) override;
  void Unknown75() override {}
  void Unknown84() override;
  void Unknown85() override;
  void Unknown93() override;
  void Unknown94() override;
  int Unknown102() override;
  void Unknown128() override;
  void Unknown129() override;
  void Unknown131() override;
  void Unknown139() override;
  void Unknown142(Unit* unit) override;
  bool Unknown143() override;
  bool Unknown144(Unit* unit) override;

  void Unknown145(Unit* unit) override {
    unit_ = unit;
    Unknown16e9cd0();
    Unknown16defa0();
    Unknown185cd60();
  }

  int InputUnknown01() override { return 7; }
  const char* ImplUnknown05() override { return "MID_DeployMenu_Legion_Help"; }
};

DeployPoolMenu::~DeployPoolMenu() = default;
AnimalPoolMenu::~AnimalPoolMenu() = default;
LegionPoolMenu::~LegionPoolMenu() = default;

void DeployPoolMenu::Unknown76(int result) {
  if (result != 13) {
    GameMenu::Unknown76(result);
    return;
  }
  sound::PlaySe("SE_SYS_UnitChange_Left");
}

void DeployPoolMenu::Unknown77(int result) {
  if (result != 13) {
    GameMenu::Unknown77(result);
    return;
  }
  sound::PlaySe("SE_SYS_UnitChange_Right");
}

int DeployPoolMenu::InputUnknown12(int direction, bool loop) {
  if (tab_.GetCount() < 1) {
    return 0;
  }
  if (!tab_.Move(direction, loop)) {
    return 14;
  }
  Unknown16de4d0();
  return 13;
}

// The original table holds absolute pointers, an internal one would be
// turned into relative offsets.
[[gnu::visibility("hidden")]] extern const char* const kAnimalStatusLabels[7];

const char* const kAnimalStatusLabels[7] = {
  "MID_Sys_RideLv",
  "MID_Sys_Str",
  "MID_Sys_Mag",
  "MID_Sys_Spd",
  "MID_Sys_Def",
  "MID_Sys_Res",
  "MID_Sys_Tec",
};

[[gnu::visibility("hidden")]] extern const char* const kRideLabels[5];

const char* const kRideLabels[5] = {
  "MID_Sys_Ride_Horse",
  "MID_Sys_Ride_Ostrich",
  "MID_Sys_Ride_Pegasus",
  "MID_Sys_Ride_Dragon",
  "MID_Sys_Ride_Elephant",
};

[[gnu::visibility("hidden")]] extern const char* const kLegionStatusLabels[10];

const char* const kLegionStatusLabels[10] = {
  "MID_DeployMenu_Command",
  "MID_Sys_Str",
  "MID_Sys_Mag",
  "MID_Sys_Spd",
  "MID_Sys_Lck",
  "MID_Sys_Def",
  "MID_Sys_Res",
  "MID_Sys_Tec",
  "MID_Sys_Cha",
  "MID_Sys_Award",
};

const char* LegionPoolMenu::Unknown43(uint8_t kind) {
  if (static_cast<uint8_t>(kind - 1) > 9) {
    return "MID_Menu_Default";
  }
  return kLegionStatusLabels[kind - 1];
}

// The legions stay locked during the first restricted chapter.
bool LegionPoolMenu::Unknown143() {
  return !GameModeData::IsVariableSet("拠点_セオドラ篇1部4章_行動制限1");
}

const char* AnimalPoolMenu::Unknown43(uint8_t kind) {
  if (static_cast<uint8_t>(kind - 1) > 6) {
    return "MID_Menu_Default";
  }
  return kAnimalStatusLabels[kind - 1];
}

// Names the ride kind of the shown page.
void AnimalPoolMenu::Unknown85() {
  uint8_t kind = tab_.GetCurrent();
  const char* mid = static_cast<unsigned>(kind) - 1 > 4 ? "MID_Menu_All" :
    kRideLabels[kind - 1];
  accessor_3b8_.SetTextBoxMessage("T_Type", mid);
  AnimalPoolMenu::Unknown142(unit_);
  Unknown152();
}

void AnimalPoolMenu::Unknown88() {
  if (auto* item = dynamic_cast<EquipMenuItem_AnimalPool_Base*>(current_)) {
    Unknown148(item->Unknown70());
  }
  Unknown152();
}

void AnimalPoolMenu::Unknown96() {
  BasicMenu::Unknown96();
  int state = Unknown21();
  if (state < 2 || state > 7) {
    ImplUnknown12();
  }
  Unknown152();
}

void AnimalPoolMenu::Unknown139() {
  DeployPoolMenu::Unknown139();
  if (auto* item = dynamic_cast<EquipMenuItem_AnimalPool_Base*>(current_)) {
    Unknown148(item->Unknown70());
  }
  Unknown152();
}

void LegionPoolMenu::Unknown131() {
  if (gameui::Footer* footer = gameui::Footer::instance_) {
    footer->Refresh(false);
  }
}

void AnimalPoolMenu::Unknown131() {
  if (gameui::Footer* footer = gameui::Footer::instance_) {
    footer->Refresh(false);
  }
}

void AnimalPoolMenu::Unknown148(const void* animal) {
  std::weak_ptr<ui::LayoutAccessor> part = accessor_.GetPart("L_Help");
  const Unit* unit = unit_;
  bool unknown = Unknown153();
  if (std::shared_ptr<ui::LayoutAccessor> locked = part.lock()) {
    gameui::Help::SetAnimalHelp(locked.get(), animal, unit, unknown);
  }
}

}
