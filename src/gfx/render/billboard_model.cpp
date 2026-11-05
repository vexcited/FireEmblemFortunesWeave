#include "nn/util/util_matrix.hpp"

#pragma GCC visibility push(hidden)
#include "gfx/render/billboard_model.hpp"
#pragma GCC visibility pop

namespace gfx::render {

// A billboard is one mesh with a single level of detail drawn in two
// passes.
int BillboardModel::GetMeshCount() const {
  return 1;
}

int BillboardModel::GetLodCount() const {
  return 1;
}

Matrix44 BillboardModel::GetMeshMatrix(int) const {
  const nn::util::MatrixRowMajor4x3f& identity =
    nn::util::MatrixRowMajor4x3f::ConstantIdentity;
  return {{identity.rows[0], identity.rows[1], identity.rows[2],
    identity.rows[3]}};
}

std::shared_ptr<shader::Material> BillboardModel::GetMaterial(int) const {
  return material_;
}

bool BillboardModel::HasLod(int, int lod) const {
  return lod == 0;
}

bool BillboardModel::IsLodVisible(int, int lod) const {
  return lod == 0;
}

int BillboardModel::GetElementCount() const {
  return 2;
}

bool BillboardModel::IsPassEnabled(int, int) const {
  return true;
}

}
