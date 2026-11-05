#pragma once

#include <optional>
#include <string>
#include <vector>

#include "nn/util/vector.hpp"

namespace gfx::settings {

class BaseParamInstance {
public:
  virtual ~BaseParamInstance() = default;

  virtual void ApplyMixed(BaseParamInstance& dst, const BaseParamInstance& a,
    const BaseParamInstance& b, float ratio, float weight, float frame) const {}

  virtual void Apply(BaseParamInstance& dst, const BaseParamInstance& src,
    float weight, float frame) const {}

  virtual void ApplyLayered(BaseParamInstance& dst,
    const BaseParamInstance& base, const BaseParamInstance& layer,
    float weight, float frame) const {}

  virtual void ApplyLayered(BaseParamInstance& dst,
    const BaseParamInstance& base, const BaseParamInstance& layer,
    const BaseParamInstance& top, float weight, float frame) const {}

  virtual bool HasValue() const = 0;
  virtual bool HasKeys() const = 0;
  virtual void Reset() = 0;
  virtual void Clear() = 0;

  bool IsActive() const {
    return HasKeys() || HasValue();
  }

protected:
  std::string name_;
  bool animated_;
};

template <class T>
class TParamInstance : public BaseParamInstance {
public:
  struct Key {
    int frame;
    T value;
    bool enabled;
  };

  void ApplyMixed(BaseParamInstance& dst, const BaseParamInstance& a,
    const BaseParamInstance& b, float ratio, float weight,
    float frame) const override;

  void Apply(BaseParamInstance& dst, const BaseParamInstance& src,
    float weight, float frame) const override;

  void ApplyLayered(BaseParamInstance& dst, const BaseParamInstance& base,
    const BaseParamInstance& layer, float weight,
    float frame) const override;

  void ApplyLayered(BaseParamInstance& dst, const BaseParamInstance& base,
    const BaseParamInstance& layer, const BaseParamInstance& top,
    float weight, float frame) const override;

  bool HasValue() const override {
    return value_.has_value();
  }

  bool HasKeys() const override {
    return !keys_.empty();
  }

  void Reset() override {
    value_ = default_;
  }

  void Clear() override {
    value_.reset();
  }

  virtual T Lerp(T a, T b, float t) const {
    return t >= 0.5f ? b : a;
  }

  [[gnu::noinline]] T Evaluate(std::optional<T> fallback, float frame) const;
  T EvaluateOver(std::optional<T> fallback, TParamInstance base,
    float frame) const;

protected:
  void FindKeys(float frame, int& from, int& to, float& t) const;

  std::optional<T> value_;
  std::vector<Key> keys_;
  T default_;
};

class Float : public TParamInstance<float> {
public:
  float Lerp(float a, float b, float t) const override;
};

class Int : public TParamInstance<int> {
public:
  ~Int() override;
};

class Bool : public TParamInstance<bool> {
public:
  ~Bool() override;
};

class Float3 : public TParamInstance<nn::util::Vector3f> {
public:
  nn::util::Vector3f Lerp(nn::util::Vector3f a, nn::util::Vector3f b,
    float t) const override;
};

class [[gnu::visibility("default")]] ParamSet {
public:
  virtual ~ParamSet() = default;
  virtual void Update();

private:
  std::string name_;
  std::vector<BaseParamInstance*> params_;
};

}
