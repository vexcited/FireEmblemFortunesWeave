#pragma once

#include <cstdint>
#include <memory>

#include "ui/layout.hpp"
#include "ui/layout_control.hpp"

namespace ui::control {

#pragma GCC visibility push(hidden)

class TextBoxEx : public ILayoutControl {
public:
  static std::shared_ptr<ILayoutControl> CreateControl(
    const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    Layout* owner);

  ~TextBoxEx() override = default;

  std::shared_ptr<ILayoutControl> Clone(
    nn::ui2d::Layout* layout) const override;
  void Update() override;
  bool IsVisible() const override;
  void SetVisible(bool visible) override;
  nn::ui2d::Size GetSize() const override;
  void SetSize(const nn::ui2d::Size& size) override;
  void OnCreated() override;

protected:
  TextBoxEx(const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    Layout* owner);
  TextBoxEx(const TextBoxEx& source, nn::ui2d::Layout* layout);

private:
  uint8_t unknown_48_[0x8];
  nn::ui2d::Pane* text_box_;
};

#pragma GCC visibility pop

}
