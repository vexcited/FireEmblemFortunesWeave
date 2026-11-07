#include <string>

#include "ui/layout_accessor.hpp"

namespace ui {

nn::ui2d::Pane* LayoutAccessor::FindPane(nn::ui2d::Layout* layout,
  const char* name) {
  if (layout == nullptr || name == nullptr) {
    return nullptr;
  }

  std::string path(name);
  size_t slash = path.find('/');
  if (slash == std::string::npos) {
    return layout->GetRootPane()->FindPaneByName(name, true);
  }

  std::string rest(&path[slash] + 1);
  std::string parts_name = path.substr(0, slash);
  nn::ui2d::Pane* pane = nullptr;
  if (nn::ui2d::Parts* parts =
    layout->FindPartsPaneByName(parts_name.c_str())) {
    pane = FindPane(parts->GetLayout(), rest.c_str());
  }
  return pane;
}

nn::ui2d::Layout* LayoutAccessor::FindPartsLayout(nn::ui2d::Layout* layout,
  const char* name) {
  if (layout == nullptr || name == nullptr) {
    return nullptr;
  }

  std::string path(name);
  size_t slash = path.find('/');
  if (slash == std::string::npos) {
    nn::ui2d::Parts* parts = layout->FindPartsPaneByName(name);
    return parts != nullptr ? parts->GetLayout() : nullptr;
  }

  std::string rest(&path[slash] + 1);
  std::string parts_name = path.substr(0, slash);
  nn::ui2d::Layout* found = nullptr;
  if (nn::ui2d::Parts* parts =
    layout->FindPartsPaneByName(parts_name.c_str())) {
    found = FindPartsLayout(parts->GetLayout(), rest.c_str());
  }
  return found;
}

void LayoutAccessor::Setup(const std::shared_ptr<Layout>& owner) {
  Reset();
  owner_ = owner;
  layout_ = owner->GetLayout();
  resource_ = owner->GetResource(layout_);
}

void LayoutAccessor::Setup(const std::shared_ptr<Layout>& owner,
  nn::ui2d::Layout* layout) {
  Reset();
  owner_ = owner;
  layout_ = layout;
  resource_ = owner->GetResource(layout_);
}

void LayoutAccessor::Setup(const std::shared_ptr<Layout>& owner,
  const char* name) {
  Reset();
  owner_ = owner;
  layout_ = FindPartsLayout(owner->GetLayout(), name);
  resource_ = owner->GetResource(layout_);
}

void LayoutAccessor::Reset() {
  if (IsValid() && layout_ != nullptr) {
    nn::ui2d::Layout* layout = layout_;
    layout->UnbindAllAnimation();
    for (const auto& [name, animation] : animations_) {
      if (animation->transform != nullptr) {
        layout->DeleteAnimTransform(animation->transform);
      }
    }
    animations_.clear();
  }

  parts_.clear();
  owner_.reset();
  layout_ = nullptr;
  resource_.reset();
}

std::weak_ptr<LayoutAccessor> LayoutAccessor::GetPart(const char* name) {
  auto found = parts_.find(name);
  if (found != parts_.end()) {
    return found->second;
  }

  nn::ui2d::Layout* layout = FindOwnPartsLayout(name);
  if (layout == nullptr) {
    return {};
  }

  parts_[name] = std::make_shared<LayoutAccessor>();
  parts_[name]->Setup(owner_.lock(), layout);
  return parts_[name];
}

void LayoutAccessor::SetVisible(bool visible) {
  if (!IsValid()) {
    return;
  }

  if (std::shared_ptr<Layout> owner = owner_.lock()) {
    if (owner->GetLayout() == layout_) {
      owner->SetVisible(visible);
      return;
    }
  }

  if (nn::ui2d::Pane* root = GetOwnRootPane()) {
    root->SetVisible(visible);
  }
}

bool LayoutAccessor::IsVisible() {
  if (!IsValid()) {
    return false;
  }

  if (std::shared_ptr<Layout> owner = owner_.lock()) {
    if (owner->GetLayout() == layout_) {
      return owner->IsVisible();
    }
  }

  if (nn::ui2d::Pane* root = GetOwnRootPane()) {
    return root->IsVisible();
  }
  return false;
}

void LayoutAccessor::SetPriority(int priority) {
  if (!IsValid()) {
    return;
  }

  if (std::shared_ptr<Layout> owner = owner_.lock()) {
    owner->SetPriority(priority);
  }
}

nn::ui2d::Pane* LayoutAccessor::FindPane(const char* name) {
  return FindOwnPane(name);
}

nn::ui2d::Pane* LayoutAccessor::GetPane(const char* name) {
  return FindOwnPane(name);
}

nn::ui2d::Layout* LayoutAccessor::FindPartsLayout(const char* name) {
  if (!IsValid()) {
    return nullptr;
  }
  if (layout_ == nullptr) {
    return nullptr;
  }
  return FindPartsLayout(layout_, name);
}

nn::ui2d::Layout* LayoutAccessor::GetPartsLayout(const char* name) {
  if (!IsValid()) {
    return nullptr;
  }
  if (layout_ == nullptr) {
    return nullptr;
  }
  return FindPartsLayout(layout_, name);
}

void LayoutAccessor::SetPaneVisible(const char* name, bool visible) {
  if (nn::ui2d::Pane* pane = FindOwnPane(name)) {
    pane->SetVisible(visible);
  }
}

bool LayoutAccessor::IsPaneVisible(const char* name) {
  if (nn::ui2d::Pane* pane = FindOwnPane(name)) {
    return pane->IsVisible();
  }
  return false;
}

nn::util::Float3 LayoutAccessor::GetPaneTranslate(const char* name) {
  if (nn::ui2d::Pane* pane = FindOwnPane(name)) {
    return pane->GetTranslate();
  }
  return {};
}

nn::util::Float3 LayoutAccessor::GetTranslate() {
  if (nn::ui2d::Pane* root = GetOwnRootPane()) {
    return root->GetTranslate();
  }
  return {};
}

void LayoutAccessor::SetPaneTranslate(const char* name,
  const nn::util::Float3& translate) {
  if (nn::ui2d::Pane* pane = FindOwnPane(name)) {
    pane->SetTranslate(translate);
  }
}

void LayoutAccessor::SetTranslate(const nn::util::Float3& translate) {
  if (nn::ui2d::Pane* root = GetOwnRootPane()) {
    root->SetTranslate(translate);
  }
}

bool LayoutAccessor::IsPaneMatrixUpdated(const char* name) {
  if (nn::ui2d::Pane* pane = FindOwnPane(name)) {
    return !pane->IsGlobalMatrixDirty();
  }
  return false;
}

nn::util::Float2 LayoutAccessor::GetPaneScale(const char* name) {
  if (nn::ui2d::Pane* pane = FindOwnPane(name)) {
    return pane->GetScale();
  }
  return {};
}

void LayoutAccessor::SetPaneScale(const char* name,
  const nn::util::Float2& scale) {
  if (nn::ui2d::Pane* pane = FindOwnPane(name)) {
    pane->SetScale(scale);
  }
}

nn::util::Float2 LayoutAccessor::GetScale() {
  if (nn::ui2d::Pane* root = GetOwnRootPane()) {
    return root->GetScale();
  }
  return {};
}

void LayoutAccessor::SetScale(const nn::util::Float2& scale) {
  if (nn::ui2d::Pane* root = GetOwnRootPane()) {
    root->SetScale(scale);
  }
}

void LayoutAccessor::SetPaneSize(const char* name, float width,
  float height) {
  if (nn::ui2d::Pane* pane = FindOwnPane(name)) {
    pane->SetSize({width, height});
  }
}

nn::ui2d::Size LayoutAccessor::GetPaneSize(const char* name) {
  if (nn::ui2d::Pane* pane = FindOwnPane(name)) {
    return pane->GetSize();
  }
  return {};
}

void LayoutAccessor::SetAlpha(uint8_t alpha) {
  if (nn::ui2d::Pane* root = GetOwnRootPane()) {
    root->SetAlpha(alpha);
  }
}

uint8_t LayoutAccessor::GetPaneAlpha(const char* name) {
  if (nn::ui2d::Pane* pane = FindOwnPane(name)) {
    return pane->GetAlpha();
  }
  return 0;
}

void LayoutAccessor::SetPaneAlpha(const char* name, uint8_t alpha) {
  if (nn::ui2d::Pane* pane = FindOwnPane(name)) {
    pane->SetAlpha(alpha);
  }
}

nn::ui2d::Picture* LayoutAccessor::FindPicture(const char* name) {
  return dynamic_cast<nn::ui2d::Picture*>(FindOwnPane(name));
}

nn::ui2d::TextBox* LayoutAccessor::FindTextBox(const char* name) {
  return dynamic_cast<nn::ui2d::TextBox*>(FindOwnPane(name));
}

nn::ui2d::Alignment* LayoutAccessor::FindAlignment(const char* name) {
  return dynamic_cast<nn::ui2d::Alignment*>(FindOwnPane(name));
}

void LayoutAccessor::SetTextBoxString(const char* name,
  const char16_t* text) {
  if (name == nullptr || text == nullptr) {
    return;
  }
  if (nn::ui2d::TextBox* box = FindTextBox(name)) {
    ui::SetTextBoxString(box, text, false);
  }
}

void LayoutAccessor::SetTextBoxColor(const char* name, const uint32_t& color) {
  if (nn::ui2d::TextBox* box = FindTextBox(name)) {
    if (nn::ui2d::Material* material = box->GetMaterial()) {
      material->SetColor(color);
    }
  }
}

void LayoutAccessor::FitPaneSizeToText(const char* name) {
  if (nn::ui2d::TextBox* box = FindTextBox(name)) {
    box->SetSize(GetTextSize(name));
  }
}

nn::ui2d::Size LayoutAccessor::GetTextSize(const char* name) {
  nn::ui2d::TextBox* box = FindTextBox(name);
  if (box == nullptr) {
    return {};
  }

  nn::util::Float2 origin;
  nn::ui2d::Size size;
  float line_height;
  MeasureTextBox(&origin, &size, &line_height, box, box->GetFont());
  return size;
}

void LayoutAccessor::RequestAlignment(const char* name, bool arrange) {
  nn::ui2d::Alignment* alignment = FindAlignment(name);
  if (alignment == nullptr) {
    return;
  }

  alignment->RequestAlignment();
  if (arrange) {
    Arrange();
  }
}

void LayoutAccessor::Arrange() {
  if (std::shared_ptr<Layout> owner = owner_.lock()) {
    owner->Arrange();
  }
}

}
