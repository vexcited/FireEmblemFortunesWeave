#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 GameData_21ec7b0;
__int64 ActionDamageWait_Unknown5(__int64 result);
__int64 CharacterAnimator_1079e10(__int64);
__int64 CharacterSelfie_10a6b90();
__int64 ActionDamageWait_Unknown6(__int64 a1);

__int64 ActionDamageWait_Unknown5(__int64 result)
{
  __int64 v1;
  int v2;
  int v4;
  int v5;

  if ((GameData_21ec7b0 == 0 || (v1 = *(_QWORD*)(GameData_21ec7b0 + 8)) == 0 ||
       (*(_BYTE*)(v1 + 113) & 0x80) == 0) &&
      (*(_DWORD*)(*(_QWORD*)(result + 24) + 4LL) & 0x40000100) == 0) {
    v5 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(result + 8) + 368LL) + 120LL);
    if (v5 <= -77626399) {
      if (v5 != -972548316 && v5 != -93581017) {
        return result;
      }
    }
    else if (v5 != -77626398 && v5 != 1715476756 && v5 != 1400556095) {
      return result;
    }
    *(_DWORD*)(result + 32) = 1077936128;
    return result;
  }
  v2 = *(_DWORD*)(result + 16);
  if (v2 != 1 && v2 != 3) {
    if (v2 == 2) {
      v4 = 3;
    }
    else {
      v4 = 1;
    }
    *(_DWORD*)(result + 16) = v4;
  }
  return result;
}

__int64 ActionDamageWait_Unknown6(__int64 a1)
{

#pragma clang fp contract(off)
  float v1;
  _QWORD* v2;
  __int64 v4;
  __int64 v5;
  bool v6;
  __int64 result;
  int v8;
  int v10;
  float v11;
  int v12;

  v1 = *(float*)(a1 + 32);
  v2 = *(_QWORD**)(a1 + 8);
  if (v1 <= 0x0.0p+0f) {
    result = CharacterAnimator_1079e10(v2[46]);
    if ((result & 1) != 0) {
      v8 = *(_DWORD*)(a1 + 16);
      if (v8 != 1 && v8 != 3) {
        if (v8 == 2) {
          v10 = 3;
        }
        else {
          v10 = 1;
        }
        goto LABEL_17;
      }
    }
  }
  else {
    v4 = v2[10];
    if (v4 == 0 ||
        ((v5 = v2[11], *(_QWORD*)(v4 + 8) != -1) ? (v6 = v5 == 0) : (v6 = true),
         v6)) {
      v11 = 0x1.11570c0000000p-5f;
    }
    else {
      v11 = (float)(*(float*)(*(_QWORD*)(v5 + 304) + 16LL) *
                    0x1.0aef000000000p+4f) *
            0x1.0624de0000000p-10f;
    }
    *(float*)(a1 + 32) = v1 - v11;
    result = CharacterSelfie_10a6b90();
    if ((result & 1) != 0) {
      *(_DWORD*)(a1 + 32) = 953267991;
      return result;
    }
    if (*(float*)(a1 + 32) <= 0x0.0p+0f) {
      v12 = *(_DWORD*)(a1 + 16);
      if (v12 != 1 && v12 != 3) {
        if (v12 == 2) {
          v10 = 3;
        }
        else {
          v10 = 1;
        }
      LABEL_17:
        *(_DWORD*)(a1 + 16) = v10;
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
