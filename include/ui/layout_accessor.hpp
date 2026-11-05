#pragma once

#include <cstddef>
#include <functional>
#include <map>
#include <memory>
#include <string>
#include <string_view>
#include <unordered_map>

#include "nn/ui2d/text_box.hpp"
#include "ui/layout.hpp"

namespace ui {

class LayoutAccessor {
public:
  static LayoutAccessor empty_;

  // User provided, make_shared stores each member instead of zeroing.
  LayoutAccessor() {}
  ~LayoutAccessor();

  void Setup(const std::shared_ptr<Layout>& owner);
  void Setup(const std::shared_ptr<Layout>& owner, nn::ui2d::Layout* layout);
  void Setup(const std::shared_ptr<Layout>& owner, const char* name);
  void Reset();

  nn::ui2d::TextBox* FindTextBox(const char* name);
  void SetVisible(bool visible);
  void PlayAnimation(const char* name, float speed);
  bool HasAnimation(const char* name);
  void SetPaneVisible(const char* name, bool visible);
  bool IsAnimationPlaying(const char* name, bool unknown);
  float GetAnimationEndFrame(const char* name, bool unknown);
  void SetAnimationFrame(const char* name, float frame);
  void StopAnimation(const char* name, bool unknown);
  void CopyPane(const char* source, const char* parent, const char* name);
  std::weak_ptr<LayoutAccessor> GetPart(const char* name);
  nn::ui2d::Pane* FindPane(const char* name);
  void SetTranslate(const nn::util::Float3& translate);
  void SetPaneSize(const char* name, float width, float height);
  bool IsPaneVisible(const char* name);
  // Restarts the animation unless it already plays from its first frame.
  void StartAnimation(const char* name);
  void PlayAnimation(const char* name, bool unknown, float speed);
  // The accessor of a part, or the empty accessor when it is not found.
  LayoutAccessor& FindPart(const char* name);

  bool IsVisible();
  void SetPriority(int priority);
  nn::ui2d::Layout* FindPartsLayout(const char* name);
  nn::ui2d::Layout* GetPartsLayout(const char* name);
  nn::ui2d::Pane* GetPane(const char* name);
  nn::util::Float3 GetPaneTranslate(const char* name);
  nn::util::Float3 GetTranslate();
  void SetPaneTranslate(const char* name, const nn::util::Float3& translate);
  bool IsPaneMatrixUpdated(const char* name);
  nn::util::Float2 GetPaneScale(const char* name);
  void SetPaneScale(const char* name, const nn::util::Float2& scale);
  nn::util::Float2 GetScale();
  void SetScale(const nn::util::Float2& scale);
  nn::ui2d::Size GetPaneSize(const char* name);
  void SetAlpha(uint8_t alpha);
  uint8_t GetPaneAlpha(const char* name);
  void SetPaneAlpha(const char* name, uint8_t alpha);
  nn::ui2d::Picture* FindPicture(const char* name);
  nn::ui2d::Alignment* FindAlignment(const char* name);
  void SetTextBoxString(const char* name, const char16_t* text);
  void SetTextBoxColor(const char* name, const uint32_t& color);
  void FitPaneSizeToText(const char* name);
  nn::ui2d::Size GetTextSize(const char* name);
  void RequestAlignment(const char* name, bool arrange);
  void Arrange();

  void SetText(const char* name, const char16_t* text) {
    if (text == nullptr) {
      return;
    }
    if (nn::ui2d::TextBox* box = FindTextBox(name)) {
      box->SetString(text);
    }
  }

  bool IsValid() const {
    if (layout_ == nullptr) {
      return false;
    }
    if (std::shared_ptr<Layout> owner = owner_.lock()) {
      if (owner->GetLayout() == layout_) {
        return true;
      }
    }
    return !owner_.expired();
  }

  // Release builds keep the validity assertion as an optimization hint.
  nn::ui2d::Pane* GetRootPane() const {
    if (!IsValid()) {
      __builtin_unreachable();
    }
    return layout_->GetRootPane();
  }

private:
  // Names may be a path of part panes separated by slashes.
  nn::ui2d::Pane* FindPane(nn::ui2d::Layout* layout, const char* name);
  nn::ui2d::Layout* FindPartsLayout(nn::ui2d::Layout* layout,
    const char* name);

  nn::ui2d::Pane* GetOwnRootPane() {
    if (!IsValid()) {
      return nullptr;
    }
    if (layout_ == nullptr) {
      return nullptr;
    }
    return layout_->GetRootPane();
  }

  nn::ui2d::Pane* FindOwnPane(const char* name) {
    if (!IsValid()) {
      return nullptr;
    }
    if (layout_ == nullptr) {
      return nullptr;
    }
    return FindPane(layout_, name);
  }

  nn::ui2d::Layout* FindOwnPartsLayout(const char* name) {
    if (!IsValid()) {
      return nullptr;
    }
    if (layout_ == nullptr) {
      return nullptr;
    }
    return FindPartsLayout(layout_, name);
  }

  struct Animation {
    nn::ui2d::AnimTransform* transform;
  };

  struct NameHash {
    using is_transparent = void;

    size_t operator()(std::string_view name) const {
      return std::hash<std::string_view>()(name);
    }
  };

  std::weak_ptr<Layout> owner_;
  nn::ui2d::Layout* layout_ = nullptr;
  std::map<std::string, std::shared_ptr<Animation>> animations_;
  std::unordered_map<std::string, std::shared_ptr<LayoutAccessor>, NameHash,
    std::equal_to<>> parts_;
  std::shared_ptr<LayoutResource> resource_;
};

static_assert(sizeof(LayoutAccessor) == 0x68);

// Sets a string with its message tags expanded.
void SetTextBoxString(nn::ui2d::TextBox* box, const char16_t* text, bool keep);

// Returns the text extent and writes the size of the text box for it.
nn::util::Float2 MeasureTextBox(nn::util::Float2* origin,
  nn::ui2d::Size* size, float* line_height, const nn::ui2d::TextBox* box,
  const nn::font::Font* font);

// Dims the root pane of the part, or makes it opaque when enabled.
void SetPartEnabled(std::weak_ptr<LayoutAccessor>& part, bool enable,
  bool dark);

}
