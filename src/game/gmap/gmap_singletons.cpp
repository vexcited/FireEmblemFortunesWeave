#include "game/gmap/blade_resonance.hpp"
#include "game/gmap/gmap_drawer.hpp"
#include "game/gmap/gmap_drawer_settings.hpp"
#include "game/gmap/gmap_hades_loader.hpp"
#include "game/gmap/gmap_sound.hpp"
#include "game/gmap/gmap_spot_pin.hpp"
#include "game/gmap/miasma_manager.hpp"
#include "game/gmap/spot_mgr.hpp"
#include "game/gmap/troop_mgr.hpp"

namespace game::gmap {

GmapDrawer::~GmapDrawer() = default;

SpotMgr::~SpotMgr() = default;

TroopMgr::~TroopMgr() = default;

MiasmaManager::~MiasmaManager() = default;

BladeResonance::~BladeResonance() = default;

GmapHadesLoader::~GmapHadesLoader() = default;

GmapSpotPin::~GmapSpotPin() = default;

GmapDrawerSettings::~GmapDrawerSettings() = default;

GmapSound::~GmapSound() {
  delete bgm_;
}

}
