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

void TextBoxEx::Update() {}

bool TextBoxEx::IsVisible() const {
  return layout_->GetRootPane()->IsVisible() && text_box_->IsVisible();
}

void TextBoxEx::SetVisible(bool visible) {
  layout_->GetRootPane()->SetVisible(visible);
  text_box_->SetVisible(visible);
}

nn::ui2d::Size TextBoxEx::GetSize() const {
  return text_box_->GetSize();
}

void TextBoxEx::SetSize(const nn::ui2d::Size& size) {
  text_box_->SetSize(size);
}

}
