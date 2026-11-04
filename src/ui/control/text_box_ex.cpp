#include "ui/control/text_box_ex.hpp"

namespace ui::control {

std::shared_ptr<ILayoutControl> TextBoxEx::CreateControl(
  const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
  Layout* owner) {
  return Create<TextBoxEx>(source, layout, owner);
}

std::shared_ptr<ILayoutControl> TextBoxEx::Clone(
  nn::ui2d::Layout* layout) const {
  return Create<TextBoxEx>(*this, layout);
}

}
