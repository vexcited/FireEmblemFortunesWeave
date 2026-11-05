#pragma once

#include <cstddef>
#include <cstdint>
#include <functional>
#include <memory>
#include <string>
#include <vector>

#include "game/gameui/message.hpp"
#include "ui/layout_accessor.hpp"

namespace nn::ui2d {

class Picture;

}

namespace game::menu {

// Page tabs switched with the shoulder buttons, with their arrow parts.
class PageTab {
public:
  enum Mode : int32_t {
    kModeImage,
    kModeUnknown1,
    kModeLabel,
    kModeText,
  };

  void SetEnabled(bool enable);
  bool Move(int direction, bool loop);
  void Add(int page);

  using Label = std::function<gameui::Message::StringArg(int)>;
  using Image = std::function<void(nn::ui2d::Picture*, int)>;

  // Fills the image of every tab.
  void SetupImage(const std::weak_ptr<ui::LayoutAccessor>& part,
    const Image& image, int unknown0, int unknown1, int unknown2);
  // Shows the label of the current tab only.
  void SetupLabel(const std::weak_ptr<ui::LayoutAccessor>& part,
    const Label& label, int unknown0, int unknown1, int unknown2);
  // Sets the text of every tab.
  void SetupText(const std::weak_ptr<ui::LayoutAccessor>& part,
    const Label& label, int unknown0, int unknown1, int unknown2);

  void Reset(int last, int index) {
    index_ = index;
    previous_ = index;
    count_ = last;
  }

  int GetCount() const {
    return count_;
  }

  int GetIndex() const {
    return index_;
  }

  int GetPrevious() const {
    return previous_;
  }

  // The page shown at the current tab.
  int GetCurrent() const {
    if (static_cast<size_t>(index_) < order_.size()) {
      return order_[index_];
    }
    return index_;
  }

  // The page shown at a tab.
  int GetPage(int index) const {
    if (static_cast<size_t>(index) < order_.size()) {
      return order_[index];
    }
    return index;
  }

private:
  void Refresh(int unknown0, int unknown1, int unknown2);
  void Update();

  // The index of the last tab.
  int32_t count_;
  int32_t index_;
  int32_t previous_;
  std::vector<int32_t> order_;
  Mode mode_;
  Label label_;
  std::weak_ptr<ui::LayoutAccessor> part_;
  uint8_t kind_;
  uint8_t unknown_71_[0xf];
};

static_assert(sizeof(PageTab) == 0x80);

}
