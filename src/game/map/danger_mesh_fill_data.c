#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c958;
extern __int128 GameData_1a82dd0;
extern __int128 GameData_1a83090;
extern __int128 GameData_1a83610;
extern __int64* GameData_212f878;
float fmodf(float, float);
float DangerMeshFillData_ResetMatrix(__int64 a1);

float DangerMeshFillData_ResetMatrix(__int64 a1)
{
  __int128 v2;
  __int64 v3;
  float v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  bool v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  __int128 v24;
  float32x2_t v25;
  float result;

  v2 = *(_OWORD*)(a1 + 176);
  v3 = *((_QWORD*)GameData_212c958 + 1);
  *(_QWORD*)(a1 + 80) = *(_QWORD*)GameData_212c958;
  *(_QWORD*)(a1 + 88) = v3;
  *(_OWORD*)(a1 + 16) = GameData_1a82dd0;
  *(_OWORD*)(a1 + 32) = GameData_1a83610;
  *(_OWORD*)(a1 + 48) = GameData_1a83090;
  *(_OWORD*)(a1 + 64) = v2;
  v4 = *(float*)(*GameData_212f878 + 1512);
  *(float*)&v2 = *(float*)(*GameData_212f878 + 1508) * 0x1.3333340000000p-3f;
  v5 = *(float*)&v2 * 0x1.4000000000000p+5f;
  v6 = *(float*)&v2 * 0x1.9000000000000p+6f;
  v7 = (float)(*(float*)&v2 * 0x1.9000000000000p+6f) + 0.5f;
  v8 = 0.0f;
  if (v7 == 0.0f) {
    if (v5 > 0.0f) {
      goto LABEL_3;
    }
  }
  else {
    v11 = fmodf(*(float*)(*(_QWORD*)(a1 + 248) + 136LL), v7);
    if (v11 >= 0.0f) {
      v8 = v11 + 0.0f;
    }
    else {
      v8 = v7 + (float)(v11 + 0.0f);
    }
    if (v8 < v5) {
    LABEL_3:
      if (v5 == 0.0f) {
        v10 = 0.0f;
      }
      else {
        v9 = v8 / v5;
        v10 = 0x1.0000000000000p+0f;
        if (v9 <= 0x1.0000000000000p+0f) {
          v10 = v9;
        }
        if (v9 < 0.0f) {
          v10 = 0.0f;
        }
      }
      goto LABEL_22;
    }
  }
  if ((float)(v6 - v5) == 0.0f) {
    v15 = 0.0f;
  }
  else {
    v12 = (float)(v8 - v5) / (float)(v6 - v5);
    v13 = 0x1.0000000000000p+0f;
    if (v12 <= 0x1.0000000000000p+0f) {
      v13 = v12;
    }
    v14 = v12 < 0.0f;
    v15 = 0.0f;
    if (!v14) {
      v15 = v13;
    }
  }
  v10 = 0x1.0000000000000p+0f - v15;
LABEL_22:
  v16 = 0x1.0000000000000p+0f;
  v17 = (float)((float)(0x1.0000000000000p+0f - v10) * 0x1.921fb60000000p+1f) +
        (float)(roundf((float)((float)(0x1.0000000000000p+0f - v10) *
                               0x1.921fb60000000p+1f) *
                       0x1.45f3060000000p-3f) *
                -0x1.921fb60000000p+2f);
  if (v17 <= 0x1.921fb60000000p+0f) {
    if (v17 >= -0x1.921fb60000000p+0f) {
      goto LABEL_27;
    }
    v18 = -0x1.921fb60000000p+1f;
  }
  else {
    v18 = 0x1.921fb60000000p+1f;
  }
  v17 = v18 - v17;
  v16 = -0x1.0000000000000p+0f;
LABEL_27:
  v19 =
      v16 *
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
                                                                                            (float)(v17 *
                                                                                                    v17))) *
                                                                            (float)(v17 *
                                                                                    v17))) *
                                                         (float)(v17 * v17))) *
                                         (float)(v17 * v17))) *
                      (float)(v17 * v17)) +
              0x1.0000000000000p+0f);
  v20 = fabsf(v19);
  v14 = v19 < 0.0f;
  v21 = -0x1.0000000000000p+0f;
  v22 = v20 * 0.5f;
  if (v14) {
    v21 = 0x1.0000000000000p+0f;
  }
  v23 = v4 + (float)(fminf(fmaxf((float)(v22 * v21) + 0.5f, 0.0f),
                           0x1.0000000000000p+0f) *
                     (float)(0x1.0000000000000p+0f - v4));
  *(_QWORD*)&v24 = *(_QWORD*)(a1 + 80);
  LANES64(v25).n64_u64[0] = *(unsigned __int64*)(a1 + 88);
  result = vmuls_lane_f32(v23, v25, 1);
  LANES64(v25).n64_f32[1] = result;
  *((float32x2_t*)&v24 + 1) = v25;
  *(_OWORD*)(a1 + 80) = v24;
  return result;
}

#pragma GCC visibility pop
