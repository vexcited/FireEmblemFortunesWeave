#pragma once

#include <cstdint>
#include <memory>
#include <string_view>

#include "ui/event_listener.hpp"
#include "ui/layout.hpp"
#include "ui/layout_control.hpp"

namespace ui::control {

#pragma GCC visibility push(hidden)

class Element : public ILayoutControl, public IEventListener {
public:
  static std::shared_ptr<ILayoutControl> CreateControl(
    const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    Layout* owner);

  ~Element() override;

  std::shared_ptr<ILayoutControl> Clone(
    nn::ui2d::Layout* layout) const override;
  void Update() override;
  bool IsVisible() const override;
  void SetVisible(bool visible) override;
  nn::ui2d::Size GetSize() const override;
  void SetSize(const nn::ui2d::Size& size) override;
  void OnCreated() override;
  void OnEvent(const Event& event) override;

  virtual bool Unknown18() const {
    return flag_;
  }

  virtual void Unknown19(bool value) {
    flag_ = value;
  }

  virtual bool Unknown20() const {
    return false;
  }

  virtual void Unknown21() {}
  virtual void Unknown22() {}
  virtual void Unknown23() {}
  virtual void Unknown24() {}
  virtual void Unknown25() {}
  virtual void Unknown26() {}
  virtual void Unknown27() {}
  virtual void Unknown28() {}
  virtual void Unknown29() {}
  virtual void Unknown30() {}
  virtual void Unknown31() {}
  virtual void Unknown32() {}
  virtual void Unknown33() {}
  virtual void Unknown34() {}
  virtual void Unknown35() {}
  virtual void Unknown36() {}
  virtual void Unknown37() {}
  virtual void Unknown38() {}
  virtual void Unknown39() {}
  virtual void Unknown40() {}
  virtual void Unknown41() {}
  virtual void Unknown42() {}

protected:
  Element(const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    Layout* owner);
  Element(const Element& source, nn::ui2d::Layout* layout);

  nn::ui2d::Pane* FindPane(const std::string_view& name);

  Layout* owner_;
  uint8_t unknown_58_[0x68];
  nn::ui2d::Pane* size_pane_;
  uint8_t unknown_c8_[0x58];
  uint64_t flag_ : 1;
  uint64_t unknown_flags_1_ : 31;
  uint64_t unknown_flag_32_ : 1;
  uint64_t unknown_flag_33_ : 1;
  uint64_t unknown_flags_34_ : 30;
  uint8_t unknown_128_[0x2dc];
  float unknown_404_;
};

#pragma GCC visibility pop

}
