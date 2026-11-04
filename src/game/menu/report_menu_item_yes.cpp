#include "game/menu/game_menu_item.hpp"

namespace game::menu {

namespace {

class QuestMenuItemBase : public menu::GameMenuItem {
public:
  bool Unknown14() override { return true; }
};

class ReportMenuItem_Yes : public QuestMenuItemBase {
public:
  ReportMenuItem_Yes();

  const char* GetMid() override;
  int ACall() override;
  bool IsActive() override;
};

[[gnu::used]] ReportMenuItem_Yes::ReportMenuItem_Yes() = default;

class AcceptMenuItem_Yes : public QuestMenuItemBase {
public:
  AcceptMenuItem_Yes();

  const char* GetMid() override { return "MID_QuestMenu_Accept_Yes"; }
  int ACall() override;
  void PlayDecideSe() override;
  bool IsActive() override;
};

[[gnu::used]] AcceptMenuItem_Yes::AcceptMenuItem_Yes() = default;

class QuestMenuItem_No : public QuestMenuItemBase {
public:
  QuestMenuItem_No();

  const char* GetMid() override;
  void PlayDecideSe() override;
};

[[gnu::used]] QuestMenuItem_No::QuestMenuItem_No() = default;

class AcceptMenuItem_StoryYes : public menu::GameMenuItem {
public:
  AcceptMenuItem_StoryYes();

  const char* GetMid() override { return "MID_QuestMenu_Accept_Yes"; }
  bool Unknown14() override { return true; }
  bool IsActive() override { return true; }
};

[[gnu::used]] AcceptMenuItem_StoryYes::AcceptMenuItem_StoryYes() = default;

}

}
