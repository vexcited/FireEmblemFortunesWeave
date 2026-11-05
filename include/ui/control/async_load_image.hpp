#pragma once

#include <cstdint>
#include <memory>

#include "ui/layout.hpp"
#include "ui/layout_control.hpp"

namespace ui::control {

#pragma GCC visibility push(hidden)

class AsyncLoadImage : public ILayoutControl {
public:
  static std::shared_ptr<ILayoutControl> CreateControl(
    const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    Layout* owner);

  ~AsyncLoadImage() override;

  std::shared_ptr<ILayoutControl> Clone(
    nn::ui2d::Layout* layout) const override;
  void Update() override;
  bool IsVisible() const override;
  void SetVisible(bool visible) override;
  nn::ui2d::Size GetSize() const override;
  void SetSize(const nn::ui2d::Size& size) override;
  void OnCreated() override;

  virtual void Unknown17();
  virtual void Unknown18();
  virtual void Unknown19();
  virtual bool Unknown20();
  virtual bool Unknown21();

protected:
  AsyncLoadImage(const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    Layout* owner);
  AsyncLoadImage(const AsyncLoadImage& source, nn::ui2d::Layout* layout);

private:
  uint8_t unknown_48_[0x70];
  nn::ui2d::Pane* image_pane_;
  uint8_t unknown_c0_[0x38];
};

#pragma GCC visibility pop

}
