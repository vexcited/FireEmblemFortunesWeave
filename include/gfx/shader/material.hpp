#pragma once

#include <algorithm>
#include <cstddef>
#include <functional>
#include <memory>
#include <string>
#include <string_view>
#include <unordered_map>
#include <vector>

#include "nn/util/vector.hpp"

namespace gfx::shader {

struct ParamHash {
  using is_transparent = void;

  std::size_t operator()(std::string_view name) const {
    return std::hash<std::string_view>{}(name);
  }
};

enum ParamType : int {
  kFloat,
  kFloat2,
  kFloat3,
  kFloat4,
};

struct ParamInfo {
  ParamType type;
  int offset;
};

struct ParamDesc;

class Shader {
public:
  using ParamMap = std::unordered_map<std::string, ParamInfo, ParamHash,
    std::equal_to<>>;

  const ParamInfo* FindParam(std::string_view name) const {
    if (params_.empty()) {
      return nullptr;
    }

    auto found = paramMap_.find(name);
    return found != paramMap_.end() ? &found->second : nullptr;
  }

private:
  unsigned char header_[0x90];
  std::vector<ParamDesc*> params_;
  ParamMap paramMap_;
};

class Resource {
public:
  virtual ~Resource();
};

struct TextureBinding {
  std::shared_ptr<Resource> texture;
  int slot;
};

class Material {
public:
  virtual ~Material();

  bool SetOption(std::string_view name, uint32_t value);

  virtual bool SetFloat(std::string_view name, float value);
  virtual bool SetFloat2(std::string_view name, nn::util::Vector2f value);
  virtual bool SetFloat3(std::string_view name, nn::util::Vector3f value);
  virtual bool SetFloat4(std::string_view name, nn::util::Vector4f value);
  virtual bool SetVector3(std::string_view name, nn::util::Vector3f value);
  virtual bool SetVector4(std::string_view name, nn::util::Vector4f value);
  virtual bool SetColor(std::string_view name, nn::util::Vector4f value);
  virtual bool SetColor(std::string_view name, nn::util::Color4u8Type value);

  virtual bool GetFloat(std::string_view name, float* out) const;
  virtual bool GetFloat2(std::string_view name,
    nn::util::Vector2f* out) const;
  virtual bool GetFloat3(std::string_view name,
    nn::util::Vector3f* out) const;
  virtual bool GetFloat4(std::string_view name,
    nn::util::Vector4f* out) const;
  virtual bool GetVector3(std::string_view name,
    nn::util::Vector3f* out) const;
  virtual bool GetVector4(std::string_view name,
    nn::util::Vector4f* out) const;
  virtual bool GetColor(std::string_view name, nn::util::Float4* out) const;
  virtual bool GetColor(std::string_view name,
    nn::util::Color4u8Type* out) const;

private:
  const ParamInfo* FindParam(std::string_view name) const {
    return shader_ != nullptr ? shader_->FindParam(name) : nullptr;
  }

  void MarkDirty(int offset, int count) {
    dirty_ = std::max(dirty_, 1);
    dirtyBegin_ = std::min(dirtyBegin_, offset);
    dirtyEnd_ = std::max(dirtyEnd_, offset + count);
  }

  Shader* shader_;
  void* unknown10_;
  std::vector<float> values_;
  int dirty_;
  int unknown34_;
  int dirtyBegin_;
  int dirtyEnd_;
  unsigned char unknown40_[0x10];
  std::vector<int> unknown50_;
  std::vector<int> unknown68_;
  std::unique_ptr<Resource> unknown80_;
  std::unique_ptr<Resource> unknown88_;
  unsigned char unknown90_[0x28];
  std::unique_ptr<Resource> unknownB8_;
  std::unique_ptr<Resource> unknownC0_;
  unsigned char unknownC8_[0x28];
  std::vector<int> unknownF0_;
  std::vector<TextureBinding> textures_;
  std::vector<int> unknown120_;
  unsigned char unknown138_[0x10];
  std::string unknown148_;
  std::string unknown160_;
  std::string unknown178_;
};

}
