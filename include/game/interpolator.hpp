#pragma once

namespace game {

#pragma GCC visibility push(hidden)

float Ease(int type, int mode, float from, float to, float time,
  float duration);

class InterpolatorFloat {
public:
  virtual float GetStep() const;

  virtual bool IsDifferent(const float& a, const float& b) const {
    return a != b;
  }

  virtual float Calculate() const {
    if (time_ < duration_) {
      return Ease(type_, mode_, from_, to_, time_, duration_);
    }
    return to_;
  }

  virtual void SetRange(float from, float to) {
    from_ = from;
    to_ = to;
  }

  float Get() const {
    return Calculate();
  }

  bool IsChanged(const float& value) const {
    return IsDifferent(value, to_);
  }

  bool IsImmediate() const {
    return immediate_;
  }

  bool IsRunning() const {
    return duration_ > 0.0f;
  }

  void Start(float from, float to) {
    SetRange(from, to);
    duration_ = 0.0f;
    time_ = 0.0f;
    immediate_ = false;
    changed_ = true;
  }

private:
  float duration_ = 0.0f;
  float time_ = 0.0f;
  int type_ = 0;
  int mode_ = 0;
  bool immediate_ = false;
  bool changed_ = true;
  float from_ = 0.0f;
  float to_ = 1.0f;
  float unknown_24_ = 1.0f;
};

#pragma GCC visibility pop

}
