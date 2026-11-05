#include "ui/control/async_load_image.hpp"

namespace ui::control {

std::shared_ptr<ILayoutControl> AsyncLoadImage::CreateControl(
  const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
  Layout* owner) {
  return Create<AsyncLoadImage>(source, layout, owner);
}

std::shared_ptr<ILayoutControl> AsyncLoadImage::Clone(
  nn::ui2d::Layout* layout) const {
  return Create<AsyncLoadImage>(*this, layout);
}

void AsyncLoadImage::Update() {}

bool AsyncLoadImage::IsVisible() const {
  return image_pane_->IsVisible();
}

void AsyncLoadImage::SetVisible(bool visible) {
  image_pane_->SetVisible(visible);
}

nn::ui2d::Size AsyncLoadImage::GetSize() const {
  return image_pane_->GetSize();
}

void AsyncLoadImage::SetSize(const nn::ui2d::Size& size) {
  if (image_pane_ != nullptr) {
    image_pane_->SetSize(size);
  }
}

void AsyncLoadImage::Unknown17() {}

bool AsyncLoadImage::Unknown20() {
  return false;
}

bool AsyncLoadImage::Unknown21() {
  return true;
}

}
