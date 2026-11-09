#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_e42820(_QWORD);
__int64 LegionStackMotion_Unknown3(__int64 result);
__int64 LegionStackMotion_Unknown5(__int64 a1);

__int64 LegionStackMotion_Unknown3(__int64 result)
{
  _QWORD* v1;
  float v2;
  float v3;
  __int64 v4;
  __int64 v6;
  float v7;

  *(_BYTE*)(result + 92) = 1;
  if (*(_BYTE*)(result + 88) == 1) {
    v1 = *(_QWORD**)(result + 40);
    v2 = *(float*)(result + 84);
    v3 = 0.0f;
    v4 = v1[6];
    if (v4 != 0 && *(_QWORD*)(v4 + 8) != -1 && v1[7] != 0) {
      v6 = v1[1];
      if (v6 != 0) {
        v3 =
            (float)(*(float*)(*(_QWORD*)(v6 + 496) + 16LL) * 16.683f) / 1000.0f;
      }
    }
    v7 = fabsf(v3);
    if (v2 <= 0.0f) {
      if (v2 >= 0.0f) {
        goto LABEL_15;
      }
      v2 = v2 + v7;
      if (v2 <= 0.0f) {
        goto LABEL_15;
      }
    }
    else {
      v2 = v2 - v7;
      if (v2 >= 0.0f) {
        goto LABEL_15;
      }
    }
    v2 = 0.0f;
  LABEL_15:
    *(float*)(result + 84) = v2;
    *(_BYTE*)(result + 88) = 1;
  }
  return result;
}

__int64 LegionStackMotion_Unknown5(__int64 a1)
{
  if (*(_BYTE*)(a1 + 92) != 1) {
    return 0;
  }
  if (*(_BYTE*)(a1 + 88) == 1) {
    return *(float*)(a1 + 84) == 0.0;
  }
  return GameRoutine_e42820(*(_QWORD*)(*(_QWORD*)(a1 + 40) + 104LL));
}

#pragma GCC visibility pop
