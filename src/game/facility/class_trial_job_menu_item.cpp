#include <cstdint>

#include "game/facility/class_change_job_menu_item.hpp"

namespace game::facility {

namespace {

class ClassTrialJobMenuItem : public facility::ClassChangeJobMenuItem {
public:
  ClassTrialJobMenuItem();

  void DrawText() override;
  bool IsActive() override;
  int Unknown70() override { return 0; }
  bool Unknown71() override { return unknown_68_; }

private:
  uint8_t unknown_53_[0x15];
  bool unknown_68_;
};

[[gnu::used]] ClassTrialJobMenuItem::ClassTrialJobMenuItem() = default;

}

}
