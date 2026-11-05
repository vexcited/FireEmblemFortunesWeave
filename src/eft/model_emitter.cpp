#include "eft/emitter.hpp"

namespace eft {

namespace {

// Returns the translation row of the joint the emitter follows.
template <class Model>
std::optional<float32x4_t> GetJointPosition(const Model& model) {
  const Skeleton* skeleton = model.skeleton;
  if (skeleton == nullptr || model.joint == -1) {
    return std::nullopt;
  }
  return skeleton->matrices[model.joint].rows[3];
}

}

ModelEmitter::~ModelEmitter() {
  if (entry_ != nullptr) {
    g_effectSystem->registry->Remove(entry_);
  }
}

void ModelEmitter::Unknown08() {
  if (unknownB4_) {
    model_->root->hidden = unknownB6_;
  }
  if (unknownB4_) {
    unknownB4_ = false;
    return;
  }
  Destroy();
}

// A model playing an animation whose curve only clamps counts as done.
bool ModelEmitter::Unknown09() {
  if (keepVisible_) {
    return true;
  }
  const std::vector<ModelAnimation*>& animations = model_->animations;
  if (animations.empty()) {
    return true;
  }
  const AnimationCurve* curve = animations[model_->animation]->curve;
  if (curve == nullptr) {
    return true;
  }
  return curve->evaluate != &ClampCurve;
}

std::optional<float32x4_t> ModelEmitter::Unknown17() {
  if (Unknown12()) {
    return std::nullopt;
  }
  return GetJointPosition(*model_);
}

VATModelEmitter::~VATModelEmitter() {
  if (entry_ != nullptr) {
    g_effectSystem->registry->Remove(entry_);
  }
}

void VATModelEmitter::Unknown08() {
  if (unknownB4_) {
    model_->root->hidden = unknownB6_;
  }
  if (unknownB4_) {
    unknownB4_ = false;
    return;
  }
  Destroy();
}

bool VATModelEmitter::Unknown09() {
  return keepVisible_ || model_->keepsVisible || model_->alwaysVisible;
}

std::optional<float32x4_t> VATModelEmitter::Unknown17() {
  if (Unknown12()) {
    return std::nullopt;
  }
  return GetJointPosition(*model_);
}

}
