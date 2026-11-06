#include "game/gmap/gmap_situation.hpp"

namespace game::gmap {

void GmapSituation::Initialize() {
  unknown_08_.clear();
  unknown_20_ = 0;
  unknown_28_ = -1;
  unknown_2c_ = 0;
  for (uint8_t& value : unknown_30_) {
    value = 0;
  }
  unknown_3b_ = 1;
}

void GmapSituation::Finalize() {}

}
