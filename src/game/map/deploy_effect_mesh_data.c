#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c958;
extern __int128 GameData_1a82dd0;
extern __int128 GameData_1a83090;
extern __int128 GameData_1a83610;
extern __int64* GameData_212f878;
float fmodf(_QWORD, float, float);
float powf(long double, float);
float DeployEffectMeshData_ResetMatrix(__int64 a1);

float DeployEffectMeshData_ResetMatrix(__int64 a1)
{
  float v1;
  __int128 v3;
  __int64 v4;
  float v5;
  float v6;
  long double v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  bool v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  __int128 v27;
  float32x2_t v28;
  float result;

  v1 = 0.0;
  v3 = *(_OWORD*)(a1 + 176);
  v4 = *((_QWORD*)GameData_212c958 + 1);
  *(_QWORD*)(a1 + 80) = *(_QWORD*)GameData_212c958;
  *(_QWORD*)(a1 + 88) = v4;
  *(_OWORD*)(a1 + 16) = GameData_1a82dd0;
  *(_OWORD*)(a1 + 32) = GameData_1a83610;
  *(_OWORD*)(a1 + 48) = GameData_1a83090;
  *(_OWORD*)(a1 + 64) = v3;
  v5 = *(float*)(*GameData_212f878 + 1500);
  if (v5 > 0.0) {
    v1 = 0x1.0000000000000p+0 / v5;
  }
  if (*(float*)(*GameData_212f878 + 1504) >= 0x1.99999a0000000p-4) {
    v6 = *(float*)(*GameData_212f878 + 1504);
  }
  else {
    v6 = 0x1.99999a0000000p-4;
  }
  *(float*)&v7 = fmodf(
      a1,
      *(float*)(a1 + 192) +
          (float)((float)(*(float*)(a1 + 244) * -0x1.47ae140000000p-4) * v1),
      v6);
  if (*(float*)&v7 >= 0.0) {
    v8 = *(float*)&v7 + 0.0;
  }
  else {
    v8 = v6 + (float)(*(float*)&v7 + 0.0);
  }
  v9 = v1 * 0x1.99999a0000000p-4;
  if (v8 >= (float)(v1 * 0x1.99999a0000000p-4)) {
    v14 = (float)(v1 * 0x1.3333340000000p+0) - v9;
    if (v14 == 0.0) {
      *(_QWORD*)&v7 = 0;
    }
    else {
      v15 = v8 - v9;
      v16 = 0x1.0000000000000p+0;
      v17 = v15 / v14;
      if (v17 <= 0x1.0000000000000p+0) {
        v16 = v17;
      }
      v18 = v17 < 0.0;
      *(_QWORD*)&v7 = 0;
      if (!v18) {
        *(float*)&v7 = v16;
      }
    }
    *(float*)&v7 = 0x1.0000000000000p+0 - *(float*)&v7;
    v13 = powf(v7, 2.5);
  }
  else {
    v10 = 0.0;
    if (v9 != 0.0) {
      v11 = v8 / v9;
      v12 = 0x1.0000000000000p+0;
      if (v11 <= 0x1.0000000000000p+0) {
        v12 = v11;
      }
      if (v11 >= 0.0) {
        v10 = v12;
      }
      else {
        v10 = 0.0;
      }
    }
    v13 = (float)(fminf(fmaxf(v10, 0.0), 0x1.0000000000000p+0) *
                  0x1.99999a0000000p-1) +
          0x1.99999a0000000p-3;
  }
  v19 = (float)(v13 * 0x1.921fb60000000p+1) +
        (float)(roundf((float)(v13 * 0x1.921fb60000000p+1) *
                       0x1.45f3060000000p-3) *
                -0x1.921fb60000000p+2);
  if (v19 <= 0x1.921fb60000000p+0) {
    v21 = 0x1.0000000000000p+0;
    if (v19 >= -0x1.921fb60000000p+0) {
      goto LABEL_30;
    }
    v20 = -0x1.921fb60000000p+1;
  }
  else {
    v20 = 0x1.921fb60000000p+1;
  }
  v19 = v20 - v19;
  v21 = -0x1.0000000000000p+0;
LABEL_30:
  v22 =
      v21 *
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
                                                                                            (float)(v19 *
                                                                                                    v19))) *
                                                                            (float)(v19 *
                                                                                    v19))) *
                                                         (float)(v19 * v19))) *
                                         (float)(v19 * v19))) *
                      (float)(v19 * v19)) +
              0x1.0000000000000p+0);
  v23 = fabsf(v22);
  v18 = v22 < 0.0;
  v24 = -0x1.0000000000000p+0;
  v25 = v23 * 0.5;
  if (v18) {
    v24 = 0x1.0000000000000p+0;
  }
  v26 = (float)(v25 * v24) + 0.5;
  if (v26 < 0x1.47ae140000000p-7) {
    v26 = 0.0;
  }
  *(_QWORD*)&v27 = *(_QWORD*)(a1 + 80);
  LANES64(v28).n64_u64[0] = *(unsigned __int64*)(a1 + 88);
  result = vmuls_lane_f32(v26, v28, 1);
  LANES64(v28).n64_f32[1] = result;
  *((float32x2_t*)&v27 + 1) = v28;
  *(_OWORD*)(a1 + 80) = v27;
  return result;
}

#pragma GCC visibility pop
