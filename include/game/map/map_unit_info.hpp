#pragma once

#include <cstdint>

#include "game/singleton.hpp"

namespace game::map {

class MapUnitInfo : public Singleton<MapUnitInfo> {
public:
  // Closing a dialog asks the unit info to refresh.
  void SetUnknown16c() {
    unknown_16c_ = true;
  }

private:
  uint8_t unknown_08_[0x164];
  bool unknown_16c_;
};

}
