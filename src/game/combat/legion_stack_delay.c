#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

float LegionStackDelay_Unknown3(__int64 a1);

bool LegionStackDelay_Unknown5(__int64 a1) { return *(float*)(a1 + 52) <= 0.0; }

float LegionStackDelay_Unknown3(__int64 a1)
{
  _QWORD* v1;
  float v2;
  __int64 v3;
  __int64 v5;
  float result;

  v1 = *(_QWORD**)(a1 + 40);
  v2 = 0.0f;
  v3 = v1[6];
  if (v3 != 0 && *(_QWORD*)(v3 + 8) != -1 && v1[7] != 0) {
    v5 = v1[1];
    if (v5 != 0) {
      v2 = (float)(*(float*)(*(_QWORD*)(v5 + 496) + 16LL) * 16.683f) / 1000.0f;
    }
  }
  result = *(float*)(a1 + 52) - v2;
  *(float*)(a1 + 52) = result;
  return result;
}

#pragma GCC visibility pop
