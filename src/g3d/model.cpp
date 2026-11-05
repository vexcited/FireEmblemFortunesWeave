#include <algorithm>

#pragma GCC visibility push(hidden)
#include "g3d/model.hpp"
#pragma GCC visibility pop

namespace g3d {

int Model::GetMeshCount() const {
  return meshCount_;
}

int Model::GetLodCount() const {
  return lodCount_;
}

gfx::render::Matrix44 Model::GetMeshMatrix(int mesh) const {
  return skeleton_->matrices[meshes_[mesh].resource->matrixIndex];
}

std::shared_ptr<gfx::shader::Material> Model::GetMaterial(int mesh) const {
  return materials_[meshes_[mesh].resource->materialIndex];
}

bool Model::HasLod(int mesh, int lod) const {
  return lod < meshes_[mesh].resource->lodCount;
}

bool Model::IsLodVisible(int mesh, int lod) const {
  if (lod >= meshes_[mesh].resource->lodCount) {
    return false;
  }

  if (lodMasks_.empty()) {
    return true;
  }

  uint64_t mask = lodMasks_[mesh];
  int bit = lod < 0 ? 0 : std::min(lodCount_ - 1, lod);
  return ((mask >> bit) & 1) == 0;
}

}
