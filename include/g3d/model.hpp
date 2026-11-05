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

struct SubMesh {
  // Records the draw of a range of the sub mesh primitives.
  void Draw(void* commands, int first, int count) const;

  uint8_t unknown00_[0x34];
  uint16_t count;
  uint8_t unknown36_[0x2];
};

struct ShapeData {
  uint8_t unknown00_[0x18];
  const SubMesh* subMeshes;
};

struct ShapeResource {
  const ShapeData* data;
};

struct Shape {
  uint8_t unknown00_[0x8];
  const ShapeResource* resource;
};

struct DrawContext {
  uint8_t unknown00_[0x10];
  void* commands;
};

class MeshDrawer {
public:
  void Draw(void* context, uint32_t a, uint32_t b);
  void DrawInstanced(void* context, uint32_t a, int32_t first, int32_t count,
    uint32_t b);

  const Shape* shape;
};

// Per mesh render flags, bit 0 enables the third pass kind and bit 15
// disables the first two.
struct MeshPassFlags {
  uint8_t flags[8];
};

// Pass kinds indexed by pass, filled at runtime.
extern const int32_t* g_passKinds;

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
  uint8_t unknown198_[0xa8];
  MeshDrawer** drawers_;
  uint8_t unknown248_[0x10];
  int32_t instanceFirst_;
  int32_t instanceCount_;
  uint8_t unknown260_[0x8];
  const MeshPassFlags* passFlags_;
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
