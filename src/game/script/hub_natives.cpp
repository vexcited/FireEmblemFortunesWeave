#include <string>

#include "as/script_context.hpp"
#include "game/game_hub_data.hpp"
#include "game/game_mode_data.hpp"
#include "game/hub/bgm_manager.hpp"
#include "game/hub/character.hpp"
#include "game/hub/input.hpp"
#include "game/hub/manager.hpp"
#include "game/hub/read_write.hpp"
#include "game/hub/schedule_manager.hpp"
#include "game/hub/timeline_event_manager.hpp"
#include "game/script/script_string.hpp"

namespace game::script::hub {

// Some natives read the instances through the global offset table.
template<typename T>
extern T* g_instance;

#pragma GCC visibility push(hidden)

namespace {

[[gnu::always_inline]] inline void OpenBlock() {
  as::ScriptContext* context = as::GetCurrentContext();
  context->GetRunner()->SetBlockState(1);
  context->ClearCallback();
}

}

void PlayerStop() {
  OpenBlock();
  game::hub::Input::GetInstance()->StopPlayer();
}

void PlayerRestart() {
  OpenBlock();
  game::hub::Input::GetInstance()->RestartPlayer();
}

void InputStop() {
  OpenBlock();
  game::hub::Input::GetInstance()->StopInput();
}

void InputRestart() {
  OpenBlock();
  game::hub::Input::GetInstance()->RestartInput();
}

void PausePersistent() {
  OpenBlock();
  game::hub::Manager::GetInstance()->PausePersistent();
}

void ResumePersistent() {
  OpenBlock();
  game::hub::Manager::GetInstance()->ResumePersistent();
}

void PlayBgm() {
  OpenBlock();
  game::hub::BgmManager::GetInstance()->Play();
}

uint64_t GetObserveDayIdx() {
  OpenBlock();
  return game::hub::ScheduleManager::GetInstance()->GetObserveDayIdx();
}

uint64_t GetObserveCycleIdx() {
  OpenBlock();
  return game::hub::ScheduleManager::GetInstance()->GetObserveCycleIdx();
}

void ImmidiateJumpNextHubTimeline() {
  OpenBlock();
  game::hub::TimelineEventManager::GetInstance()->ImmediateJumpNext();
}

bool IsRunningScriptEvent() {
  OpenBlock();
  return game::hub::Manager::GetInstance()->IsRunningScriptEvent();
}

bool IsTalkSeq_EnableBindFinal() {
  OpenBlock();
  return game::hub::TalkSupport::GetInstance()->IsEnableBindFinal();
}

void SetContinueEncountBgm(bool isEnable) {
  OpenBlock();
  game::GameHubData::GetInstance()->SetContinueEncountBgm(isEnable);
}

void ReloadLightweight() {
  OpenBlock();
  game::hub::Manager::GetInstance()->ReloadLightweight();
}

// Subquests wait in the free mode of chapter kind 5.
bool IsCanSubquest() {
  OpenBlock();
  const game::GameModeData* data = game::GameModeData::GetInstance();
  return data == nullptr || data->GetChapterKind() != 5 ||
    data->GetMode() != game::GameModeData::kModeChapter;
}

bool IsCompletedMap() {
  const game::GameModeData* data = game::GameModeData::GetInstance();
  return data != nullptr &&
    data->HasFlag(game::GameModeData::kFlagCompletedMap);
}

void SetLockLightReloadOutSide(bool isLock) {
  OpenBlock();
  g_instance<game::hub::Manager>->SetLockLightReloadOutSide(isLock);
}

void SetEnableFacility(bool isEnable) {
  OpenBlock();
  g_instance<game::GameHubData>->SetEnableFacility(isEnable);
}

void SetTalkSeq_EnableBindFinal(const bool isEnable) {
  OpenBlock();
  g_instance<game::hub::TalkSupport>->SetEnableBindFinal(isEnable);
}

void SetDisableSaveMenu(bool isEnable) {
  OpenBlock();
  g_instance<game::GameHubData>->SetDisableSaveMenu(isEnable);
}

void SetDngUnitCountOne(bool isEnable) {
  OpenBlock();
  g_instance<game::GameHubData>->SetDngUnitCountOne(isEnable);
}

as::string GetMapName() {
  OpenBlock();
  return as::string(g_instance<game::hub::Manager>->GetMapName().c_str());
}

as::string GetAreaName() {
  OpenBlock();
  return as::string(g_instance<game::hub::Manager>->GetAreaName().c_str());
}

as::string GetAreaFullName() {
  OpenBlock();
  return as::string(
    g_instance<game::hub::Manager>->GetAreaFullName().c_str());
}

void BindEnemyStop() {
  OpenBlock();
  game::hub::Manager::GetInstance()->GetEnemyStop().Push();
}

void UnbindEnemyStop() {
  OpenBlock();
  game::hub::Manager::GetInstance()->GetEnemyStop().Pop();
}

void BindEnemyNotice() {
  OpenBlock();
  game::hub::Manager::GetInstance()->GetEnemyNotice().Push();
}

void UnbindEnemyNotice() {
  OpenBlock();
  game::hub::Manager::GetInstance()->GetEnemyNotice().Pop();
}

void BindEnemyStopOnPlayable() {
  OpenBlock();
  game::hub::Manager::GetInstance()->BindEnemyStopOnPlayable();
}

void PushRunningScriptEvent() {
  OpenBlock();
  game::hub::Manager* manager = game::hub::Manager::GetInstance();
  manager->GetScriptEvent().Push();
  manager->UpdateScriptEvent();
}

void PopRunningScriptEvent() {
  OpenBlock();
  game::hub::Manager* manager = game::hub::Manager::GetInstance();
  manager->GetScriptEvent().Pop();
  manager->UpdateScriptEvent();
}

void EntryFlag(const std::string& flagName, bool isActive) {
  OpenBlock();
  game::hub::ReadWrite::GetInstance()->SetEraseFlag(flagName.c_str(),
    isActive);
}

bool IsActiveFlag(const std::string& flagName) {
  OpenBlock();
  if (!game::GameModeData::GetInstance()->GetVariables()->Contains(
    game::HashedString(flagName.c_str()))) {
    return false;
  }
  const game::GameVariable* variable =
    game::GameModeData::GetInstance()->GetVariables()->Find(
      game::HashedString(flagName.c_str()));
  return variable != nullptr && variable->value > 0;
}

#pragma GCC visibility pop

}
