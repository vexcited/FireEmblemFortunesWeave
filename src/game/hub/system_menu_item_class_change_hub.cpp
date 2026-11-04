#include "game/menu/assist_menu_item_next_timeline.hpp"
#include "game/menu/info_sub_menu_item_dispatch.hpp"
#include "game/menu/sub_menu_item.hpp"
#include "game/menu/system_menu_item.hpp"
#include "game/menu/system_menu_item_assist.hpp"
#include "game/menu/system_menu_item_class_change.hpp"
#include "game/menu/system_menu_item_save.hpp"

namespace game::hub {

namespace {

class SystemMenuItem_ClassChange_Hub : public menu::SystemMenuItem_ClassChange {
public:
  SystemMenuItem_ClassChange_Hub();
};

[[gnu::used]]
SystemMenuItem_ClassChange_Hub::SystemMenuItem_ClassChange_Hub() = default;

class SystemMenuItem_Map_Hub : public menu::SystemMenuItem {
public:
  SystemMenuItem_Map_Hub();

  const char* GetMid() override;
  bool IsDecidable() override;
  int ACall() override;
  bool IsActive() override;
};

[[gnu::used]] SystemMenuItem_Map_Hub::SystemMenuItem_Map_Hub() = default;

class SystemMenuItem_Assist_Hub : public menu::SystemMenuItem_Assist {
public:
  SystemMenuItem_Assist_Hub();

  int ACall() override;
};

[[gnu::used]] SystemMenuItem_Assist_Hub::SystemMenuItem_Assist_Hub() = default;

class HubMenuItem_ExitGmap : public menu::SubMenuItem {
public:
  HubMenuItem_ExitGmap();

  const char* GetMid() override { return "MID_SysMenu_Gmap"; }
  bool IsDecidable() override;
  int ACall() override;
  bool IsActive() override;
};

[[gnu::used]] HubMenuItem_ExitGmap::HubMenuItem_ExitGmap() = default;

class HubMenuItem_Escape : public menu::SubMenuItem {
public:
  HubMenuItem_Escape();

  const char* GetMid() override { return "MID_SysMenu_Escape"; }
  bool IsDecidable() override;
  int ACall() override;
  void PlayDecideSe() override;
  bool IsActive() override;
};

[[gnu::used]] HubMenuItem_Escape::HubMenuItem_Escape() = default;

class HubMenuItem_NextTimeline : public menu::AssistMenuItem_NextTimeline {
public:
  HubMenuItem_NextTimeline();
};

[[gnu::used]] HubMenuItem_NextTimeline::HubMenuItem_NextTimeline() = default;

class SystemMenuItem_Save_Hub : public menu::SystemMenuItem_Save {
public:
  SystemMenuItem_Save_Hub();
};

[[gnu::used]] SystemMenuItem_Save_Hub::SystemMenuItem_Save_Hub() = default;

class HubMenuItem_Info_Dispatch : public menu::InfoSubMenuItem_Dispatch {
public:
  HubMenuItem_Info_Dispatch();
};

[[gnu::used]] HubMenuItem_Info_Dispatch::HubMenuItem_Info_Dispatch() = default;

}

}
