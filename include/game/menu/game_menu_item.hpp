#pragma once

#include <string>

#include "game/menu/basic_menu.hpp"
#include "game/menu/basic_menu_item.hpp"

namespace game::menu {

class GameMenuItem : public BasicMenuItem {
public:
  using BasicMenuItem::BasicMenuItem;

  bool IsEnable() override { return enable_; }
  bool IsDecidable() override { return decidable_; }
  void SetSelected(bool selected) override;
  void Draw() override;

  // Link time optimization inlined these into other translation units.
  void OnSelect() override {
    if (selected_) {
      PlaySelectedAnimation();
    }
    else {
      PlayCursorAnimation();
    }
  }

  void OnDeselect() override {
    if (selected_) {
      PlaySelectedAnimation();
    }
    else {
      PlayIdleAnimation();
    }
  }

  void OnClose() override {
    if (menu_->GetCurrentItem() == this) {
      ChangeSelect(false);
    }
  }


  virtual void DrawText();
  virtual void SetEnable(bool enable) { enable_ = enable; }
  virtual void SetDecidable(bool decidable) { decidable_ = decidable; }
  virtual bool IsActive() { return active_; }
  virtual void SetActive(bool active) { active_ = active; }
  virtual bool IsEmpty() { return false; }
  virtual bool IsFixed() { return false; }
  virtual bool IsEquip() { return false; }
  virtual void PlayIdleAnimation();
  virtual void PlayCursorAnimation();
  virtual void PlaySelectedAnimation();
  virtual std::string GetIdleAnimationName();
  virtual std::string GetCursorAnimationName();
  virtual std::string GetSelectedAnimationName();
  virtual const char* GetStateName();

protected:
  void UpdateStateAnimation();

  bool enable_ = true;
  bool decidable_ = true;
  bool active_ = true;
};

}
