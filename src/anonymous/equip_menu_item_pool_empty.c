#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_1560070(PSEUDO_X8, _QWORD, _QWORD);
__int64 GameRoutine_157ac20(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1583180(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15d32c0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1860650(_QWORD*);
__int64 game_UnitPool_Get(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 GameData_212cf80[5];
extern __int64 GameData_21caa2c;
extern __int64 GameData_21f4228;
extern __int64 GameData_21f42d0;
extern __int64 ui_LayoutAccessor_empty_;
extern __int64* GameData_212ceb0;
__int64 EquipMenuItem_PoolEmpty_185e990(__int64 a1);
__int64 EquipMenuItem_PoolEmpty_Unknown55_185eaa0(__int64 a1);
__int64 EquipMenuItem_PoolEmpty_Unknown55_1863f90(__int64 a1);

__int64 EquipMenuItem_PoolEmpty_185e990(__int64 a1)
{
  __int64 v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v2 = 512;
  if (*(_BYTE*)(a1 + 79) != 0) {
    v2 = 520;
  }
  result = (*(__int64 (**)(void*))(*(_QWORD*)a1 + v2))((void*)a1);
  v4 = *(_QWORD*)(a1 + 8);
  if (v4 != 0) {
    v5 = *(unsigned int*)(a1 + 40);
    v6 = &GameData_21caa2c;
    if ((int)v5 >= 0) {
      v6 = (__int64*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212cf80[0] +
                                            8LL) +
                                 48LL) +
                      8 * v5);
    }
    GameRoutine_1560070((void*)&v10, v4 + 848, "L_Help");
    result = v11;
    if (v11 != 0) {
      v7 = *(_QWORD*)(v4 + 1064);
      v8 = std___1___shared_weak_count_lock(v11);
      if (v8 != 0) {
        v9 = v8;
        if (v10 != 0) {
          GameRoutine_15d32c0(v10, v6, v7);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
          std___1___shared_weak_count___release_weak(v9);
        }
      }
      result = v11;
      if (v11 != 0) {
        return std___1___shared_weak_count___release_weak(v11);
      }
    }
  }
  return result;
}

__int64 EquipMenuItem_PoolEmpty_Unknown55_185eaa0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64* v6;
  char* v7;
  int v8;
  __int64 v9;
  _BOOL4 v10;
  char v11;
  __int64 v13;

  v2 = *(_QWORD*)(a1 + 56);
  if (v2 == 0) {
    goto LABEL_5;
  }
  v3 = std___1___shared_weak_count_lock(v2);
  if (v3 == 0) {
    goto LABEL_5;
  }
  v4 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v4 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v13 = v3;
  (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
  std___1___shared_weak_count___release_weak(v13);
  if (v4 == nullptr) {
  LABEL_5:
    v4 = &ui_LayoutAccessor_empty_;
  }

LABEL_6:
  v5 = *(unsigned int*)(a1 + 40);
  v6 = GameData_212ceb0;
  if ((int)v5 >= 0) {
    v6 = (__int64*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212cf80[0] + 8LL) +
                               48LL) +
                    8 * v5);
  }
  v8 = *((unsigned __int8*)v6 + 1);
  v7 = (char*)v6 + 1;
  if (v8 != 0) {
    v9 = game_UnitPool_Get(v7);
  }
  else {
    v9 = 0;
  }
  v10 = v9 == *(_QWORD*)(a1 + 96);
  v11 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1);
  return GameRoutine_157ac20(v4, "IconEquip", v10, v11 & 1);
}

__int64 EquipMenuItem_PoolEmpty_Unknown55_1863f90(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  atomic_ullong* v5;
  __int64* v6;
  __int64 v7;
  __int64* v8;
  __int64* v10;

  GameRoutine_1860650((_QWORD*)a1);
  v2 = *(_QWORD*)(a1 + 56);
  if (v2 == 0) {
    goto LABEL_5;
  }
  v3 = std___1___shared_weak_count_lock(v2);
  if (v3 == 0) {
    goto LABEL_5;
  }
  v4 = v3;
  v5 = (atomic_ullong*)(v3 + 8);
  v6 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v5, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v6 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v10 = v6;
  (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
  std___1___shared_weak_count___release_weak(v4);
  v6 = v10;
  if (v10 == nullptr) {
  LABEL_5:
    v6 = &ui_LayoutAccessor_empty_;
  }

LABEL_6:
  v7 = *(int*)(a1 + 40);
  if ((_DWORD)v7 == -1) {
    v8 = &GameData_21f4228;
  }
  else {
    v8 = (__int64*)(*(_QWORD*)(*(_QWORD*)(GameData_21f42d0 + 8) + 120LL) +
                    (v7 << 6));
  }
  return GameRoutine_1583180(v6, v8, 0);
}

#pragma GCC visibility pop
