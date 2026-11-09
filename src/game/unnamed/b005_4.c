#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)

extern __int64* GameData_212cfc8[9];
extern __int64* GameData_212cff0[4];
extern _UNKNOWN* GameData_212d208;
__int64 GameRoutine_1a0a6a0(float, float);
__int64 GameRoutine_7797e0(_DWORD*, unsigned __int8);
__int64 GameRoutine_77a740(__int64, unsigned int);
__int64 GameRoutine_78d280(__int64, __int64);

__int64 GameHr_78e3c0(__int64 a1, unsigned __int8 a2)
{
  __int64* v3;
  __int64 v4;
  _QWORD* v5;
  unsigned __int8 v6;
  __int64 v7;
  float v8;
  float v9;
  float v10;
  char v11;
  char v12;
  unsigned __int64 v13;
  unsigned __int8 v14;
  unsigned __int64 v15;
  unsigned __int8 v16;
  unsigned int v17;
  __int64 v19;
  unsigned int v20;
  __int64 v21;
  __int64 v22;
  void* v23;

  v3 = GameData_212cff0[0];
  v4 = *GameData_212cff0[0];
  if (*GameData_212cfc8[0] == 0) {
    goto LABEL_20;
  }
  v5 = *(_QWORD**)(*GameData_212cfc8[0] + 432);
  v6 = a2;
  v7 = v5[2];
  v5 += 2;
  v8 = (*(float (**)(_QWORD*))(v7 + 16))(v5);
  v9 = (*(float (**)(_QWORD*))(*v5 + 16LL))(v5);
  GameRoutine_1a0a6a0(v9, 360.0);
  if (v8 < 0.0) {
    v10 = v10 + 360.0;
  }
  if (v10 >= 45.0) {
    if (v10 >= 135.0) {
      a2 = v6;
      if (v10 < 225.0) {
        goto LABEL_20;
      }
      if (v10 >= 315.0) {
        v12 = 1;
        v11 = 0;
      }
      else {
        v12 = 0;
        v11 = 1;
      }
      goto LABEL_9;
    }
    v11 = 0;
    v12 = 0;
  }
  else {
    v11 = 0;
    v12 = 1;
  }
  a2 = v6;
LABEL_9:
  v13 = 0x100000008000402uLL >> ((8 * a2 - 8) & 0xF8);
  if ((((_BYTE)v13 - 1) & 0xF8) != 0) {
    v14 = 0;
  }
  else {
    v14 = 0x100000008000402uLL >> (8 * ((unsigned __int8)v13 - 1));
  }
  v15 = 0x100000008000402uLL >> (8 * (v14 - 1));
  if (((v14 - 1) & 0xF8) != 0) {
    LOBYTE(v15) = 0;
  }
  if ((v12 & 1) != 0) {
    v16 = v14;
  }
  else {
    v16 = v15;
  }
  if ((v11 & 1) != 0) {
    a2 = 0x100000008000402uLL >> ((8 * a2 - 8) & 0xF8);
  }
  else {
    a2 = v16;
  }
LABEL_20:
  v17 = GameRoutine_7797e0((_DWORD*)(v4 + 8), a2);
  if ((v17 & 0x80000000) != 0 || v17 == *(_DWORD*)(a1 + 272)) {
    return 0;
  }
  v19 = *v3;
  *(_DWORD*)(a1 + 272) = v17;
  GameRoutine_77a740(v19 + 8, v17);
  v20 = *(_DWORD*)(a1 + 276);
  if ((v20 & 0x80000000) != 0 ||
      (v21 = *v3, *(char*)(*v3 + 12LL * v20 + 12413) < 0) ||
      *(char*)(*v3 + 12LL * v20 + 12414) < 0) {
    v20 = *(_DWORD*)(a1 + 272);
    if ((v20 & 0x80000000) != 0) {
      v23 = GameData_212d208;
      goto LABEL_34;
    }
    v21 = *v3;
    v22 = 64;
  }
  else {
    v22 = 12408;
  }
  v23 = (void*)(v21 + v22 + 12LL * v20 + 4);
LABEL_34:
  GameRoutine_78d280(a1, (__int64)v23);
  return 1;
}

#pragma GCC visibility pop
