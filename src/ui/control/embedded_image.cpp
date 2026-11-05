#include "ui/control/embedded_image.hpp"
#include "ui/manager.hpp"

namespace ui::control {

std::shared_ptr<ILayoutControl> EmbeddedImage::CreateControl(
  const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
  Layout* owner) {
  return Create<EmbeddedImage>(source, layout, owner);
}

std::shared_ptr<ILayoutControl> EmbeddedImage::Clone(
  nn::ui2d::Layout* layout) const {
  return Create<EmbeddedImage>(*this, layout);
}

void EmbeddedImage::Update() {}

bool EmbeddedImage::IsVisible() const {
  return layout_->GetRootPane()->IsVisible();
}

void EmbeddedImage::SetVisible(bool visible) {
  layout_->GetRootPane()->SetVisible(visible);
}

nn::ui2d::Size EmbeddedImage::GetSize() const {
  nn::ui2d::Size size = image_pane_->GetSize();
  size.width += margin_ * 2.0f;
  return size;
}

void EmbeddedImage::SetSize(const nn::ui2d::Size& size) {
  if (image_pane_ != nullptr) {
    image_pane_->SetSize(size);
  }
}

void EmbeddedImage::OnCreated() {
  Manager::instance_->Unknown1367b60();
}

}
