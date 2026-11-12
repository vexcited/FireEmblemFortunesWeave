#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

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
float fmodf_alt1(float, float) __asm__("fmodf");
float powf_alt1(float, float) __asm__("powf");

float DeployEffectMeshData_ResetMatrix(__int64 a1)
{
  float v1;
  __int128 v3;
  __int64 v4;
  float v5;
  float v6;
  float v7;
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
  float v27;
  __int128 v28;
  float32x2_t v29;
  float result;

  v1 = 0x0.0p+0f;
  v3 = *(_OWORD*)(a1 + 176);
  v4 = *((_QWORD*)GameData_212c958 + 1);
  *(_QWORD*)(a1 + 80) = *(_QWORD*)GameData_212c958;
  *(_QWORD*)(a1 + 88) = v4;
  *(_OWORD*)(a1 + 16) = GameData_1a82dd0;
  *(_OWORD*)(a1 + 32) = GameData_1a83610;
  *(_OWORD*)(a1 + 48) = GameData_1a83090;
  *(_OWORD*)(a1 + 64) = v3;
  v5 = *(float*)(*GameData_212f878 + 1500);
  if (v5 > 0x0.0p+0f) {
    v1 = 0x1.0000000000000p+0f / v5;
  }
  if (*(float*)(*GameData_212f878 + 1504) >= 0x1.99999a0000000p-4f) {
    v6 = *(float*)(*GameData_212f878 + 1504);
  }
  else {
    v6 = 0x1.99999a0000000p-4f;
  }
  v7 = fmodf_alt1(
      *(float*)(a1 + 192) +
          (float)((float)(*(float*)(a1 + 244) * -0x1.47ae140000000p-4f) * v1),
      v6);
  if (v7 >= 0x0.0p+0f) {
    v8 = v7 + 0x0.0p+0f;
  }
  else {
    v8 = v6 + (float)(v7 + 0x0.0p+0f);
  }
  v9 = v1 * 0x1.99999a0000000p-4f;
  if (v8 >= (float)(v1 * 0x1.99999a0000000p-4f)) {
    v14 = (float)(PSEUDO_UNFUSED(v1 * 0x1.3333340000000p+0f)) - v9;
    if (v14 == 0x0.0p+0f) {
      v19 = 0x0.0p+0f;
    }
    else {
      v15 = v8 - v9;
      v16 = 0x1.0000000000000p+0f;
      v17 = v15 / v14;
      if (v17 <= 0x1.0000000000000p+0f) {
        v16 = v17;
      }
      v18 = v17 < 0x0.0p+0f;
      v19 = 0x0.0p+0f;
      if (!v18) {
        v19 = v16;
      }
    }
    v13 = powf_alt1(0x1.0000000000000p+0f - v19, 0x1.4000000000000p+1f);
  }
  else {
    v10 = 0x0.0p+0f;
    if (v9 != 0x0.0p+0f) {
      v11 = v8 / v9;
      v12 = 0x1.0000000000000p+0f;
      if (v11 <= 0x1.0000000000000p+0f) {
        v12 = v11;
      }
      if (v11 >= 0x0.0p+0f) {
        v10 = v12;
      }
      else {
        v10 = 0x0.0p+0f;
      }
    }
    v13 = (float)(fminf(fmaxf(v10, 0x0.0p+0f), 0x1.0000000000000p+0f) *
                  0x1.99999a0000000p-1f) +
          0x1.99999a0000000p-3f;
  }
  v20 = (float)(PSEUDO_UNFUSED(v13 * 0x1.921fb60000000p+1f)) +
        (float)(roundf((float)(v13 * 0x1.921fb60000000p+1f) *
                       0x1.45f3060000000p-3f) *
                -0x1.921fb60000000p+2f);
  if (v20 <= 0x1.921fb60000000p+0f) {
    v22 = 0x1.0000000000000p+0f;
    if (v20 >= -0x1.921fb60000000p+0f) {
      goto LABEL_30;
    }
    v21 = -0x1.921fb60000000p+1f;
  }
  else {
    v21 = 0x1.921fb60000000p+1f;
  }
  v20 = v21 - v20;
  v22 = -0x1.0000000000000p+0f;
LABEL_30:
  v23 =
      v22 *
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
                                                                                            (float)(v20 *
                                                                                                    v20))) *
                                                                            (float)(v20 *
                                                                                    v20))) *
                                                         (float)(v20 * v20))) *
                                         (float)(v20 * v20))) *
                      (float)(v20 * v20)) +
              0x1.0000000000000p+0f);
  v24 = fabsf(v23);
  v18 = v23 < 0x0.0p+0f;
  v25 = -0x1.0000000000000p+0f;
  v26 = v24 * 0x1.0000000000000p-1f;
  if (v18) {
    v25 = 0x1.0000000000000p+0f;
  }
  v27 = (float)(v26 * v25) + 0x1.0000000000000p-1f;
  if (v27 < 0x1.47ae140000000p-7f) {
    v27 = 0x0.0p+0f;
  }
  *(_QWORD*)&v28 = *(_QWORD*)(a1 + 80);
  LANES64(v29).n64_u64[0] = *(unsigned __int64*)(a1 + 88);
  result = vmuls_lane_f32(v27, v29, 1);
  LANES64(v29).n64_f32[1] = result;
  *((float32x2_t*)&v28 + 1) = v29;
  *(_OWORD*)(a1 + 80) = v28;
  return result;
}

#pragma GCC visibility pop
