#include "game/hub/character.hpp"

namespace game::hub {

void CharacterBehavior::SetEnableRunning(bool isEnable) {
  if (isEnable) {
    isEnableRunning_ = true;
    UpdateRunning();
    return;
  }

  isEnableRunning_ = false;
  if (std::shared_ptr<CharacterAction> action = current_.lock()) {
    action->Unknown02();
  }
  current_.reset();
}

}
