#include <stdint.h>

double expm1(double);

__attribute__((visibility("hidden"))) double __expo2(double x, double sign);

double sinh(double x)
{
  union { double f; uint64_t i; } u = { .f = x };
  double h = 0.5;

  if (u.i >> 63) {
    h = -h;
  }

  u.i &= (uint64_t)-1 / 2;
  double absx = u.f;
  uint32_t w = u.i >> 32;

  if (w < 0x40862e42) {
    double t = expm1(absx);

    if (w < 0x3ff00000) {
      if (w < 0x3ff00000 - (26 << 20)) {
        return x;
      }

      return h * (2 * t - t * t / (t + 1));
    }

    return h * (t + t / (t + 1));
  }

  return __expo2(absx, 2 * h);
}
