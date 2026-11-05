#include "game/proc/proc_inst.hpp"
#include "game/singleton.hpp"

namespace game {

// These classes only need their singleton base here, so empty classes are
// enough to instantiate it through the creation path.
#define GAME_SINGLETON(T) \
  class T : public Singleton<T> {};
#define GAME_PROC_SINGLETON(T) \
  class T : public ProcInst, public Singleton<T> {};

GAME_SINGLETON(AI)
GAME_SINGLETON(AIEntrustImage)
GAME_SINGLETON(AIHistory)
GAME_SINGLETON(AIRageImage)
GAME_SINGLETON(AIUnitArea)
GAME_SINGLETON(AIValueFlags)
GAME_SINGLETON(AIValuePosLists)
GAME_SINGLETON(AIWorkImage)
GAME_SINGLETON(GameCalendar)
GAME_SINGLETON(GameGlobalData)
GAME_SINGLETON(GameGmapData)
GAME_SINGLETON(GameHubData)
GAME_SINGLETON(GameRecommendData)
GAME_SINGLETON(GameRestartData)
GAME_SINGLETON(GameSaveData)
GAME_SINGLETON(GameSchedule)
GAME_SINGLETON(GameSideStoryData)
GAME_SINGLETON(GameSubquestData)
GAME_SINGLETON(GameUserData)
GAME_SINGLETON(HubDisposFileLoader)
GAME_SINGLETON(KnownManager)
GAME_SINGLETON(MapTerrainFile)
GAME_SINGLETON(RelianceCheck)

namespace character {

GAME_SINGLETON(CharacterAssetCache)
GAME_SINGLETON(CharacterTrailResources)

}

namespace cmdbtl {

GAME_SINGLETON(AutoPlay)
GAME_SINGLETON(BattleFake)
GAME_SINGLETON(CmdBtlDebug)
GAME_SINGLETON(CmdBtlDispos)
GAME_SINGLETON(CmdBtlEventManager)
GAME_SINGLETON(CmdBtlGrow)
GAME_SINGLETON(CmdBtlInput)
GAME_SINGLETON(CmdBtlScript)
GAME_SINGLETON(CmdBtlSituation)
GAME_SINGLETON(CmdBtlSkipInput)
GAME_SINGLETON(CmdBtlSkipWrapper)
GAME_SINGLETON(CmdBtlWindow)
GAME_SINGLETON(Effect)
GAME_SINGLETON(Field)
GAME_SINGLETON(Manager)
GAME_SINGLETON(Sound)

}

namespace combat {

GAME_SINGLETON(CinematicZoom)
GAME_SINGLETON(CombatConfig)
GAME_SINGLETON(CombatSettings)
GAME_SINGLETON(CombatUniverse)
GAME_SINGLETON(JostleManager)
GAME_SINGLETON(MagicCatalog)
GAME_SINGLETON(PhotoSpots)

}

namespace evt {

namespace demo {

namespace Cmd {

GAME_SINGLETON(Manager)

}

}

}

namespace facility {

GAME_SINGLETON(BanquetSceneDiff)
GAME_SINGLETON(DiningSceneDiff)
GAME_SINGLETON(Mind)
GAME_SINGLETON(PerchSceneDiff)
GAME_SINGLETON(SceneManager)
GAME_SINGLETON(SceneTalkFuncCaller)
GAME_SINGLETON(SceneTimerManager)
GAME_SINGLETON(ShowmanSceneDiff)
GAME_SINGLETON(SkillReinforceSceneDiff)
GAME_SINGLETON(StableSceneDiff)
GAME_SINGLETON(TheaterActFuncCaller)
GAME_SINGLETON(TheaterSceneDiff)
GAME_SINGLETON(TrainingSceneDiff)
GAME_SINGLETON(VolunteerSceneDiff)

namespace SceneEffectManager {

GAME_SINGLETON(Impl)

}

namespace SceneSoundManager {

GAME_SINGLETON(Impl)

}

}

namespace gameui {

GAME_SINGLETON(Cursor)
GAME_SINGLETON(FloatingHelp)
GAME_SINGLETON(MouseCursor)
GAME_SINGLETON(SavingIcon)

}

namespace gmap {

GAME_SINGLETON(BladeResonance)
GAME_SINGLETON(Camera)
GAME_SINGLETON(Cursor)
GAME_SINGLETON(GmapArgManager)
GAME_SINGLETON(GmapDrawer)
GAME_SINGLETON(GmapDrawerSettings)
GAME_SINGLETON(GmapHadesLoader)
GAME_SINGLETON(GmapSituation)
GAME_SINGLETON(GmapSound)
GAME_SINGLETON(GmapSpotNameManager)
GAME_SINGLETON(GmapSpotPin)
GAME_SINGLETON(GmapUI)
GAME_SINGLETON(MiasmaManager)
GAME_SINGLETON(SpotMgr)
GAME_SINGLETON(TroopMgr)

}

namespace graphics {

GAME_SINGLETON(GameObserveInstant)
GAME_SINGLETON(ObjectTransparent)

}

namespace hub {

GAME_SINGLETON(AreaBarrier)
GAME_SINGLETON(AreaGaya)
GAME_SINGLETON(ArrangementChara)
GAME_SINGLETON(BgmManager)
GAME_SINGLETON(CameraManager)
GAME_SINGLETON(CharacterManager)
GAME_SINGLETON(CharacterSituation)
GAME_SINGLETON(Destination)
GAME_SINGLETON(DropItemCalculatorDng)
GAME_SINGLETON(DropItemCalculatorHub)
GAME_SINGLETON(Effect)
GAME_SINGLETON(EventManager)
GAME_SINGLETON(FacilitySupport)
GAME_SINGLETON(FastTravelManager)
GAME_SINGLETON(GlobalMapData)
GAME_SINGLETON(HubCharacterDisposManager)
GAME_SINGLETON(HubDebug)
GAME_SINGLETON(HubSeqAreaChange)
GAME_SINGLETON(HubSeqEncounter)
GAME_SINGLETON(HubSeqEnter)
GAME_SINGLETON(HubSeqExit)
GAME_SINGLETON(HubSeqObelisk)
GAME_SINGLETON(Input)
GAME_SINGLETON(ItemSupport)
GAME_SINGLETON(LocatorDispos)
GAME_SINGLETON(Manager)
GAME_SINGLETON(MapDivision)
GAME_SINGLETON(MapManager)
GAME_SINGLETON(ObeliskSupport)
GAME_SINGLETON(ObjectManager)
GAME_SINGLETON(PathManager)
GAME_SINGLETON(PlayStartPos)
GAME_SINGLETON(QuestSupport)
GAME_SINGLETON(ReadWrite)
GAME_SINGLETON(ScheduleManager)
GAME_SINGLETON(Sound)
GAME_SINGLETON(TalkSupport)
GAME_SINGLETON(Time)
GAME_SINGLETON(TimelineEventManager)
GAME_SINGLETON(UIManager)

}

namespace map {

GAME_SINGLETON(Action)
GAME_SINGLETON(Actor)
GAME_SINGLETON(Camera)
GAME_SINGLETON(Cursor)
GAME_SINGLETON(CursorDrawInfo)
GAME_SINGLETON(Height)
GAME_SINGLETON(Image)
GAME_SINGLETON(MapBattleHUD)
GAME_SINGLETON(MapColorPalette)
GAME_SINGLETON(MapDrawDebug)
GAME_SINGLETON(MapDrawManager)
GAME_SINGLETON(MapEventManager)
GAME_SINGLETON(MapInfo)
GAME_SINGLETON(MapMiniMap)
GAME_SINGLETON(MapObjectManager)
GAME_SINGLETON(MapOnMapInfo)
GAME_SINGLETON(MapScoreInfo)
GAME_SINGLETON(MapScript)
GAME_SINGLETON(MapSkillInfo)
GAME_SINGLETON(MapTerrainInfo)
GAME_SINGLETON(MapUnitInfo)
GAME_SINGLETON(Mind)
GAME_SINGLETON(PrimitiveDrawStack)
GAME_SINGLETON(Route)
GAME_SINGLETON(Situation)
GAME_SINGLETON(Target)
GAME_SINGLETON(Transition)
GAME_SINGLETON(Transparent)
GAME_SINGLETON(Trick)
GAME_SINGLETON(Zoom)

namespace history {

GAME_SINGLETON(Impl)

}

}

namespace playreport {

GAME_SINGLETON(Manager)

}

namespace spine {

GAME_PROC_SINGLETON(SpineFace)

}

namespace talk {

GAME_SINGLETON(Log)

}

namespace zview {

GAME_SINGLETON(ActionManager)
GAME_SINGLETON(Camera)
GAME_SINGLETON(CharacterManager)
GAME_SINGLETON(Collision)
GAME_SINGLETON(Cursor)
GAME_SINGLETON(Debug)
GAME_SINGLETON(HitboxManager)
GAME_SINGLETON(Input)
GAME_SINGLETON(Manager)
GAME_SINGLETON(RouteManager)
GAME_SINGLETON(Sound)
GAME_SINGLETON(Time)

}

#undef GAME_PROC_SINGLETON
#undef GAME_SINGLETON

// Nothing reads the registered word of these singletons, so link time
// optimization dropped its store from their destructors.
#define GAME_SINGLETON_UNREAD(T) \
  template<> \
  Singleton<T>::~Singleton() { \
    if (instance_ == this) { \
      instance_ = nullptr; \
    } \
  }

GAME_SINGLETON_UNREAD(GameRestartData)
GAME_SINGLETON_UNREAD(GameSaveData)
GAME_SINGLETON_UNREAD(cmdbtl::Manager)
GAME_SINGLETON_UNREAD(hub::CharacterManager)
GAME_SINGLETON_UNREAD(hub::HubSeqAreaChange)
GAME_SINGLETON_UNREAD(hub::HubSeqEncounter)
GAME_SINGLETON_UNREAD(hub::HubSeqEnter)
GAME_SINGLETON_UNREAD(hub::HubSeqExit)
GAME_SINGLETON_UNREAD(hub::HubSeqObelisk)
GAME_SINGLETON_UNREAD(map::MapDrawManager)
GAME_SINGLETON_UNREAD(map::MapOnMapInfo)
GAME_SINGLETON_UNREAD(map::Route)
GAME_SINGLETON_UNREAD(map::history::Impl)
GAME_SINGLETON_UNREAD(zview::Camera)
GAME_SINGLETON_UNREAD(zview::RouteManager)

#undef GAME_SINGLETON_UNREAD

#define GAME_SINGLETON_CREATE(T) \
  template T* Singleton<T>::Create();

GAME_SINGLETON_CREATE(AI)
GAME_SINGLETON_CREATE(AIEntrustImage)
GAME_SINGLETON_CREATE(AIHistory)
GAME_SINGLETON_CREATE(AIRageImage)
GAME_SINGLETON_CREATE(AIUnitArea)
GAME_SINGLETON_CREATE(AIValueFlags)
GAME_SINGLETON_CREATE(AIValuePosLists)
GAME_SINGLETON_CREATE(AIWorkImage)
GAME_SINGLETON_CREATE(GameCalendar)
GAME_SINGLETON_CREATE(GameGlobalData)
GAME_SINGLETON_CREATE(GameGmapData)
GAME_SINGLETON_CREATE(GameHubData)
GAME_SINGLETON_CREATE(GameRecommendData)
GAME_SINGLETON_CREATE(GameRestartData)
GAME_SINGLETON_CREATE(GameSaveData)
GAME_SINGLETON_CREATE(GameSchedule)
GAME_SINGLETON_CREATE(GameSideStoryData)
GAME_SINGLETON_CREATE(GameSubquestData)
GAME_SINGLETON_CREATE(GameUserData)
GAME_SINGLETON_CREATE(HubDisposFileLoader)
GAME_SINGLETON_CREATE(KnownManager)
GAME_SINGLETON_CREATE(MapTerrainFile)
GAME_SINGLETON_CREATE(RelianceCheck)
GAME_SINGLETON_CREATE(character::CharacterAssetCache)
GAME_SINGLETON_CREATE(character::CharacterTrailResources)
GAME_SINGLETON_CREATE(cmdbtl::AutoPlay)
GAME_SINGLETON_CREATE(cmdbtl::BattleFake)
GAME_SINGLETON_CREATE(cmdbtl::CmdBtlDebug)
GAME_SINGLETON_CREATE(cmdbtl::CmdBtlDispos)
GAME_SINGLETON_CREATE(cmdbtl::CmdBtlEventManager)
GAME_SINGLETON_CREATE(cmdbtl::CmdBtlGrow)
GAME_SINGLETON_CREATE(cmdbtl::CmdBtlInput)
GAME_SINGLETON_CREATE(cmdbtl::CmdBtlScript)
GAME_SINGLETON_CREATE(cmdbtl::CmdBtlSituation)
GAME_SINGLETON_CREATE(cmdbtl::CmdBtlSkipInput)
GAME_SINGLETON_CREATE(cmdbtl::CmdBtlSkipWrapper)
GAME_SINGLETON_CREATE(cmdbtl::CmdBtlWindow)
GAME_SINGLETON_CREATE(cmdbtl::Effect)
GAME_SINGLETON_CREATE(cmdbtl::Field)
GAME_SINGLETON_CREATE(cmdbtl::Manager)
GAME_SINGLETON_CREATE(cmdbtl::Sound)
GAME_SINGLETON_CREATE(combat::CinematicZoom)
GAME_SINGLETON_CREATE(combat::CombatConfig)
GAME_SINGLETON_CREATE(combat::CombatSettings)
GAME_SINGLETON_CREATE(combat::CombatUniverse)
GAME_SINGLETON_CREATE(combat::JostleManager)
GAME_SINGLETON_CREATE(combat::MagicCatalog)
GAME_SINGLETON_CREATE(combat::PhotoSpots)
GAME_SINGLETON_CREATE(evt::demo::Cmd::Manager)
GAME_SINGLETON_CREATE(facility::BanquetSceneDiff)
GAME_SINGLETON_CREATE(facility::DiningSceneDiff)
GAME_SINGLETON_CREATE(facility::Mind)
GAME_SINGLETON_CREATE(facility::PerchSceneDiff)
GAME_SINGLETON_CREATE(facility::SceneEffectManager::Impl)
GAME_SINGLETON_CREATE(facility::SceneManager)
GAME_SINGLETON_CREATE(facility::SceneSoundManager::Impl)
GAME_SINGLETON_CREATE(facility::SceneTalkFuncCaller)
GAME_SINGLETON_CREATE(facility::SceneTimerManager)
GAME_SINGLETON_CREATE(facility::ShowmanSceneDiff)
GAME_SINGLETON_CREATE(facility::SkillReinforceSceneDiff)
GAME_SINGLETON_CREATE(facility::StableSceneDiff)
GAME_SINGLETON_CREATE(facility::TheaterActFuncCaller)
GAME_SINGLETON_CREATE(facility::TheaterSceneDiff)
GAME_SINGLETON_CREATE(facility::TrainingSceneDiff)
GAME_SINGLETON_CREATE(facility::VolunteerSceneDiff)
GAME_SINGLETON_CREATE(gameui::Cursor)
GAME_SINGLETON_CREATE(gameui::FloatingHelp)
GAME_SINGLETON_CREATE(gameui::MouseCursor)
GAME_SINGLETON_CREATE(gameui::SavingIcon)
GAME_SINGLETON_CREATE(gmap::BladeResonance)
GAME_SINGLETON_CREATE(gmap::Camera)
GAME_SINGLETON_CREATE(gmap::Cursor)
GAME_SINGLETON_CREATE(gmap::GmapArgManager)
GAME_SINGLETON_CREATE(gmap::GmapDrawer)
GAME_SINGLETON_CREATE(gmap::GmapDrawerSettings)
GAME_SINGLETON_CREATE(gmap::GmapHadesLoader)
GAME_SINGLETON_CREATE(gmap::GmapSituation)
GAME_SINGLETON_CREATE(gmap::GmapSound)
GAME_SINGLETON_CREATE(gmap::GmapSpotNameManager)
GAME_SINGLETON_CREATE(gmap::GmapSpotPin)
GAME_SINGLETON_CREATE(gmap::GmapUI)
GAME_SINGLETON_CREATE(gmap::MiasmaManager)
GAME_SINGLETON_CREATE(gmap::SpotMgr)
GAME_SINGLETON_CREATE(gmap::TroopMgr)
GAME_SINGLETON_CREATE(graphics::GameObserveInstant)
GAME_SINGLETON_CREATE(graphics::ObjectTransparent)
GAME_SINGLETON_CREATE(hub::AreaBarrier)
GAME_SINGLETON_CREATE(hub::AreaGaya)
GAME_SINGLETON_CREATE(hub::ArrangementChara)
GAME_SINGLETON_CREATE(hub::BgmManager)
GAME_SINGLETON_CREATE(hub::CameraManager)
GAME_SINGLETON_CREATE(hub::CharacterManager)
GAME_SINGLETON_CREATE(hub::CharacterSituation)
GAME_SINGLETON_CREATE(hub::Destination)
GAME_SINGLETON_CREATE(hub::DropItemCalculatorDng)
GAME_SINGLETON_CREATE(hub::DropItemCalculatorHub)
GAME_SINGLETON_CREATE(hub::Effect)
GAME_SINGLETON_CREATE(hub::EventManager)
GAME_SINGLETON_CREATE(hub::FacilitySupport)
GAME_SINGLETON_CREATE(hub::FastTravelManager)
GAME_SINGLETON_CREATE(hub::GlobalMapData)
GAME_SINGLETON_CREATE(hub::HubCharacterDisposManager)
GAME_SINGLETON_CREATE(hub::HubDebug)
GAME_SINGLETON_CREATE(hub::HubSeqAreaChange)
GAME_SINGLETON_CREATE(hub::HubSeqEncounter)
GAME_SINGLETON_CREATE(hub::HubSeqEnter)
GAME_SINGLETON_CREATE(hub::HubSeqExit)
GAME_SINGLETON_CREATE(hub::HubSeqObelisk)
GAME_SINGLETON_CREATE(hub::Input)
GAME_SINGLETON_CREATE(hub::ItemSupport)
GAME_SINGLETON_CREATE(hub::LocatorDispos)
GAME_SINGLETON_CREATE(hub::Manager)
GAME_SINGLETON_CREATE(hub::MapDivision)
GAME_SINGLETON_CREATE(hub::MapManager)
GAME_SINGLETON_CREATE(hub::ObeliskSupport)
GAME_SINGLETON_CREATE(hub::ObjectManager)
GAME_SINGLETON_CREATE(hub::PathManager)
GAME_SINGLETON_CREATE(hub::PlayStartPos)
GAME_SINGLETON_CREATE(hub::QuestSupport)
GAME_SINGLETON_CREATE(hub::ReadWrite)
GAME_SINGLETON_CREATE(hub::ScheduleManager)
GAME_SINGLETON_CREATE(hub::Sound)
GAME_SINGLETON_CREATE(hub::TalkSupport)
GAME_SINGLETON_CREATE(hub::Time)
GAME_SINGLETON_CREATE(hub::TimelineEventManager)
GAME_SINGLETON_CREATE(hub::UIManager)
GAME_SINGLETON_CREATE(map::Action)
GAME_SINGLETON_CREATE(map::Actor)
GAME_SINGLETON_CREATE(map::Camera)
GAME_SINGLETON_CREATE(map::Cursor)
GAME_SINGLETON_CREATE(map::CursorDrawInfo)
GAME_SINGLETON_CREATE(map::Height)
GAME_SINGLETON_CREATE(map::Image)
GAME_SINGLETON_CREATE(map::MapBattleHUD)
GAME_SINGLETON_CREATE(map::MapColorPalette)
GAME_SINGLETON_CREATE(map::MapDrawDebug)
GAME_SINGLETON_CREATE(map::MapDrawManager)
GAME_SINGLETON_CREATE(map::MapEventManager)
GAME_SINGLETON_CREATE(map::MapInfo)
GAME_SINGLETON_CREATE(map::MapMiniMap)
GAME_SINGLETON_CREATE(map::MapObjectManager)
GAME_SINGLETON_CREATE(map::MapOnMapInfo)
GAME_SINGLETON_CREATE(map::MapScoreInfo)
GAME_SINGLETON_CREATE(map::MapScript)
GAME_SINGLETON_CREATE(map::MapSkillInfo)
GAME_SINGLETON_CREATE(map::MapTerrainInfo)
GAME_SINGLETON_CREATE(map::MapUnitInfo)
GAME_SINGLETON_CREATE(map::Mind)
GAME_SINGLETON_CREATE(map::PrimitiveDrawStack)
GAME_SINGLETON_CREATE(map::Route)
GAME_SINGLETON_CREATE(map::Situation)
GAME_SINGLETON_CREATE(map::Target)
GAME_SINGLETON_CREATE(map::Transition)
GAME_SINGLETON_CREATE(map::Transparent)
GAME_SINGLETON_CREATE(map::Trick)
GAME_SINGLETON_CREATE(map::Zoom)
GAME_SINGLETON_CREATE(map::history::Impl)
GAME_SINGLETON_CREATE(playreport::Manager)
GAME_SINGLETON_CREATE(spine::SpineFace)
GAME_SINGLETON_CREATE(talk::Log)
GAME_SINGLETON_CREATE(zview::ActionManager)
GAME_SINGLETON_CREATE(zview::Camera)
GAME_SINGLETON_CREATE(zview::CharacterManager)
GAME_SINGLETON_CREATE(zview::Collision)
GAME_SINGLETON_CREATE(zview::Cursor)
GAME_SINGLETON_CREATE(zview::Debug)
GAME_SINGLETON_CREATE(zview::HitboxManager)
GAME_SINGLETON_CREATE(zview::Input)
GAME_SINGLETON_CREATE(zview::Manager)
GAME_SINGLETON_CREATE(zview::RouteManager)
GAME_SINGLETON_CREATE(zview::Sound)
GAME_SINGLETON_CREATE(zview::Time)

#undef GAME_SINGLETON_CREATE

}
