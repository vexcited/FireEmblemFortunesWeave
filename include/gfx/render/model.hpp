#pragma once

#include <cstdint>
#include <memory>

#include "gfx/render/math.hpp"

namespace gfx::shader {
class Material;
}

namespace gfx::render {

class ElementCollector;
struct ElementColllectionPolicy;
struct ViewInfo;

class Object {
public:
  virtual ~Object();

  virtual void CollectElements(ElementCollector& collector,
    const ElementColllectionPolicy& policy, const ViewInfo& view) const = 0;
  virtual void Unknown03();
  virtual void Unknown04();
};

class Model : public Object {
public:
  virtual void SetMaterialParam(const char* name, uint32_t value) = 0;
  virtual int GetMeshCount() const = 0;
  virtual int GetLodCount() const = 0;
  virtual Matrix44 GetMeshMatrix(int mesh) const = 0;
  virtual std::shared_ptr<shader::Material> GetMaterial(int mesh) const = 0;
  virtual void Unknown10(void* context, int mesh, uint32_t a,
    uint32_t b) = 0;
  virtual void Unknown11(void* context, int mesh, uint32_t a,
    uint32_t b) = 0;
  virtual void Unknown12(void* context, int mesh, int index) = 0;
  virtual bool HasLod(int mesh, int lod) const = 0;
  virtual bool IsLodVisible(int mesh, int lod) const = 0;
  virtual int GetElementCount() const = 0;
  virtual bool IsPassEnabled(int mesh, int pass) const = 0;
};

}
