#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_UnitPool_Find_6ead60(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 GameData_205e078;
extern __int64 game_GameModeData_instance_;
extern __int64 game_UnitListSet_instance_;
extern __int64* GameData_212e030[4];
__int64 FacilityUnitMenuItem_15e7c40(__int64 a1);
__int64 FacilityUnitMenuItem_15e7ef0(__int64 a1);
__int64 FacilityUnitMenuItem_15e7f20(__int64 a1);

__int64 FacilityUnitMenuItem_15e7c40(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  _QWORD* v9;
  __int64 v10;
  int v11;
  int v13;
  __int64 v14;

  v2 = __dynamic_cast(*(_QWORD*)(a1 + 8), GameData_212e030[0],
                      &GameData_205e078, 0);
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v2 + 1192LL))(v2) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 88);
    v4 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v4 = *(_QWORD*)(game_GameModeData_instance_ + 96);
    }
    v14 = v4;
    v13 = 241;
    if (v3 == game_UnitPool_Find_6ead60(&v14, &v13)) {
      goto LABEL_18;
    }
  }
  v5 = *(_QWORD*)(a1 + 88);
  if (v5 == 0) {
    return v5 & 1;
  }
  v6 = *(_QWORD*)(game_UnitListSet_instance_ +
                  8LL * *(unsigned __int8*)(a1 + 96));
  v7 = *(_QWORD**)v6;
  v8 = *(_QWORD**)(v6 + 8);
  if (v7 == v8) {
    goto LABEL_18;
  }
  while (1) {
    v9 = (_QWORD*)*v7;
    if (*(_QWORD*)*v7 == v5) {
      break;
    }
    v7 += 2;
    if (v7 == v8) {
      goto LABEL_18;
    }
  }
  v10 = v7[1];
  if (v10 == 0) {
    if ((v9[6] & 0x3F) == 0) {
      goto LABEL_17;
    }
    goto LABEL_18;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                            memory_order_relaxed);
  v11 = v9[6] & 0x3F;
  if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v11 == 0) {
      goto LABEL_17;
    }
  LABEL_18:
    LOBYTE(v5) = 0;
    return v5 & 1;
  }
  (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
  std___1___shared_weak_count___release_weak(v10);
  if (v11 != 0) {
    goto LABEL_18;
  }
LABEL_17:
  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 584LL))(a1) & 1) != 0) {
    goto LABEL_18;
  }
  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 568LL))(a1) & 1) != 0) {
    LOBYTE(v5) = 1;
  }
  else {
    LOBYTE(v5) = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 712LL))(a1) ^ 1;
  }
  return v5 & 1;
}

__int64 FacilityUnitMenuItem_15e7ef0(__int64 a1)
{
  __int64 v1;

  if ((*(_BYTE*)(a1 + 79) & 1) != 0) {
    v1 = 520;
  }
  else {
    v1 = 504;
    *(_DWORD*)(a1 + 40) = 0;
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + v1))((__int64)a1);
}

__int64 FacilityUnitMenuItem_15e7f20(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  int v9;

  if ((*(_BYTE*)(a1 + 79) & 1) != 0) {
    v1 = 520;
  }
  else {
    v2 = a1;
    v3 = *(_QWORD**)(a1 + 8);
    if (v3 != nullptr) {
      v3 = (_QWORD*)__dynamic_cast(v3, GameData_212e030[0], &GameData_205e078,
                                   0);
    }
    v4 = (__int64*)v3[148];
    v5 = v3[149] - (_QWORD)v4;
    if (v5 != 0) {
      v6 = v5 >> 3;
      v7 = 1;
      while (1) {
        v8 = *v4++;
        if (v8 == 0) {
          break;
        }
        ++v7;
        if (--v6 == 0) {
          goto LABEL_9;
        }
      }
    }
    else {
    LABEL_9:
      v7 = 0;
    }
    v9 = (*(__int64 (**)(_QWORD*))(*v3 + 1192LL))(v3) & 1;
    a1 = v2;
    *(_DWORD*)(v2 + 40) = v7 + v9;
    v1 = 512;
    if (*(_BYTE*)(v2 + 79) != 0) {
      v1 = 520;
    }
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + v1))((__int64)a1);
}

#pragma GCC visibility pop
