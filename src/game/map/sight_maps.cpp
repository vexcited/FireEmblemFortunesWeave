#include <string.h>

#include "game/map/sight_maps.hpp"
#include "game/map/situation.hpp"

namespace game::map {

void SightMapsImpl::Clear() {
  memset(rows_, 0, sizeof(rows_));
}

void SightMapsImpl::Fill() {
  memset(rows_, 0xff, sizeof(rows_));
}

void SightMapsImpl::SetVisible(bool visible) {
  const Situation* situation = Situation::GetInstance();
  handle_->GetMap()->SetVisible(
    situation != nullptr && visible && situation->HasSight());
}

}
