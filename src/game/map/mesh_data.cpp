#include "game/map/mesh_data.hpp"

namespace game::map {

MeshData::~MeshData() = default;

#pragma GCC visibility push(hidden)

#define GAME_MESH_DATA_RESET(T, value) \
  class T : public MeshData { \
  public: \
    T(); \
    void ResetMatrix() override { \
      MeshData::ResetMatrix(); \
    } \
    bool Unknown06() const override { \
      return value; \
    } \
  }; \
  [[gnu::used]] T::T() = default;

#define GAME_MESH_DATA(T, value) \
  class T : public MeshData { \
  public: \
    T(); \
    bool Unknown06() const override { \
      return value; \
    } \
  }; \
  [[gnu::used]] T::T() = default;

GAME_MESH_DATA(RageMeshData, false)
GAME_MESH_DATA(DangerMeshData, true)
GAME_MESH_DATA_RESET(DeployMeshData, true)
GAME_MESH_DATA(SortieMeshData, false)
GAME_MESH_DATA(TargetMeshData, false)
GAME_MESH_DATA(TutorialMeshData, false)
GAME_MESH_DATA_RESET(CursorUnitMeshData, false)
GAME_MESH_DATA(DangerMeshFillData, true)
GAME_MESH_DATA(OutlineBmapMeshData, false)
GAME_MESH_DATA(OutlineGridMeshData, false)
GAME_MESH_DATA(TrickTargetMeshData, false)
GAME_MESH_DATA(DangerCursorMeshData, true)
GAME_MESH_DATA(DeployEffectMeshData, true)
GAME_MESH_DATA(TrickDestroyMeshData, false)

#undef GAME_MESH_DATA
#undef GAME_MESH_DATA_RESET

class RouteMeshData : public MeshData {
public:
  ~RouteMeshData() override;

private:
  uint8_t unknown_f5_[0x3];
  std::weak_ptr<void> route_;
};

RouteMeshData::~RouteMeshData() = default;

#pragma GCC visibility pop

[[gnu::used]] MeshData* CreateMeshData() {
  return new MeshData();
}

}
