#include "game/corps_manager.hpp"

namespace game {

void CorpsManager::EachUnit(
  int corps, const std::function<void(Unit*)>& function) {
  if (corps < 0) {
    return;
  }

  EachUnit([corps, function](Unit* unit) {
    if (unit->IsCorpsLeader() && unit->GetCorps() == corps) {
      function(unit);
    }
  });
  EachUnit([corps, function](Unit* unit) {
    if (!unit->IsCorpsLeader() && unit->GetCorps() == corps) {
      function(unit);
    }
  });
}

}
