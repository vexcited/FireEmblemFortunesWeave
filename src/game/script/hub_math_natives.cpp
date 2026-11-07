#include <math.h>

namespace as {

class ScriptManager;

// The natives read the manager through the global offset table, so it is
// declared with default visibility before the header.
[[gnu::visibility("default")]] extern ScriptManager* g_script_manager;

}

#include "as/script_context.hpp"

namespace game::script::hub::math {

#pragma GCC visibility push(hidden)

namespace {

constexpr float kPi = 3.14159265f;
constexpr float kTwoPi = 6.28318531f;

[[gnu::always_inline]] inline void EndBlock() {
  as::ScriptContext* context = as::GetCurrentContext();
  context->GetRunner()->SetBlockState(1);
  context->ClearCallback();
}

// Wraps the value into min to max.
[[gnu::always_inline]] inline float Repeat(float value, float min,
  float max) {
  const float range = max - min;
  const float rest = fmodf(value - min, range);
  return rest < 0.0f ? rest + min + range : rest + min;
}

// The difference of the angles, from minus half a turn to half a turn.
[[gnu::always_inline]] inline float CornerAngle(float angle1, float angle2,
  float half, float turn) {
  const float angle = Repeat(angle1 - angle2, 0.0f, turn);
  return angle > half ? angle - turn : angle;
}

}

float Lerp(float from, float to, float t) {
  EndBlock();
  return from + fminf(fmaxf(t, 0.0f), 1.0f) * (to - from);
}

float Linearstep(float edge0, float edge1, float x) {
  EndBlock();
  const float range = edge1 - edge0;
  if (range == 0.0f) {
    return 0.0f;
  }
  const float t = (x - edge0) / range;
  return t < 0.0f ? 0.0f : (t > 1.0f ? 1.0f : t);
}

float MoveTowards(float current, float target, float maxDelta) {
  EndBlock();
  const float delta = fabsf(maxDelta);
  if (current > target) {
    current -= delta;
    if (current >= target) {
      return current;
    }
  }
  else {
    if (current >= target) {
      return current;
    }
    current += delta;
    if (current <= target) {
      return current;
    }
  }
  return target;
}

float CornerAngleRadian(float angle1, float angle2) {
  EndBlock();
  return CornerAngle(angle1, angle2, kPi, kTwoPi);
}

float CornerAngleDegree(float angle1, float angle2) {
  EndBlock();
  return CornerAngle(angle1, angle2, 180.0f, 360.0f);
}

#pragma GCC visibility pop

}
