#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

float clogf_plt(float, float);
long double csqrtf_plt(float, float);
float casinf(float a1, float a2);

float casinf(float a1, float a2)
{

#pragma clang fp contract(off)
  float v4;
  float v5;
  long double v6;
  float v7;
  float v8;

  v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w")),
  v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s1", "=w"));
  v4 = 0x1.0000000000000p+0f - (float)((float)(a1 - a2) * (float)(a1 + a2));
  v5 = a1 * -0x1.0000000000000p+1 * a2;
  v6 = csqrtf_plt(v4, v5),
  v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w")),
  v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s1", "=w"));
  clogf_plt(*(float*)&v6 - a2, a1 + v7),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w")),
      v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s1", "=w"));
  return v8;
}

#pragma GCC visibility pop
