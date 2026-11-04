#include "ui/game/tlp_result.hpp"

namespace game::gameui::control {

TlpResult::TlpResult(const nn::ui2d::ControlSrc&, nn::ui2d::Layout* layout,
  ui::Layout* owner)
  : ILayoutControl(layout) {
  // The owner reference is taken and dropped right away.
  if (owner != nullptr) {
    std::weak_ptr<ui::Layout> unused = owner->weak_from_this();
  }
}

TlpResult::TlpResult(const TlpResult&, nn::ui2d::Layout* layout)
  : ILayoutControl(layout) {}

std::shared_ptr<ui::ILayoutControl> TlpResult::CreateControl(
  const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
  ui::Layout* owner) {
  return Create<TlpResult>(source, layout, owner);
}

std::shared_ptr<ui::ILayoutControl> TlpResult::Clone(
  nn::ui2d::Layout* layout) const {
  return Create<TlpResult>(*this, layout);
}

void TlpResult::Update() {}

bool TlpResult::IsVisible() const {
  return GetRootPane()->IsVisible();
}

void TlpResult::SetVisible(bool visible) {
  GetRootPane()->SetVisible(visible);
}

nn::ui2d::Size TlpResult::GetSize() const {
  return {};
}

void TlpResult::SetSize(const nn::ui2d::Size&) {}

}
