#pragma once

#include <stdint.h>

#include <memory>
#include <vector>

#include "game/singleton.hpp"

namespace game::hub {

#pragma GCC visibility push(hidden)

class FastTravelBase;

class FastTravelManager : public Singleton<FastTravelManager> {
public:
  ~FastTravelManager() override;

private:
  uint64_t unknown_08_;
  std::vector<std::shared_ptr<FastTravelBase>> points_;
  std::shared_ptr<FastTravelBase> current_;
};

#pragma GCC visibility pop

}
