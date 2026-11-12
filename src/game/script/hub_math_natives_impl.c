#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

extern _UNKNOWN* GameData_212c188;
extern __int64* as_g_script_manager_ptr;
extern __int64 as_g_thread_info;
float powf(float, float);
void hub_math_EaseInOutRate(float a1, float a2);

void hub_math_EaseInOutRate(float a1, float a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;

  v4 = *as_g_script_manager_ptr;
  v5 = *(
      _QWORD*)(v4 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v5 != 0) {
    v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 472LL))(v5);
  }
  else {
    v6 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v6 + 24) + 448LL))(
      *(_QWORD*)(v6 + 24), 1);
  v7 = *(_QWORD**)(v6 + 2240);
  *(_QWORD*)(v6 + 2240) = 0;
  if (v7 == (_QWORD*)(v6 + 2208)) {
    v8 = 32;
  }
  else {
    if (v7 == nullptr) {
      goto LABEL_9;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v7 + v8))((__int64)v7);
LABEL_9:
  v9 = (float)(PSEUDO_UNFUSED(a1 * 0x1.921fb60000000p+1f)) +
       (float)(roundf((float)(a1 * 0x1.921fb60000000p+1f) *
                      0x1.45f3060000000p-3f) *
               -0x1.921fb60000000p+2f);
  if (v9 <= 0x1.921fb60000000p+0f) {
    v11 = 0x1.0000000000000p+0f;
    if (v9 >= -0x1.921fb60000000p+0f) {
      goto LABEL_14;
    }
    v10 = -0x1.921fb60000000p+1f;
  }
  else {
    v10 = 0x1.921fb60000000p+1f;
  }
  v9 = v10 - v9;
  v11 = -0x1.0000000000000p+0f;
LABEL_14:
  v12 = v9 * v9;
  v13 =
      v11 *
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
                                                                                            v12)) *
                                                                            v12)) *
                                                         v12)) *
                                         v12)) *
                      v12) +
              0x1.0000000000000p+0f);
  v14 = 0x1.0000000000000p+0f / a2;
  v15 = fabsf(v13);
  if (a2 < 0x1.0000000000000p+0f) {
    v14 = 0x1.0000000000000p+0f;
  }
  powf(v15, v14);
}

#pragma GCC visibility pop
