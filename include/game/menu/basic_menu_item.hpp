#pragma once

#include <memory>
#include <string>

#include "ui/layout_accessor.hpp"

namespace game::menu {

class BasicMenu;

class BasicMenuItem {
public:
  explicit BasicMenuItem(const char* mid = "") : mid_(mid) {}
  virtual ~BasicMenuItem() = default;

  virtual const char16_t* GetText();
  virtual const char* GetMid() { return mid_.c_str(); }
  virtual const char* GetHelpMid() { return nullptr; }
  virtual bool IsEnable() { return true; }
  virtual bool IsDecidable() { return true; }
  virtual void SetSelected(bool selected) { selected_ = selected; }
  virtual void ChangeSelect(bool selected);
  virtual void GetCursorPosition(float* position, const void* offset);
  virtual float GetWidth();
  virtual float GetHeight();
  virtual void Draw();
  virtual void Unknown13() { unknown_4c_ = true; }
  virtual bool Unknown14() { return false; }
  virtual bool Unknown15() { return false; }
  virtual void Unknown16() {}
  virtual void Unknown17() {}
  virtual void Update();
  virtual void Unknown19() {}
  virtual void OnSelect() {}
  virtual void OnDeselect() {}
  virtual void Unknown22() {}
  virtual void Unknown23() {}
  virtual void OnClose() {}
  virtual int ACall() { return 2; }
  virtual int BCall() { return 3; }
  virtual int XCall() { return 0; }
  virtual int YCall() { return 0; }
  virtual int LCall() { return 0; }
  virtual int RCall() { return 0; }
  virtual int ZLCall() { return 0; }
  virtual int ZRCall() { return 0; }
  virtual int PlusCall() { return 0; }
  virtual int MinusCall() { return 0; }
  virtual int StickLCall() { return 0; }
  virtual int StickRCall() { return 0; }
  virtual int LeftCall() { return 0; }
  virtual int RightCall() { return 0; }
  virtual int UpCall() { return 0; }
  virtual int DownCall() { return 0; }
  virtual void PlayDecideSe();
  virtual void PlayDecideStrongSe();
  virtual void PlayFinishSe();
  virtual void PlayCancelSe();
  virtual void PlayNgSe();
  virtual void PlayChangeSe();
  virtual void PlayACallSe(int result);
  virtual void PlayBCallSe(int result);
  virtual void PlayXCallSe(int result);
  virtual void PlayYCallSe(int result);
  virtual void Unknown51();
  virtual void Unknown52();
  virtual void PlayCursorSe();
  virtual void PlayPageSe();

protected:
  ui::LayoutAccessor& GetAccessor() {
    std::shared_ptr<ui::LayoutAccessor> accessor = accessor_.lock();
    return accessor ? *accessor : ui::LayoutAccessor::empty_;
  }

  BasicMenu* menu_ = nullptr;
  std::string mid_;
  int index_ = 0;
  std::weak_ptr<ui::LayoutAccessor> accessor_;
  nn::util::Float3 position_ = {};
  bool unknown_4c_ = false;
  bool created_ = false;
  bool dirty_ = false;
  bool selected_ = false;
};

}
