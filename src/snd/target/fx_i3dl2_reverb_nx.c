#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

extern _UNKNOWN* GameData_212c190;
float FxI3dl2ReverbNX_14fb90(float a1, float a2, float a3, float a4);

float FxI3dl2ReverbNX_14fb90(float a1, float a2, float a3, float a4)
{
  float v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  bool v13;
  float v14;
  float v15;
  float result;
  float v17;

  v4 = (float)((float)((float)(a4 * 0x1.6800000000000p+6f) *
                       0x1.921fb60000000p+1f) /
               0x1.6800000000000p+7f) +
       (float)(roundf((float)((float)((float)(a4 * 0x1.6800000000000p+6f) *
                                      0x1.921fb60000000p+1f) /
                              0x1.6800000000000p+7f) *
                      0x1.45f3060000000p-3f) *
               -0x1.921fb60000000p+2f);
  if (v4 <= 0x1.921fb60000000p+0f) {
    if (v4 >= -0x1.921fb60000000p+0f) {
      goto LABEL_6;
    }
    v5 = -0x1.921fb60000000p+1f;
  }
  else {
    v5 = 0x1.921fb60000000p+1f;
  }
  v4 = v5 - v4;
LABEL_6:
  v6 = *((float*)GameData_212c190 + 1);
  v7 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c190);
  v9 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190);
  v8 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190 + 4);
  v10 =
      (float)((float)((float)(v4 *
                              (float)((float)((float)-(
                                                  float)(v7 -
                                                         (float)((float)(v8 +
                                                                         (float)((float)-(
                                                                                     float)(v9 -
                                                                                            (float)((float)(v6 -
                                                                                                            (float)(*(float*)
                                                                                                                        GameData_212c190 *
                                                                                                                    (float)(v4 *
                                                                                                                            v4))) *
                                                                                                    (float)(v4 *
                                                                                                            v4))) *
                                                                                 (float)(v4 *
                                                                                         v4))) *
                                                                 (float)(v4 *
                                                                         v4))) *
                                              (float)(v4 * v4)) +
                                      0x1.0000000000000p+0f)) *
                      0x1.6800000000000p+6f) *
              0x1.921fb60000000p+1f) /
      0x1.6800000000000p+7f;
  v11 = v10 +
        (float)(roundf(v10 * 0x1.45f3060000000p-3f) * -0x1.921fb60000000p+2f);
  if (v11 <= 0x1.921fb60000000p+0f) {
    if (v11 >= -0x1.921fb60000000p+0f) {
      goto LABEL_11;
    }
    v12 = -0x1.921fb60000000p+1f;
  }
  else {
    v12 = 0x1.921fb60000000p+1f;
  }
  v11 = v12 - v11;
LABEL_11:
  v13 = a3 == 0x0.0p+0f;
  v14 =
      v11 *
      (float)((float)((float)((float)((float)(v8 +
                                              (float)((float)((float)((float)(v6 +
                                                                              (float)((float)-*(
                                                                                          float*)
                                                                                          GameData_212c190 *
                                                                                      (float)(v11 *
                                                                                              v11))) *
                                                                      (float)(v11 *
                                                                              v11)) -
                                                              v9) *
                                                      (float)(v11 * v11))) *
                                      (float)(v11 * v11)) -
                              v7) *
                      (float)(v11 * v11)) +
              0x1.0000000000000p+0f);
  v15 = (float)(a2 - a3) *
        (float)(0x1.0000000000000p+0f -
                (float)(PSEUDO_UNFUSED(
                    (float)(0x1.0000000000000p+0f -
                            (float)((float)(a1 - a3) / (float)(a2 - a3))) *
                    v14)));
  result =
      a2 *
      (float)(0x1.0000000000000p+0f -
              (float)(PSEUDO_UNFUSED(
                  (float)(0x1.0000000000000p+0f - (float)(a1 / a2)) * v14)));
  v17 = a3 + v15;
  if (!v13) {
    return v17;
  }
  return result;
}

#pragma GCC visibility pop
