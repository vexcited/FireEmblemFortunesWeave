#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 cacosf_plt(void);
float cacoshf(double a1, float a2);

float cacoshf(double a1, float a2)
{

#pragma clang fp contract(off)
  float v3;
  float v4;

  v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(float, "s1", "=w"));
  cacosf_plt(),
      v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(float, "s1", "=w"));
  v4 = -v3;
  if (SLODWORD(a2) <= -1) {
    return v3;
  }
  return v4;
}

#pragma GCC visibility pop
