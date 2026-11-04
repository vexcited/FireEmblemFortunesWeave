#include "ui/control/element.hpp"

namespace ui::control {

std::shared_ptr<ILayoutControl> Element::CreateControl(
  const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
  Layout* owner) {
  return Create<Element>(source, layout, owner);
}

std::shared_ptr<ILayoutControl> Element::Clone(
  nn::ui2d::Layout* layout) const {
  return Create<Element>(*this, layout);
}

}
