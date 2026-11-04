#include "ui/control/embedded_image.hpp"

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

}
