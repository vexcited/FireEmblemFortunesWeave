#pragma once

#include <stdint.h>

#include <memory>

#include "gfx/render/model.hpp"

namespace gfx::render {

class BillboardModel : public Model {
public:
  ~BillboardModel() override;

  void CollectElements(ElementCollector& collector,
    const ElementColllectionPolicy& policy,
    const ViewInfo& view) const override;
  int GetMeshCount() const override;
  int GetLodCount() const override;
  Matrix44 GetMeshMatrix(int mesh) const override;
  std::shared_ptr<shader::Material> GetMaterial(int mesh) const override;
  void Unknown10(void* context, int mesh, uint32_t a, uint32_t b) override;
  void Unknown11(void* context, int mesh, uint32_t a, uint32_t b) override;
  void Unknown12(void* context, int mesh, int index) override;
  bool HasLod(int mesh, int lod) const override;
  bool IsLodVisible(int mesh, int lod) const override;
  int GetElementCount() const override;
  bool IsPassEnabled(int mesh, int pass) const override;

private:
  uint8_t unknown08_[0xb0];
  std::shared_ptr<shader::Material> material_;
};

}
