#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_10de7c0(_QWORD);
extern __int64 GameData_21ec7b0;
__int64 ActionPassiveSkill_Unknown5(__int64 result);
extern __int64 game_g_frame_clock;
float* ActionPassiveSkill_Unknown6(float* result);

__int64 ActionPassiveSkill_Unknown5(__int64 result)
{
  __int64 v1;
  _DWORD* v2;
  _DWORD* v3;
  __int64 v4;
  int v5;
  int v7;
  int v8;
  int v9;
  int v11;

  v1 = *(_QWORD*)(result + 32);
  v2 = *(_DWORD**)v1;
  v3 = *(_DWORD**)(v1 + 8);
  if (*(_DWORD**)v1 == v3) {
    v9 = *(_DWORD*)(result + 16);
    if (v9 != 1 && v9 != 3) {
      if (v9 == 2) {
        v11 = 3;
      }
      else {
        v11 = 1;
      }
      *(_DWORD*)(result + 16) = v11;
    }
  }
  else if (GameData_21ec7b0 != 0 &&
           (v4 = *(_QWORD*)(GameData_21ec7b0 + 8)) != 0 &&
           (*(_BYTE*)(v4 + 113) & 0x80) != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 48LL))(result);
  }
  else {
    v5 = *(_DWORD*)(result + 16);
    if (v5 != 1 && v5 != 3) {
      if (v5 == 2) {
        v7 = 3;
      }
      else {
        v7 = 1;
      }
      *(_DWORD*)(result + 16) = v7;
      v2 = *(_DWORD**)v1;
      v3 = *(_DWORD**)(v1 + 8);
    }
    if (v2 != v3) {
      v8 = *(_DWORD*)(*(_QWORD*)(result + 8) + 96LL);
      do {
        if (*v2 == v8) {
          result = GameRoutine_10de7c0(v2);
        }
        v2 += 6;
      } while (v2 != v3);
    }
  }
  return result;
}

float* ActionPassiveSkill_Unknown6(float* result)
{
  float v1;
  int v2;
  __int64 v3;
  _DWORD* v4;
  float* v5;
  float v6;
  float v7;
  int v8;
  int v10;

  v1 = result[11];
  if (v1 >= 0.0f) {
    v6 = 60.0f / (float)*(int*)(game_g_frame_clock + 476);
    if (v6 <= 0.0f) {
      v7 = 0.0167f;
    }
    else {
      v7 = v6 * 0.0167f;
    }
    result[11] = v1 - v7;
  }
  else {
    v2 = *((_DWORD*)result + 10);
    v3 = **((_QWORD**)result + 4);
    if (0xAAAAAAAAAAAAAAABLL *
            ((*(_QWORD*)(*((_QWORD*)result + 4) + 8LL) - v3) >> 3) <=
        v2) {
      v8 = *((_DWORD*)result + 4);
      if (v8 != 1 && v8 != 3) {
        if (v8 == 2) {
          v10 = 3;
        }
        else {
          v10 = 1;
        }
        *((_DWORD*)result + 4) = v10;
      }
    }
    else {
      v4 = (_DWORD*)(v3 + 24LL * v2);
      if (*v4 == *(_DWORD*)(*((_QWORD*)result + 1) + 96LL)) {
        v5 = result;
        GameRoutine_10de7c0(v4);
        result = v5;
        v2 = *((_DWORD*)v5 + 10);
        v5[11] = v5[6];
      }
      *((_DWORD*)result + 10) = v2 + 1;
    }
  }
  return result;
}

#pragma GCC visibility pop
