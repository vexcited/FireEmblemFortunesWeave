#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 GameRoutine_1567590(_QWORD, _QWORD);
__int64 GameRoutine_15d2540(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1788420(_QWORD, _QWORD);
__int64 GameRoutine_1788690(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_BasicMenu_Unknown16de4d0(_QWORD);
__int64 game_menu_PageTab_Move(_QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 GameData_2057e80;
extern __int64 GameData_2057ec8;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212e008[9];
extern __int64* GameData_21319e8[10];
extern __int64* game_g_empty_item_ptr;
struct PseudoSret GameRoutine_1560070(_QWORD, _QWORD);
__int64 TransporterPoolMenu_Unknown88(__int64 a1);
__int64 TransporterPoolMenu_Unknown139(_QWORD* a1);
__int64 TransporterPoolMenu_Unknown144(__int64 a1, char a2);
__int64 TransporterPoolMenu_Unknown145(__int64 a1, char a2);
bool TransporterPoolMenu_Unknown147(__int64 a1);
__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_19ef8e0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*game_menu_anonymous_EquipMenuItem_Transporter_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_TransporterConst_List_instance__ptr[6];
__int64 TransporterPoolMenu_Unknown7(__int64 a1, char a2);
__int64 TransporterPoolMenu_Unknown8(__int64 a1, char a2);
__int64
game_menu_anonymous_TransporterPoolMenu_AddItemList_closure_Invoke(__int64 a1,
                                                                   int* a2);
bool game_menu_anonymous_TransporterPoolMenu_SortAndFilter_closure_Invoke_15d18d0(
    __int64 a1, __int64* a2);
__int64
game_menu_anonymous_TransporterPoolMenu_SortAndFilter_closure_Invoke_15d1a60(
    __int64 a1, __int64* a2, __int64* a3);

__int64 TransporterPoolMenu_Unknown88(__int64 a1)
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
  _QWORD v18[8];

  result = __dynamic_cast(*(_QWORD*)(a1 + 1056), GameData_21319e8[0],
                          &GameData_2057ec8, 0);
  v17 = *(_QWORD*)(a1 + 336);
  if (v17 != 0) {
    v18[2] = v18[4];
    v18[3] = v18[5];
    v18[7] = v18[6];
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
    *(struct PseudoSret*)(v18) = GameRoutine_1560070(v1 + 200, "L_ItemDetail");
    result = v18[1];
    v12 = *(_BYTE*)(v1 + 389) != 0 ? *(_QWORD*)(v1 + 360) : 0LL;
    if (v18[1] != 0) {
      v13 = std___1___shared_weak_count_lock(v18[1]);
      if (v13 != 0) {
        v14 = v13;
        if (v18[0] != 0) {
          GameRoutine_15d2540(v18[0], v8, v12);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
          std___1___shared_weak_count___release_weak(v14);
        }
      }
      result = v18[1];
      if (v18[1] != 0) {
        return std___1___shared_weak_count___release_weak(v18[1]);
      }
    }
  }
  return result;
}

__int64 TransporterPoolMenu_Unknown139(_QWORD* a1)
{
  __int64 v2;

  v2 = *(_QWORD*)(__dynamic_cast(a1[132], GameData_21319e8[0],
                                 &GameData_2057ec8, 0) +
                  304);
  (*(void (**)(__int64, __int64))(*(_QWORD*)v2 + 240LL))(v2, 1);
  (*(void (**)(__int64, __int64))(*(_QWORD*)v2 + 248LL))(v2, 1);
  (*(void (**)(_QWORD*, __int64))(*a1 + 240LL))(a1, 1);
  return (*(__int64 (**)(_QWORD*, __int64))(*a1 + 248LL))(a1, 1);
}

__int64 TransporterPoolMenu_Unknown144(__int64 a1, char a2)
{
  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 1176LL))(a1) & 1) != 0) {
    return GameRoutine_1788420(a1, a2 & 1);
  }
  if ((game_menu_PageTab_Move(a1 + 656, 0xFFFFFFFFLL, a2 & 1) & 1) == 0) {
    return 0;
  }
  game_menu_BasicMenu_Unknown16de4d0(a1);
  return 13;
}

__int64 TransporterPoolMenu_Unknown145(__int64 a1, char a2)
{
  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 1184LL))(a1) & 1) != 0) {
    return GameRoutine_1788690(a1, a2 & 1);
  }
  if ((game_menu_PageTab_Move(a1 + 656, 1, a2 & 1) & 1) == 0) {
    return 0;
  }
  game_menu_BasicMenu_Unknown16de4d0(a1);
  return 13;
}

bool TransporterPoolMenu_Unknown147(__int64 a1)
{
  return (*(_DWORD*)(*(_QWORD*)(a1 + 1056) + 356LL) & 1 |
          *(_DWORD*)(a1 + 660)) == 0;
}

__int64 TransporterPoolMenu_Unknown7(__int64 a1, char a2)
{
  __int64 v2;

  v2 = a1 - 176;
  if (((*(__int64 (**)(__int64))(*(_QWORD*)(a1 - 176) + 1176LL))(a1 - 176) &
       1) != 0) {
    return GameRoutine_1788420(v2, a2 & 1);
  }
  if ((game_menu_PageTab_Move(a1 + 480, 0xFFFFFFFFLL, a2 & 1) & 1) == 0) {
    return 0;
  }
  game_menu_BasicMenu_Unknown16de4d0(v2);
  return 13;
}

__int64 TransporterPoolMenu_Unknown8(__int64 a1, char a2)
{
  __int64 v2;

  v2 = a1 - 176;
  if (((*(__int64 (**)(__int64))(*(_QWORD*)(a1 - 176) + 1184LL))(a1 - 176) &
       1) != 0) {
    return GameRoutine_1788690(v2, a2 & 1);
  }
  if ((game_menu_PageTab_Move(a1 + 480, 1, a2 & 1) & 1) == 0) {
    return 0;
  }
  game_menu_BasicMenu_Unknown16de4d0(v2);
  return 13;
}

__int64

game_menu_anonymous_TransporterPoolMenu_AddItemList_closure_Invoke(__int64 a1,
                                                                   int* a2)
{
  int v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  int v9;
  __int64 result;

  v2 = *a2;
  v3 = *(_QWORD*)(a1 + 8);
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      120, 16, 0);
  v6 = *(_QWORD*)(v3 + 1056);
  if (v6 != 0) {
    v6 = __dynamic_cast(v6, GameData_21319e8[0], &GameData_2057ec8, 0);
  }
  v7 = *(_QWORD*)(v3 + 1072);
  v8 = *(_DWORD*)(v3 + 1084);
  v9 = **(_DWORD**)(a1 + 16);
  *(_WORD*)(v5 + 80) = 257;
  *(_WORD*)(v5 + 16) = 0;
  *(_QWORD*)(v5 + 48) = 0;
  *(_QWORD*)(v5 + 56) = 0;
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 72) = 0;
  *(_DWORD*)(v5 + 40) = v2;
  *(_QWORD*)(v5 + 88) = 0;
  *(_QWORD*)(v5 + 96) = v6;
  *(_QWORD*)(v5 + 104) = v7;
  *(_BYTE*)(v5 + 82) = 1;
  *(_QWORD*)v5 = game_menu_anonymous_EquipMenuItem_Transporter_vtable;
  *(_QWORD*)(v5 + 8) = 0;
  *(_DWORD*)(v5 + 112) = v9;
  *(_DWORD*)(v5 + 116) = v8;
  result = BasicMenuCursor_16e0c00(v3, v5);
  ++**(_DWORD**)(a1 + 16);
  return result;
}

bool game_menu_anonymous_TransporterPoolMenu_SortAndFilter_closure_Invoke_15d18d0(
    __int64 a1, __int64* a2)
{
  __int64 v2;
  int v3;
  __int64 v4;
  __int64 v5;
  unsigned __int16* v6;
  __int64 v7;
  __int64 v8;
  unsigned __int16* v9;

  v2 = *a2;
  v3 = **(unsigned __int8**)(a1 + 8);
  if (v3 == 16) {
    v4 = *(_QWORD*)(v2 + 88);
    v5 = *(int*)(v2 + 40);
    if (v4 != 0) {
      v6 = (unsigned __int16*)(v4 + 8 * v5 + 828);
    }
    else {
      v6 =
          (unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                        game_TransporterConst_List_instance__ptr
                                                            [0] +
                                                    8LL) +
                                         8LL) +
                              12LL * (int)v5 + 4);
    }
    return *v6 != 0;
  }
  else {
    v7 = *(int*)(v2 + 40);
    v8 = *(_QWORD*)(v2 + 88);
    if (v8 != 0) {
      v9 = (unsigned __int16*)(v8 + 8 * v7 + 828);
    }
    else {
      v9 =
          (unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                        game_TransporterConst_List_instance__ptr
                                                            [0] +
                                                    8LL) +
                                         8LL) +
                              12LL * (int)v7 + 4);
    }
    return v3 ==
           *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                     64) +
                                          8LL * *v9) +
                               72LL);
  }
}

__int64

game_menu_anonymous_TransporterPoolMenu_SortAndFilter_closure_Invoke_15d1a60(
    __int64 a1, __int64* a2, __int64* a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  int v14;
  _QWORD v16[2];
  int v17;
  int v18;
  char v19;
  _QWORD v20[2];
  int v21;
  int v22;
  char v23;
  __int64 v24;
  __int64 v25;

  v5 = *a2;
  v6 = *a3;
  v7 = *(_QWORD*)(*a2 + 88);
  v8 = *(int*)(*a2 + 40);
  if (v7 != 0) {
    v9 = v7 + 8 * v8 + 828;
  }
  else {
    v9 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                   game_TransporterConst_List_instance__ptr[0] +
                               8LL) +
                    8LL) +
         12LL * (int)v8 + 4;
  }
  v10 = *(_QWORD*)(v6 + 88);
  v11 = *(int*)(v6 + 40);
  if (v10 != 0) {
    v12 = v10 + 8 * v11 + 828;
  }
  else {
    v12 =
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                  game_TransporterConst_List_instance__ptr[0] +
                              8LL) +
                   8LL) +
        12LL * (int)v11 + 4;
  }
  v24 = v3;
  v25 = v4;
  v13 = *(_DWORD*)(v5 + 112);
  v14 = *(_DWORD*)(v6 + 112);
  v20[0] = v9;
  v20[1] = v7;
  v23 = 0;
  v16[0] = v12;
  v16[1] = v10;
  v19 = 0;
  v21 = v13;
  v22 = 0;
  v17 = v14;
  v18 = 0;
  return GameRoutine_19ef8e0(v20, v16) & 1;
}

#pragma GCC visibility pop
