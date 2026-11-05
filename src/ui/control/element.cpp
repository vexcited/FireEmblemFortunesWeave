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

void Element::Update() {}

bool Element::IsVisible() const {
  return layout_->GetRootPane()->IsVisible();
}

void Element::SetVisible(bool visible) {
  layout_->GetRootPane()->SetVisible(visible);
}

nn::ui2d::Size Element::GetSize() const {
  if (size_pane_ != nullptr) {
    return size_pane_->GetSize();
  }
  return {};
}

void Element::SetSize(const nn::ui2d::Size& size) {
  if (size_pane_ != nullptr) {
    size_pane_->SetSize(size);
  }
}

}
