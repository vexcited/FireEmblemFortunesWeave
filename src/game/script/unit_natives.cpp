#include <cmath>

#include "as/script_context.hpp"
#include "game/data/data_file.hpp"
#include "game/data/data_files.hpp"
#include "game/map/image.hpp"
#include "game/map/unit_flags.hpp"
#include "game/script/script_string.hpp"
#include "game/sound/se.hpp"
#include "game/unit.hpp"
#include "game/unit_item.hpp"
#include "game/unit_pool.hpp"

// The natives of the unit script namespaces. Units are passed by index,
// negative or unknown indices and units without a person give the default.
namespace game::script::unit {

#pragma GCC visibility push(hidden)

namespace {

[[gnu::always_inline]] inline Unit* FindUnit(int index) {
  if (index < 0) {
    return nullptr;
  }
  const uint8_t key = index;
  return UnitPool::Get(key);
}

[[gnu::always_inline]] inline bool IsValid(const Unit* unit) {
  return unit != nullptr && unit->GetPerson() != nullptr;
}

// The forces up to 3 are the ones fighting on the map.
[[gnu::always_inline]] inline bool IsOnMap(const Unit* unit) {
  return unit->GetForce() != nullptr && unit->GetForceType() <= 3;
}

// Saves the record of a changed unit again while the map history records.
[[gnu::always_inline]] inline void MarkDirty(const Unit* unit) {
  const map::history::Impl* history = map::history::Impl::GetInstance();
  if (history != nullptr && history->IsRecording() &&
    unit->GetForce() != nullptr && unit->GetForceType() <= 8 &&
    map::UnitFlags::instance_ != nullptr) {
    map::UnitFlags::instance_->MarkDirty(unit->GetIndex());
  }
}

[[gnu::always_inline]] inline int GetIndexOf(const Unit* unit) {
  return unit->GetIndex() != 0 ? unit->GetIndex() : -1;
}

}

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

namespace {

// The unit of a person still in a force, units that left keep force 9.
[[gnu::always_inline]] inline Unit* FindUnit(const as::string& pid) {
  const char* text = pid.c_str();
  if (text[0] == '\0') {
    return nullptr;
  }
  const PersonRef person(text);
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

[[gnu::always_inline]] inline int GetParam(int index, uint8_t kind) {
  Unit* unit = FindUnit(index);
  if (unit == nullptr) {
    return 0;
  }
  if (unit->GetPerson() == nullptr) {
    return 0;
  }
  return unit->GetParam(kind, 1);
}

}

// The key of a data file row, the callers skip index 0.
template<typename File>
[[gnu::always_inline]] inline const char* GetRowId(int index) {
  return File::GetInstance()->At(index)->key.text;
}

// Out of line actions taking the unit, null for an unknown index.
void Die(Unit* unit);
void WaitMotion(Unit* unit);

}

namespace game::script::unit::skill {

void UpdateDangerMap(Unit* unit);

}

namespace game::script::unit {

void Die(int index) {
  Die(FindUnit(index));
}

void WaitMotion(int index) {
  WaitMotion(FindUnit(index));
}

bool IsExist(const as::string& pid) {
  return FindUnit(pid) != nullptr;
}

int GetIndexByPID(const as::string& pid) {
  Unit* unit = FindUnit(pid);
  return unit != nullptr ? GetIndexOf(unit) : -1;
}

bool IsExistOnMap(const as::string& pid) {
  Unit* unit = FindUnit(pid);
  return unit != nullptr && unit->GetForceType() < 4;
}

bool IsDead(const as::string& pid) {
  Unit* unit = FindUnit(pid);
  return unit != nullptr && !unit->IsOnMap();
}

int GetForce(const as::string& pid) {
  Unit* unit = FindUnit(pid);
  return unit != nullptr ? unit->GetForceType() : -1;
}

void Die(const as::string& pid) {
  Die(FindUnit(pid));
}

void WaitMotion(const as::string& pid) {
  WaitMotion(FindUnit(pid));
}

bool IsExist(int index) {
  Unit* unit = FindUnit(index);
  if (unit == nullptr) {
    return false;
  }
  return unit->GetPerson() != nullptr;
}

bool IsDead(int index) {
  Unit* unit = FindUnit(index);
  if (unit == nullptr) {
    return false;
  }
  return unit->GetPerson() != nullptr && !unit->IsOnMap();
}

bool IsExistOnMap(int index) {
  Unit* unit = FindUnit(index);
  if (unit == nullptr) {
    return false;
  }
  return unit->GetPerson() != nullptr && unit->GetForce() != nullptr &&
    unit->GetForceType() < 4;
}

int GetFirstIndexInForce(int force) {
  const uint8_t type = force;
  if (type > 9) {
    return -1;
  }
  const Unit* first = UnitPool::GetForce(type).GetFirst();
  if (!IsValid(first)) {
    return -1;
  }
  return GetIndexOf(first);
}

int GetNextIndex(int index) {
  Unit* unit = FindUnit(index);
  if (unit == nullptr) {
    return -1;
  }
  const Unit* next = unit->GetNext();
  if (!IsValid(next)) {
    return -1;
  }
  return GetIndexOf(next);
}

int GetFirstIndexOnMap() {
  const ForceMask mask{0xf};
  const Unit* first = UnitPool::GetFirst(mask);
  if (!IsValid(first) || !IsOnMap(first)) {
    return -1;
  }
  return GetIndexOf(first);
}

int GetForce(int index) {
  Unit* unit = FindUnit(index);
  if (!IsValid(unit)) {
    return -1;
  }
  return unit->GetForceType();
}

as::string GetPID(int index) {
  const char* pid = "";
  if (Unit* unit = FindUnit(index)) {
    if (const PersonData* person = unit->GetPerson()) {
      pid = person->key.text;
    }
  }
  return as::string(pid);
}

as::string GetJID(int index) {
  const char* jid = "";
  if (Unit* unit = FindUnit(index); IsValid(unit)) {
    jid = unit->GetJobId();
  }
  return as::string(jid);
}

as::string GetJID(const as::string& pid) {
  const char* jid = "";
  if (Unit* unit = FindUnit(pid)) {
    jid = unit->GetJobId();
  }
  return as::string(jid);
}

const char* GetPersonName(const PersonData* person);
const char* GetMotionName(uint32_t motion);
bool IsInAttackRange(const Unit* unit, int force);
bool IsInAttackRange(const Unit* unit, int x, int z);
bool IsInMoveRange(const Unit* unit, int x, int z, bool exclude_enemies);

as::string GetLID(int index) {
  const char* lid = "";
  if (Unit* unit = FindUnit(index); IsValid(unit) && unit->GetLegion() != 0) {
    lid = GetRowId<LegionFile>(unit->GetLegion());
  }
  return as::string(lid);
}

as::string GetLID(const as::string& pid) {
  const char* lid = "";
  if (Unit* unit = FindUnit(pid); unit != nullptr && unit->GetLegion() != 0) {
    lid = GetRowId<LegionFile>(unit->GetLegion());
  }
  return as::string(lid);
}

as::string GetName(int index) {
  const char* name = "";
  if (Unit* unit = FindUnit(index); IsValid(unit)) {
    name = unit->GetEdit().HasName() ? unit->GetEdit().GetName() :
      GetPersonName(unit->GetPerson());
  }
  return as::string(name);
}

as::string GetName(const as::string& pid) {
  const char* name = "";
  if (Unit* unit = FindUnit(pid)) {
    name = unit->GetEdit().HasName() ? unit->GetEdit().GetName() :
      GetPersonName(unit->GetPerson());
  }
  return as::string(name);
}

// The player forces, 0 and 4 to 7.
bool IsForcePlayer(int index) {
  Unit* unit = FindUnit(index);
  if (unit == nullptr) {
    return false;
  }
  if (unit->GetPerson() == nullptr) {
    return false;
  }
  return (1 << unit->GetForceType()) & 0xf1;
}

as::string GetMotionName(int index) {
  const char* name = "";
  if (Unit* unit = FindUnit(index); IsValid(unit) && IsOnMap(unit)) {
    name = GetMotionName(unit->GetMotion());
  }
  return as::string(name);
}

as::string GetMotionName(const as::string& pid) {
  const char* name = "";
  if (Unit* unit = FindUnit(pid); unit != nullptr && IsOnMap(unit)) {
    name = GetMotionName(unit->GetMotion());
  }
  return as::string(name);
}

bool IsAttackRangeForce(int index, int force) {
  if (Unit* unit = FindUnit(index); IsValid(unit) && IsOnMap(unit)) {
    return IsInAttackRange(unit, force);
  }
  return false;
}

bool IsAttackRangeForce(const as::string& pid, int force) {
  if (Unit* unit = FindUnit(pid); unit != nullptr && IsOnMap(unit)) {
    return IsInAttackRange(unit, force);
  }
  return false;
}

bool IsAttackRangePos(int index, int x, int z) {
  if (Unit* unit = FindUnit(index); IsValid(unit) && IsOnMap(unit)) {
    return IsInAttackRange(unit, x, z);
  }
  return false;
}

bool IsAttackRangePos(const as::string& pid, int x, int z) {
  if (Unit* unit = FindUnit(pid); unit != nullptr && IsOnMap(unit)) {
    return IsInAttackRange(unit, x, z);
  }
  return false;
}

bool IsMoveRangePos(int index, int x, int z, bool isIncludeEnemy) {
  if (Unit* unit = FindUnit(index); IsValid(unit) && IsOnMap(unit)) {
    return IsInMoveRange(unit, x, z, !isIncludeEnemy);
  }
  return false;
}

bool IsMoveRangePos(const as::string& pid, int x, int z,
  bool isIncludeEnemy) {
  if (Unit* unit = FindUnit(pid); unit != nullptr && IsOnMap(unit)) {
    return IsInMoveRange(unit, x, z, !isIncludeEnemy);
  }
  return false;
}

// Registered in the unit namespace.
bool IsFading(const as::string& pid) {
  Unit* unit = FindUnit(pid);
  return unit != nullptr && IsOnMap(unit) && unit->IsFading();
}

void GenerateFaceTexture(Unit* unit, bool update);

void GenerateFaceTexture(int index) {
  Unit* unit = FindUnit(index);
  if (IsValid(unit) && IsOnMap(unit)) {
    GenerateFaceTexture(unit, true);
  }
}

}

namespace game::script::unit::item {

namespace {

using unit::FindUnit;
using unit::GetRowId;
using unit::IsValid;

}

// Registered in the item namespace.
int GetSize(const as::string& pid) {
  Unit* unit = FindUnit(pid);
  return unit != nullptr ? unit->GetSize() : 0;
}

as::string GetEquipIID(int index) {
  const char* iid = "";
  if (Unit* unit = FindUnit(index);
    IsValid(unit) && unit->GetEquippedIndex() != 0) {
    iid = GetRowId<ItemFile>(unit->GetEquippedIndex());
  }
  return as::string(iid);
}

as::string GetEquipIID(const as::string& pid) {
  const char* iid = "";
  if (Unit* unit = FindUnit(pid);
    unit != nullptr && unit->GetEquippedIndex() != 0) {
    iid = GetRowId<ItemFile>(unit->GetEquippedIndex());
  }
  return as::string(iid);
}

as::string GetPossetionIID(int index, int unitItemIndex) {
  const char* iid = "";
  if (Unit* unit = FindUnit(index);
    IsValid(unit) && unit->GetItem(unitItemIndex).GetIndex() != 0) {
    iid = GetRowId<ItemFile>(unit->GetItem(unitItemIndex).GetIndex());
  }
  return as::string(iid);
}

as::string GetPossetionIID(const as::string& pid, int unitItemIndex) {
  const char* iid = "";
  if (Unit* unit = FindUnit(pid);
    unit != nullptr && unit->GetItem(unitItemIndex).GetIndex() != 0) {
    iid = GetRowId<ItemFile>(unit->GetItem(unitItemIndex).GetIndex());
  }
  return as::string(iid);
}

namespace {

[[gnu::always_inline]] inline bool HasItem(Unit* unit, const char* iid) {
  const ItemData* data = ItemFile::GetInstance()->Find(iid);
  return data != nullptr && unit->GetItemList().Find(data) >= 0;
}

// The count is taken from the uses the item has at most.
[[gnu::always_inline]] inline void SetEndurance(Unit* unit, const char* iid,
  int count) {
  const int slot = unit->GetItemList().Find(iid);
  if (slot < 0) {
    return;
  }
  UnitItem& item = unit->GetItemList().items[slot];
  if (item.GetIndex() != 0) {
    const int max = item.GetMaxUses();
    const int uses = max - count;
    item.SetUses(uses < 0 ? 0 : (max < uses ? max : uses));
  }
  unit::MarkDirty(unit);
}

}

bool IsPossession(int index, const as::string& iid) {
  Unit* unit = FindUnit(index);
  const char* text = iid.c_str();
  return IsValid(unit) && HasItem(unit, text);
}

bool IsPossession(const as::string& pid, const as::string& iid) {
  Unit* unit = FindUnit(pid);
  const char* text = iid.c_str();
  return IsValid(unit) && HasItem(unit, text);
}

void SetEnduranceItem(int index, const as::string& iid, int count) {
  Unit* unit = FindUnit(index);
  const char* text = iid.c_str();
  if (IsValid(unit)) {
    SetEndurance(unit, text, count);
  }
}

void SetEnduranceItem(const as::string& pid, const as::string& iid,
  int count) {
  Unit* unit = FindUnit(pid);
  const char* text = iid.c_str();
  if (IsValid(unit)) {
    SetEndurance(unit, text, count);
  }
}

}

namespace game::script::unit::fade {

namespace {

using unit::FindUnit;
using unit::IsOnMap;
using unit::IsValid;

}

void StartFade(Unit* unit, float alpha);

void FadeIn(int index) {
  Unit* unit = FindUnit(index);
  if (IsValid(unit) && IsOnMap(unit)) {
    StartFade(unit, 0.0f);
  }
}

void FadeIn(const as::string& pid) {
  Unit* unit = FindUnit(pid);
  if (unit != nullptr && IsOnMap(unit)) {
    StartFade(unit, 0.0f);
  }
}

bool IsFading(int index) {
  Unit* unit = FindUnit(index);
  if (unit == nullptr) {
    return false;
  }
  return unit->GetPerson() != nullptr && IsOnMap(unit) && unit->IsFading();
}

}

namespace game::script::unit::ai {

namespace {

using unit::FindUnit;
using unit::IsOnMap;
using unit::IsValid;

}

void Activate(Unit* unit, bool active);

void ActivateForBand(int index) {
  Unit* unit = FindUnit(index);
  if (IsValid(unit) && IsOnMap(unit)) {
    Activate(unit, false);
  }
}

void ActivateForBand(const as::string& pid) {
  Unit* unit = FindUnit(pid);
  if (unit != nullptr && IsOnMap(unit)) {
    Activate(unit, false);
  }
}

int GetBandNo(int index) {
  Unit* unit = FindUnit(index);
  if (IsValid(unit) && IsOnMap(unit)) {
    return unit->GetBand();
  }
  return -1;
}

int GetBandNo(const as::string& pid) {
  Unit* unit = FindUnit(pid);
  if (unit != nullptr && IsOnMap(unit)) {
    return unit->GetBand();
  }
  return -1;
}

bool IsActive(int index) {
  Unit* unit = FindUnit(index);
  if (unit == nullptr) {
    return false;
  }
  return unit->GetPerson() != nullptr && IsOnMap(unit) && unit->IsAiActive();
}

bool IsActive(const as::string& pid) {
  Unit* unit = FindUnit(pid);
  return unit != nullptr && IsOnMap(unit) && unit->IsAiActive();
}

}

namespace game::script::unit::skill {

namespace {

using unit::FindUnit;
using unit::IsOnMap;
using unit::IsValid;

}

void ChangeDangerMap(int index) {
  Unit* unit = FindUnit(index);
  if (IsValid(unit) && IsOnMap(unit)) {
    UpdateDangerMap(unit);
  }
}

}

namespace game::script::unit::ability {

namespace {

using unit::FindUnit;
using unit::GetParam;

}

int GetLevel(const as::string& pid) {
  Unit* unit = FindUnit(pid);
  return unit != nullptr ? unit->GetLevel() : 0;
}

int GetHp(const as::string& pid) {
  Unit* unit = FindUnit(pid);
  return unit != nullptr ? unit->GetHp() : 0;
}

int GetHpStock(const as::string& pid) {
  Unit* unit = FindUnit(pid);
  return unit != nullptr ? unit->GetHpStock() : 0;
}

int GetPollution(const as::string& pid) {
  Unit* unit = FindUnit(pid);
  return unit != nullptr ? unit->GetPollution() : 0;
}

int GetMoveType(const as::string& pid) {
  Unit* unit = FindUnit(pid);
  return unit != nullptr ? unit->GetJobUnknown30() : 0;
}

#define GAME_SCRIPT_PARAM(name, kind) \
  int name(const as::string& pid) { \
    Unit* unit = FindUnit(pid); \
    return unit != nullptr ? unit->GetParam(kind, 1) : 0; \
  }

GAME_SCRIPT_PARAM(GetMaxHp, 0)
GAME_SCRIPT_PARAM(GetStr, 1)
GAME_SCRIPT_PARAM(GetMagic, 2)
GAME_SCRIPT_PARAM(GetTech, 3)
GAME_SCRIPT_PARAM(GetQuick, 4)
GAME_SCRIPT_PARAM(GetLuck, 5)
GAME_SCRIPT_PARAM(GetDef, 6)
GAME_SCRIPT_PARAM(GetMdef, 7)
GAME_SCRIPT_PARAM(GetCharm, 8)

#undef GAME_SCRIPT_PARAM

int GetLevel(int index) {
  Unit* unit = FindUnit(index);
  if (unit == nullptr) {
    return 0;
  }
  return unit->GetPerson() != nullptr ? unit->GetLevel() : 0;
}

int GetHp(int index) {
  Unit* unit = FindUnit(index);
  if (unit == nullptr) {
    return 0;
  }
  return unit->GetPerson() != nullptr ? unit->GetHp() : 0;
}

int GetHpStock(int index) {
  Unit* unit = FindUnit(index);
  if (unit == nullptr) {
    return 0;
  }
  return unit->GetPerson() != nullptr ? unit->GetHpStock() : 0;
}

int GetPollution(int index) {
  Unit* unit = FindUnit(index);
  if (unit == nullptr) {
    return 0;
  }
  return unit->GetPerson() != nullptr ? unit->GetPollution() : 0;
}

int GetSize(int index) {
  Unit* unit = FindUnit(index);
  if (unit == nullptr) {
    return 0;
  }
  return unit->GetPerson() != nullptr ? unit->GetSize() : 0;
}

int GetMoveType(int index) {
  Unit* unit = FindUnit(index);
  if (unit == nullptr) {
    return 0;
  }
  return unit->GetPerson() != nullptr ? unit->GetJobUnknown30() : 0;
}

int GetMaxHp(int index) {
  return GetParam(index, 0);
}

int GetStr(int index) {
  return GetParam(index, 1);
}

int GetMagic(int index) {
  return GetParam(index, 2);
}

int GetTech(int index) {
  return GetParam(index, 3);
}

int GetQuick(int index) {
  return GetParam(index, 4);
}

int GetLuck(int index) {
  return GetParam(index, 5);
}

int GetDef(int index) {
  return GetParam(index, 6);
}

int GetMdef(int index) {
  return GetParam(index, 7);
}

int GetCharm(int index) {
  return GetParam(index, 8);
}

}

namespace game::script::unit::pos {

namespace {

using unit::FindUnit;
using unit::IsOnMap;
using unit::IsValid;

}

void SetPosition(Unit* unit, int x, int z);
void MoveTo(Unit* unit, int x, int z, const uint8_t& flags, bool forced);

void Move(int index, int x, int z, uint32_t moveFlag) {
  Unit* unit = FindUnit(index);
  const uint8_t flags = moveFlag;
  MoveTo(unit, x, z, flags, false);
}

void Move(const as::string& pid, int x, int z, uint32_t moveFlag) {
  Unit* unit = FindUnit(pid);
  const uint8_t flags = moveFlag;
  MoveTo(unit, x, z, flags, false);
}

void MoveForce(int index, int x, int z, uint32_t moveFlag) {
  Unit* unit = FindUnit(index);
  const uint8_t flags = moveFlag;
  MoveTo(unit, x, z, flags, true);
}

void MoveForce(const as::string& pid, int x, int z,
  uint32_t moveFlag) {
  Unit* unit = FindUnit(pid);
  const uint8_t flags = moveFlag;
  MoveTo(unit, x, z, flags, true);
}

void Set(int index, int x, int z) {
  SetPosition(FindUnit(index), x, z);
}

void Set(const as::string& pid, int x, int z) {
  SetPosition(FindUnit(pid), x, z);
}

int GetX(int index) {
  Unit* unit = FindUnit(index);
  if (IsValid(unit) && IsOnMap(unit)) {
    return unit->GetX();
  }
  return -1;
}

int GetX(const as::string& pid) {
  Unit* unit = FindUnit(pid);
  if (unit != nullptr && IsOnMap(unit)) {
    return unit->GetX();
  }
  return -1;
}

int GetZ(int index) {
  Unit* unit = FindUnit(index);
  if (IsValid(unit) && IsOnMap(unit)) {
    return unit->GetZ();
  }
  return -1;
}

int GetZ(const as::string& pid) {
  Unit* unit = FindUnit(pid);
  if (unit != nullptr && IsOnMap(unit)) {
    return unit->GetZ();
  }
  return -1;
}

}

namespace game::script::unit::status {

namespace {

using unit::FindUnit;

}

void Set(const as::string& pid, uint32_t status) {
  if (Unit* unit = FindUnit(pid)) {
    unit->SetState(status);
    unit::MarkDirty(unit);
  }
}

void Set(int index, uint32_t status) {
  Unit* unit = FindUnit(index);
  if (unit != nullptr && unit->GetPerson() != nullptr) {
    unit->SetState(status);
    unit::MarkDirty(unit);
  }
}

void Clear(int index, uint32_t status) {
  Unit* unit = FindUnit(index);
  if (unit != nullptr && unit->GetPerson() != nullptr) {
    unit->ClearState(status);
    unit::MarkDirty(unit);
  }
}

// Registered in the status namespace.
bool IsForcePlayer(const as::string& pid) {
  Unit* unit = FindUnit(pid);
  return unit != nullptr && (1 << unit->GetForceType()) & 0xf1;
}

bool Check(int index, uint32_t status) {
  Unit* unit = FindUnit(index);
  if (unit == nullptr) {
    return false;
  }
  return unit->GetPerson() != nullptr && unit->HasState(status);
}

bool Check(const as::string& pid, uint32_t status) {
  Unit* unit = FindUnit(pid);
  return unit != nullptr && unit->HasState(status);
}

}

namespace game::script::unit::ai {

namespace {

using unit::FindUnit;
using unit::IsOnMap;
using unit::IsValid;
using unit::MarkDirty;

// The AI settings apply to units on the map.
template<typename Function>
[[gnu::always_inline]] inline void SetAi(Unit* unit, Function function) {
  if (IsValid(unit) && IsOnMap(unit)) {
    function(unit);
    MarkDirty(unit);
  }
}

template<typename Function>
[[gnu::always_inline]] inline void SetAi(int index, Function function) {
  SetAi(FindUnit(index), function);
}

template<typename Function>
[[gnu::always_inline]] inline void SetAi(const as::string& pid,
  Function function) {
  SetAi(FindUnit(pid), function);
}

}

void SetPriority(const as::string& pid, int priority) {
  SetAi(pid, [priority](Unit* unit) { unit->SetPriority(priority); });
}

void SetBandNo(const as::string& pid, int bandNo) {
  SetAi(pid, [bandNo](Unit* unit) { unit->SetBand(bandNo); });
}

void SetRageOp(const as::string& pid, int rageOp) {
  SetAi(pid, [rageOp](Unit* unit) { unit->SetRageOp(rageOp); });
}

void SetRageMaxProhibitTurn(as::string& pid, int turn) {
  SetAi(pid, [turn](Unit* unit) { unit->SetRageProhibitTurn(turn); });
}

void SetActive(const as::string& pid, bool active) {
  SetAi(pid, [active](Unit* unit) { unit->SetAiActive(active); });
}

void SetRageTargetPos(as::string& pid, int x, int z) {
  SetAi(pid, [x, z](Unit* unit) { unit->SetRageTarget(x, z); });
}

void SetPriority(int index, int priority) {
  SetAi(index, [priority](Unit* unit) { unit->SetPriority(priority); });
}

void SetBandNo(int index, int bandNo) {
  SetAi(index, [bandNo](Unit* unit) { unit->SetBand(bandNo); });
}

void SetRageOp(int index, int rageOp) {
  SetAi(index, [rageOp](Unit* unit) { unit->SetRageOp(rageOp); });
}

void SetRageMaxProhibitTurn(int index, int turn) {
  SetAi(index, [turn](Unit* unit) { unit->SetRageProhibitTurn(turn); });
}

void SetActive(int index, bool active) {
  SetAi(index, [active](Unit* unit) { unit->SetAiActive(active); });
}

void ClearMoveLimit(int index) {
  SetAi(index, [](Unit* unit) { unit->ClearMoveLimit(); });
}

void SetRageTargetPos(int index, int x, int z) {
  SetAi(index, [x, z](Unit* unit) { unit->SetRageTarget(x, z); });
}

#define GAME_SCRIPT_AI_FLAG(name, mask) \
  void name(int index, bool isEnable) { \
    SetAi(index, [isEnable](Unit* unit) { \
      unit->SetAiFlag(mask, isEnable); \
    }); \
  } \
  void name(const as::string& pid, bool isEnable) { \
    SetAi(pid, [isEnable](Unit* unit) { \
      unit->SetAiFlag(mask, isEnable); \
    }); \
  }

GAME_SCRIPT_AI_FLAG(SetRejectPower0Attack, 0x20)
GAME_SCRIPT_AI_FLAG(SetMoveBreak, 0x80)
GAME_SCRIPT_AI_FLAG(SetMoveThrough, 0x100)
GAME_SCRIPT_AI_FLAG(SetMoveDestroy, 0x400)
GAME_SCRIPT_AI_FLAG(SetDisableMutationAttack, 0x800)

#undef GAME_SCRIPT_AI_FLAG

}

namespace game::script::unit {

// Registered in the unit namespace.
void ClearMoveLimit(const as::string& pid) {
  Unit* unit = FindUnit(pid);
  if (unit != nullptr && IsOnMap(unit)) {
    unit->ClearMoveLimit();
    MarkDirty(unit);
  }
}

void Clear(const as::string& pid, int unitStatus) {
  if (Unit* unit = FindUnit(pid)) {
    unit->ClearState(unitStatus);
    MarkDirty(unit);
  }
}

// The unit standing on a cell of the map.
[[gnu::always_inline]] inline const Unit* FindUnitAt(int x, int z) {
  const map::Image* image = map::Image::GetInstance();
  if (image == nullptr || !image->Contains(x, z)) {
    return nullptr;
  }
  const uint8_t index = image->GetUnitIndex(x, z);
  if (index == 0) {
    return nullptr;
  }
  const Unit* unit = UnitPool::GetSlot(index);
  return IsValid(unit) ? unit : nullptr;
}

int GetIndexByPos(int posX, int posZ) {
  const Unit* unit = FindUnitAt(posX, posZ);
  return unit != nullptr ? GetIndexOf(unit) : -1;
}

as::string GetPIDByPos(int posX, int posZ) {
  const char* pid = "";
  if (const Unit* unit = FindUnitAt(posX, posZ)) {
    pid = unit->GetPerson()->key.text;
  }
  return as::string(pid);
}

namespace {

// The next unit in the forces of the mask, after the last one of a force.
[[gnu::always_inline]] inline const Unit* GetNextIn(const Unit* unit,
  const ForceMask& mask) {
  if (const Unit* next = unit->GetNext()) {
    return next;
  }
  const Force* force = unit->GetForce();
  if (force == nullptr || force->GetType() >= UnitPool::kForceCount - 1) {
    return nullptr;
  }
  for (int type = force->GetType() + 1; type < UnitPool::kForceCount;
    type++) {
    if (mask.Contains(type)) {
      if (const Unit* first = UnitPool::GetForce(type).GetFirst()) {
        return first;
      }
    }
  }
  return nullptr;
}

}

int GetNextIndexOnMap(int index) {
  Unit* unit = FindUnit(index);
  if (unit == nullptr) {
    return -1;
  }
  const ForceMask mask{0xf};
  const Unit* next = GetNextIn(unit, mask);
  if (!IsValid(next) || !IsOnMap(next)) {
    return -1;
  }
  return GetIndexOf(next);
}

void UpdateLearn(int index) {
  Unit* unit = FindUnit(index);
  if (IsValid(unit)) {
    unit->Unknown6c4610();
    MarkDirty(unit);
  }
}

bool IsInAttackRange(const Unit* unit, const Unit* target);

bool IsAttackRangeTargetUnit(int index, int targetUnitIndex) {
  Unit* unit = FindUnit(index);
  if (!IsValid(unit) || !IsOnMap(unit)) {
    return false;
  }
  Unit* target = FindUnit(targetUnitIndex);
  if (!IsValid(target) || !IsOnMap(target)) {
    return false;
  }
  return IsInAttackRange(unit, target);
}

void SetRideOnOff(int index, bool isRide) {
  Unit* unit = FindUnit(index);
  if (IsValid(unit) && IsOnMap(unit)) {
    unit->SetRide(isRide);
  }
}

void SetRideOnOff(const as::string& pid, bool isRide) {
  Unit* unit = FindUnit(pid);
  if (unit != nullptr && IsOnMap(unit)) {
    unit->SetRide(isRide);
  }
}

bool IsAttackRangeTargetUnit(const as::string& pid,
  const as::string& targetPid) {
  Unit* unit = FindUnit(pid);
  if (unit == nullptr || !IsOnMap(unit)) {
    return false;
  }
  Unit* target = FindUnit(targetPid);
  if (target == nullptr || !IsOnMap(target)) {
    return false;
  }
  return IsInAttackRange(unit, target);
}

// Registered without a namespace.
void GenerateFaceTexture(const as::string& pid) {
  Unit* unit = FindUnit(pid);
  if (unit != nullptr && IsOnMap(unit)) {
    GenerateFaceTexture(unit, true);
  }
}

int GetBarrierHp(int index, int x, int z) {
  Unit* unit = FindUnit(index);
  if (!IsValid(unit) || !IsOnMap(unit)) {
    return 0;
  }
  return unit->GetBarrierHp(x, z);
}

int GetBarrierHp(const as::string& pid, int x, int z) {
  Unit* unit = FindUnit(pid);
  if (unit == nullptr || !IsOnMap(unit)) {
    return 0;
  }
  return unit->GetBarrierHp(x, z);
}

void SetBarrierHp(int index, int hp) {
  Unit* unit = FindUnit(index);
  if (IsValid(unit) && IsOnMap(unit)) {
    unit->SetBarrierHp(hp);
    MarkDirty(unit);
  }
}

void SetBarrierHp(const as::string& pid, int hp) {
  Unit* unit = FindUnit(pid);
  if (unit != nullptr && IsOnMap(unit)) {
    unit->SetBarrierHp(hp);
    MarkDirty(unit);
  }
}

void SetBarrierHp(int index, int x, int z, int hp) {
  Unit* unit = FindUnit(index);
  if (IsValid(unit) && IsOnMap(unit)) {
    unit->SetBarrierHp(x, z, hp);
    MarkDirty(unit);
  }
}

void SetBarrierHp(const as::string& pid, int x, int z, int hp) {
  Unit* unit = FindUnit(pid);
  if (unit != nullptr && IsOnMap(unit)) {
    unit->SetBarrierHp(x, z, hp);
    MarkDirty(unit);
  }
}

void BreakBarrier(int index, int x, int z, bool isEffect) {
  Unit* unit = FindUnit(index);
  if (IsValid(unit) && IsOnMap(unit)) {
    unit->BreakBarrier(nullptr, x, z, isEffect);
    MarkDirty(unit);
  }
}

void BreakBarrier(const as::string& pid, int x, int z, bool isEffect) {
  Unit* unit = FindUnit(pid);
  if (unit != nullptr && IsOnMap(unit)) {
    unit->BreakBarrier(nullptr, x, z, isEffect);
    MarkDirty(unit);
  }
}

void RepairBarrier(int index, int x, int z, bool isEffect) {
  Unit* unit = FindUnit(index);
  if (IsValid(unit) && IsOnMap(unit)) {
    unit->RepairBarrier(nullptr, x, z, isEffect);
    MarkDirty(unit);
  }
}

void RepairBarrier(const as::string& pid, int x, int z, bool isEffect) {
  Unit* unit = FindUnit(pid);
  if (unit != nullptr && IsOnMap(unit)) {
    unit->RepairBarrier(nullptr, x, z, isEffect);
    MarkDirty(unit);
  }
}

void BreakBarrier(int index, bool isEffect) {
  Unit* unit = FindUnit(index);
  if (IsValid(unit) && IsOnMap(unit)) {
    unit->BreakBarrier(isEffect);
    MarkDirty(unit);
  }
}

void BreakBarrier(const as::string& pid, bool isEffect) {
  Unit* unit = FindUnit(pid);
  if (unit != nullptr && IsOnMap(unit)) {
    unit->BreakBarrier(isEffect);
    MarkDirty(unit);
  }
}

}

namespace game::map {

// The unit panels shown on the map, each refreshed for its unit.
class MapOnMapInfo : public Singleton<MapOnMapInfo> {
public:
  class Panel {
  public:
    void Refresh(const Unit* unit);

    const uint8_t& GetUnit() const {
      return unit_;
    }

  private:
    uint8_t unknown_00_[0x944];
    uint8_t unit_;
    uint8_t unknown_945_[0x4b];
  };

  static constexpr int kPanelCount = 160;

  Panel* GetPanels() {
    return panels_;
  }

private:
  uint8_t unknown_08_[0x98];
  Panel panels_[kPanelCount];
};

}

namespace game::script::unit {

namespace {

[[gnu::always_inline]] inline void Reload(Unit* unit) {
  unit->Unknown81a240();
  unit->MarkDirty(4);
  map::MapOnMapInfo* info = map::MapOnMapInfo::GetInstance();
  if (info == nullptr) {
    return;
  }
  for (int i = 0; i < map::MapOnMapInfo::kPanelCount; i++) {
    map::MapOnMapInfo::Panel& panel = info->GetPanels()[i];
    if (panel.GetUnit() != 0 && UnitPool::Get(panel.GetUnit()) == unit) {
      panel.Refresh(unit);
    }
  }
}

}

void Reload(int index) {
  Unit* unit = FindUnit(index);
  if (IsValid(unit) && IsOnMap(unit)) {
    Reload(unit);
  }
}

void Reload(const as::string& pid) {
  Unit* unit = FindUnit(pid);
  if (unit != nullptr && IsOnMap(unit)) {
    Reload(unit);
  }
}

// The damage sequence running, the script then waits without a block.
extern void* g_damage_sequence;

void WaitDamageEnd() {
  void* sequence = g_damage_sequence;
  as::ScriptContext* context = as::GetCurrentContext();
  if (sequence != nullptr) {
    context->GetRunner()->SetBlockState(0);
    return;
  }
  context->GetRunner()->SetBlockState(1);
  context->ClearCallback();
}

// The locator position of a unit, returned in memory.
struct Center {
  Center(const Center& other);

  float values[4];
};

Center GetCenter(const Unit* unit);
void ShowDamagePopup(const Center& center, int damage, int flags);

void DamagePopup(int index, int damage, int popupFlags) {
  Unit* unit = FindUnit(index);
  if (IsValid(unit) && IsOnMap(unit)) {
    ShowDamagePopup(GetCenter(unit), damage, popupFlags);
  }
}

void DamagePopup(const as::string& pid, int damage, int popupFlags) {
  Unit* unit = FindUnit(pid);
  if (unit != nullptr && IsOnMap(unit)) {
    ShowDamagePopup(GetCenter(unit), damage, popupFlags);
  }
}

}

namespace game::script::unit::ability {

void SetHp(int index, int hp) {
  Unit* unit = unit::FindUnit(index);
  if (unit::IsValid(unit)) {
    const int max = unit->GetParam(UnitParams::kHp, 1);
    unit->ChangeHp(hp < 0 ? 0 : (max < hp ? max : hp));
    unit->Unknown81a990();
    unit::MarkDirty(unit);
  }
}

void SetHp(const as::string& pid, int hp) {
  if (Unit* unit = unit::FindUnit(pid)) {
    const int max = unit->GetParam(UnitParams::kHp, 1);
    unit->ChangeHp(hp < 0 ? 0 : (max < hp ? max : hp));
    unit->Unknown81a990();
    unit::MarkDirty(unit);
  }
}

void UpdateLearn(const as::string& pid) {
  if (Unit* unit = unit::FindUnit(pid)) {
    unit->Unknown6c4610();
    unit::MarkDirty(unit);
  }
}

}

namespace game::script::unit::skill {

namespace {

using unit::FindUnit;
using unit::IsValid;
using unit::MarkDirty;

[[gnu::always_inline]] inline SkillKey GetSkillKey(const as::string& sid) {
  SkillKey key = {};
  key.Assign(HashedString(sid.c_str()));
  return key;
}

}

bool Has(int index, const as::string& sid) {
  Unit* unit = FindUnit(index);
  if (!IsValid(unit)) {
    return false;
  }
  const SkillKey key = GetSkillKey(sid);
  return HasSkill(unit->GetSkillList(7), key);
}

void Supply(int index, const as::string& sid) {
  Unit* unit = FindUnit(index);
  if (IsValid(unit)) {
    unit->ResetSkillLevel(sid.c_str());
    MarkDirty(unit);
  }
}

void AddEquip(int index, const as::string& sid) {
  Unit* unit = FindUnit(index);
  if (IsValid(unit)) {
    const SkillKey key = GetSkillKey(sid);
    unit->AddEquipSkill(key, true);
    MarkDirty(unit);
  }
}

void RemoveEquip(int index, const as::string& sid) {
  Unit* unit = FindUnit(index);
  if (IsValid(unit)) {
    const SkillKey key = GetSkillKey(sid);
    unit->RemoveEquipSkill(key);
    MarkDirty(unit);
  }
}

void AddPrivate(int index, const as::string& sid) {
  Unit* unit = FindUnit(index);
  const SkillKey key = GetSkillKey(sid);
  if (IsValid(unit) && unit->AddPrivateSkill(key)) {
    unit->Unknown81a990();
    MarkDirty(unit);
  }
}

bool Has(const as::string& pid, const as::string& sid) {
  Unit* unit = FindUnit(pid);
  if (unit == nullptr) {
    return false;
  }
  const SkillKey key = GetSkillKey(sid);
  return HasSkill(unit->GetSkillList(7), key);
}

void Supply(const as::string& pid, const as::string& sid) {
  if (Unit* unit = FindUnit(pid)) {
    unit->ResetSkillLevel(sid.c_str());
    MarkDirty(unit);
  }
}

void AddEquip(const as::string& pid, const as::string& sid) {
  if (Unit* unit = FindUnit(pid)) {
    const SkillKey key = GetSkillKey(sid);
    unit->AddEquipSkill(key, true);
    MarkDirty(unit);
  }
}

void RemoveEquip(as::string& pid, const as::string& sid) {
  if (Unit* unit = FindUnit(pid)) {
    const SkillKey key = GetSkillKey(sid);
    unit->RemoveEquipSkill(key);
    MarkDirty(unit);
  }
}

void AddPrivate(const as::string& pid, const as::string& sid) {
  Unit* unit = FindUnit(pid);
  const SkillKey key = GetSkillKey(sid);
  if (IsValid(unit) && unit->AddPrivateSkill(key)) {
    unit->Unknown81a990();
    MarkDirty(unit);
  }
}

void RemovePrivate(as::string& pid, const as::string& sid) {
  Unit* unit = FindUnit(pid);
  const SkillKey key = GetSkillKey(sid);
  if (IsValid(unit) && unit->RemovePrivateSkill(key)) {
    unit->Unknown81a990();
    MarkDirty(unit);
  }
}

void RemovePrivate(int index, const as::string& sid) {
  Unit* unit = FindUnit(index);
  const SkillKey key = GetSkillKey(sid);
  if (IsValid(unit) && unit->RemovePrivateSkill(key)) {
    unit->Unknown81a990();
    MarkDirty(unit);
  }
}

namespace {

// The skills with endurance are the sources of list 4, kinds 5 and 6 add
// their extra levels to the uses of the row.
[[gnu::always_inline]] inline int GetExtraUses(const SkillKey& source,
  const SkillData* data) {
  return SkillRow::GetKind(data) - 5u < 2 ? source.extra : 0;
}

[[gnu::always_inline]] inline int GetEndurance(Unit* unit,
  const as::string& sid) {
  const SkillKey key = GetSkillKey(sid);
  const Unit::SkillList& list = unit->GetSkillList(4);
  if (!list.Contains(key.index)) {
    return -1;
  }
  const int i = list.FindSource(key.index);
  if (i < 0) {
    return -1;
  }
  const SkillKey& source = list.GetSource(i);
  const SkillData* data = SkillFile::GetInstance()->At(source.index);
  const int uses =
    GetExtraUses(source, data) - source.level + SkillRow::GetUses(data);
  return uses < 0 ? 0 : uses;
}

[[gnu::always_inline]] inline void SetEndurance(Unit* unit,
  const as::string& sid, int count) {
  const SkillKey key = GetSkillKey(sid);
  Unit::SkillList& list = unit->GetSkillList(4);
  if (list.Contains(key.index)) {
    const int i = list.FindSource(key.index);
    if (i >= 0) {
      SkillKey& source = list.GetSource(i);
      const SkillData* data = g_skill_file->At(source.index);
      const int level =
        GetExtraUses(source, data) - count + SkillRow::GetUses(data);
      source.level = level < 0 ? 0 : level;
    }
  }
  MarkDirty(unit);
}

}

int GetEndurance(int index, const as::string& sid) {
  Unit* unit = FindUnit(index);
  if (!IsValid(unit)) {
    return 0;
  }
  return GetEndurance(unit, sid);
}

int GetEndurance(const as::string& pid, const as::string& sid) {
  Unit* unit = FindUnit(pid);
  if (unit == nullptr) {
    return 0;
  }
  return GetEndurance(unit, sid);
}

void SetEndurance(int index, const as::string& sid, int count) {
  Unit* unit = FindUnit(index);
  if (IsValid(unit)) {
    SetEndurance(unit, sid, count);
  }
}

void SetEndurance(const as::string& pid, const as::string& sid, int count) {
  if (Unit* unit = FindUnit(pid)) {
    SetEndurance(unit, sid, count);
  }
}

}

namespace game::script::unit::fade {

void StartFadeOut(Unit* unit, float duration);

void FadeOut(int index, bool isDeadSe) {
  Unit* unit = unit::FindUnit(index);
  if (unit::IsValid(unit) && unit::IsOnMap(unit)) {
    StartFadeOut(unit, 0.0f);
    if (isDeadSe) {
      sound::PlaySe("SE_SYS_Dead_Unit");
    }
  }
}

void FadeOut(const as::string& pid, bool isDeadSe) {
  Unit* unit = unit::FindUnit(pid);
  if (unit != nullptr && unit::IsOnMap(unit)) {
    StartFadeOut(unit, 0.0f);
    if (isDeadSe) {
      sound::PlaySe("SE_SYS_Dead_Unit");
    }
  }
}

}

namespace game::script::unit::dir {

void SetAngle(Unit* unit, float angle, float duration);

// The directions follow the numeric keypad, 4 faces the angle 0.
void Set(int index, int dir) {
  Unit* unit = unit::FindUnit(index);
  if (!unit::IsValid(unit) || !unit::IsOnMap(unit)) {
    return;
  }
  float angle;
  switch (static_cast<uint8_t>(dir)) {
    case 0:
      return;
    case 1:
      angle = 180.0f;
      break;
    case 2:
      angle = 270.0f;
      break;
    case 3:
      angle = 225.0f;
      break;
    case 6:
      angle = 315.0f;
      break;
    case 8:
      angle = 90.0f;
      break;
    case 9:
      angle = 135.0f;
      break;
    case 12:
      angle = 45.0f;
      break;
    default:
      angle = 0.0f;
      break;
  }
  SetAngle(unit, angle, -1.0f);
}

}

namespace game::script::unit::ai {

[[gnu::visibility("default")]] extern AIFile* g_ai_file;

as::string GetSequence(int index, int order) {
  const char* name = "";
  if (Unit* unit = FindUnit(index); IsValid(unit) && IsOnMap(unit)) {
    if (const AISequenceData* sequence =
      g_ai_file->At(unit->GetSequence(order))) {
      name = sequence->key.text;
    }
  }
  return as::string(name);
}

as::string GetSequence(const as::string& pid, int order) {
  const char* name = "";
  if (Unit* unit = FindUnit(pid); unit != nullptr && IsOnMap(unit)) {
    if (const AISequenceData* sequence =
      g_ai_file->At(unit->GetSequence(order))) {
      name = sequence->key.text;
    }
  }
  return as::string(name);
}

int GetSequenceArgPositionX(int index, int order, int argIndex) {
  Unit* unit = FindUnit(index);
  if (IsValid(unit) && IsOnMap(unit)) {
    const Unit::SequenceArg& arg = unit->GetSequenceArg(order, argIndex);
    if (arg.type == 1) {
      return arg.x;
    }
  }
  return -1;
}

int GetSequenceArgPositionZ(int index, int order, int argIndex) {
  Unit* unit = FindUnit(index);
  if (IsValid(unit) && IsOnMap(unit)) {
    const Unit::SequenceArg& arg = unit->GetSequenceArg(order, argIndex);
    if (arg.type == 1) {
      return arg.z;
    }
  }
  return -1;
}

}

namespace game::script::unit::dir {

namespace {

using unit::FindUnit;
using unit::IsOnMap;
using unit::IsValid;

}

// The keypad directions are bits, 1 faces 180 degrees, 2 faces 270, 4 faces
// 0 and 8 faces 90, the diagonals combine two of them.
int Get(int index) {
  Unit* unit = FindUnit(index);
  if (!IsValid(unit) || !IsOnMap(unit)) {
    return 0;
  }
  const float rotation = unit->GetRotation();
  float angle = std::fmod(rotation, 360.0f);
  angle = rotation < 0.0f ? angle + 360.0f : angle;
  if (angle < 22.5f) {
    return 4;
  }
  if (angle < 67.5f) {
    return 12;
  }
  if (angle < 112.5f) {
    return 8;
  }
  if (angle < 157.5f) {
    return 9;
  }
  if (angle < 202.5f) {
    return 1;
  }
  if (angle < 247.5f) {
    return 3;
  }
  if (angle < 292.5f) {
    return 2;
  }
  return angle < 337.5f ? 6 : 4;
}

}

namespace game::script::unit::ai {

void SetRageOpArg(int index, const as::string& arg) {
  SetAi(index, [&arg](Unit* unit) { unit->SetRageOpArg(arg.c_str()); });
}

void SetRageOpArg(const as::string& pid,
  const as::string& arg) {
  SetAi(pid, [&arg](Unit* unit) { unit->SetRageOpArg(arg.c_str()); });
}

}

namespace game::script::unit {

#pragma GCC visibility pop

}
