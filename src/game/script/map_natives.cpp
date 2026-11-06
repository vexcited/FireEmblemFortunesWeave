#include <vector>

#include "game/data/data_files.hpp"
#include "game/map/command_item_menu_base.hpp"
#include "game/map/image.hpp"
#include "game/map/script_singletons.hpp"
#include "game/map/unit_flags.hpp"
#include "game/script/script_string.hpp"
#include "game/sound/se.hpp"
#include "game/unit.hpp"
#include "game/unit_pool.hpp"

// The natives of the map script namespaces.
namespace game::script::map {

#pragma GCC visibility push(hidden)

namespace {

[[gnu::always_inline]] inline int GetIndexOf(const Unit* unit) {
  return unit->GetIndex() != 0 ? unit->GetIndex() : -1;
}

// The index of the unit kept in a byte, 0 for none.
[[gnu::always_inline]] inline int GetIndexOf(const uint8_t& index) {
  if (index == 0) {
    return -1;
  }
  const Unit* unit = UnitPool::Get(index);
  return unit != nullptr ? GetIndexOf(unit) : -1;
}

// The PID of the unit kept in a byte, null when the unit has no person.
[[gnu::always_inline]] inline const char* GetPidOf(const uint8_t& index) {
  if (index == 0) {
    return "";
  }
  const Unit* unit = UnitPool::Get(index);
  if (unit == nullptr) {
    return "";
  }
  const PersonData* person = unit->GetPerson();
  return person != nullptr ? person->key.text : nullptr;
}

}

bool IsEnterable(int x, int z, int moveType);
void RecoverUnits();

bool CanEnter(int x, int z, int moveType) {
  return IsEnterable(x, z, moveType);
}

void RecoverUnitForContinue() {
  RecoverUnits();
}

void UpdateImage() {
  if (::game::map::Image* image = ::game::map::Image::GetInstance()) {
    image->Update();
  }
}

int GetPlayAreaMinX() {
  const ::game::map::Image* image = ::game::map::Image::GetInstance();
  return image != nullptr ? image->GetPlayArea(0) : 0;
}

int GetPlayAreaMinZ() {
  const ::game::map::Image* image = ::game::map::Image::GetInstance();
  return image != nullptr ? image->GetPlayArea(1) : 0;
}

int GetPlayAreaMaxX() {
  const ::game::map::Image* image = ::game::map::Image::GetInstance();
  return image != nullptr ? image->GetPlayArea(2) : 0;
}

int GetPlayAreaMaxZ() {
  const ::game::map::Image* image = ::game::map::Image::GetInstance();
  return image != nullptr ? image->GetPlayArea(3) : 0;
}

}

namespace game::script::map::info {

void UpdateHeightAt(int x, int z);

void UpdateHeight(int x, int z) {
  UpdateHeightAt(x, z);
}

void PushNoDisp() {
  if (::game::map::MapInfo* info = ::game::map::MapInfo::GetInstance()) {
    info->Push(0x12);
  }
}

}

namespace game::script::map::camera {

void Pop() {
  if (::game::map::MapInfo* info = ::game::map::MapInfo::GetInstance()) {
    info->Pop();
  }
}

void SetTilt(float tilt) {
  if (::game::map::Camera* camera = ::game::map::Camera::GetInstance()) {
    camera->GetControl()->SetTilt(tilt);
  }
}

}

namespace game::script::map::zoom {

bool IsActive() {
  return ::game::map::Zoom::GetInstance()->IsActive();
}

void StopShake() {
  if (::game::map::Camera* camera = ::game::map::Camera::GetInstance()) {
    camera->GetControl()->StopShake();
  }
}

}

namespace game::script::map::terrain {

// Set while the scripts change the terrain, the changes apply at the end.
extern bool g_terrain_changing;

void ChangeTerrain(int x, int z, const char* tid, bool spread);

void SetBegin() {
  g_terrain_changing = true;
}

void SetSingle(int x, int z, const ScriptString& tid) {
  ChangeTerrain(x, z, tid.GetText(), false);
}

void Set(int x, int z, const ScriptString& tid) {
  ChangeTerrain(x, z, tid.GetText(), true);
}

bool IsInTargetPos(int x, int z) {
  return ::game::map::Mind::GetInstance()->IsInTargetPos(x, z);
}

namespace {

[[gnu::always_inline]] inline const ::game::map::TrickData* FindTrick(int x,
  int z) {
  return ::game::map::Trick::GetInstance()->GetMap()->Find(x, z);
}

}

bool IsTrickEnable(int x, int z) {
  const ::game::map::TrickData* trick = FindTrick(x, z);
  return trick != nullptr && trick->IsActive();
}

int GetBullet(int x, int z) {
  const ::game::map::TrickData* trick = FindTrick(x, z);
  return trick != nullptr ? trick->GetLifeValue() : -1;
}

}

namespace game::script::map::mind {

namespace {

using Mind = ::game::map::Mind;

}

int GetTargetPosX() {
  return Mind::GetInstance()->GetTargetX();
}

int GetTargetPosZ() {
  return Mind::GetInstance()->GetTargetZ();
}

int GetUnitIndex() {
  return GetIndexOf(Mind::GetInstance()->GetUnit());
}

int GetTargetUnitIndex() {
  return GetIndexOf(Mind::GetInstance()->GetTargetUnit());
}

ScriptString GetUnitPID() {
  return ScriptString(GetPidOf(Mind::GetInstance()->GetUnit()));
}

ScriptString GetTargetUnitPID() {
  return ScriptString(GetPidOf(Mind::GetInstance()->GetTargetUnit()));
}

ScriptString GetActiveSkill() {
  const char* sid = "";
  const SkillKey& key = Mind::GetInstance()->GetActiveSkill();
  if (key.index != 0) {
    if (const SkillData* skill = SkillFile::GetInstance()->At(key.index)) {
      sid = skill->key.text;
    }
  }
  return ScriptString(sid);
}

}

namespace game::script::map::battle {

namespace {

using MapEventManager = ::game::map::MapEventManager;

}

int GetOffenceUnitIndex() {
  const MapEventManager* events = MapEventManager::GetInstance();
  return events != nullptr ? GetIndexOf(events->GetOffenceUnit()) : -1;
}

int GetDefenceUnitIndex() {
  const MapEventManager* events = MapEventManager::GetInstance();
  return events != nullptr ? GetIndexOf(events->GetDefenceUnit()) : -1;
}

ScriptString GetOffenceUnitPID() {
  const MapEventManager* events = MapEventManager::GetInstance();
  return ScriptString(events != nullptr ?
    GetPidOf(events->GetOffenceUnit()) : "");
}

ScriptString GetDefenceUnitPID() {
  const MapEventManager* events = MapEventManager::GetInstance();
  return ScriptString(events != nullptr ?
    GetPidOf(events->GetDefenceUnit()) : "");
}

}

namespace game::script::map::snd {

void StartBgm(const char* label);
void StopBgm(const sound::PlayParam& param);

void PlayBgm(const ScriptString& bgmLabel) {
  StartBgm(bgmLabel.GetText());
}

void StopBgm(int fade) {
  StopBgm(sound::PlayParam(fade));
}

int GeFadeMsec(const ScriptString& fadeName) {
  return sound::PlayParam(fadeName.GetText()).GetTime();
}

}

namespace game::script::map::history {

namespace {

using Impl = ::game::map::history::Impl;

[[gnu::always_inline]] inline Unit* FindUnit(int index) {
  if (index < 0) {
    return nullptr;
  }
  const uint8_t key = index;
  return UnitPool::Get(key);
}

}

void LogInfoSetEscape(int unitIndex) {
  if (const Unit* unit = FindUnit(unitIndex)) {
    Impl* history = Impl::GetInstance();
    if (history != nullptr && history->IsRecording()) {
      history->GetLogInfo().SetEscape(unit);
    }
  }
}

void LogInfoSetBattleSkill(int unitIndex, const ScriptString& sid) {
  if (const Unit* unit = FindUnit(unitIndex)) {
    const char* text = sid.GetText();
    Impl* history = Impl::GetInstance();
    if (history != nullptr && history->IsRecording()) {
      history->GetLogInfo().SetBattleSkill(unit, text);
    }
  }
}

}

namespace game::script::map::effect {

class Sequence;

extern Sequence* g_sequence;

void PlayAtUnit(Sequence* sequence, const char* const& name,
  const Unit* unit);
void Create(Sequence* sequence, const char* const& name, int x, int z);

// Where and how an effect plays, without a destructor.
struct Placement {
  Placement(const char* const& name, int x, int z, bool on_ground,
    int angle);

  uint8_t data[0x20];
};

void Play(Sequence* sequence, const char* const& name,
  const Placement& placement);

// The effects playing, found by the hash of their name and their cell.
struct Effect {
  uint64_t hash;
  uint8_t unknown_08_[0x20];
  int x;
  int z;
};

class EffectManager {
public:
  const std::vector<Effect*>& GetEffects() const {
    return effects_;
  }

private:
  uint8_t unknown_00_[0x1bf0];
  std::vector<Effect*> effects_;
};

extern EffectManager* g_effect_manager;

void Delete(EffectManager* manager, Sequence* sequence, Effect* effect);

namespace {

[[gnu::always_inline]] inline void MarkChanged() {
  ::game::map::history::Impl* history =
    ::game::map::history::Impl::GetInstance();
  if (history != nullptr && history->IsRecording()) {
    history->MarkChanged(0x8000);
  }
}

}

void Play(const ScriptString& effName, int x, int z, int rotDeg) {
  if (x < 0 || z < 0) {
    return;
  }
  if (Sequence* sequence = g_sequence) {
    const char* name = effName.GetText();
    const Placement placement(name, x, z, true, rotDeg);
    Play(sequence, name, placement);
  }
}

void Delete(const ScriptString& effName) {
  if (Sequence* sequence = g_sequence) {
    const char* name = effName.GetText();
    EffectManager* manager = g_effect_manager;
    const uint64_t hash = HashString(name);
    Effect* found = nullptr;
    for (Effect* effect : manager->GetEffects()) {
      if (effect->hash == hash) {
        found = effect;
        break;
      }
    }
    Delete(manager, sequence, found);
    MarkChanged();
  }
}

void Delete(int x, int z, const ScriptString& effName) {
  if (Sequence* sequence = g_sequence) {
    const char* name = effName.GetText();
    EffectManager* manager = g_effect_manager;
    const uint64_t hash = HashString(name);
    Effect* found = nullptr;
    for (Effect* effect : manager->GetEffects()) {
      if (effect->x + (effect->z << 8) == x + (z << 8) &&
        effect->hash == hash) {
        found = effect;
        break;
      }
    }
    Delete(manager, sequence, found);
    MarkChanged();
  }
}

void PlayUnitCenter(const ScriptString& effName, int unitIndex) {
  if (unitIndex < 0) {
    return;
  }
  const uint8_t key = unitIndex;
  const Unit* unit = UnitPool::Get(key);
  if (unit == nullptr) {
    return;
  }
  if (Sequence* sequence = g_sequence) {
    const char* name = effName.GetText();
    PlayAtUnit(sequence, name, unit);
  }
}

void Create(const ScriptString& effName, int x, int z) {
  if (Sequence* sequence = g_sequence) {
    const char* name = effName.GetText();
    Create(sequence, name, x, z);
    MarkChanged();
  }
}

}

namespace game::script::map::event {

// The index of the unit acting while the events run.
extern uint8_t g_active_unit;

int GetActiveUnitIndex() {
  return GetIndexOf(g_active_unit);
}

enum class Timing {
  kPhaseBefore = 1,
  kPhaseAfter = 2,
  kPhaseEnd = 3,
  kDieBefore = 14,
  kDieAfter = 15,
  kDieTalk = 16,
  kReviveBefore = 17,
  kReviveAfter = 18,
  kBattleBefore = 23,
  kBattleTalk = 24,
  kBattleAfter = 25,
  kBattleComplete = 26,
};

// The registrations of the events, the argument is optional.
void RegisterPhase(Timing timing, const ScriptString& funcName, int turnMin,
  int turnMax, int force, const ScriptString& conditionFunc, ScriptAny* arg);
void RegisterBattle(Timing timing, const ScriptString& funcName,
  const ScriptString& fromPid, int fromForce, const ScriptString& toPid,
  int toForce, bool each, const ScriptString& conditionFunc, ScriptAny* arg);
void RegisterPickup(const ScriptString& funcName, const ScriptString& pid,
  const ScriptString& conditionFunc, ScriptAny* arg, bool silent);
void RegisterFixed(const ScriptString& funcName, const ScriptString& pid,
  int force, const ScriptString& conditionFunc, ScriptAny* arg, bool silent);
void RegisterDie(Timing timing, const ScriptString& funcName,
  const ScriptString& pid, int force, const ScriptString& conditionFunc,
  ScriptAny* arg);
void RegisterRevive(Timing timing, const ScriptString& funcName,
  const ScriptString& pid, int force, const ScriptString& conditionFunc,
  ScriptAny* arg);
void RegisterUseActiveSkill(const ScriptString& funcName,
  const ScriptString& pid, int force, const ScriptString& sid,
  const ScriptString& conditionFunc, ScriptAny* arg);
void RegisterUnitCommandBefore(const ScriptString& funcName,
  const ScriptString& pid, const ScriptString& conditionFunc, ScriptAny* arg);
void RegisterMindComplete(const ScriptString& funcName,
  const ScriptString& pid, int force, const ScriptString& conditionFunc,
  ScriptAny* arg);
void RegisterTalk(const ScriptString& funcName, const ScriptString& fromPid,
  int fromForce, const ScriptString& toPid, int toForce, bool each,
  const ScriptString& conditionFunc, ScriptAny* arg);
void RegisterArea(const ScriptString& funcName, int minX, int minZ, int maxX,
  int maxZ, int force, const ScriptString& conditionFunc, ScriptAny* arg);
void RegisterTbox(const ScriptString& funcName, int x, int z, ScriptAny* arg);
void RegisterDoor(const ScriptString& funcName, int minX, int minZ, int maxX,
  int maxZ, ScriptAny* arg);
void RegisterGimmick(const ScriptString& funcName, int x, int z,
  ScriptAny* arg);
void RegisterDestroy(const ScriptString& funcName, int minX, int minZ,
  int maxX, int maxZ, ScriptAny* arg);
void RegisterBreakdown(const ScriptString& funcName, int x, int z,
  ScriptAny* arg);
void RegisterEscape(const ScriptString& funcName, int x, int z,
  const ScriptString& pid, const ScriptString& conditionFunc, ScriptAny* arg,
  bool before);
void RegisterWarpCommandAfter(const ScriptString& funcName, int x, int z,
  const ScriptString& conditionFunc, ScriptAny* arg);

#define GAME_SCRIPT_PHASE(name, timing) \
  void name(const ScriptString& funcName, int turnMin, int turnMax, \
    int force, const ScriptString& conditionFunc) { \
    RegisterPhase(timing, funcName, turnMin, turnMax, force, conditionFunc, \
      nullptr); \
  } \
  void name(const ScriptString& funcName, int turnMin, int turnMax, \
    int force, const ScriptString& conditionFunc, ScriptAny& arg) { \
    RegisterPhase(timing, funcName, turnMin, turnMax, force, conditionFunc, \
      &arg); \
  }

GAME_SCRIPT_PHASE(EntryPhaseBefore, Timing::kPhaseBefore)
GAME_SCRIPT_PHASE(EntryPhaseAfter, Timing::kPhaseAfter)
GAME_SCRIPT_PHASE(EntryPhaseEnd, Timing::kPhaseEnd)

#undef GAME_SCRIPT_PHASE

#define GAME_SCRIPT_BATTLE(name, timing) \
  void name(const ScriptString& funcName, const ScriptString& fromPid, \
    int fromForce, const ScriptString& toPid, int toForce, bool each, \
    const ScriptString& conditionFunc) { \
    RegisterBattle(timing, funcName, fromPid, fromForce, toPid, toForce, \
      each, conditionFunc, nullptr); \
  } \
  void name(const ScriptString& funcName, const ScriptString& fromPid, \
    int fromForce, const ScriptString& toPid, int toForce, bool each, \
    const ScriptString& conditionFunc, ScriptAny& arg) { \
    RegisterBattle(timing, funcName, fromPid, fromForce, toPid, toForce, \
      each, conditionFunc, &arg); \
  }

GAME_SCRIPT_BATTLE(EntryBattleBefore, Timing::kBattleBefore)
GAME_SCRIPT_BATTLE(EntryBattleTalk, Timing::kBattleTalk)
GAME_SCRIPT_BATTLE(EntryBattleAfter, Timing::kBattleAfter)

#undef GAME_SCRIPT_BATTLE

// Any unit of any force completes the battle.
void EntryBattleComplete(const ScriptString& funcName,
  const ScriptString& conditionFunc) {
  RegisterBattle(Timing::kBattleComplete, funcName, ScriptString(""), -1,
    ScriptString(""), -1, false, conditionFunc, nullptr);
}

void EntryBattleComplete(const ScriptString& funcName,
  const ScriptString& conditionFunc, ScriptAny& arg) {
  RegisterBattle(Timing::kBattleComplete, funcName, ScriptString(""), -1,
    ScriptString(""), -1, false, conditionFunc, &arg);
}

#define GAME_SCRIPT_UNIT_EVENT(name, function, timing) \
  void name(const ScriptString& funcName, const ScriptString& pid, \
    int force, const ScriptString& conditionFunc) { \
    function(timing, funcName, pid, force, conditionFunc, nullptr); \
  } \
  void name(const ScriptString& funcName, const ScriptString& pid, \
    int force, const ScriptString& conditionFunc, ScriptAny& arg) { \
    function(timing, funcName, pid, force, conditionFunc, &arg); \
  }

GAME_SCRIPT_UNIT_EVENT(EntryDieTalk, RegisterDie, Timing::kDieTalk)
GAME_SCRIPT_UNIT_EVENT(EntryDieBefore, RegisterDie, Timing::kDieBefore)
GAME_SCRIPT_UNIT_EVENT(EntryDieAfter, RegisterDie, Timing::kDieAfter)
GAME_SCRIPT_UNIT_EVENT(EntryReviveBefore, RegisterRevive,
  Timing::kReviveBefore)
GAME_SCRIPT_UNIT_EVENT(EntryReviveAfter, RegisterRevive,
  Timing::kReviveAfter)

#undef GAME_SCRIPT_UNIT_EVENT

void EntryPickup(const ScriptString& funcName, const ScriptString& pid,
  const ScriptString& conditionFunc) {
  RegisterPickup(funcName, pid, conditionFunc, nullptr, false);
}

void EntryPickup(const ScriptString& funcName, const ScriptString& pid,
  const ScriptString& conditionFunc, ScriptAny& arg) {
  RegisterPickup(funcName, pid, conditionFunc, &arg, false);
}

void EntryPickupSilent(const ScriptString& funcName, const ScriptString& pid,
  const ScriptString& conditionFunc) {
  RegisterPickup(funcName, pid, conditionFunc, nullptr, true);
}

void EntryPickupSilent(const ScriptString& funcName, const ScriptString& pid,
  const ScriptString& conditionFunc, ScriptAny& arg) {
  RegisterPickup(funcName, pid, conditionFunc, &arg, true);
}

void EntryFixed(const ScriptString& funcName, const ScriptString& pid,
  int force, const ScriptString& conditionFunc) {
  RegisterFixed(funcName, pid, force, conditionFunc, nullptr, false);
}

void EntryFixed(const ScriptString& funcName, const ScriptString& pid,
  int force, const ScriptString& conditionFunc, ScriptAny& arg) {
  RegisterFixed(funcName, pid, force, conditionFunc, &arg, false);
}

void EntryFixedSilent(const ScriptString& funcName, const ScriptString& pid,
  int force, const ScriptString& conditionFunc) {
  RegisterFixed(funcName, pid, force, conditionFunc, nullptr, true);
}

void EntryFixedSilent(const ScriptString& funcName, const ScriptString& pid,
  int force, const ScriptString& conditionFunc, ScriptAny& arg) {
  RegisterFixed(funcName, pid, force, conditionFunc, &arg, true);
}

void EntryUseActiveSkill(const ScriptString& funcName,
  const ScriptString& pid, int force, const ScriptString& sid,
  const ScriptString& conditionFunc) {
  RegisterUseActiveSkill(funcName, pid, force, sid, conditionFunc, nullptr);
}

void EntryUseActiveSkill(const ScriptString& funcName,
  const ScriptString& pid, int force, const ScriptString& sid,
  const ScriptString& conditionFunc, ScriptAny& arg) {
  RegisterUseActiveSkill(funcName, pid, force, sid, conditionFunc, &arg);
}

void EntryUnitCommandBefore(const ScriptString& funcName,
  const ScriptString& pid, const ScriptString& conditionFunc) {
  RegisterUnitCommandBefore(funcName, pid, conditionFunc, nullptr);
}

void EntryUnitCommandBefore(const ScriptString& funcName,
  const ScriptString& pid, const ScriptString& conditionFunc,
  ScriptAny& arg) {
  RegisterUnitCommandBefore(funcName, pid, conditionFunc, &arg);
}

void EntryMindComplete(const ScriptString& funcName, const ScriptString& pid,
  int force, const ScriptString& conditionFunc) {
  RegisterMindComplete(funcName, pid, force, conditionFunc, nullptr);
}

void EntryMindComplete(const ScriptString& funcName, const ScriptString& pid,
  int force, const ScriptString& conditionFunc, ScriptAny& arg) {
  RegisterMindComplete(funcName, pid, force, conditionFunc, &arg);
}

void EntryTalk(const ScriptString& funcName, const ScriptString& fromPid,
  int fromForce, const ScriptString& toPid, int toForce, bool each,
  const ScriptString& conditionFunc) {
  RegisterTalk(funcName, fromPid, fromForce, toPid, toForce, each,
    conditionFunc, nullptr);
}

void EntryTalk(const ScriptString& funcName, const ScriptString& fromPid,
  int fromForce, const ScriptString& toPid, int toForce, bool each,
  const ScriptString& conditionFunc, ScriptAny& arg) {
  RegisterTalk(funcName, fromPid, fromForce, toPid, toForce, each,
    conditionFunc, &arg);
}

void EntryArea(const ScriptString& funcName, int minX, int minZ, int maxX,
  int maxZ, int force, const ScriptString& conditionFunc) {
  RegisterArea(funcName, minX, minZ, maxX, maxZ, force, conditionFunc,
    nullptr);
}

void EntryArea(const ScriptString& funcName, int minX, int minZ, int maxX,
  int maxZ, int force, const ScriptString& conditionFunc, ScriptAny& arg) {
  RegisterArea(funcName, minX, minZ, maxX, maxZ, force, conditionFunc, &arg);
}

void EntryTbox(const ScriptString& funcName, int x, int z) {
  RegisterTbox(funcName, x, z, nullptr);
}

void EntryTbox(const ScriptString& funcName, int x, int z, ScriptAny& arg) {
  RegisterTbox(funcName, x, z, &arg);
}

void EntryDoor(const ScriptString& funcName, int minX, int minZ, int maxX,
  int maxZ) {
  RegisterDoor(funcName, minX, minZ, maxX, maxZ, nullptr);
}

void EntryDoor(const ScriptString& funcName, int minX, int minZ, int maxX,
  int maxZ, ScriptAny& arg) {
  RegisterDoor(funcName, minX, minZ, maxX, maxZ, &arg);
}

void EntryGimmick(const ScriptString& funcName, int x, int z) {
  RegisterGimmick(funcName, x, z, nullptr);
}

void EntryGimmick(const ScriptString& funcName, int x, int z,
  ScriptAny& arg) {
  RegisterGimmick(funcName, x, z, &arg);
}

void EntryDestroy(const ScriptString& funcName, int minX, int minZ, int maxX,
  int maxZ) {
  RegisterDestroy(funcName, minX, minZ, maxX, maxZ, nullptr);
}

void EntryDestroy(const ScriptString& funcName, int minX, int minZ, int maxX,
  int maxZ, ScriptAny& arg) {
  RegisterDestroy(funcName, minX, minZ, maxX, maxZ, &arg);
}

void EntryBreakdown(const ScriptString& funcName, int x, int z) {
  RegisterBreakdown(funcName, x, z, nullptr);
}

void EntryBreakdown(const ScriptString& funcName, int x, int z,
  ScriptAny& arg) {
  RegisterBreakdown(funcName, x, z, &arg);
}

void EntryEscapeBefore(const ScriptString& funcName, int x, int z,
  const ScriptString& pid, const ScriptString& conditionFunc) {
  RegisterEscape(funcName, x, z, pid, conditionFunc, nullptr, true);
}

void EntryEscapeBefore(const ScriptString& funcName, int x, int z,
  const ScriptString& pid, const ScriptString& conditionFunc,
  ScriptAny& arg) {
  RegisterEscape(funcName, x, z, pid, conditionFunc, &arg, true);
}

void EntryEscapeAfter(const ScriptString& funcName, int x, int z,
  const ScriptString& pid, const ScriptString& conditionFunc) {
  RegisterEscape(funcName, x, z, pid, conditionFunc, nullptr, false);
}

void EntryEscapeAfter(const ScriptString& funcName, int x, int z,
  const ScriptString& pid, const ScriptString& conditionFunc,
  ScriptAny& arg) {
  RegisterEscape(funcName, x, z, pid, conditionFunc, &arg, false);
}

void EntryWarpCommandAfter(const ScriptString& funcName, int x, int z,
  const ScriptString& conditionFunc) {
  RegisterWarpCommandAfter(funcName, x, z, conditionFunc, nullptr);
}

void EntryWarpCommandAfter(const ScriptString& funcName, int x, int z,
  const ScriptString& conditionFunc, ScriptAny& arg) {
  RegisterWarpCommandAfter(funcName, x, z, conditionFunc, &arg);
}

#pragma GCC visibility pop

}
