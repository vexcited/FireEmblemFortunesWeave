#pragma GCC visibility push(hidden)
#include "game/gameui/hp_stock.hpp"
#include "game/unit.hpp"
#pragma GCC visibility pop

#include "ui/layout_accessor.hpp"

namespace game::gameui {

void SetHpStock(ui::LayoutAccessor& part, const Unit* unit) {
  if (unit == nullptr) {
    return;
  }
  if (unit->GetHpStock() == 0) {
    part.SetVisible(false);
    return;
  }

  part.SetVisible(true);
  if (!part.IsAnimationPlaying("Num", false)) {
    part.PlayAnimation("Num", 0.0f);
  }
  if (part.GetAnimationFrame("Num", false) != unit->GetHpStock()) {
    part.SetAnimationFrame("Num", false, unit->GetHpStock());
  }
  if (!part.IsAnimationPlaying("Wait", false)) {
    part.PlayAnimation("Wait", 1.0f);
  }
}

}
