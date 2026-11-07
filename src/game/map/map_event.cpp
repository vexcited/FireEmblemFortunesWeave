#include "game/map/map_event.hpp"

namespace game::map {

#pragma GCC visibility push(hidden)

MapEventObject::~MapEventObject() = default;

[[gnu::used]] MapAreaEventBase::MapAreaEventBase() = default;
[[gnu::used]] MapAreaEvent::MapAreaEvent() = default;
[[gnu::used]] MapUnitEventBase::MapUnitEventBase() = default;
[[gnu::used]] MapUnitDieBeforeEvent::MapUnitDieBeforeEvent() = default;
[[gnu::used]] MapUnitDieAfterEvent::MapUnitDieAfterEvent() = default;
[[gnu::used]] MapUnitDieTalkEvent::MapUnitDieTalkEvent() = default;
[[gnu::used]] MapUnitReviveBeforeEvent::MapUnitReviveBeforeEvent() = default;
[[gnu::used]] MapUnitReviveAfterEvent::MapUnitReviveAfterEvent() = default;
[[gnu::used]] MapUnitFixedEvent::MapUnitFixedEvent() = default;
[[gnu::used]] MapUnitFixedSilentEvent::MapUnitFixedSilentEvent() = default;
[[gnu::used]] MapUnitUseActiveSkillEvent::MapUnitUseActiveSkillEvent() =
  default;
[[gnu::used]] MapUnitPickupEvent::MapUnitPickupEvent() = default;
[[gnu::used]] MapUnitPickupSilentEvent::MapUnitPickupSilentEvent() = default;
[[gnu::used]] MapUnitCommandBeforeEvent::MapUnitCommandBeforeEvent() = default;
[[gnu::used]] MapMindCompleteEvent::MapMindCompleteEvent() = default;
[[gnu::used]] MapPhaseEventBase::MapPhaseEventBase() = default;
[[gnu::used]] MapPhaseBeforeEvent::MapPhaseBeforeEvent() = default;
[[gnu::used]] MapPhaseAfterEvent::MapPhaseAfterEvent() = default;
[[gnu::used]] MapPhaseEndEvent::MapPhaseEndEvent() = default;
[[gnu::used]] MapBattleEventBase::MapBattleEventBase() = default;
[[gnu::used]] MapBattleBeforeEvent::MapBattleBeforeEvent() = default;
[[gnu::used]] MapBattleAfterEvent::MapBattleAfterEvent() = default;
[[gnu::used]] MapBattleCompleteEvent::MapBattleCompleteEvent() = default;
[[gnu::used]] MapBattleTalkEvent::MapBattleTalkEvent() = default;
[[gnu::used]] MapContactEventBase::MapContactEventBase() = default;
[[gnu::used]] MapContactTalkEvent::MapContactTalkEvent() = default;
[[gnu::used]] MapAccessEventBase::MapAccessEventBase() = default;
[[gnu::used]] MapAccessTrickEventBase::MapAccessTrickEventBase() = default;
[[gnu::used]] MapAccessDestroyEventBase::MapAccessDestroyEventBase() = default;
[[gnu::used]] MapAccessNotTrickEventBase::MapAccessNotTrickEventBase() =
  default;
[[gnu::used]] MapDoorEvent::MapDoorEvent() = default;
[[gnu::used]] MapTreasureboxEvent::MapTreasureboxEvent() = default;
[[gnu::used]] MapGimmickEvent::MapGimmickEvent() = default;
[[gnu::used]] MapDestroyEvent::MapDestroyEvent() = default;
[[gnu::used]] MapBreakdownEvent::MapBreakdownEvent() = default;
[[gnu::used]] MapEscapeBeforeEvent::MapEscapeBeforeEvent() = default;
[[gnu::used]] MapEscapeAfterEvent::MapEscapeAfterEvent() = default;
[[gnu::used]] MapWarpCommandAfterEvent::MapWarpCommandAfterEvent() = default;

#pragma GCC visibility pop

}
