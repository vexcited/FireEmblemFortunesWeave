#pragma once

namespace ui {

class LayoutAccessor;

}

namespace game {

class Unit;

namespace gameui {

// Shows the hit point stocks of a unit on a gauge part, as the frame of its
// Num animation.
void SetHpStock(ui::LayoutAccessor& part, const Unit* unit);

}

}
