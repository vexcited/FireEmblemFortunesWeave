#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c958;
extern __int128 GameData_1a82dd0;
extern __int128 GameData_1a83090;
extern __int128 GameData_1a83610;
float fmodf(float, float);
float TutorialMeshData_ResetMatrix(__int64 a1);

float TutorialMeshData_ResetMatrix(__int64 a1)
{
  float v2;
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
  float v18;
  float v19;
  bool v20;
  float v21;
  float v22;
  float v23;
  __int128 v24;
  float32x2_t v25;
  float result;

  v2 = 0x1.0000000000000p+0f;
  v3 = *(_OWORD*)(a1 + 176);
  v4 = *((_QWORD*)GameData_212c958 + 1);
  *(_QWORD*)(a1 + 80) = *(_QWORD*)GameData_212c958;
  *(_QWORD*)(a1 + 88) = v4;
  *(_OWORD*)(a1 + 16) = GameData_1a82dd0;
  *(_OWORD*)(a1 + 32) = GameData_1a83610;
  *(_OWORD*)(a1 + 48) = GameData_1a83090;
  *(_OWORD*)(a1 + 64) = v3;
  v5 = *(float*)(a1 + 192) + 0x1.0000000000000p-1f;
  if (v5 > 0x1.8000000000000p+1f) {
    v5 = 0x1.8000000000000p+1f;
  }
  v6 = fmodf(v5, 0x1.0000000000000p+0f);
  if (v6 >= 0x0.0p+0f) {
    v7 = v6 + 0x0.0p+0f;
  }
  else {
    v7 = (float)(v6 + 0x0.0p+0f) + 0x1.0000000000000p+0f;
  }
  v8 = fmodf(v7, 0x1.0000000000000p+0f);
  v9 = fmodf(v7, 0x1.0000000000000p-1f);
  v10 = v9 + 0x0.0p+0f;
  v11 = 0x1.0000000000000p-1f - v9;
  if (v8 < 0x1.0000000000000p-1f) {
    v11 = v10;
  }
  v12 = v11 + v11;
  if (v12 <= 0x1.0000000000000p+0f) {
    v13 = v12;
  }
  else {
    v13 = 0x1.0000000000000p+0f;
  }
  if (v12 >= 0x0.0p+0f) {
    v14 = v13;
  }
  else {
    v14 = 0x0.0p+0f;
  }
  v15 = (float)(PSEUDO_UNFUSED((float)(v14 * v14) * 0x1.921fb60000000p+1f)) +
        (float)(roundf((float)((float)(v14 * v14) * 0x1.921fb60000000p+1f) *
                       0x1.45f3060000000p-3f) *
                -0x1.921fb60000000p+2f);
  if (v15 <= 0x1.921fb60000000p+0f) {
    if (v15 >= -0x1.921fb60000000p+0f) {
      goto LABEL_19;
    }
    v16 = -0x1.921fb60000000p+1f;
  }
  else {
    v16 = 0x1.921fb60000000p+1f;
  }
  v2 = -0x1.0000000000000p+0f;
  v15 = v16 - v15;
LABEL_19:
  v17 = v15 * v15;
  v18 =
      v2 *
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
                                                                                            v17)) *
                                                                            v17)) *
                                                         v17)) *
                                         v17)) *
                      v17) +
              0x1.0000000000000p+0f);
  v19 = fabsf(v18);
  v20 = v18 < 0x0.0p+0f;
  v21 = -0x1.0000000000000p+0f;
  v22 = v19 * 0x1.0000000000000p-1f;
  if (v20) {
    v21 = 0x1.0000000000000p+0f;
  }
  v23 = fminf(fmaxf((float)(v22 * v21) + 0x1.0000000000000p-1f, 0x0.0p+0f),
              0x1.0000000000000p+0f);
  *(_QWORD*)&v24 = *(_QWORD*)(a1 + 80);
  LANES64(v25).n64_u64[0] = *(unsigned __int64*)(a1 + 88);
  result = vmuls_lane_f32(
      (float)(v23 * 0x1.8000000000000p+1f) + 0x1.0000000000000p+0f, v25, 1);
  LANES64(v25).n64_f32[1] = result;
  *((float32x2_t*)&v24 + 1) = v25;
  *(_OWORD*)(a1 + 80) = v24;
  return result;
}

#pragma GCC visibility pop
