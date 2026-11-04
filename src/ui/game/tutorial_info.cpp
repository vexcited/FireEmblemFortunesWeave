#include "ui/game/tutorial_info.hpp"

namespace game::menu {

std::shared_ptr<TutorialInfoImpl> MakeTutorialInfo(void* owner,
  void* context) {
  return ui::ILayoutControl::Create<TutorialInfoImpl>(owner, context, true);
}

}
