#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

float fmodf(float, float);
void InterpolatorAngle_Unknown3(__int64 a1, float a2, float a3);

void InterpolatorAngle_Unknown3(__int64 a1, float a2, float a3)
{
  float v6;
  float v7;
  float v8;
  float v9;

  v6 = fmodf(a2, 360.0);
  if (a2 >= 0.0) {
    v7 = v6;
  }
  else {
    v7 = v6 + 360.0;
  }
  v8 = fmodf(a3, 360.0);
  if (a3 < 0.0) {
    v8 = v8 + 360.0;
  }
  if ((float)(v8 - v7) <= 180.0) {
    v9 = v7;
  }
  else {
    v9 = v7 + 360.0;
  }
  if ((float)(v9 - v8) > 180.0) {
    v9 = v9 + -360.0;
  }
  *(float*)(a1 + 28) = v9;
  *(float*)(a1 + 32) = v8;
}

#pragma GCC visibility pop
