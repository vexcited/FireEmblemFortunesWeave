#pragma once

namespace game {

// Called first by the destructors of the menus listing units. It works on
// the unit lists of GameModeData, its real name is unknown.
void ResetMenuUnits();

}
