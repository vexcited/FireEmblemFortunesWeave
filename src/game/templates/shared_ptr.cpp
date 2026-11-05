#include <functional>
#include <memory>

#pragma GCC visibility push(hidden)
#include "ui/layout_accessor.hpp"
#pragma GCC visibility pop

// Placeholders named after the RTTI strings of the shared pointer control
// blocks. The control block code never touches the managed object, so
// their layout is unused.

namespace fs {

class File;

}

namespace util {

template <class T>
class PtrHolder;

}

namespace wld {

class Object;

}

namespace game::character {

class CharacterBuilder;

}

namespace {

struct GrassSetting {};

}

namespace eft {

struct EbbSetting {};

}

namespace g3d {

struct Shape {};

}

namespace game {

namespace {

struct ProcAfterEpisodeSeq {
  struct EpisodeData {};
};
struct ProcStaffRollSeq {
  struct MemorialImage {};
};
struct ProcWarRecordSeq {
  struct RecordData {};
};

}

namespace character {

struct CharacterAppearance {};
struct SignalCallback {};

}

namespace cmdbtl {

struct UnitMapData {};

}

namespace combat {

struct CameraModifier {};
struct CombatLegionGroup {
  struct Platoon {};
};
struct CombatRecord {};
struct JostleExtrusion {};
struct LegionAnimGraph {};
struct LegionGambitEffect {};

}

namespace cutscene {

struct ActorList {};

}

namespace facility {

struct FacilityUnit {};
struct SceneCharacterAppearance {};

}

namespace hub {

struct AccessEventManager {};
struct AmbientInfo {};
struct AreaGayaInfo {};
struct CharacterDisposData {
  struct MapData {};
};
struct DateEvent {};
struct EventDispos {
  struct AreaData {};
};
struct EventDisposData {
  struct MapData {};
};
struct FastTravelLocator {};
struct FastTravelResult {};
struct HubDisposSimulation {
  struct LocalCalclator {};
};
struct IconOwner {};
struct NoticeEventManager {};
struct ObjectDispos {};
struct PathController {};
struct RouteEffectCache {};
struct TalkSupport {
  struct EntryChara {};
};

}

namespace map {

struct HpModelHandle {};
struct InfoCursorBottomImpl {};
struct InfoCursorTopImpl {};
struct MapDrawCircle {
  struct EftHandle {};
};
struct MapDrawManager {
  struct UnitMenuSelect {};
};
struct MapEffectBuffer {};
struct MapEffectCache {};
struct SubCursorHandle {};
struct TargetList {};

}

namespace talk {

struct Hub {
  struct BindInfo {};
};

}

namespace zview {

struct CameraLookAt {};
struct CharacterCollisionObstacle {
  struct ObstacleData {};
};
struct CharacterCollisionShape {
  struct ShapeData {};
};
struct InterpretAttack {};
struct RecieveHitbox {};

}

struct SpineColorCollection {};
struct UnitRide {};

}

namespace gfx {

namespace render {

struct AOFieldGroup {};

}

}

namespace gfxa {

struct CharaSelfShadowSystem {};
struct GrassInfluenceBuffers {};
struct GrassInfluenceManager {};
struct SettingsLayer {};

}

namespace mocull {

struct VirtualOccluder {};

}

namespace ui {

struct LayoutResourceCache {};

}

namespace wld {

namespace map {

struct ObjectLayouter {
  struct LoadingObject {};
};

}

struct AnimCtrlModule {
  struct SubModelInfo {};
};
struct EffectHandle {
  struct Impl {};
};
struct GfxSightMap {
  struct Handle {};
};
struct SharedLightAnimCurves {};

}

// Each copy is the deleting destructor of the control block that
// std::make_shared allocates for one managed type.
template class __attribute__((visibility("hidden")))
  std::__shared_ptr_emplace<wld::GfxSightMap::Handle,
    std::allocator<wld::GfxSightMap::Handle>>;
template class __attribute__((visibility("hidden")))
  std::__shared_ptr_emplace<game::combat::CombatRecord,
    std::allocator<game::combat::CombatRecord>>;
template class __attribute__((visibility("hidden")))
  std::__shared_ptr_emplace<game::character::CharacterAppearance,
    std::allocator<game::character::CharacterAppearance>>;
template class __attribute__((visibility("hidden")))
  std::__shared_ptr_emplace<ui::LayoutAccessor,
    std::allocator<ui::LayoutAccessor>>;
template class __attribute__((visibility("hidden")))
  std::__shared_ptr_emplace<std::function<void (fs::File*)>,
    std::allocator<std::function<void (fs::File*)>>>;
template class __attribute__((visibility("hidden")))
  std::__shared_ptr_emplace<g3d::Shape,
    std::allocator<g3d::Shape>>;
template class __attribute__((visibility("hidden")))
  std::__shared_ptr_emplace<wld::AnimCtrlModule::SubModelInfo,
    std::allocator<wld::AnimCtrlModule::SubModelInfo>>;
template class __attribute__((visibility("hidden")))
  std::__shared_ptr_emplace<gfxa::SettingsLayer,
    std::allocator<gfxa::SettingsLayer>>;
template class __attribute__((visibility("hidden")))
  std::__shared_ptr_emplace<gfxa::CharaSelfShadowSystem,
    std::allocator<gfxa::CharaSelfShadowSystem>>;
template class __attribute__((visibility("hidden")))
  std::__shared_ptr_emplace<gfxa::GrassInfluenceManager,
    std::allocator<gfxa::GrassInfluenceManager>>;
template class __attribute__((visibility("hidden")))
  std::__shared_ptr_emplace<eft::EbbSetting,
    std::allocator<eft::EbbSetting>>;
template class __attribute__((visibility("hidden")))
  std::__shared_ptr_emplace<wld::map::ObjectLayouter::LoadingObject,
    std::allocator<wld::map::ObjectLayouter::LoadingObject>>;
template class __attribute__((visibility("hidden")))
  std::__shared_ptr_emplace<gfx::render::AOFieldGroup,
    std::allocator<gfx::render::AOFieldGroup>>;
template class __attribute__((visibility("hidden")))
  std::__shared_ptr_emplace<wld::SharedLightAnimCurves,
    std::allocator<wld::SharedLightAnimCurves>>;
template class __attribute__((visibility("hidden")))
  std::__shared_ptr_emplace<gfxa::GrassInfluenceBuffers,
    std::allocator<gfxa::GrassInfluenceBuffers>>;
template class __attribute__((visibility("hidden")))
  std::__shared_ptr_emplace<game::hub::IconOwner,
    std::allocator<game::hub::IconOwner>>;
template class __attribute__((visibility("hidden")))
  std::__shared_ptr_emplace<game::hub::AccessEventManager,
    std::allocator<game::hub::AccessEventManager>>;
template class __attribute__((visibility("hidden")))
  std::__shared_ptr_emplace<game::hub::NoticeEventManager,
    std::allocator<game::hub::NoticeEventManager>>;
template class __attribute__((visibility("hidden")))
  std::__shared_ptr_emplace<
    std::function<void (game::character::CharacterBuilder*)>,
    std::allocator<std::function<void (game::character::CharacterBuilder*)>>>;
template class __attribute__((visibility("hidden")))
  std::__shared_ptr_emplace<std::function<void (util::PtrHolder<wld::Object>)>,
    std::allocator<std::function<void (util::PtrHolder<wld::Object>)>>>;
template class __attribute__((visibility("hidden")))
  std::__shared_ptr_emplace<game::zview::CameraLookAt,
    std::allocator<game::zview::CameraLookAt>>;
template class __attribute__((visibility("hidden")))
  std::__shared_ptr_emplace<std::function<void ()>,
    std::allocator<std::function<void ()>>>;
template class __attribute__((visibility("hidden")))
  std::__shared_ptr_emplace<game::zview::InterpretAttack,
    std::allocator<game::zview::InterpretAttack>>;
template class __attribute__((visibility("hidden")))
  std::__shared_ptr_emplace<game::hub::EventDispos::AreaData,
    std::allocator<game::hub::EventDispos::AreaData>>;
template class __attribute__((visibility("hidden")))
  std::__shared_ptr_emplace<game::hub::CharacterDisposData::MapData,
    std::allocator<game::hub::CharacterDisposData::MapData>>;
template class __attribute__((visibility("hidden")))
  std::__shared_ptr_emplace<game::hub::PathController,
    std::allocator<game::hub::PathController>>;
template class __attribute__((visibility("hidden")))
  std::__shared_ptr_emplace<game::hub::DateEvent,
    std::allocator<game::hub::DateEvent>>;
template class __attribute__((visibility("hidden")))
  std::__shared_ptr_emplace<game::zview::RecieveHitbox,
    std::allocator<game::zview::RecieveHitbox>>;
template class __attribute__((visibility("hidden")))
  std::__shared_ptr_emplace<game::hub::ObjectDispos,
    std::allocator<game::hub::ObjectDispos>>;
template class __attribute__((visibility("hidden")))
  std::__shared_ptr_emplace<game::hub::EventDisposData::MapData,
    std::allocator<game::hub::EventDisposData::MapData>>;
template class __attribute__((visibility("hidden")))
  std::__shared_ptr_emplace<game::hub::AmbientInfo,
    std::allocator<game::hub::AmbientInfo>>;
template class __attribute__((visibility("hidden")))
  std::__shared_ptr_emplace<game::combat::LegionAnimGraph,
    std::allocator<game::combat::LegionAnimGraph>>;
template class __attribute__((visibility("hidden")))
  std::__shared_ptr_emplace<game::combat::LegionGambitEffect,
    std::allocator<game::combat::LegionGambitEffect>>;
template class __attribute__((visibility("hidden")))
  std::__shared_ptr_emplace<game::combat::CombatLegionGroup::Platoon,
    std::allocator<game::combat::CombatLegionGroup::Platoon>>;
template class __attribute__((visibility("hidden")))
  std::__shared_ptr_emplace<game::combat::CameraModifier,
    std::allocator<game::combat::CameraModifier>>;
template class __attribute__((visibility("hidden")))
  std::__shared_ptr_emplace<game::combat::JostleExtrusion,
    std::allocator<game::combat::JostleExtrusion>>;
template class __attribute__((visibility("hidden")))
  std::__shared_ptr_emplace<game::hub::FastTravelResult,
    std::allocator<game::hub::FastTravelResult>>;
template class __attribute__((visibility("hidden")))
  std::__shared_ptr_emplace<game::hub::FastTravelLocator,
    std::allocator<game::hub::FastTravelLocator>>;
template class __attribute__((visibility("hidden")))
  std::__shared_ptr_emplace<game::hub::TalkSupport::EntryChara,
    std::allocator<game::hub::TalkSupport::EntryChara>>;
template class __attribute__((visibility("hidden")))
  std::__shared_ptr_emplace<game::map::MapDrawManager::UnitMenuSelect,
    std::allocator<game::map::MapDrawManager::UnitMenuSelect>>;
template class __attribute__((visibility("hidden")))
  std::__shared_ptr_emplace<float,
    std::allocator<float>>;
template class __attribute__((visibility("hidden")))
  std::__shared_ptr_emplace<game::map::MapDrawCircle::EftHandle,
    std::allocator<game::map::MapDrawCircle::EftHandle>>;
template class __attribute__((visibility("hidden")))
  std::__shared_ptr_emplace<game::map::TargetList,
    std::allocator<game::map::TargetList>>;
template class __attribute__((visibility("hidden")))
  std::__shared_ptr_emplace<game::map::MapEffectCache,
    std::allocator<game::map::MapEffectCache>>;
template class __attribute__((visibility("hidden")))
  std::__shared_ptr_emplace<game::map::MapEffectBuffer,
    std::allocator<game::map::MapEffectBuffer>>;
template class __attribute__((visibility("hidden")))
  std::__shared_ptr_emplace<game::cmdbtl::UnitMapData,
    std::allocator<game::cmdbtl::UnitMapData>>;
template class __attribute__((visibility("hidden")))
  std::__shared_ptr_emplace<game::UnitRide,
    std::allocator<game::UnitRide>>;
template class __attribute__((visibility("hidden")))
  std::__shared_ptr_emplace<game::hub::RouteEffectCache,
    std::allocator<game::hub::RouteEffectCache>>;
template class __attribute__((visibility("hidden")))
  std::__shared_ptr_emplace<game::map::HpModelHandle,
    std::allocator<game::map::HpModelHandle>>;
template class __attribute__((visibility("hidden")))
  std::__shared_ptr_emplace<unsigned int,
    std::allocator<unsigned int>>;
template class __attribute__((visibility("hidden")))
  std::__shared_ptr_emplace<game::hub::AreaGayaInfo,
    std::allocator<game::hub::AreaGayaInfo>>;
template class __attribute__((visibility("hidden")))
  std::__shared_ptr_emplace<game::hub::HubDisposSimulation::LocalCalclator,
    std::allocator<game::hub::HubDisposSimulation::LocalCalclator>>;
template class __attribute__((visibility("hidden")))
  std::__shared_ptr_emplace<
    game::zview::CharacterCollisionObstacle::ObstacleData,
    std::allocator<game::zview::CharacterCollisionObstacle::ObstacleData>>;
template class __attribute__((visibility("hidden")))
  std::__shared_ptr_emplace<game::zview::CharacterCollisionShape::ShapeData,
    std::allocator<game::zview::CharacterCollisionShape::ShapeData>>;
template class __attribute__((visibility("hidden")))
  std::__shared_ptr_emplace<game::map::InfoCursorBottomImpl,
    std::allocator<game::map::InfoCursorBottomImpl>>;
template class __attribute__((visibility("hidden")))
  std::__shared_ptr_emplace<game::map::InfoCursorTopImpl,
    std::allocator<game::map::InfoCursorTopImpl>>;
template class __attribute__((visibility("hidden")))
  std::__shared_ptr_emplace<game::map::SubCursorHandle,
    std::allocator<game::map::SubCursorHandle>>;
template class __attribute__((visibility("hidden")))
  std::__shared_ptr_emplace<int,
    std::allocator<int>>;
template class __attribute__((visibility("hidden")))
  std::__shared_ptr_emplace<game::character::SignalCallback,
    std::allocator<game::character::SignalCallback>>;
template class __attribute__((visibility("hidden")))
  std::__shared_ptr_emplace<game::talk::Hub::BindInfo,
    std::allocator<game::talk::Hub::BindInfo>>;
template class __attribute__((visibility("hidden")))
  std::__shared_ptr_emplace<ui::LayoutResourceCache,
    std::allocator<ui::LayoutResourceCache>>;
template class __attribute__((visibility("hidden")))
  std::__shared_ptr_emplace<game::facility::SceneCharacterAppearance,
    std::allocator<game::facility::SceneCharacterAppearance>>;
template class __attribute__((visibility("hidden")))
  std::__shared_ptr_emplace<game::facility::FacilityUnit,
    std::allocator<game::facility::FacilityUnit>>;
template class __attribute__((visibility("hidden")))
  std::__shared_ptr_emplace<wld::EffectHandle::Impl,
    std::allocator<wld::EffectHandle::Impl>>;
template class __attribute__((visibility("hidden")))
  std::__shared_ptr_emplace<game::cutscene::ActorList,
    std::allocator<game::cutscene::ActorList>>;
template class __attribute__((visibility("hidden")))
  std::__shared_ptr_emplace<game::SpineColorCollection,
    std::allocator<game::SpineColorCollection>>;
template class __attribute__((visibility("hidden")))
  std::__shared_ptr_emplace<mocull::VirtualOccluder,
    std::allocator<mocull::VirtualOccluder>>;

namespace {

// Explicit instantiations over internal types are dropped when unused, so
// these blocks come from std::make_shared calls as in their owners.
[[gnu::used]] void MakeLocalBlocks() {
  std::make_shared<GrassSetting>();
  std::make_shared<game::ProcWarRecordSeq::RecordData>();
  std::make_shared<game::ProcAfterEpisodeSeq::EpisodeData>();
  std::make_shared<game::ProcStaffRollSeq::MemorialImage>();
}

}
