#pragma once

#include <memory>
#include <vector>

#include "game/singleton.hpp"

namespace game::hub {

#pragma GCC visibility push(hidden)

class Gaya;

class AreaGaya : public Singleton<AreaGaya> {
public:
  ~AreaGaya() override;

private:
  std::vector<std::shared_ptr<Gaya>> gayas_;
};

#pragma GCC visibility pop

}
