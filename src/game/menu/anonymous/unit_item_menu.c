#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 GameRoutine_1567590(_QWORD, _QWORD);
__int64 GameRoutine_15792c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                            _QWORD, _QWORD);
__int64 GameRoutine_15d2540(_QWORD, _QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_BasicMenu_Unknown16de4d0(_QWORD);
__int64 game_menu_PageTab_Update(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
extern __int64 (*game_menu_anonymous_EquipMenuItem_UnitItem_vtable[])();
extern __int64 GameData_2057e80;
extern __int64 GameData_2057ec8;
extern __int64 GameData_2059fb0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 ui_LayoutAccessor_empty_;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212e008[9];
extern __int64* GameData_21319e8[10];
extern __int64* GameData_21319f0[9];
extern __int64* game_g_empty_item_ptr;
struct PseudoSret GameRoutine_1560070(_QWORD, _QWORD);
__int64 UnitItemMenu_Unknown84(__int64 a1);
__int64 UnitItemMenu_Unknown88(__int64 a1);
__int64 UnitItemMenu_Unknown139(_QWORD* a1);
bool UnitItemMenu_Unknown148(__int64 a1);
__int64 UnitItemMenu_Unknown149(__int64 a1);
__int64 UnitItemMenu_Unknown162(__int64 a1, __int64 a2, int a3);
__int64 UnitItemMenu_Unknown55(__int64 a1);
bool UnitItemMenu_Unknown58(__int64 a1);

__int64 UnitItemMenu_Unknown84(__int64 a1)
{
  __int64 result;
  __int64 i;

  result = ui_LayoutAccessor_FindPane(a1 + 952, "MenuItemTemp");
  if (result != 0) {
    for (i = *(_QWORD*)(result + 40); i != result + 32; i = *(_QWORD*)(i + 8)) {
      *(_BYTE*)(i + 80) &= ~1u;
    }
  }
  return result;
}

__int64 UnitItemMenu_Unknown88(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64* v3;
  __int64 v4;
  char v5;
  _BYTE* v6;
  _DWORD* v7;
  __int64 v8;
  __int64 v9;
  _BOOL8 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 result;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;

  result = __dynamic_cast(*(_QWORD*)(a1 + 1056), GameData_21319e8[0],
                          &GameData_2057ec8, 0);
  v17 = *(_QWORD*)(a1 + 336);
  if (v17 != 0) {
    v20 = v22;
    v21 = v23;
    v25 = v24;
    v1 = result;
    v2 = __dynamic_cast(v17, GameData_212e008[0], &GameData_2057e80, 0);
    v3 = game_g_empty_item_ptr;
    if (v2 != 0) {
      v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 560LL))(v2);
      v5 = *(_BYTE*)(v4 + 2);
      *(_WORD*)(v1 + 380) = *(_WORD*)v4;
      *(_BYTE*)(v1 + 382) = v5;
      v6 = (_BYTE*)(v4 + 3);
      v7 = (_DWORD*)(v4 + 4);
    }
    else {
      v6 = (char*)game_g_empty_item_ptr + 3;
      *(_WORD*)(v1 + 380) = *(_WORD*)game_g_empty_item_ptr;
      *(_BYTE*)(v1 + 382) = *((_BYTE*)v3 + 2);
      v7 = (_DWORD*)v3 + 1;
    }
    v8 = v1 + 380;
    *(_BYTE*)(v1 + 383) = *v6;
    v9 = *v3;
    *(_DWORD*)(v1 + 384) = *v7;
    if (*(_QWORD*)(v1 + 380) == v9) {
      v10 = true;
    }
    else {
      v11 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                       8LL * (unsigned __int16)*(_QWORD*)(v1 + 380));
      v10 = *(unsigned __int8*)(v11 + 72) >= 8u &&
            (unsigned __int64)(*(_BYTE*)(v11 + 73) != 16);
    }
    GameRoutine_1567590("StatusChange", v10);
    *(struct PseudoSret*)(&v18) = GameRoutine_1560070(v1 + 200, "L_ItemDetail");
    result = v19;
    v12 = *(_BYTE*)(v1 + 389) != 0 ? *(_QWORD*)(v1 + 360) : 0LL;
    if (v19 != 0) {
      v13 = std___1___shared_weak_count_lock(v19);
      if (v13 != 0) {
        v14 = v13;
        if (v18 != 0) {
          GameRoutine_15d2540(v18, v8, v12);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
          std___1___shared_weak_count___release_weak(v14);
        }
      }
      result = v19;
      if (v19 != 0) {
        return std___1___shared_weak_count___release_weak(v19);
      }
    }
  }
  return result;
}

__int64 UnitItemMenu_Unknown139(_QWORD* a1)
{
  __int64 v2;

  (*(void (**)(_QWORD*, __int64))(*a1 + 240LL))(a1, 1);
  (*(void (**)(_QWORD*, __int64))(*a1 + 248LL))(a1, 1);
  v2 = *(_QWORD*)(__dynamic_cast(a1[132], GameData_21319e8[0],
                                 &GameData_2057ec8, 0) +
                  312);
  (*(void (**)(__int64, __int64))(*(_QWORD*)v2 + 240LL))(v2, 1);
  return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v2 + 248LL))(v2, 1);
}

bool UnitItemMenu_Unknown148(__int64 a1)
{
  return (*(_BYTE*)(*(_QWORD*)(a1 + 1056) + 356LL) & 1) == 0;
}

__int64 UnitItemMenu_Unknown149(__int64 a1)
{
  __int64 result;
  int v2;
  __int64 v3;

  result = *(_QWORD*)(__dynamic_cast(*(_QWORD*)(a1 + 1056), GameData_21319e8[0],
                                     &GameData_2057ec8, 0) +
                      312);
  if (result != 0) {
    result = __dynamic_cast(result, GameData_21319f0[0], &GameData_2059fb0, 0);
  }
  v2 = *(_DWORD*)(result + 660);
  if (v2 != 7) {
    *(_DWORD*)(result + 664) = v2;
    v3 = result;
    *(_DWORD*)(result + 660) = 7;
    game_menu_PageTab_Update(result + 656);
    return game_menu_BasicMenu_Unknown16de4d0(v3);
  }
  return result;
}

__int64 UnitItemMenu_Unknown162(__int64 a1, __int64 a2, int a3)
{
  __int64 result;
  __int64 v7;
  __int64 v8;
  int v9;

  result = fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 112, 16, 0);
  v7 = *(_QWORD*)(a1 + 1056);
  if (v7 != 0) {
    v8 = result;
    v7 = __dynamic_cast(*(_QWORD*)(a1 + 1056), GameData_21319e8[0],
                        &GameData_2057ec8, 0);
    result = v8;
  }
  v9 = *(_DWORD*)(a1 + 1084);
  *(_DWORD*)(result + 40) = a3;
  *(_QWORD*)(result + 88) = a2;
  *(_QWORD*)(result + 96) = v7;
  *(_WORD*)(result + 16) = 0;
  *(_QWORD*)(result + 48) = 0;
  *(_QWORD*)(result + 56) = 0;
  *(_QWORD*)(result + 64) = 0;
  *(_QWORD*)(result + 72) = 0;
  *(_WORD*)(result + 80) = 257;
  *(_QWORD*)result = game_menu_anonymous_EquipMenuItem_UnitItem_vtable;
  *(_QWORD*)(result + 8) = 0;
  *(_BYTE*)(result + 82) = 1;
  *(_DWORD*)(result + 104) = v9;
  return result;
}

__int64 UnitItemMenu_Unknown55(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  _QWORD* v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64* v8;
  char v9;
  __int64 v11;

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
  v11 = v3;
  (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
  std___1___shared_weak_count___release_weak(v11);
  if (v4 == nullptr) {
  LABEL_5:
    v4 = &ui_LayoutAccessor_empty_;
  }

LABEL_6:
  v6 = *(_QWORD*)(a1 + 88);
  v5 = *(_QWORD**)(a1 + 96);
  v7 = *(int*)(a1 + 40);
  if (v7 >= (__int64)(v5[1] - *v5) >> 3) {
    v8 = game_g_empty_item_ptr;
  }
  else {
    v8 = (__int64*)(*v5 + 8 * v7);
  }
  v9 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1);
  return GameRoutine_15792c0(v4, v8, 0, 1, v6, "L_Icon", "T_Txt", v9 & 1);
}

bool UnitItemMenu_Unknown58(__int64 a1)
{
  char v1;
  _QWORD* v2;
  unsigned __int64 v3;
  __int64* v4;
  _BOOL8 result;
  __int64 v6;

  v1 = *(_BYTE*)(a1 + 104);
  if ((v1 & 8) != 0) {
    return true;
  }
  v2 = *(_QWORD**)(a1 + 96);
  v3 = *(int*)(a1 + 40);
  if (v3 >= (__int64)(v2[1] - *v2) >> 3) {
    v4 = game_g_empty_item_ptr;
  }
  else {
    v4 = (__int64*)(*v2 + 8 * v3);
  }
  if ((*((_BYTE*)v4 + 3) & 0x10) != 0) {
    return false;
  }
  result = false;
  v6 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                  8LL * *(unsigned __int16*)v4);
  if ((*(_BYTE*)(v6 + 336) & 4) == 0 &&
      ((1LL << *(_BYTE*)(v6 + 72)) & 0xE01F) != 0) {
    return (v1 & 0xF5) != 0;
  }
  return result;
}

#pragma GCC visibility pop
