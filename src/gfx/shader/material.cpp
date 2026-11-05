#pragma GCC visibility push(hidden)
#include "gfx/shader/material.hpp"
#pragma GCC visibility pop

namespace gfx::shader {

namespace {

bool IsVector(const ParamInfo* info) {
  return info->type == kFloat3 || info->type == kFloat4;
}

}

Material::~Material() = default;

bool Material::SetFloat(std::string_view name, float value) {
  const ParamInfo* info = FindParam(name);
  if (info == nullptr || info->type != kFloat) {
    return false;
  }

  values_[info->offset] = value;
  MarkDirty(info->offset, 1);
  return true;
}

bool Material::SetFloat2(std::string_view name, nn::util::Vector2f value) {
  const ParamInfo* info = FindParam(name);
  if (info == nullptr || info->type != kFloat2) {
    return false;
  }

  vst1_f32(&values_[info->offset], value._v);
  MarkDirty(info->offset, 2);
  return true;
}

bool Material::SetFloat3(std::string_view name, nn::util::Vector3f value) {
  const ParamInfo* info = FindParam(name);
  if (info == nullptr || info->type != kFloat3) {
    return false;
  }

  float* data = &values_[info->offset];
  vst1_f32(data, vget_low_f32(value._v));
  data[2] = vgetq_lane_f32(value._v, 2);
  MarkDirty(info->offset, 3);
  return true;
}

bool Material::SetFloat4(std::string_view name, nn::util::Vector4f value) {
  const ParamInfo* info = FindParam(name);
  if (info == nullptr || info->type != kFloat4) {
    return false;
  }

  vst1q_f32(&values_[info->offset], value._v);
  MarkDirty(info->offset, 4);
  return true;
}

bool Material::SetVector3(std::string_view name, nn::util::Vector3f value) {
  const ParamInfo* info = FindParam(name);
  if (info == nullptr || !IsVector(info)) {
    return false;
  }

  float* data = &values_[info->offset];
  vst1_f32(data, vget_low_f32(value._v));
  data[2] = vgetq_lane_f32(value._v, 2);
  MarkDirty(info->offset, 3);
  return true;
}

bool Material::SetVector4(std::string_view name, nn::util::Vector4f value) {
  const ParamInfo* info = FindParam(name);
  if (info == nullptr) {
    return false;
  }

  if (info->type == kFloat4) {
    vst1q_f32(&values_[info->offset], value._v);
    MarkDirty(info->offset, 4);
    return true;
  }

  if (info->type == kFloat3) {
    float* data = &values_[info->offset];
    vst1_f32(data, vget_low_f32(value._v));
    data[2] = vgetq_lane_f32(value._v, 2);
    MarkDirty(info->offset, 3);
    return true;
  }

  return false;
}

bool Material::SetColor(std::string_view name, nn::util::Vector4f value) {
  const ParamInfo* info = FindParam(name);
  if (info == nullptr) {
    return false;
  }

  if (info->type == kFloat4) {
    vst1q_f32(&values_[info->offset], value._v);
    MarkDirty(info->offset, 4);
    return true;
  }

  if (info->type == kFloat3) {
    float* data = &values_[info->offset];
    vst1_f32(data, vget_low_f32(value._v));
    data[2] = vgetq_lane_f32(value._v, 2);
    MarkDirty(info->offset, 3);
    return true;
  }

  return false;
}

bool Material::SetColor(std::string_view name, nn::util::Color4u8Type value) {
  const ParamInfo* info = FindParam(name);
  if (info == nullptr) {
    return false;
  }

  if (info->type == kFloat4) {
    float* data = &values_[info->offset];
    data[0] = value.v[0] / 255.0f;
    data[1] = value.v[1] / 255.0f;
    data[2] = value.v[2] / 255.0f;
    data[3] = value.v[3] / 255.0f;
    MarkDirty(info->offset, 4);
    return true;
  }

  if (info->type == kFloat3) {
    float* data = &values_[info->offset];
    data[0] = value.v[0] / 255.0f;
    data[1] = value.v[1] / 255.0f;
    data[2] = value.v[2] / 255.0f;
    MarkDirty(info->offset, 3);
    return true;
  }

  return false;
}

bool Material::GetFloat(std::string_view name, float* out) const {
  const ParamInfo* info = FindParam(name);
  if (info == nullptr || info->type != kFloat) {
    return false;
  }

  *out = values_[info->offset];
  return true;
}

bool Material::GetFloat2(std::string_view name,
  nn::util::Vector2f* out) const {
  const ParamInfo* info = FindParam(name);
  if (info == nullptr || info->type != kFloat2) {
    return false;
  }

  out->_v = vld1_f32(&values_[info->offset]);
  return true;
}

bool Material::GetFloat3(std::string_view name,
  nn::util::Vector3f* out) const {
  const ParamInfo* info = FindParam(name);
  if (info == nullptr || info->type != kFloat3) {
    return false;
  }

  const float* data = &values_[info->offset];
  out->_v = float32x4_t{data[0], data[1], data[2], 0.0f};
  return true;
}

bool Material::GetFloat4(std::string_view name,
  nn::util::Vector4f* out) const {
  const ParamInfo* info = FindParam(name);
  if (info == nullptr || info->type != kFloat4) {
    return false;
  }

  out->_v = vld1q_f32(&values_[info->offset]);
  return true;
}

bool Material::GetVector3(std::string_view name,
  nn::util::Vector3f* out) const {
  const ParamInfo* info = FindParam(name);
  if (info == nullptr || !IsVector(info)) {
    return false;
  }

  const float* data = &values_[info->offset];
  out->_v = float32x4_t{data[0], data[1], data[2], 0.0f};
  return true;
}

bool Material::GetVector4(std::string_view name,
  nn::util::Vector4f* out) const {
  const ParamInfo* info = FindParam(name);
  if (info == nullptr || !IsVector(info)) {
    return false;
  }

  const float* data = &values_[info->offset];
  float w = info->type == kFloat3 ? 1.0f : data[3];
  out->_v = float32x4_t{data[0], data[1], data[2], w};
  return true;
}

bool Material::GetColor(std::string_view name, nn::util::Float4* out) const {
  const ParamInfo* info = FindParam(name);
  if (info == nullptr || !IsVector(info)) {
    return false;
  }

  const float* data = &values_[info->offset];
  out->v[0] = data[0];
  out->v[1] = data[1];
  out->v[2] = data[2];
  out->v[3] = info->type == kFloat3 ? 1.0f : data[3];
  return true;
}

bool Material::GetColor(std::string_view name,
  nn::util::Color4u8Type* out) const {
  const ParamInfo* info = FindParam(name);
  if (info == nullptr || !IsVector(info)) {
    return false;
  }

  const float* data = &values_[info->offset];
  out->v[0] = static_cast<unsigned char>(data[0] * 255.0f);
  out->v[1] = static_cast<unsigned char>(data[1] * 255.0f);
  out->v[2] = static_cast<unsigned char>(data[2] * 255.0f);
  out->v[3] = info->type == kFloat3
    ? 255 : static_cast<unsigned char>(data[3] * 255.0f);
  return true;
}

}
