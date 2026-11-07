#include <memory>
#include <string>

#include "as/script_context.hpp"
#include "game/cmdbtl/manager.hpp"
#include "game/cmdbtl/situation.hpp"
#include "game/data/data_files.hpp"
#include "game/game_mode_data.hpp"
#include "game/script/script_proc.hpp"
#include "game/script/script_string.hpp"
#include "game/unit.hpp"

#pragma GCC visibility push(hidden)

namespace game::cmdbtl {

// Inlined into the natives, so it lives with them.
std::weak_ptr<CmdBtlUnit> Manager::FindGlobal(int unitId) const {
  std::weak_ptr<CmdBtlUnit> result;
  ForEachUnit([&result, &unitId](std::shared_ptr<CmdBtlUnit> unit) {
    if (unit->GetId() == unitId) {
      result = unit;
    }
  });
  return result;
}

}

#pragma GCC visibility pop

namespace game::script::cmdbtl::party {

// The script manager of as/script_context.hpp, read through the global offset
// table by these natives.
extern as::ScriptManager* g_script_manager;

}

// The natives of the cmdbtl::party script namespace, file statics as the
// closure of GetLeaderId names it.
namespace {

using game::cmdbtl::CmdBtlUnit;
using game::cmdbtl::Party;

[[gnu::always_inline]] inline as::ScriptContext* GetCurrentContext() {
  as::ScriptThread* thread = game::script::cmdbtl::party::g_script_manager
    ->GetThread(as::g_thread_info->GetIndex());
  return thread != nullptr ? thread->GetContext() : nullptr;
}

[[gnu::always_inline]] inline void OpenBlock() {
  as::ScriptContext* context = GetCurrentContext();
  context->GetRunner()->SetBlockState(1);
  context->ClearCallback();
}

[[gnu::always_inline]] inline Party& GetParty(int partyType) {
  return g_cmdbtl_manager->GetParty(partyType);
}

[[gnu::always_inline]] inline std::shared_ptr<CmdBtlUnit> FindUnit(
  int unitId) {
  return g_cmdbtl_manager->FindGlobal(unitId).lock();
}

}

#pragma GCC visibility push(hidden)

[[gnu::used]] static int GetHp(int partyType) {
  OpenBlock();
  return GetParty(partyType).GetHp();
}

// A locked or living party keeps at least one hit point.
[[gnu::used]] static void SetHp(int partyType, int hp) {
  OpenBlock();
  Party& party = GetParty(partyType);
  const int min = party.IsHpLocked() || party.GetLifeState() == 1 ? 1 : 0;
  party.SetHp(std::clamp(hp, min, party.GetMaxHp()));
}

[[gnu::used]] static int GetMaxHp(int partyType) {
  OpenBlock();
  return GetParty(partyType).GetMaxHp();
}

[[gnu::used]] static void SetBonusMaxHp(int partyType, int hp) {
  OpenBlock();
  GetParty(partyType).SetBonusMaxHp(hp);
}

[[gnu::used]] static int GetStock(int partyType) {
  OpenBlock();
  return GetParty(partyType).GetStock();
}

[[gnu::used]] static int GetUnitCount(int partyType) {
  OpenBlock();
  return GetParty(partyType).GetUnits().size();
}

[[gnu::used]] static int GetUnitId(int partyType, int index) {
  OpenBlock();
  if (index < 0) {
    return 0;
  }
  const auto& units = GetParty(partyType).GetUnits();
  if (static_cast<size_t>(index) >= units.size()) {
    return 0;
  }
  return units[index]->GetId();
}

[[gnu::used]] static void SetLifeState(int partyType, int lifeState) {
  OpenBlock();
  GetParty(partyType).SetLifeState(lifeState);
}

[[gnu::used]] static void ClearLockTargetLeader(int partyType) {
  OpenBlock();
  GetParty(partyType).ClearLockTargetLeader();
}

[[gnu::used]] static int GetLeaderId(int partyType) {
  OpenBlock();
  Party& party = GetParty(partyType);
  int result = -1;
  game::cmdbtl::ForEachPartyUnit(partyType,
    [&result, &party](std::shared_ptr<CmdBtlUnit> unit) {
      if (party.GetLeader().lock() == unit) {
        result = unit->GetId();
      }
    });
  return result;
}

[[gnu::used]] static int GetLinkPoint(int partyType) {
  OpenBlock();
  if (GetParty(partyType).IsLinkDisabled()) {
    return 0;
  }
  if (game::cmdbtl::CmdBtlSituation::GetInstance()->IsLinkLocked()) {
    return 0;
  }
  const game::GameVariable* variable = game::GameModeData::FindVariable(
    game::HashedString("指示_連携ゲージ現在値"));
  return variable != nullptr ? variable->value : 0;
}

[[gnu::used]] static void SetLinkPoint(int partyType, int point) {
  OpenBlock();
  GetParty(partyType).SetLinkPoint(point);
}

[[gnu::used]] static int GetLevel(int unitId) {
  OpenBlock();
  if (const std::shared_ptr<CmdBtlUnit> unit = FindUnit(unitId)) {
    return unit->GetUnit()->GetLevel();
  }
  return 0;
}

[[gnu::used]] static int GetPollution(int unitId) {
  OpenBlock();
  if (const std::shared_ptr<CmdBtlUnit> unit = FindUnit(unitId)) {
    return unit->GetUnit()->GetPollution();
  }
  return 0;
}

[[gnu::used]] static as::string GetPID(int unitId) {
  OpenBlock();
  if (const std::shared_ptr<CmdBtlUnit> unit = FindUnit(unitId)) {
    const game::PersonData* person = unit->GetUnit()->GetPerson();
    return as::string(person != nullptr ? person->key.text : nullptr);
  }
  return as::string("");
}

[[gnu::used]] static as::string GetJID(int unitId) {
  OpenBlock();
  if (const std::shared_ptr<CmdBtlUnit> unit = FindUnit(unitId)) {
    return as::string(unit->GetUnit()->GetJobId());
  }
  return as::string("");
}

[[gnu::used]] static void SetPollution(int unitId, int pollution) {
  OpenBlock();
  if (const std::shared_ptr<CmdBtlUnit> unit = FindUnit(unitId)) {
    unit->GetUnit()->SetPollution(pollution);
    game::cmdbtl::CmdBtlScript* script =
      game::cmdbtl::CmdBtlScript::GetInstance();
    game::cmdbtl::NotifyPollution(
      script != nullptr ? script->GetCurrentProc() : nullptr,
      unit->GetUnit());
  }
}

[[gnu::used]] static void SetForceDying(int unitId, bool isDying) {
  OpenBlock();
  if (const std::shared_ptr<CmdBtlUnit> unit = FindUnit(unitId)) {
    unit->SetForceDying(isDying);
  }
}

[[gnu::used]] static void SetClearDying(int unitId) {
  OpenBlock();
  if (const std::shared_ptr<CmdBtlUnit> unit = FindUnit(unitId)) {
    unit->ClearDying();
  }
}

[[gnu::used]] static void PlayIdleMotion(int unitId, bool withStart) {
  OpenBlock();
  if (const std::shared_ptr<CmdBtlUnit> unit = FindUnit(unitId)) {
    unit->PlayIdleMotion(withStart, 0.0f);
  }
}

[[gnu::used]] static void ClearHeadLookToTarget(int unitId) {
  OpenBlock();
  if (const std::shared_ptr<CmdBtlUnit> unit = FindUnit(unitId)) {
    unit->ClearHeadLookToTarget();
  }
}

[[gnu::used]] static float GetAngle(int unitId) {
  OpenBlock();
  if (const std::shared_ptr<CmdBtlUnit> unit = FindUnit(unitId)) {
    return unit->GetAngle();
  }
  return 0.0f;
}

[[gnu::used]] static bool IsVisible(int unitId) {
  OpenBlock();
  if (const std::shared_ptr<CmdBtlUnit> unit = FindUnit(unitId)) {
    return unit->IsVisible();
  }
  return false;
}

[[gnu::used]] static void SetVisible(int unitId, const bool isVisible) {
  OpenBlock();
  if (const std::shared_ptr<CmdBtlUnit> unit = FindUnit(unitId)) {
    unit->SetVisible(isVisible);
  }
}

[[gnu::used]] static void TransferFromTemporaty(int temporatyUnitId,
  int targetPartyType) {
  OpenBlock();
  g_cmdbtl_manager->TransferFromTemporary(temporatyUnitId, targetPartyType);
  g_cmdbtl_manager->RelocateUnits({});
}

#pragma GCC visibility pop
