#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_d523c0(_QWORD);
__int64 game_HashString(_QWORD);
extern _UNKNOWN GameData_1ad3c94;
extern _UNKNOWN GameData_1af6365;
extern __int64 GameData_21c9d18;
__int64 StateDiscovery_Unknown2(__int64 result);
float StateDiscovery_Unknown3(__int64 a1);
__int64 StateDiscovery_Unknown5(__int64 result);

__int64 StateDiscovery_Unknown2(__int64 result)
{
  *(_BYTE*)(result + 32) = 0;
  *(_QWORD*)(result + 16) = 0;
  *(_QWORD*)(result + 24) = 0;
  return result;
}

float StateDiscovery_Unknown3(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  _QWORD* v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  _QWORD* v13;
  float result;

  v1 = *(_QWORD*)(a1 + 8);
  *(_BYTE*)(v1 + 36) = 1;
  v3 = *(_QWORD*)(v1 + 8);
  if (*(_DWORD*)(v3 + 748) != 2) {
    v4 = *(_QWORD*)(*(_QWORD*)(v3 + 24) + 24LL);
    *(_QWORD*)(v4 + 32) = 0;
    *(_QWORD*)(v4 + 37) = 0;
    *(_BYTE*)(v4 + 96) = 1;
    *(_BYTE*)(v4 + 37) = 1;
    v5 = *(_QWORD*)(v4 + 16);
    *(_BYTE*)(v4 + 25) = 0;
    *(_BYTE*)(v4 + 48) = 0;
    *(_BYTE*)(v4 + 64) = 0;
    *(_QWORD*)(v4 + 80) = 0;
    *(_DWORD*)(v4 + 32) = 1095307227;
    GameRoutine_d523c0(*(_QWORD*)(v5 + 488));
  }
  *(_BYTE*)(a1 + 33) = 0;
  v6 = game_HashString(&GameData_1af6365);
  v7 = *(_QWORD*)(GameData_21c9d18 + 96);
  if ((v7 & (v7 - 1)) != 0) {
    v8 = v6;
    if (v6 >= v7) {
      v8 = v6 % v7;
    }
    v9 = *(_QWORD**)(*(_QWORD*)(GameData_21c9d18 + 88) + 8 * v8);
    do {
      do {
        v9 = (_QWORD*)*v9;
      } while (v9[1] != v6);
    } while (v9[2] != v6);
  }
  else {
    v9 = *(_QWORD**)(*(_QWORD*)(GameData_21c9d18 + 88) + 8 * ((v7 - 1) & v6));
    do {
      do {
        v9 = (_QWORD*)*v9;
      } while (v9[1] != v6);
    } while (v9[2] != v6);
  }
  *(_DWORD*)(a1 + 16) = *(_DWORD*)(v9[3] + 32LL);
  v10 = game_HashString(&GameData_1ad3c94);
  v11 = *(_QWORD*)(GameData_21c9d18 + 96);
  if ((v11 & (v11 - 1)) != 0) {
    v12 = v10;
    if (v10 >= v11) {
      v12 = v10 % v11;
    }
    v13 = *(_QWORD**)(*(_QWORD*)(GameData_21c9d18 + 88) + 8 * v12);
    do {
      do {
        v13 = (_QWORD*)*v13;
      } while (v13[1] != v10);
    } while (v13[2] != v10);
  }
  else {
    v13 =
        *(_QWORD**)(*(_QWORD*)(GameData_21c9d18 + 88) + 8 * ((v11 - 1) & v10));
    do {
      do {
        v13 = (_QWORD*)*v13;
      } while (v13[1] != v10);
    } while (v13[2] != v10);
  }
  result = *(float*)(v13[3] + 32LL);
  *(float*)(a1 + 20) = result;
  return result;
}

__int64 StateDiscovery_Unknown5(__int64 result)
{
  __int64 v1;
  __int64 v2;

  v1 = *(_QWORD*)(result + 8);
  *(_BYTE*)(v1 + 36) = 0;
  v2 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v1 + 8) + 24LL) + 24LL);
  if (*(_BYTE*)(v2 + 96) == 1) {
    *(_BYTE*)(v2 + 96) = 0;
  }
  *(_BYTE*)(v2 + 25) = 0;
  return result;
}

#pragma GCC visibility pop
