#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_e42820(_QWORD);
__int64 LegionStackWaitAnimComplate_Unknown5(__int64 a1);
float LegionStackWaitAnimComplate_Unknown3(__int64 a1);

float LegionStackWaitAnimComplate_Unknown3(__int64 a1)
{

#pragma clang fp contract(off)
  _QWORD* v1;
  float v2;
  __int64 v3;
  __int64 v5;
  float result;

  v1 = *(_QWORD**)(a1 + 40);
  v2 = 0x0.0p+0f;
  v3 = v1[6];
  if (v3 != 0 && *(_QWORD*)(v3 + 8) != -1 && v1[7] != 0) {
    v5 = v1[1];
    if (v5 != 0) {
      v2 = (float)(*(float*)(*(_QWORD*)(v5 + 496) + 16LL) *
                   0x1.0aef000000000p+4f) /
           0x1.f400000000000p+9f;
    }
  }
  result = v2 + *(float*)(a1 + 60);
  *(float*)(a1 + 60) = result;
  return result;
}

__int64 LegionStackWaitAnimComplate_Unknown5(__int64 a1)
{
  if (*(_BYTE*)(a1 + 56) == 1 && *(float*)(a1 + 52) <= *(float*)(a1 + 60)) {
    return 1;
  }
  else {
    return GameRoutine_e42820(*(_QWORD*)(*(_QWORD*)(a1 + 40) + 104LL));
  }
}

#pragma GCC visibility pop
