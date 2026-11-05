#include "game/gmap/troop.hpp"

namespace game::gmap {

int Troop::CountUnit(const std::function<bool(Unit*)>& function) {
  int count = 0;
  EachUnit([&count, function](Unit* unit) {
    if (function(unit)) {
      ++count;
    }
  });
  return count;
}

}
