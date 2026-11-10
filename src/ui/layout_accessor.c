#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_15638b0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_9bea80(_QWORD, _QWORD);
__int64 LayoutAccessor_1562680(__int64 result, __int64, float);
__int64 LayoutAccessor_1562f00(_QWORD, _QWORD);
__int64 LayoutAccessor_1563030(_QWORD, _QWORD, _QWORD);
__int64 Layout_57b830(_QWORD, _QWORD);
__int64 UnitParams_6dd470(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_Unit_GetJob(_QWORD);
__int64 game_Unit_IsImmobile(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
__int64 LayoutAccessor_1562b50(__int64* a1, __int64 a2);
__int64 LayoutAccessor_1562ea0(__int64 a1, __int64 a2);
__int64 LayoutAccessor_1573500(__int64 a1, char a2, char a3);

__int64 LayoutAccessor_1562b50(__int64* a1, __int64 a2)
{
  int v2;
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _BOOL4 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD v16[2];

  if (a1[2] == 0) {
    return 0;
  }
  result = a1[1];
  if (result == 0) {
    return result;
  }
  v6 = std___1___shared_weak_count_lock(result);
  if (v6 != 0) {
    v7 = *a1;
    if (*a1 != 0) {
      v2 = *(unsigned __int8*)(v7 + 24);
      v8 = v7 + 152;
      if (v2 == 0) {
        v8 = 0;
      }
      v9 = v8 != a1[2];
    }
    else {
      v9 = true;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (!v9) {
        goto LABEL_12;
      }
    }
    else {
      v10 = v6;
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      std___1___shared_weak_count___release_weak(v10);
      if (!v9) {
      LABEL_12:
        result = 0;
        if (a2 == 0) {
          return result;
        }
        goto LABEL_17;
      }
    }
  }
  v11 = a1[1];
  if (v11 == 0) {
    return 0;
  }
  LOBYTE(v2) = *(_QWORD*)(v11 + 8) != -1;
  result = 0;
  if (a2 == 0) {
    return result;
  }
LABEL_17:
  if ((v2 & 1) == 0) {
    return result;
  }
  v12 = a1[11];
  if (v12 != 0) {
    result = strlen(a2);
    v16[0] = a2;
    v16[1] = result;
    if (result == 0) {
      return result;
    }
    v13 = GameRoutine_9bea80(v12, v16);
  }
  else {
    v14 = std___1___shared_weak_count_lock(a1[1]);
    if (v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      v15 = v14;
      (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
      std___1___shared_weak_count___release_weak(v15);
    }
    v13 = Layout_57b830(a1[2], a2);
  }
  return v13 != 0;
}

__int64 LayoutAccessor_1562ea0(__int64 a1, __int64 a2)
{
  LayoutAccessor_1562680(a1, a2, 1.0);
  GameRoutine_15638b0(a1, a2, 0);
  LayoutAccessor_1562f00(a1, a2);
  return LayoutAccessor_1563030(a1, a2, 0);
}

__int64 LayoutAccessor_1573500(__int64 a1, char a2, char a3)
{
  __int64 v6;
  int v7;
  __int64 v8;
  __int64 v10;
  char v11[4];

  if ((game_Unit_IsImmobile(a1) & 1) != 0 && (*(_BYTE*)(a1 + 416) & 4) == 0 &&
      (v6 = *(_QWORD*)(a1 + 392)) != 0 &&
      (v7 = *(unsigned __int16*)(v6 + 470), (v8 = game_Unit_GetJob(a1)) != 0)) {
    if (v7 != 0) {
      if ((a2 & 1) != 0) {
        return 0;
      }
    }
    else {
      LOWORD(v7) = *(_WORD*)(v8 + 308);
      if ((a2 & 1) != 0) {
        return 0;
      }
    }
    return (unsigned int)(*(__int16*)(v8 + 330) + (__int16)v7);
  }
  else {
    v11[0] = 10;
    if ((a2 & 1) != 0) {
      v10 = 0;
    }
    else {
      v10 = game_Unit_GetJob(a1);
    }
    return UnitParams_6dd470(a1, v11, v10, (a3 & 1) == 0);
  }
}

#pragma GCC visibility pop
