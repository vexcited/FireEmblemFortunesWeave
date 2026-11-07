#include <string>
#include <utility>
#include <variant>
#include <vector>

#include "game/data/data_files.hpp"
#include "game/map/map_event.hpp"
#include "game/map/script_singletons.hpp"
#include "game/script/map_event_register.hpp"
#include "game/script/script_string.hpp"

// The registration reads the event manager, the item and the skill files
// through the global offset table. The visibility is explicit, the hidden
// classes would hide them.
[[gnu::visibility("default")]] extern game::map::MapEventManager*
  g_map_event_manager;
[[gnu::visibility("default")]] extern game::ItemFile* g_item_file;
[[gnu::visibility("default")]] extern game::SkillFile* g_skill_file;

namespace game::script::map::event {

#pragma GCC visibility push(hidden)

using namespace ::game::map;
using Argument = std::variant<int, float, std::string>;
using Arguments = std::vector<Argument>;

// Fails when the any holds no int, float or string.
bool ToArgument(Argument& out, const ScriptAny* any);

// The push_back of the argument vector, out of line at 0xeaec10 where the
// libc++ of the build inlines it.
void PushArgument(Arguments& args, const Argument& arg);

// The index of the person of the PID, -1 for none.
int GetPersonIndex(const char* pid) {
  const PersonData* person = PersonFile::GetInstance()->Find(pid);
  return person != nullptr ? person->index : -1;
}

namespace {

struct NoHook {
  void operator()(const Argument&) const {}
};

// Keeps the argument of the any, false when the any can't give one. The
// hook sees the argument once it is kept.
template <class Desc, class Hook = NoHook>
[[gnu::always_inline]] inline bool AddArgument(Desc& desc, ScriptAny* arg,
  Hook hook = {}) {
  if (arg == nullptr) {
    return true;
  }
  Argument value;
  const bool converted = ToArgument(value, arg);
  if (converted) {
    PushArgument(desc.args, value);
    hook(value);
  }
  arg->Release();
  return converted;
}

// An argument the any can't give drops the event.
template <class T, class Desc, class Hook = NoHook>
[[gnu::always_inline]] inline void Register(Desc& desc, ScriptAny* arg,
  Hook hook = {}) {
  if (AddArgument(desc, arg, hook)) {
    g_map_event_manager->Add(new T(desc));
  }
}

// A PID names a known person, an empty one matches every unit.
[[gnu::always_inline]] inline bool IsKnownPerson(int person,
  const as::string& pid) {
  const bool any = pid.empty();
  return person >= 0 || any;
}

// A unit event of the person, its force and a parameter.
template <class T>
[[gnu::always_inline]] inline void RegisterUnit(const as::string& funcName,
  int person, int force, int param, const as::string& conditionFunc,
  ScriptAny* arg) {
  MapUnitEventDesc desc;
  desc.func = funcName;
  desc.data.person = person;
  desc.data.force = force;
  desc.data.params[0] = param;
  desc.condition = conditionFunc;
  Register<T>(desc, arg);
}

// An access event on the rectangle, without a condition.
template <class T>
[[gnu::always_inline]] inline void RegisterAccess(const as::string& funcName,
  int minX, int minZ, int maxX, int maxZ, ScriptAny* arg) {
  MapAccessEventDesc desc;
  desc.data.left = minX;
  desc.data.right = maxX;
  desc.data.top = minZ;
  desc.data.bottom = maxZ;
  desc.func = funcName.c_str();
  desc.data.params[0] = -1;
  desc.data.params[1] = -1;
  desc.condition = "";
  Register<T>(desc, arg);
}

}

#pragma GCC visibility pop

void RegisterArea(const as::string& funcName, int minX, int minZ, int maxX,
  int maxZ, int force, const as::string& conditionFunc, ScriptAny* arg) {
  MapAreaEventDesc desc;
  desc.func = funcName;
  desc.data.left = minX;
  desc.data.right = maxX;
  desc.data.top = minZ;
  desc.data.bottom = maxZ;
  desc.data.force = force;
  desc.condition = conditionFunc;
  Register<MapAreaEvent>(desc, arg);
}

void RegisterTbox(const as::string& funcName, int x, int z, ScriptAny* arg) {
  MapAccessEventDesc desc;
  desc.data.left = x;
  desc.data.right = x;
  desc.data.top = z;
  desc.data.bottom = z;
  desc.func = funcName.c_str();
  desc.data.params[0] = -1;
  desc.data.params[1] = -1;
  desc.condition = "";

  // A box giving an item by its IID keeps the index of the item.
  Register<MapTreasureboxEvent>(desc, arg,
    [&](const Argument& value) {
      if (funcName == "ItemGain" &&
          std::holds_alternative<std::string>(value)) {
        const std::string iid = std::get<std::string>(value).c_str();
        const ItemData* item = g_item_file->Find(iid.c_str());
        desc.data.params[0] = item != nullptr ? item->index : -1;
      }
    });
}

void RegisterDoor(const as::string& funcName, int minX, int minZ, int maxX,
  int maxZ, ScriptAny* arg) {
  RegisterAccess<MapDoorEvent>(funcName, minX, minZ, maxX, maxZ,
    arg);
}

void RegisterGimmick(const as::string& funcName, int x, int z,
  ScriptAny* arg) {
  RegisterAccess<MapGimmickEvent>(funcName, x, z, x, z, arg);
}

void RegisterDestroy(const as::string& funcName, int minX, int minZ,
  int maxX, int maxZ, ScriptAny* arg) {
  RegisterAccess<MapDestroyEvent>(funcName, minX, minZ, maxX,
    maxZ, arg);
}

void RegisterBreakdown(const as::string& funcName, int x, int z,
  ScriptAny* arg) {
  RegisterAccess<MapBreakdownEvent>(funcName, x, z, x, z, arg);
}

// An unknown PID drops the event, an empty one matches every unit.
void RegisterEscape(const as::string& funcName, int x, int z,
  const as::string& pid, const as::string& conditionFunc, ScriptAny* arg,
  bool before) {
  MapAccessEventDesc desc;
  desc.data.left = x;
  desc.data.right = x;
  desc.data.top = z;
  desc.data.bottom = z;
  desc.func = funcName.c_str();
  desc.data.params[0] = -1;
  const int person = GetPersonIndex(pid.c_str());
  if (!IsKnownPerson(person, pid)) {
    return;
  }
  desc.data.params[1] = person;
  desc.condition = conditionFunc;
  if (!AddArgument(desc, arg)) {
    return;
  }
  g_map_event_manager->Add(before ?
    static_cast<evt::EventObjectBase*>(new MapEscapeBeforeEvent(desc)) :
    new MapEscapeAfterEvent(desc));
}

void RegisterWarpCommandAfter(const as::string& funcName, int x, int z,
  const as::string& conditionFunc, ScriptAny* arg) {
  MapAccessEventDesc desc;
  desc.data.left = x;
  desc.data.right = x;
  desc.data.top = z;
  desc.data.bottom = z;
  desc.func = funcName.c_str();
  desc.data.params[0] = -1;
  desc.data.params[1] = -1;
  desc.condition = conditionFunc;
  Register<MapWarpCommandAfterEvent>(desc, arg);
}

void RegisterPhase(Timing timing, const as::string& funcName, int turnMin,
  int turnMax, int force, const as::string& conditionFunc, ScriptAny* arg) {
  MapPhaseEventDesc desc;
  desc.func = funcName;
  desc.data.turnMin = turnMin;
  desc.data.turnMax = turnMax;
  desc.data.force = force;
  desc.condition = conditionFunc;
  if (!AddArgument(desc, arg)) {
    return;
  }
  g_map_event_manager->Add(
    timing == Timing::kPhaseEnd ?
      static_cast<evt::EventObjectBase*>(new MapPhaseEndEvent(desc)) :
    timing == Timing::kPhaseAfter ?
      static_cast<evt::EventObjectBase*>(new MapPhaseAfterEvent(desc)) :
      new MapPhaseBeforeEvent(desc));
}

void RegisterBattle(Timing timing, const as::string& funcName,
  const as::string& fromPid, int fromForce, const as::string& toPid,
  int toForce, bool each, const as::string& conditionFunc, ScriptAny* arg) {
  const int from = GetPersonIndex(fromPid.c_str());
  const int to = GetPersonIndex(toPid.c_str());
  if (!IsKnownPerson(from, fromPid) || !IsKnownPerson(to, toPid)) {
    return;
  }
  MapBattleEventDesc desc;
  desc.func = funcName;
  desc.data.fromPerson = from;
  desc.data.fromForce = fromForce;
  desc.data.toPerson = to;
  desc.data.toForce = toForce;
  desc.data.each = each;
  desc.condition = conditionFunc;
  if (!AddArgument(desc, arg)) {
    return;
  }
  evt::EventObjectBase* event;
  switch (timing) {
    case Timing::kBattleBefore:
      event = new MapBattleBeforeEvent(desc);
      break;
    case Timing::kBattleTalk:
      event = new MapBattleTalkEvent(desc);
      break;
    case Timing::kBattleAfter:
      event = new MapBattleAfterEvent(desc);
      break;
    default:
      event = new MapBattleCompleteEvent(desc);
      break;
  }
  g_map_event_manager->Add(event);
}

void RegisterTalk(const as::string& funcName, const as::string& fromPid,
  int fromForce, const as::string& toPid, int toForce, bool each,
  const as::string& conditionFunc, ScriptAny* arg) {
  const int from = GetPersonIndex(fromPid.c_str());
  const int to = GetPersonIndex(toPid.c_str());
  if (!IsKnownPerson(from, fromPid) || !IsKnownPerson(to, toPid)) {
    return;
  }
  MapBattleEventDesc desc;
  desc.func = funcName;
  desc.data.fromPerson = from;
  desc.data.fromForce = fromForce;
  desc.data.toPerson = to;
  desc.data.toForce = toForce;
  desc.data.each = each;
  desc.condition = conditionFunc;
  Register<MapContactTalkEvent>(desc, arg);
}

void RegisterPickup(const as::string& funcName, const as::string& pid,
  const as::string& conditionFunc, ScriptAny* arg, bool silent) {
  const int person = GetPersonIndex(pid.c_str());
  if (!IsKnownPerson(person, pid)) {
    return;
  }
  MapUnitEventDesc desc;
  desc.func = funcName;
  desc.data.person = person;
  desc.data.force = 0;
  desc.data.params[0] = -1;
  desc.condition = conditionFunc;
  if (!AddArgument(desc, arg)) {
    return;
  }
  g_map_event_manager->Add(silent ?
    static_cast<evt::EventObjectBase*>(new MapUnitPickupSilentEvent(desc)) :
    new MapUnitPickupEvent(desc));
}

void RegisterFixed(const as::string& funcName, const as::string& pid,
  int force, const as::string& conditionFunc, ScriptAny* arg, bool silent) {
  const int person = GetPersonIndex(pid.c_str());
  if (!IsKnownPerson(person, pid)) {
    return;
  }
  MapUnitEventDesc desc;
  desc.func = funcName;
  desc.data.person = person;
  desc.data.force = force;
  desc.data.params[0] = -1;
  desc.condition = conditionFunc;
  if (!AddArgument(desc, arg)) {
    return;
  }
  g_map_event_manager->Add(silent ?
    static_cast<evt::EventObjectBase*>(new MapUnitFixedSilentEvent(desc)) :
    new MapUnitFixedEvent(desc));
}

void RegisterDie(Timing timing, const as::string& funcName,
  const as::string& pid, int force, const as::string& conditionFunc,
  ScriptAny* arg) {
  const int person = GetPersonIndex(pid.c_str());
  if (!IsKnownPerson(person, pid)) {
    return;
  }
  MapUnitEventDesc desc;
  desc.func = funcName;
  desc.data.person = person;
  desc.data.force = force;
  desc.data.params[0] = -1;
  desc.condition = conditionFunc;
  if (!AddArgument(desc, arg)) {
    return;
  }
  g_map_event_manager->Add(
    timing == Timing::kDieBefore ?
      static_cast<evt::EventObjectBase*>(new MapUnitDieBeforeEvent(desc)) :
    timing == Timing::kDieAfter ?
      static_cast<evt::EventObjectBase*>(new MapUnitDieAfterEvent(desc)) :
      new MapUnitDieTalkEvent(desc));
}

void RegisterRevive(Timing timing, const as::string& funcName,
  const as::string& pid, int force, const as::string& conditionFunc,
  ScriptAny* arg) {
  const int person = GetPersonIndex(pid.c_str());
  if (!IsKnownPerson(person, pid)) {
    return;
  }
  MapUnitEventDesc desc;
  desc.func = funcName;
  desc.data.person = person;
  desc.data.force = force;
  desc.data.params[0] = -1;
  desc.condition = conditionFunc;
  if (!AddArgument(desc, arg)) {
    return;
  }
  g_map_event_manager->Add(timing == Timing::kReviveBefore ?
    static_cast<evt::EventObjectBase*>(new MapUnitReviveBeforeEvent(desc)) :
    new MapUnitReviveAfterEvent(desc));
}

// An unknown SID drops the event.
void RegisterUseActiveSkill(const as::string& funcName,
  const as::string& pid, int force, const as::string& sid,
  const as::string& conditionFunc, ScriptAny* arg) {
  const int person = GetPersonIndex(pid.c_str());
  if (!IsKnownPerson(person, pid)) {
    return;
  }
  const SkillData* skill = g_skill_file->Find(sid.c_str());
  if (skill == nullptr) {
    return;
  }
  RegisterUnit<MapUnitUseActiveSkillEvent>(funcName, person, force,
    skill->index, conditionFunc, arg);
}

void RegisterUnitCommandBefore(const as::string& funcName,
  const as::string& pid, const as::string& conditionFunc, ScriptAny* arg) {
  const int person = GetPersonIndex(pid.c_str());
  if (!IsKnownPerson(person, pid)) {
    return;
  }
  RegisterUnit<MapUnitCommandBeforeEvent>(funcName, person, -1, -1,
    conditionFunc, arg);
}

void RegisterMindComplete(const as::string& funcName,
  const as::string& pid, int force, const as::string& conditionFunc,
  ScriptAny* arg) {
  const int person = GetPersonIndex(pid.c_str());
  if (!IsKnownPerson(person, pid)) {
    return;
  }
  RegisterUnit<MapMindCompleteEvent>(funcName, person, force, -1,
    conditionFunc, arg);
}

}
