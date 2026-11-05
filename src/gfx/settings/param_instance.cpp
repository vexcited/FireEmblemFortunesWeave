#include <algorithm>

#pragma GCC visibility push(hidden)
#include "gfx/settings/param_instance.hpp"
#pragma GCC visibility pop

namespace gfx::settings {

template <class T>
inline void TParamInstance<T>::FindKeys(float frame, int& from, int& to,
  float& t) const {
  int count = static_cast<int>(keys_.size());
  t = 0.0f;

  if (frame > keys_.back().frame) {
    from = count - 1;
    to = count - 1;
    return;
  }

  // A frame equal to the last key finds no greater key and pairs the last
  // key with the first one.
  from = std::max(count - 1, 0);
  to = 0;

  for (int i = 0; i < count; ++i) {
    if (frame < keys_[i].frame) {
      from = std::max(i - 1, 0);
      to = i;

      int span = keys_[to].frame - keys_[from].frame;
      if (span > 0) {
        t = (frame - keys_[from].frame) / static_cast<float>(span);
      }

      return;
    }
  }
}

template <class T>
T TParamInstance<T>::Evaluate(std::optional<T> fallback, float frame) const {
  T base = fallback.value_or(default_);

  if (keys_.empty() || !animated_) {
    return value_.value_or(base);
  }

  int from;
  int to;
  float t;
  FindKeys(frame, from, to, t);

  const Key& a = keys_[from];
  const Key& b = keys_[to];
  return Lerp(a.enabled ? a.value : base, b.enabled ? b.value : base, t);
}

template <class T>
T TParamInstance<T>::EvaluateOver(std::optional<T> fallback,
  TParamInstance base, float frame) const {
  if (keys_.empty() || !animated_) {
    return value_.value_or(base.Evaluate(fallback, frame));
  }

  int from;
  int to;
  float t;
  FindKeys(frame, from, to, t);

  const Key& a = keys_[from];
  if (from == to) {
    T value = base.Evaluate(fallback, frame);
    return a.enabled ? a.value : value;
  }

  if (a.enabled || keys_[to].enabled) {
    int toFrame = keys_[to].frame;
    T va = base.Evaluate(fallback, a.frame);
    va = a.enabled ? a.value : va;

    T vb = base.Evaluate(fallback, toFrame);
    const Key& b = keys_[to];
    return Lerp(va, b.enabled ? b.value : vb, t);
  }

  return base.Evaluate(fallback, frame);
}

template <class T>
void TParamInstance<T>::ApplyMixed(BaseParamInstance& dst,
  const BaseParamInstance& a, const BaseParamInstance& b, float ratio,
  float weight, float frame) const {
  auto& out = static_cast<TParamInstance&>(dst);
  T current = out.value_.value_or(out.default_);

  T va = static_cast<const TParamInstance&>(a).Evaluate(current, frame);
  T vb = static_cast<const TParamInstance&>(b).Evaluate(current, frame);
  out.value_ = Lerp(current, Lerp(va, vb, ratio), weight);
}

template <class T>
void TParamInstance<T>::Apply(BaseParamInstance& dst,
  const BaseParamInstance& src, float weight, float frame) const {
  auto& out = static_cast<TParamInstance&>(dst);
  T current = out.value_.value_or(out.default_);

  T value = static_cast<const TParamInstance&>(src).Evaluate(current, frame);
  out.value_ = Lerp(current, value, weight);
}

template <class T>
void TParamInstance<T>::ApplyLayered(BaseParamInstance& dst,
  const BaseParamInstance& base, const BaseParamInstance& layer,
  float weight, float frame) const {
  if (!layer.IsActive()) {
    Apply(dst, base, weight, frame);
    return;
  }

  if (!base.IsActive()) {
    Apply(dst, layer, weight, frame);
    return;
  }

  auto& out = static_cast<TParamInstance&>(dst);
  const auto& over = static_cast<const TParamInstance&>(layer);
  T current = out.value_.value_or(out.default_);

  T value = over.EvaluateOver(current,
    static_cast<const TParamInstance&>(base), frame);
  out.value_ = over.Lerp(current, value, weight);
}

template <class T>
void TParamInstance<T>::ApplyLayered(BaseParamInstance& dst,
  const BaseParamInstance& base, const BaseParamInstance& layer,
  const BaseParamInstance& top, float weight, float frame) const {
  if (!top.IsActive()) {
    ApplyLayered(dst, base, layer, weight, frame);
    return;
  }

  if (!layer.IsActive() || !base.IsActive()) {
    ApplyLayered(dst, layer, top, weight, frame);
    return;
  }

  auto& out = static_cast<TParamInstance&>(dst);
  const auto& under = static_cast<const TParamInstance&>(base);
  const auto& over = static_cast<const TParamInstance&>(layer);
  const auto& keys = static_cast<const TParamInstance&>(top).keys_;
  T current = out.value_.value_or(out.default_);

  int from;
  int to;
  float t;
  static_cast<const TParamInstance&>(top).FindKeys(frame, from, to, t);

  const Key& a = keys[from];
  if (from == to) {
    T value = over.EvaluateOver(current, under, frame);
    out.value_ = Lerp(current, a.enabled ? a.value : value, weight);
    return;
  }

  if (a.enabled || keys[to].enabled) {
    int toFrame = keys[to].frame;
    T va = over.EvaluateOver(current, under, a.frame);
    va = a.enabled ? a.value : va;

    T vb = over.EvaluateOver(current, under, toFrame);
    const Key& b = keys[to];
    out.value_ = Lerp(current, Lerp(va, b.enabled ? b.value : vb, t), weight);
    return;
  }

  T value = over.EvaluateOver(current, under, frame);
  out.value_ = Lerp(current, value, weight);
}

float Float::Lerp(float a, float b, float t) const {
  return a * (1.0f - t) + b * t;
}

nn::util::Vector3f Float3::Lerp(nn::util::Vector3f a, nn::util::Vector3f b,
  float t) const {
  nn::util::Vector3f result;
  result._v = vaddq_f32(vmulq_n_f32(b._v, t), vmulq_n_f32(a._v, 1.0f - t));
  return result;
}

Int::~Int() = default;

Bool::~Bool() = default;

void ParamSet::Update() {}

template class TParamInstance<float>;
template class TParamInstance<int>;
template class TParamInstance<bool>;
template class TParamInstance<nn::util::Vector3f>;

}
