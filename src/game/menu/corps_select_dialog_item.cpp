#include "game/menu/unit_menu_item.hpp"

namespace game::menu {

namespace {

class CorpsSelectDialogItem : public menu::UnitMenuItem {
public:
  CorpsSelectDialogItem();

  bool IsEmpty() override;
};

[[gnu::used]] CorpsSelectDialogItem::CorpsSelectDialogItem() = default;

}

}
