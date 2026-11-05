#pragma GCC visibility push(hidden)
#include "g3d/model.hpp"
#pragma GCC visibility pop

namespace g3d {

void InstanceModel::SetMaterialParam(const char* name, uint32_t value) {
  model_->SetMaterialParam(name, value);
}

int InstanceModel::GetMeshCount() const {
  return instanceCount_ * model_->GetMeshCountRaw();
}

int InstanceModel::GetLodCount() const {
  return model_->GetLodCount();
}

gfx::render::Matrix44 InstanceModel::GetMeshMatrix(int mesh) const {
  return model_->GetMeshMatrix(ToModelMesh(mesh));
}

std::shared_ptr<gfx::shader::Material> InstanceModel::GetMaterial(
  int mesh) const {
  return model_->GetMaterial(ToModelMesh(mesh));
}

void InstanceModel::Unknown10(void* context, int mesh, uint32_t a,
  uint32_t b) {
  model_->Unknown10(context, ToModelMesh(mesh), a, b);
}

void InstanceModel::Unknown11(void* context, int mesh, uint32_t a,
  uint32_t b) {
  model_->Unknown11(context, ToModelMesh(mesh), a, b);
}

void InstanceModel::Unknown12(void* context, int mesh, int index) {
  model_->Unknown12(context, ToModelMesh(mesh), index);
}

bool InstanceModel::HasLod(int mesh, int lod) const {
  return model_->HasLod(ToModelMesh(mesh), lod);
}

bool InstanceModel::IsLodVisible(int mesh, int lod) const {
  return model_->IsLodVisible(ToModelMesh(mesh), lod);
}

int InstanceModel::GetElementCount() const {
  return instanceCount_ * model_->GetElementCount();
}

}
