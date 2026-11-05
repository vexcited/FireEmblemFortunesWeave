#pragma once

#include <cstdint>
#include <memory>
#include <vector>

#include "gfx/render/model.hpp"

namespace g3d {

struct MeshResource {
  uint8_t unknown00_[0x52];
  uint16_t materialIndex;
  uint16_t matrixIndex;
  uint8_t unknown56_[0x5];
  uint8_t lodCount;
};

struct Mesh {
  const MeshResource* resource;
  uint8_t unknown08_[0x68];
};

struct Skeleton {
  uint8_t unknown00_[0x20];
  const gfx::render::Matrix44* matrices;
};

class Model : public gfx::render::Model {
public:
  ~Model() override;

  void CollectElements(gfx::render::ElementCollector& collector,
    const gfx::render::ElementColllectionPolicy& policy,
    const gfx::render::ViewInfo& view) const override;
  void Unknown03() override;
  void Unknown04() override;
  void SetMaterialParam(const char* name, uint32_t value) override;
  int GetMeshCount() const override;
  int GetLodCount() const override;
  gfx::render::Matrix44 GetMeshMatrix(int mesh) const override;
  std::shared_ptr<gfx::shader::Material> GetMaterial(
    int mesh) const override;
  void Unknown10(void* context, int mesh, uint32_t a, uint32_t b) override;
  void Unknown11(void* context, int mesh, uint32_t a, uint32_t b) override;
  void Unknown12(void* context, int mesh, int index) override;
  bool HasLod(int mesh, int lod) const override;
  bool IsLodVisible(int mesh, int lod) const override;
  int GetElementCount() const override;
  bool IsPassEnabled(int mesh, int pass) const override;

  uint16_t GetMeshCountRaw() const {
    return meshCount_;
  }

private:
  uint8_t unknown08_[0x9c];
  uint16_t meshCount_;
  Skeleton* skeleton_;
  Mesh* meshes_;
  uint8_t unknownB8_[0x44];
  int lodCount_;
  uint8_t unknown100_[0x38];
  std::vector<std::shared_ptr<gfx::shader::Material>> materials_;
  uint8_t unknown150_[0x30];
  std::vector<uint64_t> lodMasks_;
};

class InstanceModel : public gfx::render::Model {
public:
  ~InstanceModel() override;

  void CollectElements(gfx::render::ElementCollector& collector,
    const gfx::render::ElementColllectionPolicy& policy,
    const gfx::render::ViewInfo& view) const override;
  void Unknown04() override;
  void SetMaterialParam(const char* name, uint32_t value) override;
  int GetMeshCount() const override;
  int GetLodCount() const override;
  gfx::render::Matrix44 GetMeshMatrix(int mesh) const override;
  std::shared_ptr<gfx::shader::Material> GetMaterial(
    int mesh) const override;
  void Unknown10(void* context, int mesh, uint32_t a, uint32_t b) override;
  void Unknown11(void* context, int mesh, uint32_t a, uint32_t b) override;
  void Unknown12(void* context, int mesh, int index) override;
  bool HasLod(int mesh, int lod) const override;
  bool IsLodVisible(int mesh, int lod) const override;
  int GetElementCount() const override;
  bool IsPassEnabled(int mesh, int pass) const override;

private:
  // Instances repeat the meshes of the model, mesh indices wrap around.
  int ToModelMesh(int mesh) const {
    return mesh % model_->GetMeshCountRaw();
  }

  uint8_t unknown08_[0x78];
  g3d::Model* model_;
  int instanceCount_;
};

}
