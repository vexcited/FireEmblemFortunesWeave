#include <arm_neon.h>
#include <stdint.h>

namespace game {

#pragma GCC visibility push(hidden)

class InterpolatorColor {
public:
  virtual float32x4_t GetStep() const;
  virtual bool IsDifferent(const float32x4_t& a, const float32x4_t& b) const;
  virtual float32x4_t Calculate() const;

  float32x4_t Get() const {
    return Calculate();
  }

  // The target while it runs, computed again once it reached its end.
  float32x4_t GetSettled() const {
    return time_ == duration_ ? Calculate() : to_;
  }

private:
  float duration_;
  float time_;
  uint8_t unknown_10_[0x10];
  float32x4_t from_;
  float32x4_t to_;
};

// The view of the screen fade process.
class ProcFadeView {
public:
  static ProcFadeView* instance_;

  void Out(float sec, const float32x4_t& color);
  void In(float sec);

  // Whether the screen is fully covered.
  bool IsOut() const {
    const InterpolatorColor& color = colors_[current_];
    return color.GetSettled()[3] == 1.0f && color.Get()[3] == 1.0f;
  }

private:
  uint8_t unknown_00_[0xa0];
  InterpolatorColor colors_[5];
  uint8_t current_;
};

#pragma GCC visibility pop

}

namespace game::script::system::fade {

#pragma GCC visibility push(hidden)

void Out(float sec, float r, float g, float b) {
  const float32x4_t color = {r, g, b, 1.0f};
  if (ProcFadeView* fade = ProcFadeView::instance_) {
    fade->Out(sec, color);
  }
}

void In(float sec) {
  if (ProcFadeView* fade = ProcFadeView::instance_) {
    fade->In(sec);
  }
}

bool IsOut() {
  const ProcFadeView* fade = ProcFadeView::instance_;
  return fade != nullptr && fade->IsOut();
}

#pragma GCC visibility pop

}
