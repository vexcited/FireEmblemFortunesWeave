#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

extern _UNKNOWN* GameData_212c190;
extern _UNKNOWN* GameData_212c2f0;
__attribute__((swiftcall)) void game_combat_106b310(PSEUDO_X8 x8_, float* a1,
                                                    float* a2, float result);

__attribute__((swiftcall)) void game_combat_106b310(PSEUDO_X8 x8_, float* a1,
                                                    float* a2, float result)
{
  float* a3 = (float*)PSEUDO_X8_VALUE(x8_);
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
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;

  {
    v4 = *a1;
    __asm__ volatile("" ::"w"(v4));
  }
  {
    v5 = a1[1];
    __asm__ volatile("" ::"w"(v5));
  }
  v6 = (float)(PSEUDO_UNFUSED(v5 * a2[1])) + (float)(*a1 * *a2);
  if (v6 >= 0x1.fffffc0000000p-1f) {
    goto LABEL_7;
  }
  if (v6 <= -0x1.fffffc0000000p-1f) {
    v4 = -v4;
    v5 = -v5;
  LABEL_7:
    *a3 = v4;
    a3[1] = v5;
    {
      result;
      return;
    }
  }
  v7 = sqrtf(0x1.0000000000000p+0f - (float)(v6 * v6));
  if (v6 >= 0x0.0p+0f) {
    {
      v11 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0);
      __asm__ volatile("" ::"w"(v11));
    }
    {
      v12 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0);
      __asm__ volatile("" ::"w"(v12));
    }
    {
      v13 =
          *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 8);
      __asm__ volatile("" ::"w"(v13));
    }
    v14 = v6 / v7;
    v15 = v7 / v6;
    v16 = v15 *
          (float)((
                      float)((float)((float)((float)(v13 +
                                                     (float)((float)((float)((
                                                                                 float)(v12 + (float)((
                                                                                                          float)((float)((float)(v11 + (float)((float)((float)(*(float*)GameData_212c2f0 * (float)(v15 * v15)) - *((float*)GameData_212c2f0 + 1)) * (float)(v15 * v15))) * (float)(v15 * v15)) - *(float*)((
                                                                                                                                                                                                                                                                                                               char*)((_UNKNOWN**)0x8LL) +
                                                                                                                                                                                                                                                                                                           (_QWORD)
                                                                                                                                                                                                                                                                                                               GameData_212c2f0 +
                                                                                                                                                                                                                                                                                                           4)) *
                                                                                                      (float)(v15 *
                                                                                                              v15))) *
                                                                             (float)(v15 *
                                                                                     v15)) -
                                                                     *(float*)((char*)((
                                                                                   __int128*)0x10LL) +
                                                                               (_QWORD)
                                                                                   GameData_212c2f0 +
                                                                               4)) *
                                                             (float)(v15 *
                                                                     v15))) *
                                             (float)(v15 * v15)) -
                                     *(float*)((char*)((__int128*)0x10LL) +
                                               (_QWORD)GameData_212c2f0 + 12)) *
                             (float)(v15 * v15)) +
                  0x1.0000000000000p+0f);
    v17 =
        0x1.921fb60000000p+0f -
        (float)(PSEUDO_UNFUSED(
            v14 * (float)((
                              float)((float)((float)((float)(v13 + (float)((float)((
                                                                                       float)((
                                                                                                  float)(v12 + (float)((float)((float)((float)(v11 + (float)((float)((float)(*(float*)GameData_212c2f0 * (float)(v14 * v14)) - *((float*)GameData_212c2f0 + 1)) * (float)(v14 * v14))) * (float)(v14 * v14)) - *(
                                                                                                                                                                                                                                                                                                                   float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 + 4)) *
                                                                                                                       (float)(v14 *
                                                                                                                               v14))) *
                                                                                              (float)(v14 *
                                                                                                      v14)) -
                                                                                   *(float*)((char*)((
                                                                                                 __int128*)0x10LL) +
                                                                                             (_QWORD)
                                                                                                 GameData_212c2f0 +
                                                                                             4)) *
                                                                           (float)(v14 *
                                                                                   v14))) *
                                                     (float)(v14 * v14)) -
                                             *(float*)((char*)((
                                                           __int128*)0x10LL) +
                                                       (_QWORD)
                                                           GameData_212c2f0 +
                                                       12)) *
                                     (float)(v14 * v14)) +
                          0x1.0000000000000p+0f)));
    if (v6 > 0x1.6a09e60000000p-1f) {
      v9 = v16;
    }
    else {
      v9 = v17;
    }
  }
  else if (v6 >= -0x1.6a09e60000000p-1f) {
    v10 = (float)-v6 / v7;
    v9 =
        (float)(PSEUDO_UNFUSED(
            v10 *
            (float)((
                        float)((float)-(float)(*(float*)((char*)((
                                                             __int128*)0x10LL) +
                                                         (_QWORD)
                                                             GameData_212c2f0 +
                                                         12) -
                                               (float)((
                                                           float)(*(float*)((char*)((
                                                                                __int128*)0x10LL) +
                                                                            (_QWORD)
                                                                                GameData_212c2f0 +
                                                                            8) +
                                                                  (float)((float)-(float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 4) - (float)((float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0) + (float)((float)-(float)(*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 + 4) -
                                                                                                                                                                                                                                                                            (float)((
                                                                                                                                                                                                                                                                                        float)(*(
                                                                                                                                                                                                                                                                                                   float*)((
                                                                                                                                                                                                                                                                                                               char*)((
                                                                                                                                                                                                                                                                                                               _UNKNOWN**)0x8LL) +
                                                                                                                                                                                                                                                                                                           (_QWORD)GameData_212c2f0) +
                                                                                                                                                                                                                                                                                               (float)((float)-(
                                                                                                                                                                                                                                                                                                           float)(*((float*)GameData_212c2f0 + 1) - (float)(*(float*)GameData_212c2f0 * (float)(v10 *
                                                                                                                                                                                                                                                                                                                                                                                                v10))) *
                                                                                                                                                                                                                                                                                                       (float)(v10 *
                                                                                                                                                                                                                                                                                                               v10))) *
                                                                                                                                                                                                                                                                                    (float)(v10 *
                                                                                                                                                                                                                                                                                            v10))) *
                                                                                                                                                                                                                                                            (float)(v10 *
                                                                                                                                                                                                                                                                    v10))) *
                                                                                                                                                                         (float)(v10 *
                                                                                                                                                                                 v10))) *
                                                                          (float)(v10 *
                                                                                  v10))) *
                                                       (float)(v10 * v10))) *
                               (float)(v10 * v10)) +
                    0x1.0000000000000p+0f))) +
        0x1.921fb60000000p+0f;
  }
  else {
    v8 = (float)-v7 / v6;
    v9 =
        0x1.921fb60000000p+1f -
        (float)(PSEUDO_UNFUSED(
            v8 *
            (float)((float)((float)-(
                                float)(*(float*)((char*)((__int128*)0x10LL) +
                                                 (_QWORD)GameData_212c2f0 +
                                                 12) -
                                       (float)((float)(*(float*)((char*)((
                                                                     __int128*)0x10LL) +
                                                                 (_QWORD)
                                                                     GameData_212c2f0 +
                                                                 8) +
                                                       (float)((float)-(float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 4) - (float)((float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0) + (float)((float)-(float)(*(float*)((char*)((
                                                                                                                                                                                                                                                                               _UNKNOWN**)0x8LL) +
                                                                                                                                                                                                                                                                           (_QWORD)
                                                                                                                                                                                                                                                                               GameData_212c2f0 +
                                                                                                                                                                                                                                                                           4) -
                                                                                                                                                                                                                                                                 (float)((
                                                                                                                                                                                                                                                                             float)(*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0) + (float)((float)-(float)(*((float*)GameData_212c2f0 + 1) - (float)(*(float*)GameData_212c2f0 * (float)(v8 * v8))) * (float)(v8 *
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  v8))) *
                                                                                                                                                                                                                                                                         (float)(v8 *
                                                                                                                                                                                                                                                                                 v8))) *
                                                                                                                                                                                                                                                 (float)(v8 *
                                                                                                                                                                                                                                                         v8))) *
                                                                                                                                                              (float)(v8 *
                                                                                                                                                                      v8))) *
                                                               (float)(v8 *
                                                                       v8))) *
                                               (float)(v8 * v8))) *
                            (float)(v8 * v8)) +
                    0x1.0000000000000p+0f)));
  }
  v18 =
      v9 + (float)(roundf(v9 * 0x1.45f3060000000p-3f) * -0x1.921fb60000000p+2f);
  v19 = -0x1.921fb60000000p+1f - v18;
  if (v18 >= -0x1.921fb60000000p+0f) {
    v19 = v18;
  }
  if (v18 > 0x1.921fb60000000p+0f) {
    v20 = 0x1.921fb60000000p+1f - v18;
  }
  else {
    v20 = v19;
  }
  {
    v21 = *((float*)GameData_212c190 + 1);
    __asm__ volatile("" ::"w"(v21));
  }
  {
    v22 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c190);
    __asm__ volatile("" ::"w"(v22));
  }
  {
    v23 = -*(float*)GameData_212c190;
    __asm__ volatile("" ::"w"(v23));
  }
  {
    v25 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190);
    __asm__ volatile("" ::"w"(v25));
  }
  {
    v24 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190 + 4);
    __asm__ volatile("" ::"w"(v24));
  }
  v26 =
      v20 *
      (float)((float)((float)-(
                          float)(v22 -
                                 (float)((float)(v24 +
                                                 (float)((float)-(
                                                             float)(v25 -
                                                                    (float)((float)(v21 -
                                                                                    (float)(*(float*)
                                                                                                GameData_212c190 *
                                                                                            (float)(v20 *
                                                                                                    v20))) *
                                                                            (float)(v20 *
                                                                                    v20))) *
                                                         (float)(v20 * v20))) *
                                         (float)(v20 * v20))) *
                      (float)(v20 * v20)) +
              0x1.0000000000000p+0f);
  v27 = 0x1.0000000000000p+0f - result;
  v28 = result * v9;
  v29 = (float)(PSEUDO_UNFUSED(v27 * v9)) +
        (float)(roundf((float)(v27 * v9) * 0x1.45f3060000000p-3f) *
                -0x1.921fb60000000p+2f);
  v30 = -0x1.921fb60000000p+1f - v29;
  if (v29 >= -0x1.921fb60000000p+0f) {
    v30 = v29;
  }
  if (v29 > 0x1.921fb60000000p+0f) {
    v31 = 0x1.921fb60000000p+1f - v29;
  }
  else {
    v31 = v30;
  }
  v32 =
      v31 *
      (float)((float)((float)((float)((float)(v24 +
                                              (float)((float)((float)((float)(v21 +
                                                                              (float)(v23 *
                                                                                      (float)(v31 *
                                                                                              v31))) *
                                                                      (float)(v31 *
                                                                              v31)) -
                                                              v25) *
                                                      (float)(v31 * v31))) *
                                      (float)(v31 * v31)) -
                              v22) *
                      (float)(v31 * v31)) +
              0x1.0000000000000p+0f);
  v33 = v28 +
        (float)(roundf(v28 * 0x1.45f3060000000p-3f) * -0x1.921fb60000000p+2f);
  if (v33 > 0x1.921fb60000000p+0f) {
    v34 = 0x1.921fb60000000p+1f;
  LABEL_26:
    v33 = v34 - v33;
    goto LABEL_27;
  }
  if (v33 < -0x1.921fb60000000p+0f) {
    v34 = -0x1.921fb60000000p+1f;
    goto LABEL_26;
  }
LABEL_27:
  v35 =
      v33 *
      (float)((float)((float)((float)((float)(v24 +
                                              (float)((float)((float)((float)(v21 +
                                                                              (float)(v23 *
                                                                                      (float)(v33 *
                                                                                              v33))) *
                                                                      (float)(v33 *
                                                                              v33)) -
                                                              v25) *
                                                      (float)(v33 * v33))) *
                                      (float)(v33 * v33)) -
                              v22) *
                      (float)(v33 * v33)) +
              0x1.0000000000000p+0f);
  {
    v36 = *a2 * v35;
    __asm__ volatile("" ::"w"(v36));
  }
  result = (float)(PSEUDO_UNFUSED(v32 * a1[1])) +
           (float)(PSEUDO_UNFUSED(a2[1] * v35));
  *a3 = (float)(0x1.0000000000000p+0f / v26) *
        (float)((float)(PSEUDO_UNFUSED(v32 * *a1)) + v36);
  a3[1] = (float)(0x1.0000000000000p+0f / v26) * result;
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
