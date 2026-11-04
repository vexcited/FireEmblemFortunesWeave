#pragma once

#include <cstdint>
#include <functional>
#include <memory>
#include <vector>

#include "ui/layout_accessor.hpp"

namespace game::gameui::Util {

class QuestIcon;

class QuestIconSwitcher {
public:
  using Setter = std::function<void(QuestIcon&)>;

  virtual ~QuestIconSwitcher() = default;

private:
  std::weak_ptr<ui::LayoutAccessor> accessor_;
  int32_t index_;
  std::vector<Setter> setters_;
};

}
