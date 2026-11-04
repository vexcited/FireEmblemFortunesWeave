#include "game/menu/game_menu_item.hpp"

namespace game::gmap {

namespace {

class GmapTalkMenuItem : public menu::GameMenuItem {
public:
  void PlayDecideStrongSe() override;
  virtual bool Unknown70() = 0;
};

class TalkOtherClanMenuItem : public GmapTalkMenuItem {
public:
  TalkOtherClanMenuItem();

  const char* GetMid() override;
  int ACall() override;
  void DrawText() override;
  bool Unknown70() override { return true; }
};

[[gnu::used]] TalkOtherClanMenuItem::TalkOtherClanMenuItem() = default;

class TalkEventMenuItem : public GmapTalkMenuItem {
public:
  TalkEventMenuItem();

  const char* GetMid() override;
  int ACall() override;
  void DrawText() override;
  bool Unknown70() override;
};

[[gnu::used]] TalkEventMenuItem::TalkEventMenuItem() = default;

}

}
