#include "game/hub/area_barrier.hpp"
#include "game/hub/area_gaya.hpp"
#include "game/hub/bgm_manager.hpp"
#include "game/hub/drop_item_calculator.hpp"
#include "game/hub/facility_support.hpp"
#include "game/hub/fast_travel_manager.hpp"
#include "game/hub/hub_character_dispos_manager.hpp"
#include "game/hub/hub_debug.hpp"
#include "game/hub/input.hpp"
#include "game/hub/item_support.hpp"
#include "game/hub/obelisk_support.hpp"
#include "game/hub/path_manager.hpp"
#include "game/hub/quest_support.hpp"
#include "game/hub/read_write.hpp"
#include "game/hub/timeline_event_manager.hpp"

namespace game::hub {

QuestSupport::~QuestSupport() = default;

HubDebug::~HubDebug() = default;

Input::~Input() = default;

ReadWrite::~ReadWrite() = default;

TimelineEventManager::~TimelineEventManager() = default;

FacilitySupport::~FacilitySupport() = default;

ItemSupport::~ItemSupport() = default;

ObeliskSupport::~ObeliskSupport() = default;

AreaBarrier::~AreaBarrier() = default;

BgmManager::~BgmManager() {
  if (!stopped_) {
    Stop();
  }
}

HubCharacterDisposManager::~HubCharacterDisposManager() = default;

FastTravelManager::~FastTravelManager() = default;

AreaGaya::~AreaGaya() {
  gayas_.clear();
}

PathManager::~PathManager() {
  current_.reset();
}

DropItemCalculatorDng::~DropItemCalculatorDng() = default;

}
