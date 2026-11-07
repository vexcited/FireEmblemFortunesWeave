#pragma once

#include "game/singleton.hpp"
#include "game/zview/area_barrier_base.hpp"

namespace game {

#pragma GCC visibility push(hidden)

namespace hub {

class AreaBarrier : public Singleton<AreaBarrier>,
  public zview::AreaBarrierBase {
public:
  ~AreaBarrier() override;
};

}

#pragma GCC visibility pop

}
