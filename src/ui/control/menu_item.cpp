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

void MenuItem::Unknown23() {
  int value = 1;
  Notify(Event(39, &value));
}

void MenuItem::Unknown24() {
  int value = 2;
  Notify(Event(39, &value));
}

void MenuItem::Unknown37() {
  Notify(Event(36, nullptr));
}

void MenuItem::Unknown43() {}

void MenuItem::Unknown44() {}

void MenuItem::Unknown46() {}

void MenuItem::Unknown47() {}

void MenuItem::Unknown48() {}

void MenuItem::Unknown49() {}

void MenuItem::Unknown50() {}

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

void GenericMenuItem::Unknown43() {
  Unknown51(-1);
}

void GenericMenuItem::Unknown44() {
  Unknown51(-1);
}

void GenericMenuItem::Unknown45(bool unknown) {
  bool set = unknown_flag_32_;
  unknown_flag_32_ = true;
  if (!set) {
    Unknown51(32);
  }
  MenuItem::Unknown45(unknown);
}

void GenericMenuItem::Unknown46() {
  bool set = unknown_flag_32_;
  unknown_flag_32_ = false;
  if (set) {
    Unknown51(32);
  }
}

// Plays the state 33 once.
void GenericMenuItem::Unknown47() {
  bool set = unknown_flag_33_;
  unknown_flag_33_ = true;
  if (!set) {
    Unknown51(33);
  }
  unknown_flag_33_ = false;
}

void GenericMenuItem::Unknown48() {
  Unknown51(-1);
}

void GenericMenuItem::Unknown50() {
  unknown_flag_32_ = false;
  unknown_flag_33_ = false;
}

}
