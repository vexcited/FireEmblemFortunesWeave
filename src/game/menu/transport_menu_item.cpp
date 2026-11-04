#include "game/menu/game_menu_item.hpp"
#include "game/menu/transport_menu_item.hpp"

namespace game::menu {

TransportMenuItem::TransportMenuItem() = default;

class EmptyTransportMenuItem : public TransportMenuItem {
public:
  const char* GetMid() override;
  int ACall() override;
  void DrawText() override;
  bool IsEmpty() override;
  const char* Unknown70() override;
};

const char* EmptyTransportMenuItem::GetMid() {
  return "MID_Sys_Empty";
}

int EmptyTransportMenuItem::ACall() {
  return 0;
}

void EmptyTransportMenuItem::DrawText() {
  GameMenuItem::DrawText();
}

bool EmptyTransportMenuItem::IsEmpty() {
  return true;
}

const char* EmptyTransportMenuItem::Unknown70() {
  return "";
}

}
