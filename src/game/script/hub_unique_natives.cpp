#include <stdint.h>

#include <optional>
#include <string>
#include <string_view>

#include "as/script_context.hpp"
#include "game/game_mode_data.hpp"
#include "game/hub/manager.hpp"
#include "game/hub/map_manager.hpp"
#include "game/script/script_string.hpp"

namespace game {

#pragma GCC visibility push(hidden)

// The flags of the heroes, by the hero of a route.
const HashedString& GetOfficialHeroPart3Flag(uint8_t hero);
const HashedString& GetClearedPartFlag(uint8_t hero, int part);

namespace hub {

// The route a label names, 1 to 9, or 0.
int ToRoute(std::string_view label);
bool IsCanHeroPart3(uint8_t hero);

void OpenDungeonClearSpot(int index);
bool IsDungeonCleared(int index);

bool HasStayEvent(int kind, const char* label, int unknown, bool unknown2);
bool IsStayIsmBird();

// The permission flags of the heroes, none for 0.
extern const char* const kPermitFlags[10];

// The names of the field hierarchy levels.
extern const std::string_view kFieldHierarchyNames[5];

}

#pragma GCC visibility pop

}

// The natives of the hub::unique script namespace.
namespace game::script::hub::unique {

using game::GameModeData;
using game::hub::Manager;

// The script manager of as/script_context.hpp, read through the global offset
// table by most of these natives.
extern as::ScriptManager* g_script_manager;

// Some natives read the instances through the global offset table.
template<typename T>
extern T* g_instance;

#pragma GCC visibility push(hidden)

namespace {

[[gnu::always_inline]] inline as::ScriptContext* GetCurrentContext() {
  as::ScriptThread* thread =
    g_script_manager->GetThread(as::g_thread_info->GetIndex());
  return thread != nullptr ? thread->GetContext() : nullptr;
}

[[gnu::always_inline]] inline void OpenBlock() {
  as::ScriptContext* context = GetCurrentContext();
  context->GetRunner()->SetBlockState(1);
  context->ClearCallback();
}

// The natives reading the manager directly.
[[gnu::always_inline]] inline void OpenBlockDirect() {
  as::ScriptContext* context = as::GetCurrentContext();
  context->GetRunner()->SetBlockState(1);
  context->ClearCallback();
}

// The hero of each route.
[[gnu::always_inline]] inline std::optional<uint8_t> GetRouteHero(
  const std::string& label) {
  switch (game::hub::ToRoute(label.c_str())) {
    case 1:
      return 1;
    case 2:
      return 2;
    case 3:
      return 3;
    case 4:
      return 7;
    case 5:
      return 5;
    case 6:
      return 6;
    case 7:
      return 8;
    case 8:
      return 4;
    case 9:
      return 9;
    default:
      return std::nullopt;
  }
}

}

as::string GetTempleByWeek() {
  OpenBlockDirect();
  return as::string("奉仕なし神官");
}

void OpenDungeonClearSpot(int index) {
  OpenBlock();
  game::hub::OpenDungeonClearSpot(index);
}

bool IsDungeonCleared(int index) {
  OpenBlock();
  return game::hub::IsDungeonCleared(index);
}

// The temple opens on the routes 7 and 9.
bool IsCanEnterJuFasTemple() {
  OpenBlockDirect();
  const GameModeData* data = GameModeData::GetInstance();
  return data != nullptr &&
    (data->GetChapterKind() == 7 || data->GetChapterKind() == 9);
}

as::string GetFieldHierarchy() {
  OpenBlockDirect();
  const char* name;
  if (game::hub::g_no_map) {
    name = "None";
  }
  else {
    const uint32_t hierarchy =
      game::hub::MapManager::GetInstance()->GetFieldHierarchy();
    name = hierarchy > 4 ? nullptr : game::hub::kFieldHierarchyNames[hierarchy].data();
  }
  return as::string(name);
}

bool IsCanRoute(std::string label) {
  OpenBlock();
  const std::optional<uint8_t> hero = GetRouteHero(label);
  bool permitted;
  if (hero) {
    permitted = GameModeData::IsVariableSet(game::hub::kPermitFlags[*hero]);
  }
  return hero.has_value() && permitted;
}

bool IsCanHeroPart3(std::string label) {
  OpenBlock();
  return game::hub::IsCanHeroPart3(GetRouteHero(label).value_or(0));
}

bool IsOfficialHeroPart3(std::string label) {
  OpenBlock();
  return GameModeData::IsVariableSet(
    game::GetOfficialHeroPart3Flag(GetRouteHero(label).value_or(0)));
}

bool IsClearedPart1(std::string label) {
  OpenBlock();
  const game::GameVariable* variable = GameModeData::FindVariable(
    game::GetClearedPartFlag(GetRouteHero(label).value_or(0), 1));
  return variable != nullptr && variable->value > 0;
}

void SetDiscoveryNotPlayable(bool isActive) {
  OpenBlock();
  g_instance<Manager>->SetFlag(Manager::kFlagDiscoveryNotPlayable, isActive);
}

void SetDisableEnemyTrackingUI(bool isActive) {
  OpenBlock();
  g_instance<Manager>->SetFlag(Manager::kFlagDisableEnemyTrackingUI,
    isActive);
}

void SetDisableEnemySilhouette(bool isActive) {
  OpenBlock();
  g_instance<Manager>->SetFlag(Manager::kFlagDisableEnemySilhouette,
    isActive);
}

void SetDisableWalkExitSound(bool isActive) {
  OpenBlock();
  g_instance<Manager>->SetFlag(Manager::kFlagDisableWalkExitSound, isActive);
}

bool IsStayIsmBird() {
  OpenBlockDirect();
  return game::hub::HasStayEvent(11, "", 0, true) &&
    game::hub::IsStayIsmBird();
}

bool CanTitleSeqTransition() {
  OpenBlockDirect();
  return !Manager::GetInstance()->HasFlag(
    Manager::kFlagTitleSeqTransitionLocked);
}

void OnTitleSeqJobIntroSignal() {
  OpenBlockDirect();
  Manager::GetInstance()->AddFlag(Manager::kFlagTitleSeqJobIntroSignal);
}

#pragma GCC visibility pop

}
