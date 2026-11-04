#pragma once

#include <functional>

#include "game/menu/game_menu_item.hpp"

namespace game::menu {

class DialogMenuItem : public GameMenuItem {
public:
  using Callback = std::function<int(DialogMenuItem*)>;

  int ACall() override;
  int BCall() override;
  void DrawText() override;
  const char16_t* GetText() override;
  bool Unknown14() override { return true; }

protected:
  bool icon_state_;
  Callback on_decide_;
  Callback on_cancel_;
};

}
