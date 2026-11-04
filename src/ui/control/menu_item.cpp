#include "ui/control/menu_item.hpp"

namespace ui::control {

std::shared_ptr<ILayoutControl> MenuItem::CreateControl(
  const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
  Layout* owner) {
  return Create<MenuItem>(source, layout, owner);
}

std::shared_ptr<ILayoutControl> MenuItem::Clone(
  nn::ui2d::Layout* layout) const {
  return Create<MenuItem>(*this, layout);
}

GenericMenuItem::GenericMenuItem(const GenericMenuItem& source,
  nn::ui2d::Layout* layout)
  : MenuItem(source, layout) {
  unknown_flag_32_ = false;
  unknown_flag_33_ = false;
}

std::shared_ptr<ILayoutControl> GenericMenuItem::CreateControl(
  const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
  Layout* owner) {
  return Create<GenericMenuItem>(source, layout, owner);
}

std::shared_ptr<ILayoutControl> GenericMenuItem::Clone(
  nn::ui2d::Layout* layout) const {
  return Create<GenericMenuItem>(*this, layout);
}

}
