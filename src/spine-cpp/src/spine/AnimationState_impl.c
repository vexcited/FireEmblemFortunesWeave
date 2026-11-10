#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_19e10();
__int64 GameRoutine_3df80(_QWORD, _QWORD);
__int64 GameRoutine_4e800(__int64, __int64, unsigned int);
__int64 __assert_fail(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 spine_AnimationState_setCurrent(__int64, unsigned __int64, __int64,
                                        char);
__int64 spine_EventQueue_dispose(_QWORD*, __int64);
__int64 spine_EventQueue_drain(__int64 result);
__int64 spine_EventQueue_end(_QWORD*, __int64);
__int64 spine_EventQueue_interrupt(_QWORD*, __int64);
__int64 spine_TrackEntry_TrackEntry(__int64 result);
float spine_AnimationStateData_getMix(__int64, __int64, __int64);
float spine_Animation_getDuration(_QWORD);
__int64 spine_AnimationState_setAnimation(__int64 a1, unsigned __int64 a2,
                                          __int64 a3, char a4);

__int64 spine_AnimationState_setAnimation(__int64 a1, unsigned __int64 a2,
                                          __int64 a3, char a4)
{

#pragma clang fp contract(off)
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  char v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 i;
  char v20;
  __int64 v21;
  char v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned int v26;
  int v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  float v32;
  __int64 j;

  v7 = GameRoutine_3df80(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 8LL), a3);
  if (v7 == 0) {
    __assert_fail("animation != NULL",
                  "/Program/Externals/Spine/src/spine/AnimationState.cpp", 542,
                  "setAnimation");
    __udf(0);
  }
  v8 = v7;
  v9 = a1;
  v10 = a2;
  v11 = *(_QWORD*)(a1 + 88);
  v12 = a4 & 1;
  v13 = v8;
  v14 = a2;
  v15 = (__int64*)v9;
  if (v10 >= v11) {
    do {
      while (v11 != v15[12]) {
        v24 = v15[13];
        v15[11] = v11 + 1;
        *(_QWORD*)(v24 + 8 * v11) = 0;
        v11 = v15[11];
        if (v14 < v11) {
          goto LABEL_18;
        }
      }
      v25 = v15[13];
      v26 = (int)(float)((float)v11 * 0x1.c000000000000p+0f);
      if (v26 <= 8) {
        v27 = 8;
      }
      else {
        v27 = v26;
      }
      v15[12] = v27;
      v28 = GameRoutine_19e10();
      v29 = (*(__int64 (**)(__int64, __int64, __int64, const char*, __int64))(
          *(_QWORD*)v28 + 32LL))(
          v28, v25, 8LL * v27,
          "/Program/Externals/Spine/include\\spine/Vector.h", 106);
      v30 = v15[11];
      v15[13] = v29;
      v15[11] = v30 + 1;
      *(_QWORD*)(v29 + 8 * v30) = 0;
      v11 = v15[11];
    } while (v14 >= v11);
  LABEL_18:
    v17 = 0;
  }
  else {
    v16 = *(_QWORD*)(v9 + 104);
    v17 = *(_QWORD*)(v16 + 8 * v10);
    if (v17 != 0) {
      if (*(float*)(v17 + 120) == -0x1.0000000000000p+0f) {
        v18 = *(_QWORD*)(v16 + 8 * v10);
        *(_QWORD*)(v16 + 8 * v14) = *(_QWORD*)(v17 + 56);
        spine_EventQueue_interrupt(*(_QWORD**)(v9 + 144), v18);
        spine_EventQueue_end((_QWORD*)v15[18], v17);
        for (i = *(_QWORD*)(v17 + 48); i != 0; i = *(_QWORD*)(i + 48)) {
          spine_EventQueue_dispose((_QWORD*)v15[18], i);
        }
        *(_QWORD*)(v17 + 48) = 0;
        v17 = *(_QWORD*)(v17 + 56);
        v20 = 0;
        v21 = v15[7];
        v22 = v12 & 1;
        if (v21 == 0) {
          goto LABEL_10;
        }
      }
      else {
        for (j = *(_QWORD*)(v17 + 48); j != 0; j = *(_QWORD*)(j + 48)) {
          spine_EventQueue_dispose((_QWORD*)v15[18], j);
        }
        *(_QWORD*)(v17 + 48) = 0;
        v20 = 1;
        v21 = v15[7];
        v22 = v12 & 1;
        if (v21 == 0) {
          goto LABEL_10;
        }
      }
      goto LABEL_20;
    }
  }
  v20 = 1;
  v21 = v15[7];
  v22 = v12 & 1;
  if (v21 == 0) {
  LABEL_10:
    v23 = GameRoutine_4e800(
        272, (__int64)"/Program/Externals/Spine/include\\spine/Pool.h", 0x39u);
    spine_TrackEntry_TrackEntry(v23);
    goto LABEL_21;
  }
LABEL_20:
  v31 = v21 - 1;
  v23 = *(_QWORD*)(v15[9] + 8 * v31);
  v15[7] = v31;
LABEL_21:
  *(_DWORD*)(v23 + 72) = v14;
  *(_QWORD*)(v23 + 32) = v13;
  *(_BYTE*)(v23 + 76) = v22;
  *(_QWORD*)(v23 + 77) = 0;
  *(_QWORD*)(v23 + 85) = 0;
  *(_DWORD*)(v23 + 92) = 0;
  *(float*)(v23 + 96) = spine_Animation_getDuration(v13);
  *(_QWORD*)(v23 + 108) = 0;
  *(_QWORD*)(v23 + 100) = 0xBF800000BF800000LL;
  *(_QWORD*)(v23 + 116) = 0xBF800000BF800000LL;
  *(_QWORD*)(v23 + 124) = 0x3F8000007F7FFFFFLL;
  *(_QWORD*)(v23 + 132) = 1065353216;
  if (v17 != 0) {
    v32 = spine_AnimationStateData_getMix(v15[4], *(_QWORD*)(v17 + 32), v13);
  }
  else {
    v32 = 0x0.0p+0f;
  }
  *(float*)(v23 + 140) = v32;
  *(_QWORD*)(v23 + 144) = 1065353216;
  *(_DWORD*)(v23 + 152) = 2;
  spine_AnimationState_setCurrent((__int64)v15, v14, v23, v20);
  spine_EventQueue_drain(v15[18]);
  return v23;
}

#pragma GCC visibility pop
