#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_80a5b0(_QWORD);
__int64 GameRoutine_cf5c00(_QWORD);
__int64 game_map_zv_CrowdCharacter_TryZviewBuild_lambda1_Invoke(__int64 a1,
                                                                __int64 a2);

__int64 game_map_zv_CrowdCharacter_TryZviewBuild_lambda1_Invoke(__int64 a1,
                                                                __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  float v7;
  __int64 v8;
  __int64 result;
  int v10;

  v2 = *(_QWORD*)(*(_QWORD*)a2 + 8LL);
  *(_QWORD*)(*(_QWORD*)(v2 + 328) + 184LL) = 0x3E99999A3E99999ALL;
  v3 = *(_QWORD*)(v2 + 328);
  v4 = *(_QWORD*)(v3 + 360);
  *(_QWORD*)(v3 + 176) = 0;
  *(_DWORD*)(v3 + 192) = 0;
  *(_BYTE*)(v3 + 196) = 1;
  *(_BYTE*)(v3 + 369) = 1;
  v5 = GameRoutine_cf5c00(v4);
  v6 = *(_QWORD*)(v2 + 328);
  v7 = *(float*)(v6 + 192);
  if (v7 < 0.0) {
    v7 = 0.0;
  }
  *(float*)(v6 + 192) = v7;
  v8 = *(_QWORD*)(v2 + 328);
  *(_DWORD*)(v8 + 176) = 1065353216;
  result = GameRoutine_80a5b0(v5);
  if ((result & 1) != 0) {
    v10 = *(_DWORD*)(v8 + 176);
    *(_DWORD*)(v8 + 192) = 0;
    *(_DWORD*)(v8 + 180) = v10;
  }
  *(_BYTE*)(v8 + 196) = 1;
  return result;
}

#pragma GCC visibility pop
