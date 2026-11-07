#pragma once

#include <memory>

namespace game::zview {

#pragma GCC visibility push(hidden)

class AreaBarrierBase {
public:
  virtual ~AreaBarrierBase() = default;

private:
  std::shared_ptr<void> barrier_;
};

#pragma GCC visibility pop

}
