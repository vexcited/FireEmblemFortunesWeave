#include <stdint.h>

double exp(double);
float expf(float);

// nnmusl ships the musl 1.2 helpers that take the result sign.
__attribute__((visibility("hidden"))) double __expo2(double x, double sign)
{
  union { double f; uint64_t i; } scale = {
    .i = (uint64_t)(0x3ff + 2043 / 2) << 52
  };

  return exp(x - 0x1.62066151add8bp+10) * (sign * scale.f) * scale.f;
}

__attribute__((visibility("hidden"))) float __expo2f(float x, float sign)
{
  union { float f; uint32_t i; } scale = {
    .i = (uint32_t)(0x7f + 235 / 2) << 23
  };

  return expf(x - 0x1.45c778p+7f) * (sign * scale.f) * scale.f;
}
