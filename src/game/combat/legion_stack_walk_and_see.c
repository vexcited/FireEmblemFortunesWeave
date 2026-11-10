#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

bool LegionStackWalkAndSee_Unknown5(__int64 a1)
{
  return *(float*)(a1 + 52) <= 0.0;
};
__int64 GameRoutine_e40be0(_QWORD, _QWORD);
__int64 LegionStackWalkAndSee_Unknown4(__int64 result);
__int64 StateMachines_e32f40(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
__int64 LegionStackWalkAndSee_Unknown2(__int64 result);
__int64 LegionStackWalkAndSee_Unknown3(__int64 result);

__int64 LegionStackWalkAndSee_Unknown2(__int64 result)
{

#pragma clang fp contract(off)
  __int64 v1;
  int v2;
  float v3;

  v1 = *(_QWORD*)(*(_QWORD*)(result + 40) + 120LL);
  if ((*(_BYTE*)(v1 + 96) & 1) == 0) {
    *(_BYTE*)(v1 + 96) = 1;
    v1 = *(_QWORD*)(*(_QWORD*)(result + 40) + 120LL);
  }
  v2 = *(unsigned __int8*)(result + 60);
  *(_QWORD*)(v1 + 120) = 0;
  *(_QWORD*)(v1 + 40) = 0;
  *(_QWORD*)(v1 + 80) = 0;
  *(_QWORD*)(v1 + 88) = 0;
  v3 = -0x1.921fb60000000p+0f;
  *(_DWORD*)(v1 + 116) = 2;
  if (v2 != 0) {
    v3 = 0x1.921fb60000000p+0f;
  }
  *(_DWORD*)(v1 + 88) = 1034147594;
  *(float*)(v1 + 92) = v3;
  return result;
}

__int64 LegionStackWalkAndSee_Unknown4(__int64 result)
{
  __int64 v1;
  __int64 v2;

  v1 = *(_QWORD*)(*(_QWORD*)(result + 40) + 120LL);
  *(_QWORD*)(v1 + 120) = 0;
  *(_QWORD*)(v1 + 40) = 0;
  *(_QWORD*)(v1 + 80) = 0;
  *(_QWORD*)(v1 + 88) = 0;
  *(_DWORD*)(v1 + 116) = 0;
  v2 = *(_QWORD*)(*(_QWORD*)(result + 40) + 120LL);
  if (*(_BYTE*)(v2 + 96) != 0) {
    *(_BYTE*)(v2 + 96) = 0;
    return GameRoutine_e40be0(*(_QWORD*)(*(_QWORD*)(v2 + 8) + 104LL), 0);
  }
  return result;
}

__int64 LegionStackWalkAndSee_Unknown3(__int64 result)
{
  _QWORD* v1;
  float v2;
  float v3;
  __int64 v4;
  __int64 v5;
  __int64 v7;
  __int64 v8;
  __int64 v10;
  float v11;
  __int64 v12;
  __int64 v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  __int64 v20;
  float v21;
  float v22;
  float v23[2];
  __int16 v24;

  v1 = *(_QWORD**)(result + 40);
  v2 = 0.0f;
  v3 = 0.0f;
  v4 = result;
  v5 = v1[6];
  if (v5 != 0 && *(_QWORD*)(v5 + 8) != -1 && v1[7] != 0) {
    v7 = v1[1];
    if (v7 != 0) {
      v3 = (float)(*(float*)(*(_QWORD*)(v7 + 496) + 16LL) *
                   0x1.0aef000000000p+4f) /
           0x1.f400000000000p+9f;
    }
  }
  *(float*)(result + 52) = *(float*)(result + 52) - v3;
  v8 = v1[6];
  if (v8 != 0 && *(_QWORD*)(v8 + 8) != -1 && v1[7] != 0) {
    v10 = v1[1];
    if (v10 != 0) {
      v2 = (float)(*(float*)(*(_QWORD*)(v10 + 496) + 16LL) *
                   0x1.0aef000000000p+4f) /
           0x1.f400000000000p+9f;
    }
  }
  v11 = v2 + *(float*)(result + 56);
  *(float*)(result + 56) = v11;
  if (v11 > 0.5f) {
    v13 = v1[15];
    v12 = v1[16];
    v24 = 0;
    v14 = *(float*)(v12 + 16);
    v15 = *(float*)(v12 + 20);
    v16 = *(float*)(v13 + 92) +
          (float)(roundf(*(float*)(v13 + 92) * 0x1.45f3060000000p-3f) *
                  -0x1.921fb60000000p+2f);
    if (v16 <= 0x1.921fb60000000p+0f) {
      v18 = 1.0f;
      if (v16 >= -0x1.921fb60000000p+0f) {
        goto LABEL_21;
      }
      v17 = -0x1.921fb60000000p+1f;
    }
    else {
      v17 = 0x1.921fb60000000p+1f;
    }
    v16 = v17 - v16;
    v18 = -1.0f;
  LABEL_21:
    v19 = v16 * v16;
    v20 = v1[14];
    v21 =
        v16 *
        (float)((float)((float)-(
                            float)(*(float*)((char*)((__int128*)0x10LL) +
                                             (_QWORD)GameData_212c190) -
                                   (float)((float)(*(float*)((char*)((
                                                                 _UNKNOWN**)0x8LL) +
                                                             (_QWORD)
                                                                 GameData_212c190 +
                                                             4) +
                                                   (float)((float)-(
                                                               float)(*(float*)((char*)((
                                                                                    _UNKNOWN**)0x8LL) +
                                                                                (_QWORD)
                                                                                    GameData_212c190) -
                                                                      (float)((float)(*((float*)
                                                                                            GameData_212c190 +
                                                                                        1) -
                                                                                      (float)(*(float*)
                                                                                                  GameData_212c190 *
                                                                                              (float)(v16 *
                                                                                                      v16))) *
                                                                              (float)(v16 *
                                                                                      v16))) *
                                                           (float)(v16 *
                                                                   v16))) *
                                           (float)(v16 * v16))) *
                        (float)(v16 * v16)) +
                1.0f);
    v22 =
        v18 *
        (float)((float)((float)-(
                            float)(*(float*)((char*)((__int128*)0x10LL) +
                                             (_QWORD)GameData_212c188) -
                                   (float)((float)(*(float*)((char*)((
                                                                 _UNKNOWN**)0x8LL) +
                                                             (_QWORD)
                                                                 GameData_212c188 +
                                                             4) +
                                                   (float)((float)-(
                                                               float)(*(float*)((char*)((
                                                                                    _UNKNOWN**)0x8LL) +
                                                                                (_QWORD)
                                                                                    GameData_212c188) -
                                                                      (float)((float)(*((float*)
                                                                                            GameData_212c188 +
                                                                                        1) -
                                                                                      (float)(*(float*)
                                                                                                  GameData_212c188 *
                                                                                              v19)) *
                                                                              v19)) *
                                                           v19)) *
                                           v19)) *
                        v19) +
                1.0f);
    v23[0] = (float)(v15 * v21) + (float)(v14 * v22);
    v23[1] = (float)(v15 * v22) - (float)(v14 * v21);
    result = StateMachines_e32f40(v20, v23, &v24);
    if ((result & 1) != 0) {
      *(_DWORD*)(v4 + 52) = 0;
    }
  }
  return result;
}

#pragma GCC visibility pop
