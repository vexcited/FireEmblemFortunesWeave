#pragma once

#include "game/singleton.hpp"

namespace game::gmap {

#pragma GCC visibility push(hidden)

class TroopMgr : public Singleton<TroopMgr> {
public:
  ~TroopMgr() override;
};

#pragma GCC visibility pop

}
