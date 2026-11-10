#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* game_character_CharacterIshAppear_Disappear(_QWORD*);
__int64 GameRoutine_11085c0(__int64);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);
extern _UNKNOWN* GameData_21300d0;
extern int* GameData_21300c8;
float* ActionIshDisappear_Unknown6(float* result);

float* ActionIshDisappear_Unknown6(float* result)
{

#pragma clang fp contract(off)
  __int64 v1;
  float* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  bool v6;
  float v7;
  float v8;
  __int64 v9;
  __int64 v10;
  bool v11;
  __int64 v12;
  unsigned __int8 explicit;
  int* v14;
  int v15;
  __int64 v16;
  __int64 v17;
  int v18;
  _QWORD* v19;
  int v20;
  int v22;
  int v23;
  __int64 v24;

  v1 = *((_QWORD*)result + 1);
  v2 = result;
  v3 = *(_QWORD*)(v1 + 80);
  if (v3 == 0 || ((v4 = *(_QWORD*)(v3 + 8), v5 = *(_QWORD*)(v1 + 88), v4 != -1)
                      ? (v6 = v5 == 0)
                      : (v6 = true),
                  v6)) {
    v7 = 0x1.11570c0000000p-5f;
  }
  else {
    v7 = (float)(*(float*)(*(_QWORD*)(v5 + 304) + 16LL) *
                 0x1.0aef000000000p+4f) *
         0x1.0624de0000000p-10f;
  }
  v8 = result[8] - v7;
  result[8] = v8;
  if (v8 <= 0x0.0p+0f) {
    v9 = *(_QWORD*)(v1 + 80);
    if (v9 == 0 || ((v10 = *(_QWORD*)(v1 + 88), *(_QWORD*)(v9 + 8) != -1)
                        ? (v11 = v10 == 0)
                        : (v11 = true),
                    v11)) {
      v12 = 0;
    }
    else {
      v12 = *(_QWORD*)(v10 + 8);
    }
    explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_21300d0,
                                    memory_order_acquire);
    v14 = GameData_21300c8;
    if ((explicit & 1) == 0) {
      v24 = v12;
      v23 = __cxa_guard_acquire(GameData_21300d0);
      v14 = GameData_21300c8;
      v12 = v24;
      if (v23 != 0) {
        *GameData_21300c8 = wld_Crc32(0, "CharacterIshAppear", 0x12u);
        __cxa_guard_release(GameData_21300d0);
        v14 = GameData_21300c8;
        v12 = v24;
      }
    }
    v15 = *v14;
    v16 = *(_QWORD*)(v12 + 512);
    v17 = v16;
    do {
      if (v17 == *(_QWORD*)(v12 + 504)) {
        goto LABEL_22;
      }
      v18 = *(_DWORD*)(v17 - 16);
      v17 -= 16;
      v16 -= 16;
    } while (v18 != v15);
    if (*(_QWORD*)(v12 + 512) == v16 ||
        (v19 = *(_QWORD**)(v16 + 8)) == nullptr) {
    LABEL_22:
      v19 = (_QWORD*)GameRoutine_11085c0(v12);
    }
    result = (float*)game_character_CharacterIshAppear_Disappear(v19);
    v20 = *((_DWORD*)v2 + 4);
    if (v20 != 1 && v20 != 3) {
      if (v20 == 2) {
        v22 = 3;
      }
      else {
        v22 = 1;
      }
      *((_DWORD*)v2 + 4) = v22;
    }
  }
  return result;
}

#pragma GCC visibility pop
