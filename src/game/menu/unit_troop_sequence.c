#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_178bfa0(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak();
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 UnitTroopSequence_Unknown36(__int64 a1);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, _QWORD,
                                                       _QWORD);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_PageTab_SetupText(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                    _QWORD);
__int64 game_util_Format(const char*, ...);
__n128 std___1___shared_weak_count___release_weak_alt1() __asm__(
    "std___1___shared_weak_count___release_weak");
extern __int64 (*GameData_20c90b0[])();
extern __int64* GameData_21319f0[9];
extern __int64 GameData_20c62a8;
extern int GameData_2263c38;
__int64 game_menu_UnitTroopSequence_OnPostCreate(__int64* a1);

__int64 UnitTroopSequence_Unknown36(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v7;
  __int64 v8;

  v2 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      1184, 16, 0);
  v3 = *(_QWORD*)(a1 + 208);
  v7 = 0;
  v8 = 0;
  if (v3 != 0 &&
      (v4 = std___1___shared_weak_count_lock(v3), v8 = v4, v4 != 0)) {
    v5 = v4;
    v7 = *(_QWORD*)(a1 + 200);
    GameRoutine_178bfa0(v2, a1, &v7);
    if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      std___1___shared_weak_count___release_weak();
    }
  }
  else {
    GameRoutine_178bfa0(v2, a1, &v7);
  }
  return v2;
}

__int64 game_menu_UnitTroopSequence_OnPostCreate(__int64* a1)
{
  int v2;
  __int64 v3;
  unsigned int v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD v13[4];
  _QWORD* v14;
  _QWORD v15[2];

  *((_DWORD*)a1 + 92) = 3;
  v2 = GameData_2263c38;
  *((_DWORD*)a1 + 93) = GameData_2263c38;
  *((_DWORD*)a1 + 94) = v2;
  LayoutAccessor_1560070((void*)(v15), a1 + 25, "L_MenuTab");
  v13[0] = GameData_20c90b0;
  v3 = *a1;
  v14 = v13;
  v4 = (*(__int64 (**)(__int64*))(v3 + 192))(a1);
  game_menu_PageTab_SetupText(a1 + 46, v15, v13, v4, 4, 5);
  if (v14 == v13) {
    v5 = 32;
  }
  else {
    if (v14 == nullptr) {
      goto LABEL_6;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v14 + v5))((__int64)v14);
LABEL_6:
  if (v15[1] != 0) {
    std___1___shared_weak_count___release_weak_alt1();
  }
  v6 = GameData_21319f0[0];
  v7 = __dynamic_cast(a1[38], GameData_21319f0[0], &GameData_20c62a8, 0);
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)v7 + 1288LL))(
      v7, (unsigned int)GameData_2263c38);
  v8 = __dynamic_cast(a1[39], v6, &GameData_20c62a8, 0);
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)v8 + 1288LL))(
      v8, (unsigned int)GameData_2263c38);
  v9 = game_util_Format("Page%02d", GameData_2263c38);
  LayoutAccessor_1562cf0(a1 + 25, v9);
  v10 = __dynamic_cast(a1[38], v6, &GameData_20c62a8, 0);
  (*(void (**)(__int64))(*(_QWORD*)v10 + 1296LL))(v10);
  v11 = __dynamic_cast(a1[39], v6, &GameData_20c62a8, 0);
  return (*(__int64 (**)(__int64))(*(_QWORD*)v11 + 1296LL))(v11);
}

#pragma GCC visibility pop
