#include <algorithm>
#include <vector>

#include "game/data/data_files.hpp"
#include "game/map/command_item_menu_base.hpp"
#include "game/map/cursor.hpp"
#include "game/map/image.hpp"
#include "game/map/map_object.hpp"
#include "game/map/script_singletons.hpp"
#include "game/map/unit_flags.hpp"
#include "game/script/map_event_register.hpp"
#include "game/script/script_string.hpp"
#include "game/sound/se.hpp"
#include "game/unit.hpp"
#include "game/unit_item.hpp"
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

void SetSingle(int x, int z, const as::string& tid) {
  ChangeTerrain(x, z, tid.c_str(), false);
}

void Set(int x, int z, const as::string& tid) {
  ChangeTerrain(x, z, tid.c_str(), true);
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

// The terrain of an active trick of type 2 on the lowest layer, else the
// first terrain row.
as::string GetOverlapTID(int x, int z) {
  const ::game::map::TrickData* trick =
    ::game::map::Trick::GetInstance()->GetMap()->FindOnLayer(0, x, z);
  const TerrainData* terrain = nullptr;
  if (trick != nullptr && trick->GetType() == 2 && trick->IsActive()) {
    terrain = trick->GetData();
  }
  if (terrain == nullptr) {
    terrain = TerrainFile::GetInstance()->At(0);
  }
  return as::string(terrain != nullptr ? terrain->key.text : "");
}

as::string GetTrickTID(int x, int z) {
  const ::game::map::TrickData* trick = FindTrick(x, z);
  return as::string(trick != nullptr ? trick->GetTid() : "");
}

}

namespace game {

#pragma GCC visibility push(hidden)

// The item a unit without one uses, read through the global offset table.
[[gnu::visibility("default")]] extern const UnitItem g_empty_item;

namespace map {

// The battle process of the map sequence, with both sides of the battle.
class ProcMapSeqBattleView {
public:
  static ProcMapSeqBattleView* instance_;

  // The unit of the first side that died, null without one.
  const Unit* GetDeadUnit() const {
    const Side* side;
    if (battle_.sides[0].IsDead()) {
      side = &battle_.sides[0];
    }
    else if (battle_.sides[1].IsDead()) {
      side = &battle_.sides[1];
    }
    else {
      return nullptr;
    }
    return side->unit;
  }

private:
  struct Result {
    uint8_t unknown_0000_[0x2c0c];
    bool unknown_2c0c_;
  };

  struct Side {
    bool IsDead() const {
      return !result->unknown_2c0c_ && dead;
    }

    uint8_t unknown_00_[0x8];
    const Result* result;
    uint8_t unknown_10_[0x8];
    const Unit* unit;
    uint8_t unknown_20_[0x5c];
    bool dead;
    uint8_t unknown_7d_[0x27b];
  };

  struct Battle {
    uint8_t unknown_00_[0x10];
    Side sides[2];
  };

  uint8_t unknown_00_[0xb0];
  Battle battle_;
};

}

#pragma GCC visibility pop

}

namespace game::script::map::mind {

namespace {

using Mind = ::game::map::Mind;

}

as::string GetUseItem() {
  const UnitItem& use = Mind::GetInstance()->GetUseItem();
  const UnitItem& item = use.GetIndex() != 0 ? use : g_empty_item;
  return as::string(item.GetSharedData()->key.text);
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

as::string GetUnitPID() {
  return as::string(GetPidOf(Mind::GetInstance()->GetUnit()));
}

as::string GetTargetUnitPID() {
  return as::string(GetPidOf(Mind::GetInstance()->GetTargetUnit()));
}

as::string GetActiveSkill() {
  const char* sid = "";
  const SkillKey& key = Mind::GetInstance()->GetActiveSkill();
  if (key.index != 0) {
    if (const SkillData* skill = SkillFile::GetInstance()->At(key.index)) {
      sid = skill->key.text;
    }
  }
  return as::string(sid);
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

as::string GetOffenceUnitPID() {
  const MapEventManager* events = MapEventManager::GetInstance();
  return as::string(events != nullptr ?
    GetPidOf(events->GetOffenceUnit()) : "");
}

as::string GetDefenceUnitPID() {
  const MapEventManager* events = MapEventManager::GetInstance();
  return as::string(events != nullptr ?
    GetPidOf(events->GetDefenceUnit()) : "");
}

int GetDeadUnitIndex() {
  const ::game::map::ProcMapSeqBattleView* proc =
    ::game::map::ProcMapSeqBattleView::instance_;
  if (proc == nullptr) {
    return -1;
  }
  const Unit* unit = proc->GetDeadUnit();
  return unit != nullptr ? GetIndexOf(unit) : -1;
}

as::string GetDeadUnitPID() {
  const ::game::map::ProcMapSeqBattleView* proc =
    ::game::map::ProcMapSeqBattleView::instance_;
  const Unit* unit = proc != nullptr ? proc->GetDeadUnit() : nullptr;
  if (unit == nullptr) {
    return as::string("");
  }
  const PersonData* person = unit->GetPerson();
  return as::string(person != nullptr ? person->key.text : nullptr);
}

}

namespace game::script::map::snd {

void StartBgm(const char* label);
void StopBgm(const sound::PlayParam& param);

void PlayBgm(const as::string& bgmLabel) {
  StartBgm(bgmLabel.c_str());
}

void StopBgm(int fade) {
  StopBgm(sound::PlayParam(fade));
}

int GeFadeMsec(const as::string& fadeName) {
  return sound::PlayParam(fadeName.c_str()).GetTime();
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

void LogInfoSetBattleSkill(int unitIndex, const as::string& sid) {
  if (const Unit* unit = FindUnit(unitIndex)) {
    const char* text = sid.c_str();
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

void Play(const as::string& effName, int x, int z, int rotDeg) {
  if (x < 0 || z < 0) {
    return;
  }
  if (Sequence* sequence = g_sequence) {
    const char* name = effName.c_str();
    const Placement placement(name, x, z, true, rotDeg);
    Play(sequence, name, placement);
  }
}

void Delete(const as::string& effName) {
  if (Sequence* sequence = g_sequence) {
    const char* name = effName.c_str();
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

void Delete(int x, int z, const as::string& effName) {
  if (Sequence* sequence = g_sequence) {
    const char* name = effName.c_str();
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

void PlayUnitCenter(const as::string& effName, int unitIndex) {
  if (unitIndex < 0) {
    return;
  }
  const uint8_t key = unitIndex;
  const Unit* unit = UnitPool::Get(key);
  if (unit == nullptr) {
    return;
  }
  if (Sequence* sequence = g_sequence) {
    const char* name = effName.c_str();
    PlayAtUnit(sequence, name, unit);
  }
}

void Create(const as::string& effName, int x, int z) {
  if (Sequence* sequence = g_sequence) {
    const char* name = effName.c_str();
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

#define GAME_SCRIPT_PHASE(name, timing) \
  void name(const as::string& funcName, int turnMin, int turnMax, \
    int force, const as::string& conditionFunc) { \
    RegisterPhase(timing, funcName, turnMin, turnMax, force, conditionFunc, \
      nullptr); \
  } \
  void name(const as::string& funcName, int turnMin, int turnMax, \
    int force, const as::string& conditionFunc, ScriptAny& arg) { \
    RegisterPhase(timing, funcName, turnMin, turnMax, force, conditionFunc, \
      &arg); \
  }

GAME_SCRIPT_PHASE(EntryPhaseBefore, Timing::kPhaseBefore)
GAME_SCRIPT_PHASE(EntryPhaseAfter, Timing::kPhaseAfter)
GAME_SCRIPT_PHASE(EntryPhaseEnd, Timing::kPhaseEnd)

#undef GAME_SCRIPT_PHASE

#define GAME_SCRIPT_BATTLE(name, timing) \
  void name(const as::string& funcName, const as::string& fromPid, \
    int fromForce, const as::string& toPid, int toForce, bool each, \
    const as::string& conditionFunc) { \
    RegisterBattle(timing, funcName, fromPid, fromForce, toPid, toForce, \
      each, conditionFunc, nullptr); \
  } \
  void name(const as::string& funcName, const as::string& fromPid, \
    int fromForce, const as::string& toPid, int toForce, bool each, \
    const as::string& conditionFunc, ScriptAny& arg) { \
    RegisterBattle(timing, funcName, fromPid, fromForce, toPid, toForce, \
      each, conditionFunc, &arg); \
  }

GAME_SCRIPT_BATTLE(EntryBattleBefore, Timing::kBattleBefore)
GAME_SCRIPT_BATTLE(EntryBattleTalk, Timing::kBattleTalk)
GAME_SCRIPT_BATTLE(EntryBattleAfter, Timing::kBattleAfter)

#undef GAME_SCRIPT_BATTLE

// Any unit of any force completes the battle.
void EntryBattleComplete(const as::string& funcName,
  const as::string& conditionFunc) {
  RegisterBattle(Timing::kBattleComplete, funcName, as::string(""), -1,
    as::string(""), -1, false, conditionFunc, nullptr);
}

void EntryBattleComplete(const as::string& funcName,
  const as::string& conditionFunc, ScriptAny& arg) {
  RegisterBattle(Timing::kBattleComplete, funcName, as::string(""), -1,
    as::string(""), -1, false, conditionFunc, &arg);
}

#define GAME_SCRIPT_UNIT_EVENT(name, function, timing) \
  void name(const as::string& funcName, const as::string& pid, \
    int force, const as::string& conditionFunc) { \
    function(timing, funcName, pid, force, conditionFunc, nullptr); \
  } \
  void name(const as::string& funcName, const as::string& pid, \
    int force, const as::string& conditionFunc, ScriptAny& arg) { \
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

void EntryPickup(const as::string& funcName, const as::string& pid,
  const as::string& conditionFunc) {
  RegisterPickup(funcName, pid, conditionFunc, nullptr, false);
}

void EntryPickup(const as::string& funcName, const as::string& pid,
  const as::string& conditionFunc, ScriptAny& arg) {
  RegisterPickup(funcName, pid, conditionFunc, &arg, false);
}

void EntryPickupSilent(const as::string& funcName, const as::string& pid,
  const as::string& conditionFunc) {
  RegisterPickup(funcName, pid, conditionFunc, nullptr, true);
}

void EntryPickupSilent(const as::string& funcName, const as::string& pid,
  const as::string& conditionFunc, ScriptAny& arg) {
  RegisterPickup(funcName, pid, conditionFunc, &arg, true);
}

void EntryFixed(const as::string& funcName, const as::string& pid,
  int force, const as::string& conditionFunc) {
  RegisterFixed(funcName, pid, force, conditionFunc, nullptr, false);
}

void EntryFixed(const as::string& funcName, const as::string& pid,
  int force, const as::string& conditionFunc, ScriptAny& arg) {
  RegisterFixed(funcName, pid, force, conditionFunc, &arg, false);
}

void EntryFixedSilent(const as::string& funcName, const as::string& pid,
  int force, const as::string& conditionFunc) {
  RegisterFixed(funcName, pid, force, conditionFunc, nullptr, true);
}

void EntryFixedSilent(const as::string& funcName, const as::string& pid,
  int force, const as::string& conditionFunc, ScriptAny& arg) {
  RegisterFixed(funcName, pid, force, conditionFunc, &arg, true);
}

void EntryUseActiveSkill(const as::string& funcName,
  const as::string& pid, int force, const as::string& sid,
  const as::string& conditionFunc) {
  RegisterUseActiveSkill(funcName, pid, force, sid, conditionFunc, nullptr);
}

void EntryUseActiveSkill(const as::string& funcName,
  const as::string& pid, int force, const as::string& sid,
  const as::string& conditionFunc, ScriptAny& arg) {
  RegisterUseActiveSkill(funcName, pid, force, sid, conditionFunc, &arg);
}

void EntryUnitCommandBefore(const as::string& funcName,
  const as::string& pid, const as::string& conditionFunc) {
  RegisterUnitCommandBefore(funcName, pid, conditionFunc, nullptr);
}

void EntryUnitCommandBefore(const as::string& funcName,
  const as::string& pid, const as::string& conditionFunc,
  ScriptAny& arg) {
  RegisterUnitCommandBefore(funcName, pid, conditionFunc, &arg);
}

void EntryMindComplete(const as::string& funcName, const as::string& pid,
  int force, const as::string& conditionFunc) {
  RegisterMindComplete(funcName, pid, force, conditionFunc, nullptr);
}

void EntryMindComplete(const as::string& funcName, const as::string& pid,
  int force, const as::string& conditionFunc, ScriptAny& arg) {
  RegisterMindComplete(funcName, pid, force, conditionFunc, &arg);
}

void EntryTalk(const as::string& funcName, const as::string& fromPid,
  int fromForce, const as::string& toPid, int toForce, bool each,
  const as::string& conditionFunc) {
  RegisterTalk(funcName, fromPid, fromForce, toPid, toForce, each,
    conditionFunc, nullptr);
}

void EntryTalk(const as::string& funcName, const as::string& fromPid,
  int fromForce, const as::string& toPid, int toForce, bool each,
  const as::string& conditionFunc, ScriptAny& arg) {
  RegisterTalk(funcName, fromPid, fromForce, toPid, toForce, each,
    conditionFunc, &arg);
}

void EntryArea(const as::string& funcName, int minX, int minZ, int maxX,
  int maxZ, int force, const as::string& conditionFunc) {
  RegisterArea(funcName, minX, minZ, maxX, maxZ, force, conditionFunc,
    nullptr);
}

void EntryArea(const as::string& funcName, int minX, int minZ, int maxX,
  int maxZ, int force, const as::string& conditionFunc, ScriptAny& arg) {
  RegisterArea(funcName, minX, minZ, maxX, maxZ, force, conditionFunc, &arg);
}

void EntryTbox(const as::string& funcName, int x, int z) {
  RegisterTbox(funcName, x, z, nullptr);
}

void EntryTbox(const as::string& funcName, int x, int z, ScriptAny& arg) {
  RegisterTbox(funcName, x, z, &arg);
}

void EntryDoor(const as::string& funcName, int minX, int minZ, int maxX,
  int maxZ) {
  RegisterDoor(funcName, minX, minZ, maxX, maxZ, nullptr);
}

void EntryDoor(const as::string& funcName, int minX, int minZ, int maxX,
  int maxZ, ScriptAny& arg) {
  RegisterDoor(funcName, minX, minZ, maxX, maxZ, &arg);
}

void EntryGimmick(const as::string& funcName, int x, int z) {
  RegisterGimmick(funcName, x, z, nullptr);
}

void EntryGimmick(const as::string& funcName, int x, int z,
  ScriptAny& arg) {
  RegisterGimmick(funcName, x, z, &arg);
}

void EntryDestroy(const as::string& funcName, int minX, int minZ, int maxX,
  int maxZ) {
  RegisterDestroy(funcName, minX, minZ, maxX, maxZ, nullptr);
}

void EntryDestroy(const as::string& funcName, int minX, int minZ, int maxX,
  int maxZ, ScriptAny& arg) {
  RegisterDestroy(funcName, minX, minZ, maxX, maxZ, &arg);
}

void EntryBreakdown(const as::string& funcName, int x, int z) {
  RegisterBreakdown(funcName, x, z, nullptr);
}

void EntryBreakdown(const as::string& funcName, int x, int z,
  ScriptAny& arg) {
  RegisterBreakdown(funcName, x, z, &arg);
}

void EntryEscapeBefore(const as::string& funcName, int x, int z,
  const as::string& pid, const as::string& conditionFunc) {
  RegisterEscape(funcName, x, z, pid, conditionFunc, nullptr, true);
}

void EntryEscapeBefore(const as::string& funcName, int x, int z,
  const as::string& pid, const as::string& conditionFunc,
  ScriptAny& arg) {
  RegisterEscape(funcName, x, z, pid, conditionFunc, &arg, true);
}

void EntryEscapeAfter(const as::string& funcName, int x, int z,
  const as::string& pid, const as::string& conditionFunc) {
  RegisterEscape(funcName, x, z, pid, conditionFunc, nullptr, false);
}

void EntryEscapeAfter(const as::string& funcName, int x, int z,
  const as::string& pid, const as::string& conditionFunc,
  ScriptAny& arg) {
  RegisterEscape(funcName, x, z, pid, conditionFunc, &arg, false);
}

void EntryWarpCommandAfter(const as::string& funcName, int x, int z,
  const as::string& conditionFunc) {
  RegisterWarpCommandAfter(funcName, x, z, conditionFunc, nullptr);
}

void EntryWarpCommandAfter(const as::string& funcName, int x, int z,
  const as::string& conditionFunc, ScriptAny& arg) {
  RegisterWarpCommandAfter(funcName, x, z, conditionFunc, &arg);
}

#pragma GCC visibility pop

}

namespace game::script::map::terrain {

// Some natives read the instances through the global offset table.
template<typename T>
extern T* g_instance;

#pragma GCC visibility push(hidden)

as::string GetTID(int x, int z) {
  const TerrainData* terrain = g_instance<TerrainFile>->At(
    g_instance<game::map::Image>->GetTerrainId(x, z));
  return as::string(terrain != nullptr ? terrain->key.text : "");
}

#pragma GCC visibility pop

}

namespace game::script::map::obj {

#pragma GCC visibility push(hidden)

using ::game::map::MapObject;
using ::game::map::MapObjectManager;

void PlayStateWait(MapObject* object);

// The objects the map history saves, the second set only while it exists.
bool IsRecordedObject(const char* name);

class ObjectRecords {
public:
  bool Contains(const char* name) const;
};

extern ObjectRecords* g_object_records;

bool IsActive(const as::string& objName) {
  MapObject* object = MapObjectManager::Get(objName.c_str());
  return object->IsValid() && object->Unknown08();
}

void PlayStateWait(const as::string& objName) {
  MapObject* object = MapObjectManager::Get(objName.c_str());
  if (object->IsValid()) {
    PlayStateWait(object);
  }
}

// The object of a cell as the history looks it up.
MapObject* FindRecordedObject(int x, int z);

// The objects of the cells the map history saves, the second set only while
// it exists.
bool IsRecordedObject(int x, int z);
bool IsRecordedObjectSecond(int x, int z);

bool IsActive(int x, int z) {
  MapObject* object = MapObjectManager::Get(x, z);
  return object->IsValid() && object->Unknown08();
}

void PlayStateWait(int x, int z) {
  MapObject* object = MapObjectManager::Get(x, z);
  if (object->IsValid()) {
    PlayStateWait(object);
  }
}

void SetActive(int x, int z, bool isActive) {
  MapObject* object = MapObjectManager::Get(x, z);
  if (!object->IsValid()) {
    return;
  }
  object->Unknown21(isActive);
  ::game::map::history::Impl* history =
    ::game::map::history::Impl::GetInstance();
  if (history == nullptr || !history->IsRecording()) {
    return;
  }
  if (FindRecordedObject(x, z)->IsValid() && (IsRecordedObject(x, z) ||
    IsRecordedObjectSecond(x, z))) {
    history->MarkChanged(0x2000);
  }
}

void SetActive(const as::string& objName, bool isActive) {
  MapObject* object = MapObjectManager::Get(objName.c_str());
  if (!object->IsValid()) {
    return;
  }
  object->Unknown21(isActive);
  const char* name = objName.c_str();
  ::game::map::history::Impl* history =
    ::game::map::history::Impl::GetInstance();
  if (history == nullptr || !history->IsRecording()) {
    return;
  }
  if (MapObjectManager::Get(name)->IsValid() && (IsRecordedObject(name) ||
    (g_object_records != nullptr && g_object_records->Contains(name)))) {
    history->MarkChanged(0x2000);
  }
}

#pragma GCC visibility pop

}

// The trick natives below read the tricks and the history through the
// global offset table. The visibility is explicit, the hidden classes would
// hide them.
[[gnu::visibility("default")]] extern game::map::Trick* g_trick;
[[gnu::visibility("default")]] extern game::map::history::Impl*
  g_map_history;

namespace game::script::map::terrain {

#pragma GCC visibility push(hidden)

namespace {

using ::game::map::TrickData;

[[gnu::always_inline]] inline TrickData* FindTrickAt(int x, int z) {
  return g_trick->GetMap()->Find(x, z);
}

// A change of a trick is saved with the map and its tricks.
[[gnu::always_inline]] inline void MarkTrickChanged() {
  ::game::map::history::Impl* history = g_map_history;
  if (history != nullptr && history->IsRecording()) {
    history->MarkChanged(0x402);
  }
}

}

void SetTrickEnable(int x, int z, bool isEnable) {
  if (TrickData* trick = FindTrickAt(x, z)) {
    trick->SetEnable(isEnable);
    MarkTrickChanged();
  }
}

// Done tricks carry flag 4.
bool IsTrickDone(int x, int z) {
  const TrickData* trick = FindTrickAt(x, z);
  return trick != nullptr && trick->HasFlag(::game::map::TrickFlags{4});
}

int GetOccupation(int x, int z) {
  const TrickData* trick = FindTrickAt(x, z);
  return trick != nullptr ? trick->GetStatus() : -1;
}

void SetOccupation(int x, int z, int force) {
  if (TrickData* trick = FindTrickAt(x, z)) {
    trick->SetStatus(force);
    MarkTrickChanged();
  }
}

void SetPhase(int x, int z, int forceType) {
  if (TrickData* trick = FindTrickAt(x, z)) {
    trick->SetForce(forceType);
    MarkTrickChanged();
  }
}

int GetHp(int x, int z) {
  const TrickData* trick = FindTrickAt(x, z);
  return trick != nullptr ? trick->GetLife() : -1;
}

void SetHp(int x, int z, int hp) {
  if (TrickData* trick = FindTrickAt(x, z)) {
    trick->SetLife(hp);
    MarkTrickChanged();
  }
}

int GetMaxHp(int x, int z) {
  const TrickData* trick = FindTrickAt(x, z);
  return trick != nullptr ? trick->GetMaxLife() : -1;
}

void SetMaxHp(int x, int z, int maxHp) {
  if (TrickData* trick = FindTrickAt(x, z)) {
    trick->SetMaxLife(maxHp);
    MarkTrickChanged();
  }
}

void SetExclude(int x, int z, bool isExclude) {
  if (TrickData* trick = FindTrickAt(x, z)) {
    trick->Unknown48(isExclude);
    MarkTrickChanged();
  }
}

#pragma GCC visibility pop

}

[[gnu::visibility("default")]] extern game::map::Mind* g_mind;

namespace game::script::map::history {

#pragma GCC visibility push(hidden)

// Only the unit acting in the mind gets its record reserved.
void ReserveToRecordMind(int unitIndex) {
  if (unitIndex < 0) {
    return;
  }
  const uint8_t index = unitIndex;
  const Unit* unit = UnitPool::Get(index);
  if (unit == nullptr) {
    return;
  }
  ::game::map::history::Impl* history = g_map_history;
  if (history == nullptr) {
    return;
  }
  const uint8_t& acting = g_mind->GetUnit();
  if (acting == 0) {
    return;
  }
  const Unit* current = UnitPool::Get(acting);
  if (current != nullptr && unit->GetIndex() == current->GetIndex()) {
    history->ReserveMindRecord(unit);
  }
}

void Backup() {
  if (::game::map::history::Impl* history = g_map_history) {
    history->Backup();
  }
}

void Restore() {
  if (::game::map::history::Impl* history = g_map_history) {
    history->Restore();
  }
}

#pragma GCC visibility pop

}

// The cursor natives read the cursor through the global offset table. The
// visibility is explicit, the hidden class would hide it.
[[gnu::visibility("default")]] extern game::map::Cursor* g_cursor;

namespace game::script::unit {

#pragma GCC visibility push(hidden)

// Looks a person row up by its PID, through the hash index of the file.
class PersonRef {
public:
  explicit PersonRef(const char* pid);

  const PersonData* Get() const {
    return person_;
  }

private:
  const PersonData* person_;
};

#pragma GCC visibility pop

}

namespace game::script::map::cursor {

#pragma GCC visibility push(hidden)

using ::game::map::Cursor;

int GetX() {
  const Cursor* cursor = g_cursor;
  return cursor != nullptr ? cursor->GetImpl()->GetX() : 0;
}

int GetZ() {
  const Cursor* cursor = g_cursor;
  return cursor != nullptr ? cursor->GetImpl()->GetZ() : 0;
}

// The cell is kept in the play area when the map has one.
void SetPos(int x, int z) {
  Cursor* cursor = g_cursor;
  const ::game::map::Image* image = terrain::g_instance<::game::map::Image>;
  if (image != nullptr) {
    const int minX = image->GetPlayArea(0);
    const int minZ = image->GetPlayArea(1);
    const int maxX = image->GetPlayArea(2);
    const int maxZ = image->GetPlayArea(3);
    if (minX < maxX && minZ < maxZ) {
      x = std::clamp(x, minX, maxX);
      z = std::clamp(z, minZ, maxZ);
    }
  }
  if (cursor != nullptr) {
    cursor->SetPos(x, z);
  }
}

// The unit of a person still in a force, units that left keep force 9.
void SetPosByPID(const as::string& pid) {
  Cursor* cursor = g_cursor;
  if (cursor == nullptr) {
    return;
  }
  const unit::PersonRef person(pid.c_str());
  const Unit* found = nullptr;
  if (person.Get() != nullptr) {
    if (Unit* units = UnitPool::GetUnits()) {
      // The original unrolls the scan five times.
#pragma clang loop unroll_count(5)
      for (int i = 0; i < UnitPool::kUnitCount; i++) {
        Unit& unit = units[i];
        if (unit.GetForce() != nullptr &&
          unit.GetForceType() != Unit::kNoForce &&
          unit.GetPerson() == person.Get()) {
          found = &unit;
          break;
        }
      }
    }
  }
  cursor->GetImpl()->SetPos(found);
}

#pragma GCC visibility pop

}
