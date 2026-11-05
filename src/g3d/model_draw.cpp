#pragma GCC visibility push(hidden)
#include "g3d/model.hpp"
#include "gfx/shader/material.hpp"
#pragma GCC visibility pop

namespace g3d {

void Model::SetMaterialParam(const char* name, uint32_t value) {
  for (const std::shared_ptr<gfx::shader::Material>& material : materials_) {
    material->SetOption(name, value);
  }
}

void Model::Unknown10(void* context, int mesh, uint32_t a, uint32_t b) {
  drawers_[mesh]->Draw(context, a, b);
}

void Model::Unknown11(void* context, int mesh, uint32_t a, uint32_t b) {
  drawers_[mesh]->DrawInstanced(context, a, instanceFirst_, instanceCount_,
    b);
}

void Model::Unknown12(void* context, int mesh, int index) {
  const SubMesh& subMesh =
    drawers_[mesh]->shape->resource->data->subMeshes[index];
  subMesh.Draw(static_cast<DrawContext*>(context)->commands, 0,
    subMesh.count);
}

bool Model::IsPassEnabled(int mesh, int pass) const {
  const int32_t kind = g_passKinds[pass];
  if (kind == 1 || kind == 2) {
    return (passFlags_[mesh].flags[1] & 0x80) == 0;
  }
  if (kind == 3) {
    return (passFlags_[mesh].flags[0] & 1) != 0;
  }
  return true;
}

}
