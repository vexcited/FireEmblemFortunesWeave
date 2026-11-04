#pragma once

#include <stdint.h>

#include <memory>
#include <vector>

#include "ui/layout.hpp"
#include "ui/ui2d.hpp"

namespace game::hub {

#pragma GCC visibility push(hidden)

class MapIconList {
public:
  struct Icon {
    nn::ui2d::Pane* pane;
    nn::ui2d::Pane* image;
    std::weak_ptr<ui::Layout> layout;
    uint64_t unknown_20;
    uint64_t unknown_28;
    uint8_t unknown_30[0x10];
  };

  virtual ~MapIconList() = default;
  virtual void Setup(const std::weak_ptr<ui::Layout>& layout) = 0;
  virtual void Unknown03() = 0;
  virtual void Unknown04() = 0;

  virtual void HideAll() {
    for (Icon& icon : icons_) {
      icon.pane->SetVisible(false);
    }
  }

protected:
  std::weak_ptr<ui::Layout> layout_;
  std::vector<Icon> icons_;
};

class CondTalkIconList : public MapIconList {
public:
  ~CondTalkIconList() override;
};

class AreaChangeIconList : public MapIconList {
public:
  ~AreaChangeIconList() override;

private:
  std::vector<Icon> gate_icons_;
};

#pragma GCC visibility pop

}
