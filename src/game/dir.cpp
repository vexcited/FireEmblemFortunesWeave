#include "game/dir.hpp"

namespace game {

void Dir::EachOffset(const std::function<void(int, int)>& function) {
  Each([function](Index index) {
    function(offsets_.x[index], offsets_.z[index]);
  });
}

}
