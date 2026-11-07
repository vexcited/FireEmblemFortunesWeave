#pragma once

#include <cstdint>
#include <memory>
#include <string>
#include <string_view>
#include <utility>

#include "ui/layout_allocator.hpp"
#include "ui/ui2d.hpp"

namespace ui {

class Layout;

// Link time optimization internalized these so they are addressed directly.
#pragma GCC visibility push(hidden)

class ILayoutControl {
public:
  // Gives Create access to protected constructors of the control classes.
  template <class T>
  class CreateHelper : public T {
  public:
    template <class... Args>
    explicit CreateHelper(Args&&... args)
      : T(std::forward<Args>(args)...) {}
  };

  template <class T, class... Args>
  static std::shared_ptr<T> Create(Args&&... args) {
    return std::allocate_shared<CreateHelper<T>>(
      LayoutAllocator<CreateHelper<T>>(), std::forward<Args>(args)...);
  }

  virtual ~ILayoutControl() = default;

  virtual std::shared_ptr<ILayoutControl> Clone(
    nn::ui2d::Layout* layout) const {
    return nullptr;
  }

  virtual void Update() = 0;
  virtual bool IsVisible() const = 0;
  virtual void SetVisible(bool visible) = 0;

  virtual nn::util::Float3 GetTranslate() const {
    if (nn::ui2d::Pane* pane = GetPane()) {
      return pane->GetTranslate();
    }
    return {};
  }

  virtual void SetTranslate(const nn::util::Float3& translate) {
    if (nn::ui2d::Pane* pane = GetPane()) {
      pane->SetTranslate(translate);
    }
  }

  virtual nn::util::Float3 GetRotate() const {
    if (nn::ui2d::Pane* pane = GetPane()) {
      return pane->GetRotate();
    }
    return {};
  }

  virtual void SetRotate(const nn::util::Float3& rotate) {
    if (nn::ui2d::Pane* pane = GetPane()) {
      pane->SetRotate(rotate);
    }
  }

  virtual nn::util::Float2 GetScale() const {
    if (nn::ui2d::Pane* pane = GetPane()) {
      return pane->GetScale();
    }
    return {1.0f, 1.0f};
  }

  virtual void SetScale(const nn::util::Float2& scale) {
    if (nn::ui2d::Pane* pane = GetPane()) {
      pane->SetScale(scale);
    }
  }

  virtual uint8_t GetAlpha() const {
    if (nn::ui2d::Pane* pane = GetPane()) {
      return pane->GetAlpha();
    }
    return 0;
  }

  virtual void SetAlpha(uint8_t alpha) {
    if (nn::ui2d::Pane* pane = GetPane()) {
      pane->SetAlpha(alpha);
    }
  }

  virtual nn::ui2d::Size GetSize() const = 0;
  virtual void SetSize(const nn::ui2d::Size& size) = 0;
  virtual void OnCreated() {}

protected:
  explicit ILayoutControl(nn::ui2d::Layout* layout) : layout_(layout) {
    pane_name_ = layout->GetRootPane()->GetName();
    layout_name_ = layout->GetName();
    UpdatePath();
  }

  nn::ui2d::Pane* GetPane() const {
    return layout_ != nullptr ? layout_->GetRootPane() : nullptr;
  }

  nn::ui2d::Pane* GetRootPane() const {
    return layout_->GetRootPane();
  }

  // The path joins the names of the enclosing parts panes with slashes.
  void UpdatePath() {
    if (layout_ == nullptr) {
      return;
    }

    path_ = pane_name_.data();
    path_.insert(0, "/");

    nn::ui2d::Pane* pane = layout_->GetRootPane();
    while (pane != nullptr) {
      pane = pane->GetParent();
      if (nn::ui2d::DynamicCast<nn::ui2d::Parts*>(pane) != nullptr) {
        path_.insert(0, pane->GetName());
        path_.insert(0, "/");
      }
    }
  }

  nn::ui2d::Layout* layout_;
  std::string_view pane_name_;
  std::string_view layout_name_;
  std::string path_;
};

#pragma GCC visibility pop

}
