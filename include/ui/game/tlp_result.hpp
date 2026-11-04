#pragma once

#include <memory>

#include "ui/layout.hpp"
#include "ui/layout_control.hpp"

namespace game::gameui::control {

#pragma GCC visibility push(hidden)

class TlpResult : public ui::ILayoutControl {
public:
  static std::shared_ptr<ui::ILayoutControl> CreateControl(
    const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);

  std::shared_ptr<ui::ILayoutControl> Clone(
    nn::ui2d::Layout* layout) const override;
  void Update() override;
  bool IsVisible() const override;
  void SetVisible(bool visible) override;
  nn::ui2d::Size GetSize() const override;
  void SetSize(const nn::ui2d::Size& size) override;

protected:
  TlpResult(const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);
  TlpResult(const TlpResult& source, nn::ui2d::Layout* layout);
};

#pragma GCC visibility pop

}
