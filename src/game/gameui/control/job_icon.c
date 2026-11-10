#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_157ac20(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_18a6760(void);
__int64 GameRoutine_18b2d50(_QWORD, _QWORD);
__int64 GameRoutine_18b2e10(_QWORD, _QWORD);
__int64 GameRoutine_19a8d80(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                            _QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_1562680(_QWORD, _QWORD, float);
__int64 game_Unit_GetJob(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern _UNKNOWN* GameData_212da30;
extern int* GameData_211f348[2];
__int64 JobIcon_19a8c50(__int64 a1, __int64 a2);
__int64 JobIcon_19a9d00(__int64 a1);
__int64 JobIcon_19a9dd0(__int64 a1, __int64 a2, __int64 a3);
__int64 JobIcon_19a9e30(__int64 a1);
__int64 JobIcon_19a9e50(__int64 a1);
bool JobIcon_19a9e80(_QWORD* a1);
__int64 JobIcon_19a9fc0(__int64 result, __int64* a2);
__int64 JobIcon_19aa070(__int64 result, char a2);
__int64 JobIcon_19aa090(__int64 result, char a2);
__int64 GameRoutine_19a8d80_alt1(__int64, __int64, char, unsigned int*, __int64,
                                 int, char, char,
                                 __int16) __asm__("GameRoutine_19a8d80");
extern _UNKNOWN GameData_2259440;
__int64 JobIcon_19a9be0(__int64 a1, __int64 a2, __int64 a3);
__int64 JobIcon_19a9d50(__int64 a1, __int64 a2, char a3, unsigned __int8 a4,
                        __int64 a5, int a6, char a7, __int64 a8, char a9,
                        __int16 a10);

__int64 JobIcon_19a8c50(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  int* v7;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;

  if (a2 == 0) {
    return 0;
  }
  v4 = game_Unit_GetJob(a2);
  v5 = *(_QWORD*)(a2 + 440);
  if (v5 != 0) {
    v6 = *(unsigned __int8*)(v5 + 16);
    if (v6 > 9) {
      v7 = (int*)((char*)GameData_212da30 + 144);
      if (*(_QWORD*)(a2 + 408) != 0) {
        goto LABEL_15;
      }
    }
    else {
      v7 = GameData_211f348[v6];
      if (*(_QWORD*)(a2 + 408) != 0) {
        goto LABEL_15;
      }
    }
  }
  else {
    v7 = (int*)((char*)GameData_212da30 + 148);
    if (*(_QWORD*)(a2 + 408) != 0) {
      goto LABEL_15;
    }
  }
  v9 = *(_QWORD*)(a2 + 392);
  if (v9 != 0) {
    v10 = *(unsigned __int8*)(v9 + 441);
    if ((_DWORD)v10 == 3) {
      if (*(unsigned __int8*)(a2 + 2136) <= 1u) {
        v10 = 1;
      }
      else {
        v10 = *(unsigned __int8*)(a2 + 2136);
      }
    }
    goto LABEL_16;
  }
LABEL_15:
  v10 = 0;
LABEL_16:
  v11 = *v7;
  if (*(_BYTE*)(a1 + 1105) == 1) {
    if (v4 != 0 && (v12 = *(_QWORD*)(*(_QWORD*)(v4 + 24) + 1104LL)) != 0 &&
        (v13 = *(_QWORD*)(a2 + 560),
         (v14 = *(unsigned __int16*)(v12 + 16)) <
             (unsigned __int64)((*(_QWORD*)(a2 + 568) - v13) >> 1))) {
      v15 = *(_WORD*)(v13 + 2 * v14) & 0x3FF;
    }
    else {
      v15 = 0;
    }
  }
  else {
    v15 = 0xFFFFFFFFLL;
  }
  v16 = *(unsigned __int8*)(a1 + 1109);
  v17 = v11;
  return GameRoutine_19a8d80(a1, v4, v10, &v17, a2, v15, v16, 0, 0) & 1;
}

__int64 JobIcon_19a9be0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  char v5;
  __int64 v6;
  unsigned __int64 v7;
  int* v8;
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  char v15;
  unsigned int v17;
  __int64 v18;
  __int64 v19;

  v5 = 0;
  if (a2 == 0 || a3 == 0) {
    return v5 & 1;
  }
  v6 = *(_QWORD*)(a2 + 440);
  if (v6 != 0) {
    v7 = *(unsigned __int8*)(v6 + 16);
    if (v7 > 9) {
      v8 = (int*)((char*)GameData_212da30 + 144);
      if (*(_QWORD*)(a2 + 408) == 0) {
        goto LABEL_6;
      }
    }
    else {
      v8 = GameData_211f348[v7];
      if (*(_QWORD*)(a2 + 408) == 0) {
      LABEL_6:
        v9 = *(_QWORD*)(a2 + 392);
        if (v9 != 0) {
          LODWORD(v9) = *(unsigned __int8*)(v9 + 441);
          if ((_DWORD)v9 == 3) {
            LODWORD(v9) = *(unsigned __int8*)(a2 + 2136);
            if ((unsigned int)v9 <= 1) {
              LOBYTE(v9) = 1;
            }
          }
        }
        goto LABEL_12;
      }
    }
  }
  else {
    v8 = (int*)((char*)GameData_212da30 + 148);
    if (*(_QWORD*)(a2 + 408) == 0) {
      goto LABEL_6;
    }
  }
  LOBYTE(v9) = 0;
LABEL_12:
  v10 = *v8;
  if (*(_BYTE*)(a1 + 1105) == 1) {
    v11 = *(_QWORD*)(*(_QWORD*)(a3 + 24) + 1104LL);
    if (v11 != 0 &&
        (v12 = *(_QWORD*)(a2 + 560),
         (v13 = *(unsigned __int16*)(v11 + 16)) <
             (unsigned __int64)((*(_QWORD*)(a2 + 568) - v12) >> 1))) {
      v14 = *(_WORD*)(v12 + 2 * v13) & 0x3FF;
    }
    else {
      v14 = 0;
    }
  }
  else {
    v14 = -1;
  }
  v18 = v3;
  v19 = v4;
  v15 = *(_BYTE*)(a1 + 1109);
  v17 = v10;
  v5 = GameRoutine_19a8d80_alt1(a1, a3, v9, &v17, a2, v14, v15, 0, 0);
  return v5 & 1;
}

__int64 JobIcon_19a9d00(__int64 a1)
{
  LayoutAccessor_1562680(a1 + 88, "Default", 1.0);
  return LayoutAccessor_1562680(a1 + 88, "Icon_Unclear", 1.0);
}

__int64 JobIcon_19a9d50(__int64 a1, __int64 a2, char a3, unsigned __int8 a4,
                        __int64 a5, int a6, char a7, __int64 a8, char a9,
                        __int16 a10)
{
  unsigned int* v10;
  unsigned int v12;

  if (a2 == 0) {
    return 0;
  }
  if (a4 > 9u) {
    v10 = (unsigned int*)&GameData_2259440;
  }
  else {
    v10 = (unsigned int*)GameData_211f348[a4];
  }
  v12 = *v10;
  return GameRoutine_19a8d80_alt1(a1, a2, a3, &v12, a8, a6, a7, a9, a10) & 1;
}

__int64 JobIcon_19a9dd0(__int64 a1, __int64 a2, __int64 a3)
{
  _BOOL8 v4;

  v4 = a2 != 0 && game_Unit_GetJob(a2) == a3;
  return GameRoutine_157ac20(a1 + 88, "IconEquip", v4, 1);
}

__int64 JobIcon_19a9e30(__int64 a1)
{
  if (*(_QWORD*)(a1 + 1096) != 0) {
    return *(unsigned __int8*)(a1 + 1108);
  }
  else {
    return 0;
  }
}

__int64 JobIcon_19a9e50(__int64 a1)
{
  if (*(_QWORD*)(a1 + 64) != 0) {
    return *(unsigned __int8*)(a1 + 76);
  }
  else {
    return 0;
  }
}

bool JobIcon_19a9e80(_QWORD* a1)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char v8;

  if (((*(__int64 (**)(_QWORD*))(a1[129] + 8LL))(a1 + 129) & 1) == 0 ||
      ((*(__int64 (**)(_QWORD*))(*a1 + 144LL))(a1) & 1) == 0 ||
      ((*(__int64 (**)(_QWORD*))(*a1 + 32LL))(a1) & 1) == 0) {
    return false;
  }
  v2 = *(_QWORD*)(a1[1] + 24LL);
  while (1) {
    v2 = *(_QWORD*)(v2 + 24);
    if (v2 == 0) {
      break;
    }
    if ((*(_BYTE*)(v2 + 88) & 1) == 0) {
      return false;
    }
  }
  v4 = a1[40];
  if (v4 == 0) {
    return a1[137] != 0;
  }
  v5 = a1[39];
  v6 = a1[40];
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                            memory_order_relaxed);
  v7 = std___1___shared_weak_count_lock(v6);
  std___1___shared_weak_count___release_weak(v4);
  if (v7 == 0) {
    return a1[137] != 0;
  }
  if (v5 != 0) {
    v8 = ((*(__int64 (**)(__int64))(*(_QWORD*)v5 + 144LL))(v5) & 1) != 0
             ? (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 32LL))(v5)
             : 0;
  }
  else {
    v8 = 1;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
  }
  return (v8 & 1) != 0 && a1[137] != 0;
}

__int64 JobIcon_19a9fc0(__int64 result, __int64* a2)
{
  __int64 v3;

  if (*(_QWORD*)(result + 1096) != 0) {
    result = a2[1];
    if (result != 0) {
      result = std___1___shared_weak_count_lock(result);
      if (result != 0) {
        v3 = result;
        result = *a2;
        if (*a2 != 0) {
          result = GameRoutine_18a6760();
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
          return std___1___shared_weak_count___release_weak(v3);
        }
      }
    }
  }
  return result;
}

__int64 JobIcon_19aa070(__int64 result, char a2)
{
  if ((a2 & 1) != 0 || *(_BYTE*)(result + 1110) != 2) {
    return GameRoutine_18b2d50(result, a2 & 1);
  }
  return result;
}

__int64 JobIcon_19aa090(__int64 result, char a2)
{
  if ((a2 & 1) != 0 || *(_BYTE*)(result + 1110) != 1) {
    return GameRoutine_18b2e10(result, a2 & 1);
  }
  return result;
}

#pragma GCC visibility pop
