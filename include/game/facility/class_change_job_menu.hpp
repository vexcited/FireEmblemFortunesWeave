#pragma once

#include <cstdint>
#include <memory>

#include "game/facility/facility_menu.hpp"
#include "game/unit.hpp"

namespace game::facility {

#pragma GCC visibility push(hidden)

class ClassChangeJobMenu : public FacilityMenu {
public:
  enum Mode : uint8_t {
    kModeTrial,
    kModeChange,
  };

  ~ClassChangeJobMenu() override;

  void Unknown30(bool enable) override;
  const char* Unknown33() override { return "Hub_Temple_JobSelect"; }
  const char* Unknown35() override { return "L_ClassSelect"; }

  std::weak_ptr<ui::LayoutAccessor> Unknown50() override {
    return accessor_.GetPart("L_ArrowL");
  }

  std::weak_ptr<ui::LayoutAccessor> Unknown51() override {
    return accessor_.GetPart("L_ArrowR");
  }

  bool Unknown64() override { return true; }

  const char* Unknown67() override {
    switch (mode_) {
      case kModeTrial:
        return "資格試験";
      case kModeChange:
        return "兵種変更";
    }
    return nullptr;
  }

  void Unknown75() override {}
  void Unknown76(int result) override;
  void Unknown77(int result) override;
  void Unknown78(int result) override;
  void Unknown84() override;
  void Unknown88() override;
  void Unknown92() override;
  void Unknown96() override;
  int Unknown100() override;
  int Unknown101() override;
  int Unknown102() override;
  int Unknown103() override;
  int Unknown105() override;
  int Unknown107() override;
  int Unknown109() override;
  int Unknown112() override;
  void Unknown128() override;
  void Unknown129() override;
  void Unknown131() override;
  void Unknown133() override;
  uint8_t ImplUnknown08() override { return 0; }
  int InputUnknown01() override { return 8; }

  const char* ImplUnknown03() override {
    return "MID_TempleMenu_ClassChange";
  }

  const char* ImplUnknown05() override {
    return "MID_ClassChangeMenu_JobSelect_Help";
  }

  int ImplUnknown10() override;
  virtual bool Unknown144() { return true; }
  virtual void Unknown145();
  virtual void Unknown146(uint8_t rank);
  virtual void Unknown147();
  virtual bool Unknown148(uint8_t rank);
  int InputUnknown12(int direction, bool loop) override;

protected:
  game::Unit* unit_;
  game::Unit unit_430_;
  game::Unit unit_ce0_;
  Mode mode_;
  uint8_t unknown_1591_[7];
  bool unknown_1598_;
};

#pragma GCC visibility pop

}
