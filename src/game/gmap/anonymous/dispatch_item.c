#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_159b400(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 LegionMenuUtil_16f2280(_QWORD, _QWORD, _QWORD);
extern __int64* GameData_212c790;
extern __int64 GameData_21c96e8;
extern char* GameData_2130e10;
__int64 DispatchItem_Unknown25(_QWORD* a1);
__int64 DispatchItem_Unknown70(__int64 a1, __int64 a2);

__int64 DispatchItem_Unknown25(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64* v6;
  int v7;
  __int64 v8;
  __int64 v9;
  int v11;
  bool v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  if (((*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1) & 1) == 0) {
    return 1;
  }
  v2 = a1[1];
  if (*(_QWORD*)(v2 + 152) != 0) {
    v3 = *(_QWORD*)(v2 + 152);
  }
  else {
    v3 = a1[1];
  }
  v4 = *(_QWORD*)(GameData_21c96e8 + 8);
  v5 = *(__int64**)(v4 + 8);
  v6 = *(__int64**)(v4 + 16);
  v7 = *(_DWORD*)(v4 + 56);
  if (v7 < 0) {
    for (; v5 != v6; ++v5) {
      v8 = *v5;
      if (*(_QWORD*)(*v5 + 96) == 0 && *(_QWORD*)(v8 + 552) == 0) {
        goto LABEL_13;
      }
    }
  }
  else {
    while (v5 != v6) {
      v9 = *v5++;
      v8 = v9;
      if (*(_DWORD*)(v9 + 84) == v7) {
        goto LABEL_13;
      }
    }
  }
  v8 = 0;
LABEL_13:
  v11 = *(_DWORD*)(v8 + 540);
  v12 = __OFSUB__(v11, 1);
  v13 = (unsigned int)(v11 - 1);
  if (((v13 & 0x80000000) != 0LL) == v12) {
    v14 = *(_QWORD*)(v8 + 24);
    v15 = *(_QWORD*)(v8 + 32) - v14;
    v16 = v14 + 8LL * (unsigned int)v13;
    if (v13 < v15 >> 3) {
      v8 = v16;
    }
  }
  LegionMenuUtil_16f2280(v3, *(_QWORD*)v8, 0);
  return 9;
}

__int64 DispatchItem_Unknown70(__int64 a1, __int64 a2)
{
  __int64 v4;
  int v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  int v10;
  bool v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 result;

  v4 = *(_QWORD*)(*GameData_212c790 + 8);
  v5 = *(_DWORD*)(v4 + 56);
  v6 = *(__int64**)(v4 + 8);
  v7 = *(__int64**)(v4 + 16);
  if ((v5 & 0x80000000) == 0) {
    while (v6 != v7) {
      v9 = *v6++;
      v8 = v9;
      if (*(_DWORD*)(v9 + 84) == v5) {
        goto LABEL_8;
      }
    }
  LABEL_7:
    v8 = 0;
    goto LABEL_8;
  }
  if (v6 == v7) {
    goto LABEL_7;
  }
  while (1) {
    v8 = *v6;
    if (*(_QWORD*)(*v6 + 96) == 0 && *(_QWORD*)(v8 + 552) == 0) {
      break;
    }
    if (++v6 == v7) {
      goto LABEL_7;
    }
  }
LABEL_8:
  v10 = *(_DWORD*)(v8 + 540);
  v11 = __OFSUB__(v10, 1);
  v12 = (unsigned int)(v10 - 1);
  if (((v12 & 0x80000000) != 0LL) == v11) {
    v13 = *(_QWORD*)(v8 + 24);
    v14 = *(_QWORD*)(v8 + 32) - v13;
    v15 = v13 + 8LL * (unsigned int)v12;
    if (v12 < v14 >> 3) {
      v8 = v15;
    }
  }
  result = GameRoutine_159b400(a2, *(_QWORD*)v8, 1);
  if ((*(_WORD*)(a1 + 84) & 0x1000) != 0) {
    return GameRoutine_60a020(a2 + 32, *(_QWORD*)GameData_2130e10);
  }
  return result;
}

#pragma GCC visibility pop
