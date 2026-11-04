#pragma once

#include "game/singleton.hpp"

namespace game::hub {

#pragma GCC visibility push(hidden)

class ItemSupport : public Singleton<ItemSupport> {
public:
  ~ItemSupport() override;
};

#pragma GCC visibility pop

}
