#include <string>

#include "as/script_context.hpp"
#include "game/game_hub_data.hpp"
#include "game/hub/hub_character_dispos_manager.hpp"
#include "game/hub/locator.hpp"
#include "game/hub/manager.hpp"
#include "game/hub/map_manager.hpp"
#include "game/script/script_string.hpp"

// The natives of the hub::init script namespace.
namespace game::script::hub::init {

using game::hub::HubCharacterDisposManager;

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

}

void ClearGroupIdDisposCharacter(const std::string& areaName) {
  OpenBlock();
  HubCharacterDisposManager::GetInstance()->GetList().ClearGroupId(
    areaName.c_str());
}

void PushGroupIdDisposCharacter(const std::string& areaName,
  const std::string& groupId) {
  OpenBlock();
  HubCharacterDisposManager::GetInstance()->GetList().PushGroupId(
    areaName.c_str(), groupId.c_str());
}

void PushGroupIdDisposCharacterAll(const std::string& groupId) {
  OpenBlock();
  game::hub::HubCharacterDisposList& list =
    HubCharacterDisposManager::GetInstance()->GetList();
  list.PushGroupId(game::hub::Manager::GetInstance()->GetAreaName(),
    groupId.c_str());
}

void SetCheckEnableBuildPerson(bool isEnable) {
  OpenBlock();
  g_instance<HubCharacterDisposManager>->GetList().SetCheckEnableBuildPerson(
    isEnable);
}

void DisableSituationDisposCharacter() {
  OpenBlockDirect();
  g_instance<HubCharacterDisposManager>->GetList().DisableSituation();
}

void SetDestinationShowType(const std::string& mode) {
  OpenBlock();
  game::hub::Destination::GetInstance()->SetShowQuestion(mode == "Question");
}

void SetOverrideLoadVariationId(const std::string& variationId) {
  OpenBlock();
  game::hub::MapManager::GetInstance()->SetOverrideLoadVariationId(
    variationId.c_str());
}

void ChangeExLightingHades() {
  OpenBlockDirect();
  g_instance<game::GameHubData>->ChangeExLighting(1);
}

#pragma GCC visibility pop

}
