#include <string>

namespace as {

class ScriptManager;

// The natives read the manager through the global offset table, so it is
// declared with default visibility before the header.
[[gnu::visibility("default")]] extern ScriptManager* g_script_manager;

}

#include "as/script_context.hpp"
#include "game/game_mode_data.hpp"
#include "game/item_seq.hpp"
#include "game/gmap/spot.hpp"
#include "game/script/script_proc.hpp"
#include "game/script/script_string.hpp"
#include "game/unit.hpp"
#include "game/unit_item.hpp"
#include "game/unit_pool.hpp"

[[gnu::visibility("default")]] extern game::map::MapScript* g_map_script;
[[gnu::visibility("default")]] extern game::UnusedScript* g_unused_script;
[[gnu::visibility("default")]] extern game::cmdbtl::CmdBtlScript*
  g_cmdbtl_script;

namespace game {

#pragma GCC visibility push(hidden)

class ProcProgress : public ProcInst {
public:
  // Moves the clock on by the minutes, null when nothing moves.
  static ProcProgress* Create(ProcInst* parent, int minute);
  static ProcProgress* Create(ProcInst* parent, const gmap::GmapTime& time);
};

namespace menu {

class ItemResult : public ProcInst {
public:
  static ItemResult* CreateGold(ProcInst* parent, int gold, const char* mid);

  void SetInSe(const char* label);
};

}

#pragma GCC visibility pop

}

namespace game::script {

#pragma GCC visibility push(hidden)

namespace unit {

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

}

namespace {

[[gnu::always_inline]] inline void EndBlock() {
  as::ScriptContext* context = as::GetCurrentContext();
  context->GetRunner()->SetBlockState(1);
  context->ClearCallback();
}

template<typename T>
[[gnu::always_inline]] inline void Destroy(T*& object) {
  if (object != nullptr) {
    object->~T();
    as::common::Free(object);
    object = nullptr;
  }
}

}

// The process of the event running, else the one of the hub sequence.
ProcInst* GetCurrentProc() {
  if (map::MapScript* script = g_map_script) {
    return script->GetCurrentProc();
  }
  if (UnusedScript* script = g_unused_script) {
    return script->GetCurrentProc();
  }
  if (cmdbtl::CmdBtlScript* script = g_cmdbtl_script) {
    return script->GetCurrentProc();
  }
  if (hub::ProcHubSeqView* seq = hub::ProcHubSeqView::instance_) {
    return seq->GetEventProc();
  }
  return nullptr;
}

// Keeps the process the native waits for in the work of the context.
[[gnu::noinline]] void StartWaitProc(ProcInst* proc) {
  as::ScriptContext* context = as::GetCurrentContext();
  Destroy(context->GetWork());
  context->GetWork() =
    new (as::common::Allocate(sizeof(as::common::Work))) as::common::Work();
  as::GetRunningContext()->GetWork()->SetProc(proc);
}

// Runs the native again while its process runs, then waits for the next
// frame.
[[gnu::noinline]] bool WaitProc() {
  if (as::GetRunningContext()->GetWork()->GetProc() != nullptr &&
    !as::GetRunningContext()->GetWork()->GetProc()->IsUnknownFlag01Set()) {
    as::GetRunningContext()->GetRunner()->SetBlockState(0);
    return true;
  }
  Destroy(as::GetCurrentContext()->GetWork());
  as::ScriptContext* context = as::GetCurrentContext();
  context->GetRunner()->SetBlockState(2);
  context->ClearCallback();
  return false;
}

namespace {

// The native waits for the process, the current one wakes unless the game
// skips.
[[gnu::always_inline]] inline void WaitFor(ProcInst* proc) {
  StartWaitProc(proc);
  ProcInst* current = GetCurrentProc();
  if (!ProcGameSkipView::IsSkipping()) {
    current->Wake();
  }
  as::GetRunningContext()->GetRunner()->SetBlockState(0);
}

}

namespace schedule {

// The first run starts the process, the next ones wait for it.
void ProgressWait(int minute) {
  if (!as::GetRunningContext()->GetRunner()->IsSkipping()) {
    WaitProc();
    return;
  }
  ProcProgress* proc = ProcProgress::Create(GetCurrentProc(), minute);
  if (proc == nullptr) {
    EndBlock();
    return;
  }
  WaitFor(proc);
}

void Progress(int minute) {
  ProcInst* parent = GetCurrentProc();
  gmap::GmapTime time = gmap::GmapClock::GetTime();
  if (minute != 0) {
    time.second = 0;
    time.hour += minute / 60;
    time.minute += minute % 60;
    time.Normalize();
  }
  ProcProgress::Create(parent, time);
}

}

namespace item {

namespace {

// The lock only stays on the units with the first shared system skill, of
// the forces 0 and 4 to 7.
[[gnu::always_inline]] inline bool CanLock(const Unit* unit) {
  const SkillKey key = {g_shared_system_skills[0].index};
  if (!HasSkill(unit->GetSkillList(7), key)) {
    return false;
  }
  return ((1 << unit->GetForceType()) & 0xf1) != 0;
}

// Looks the item up, false when the native ended or waits.
[[gnu::always_inline]] inline bool BeginGain(UnitItem& item,
  const as::string& iid) {
  item.Assign(HashedString(iid.c_str()));
  as::ScriptContext* context = as::GetCurrentContext();
  if (item.GetIndex() == 0) {
    context->GetRunner()->SetBlockState(1);
    context->ClearCallback();
    return false;
  }
  if (!context->GetRunner()->IsSkipping()) {
    WaitProc();
    return false;
  }
  return true;
}

// The items without a unit go to the convoy, the unit needs a person.
[[gnu::always_inline]] inline void Gain(UnitItem& item, Unit* unit,
  bool toConvoy, bool isSetDrop, bool isLocked, const as::string& mid) {
  const std::string message(mid.c_str());
  item.SetDiscarded(isSetDrop);
  if (unit != nullptr) {
    isLocked &= CanLock(unit);
  }
  item.SetLocked(isLocked);
  const vstring text(message);
  ProcInst* proc = nullptr;
  if (toConvoy || (unit != nullptr && unit->GetPerson() != nullptr)) {
    ProcInst* parent = GetCurrentProc();
    ItemSeqConst::List list;
    list.Add(item);
    proc = ItemSeq::GainBind(parent, list, unit, text, vstring::kEmpty);
  }
  if (proc == nullptr) {
    EndBlock();
    return;
  }
  WaitFor(proc);
}

// The unit of a person still in a force, units that left keep force 9.
[[gnu::always_inline]] inline Unit* FindUnit(const as::string& pid) {
  const unit::PersonRef person(pid.c_str());
  if (person.Get() == nullptr) {
    return nullptr;
  }
  Unit* units = UnitPool::GetUnits();
  if (units == nullptr) {
    return nullptr;
  }
  // The original unrolls the scan five times.
#pragma clang loop unroll_count(5)
  for (int i = 0; i < UnitPool::kUnitCount; i++) {
    Unit& unit = units[i];
    if (unit.GetForce() != nullptr && unit.GetForceType() != Unit::kNoForce &&
      unit.GetPerson() == person.Get()) {
      return &unit;
    }
  }
  return nullptr;
}

}

void ItemGain(int unitIndex, const as::string& iid, bool isSetDrop,
  bool isLocked, const as::string& mid) {
  UnitItem item = UnitItem();
  if (!BeginGain(item, iid)) {
    return;
  }
  const uint8_t index = unitIndex;
  Unit* unit = UnitPool::Get(index);
  Gain(item, unit, false, isSetDrop, isLocked, mid);
}

// An empty PID gives the item to the convoy.
void ItemGain(const as::string& pid, const as::string& iid, bool isSetDrop,
  bool isLocked, const as::string& mid) {
  if (pid.empty()) {
    EndBlock();
    return;
  }
  UnitItem item = UnitItem();
  if (!BeginGain(item, iid)) {
    return;
  }
  const bool toConvoy = pid.empty();
  Unit* unit = toConvoy ? nullptr : FindUnit(pid);
  Gain(item, unit, toConvoy, isSetDrop, isLocked, mid);
}

void ItemChange(const as::string& iidOld) {
  if (!as::GetRunningContext()->GetRunner()->IsSkipping()) {
    WaitProc();
    return;
  }
  ProcInst* parent = GetCurrentProc();
  const ItemData* item = g_item_file->Find(iidOld.c_str());
  ProcInst* proc = ItemSeq::ChangeBind(parent, item);
  if (proc == nullptr) {
    EndBlock();
    return;
  }
  WaitFor(proc);
}

void GoldGain(int gold, const as::string& mid) {
  if (!as::GetRunningContext()->GetRunner()->IsSkipping()) {
    WaitProc();
    return;
  }
  ProcInst* parent = GetCurrentProc();
  const char* text = mid.empty() ? nullptr : mid.c_str();
  if (gold == 0) {
    EndBlock();
    return;
  }
  if (GameModeData* mode = GameModeData::GetInstance()) {
    mode->AddGold(gold);
  }
  if (parent == nullptr) {
    EndBlock();
    return;
  }
  menu::ItemResult* result = menu::ItemResult::CreateGold(parent, gold, text);
  result->SetInSe("FF_Positive1");
  WaitFor(result);
}

}

#pragma GCC visibility pop

}
