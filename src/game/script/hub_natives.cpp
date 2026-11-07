#include <string>
#include <string_view>

#include "as/script_context.hpp"
#include "as/script_time.hpp"
#include "game/game_hub_data.hpp"
#include "game/game_mode_data.hpp"
#include "game/hub/bgm_manager.hpp"
#include "game/hub/character.hpp"
#include "game/hub/hub_seq_enter.hpp"
#include "game/hub/input.hpp"
#include "game/hub/manager.hpp"
#include "game/hub/map_manager.hpp"
#include "game/hub/read_write.hpp"
#include "game/hub/schedule_manager.hpp"
#include "game/hub/timeline_event_manager.hpp"
#include "game/gmap/spot.hpp"
#include "game/script/script_proc.hpp"
#include "game/script/script_string.hpp"
#include "game/sound/game_sound.hpp"

namespace game {

#pragma GCC visibility push(hidden)

namespace zview {

class Manager : public Singleton<Manager> {
public:
  void SetHideNearest(bool isHideNearest) {
    hide_nearest_ = isHideNearest;
  }

private:
  uint8_t unknown_08_[0x2d];
  bool hide_nearest_;
};

}

namespace hub {

class Time : public Singleton<Time> {
public:
  void SetEnableEventSkipLayer(bool isEnable);
};

// The sound settings of the hub.
class Sound : public Singleton<Sound> {
public:
  // The game sound follows the setting when it changes.
  void SetEnableGameFadeVolume(bool isEnable) {
    if (game_fade_volume_ != isEnable) {
      game_fade_volume_ = isEnable;
      if (game::sound::GameSound* sound = game::sound::g_game_sound) {
        sound->SetGameFadeVolume(isEnable);
      }
    }
  }

private:
  uint8_t unknown_08_[0x30];
  bool game_fade_volume_;
};

// The situations the characters of the hub are enabled in.
class CharacterSituation : public Singleton<CharacterSituation> {
public:
  bool IsEnable(std::string_view pid) const;
};

// Whether a facility of the table opens at the time.
bool IsOpeningHour(const char* tableName, const gmap::GmapTime& time);

}

#pragma GCC visibility pop

}

namespace game::script::hub {

// Some natives read the instances through the global offset table.
template<typename T>
extern T* g_instance;

// The script manager of as/script_context.hpp, read through the global offset
// table by some of these natives.
extern as::ScriptManager* g_script_manager;

#pragma GCC visibility push(hidden)

// The script frame counter of as/script_time.hpp, read directly by GetDt.
extern as::FrameCounter* g_frame_counter;

namespace {

[[gnu::always_inline]] inline void OpenBlock() {
  as::ScriptContext* context = as::GetCurrentContext();
  context->GetRunner()->SetBlockState(1);
  context->ClearCallback();
}

// The natives reading the manager through the table.
[[gnu::always_inline]] inline void OpenBlockGot() {
  as::ScriptThread* thread =
    g_script_manager->GetThread(as::g_thread_info->GetIndex());
  as::ScriptContext* context =
    thread != nullptr ? thread->GetContext() : nullptr;
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

bool IsGameSkip() {
  return ProcGameSkipView::IsActive();
}

// A frame lasts the 1000 / 59.94 milliseconds of the NTSC rate.
float GetDt() {
  OpenBlock();
  return g_frame_counter->GetDeltaFrames() * 16.68335f / 1000.0f;
}

void SetHideNearest(bool IsHideNearest) {
  OpenBlockGot();
  g_instance<game::zview::Manager>->SetHideNearest(IsHideNearest);
}

void SetEnableEventSkipLayer(bool isEnable) {
  OpenBlockGot();
  g_instance<game::hub::Time>->SetEnableEventSkipLayer(isEnable);
}

void ExitPlayerWalk() {
  OpenBlock();
  g_instance<game::hub::CharacterManager>->ExitPlayerWalk(1.0f);
}

void SetEnableGameFadeVolume(bool isEnable) {
  OpenBlockGot();
  game::hub::Sound::GetInstance()->SetEnableGameFadeVolume(isEnable);
}

as::string GetMapLoadVariationId() {
  OpenBlock();
  const char* id = "";
  if (!game::hub::g_no_map) {
    id = game::hub::MapManager::GetInstance()->GetLoadVariationId().c_str();
  }
  return as::string(id);
}

bool IsEnableSituation(const std::string& pid) {
  OpenBlockGot();
  if (game::hub::g_no_map) {
    return false;
  }
  return game::hub::CharacterSituation::GetInstance()->IsEnable(pid);
}

float GetObjLocatorAngle(const std::string& objName,
  const std::string& lctName) {
  OpenBlockGot();
  return g_instance<game::hub::MapManager>->GetObjLocatorAngle(objName,
    lctName);
}

bool HasObjLocator(const std::string& objName, const std::string& lctName) {
  OpenBlockGot();
  return g_instance<game::hub::MapManager>->FindObjLocatorPos(objName,
    lctName).has_value();
}

bool IsOpeningHourFacility(const std::string& tableName) {
  OpenBlockGot();
  return game::hub::IsOpeningHour(tableName.c_str(),
    game::gmap::GmapClock::GetTime());
}

void SetEnableExitHubBgm(bool isEnable) {
  OpenBlockGot();
  g_instance<game::hub::BgmManager>->SetEnableExitHub(isEnable);
}

bool IsSkipFadeInEventEndCamera() {
  OpenBlock();
  return game::hub::HubSeqEnter::GetInstance()->IsSkippingFadeIn() ||
    game::hub::ProcHubSeqView::instance_->IsUnknown170();
}

#pragma GCC visibility pop

}
