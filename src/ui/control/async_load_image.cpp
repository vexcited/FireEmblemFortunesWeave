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

}
