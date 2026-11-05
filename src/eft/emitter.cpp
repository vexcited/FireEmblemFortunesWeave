#include "eft/emitter.hpp"

namespace eft {

void Emitter::Unknown10(bool) {}

void Emitter::SetOffset(float, float, float) {}

void Emitter::Unknown13() {}

bool Emitter::Unknown14() {
  return false;
}

void Emitter::Unknown15(int) {}

void Emitter::Unknown16() {}

void NormalEmitter::Unknown10(bool value) {
  unknown1ea_ = value;
}

void NormalEmitter::SetOffset(float x, float y, float z) {
  hasOffset_ = true;
  offset_ = float32x4_t{x, y, z, 0.0f};
}

bool NormalEmitter::Unknown12() {
  return unknown1e8_;
}

std::optional<float32x4_t> NormalEmitter::Unknown17() {
  return std::nullopt;
}

bool ModelEmitter::Unknown04() {
  stopped_ = true;
  return true;
}

void ModelEmitter::Hide() {
  if (stopped_) {
    return;
  }

  color_->a = 0.0f;
  if (!keepVisible_) {
    model_->hidden = true;
  }
}

void ModelEmitter::Show() {
  if (stopped_) {
    return;
  }

  color_->a = 1.0f;
  if (!keepVisible_) {
    model_->hidden = false;
  }
}

void ModelEmitter::Unknown07() {
  unknownB4_ = true;
  unknownB6_ = model_->root->hidden;
  model_->root->hidden = false;
}

bool ModelEmitter::Unknown12() {
  return keepVisible_;
}

bool VATModelEmitter::Unknown04() {
  stopped_ = true;
  return true;
}

void VATModelEmitter::Hide() {
  if (stopped_) {
    return;
  }

  color_->a = 0.0f;
  if (!keepVisible_) {
    model_->hidden = true;
  }
}

void VATModelEmitter::Show() {
  if (stopped_) {
    return;
  }

  color_->a = 1.0f;
  if (!keepVisible_) {
    model_->hidden = false;
  }
}

void VATModelEmitter::Unknown07() {
  unknownB4_ = true;
  unknownB6_ = model_->root->hidden;
  model_->root->hidden = false;
}

bool VATModelEmitter::Unknown12() {
  return keepVisible_;
}

}
