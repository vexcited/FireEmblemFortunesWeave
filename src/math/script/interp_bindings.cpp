namespace math {

// The interpolation of the type between two values at the time over the
// span, out of line.
float intplGetValue(int type, float value1, float value2, float time,
  float time_s);

}

// The interpolation natives of the math and math::interp script namespaces,
// registered by the static initializer at 0xb24e30.
namespace math::script {

namespace {

// Reaches the second value at the end of the span, at once without one.
[[gnu::always_inline]] inline float LinearValue(float value1, float value2,
  float time, float time_s) {
  if (time_s != 0.0f && time_s > time) {
    return value1 + (value2 - value1) * time / time_s;
  }
  return value2;
}

// A power below 1 blends the curve with the linear interpolation, and none
// leaves only the latter.
[[gnu::always_inline]] inline float GetValue(int type, float value1,
  float value2, float time, float time_s, float pow) {
  if (pow > 0.0f) {
    const float value = intplGetValue(type, value1, value2, time, time_s);
    if (pow >= 1.0f) {
      return value;
    }
    return value * pow +
      (1.0f - pow) * LinearValue(value1, value2, time, time_s);
  }
  return LinearValue(value1, value2, time, time_s);
}

}

[[gnu::used]] float intplGetValue(int type, float value1, float value2,
  float time, float time_s) {
  return ::math::intplGetValue(type, value1, value2, time, time_s);
}

[[gnu::used]] float intplGetValue(int type, float value1, float value2,
  float time, float time_s, float pow) {
  return GetValue(type, value1, value2, time, time_s, pow);
}

namespace interp {

[[gnu::used]] float Linear(float time, float time_s, float pow) {
  return GetValue(0, 0.0f, 1.0f, time, time_s, pow);
}

[[gnu::used]] float Accel(float time, float time_s, float pow) {
  return GetValue(1, 0.0f, 1.0f, time, time_s, pow);
}

[[gnu::used]] float DoubleAccel(float time, float time_s, float pow) {
  return GetValue(2, 0.0f, 1.0f, time, time_s, pow);
}

[[gnu::used]] float TripleAccel(float time, float time_s, float pow) {
  return GetValue(3, 0.0f, 1.0f, time, time_s, pow);
}

[[gnu::used]] float Decel(float time, float time_s, float pow) {
  return GetValue(4, 0.0f, 1.0f, time, time_s, pow);
}

[[gnu::used]] float DoubleDecel(float time, float time_s, float pow) {
  return GetValue(5, 0.0f, 1.0f, time, time_s, pow);
}

[[gnu::used]] float TripleDecel(float time, float time_s, float pow) {
  return GetValue(6, 0.0f, 1.0f, time, time_s, pow);
}

[[gnu::used]] float Gemini(float time, float time_s, float pow) {
  return GetValue(7, 0.0f, 1.0f, time, time_s, pow);
}

[[gnu::used]] float Bururun(float time, float time_s, float pow) {
  return GetValue(8, 0.0f, 1.0f, time, time_s, pow);
}

[[gnu::used]] float BururunDece(float time, float time_s, float pow) {
  return GetValue(9, 0.0f, 1.0f, time, time_s, pow);
}

[[gnu::used]] float Bound(float time, float time_s, float pow) {
  return GetValue(10, 0.0f, 1.0f, time, time_s, pow);
}

[[gnu::used]] float Sin(float time, float time_s, float pow) {
  return GetValue(11, 0.0f, 1.0f, time, time_s, pow);
}

[[gnu::used]] float DoubleSin(float time, float time_s, float pow) {
  return GetValue(12, 0.0f, 1.0f, time, time_s, pow);
}

[[gnu::used]] float TripleSin(float time, float time_s, float pow) {
  return GetValue(13, 0.0f, 1.0f, time, time_s, pow);
}

[[gnu::used]] float SinAccel(float time, float time_s, float pow) {
  return GetValue(14, 0.0f, 1.0f, time, time_s, pow);
}

[[gnu::used]] float SinDecel(float time, float time_s, float pow) {
  return GetValue(15, 0.0f, 1.0f, time, time_s, pow);
}

[[gnu::used]] float EaseInOut(float time, float time_s, float pow) {
  return GetValue(16, 0.0f, 1.0f, time, time_s, pow);
}

}

}
