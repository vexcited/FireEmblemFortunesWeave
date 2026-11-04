#pragma once

#include <memory>

#include "game/singleton.hpp"

namespace game {

#pragma GCC visibility push(hidden)

namespace zview {

class AreaBarrierBase {
public:
  virtual ~AreaBarrierBase() = default;

private:
  std::shared_ptr<void> barrier_;
};

}

namespace hub {

class AreaBarrier : public Singleton<AreaBarrier>,
  public zview::AreaBarrierBase {
public:
  ~AreaBarrier() override;
};

}

#pragma GCC visibility pop

}
