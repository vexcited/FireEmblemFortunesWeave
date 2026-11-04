#pragma once

#include "game/menu/sub_menu_item.hpp"

namespace game::menu {

class AssistMenuItem_NextTimeline : public SubMenuItem {
public:
  AssistMenuItem_NextTimeline();

  const char* GetMid() override;
  bool IsDecidable() override;
  void OnClose() override;
  int ACall() override;
  bool IsActive() override;
};

}
