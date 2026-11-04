#pragma once

#include <memory>

#include "game/menu/game_menu_item.hpp"

namespace game::menu {

class TitleMenuEffect;

class TitleMenuItem : public GameMenuItem {
public:
  ~TitleMenuItem() override;

  bool Unknown14() override { return true; }
  void Unknown19() override;
  void OnSelect() override;
  void DrawText() override;
  void PlayIdleAnimation() override;
  void PlayCursorAnimation() override;
  virtual const char* Unknown70();
  virtual const char* Unknown71() { return nullptr; }
  virtual bool Unknown72() { return selected_; }

protected:
  void UpdateHelp();

  std::shared_ptr<TitleMenuEffect> effect_;
};

}
