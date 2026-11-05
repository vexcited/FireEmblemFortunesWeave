#pragma GCC visibility push(hidden)
#include "cspine/spine_model.hpp"
#pragma GCC visibility pop

namespace cspine {

namespace {

const char* OrEmpty(const char* text) {
  return text != nullptr ? text : "";
}

}

void SpineModel::AsyncArgument::SetSkin(const char* name) {
  skin_ = OrEmpty(name);
}

void SpineModel::AsyncArgument::SetScale(float scale) {
  scale_ = scale;
}

void SpineModel::AsyncArgument::SetOwner(
  const std::shared_ptr<void>& owner) {
  owner_ = owner;
}

SpineModel::AsyncArgument::~AsyncArgument() = default;

void SpineModel::AsyncArgument::Clear() {
  skeletonPath_.clear();
  atlasPath_.clear();
  animation_.clear();
  skin_.clear();
  scale_ = 1.0f;
  owner_.reset();
}

void SpineModel::AsyncArgument::Assign(const AsyncArgument& other) {
  skeletonPath_ = other.skeletonPath_;
  atlasPath_ = other.atlasPath_;
  animation_ = other.animation_;
  skin_ = other.skin_;
  scale_ = other.scale_;
  owner_ = other.owner_;
}

void SpineModel::AsyncArgument::CopySkeletonPath(const AsyncArgument& other) {
  skeletonPath_ = other.skeletonPath_;
}

void SpineModel::AsyncArgument::SetSkeletonPath(const char* path) {
  skeletonPath_ = OrEmpty(path);
}

void SpineModel::AsyncArgument::CopyAtlasPath(const AsyncArgument& other) {
  atlasPath_ = other.atlasPath_;
}

void SpineModel::AsyncArgument::SetAtlasPath(const char* path) {
  atlasPath_ = OrEmpty(path);
}

void SpineModel::AsyncArgument::CopyAnimation(const AsyncArgument& other) {
  animation_ = other.animation_;
}

void SpineModel::AsyncArgument::SetAnimation(const char* name) {
  animation_ = OrEmpty(name);
}

void SpineModel::AsyncArgument::CopySkin(const AsyncArgument& other) {
  skin_ = other.skin_;
}

void SpineModel::AsyncArgument::CopyScale(const AsyncArgument& other) {
  scale_ = other.scale_;
}

void SpineModel::AsyncArgument::CopyOwner(const AsyncArgument& other) {
  owner_ = other.owner_;
}

}
