#include <cstdint>
#include <memory>

#include "game/menu/game_menu_item.hpp"
#include "game/sound/se.hpp"

namespace game::hub {

class FastTravelPoint;

namespace {

class FastTravelMenuItem : public menu::GameMenuItem {
public:
  bool IsDecidable() override;
  void DrawText() override;
  virtual void Unknown70() {}

protected:
  std::shared_ptr<FastTravelPoint> point_;
};

class EmptyMenuItem : public FastTravelMenuItem {
public:
  EmptyMenuItem();

  const char* GetMid() override { return "MID_Sys_Empty"; }
  bool IsDecidable() override { return true; }
  int ACall() override { return 0; }
  bool IsActive() override { return true; }
  bool IsEmpty() override { return true; }
  void Unknown70() override;
};

[[gnu::used]] EmptyMenuItem::EmptyMenuItem() = default;

class AreaMenuItem : public FastTravelMenuItem {
public:
  AreaMenuItem();

  const char* GetMid() override;
  int ACall() override;
  void PlayDecideSe() override { sound::PlaySe("SE_SYS_Decide_H_Light"); }
  void DrawText() override;
  void Unknown70() override;

private:
  void* unknown_68_;
  std::shared_ptr<FastTravelPoint> area_;
};

[[gnu::used]] AreaMenuItem::AreaMenuItem() = default;

class FacilityMenuItem : public FastTravelMenuItem {
public:
  FacilityMenuItem();

  void Unknown17() override;
  int ACall() override;
  void PlayDecideSe() override { sound::PlaySe("SE_SYS_Decide_H_Light"); }
  void DrawText() override;
  void Unknown70() override;

private:
  void* unknown_68_;
  std::shared_ptr<FastTravelPoint> facility_;
};

[[gnu::used]] FacilityMenuItem::FacilityMenuItem() = default;

class UnitMenuItem : public FastTravelMenuItem {
public:
  UnitMenuItem();

  void Unknown17() override;
  int ACall() override;
  void PlayDecideSe() override { sound::PlaySe("SE_SYS_Decide_H_Light"); }
  void DrawText() override;
  void Unknown70() override;

private:
  uint8_t unknown_68_[0x20];
  std::shared_ptr<FastTravelPoint> unit_;
};

[[gnu::used]] UnitMenuItem::UnitMenuItem() = default;

}

}
