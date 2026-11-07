#include <cstdint>
#include <functional>
#include <list>
#include <map>
#include <memory>
#include <optional>
#include <string>
#include <string_view>
#include <vector>

#include "game/data/data_file.hpp"
#include "game/game_mode_data.hpp"
#include "game/map/binder.hpp"
#include "nn/os/mutex.hpp"
#include "game/proc/proc_inst.hpp"
#include "game/singleton.hpp"
#include "game/variable_manager.hpp"
#include "game/zview/area_barrier_base.hpp"
#include "hub/lifecycle.hpp"

namespace game {

// These classes only need their singleton base here, so empty classes are
// enough to instantiate it through the creation path.
#define GAME_SINGLETON(T) \
  class T : public Singleton<T> {};

GAME_SINGLETON(AI)
class AIEntrustImage : public Singleton<AIEntrustImage> {
private:
  uint8_t unknown_08_[0x18];
  std::vector<uint32_t> unknown_20_;
  uint8_t unknown_38_[0xa20];
  std::vector<uint32_t> unknown_a58_;
};

GAME_SINGLETON(AIHistory)
GAME_SINGLETON(AIRageImage)
GAME_SINGLETON(AIUnitArea)
class AIValueFlags final : public Singleton<AIValueFlags> {
private:
  std::vector<uint32_t> flags_;
};

GAME_SINGLETON(AIValuePosLists)
GAME_SINGLETON(AIWorkImage)
GAME_SINGLETON(GameCalendar)
class GameGlobalData : public Singleton<GameGlobalData> {
public:
  ~GameGlobalData() override {
    if (unknown_ != nullptr) {
      delete unknown_;
      unknown_ = nullptr;
    }
  }

private:
  struct Data {
    uint8_t unknown_00_[0x10];
  };

  static Data* unknown_;
};

GameGlobalData::Data* GameGlobalData::unknown_ = nullptr;

GAME_SINGLETON(GameGmapData)
GAME_SINGLETON(GameHubData)
GAME_SINGLETON(GameRecommendData)

// Deleted through the virtual destructor in its first slot.
class OwnedObject {
public:
  virtual ~OwnedObject();
};

class GameRestartData : public Singleton<GameRestartData> {
public:
  ~GameRestartData() override {
    if (unknown_ != nullptr) {
      delete unknown_;
      unknown_ = nullptr;
    }
  }

private:
  static OwnedObject* unknown_;
};

OwnedObject* GameRestartData::unknown_ = nullptr;

GAME_SINGLETON(GameSaveData)
class GameSchedule : public Singleton<GameSchedule>, public Binder {
public:
  ~GameSchedule() override {
    if (unknown_ != nullptr) {
      delete unknown_;
      unknown_ = nullptr;
    }
  }

private:
  static OwnedObject* unknown_;
};

OwnedObject* GameSchedule::unknown_ = nullptr;

GAME_SINGLETON(GameSideStoryData)
GAME_SINGLETON(GameSubquestData)

class GameUserConst {};

class GameUserData : public Singleton<GameUserData>, public GameUserConst {
public:
  ~GameUserData() override {
    if (unknown_ != nullptr) {
      delete unknown_;
      unknown_ = nullptr;
    }
  }

private:
  static OwnedObject* unknown_;
};

OwnedObject* GameUserData::unknown_ = nullptr;

class HubDisposFileLoader : public Singleton<HubDisposFileLoader> {
public:
  ~HubDisposFileLoader() override {
    for (auto& [name, disposition] : dispositions_) {
      fw::hub::ResetDisposition(disposition.get());
    }

    dispositions_.clear();
  }

private:
  std::map<std::string, std::shared_ptr<fw::hub::Disposition>> dispositions_;
};

GAME_SINGLETON(KnownManager)
class MapTerrainFile : public Singleton<MapTerrainFile> {
public:
  ~MapTerrainFile() override { Unload(); }

private:
  void Unload();
};

class RelianceCheck : public Singleton<RelianceCheck> {
public:
  ~RelianceCheck() override {
    if (unknown_ != nullptr) {
      delete unknown_;
      unknown_ = nullptr;
    }
  }

private:
  static std::vector<uint32_t>* unknown_;
};

std::vector<uint32_t>* RelianceCheck::unknown_ = nullptr;

namespace character {

class CharacterAssetCache : public Singleton<CharacterAssetCache> {
private:
  // The cached assets, their container type is not recovered.
  class Entries {
  public:
    ~Entries();
  };

  Entries entries_;
};

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
class CmdBtlSituation : public Singleton<CmdBtlSituation> {
public:
  ~CmdBtlSituation() override {
    VariableManager::SetFlag(
      GetSystemVariable(SystemVariable::kForceMount), 0
    );
  }

private:
  uint8_t unknown_08_[0x20];
  std::vector<uint32_t> unknown_28_;
};
class CmdBtlSkipInput : public Singleton<CmdBtlSkipInput> {
public:
  ~CmdBtlSkipInput() override { Release(); }

private:
  void Release();
};

GAME_SINGLETON(CmdBtlSkipWrapper)
GAME_SINGLETON(CmdBtlWindow)
GAME_SINGLETON(Effect)
GAME_SINGLETON(Field)
GAME_SINGLETON(Manager)
GAME_SINGLETON(Sound)

}

namespace combat {

GAME_SINGLETON(CinematicZoom)
class CombatConfig final : public Singleton<CombatConfig> {
private:
  uint8_t unknown_08_[0x30];
  std::string unknown_38_;
};

class CombatSettings : public Singleton<CombatSettings> {
private:
  // The owned capture, its type is not recovered.
  class Capture {
  public:
    ~Capture() {
      if (active_ == true) {
        Stop();
      }
    }

  private:
    class Handle {
    public:
      virtual void Unknown00();
      virtual void Unknown01();
      virtual void Unknown02();
      virtual void Unknown03();
      virtual void Unknown04();
      virtual void Destroy();
    };

    struct HandleDeleter {
      void operator()(Handle* handle) const {
        handle->Destroy();
      }
    };

    void Stop();

    uint64_t unknown_00_;
    std::unique_ptr<Handle, HandleDeleter> handle_;
    std::function<void()> callback_;
    uint8_t unknown_40_;
    bool active_;
  };

  uint8_t unknown_08_[0x2a8];
  std::unique_ptr<Capture> capture_;
};

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

class Impl : public Singleton<Impl> {
public:
  ~Impl() override {
    Clear(0);
    Clear(1);
  }

private:
  // The effects, their container type is not recovered.
  class Effects {
  public:
    ~Effects();
  };

  void Clear(int layer);

  Effects effects_;
};

}

namespace SceneSoundManager {

class Impl : public Singleton<Impl> {
public:
  ~Impl() override {
    Stop(0);
    Stop(1);
  }

private:
  void Stop(int channel);

  std::vector<uint32_t> unknown_08_;
  std::vector<uint32_t> unknown_20_;
};

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
class GmapSpotNameManager final : public Singleton<GmapSpotNameManager> {
private:
  // The spot names, their container type is not recovered.
  class Names {
  public:
    ~Names();
  };

  std::shared_ptr<void> unknown_08_;
  Names names_;
};

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
class HubSeqEncounter : public Singleton<HubSeqEncounter> {
private:
  struct Entries {
    std::vector<uint32_t> list;
    uint8_t unknown_18_[0x10];
  };

  uint8_t unknown_08_[0x10];
  std::optional<Entries> unknown_18_;
  uint64_t unknown_48_;
  std::string unknown_50_;
};

GAME_SINGLETON(HubSeqEnter)
class HubSeqExit : public Singleton<HubSeqExit> {
private:
  uint8_t unknown_08_[0x20];
  std::string unknown_28_;
  uint8_t unknown_40_[0x18];
  std::string unknown_58_;
};

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
class PlayStartPos : public Singleton<PlayStartPos> {
public:
  ~PlayStartPos() override { Clear(); }

private:
  void Clear();

  std::weak_ptr<void> unknown_08_;
};

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
class Actor : public Singleton<Actor> {
public:
  ~Actor() override {
    if (unknown_08_ != nullptr) {
      unknown_08_->Release();
      unknown_08_ = nullptr;
    }
  }

private:
  class Instance {
  public:
    virtual void Unknown00();
    virtual void Unknown01();
    virtual void Unknown02();
    virtual void Release();
  };

  Instance* unknown_08_;
};

GAME_SINGLETON(Camera)
GAME_SINGLETON(Cursor)

class MapDrawConst {};

// Addressed directly, its destructor stores its own vtable.
#pragma GCC visibility push(hidden)

class CursorDrawInfo : public Singleton<CursorDrawInfo>, public MapDrawConst {
private:
  uint8_t unknown_08_[0x50];
  std::vector<uint32_t> unknown_58_;
  uint8_t unknown_70_[0x30];
  zview::AreaBarrierBase barrier_;
};

#pragma GCC visibility pop

GAME_SINGLETON(Height)
GAME_SINGLETON(Image)
GAME_SINGLETON(MapBattleHUD)
class MapColorPalette : public Singleton<MapColorPalette> {
public:
  ~MapColorPalette() override {
    if (resource_ != nullptr) {
      resource_->GetManager()->Release(resource_);
      resource_ = nullptr;
    }

    g_texture_archives->Release("UI/Bmap/bmap_textures.bntx");
    g_texture_archives->Release("UI/Common/common_textures.bntx");
  }

private:
  class TextureArchives {
  public:
    void Release(std::string_view path);
  };

  static TextureArchives* g_texture_archives;

  Resource* resource_;
};

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

namespace {

class MapTransition {
public:
  virtual ~MapTransition() = default;

private:
  std::map<uint32_t, uint32_t> unknown_08_;
};

}

class Transition : public Singleton<Transition> {
public:
  ~Transition() override {
    if (transition_ != nullptr) {
      // The final link devirtualized this delete, while the transition
      // destructor still stores its own vtable.
      transition_->MapTransition::~MapTransition();
      operator delete(transition_);
      transition_ = nullptr;
    }
  }

private:
  MapTransition* transition_;
};

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

// Releases its resources once the frame that used them is done.
class ResourceReleaser {
public:
  void Release(std::shared_ptr<void> resource);
};

[[gnu::visibility("hidden")]] extern ResourceReleaser* g_resource_releaser;

class SpineFace : public ProcInst, public Singleton<SpineFace> {
public:
  ~SpineFace() override {
    if (resource_ != nullptr) {
      g_resource_releaser->Release(resource_);
      resource_ = nullptr;
    }
  }

private:
  uint64_t unknown_a0_;
  std::shared_ptr<void> resource_;
};

}

namespace talk {

class Log : public Singleton<Log> {
public:
  ~Log() override { Clear(); }

private:
  void Clear();

  uint64_t unknown_08_;
  std::list<uint64_t> entries_;
};

}

namespace zview {

GAME_SINGLETON(ActionManager)
GAME_SINGLETON(Camera)
GAME_SINGLETON(CharacterManager)
class Collision : public Singleton<Collision> {
private:
  struct Shape {
    uint8_t unknown_00_[0x10];
  };

  std::vector<std::unique_ptr<Shape>> shapes_;
};

class Cursor : public Singleton<Cursor> {
private:
  class Model {
  public:
    virtual ~Model();
  };

  std::unique_ptr<Model> model_;
};

GAME_SINGLETON(Debug)
class HitboxManager : public Singleton<HitboxManager> {
private:
  uint64_t unknown_08_;
  std::vector<uint32_t> unknown_10_;
  uint64_t unknown_28_;
  nn::os::Mutex mutex_{false};
};

GAME_SINGLETON(Input)
GAME_SINGLETON(Manager)
GAME_SINGLETON(RouteManager)
GAME_SINGLETON(Sound)
GAME_SINGLETON(Time)

}

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
