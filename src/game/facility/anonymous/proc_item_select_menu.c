#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_155fbe0(_QWORD, _QWORD);
__int64 GameRoutine_1562680(_QWORD, _QWORD, float);
__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 GameRoutine_1567590(_QWORD, _QWORD);
__int64 GameRoutine_1572ac0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1575c70(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15d2000(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15d2280(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15d2540(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16e1f40(_QWORD, _QWORD);
__int64 GameRoutine_1873720(__int64, __int64, char);
__int64 GameRoutine_1873c90(_BYTE*);
__int64 GameRoutine_1873d80(_QWORD*);
__int64 GameRoutine_1873eb0(__int64);
__int64 _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(_QWORD, _QWORD, _QWORD,
                                                    _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_IsVibrationEnabled(_QWORD);
__int64 game_menu_BasicMenu_Unknown16defa0(_QWORD);
extern __int64 (*GameData_20f83d8[])();
extern __int64 (*game_facility_anonymous_BlacksmithMenuItem_Refine_vtable[])();
extern __int64 GameData_20f9358;
extern __int64 game_g_game_setting;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212e008[9];
extern __int64* game_g_empty_item_ptr;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
__int64 ProcItemSelectMenu_Unknown84_1875fe0(__int64 a1);
__int64 ProcItemSelectMenu_Unknown85(__int64 a1);
__int64 ProcItemSelectMenu_Unknown129(__int64 a1);
__int64 ProcItemSelectMenu_Unknown157_18769a0(__int64 a1, __int16* a2);
__int64 ProcItemSelectMenu_Unknown84_1878db0(_BYTE* a1);
__int64 ProcItemSelectMenu_Unknown88(__int64* a1);
__int64 ProcItemSelectMenu_Unknown154_1879760(__int64 a1, __int64 a2);
__int64 ProcItemSelectMenu_Unknown155_18797a0(__int64 a1, int a2);
__int64 ProcItemSelectMenu_Unknown157_18797c0(__int64 a1, __int16* a2);
__int64 ProcItemSelectMenu_Unknown84_187a6d0(_BYTE* a1);
__int64 ProcItemSelectMenu_Unknown154_187b4c0(__int64 a1, __int64 a2);
__int64 ProcItemSelectMenu_Unknown155_187b500(__int64 a1, int a2);
__int64 ProcItemSelectMenu_Unknown157_187b520(__int64 a1, __int16* a2);
__int64 ItemShopSelectMenu_1874560(_QWORD, _QWORD, _QWORD);
__int64 ProcItemSelectMenu_Unknown10_1876a80(__int64 a1, __int64 a2);
__int64 ProcItemSelectMenu_Unknown10_18798a0(__int64 a1, __int64 a2);
__int64 ProcItemSelectMenu_Unknown10_187b600(__int64 a1, __int64 a2);
__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*GameData_20fa208[])();
extern __int64 (*game_facility_anonymous_BlacksmithMenuItem_Item_vtable[])();
extern __int64 (*game_facility_anonymous_BlacksmithMenuItem_Repair_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_TransporterConst_List_instance__ptr[6];
__int64
game_facility_anonymous_ProcItemSelectMenu_AddItemList_closure_Invoke_1879b60(
    __int64 a1, int* a2);
__int64
game_facility_anonymous_ProcItemSelectMenu_AddItemList_closure_Invoke_187c290(
    __int64 a1, int* a2);

__int64 ProcItemSelectMenu_Unknown155_1874a60(__int64 a1, unsigned int a2)
{
  return a2;
}

__int64 ProcItemSelectMenu_Unknown84_1875fe0(__int64 a1)
{
  __int64 (****v2)();
  __int64 (****v3)();
  __int64 result;
  __int64 (***v5)();
  __int64 v6;
  __int64 v7;
  int v8;
  _QWORD v9[4];
  _QWORD* v10;
  __int64 (***v11)();

  GameRoutine_1873c90((_BYTE*)a1);
  v2 = *(__int64 (*****)())(a1 + 232);
  v3 = *(__int64 (*****)())(a1 + 240);
  result = (__int64)v9;
  *(_BYTE*)(a1 + 1080) = 0;
  v9[0] = GameData_20f83d8;
  v10 = v9;
  if (v2 == v3) {
    v5 = nullptr;
  LABEL_14:
    v6 = 32;
    goto LABEL_15;
  }
  while (1) {
    v5 = *v2;
    if (*v2 != nullptr &&
        *v5 == game_facility_anonymous_BlacksmithMenuItem_Refine_vtable) {
      v11 = *v2;
      if (v10 == nullptr) {
        GameRoutine_60a310(0);
      }
      if (((*(__int64 (**)(_QWORD*, __int64 (****)()))(*v10 + 48LL))(v10,
                                                                     &v11) &
           1) != 0) {
        break;
      }
    }
    if (++v2 == v3) {
      v5 = nullptr;
      break;
    }
  }
  result = (__int64)v10;
  if (v10 == v9) {
    goto LABEL_14;
  }
  if (v10 != nullptr) {
    v6 = 40;
  LABEL_15:
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + v6))(result);
  }
  if (v5 != nullptr) {
    v7 = *(_QWORD*)(a1 + 336);
    if (v7 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 168LL))(v7);
    }
    *(_QWORD*)(a1 + 336) = v5;
    _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(a1, 1, 0, 0);
    result = *(_QWORD*)(a1 + 336);
    if (result != 0) {
      (*(void (**)(__int64))(*(_QWORD*)result + 160LL))(result);
      game_IsVibrationEnabled(game_g_game_setting + 712);
      result = *(_QWORD*)(a1 + 336);
      v8 = 4;
      if (result != 0) {
        result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 120LL))(result);
        if ((result & 1) != 0) {
          v8 = 4;
        }
        else {
          v8 = 0;
        }
      }
    }
    else {
      v8 = 4;
    }
    *(_DWORD*)(a1 + 356) = *(_DWORD*)(a1 + 356) & 0xFFFFFFFB | v8;
  }
  return result;
}

__int64 ProcItemSelectMenu_Unknown85(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;

  GameRoutine_1873eb0(a1);
  if (*(_QWORD*)(a1 + 1064) != 0) {
    GameRoutine_1562680(a1 + 848, "UnitInfoCost_On", 1.0);
    v2 = GameRoutine_155fbe0(a1 + 848, "L_UnitInfo");
    GameRoutine_1572ac0(v2, *(_QWORD*)(a1 + 1064), 0, 0);
    v3 = GameRoutine_155fbe0(a1 + 848, "L_UnitInfo");
    GameRoutine_1562cf0(v3, "Info00");
    v4 = GameRoutine_155fbe0(a1 + 848, "L_MasteryInfo");
    return GameRoutine_1575c70(v4, *(_QWORD*)(a1 + 1064), 0, 0, 0, 0);
  }
  else {
    GameRoutine_1562680(a1 + 848, "StockCost_On", 1.0);
    v6 = GameRoutine_155fbe0(a1 + 848, "L_UnitInfo");
    GameRoutine_1572ac0(v6, 0, 0, 0);
    v7 = GameRoutine_155fbe0(a1 + 848, "L_UnitInfo");
    return GameRoutine_1562cf0(v7, "Simple00");
  }
}

__int64 ProcItemSelectMenu_Unknown129(__int64 a1)
{
  __int64 result;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _BYTE v5[32];
  _BYTE* v6;

  v6 = nullptr;
  v4 = 0;
  GameRoutine_16e1f40(a1, v5);
  if (&v3 == nullptr) {
    (*(void (**)(void))(*(_QWORD*)v4 + 32LL))();
  }
  result = (__int64)v6;
  if (v6 == v5) {
    v2 = 32;
  }
  else {
    if (v6 == nullptr) {
      return result;
    }
    v2 = 40;
  }
  return (*(__int64 (**)(void))(*(_QWORD*)v6 + v2))();
}

__int64 ProcItemSelectMenu_Unknown157_18769a0(__int64 a1, __int16* a2)
{
  __int16 v2;
  __int64 v5;
  __int64 v6;

  v2 = *a2;
  *(_BYTE*)(a1 + 1074) = *((_BYTE*)a2 + 2);
  *(_WORD*)(a1 + 1072) = v2;
  *(_BYTE*)(a1 + 1075) = *((_BYTE*)a2 + 3);
  *(_DWORD*)(a1 + 1076) = *((_DWORD*)a2 + 1);
  v5 = GameRoutine_155fbe0(a1 + 848, "L_AfterInfoDetail");
  if (*(_BYTE*)(a1 + 1080) != 0) {
    v6 = *(_QWORD*)(a1 + 1064);
  }
  else {
    v6 = 0;
  }
  return GameRoutine_15d2280(v5, a2, a1 + 1108, v6);
}

__int64 ProcItemSelectMenu_Unknown10_1876a80(__int64 a1, __int64 a2)
{
  return ItemShopSelectMenu_1874560(a1 - 1056, a2, 1);
}

__int64 ProcItemSelectMenu_Unknown84_1878db0(_BYTE* a1)
{
  __int64 result;

  result = GameRoutine_1873c90(a1);
  a1[1080] = 0;
  return result;
}

__int64 ProcItemSelectMenu_Unknown88(__int64* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int16 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 result;
  __int64* v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _BOOL8 v17;

  v2 = a1[42];
  if (v2 != 0 && (v3 = __dynamic_cast(v2, GameData_212e008[0],
                                      &GameData_20f9358, 0)) != 0) {
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 560LL))(v3);
    v5 = *(_WORD*)v4;
    v6 = v4;
    *((_BYTE*)a1 + 1074) = *(_BYTE*)(v4 + 2);
    *((_WORD*)a1 + 536) = v5;
    *((_BYTE*)a1 + 1075) = *(_BYTE*)(v4 + 3);
    *((_DWORD*)a1 + 269) = *(_DWORD*)(v4 + 4);
    v7 = GameRoutine_155fbe0(a1 + 106, "L_BeforeInfoDetail");
    if (*((_BYTE*)a1 + 1080) != 0) {
      v8 = a1[133];
    }
    else {
      v8 = 0;
    }
    result = GameRoutine_15d2000(v7, v6, v8);
  }
  else {
    v10 = game_g_empty_item_ptr;
    v11 = *((_DWORD*)game_g_empty_item_ptr + 1);
    *((_DWORD*)a1 + 268) = *(_DWORD*)game_g_empty_item_ptr;
    v12 = *a1;
    *((_DWORD*)a1 + 269) = v11;
    v13 = (*(__int64 (**)(__int64*))(v12 + 1248))(a1);
    v14 = GameRoutine_155fbe0(a1 + 106, v13);
    if (*((_BYTE*)a1 + 1080) != 0) {
      v15 = a1[133];
    }
    else {
      v15 = 0;
    }
    result = GameRoutine_15d2540(v14, v10, v15);
  }
  if (*((_BYTE*)a1 + 1081) == 1) {
    v17 = true;
    if (a1[133] != 0 && (GameRoutine_1873d80(a1) & 1) != 0) {
      v16 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                       8LL * *((unsigned __int16*)a1 + 536));
      if (*(unsigned __int8*)(v16 + 72) < 8u || *(_BYTE*)(v16 + 73) == 16) {
        v17 = false;
      }
    }
    return GameRoutine_1567590("StatusChange", v17);
  }
  return result;
}

__int64 ProcItemSelectMenu_Unknown154_1879760(__int64 a1, __int64 a2)
{
  *(_QWORD*)(a1 + 1064) = a2;
  GameRoutine_1873720(a1, a2, 0);
  return game_menu_BasicMenu_Unknown16defa0(a1);
}

__int64 ProcItemSelectMenu_Unknown155_18797a0(__int64 a1, int a2)
{
  if (a2 <= 5) {
    return (unsigned int)a2;
  }
  else {
    return 0;
  }
}

__int64 ProcItemSelectMenu_Unknown157_18797c0(__int64 a1, __int16* a2)
{
  __int16 v2;
  __int64 v5;
  __int64 v6;

  v2 = *a2;
  *(_BYTE*)(a1 + 1074) = *((_BYTE*)a2 + 2);
  *(_WORD*)(a1 + 1072) = v2;
  *(_BYTE*)(a1 + 1075) = *((_BYTE*)a2 + 3);
  *(_DWORD*)(a1 + 1076) = *((_DWORD*)a2 + 1);
  v5 = GameRoutine_155fbe0(a1 + 848, "L_BeforeInfoDetail");
  if (*(_BYTE*)(a1 + 1080) != 0) {
    v6 = *(_QWORD*)(a1 + 1064);
  }
  else {
    v6 = 0;
  }
  return GameRoutine_15d2000(v5, a2, v6);
}

__int64 ProcItemSelectMenu_Unknown10_18798a0(__int64 a1, __int64 a2)
{
  return ItemShopSelectMenu_1874560(a1 - 1056, a2, 1);
}

__int64

game_facility_anonymous_ProcItemSelectMenu_AddItemList_closure_Invoke_1879b60(
    __int64 a1, int* a2)
{
  _QWORD* v2;
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v2 = *(_QWORD**)(a1 + 8);
  v3 = *a2;
  v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      120, 16, 0);
  v5 = v2[133];
  *(_QWORD*)(v4 + 8) = 0;
  *(_WORD*)(v4 + 16) = 0;
  *(_QWORD*)(v4 + 64) = 0;
  *(_QWORD*)(v4 + 72) = 0;
  *(_QWORD*)(v4 + 48) = 0;
  *(_QWORD*)(v4 + 56) = 0;
  *(_BYTE*)(v4 + 88) = 0;
  *(_WORD*)(v4 + 80) = 257;
  *(_BYTE*)(v4 + 82) = 1;
  *(_DWORD*)(v4 + 84) = 1;
  v6 = v2[137];
  v7 = v2[136];
  *(_DWORD*)(v4 + 40) = v3;
  *(_QWORD*)(v4 + 112) = v5;
  *(_QWORD*)(v4 + 96) = v7;
  *(_QWORD*)(v4 + 104) = v6;
  *(_QWORD*)v4 = game_facility_anonymous_BlacksmithMenuItem_Item_vtable;
  return BasicMenuCursor_16e0c00(v2, v4);
}

__int64 ProcItemSelectMenu_Unknown84_187a6d0(_BYTE* a1)
{
  __int64 result;

  result = GameRoutine_1873c90(a1);
  a1[1080] = 0;
  return result;
}

__int64 ProcItemSelectMenu_Unknown154_187b4c0(__int64 a1, __int64 a2)
{
  *(_QWORD*)(a1 + 1064) = a2;
  GameRoutine_1873720(a1, a2, 0);
  return game_menu_BasicMenu_Unknown16defa0(a1);
}

__int64 ProcItemSelectMenu_Unknown155_187b500(__int64 a1, int a2)
{
  if (a2 <= 5) {
    return (unsigned int)a2;
  }
  else {
    return 0;
  }
}

__int64 ProcItemSelectMenu_Unknown157_187b520(__int64 a1, __int16* a2)
{
  __int16 v2;
  __int64 v5;
  __int64 v6;

  v2 = *a2;
  *(_BYTE*)(a1 + 1074) = *((_BYTE*)a2 + 2);
  *(_WORD*)(a1 + 1072) = v2;
  *(_BYTE*)(a1 + 1075) = *((_BYTE*)a2 + 3);
  *(_DWORD*)(a1 + 1076) = *((_DWORD*)a2 + 1);
  v5 = GameRoutine_155fbe0(a1 + 848, "L_BeforeInfoDetail");
  if (*(_BYTE*)(a1 + 1080) != 0) {
    v6 = *(_QWORD*)(a1 + 1064);
  }
  else {
    v6 = 0;
  }
  return GameRoutine_15d2000(v5, a2, v6);
}

__int64 ProcItemSelectMenu_Unknown10_187b600(__int64 a1, __int64 a2)
{
  return ItemShopSelectMenu_1874560(a1 - 1056, a2, 1);
}

__int64

game_facility_anonymous_ProcItemSelectMenu_AddItemList_closure_Invoke_187c290(
    __int64 a1, int* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int16* v6;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      120, 16, 0);
  v5 = *(_QWORD*)(v2 + 1064);
  *(_WORD*)(v4 + 16) = 0;
  *(_QWORD*)(v4 + 64) = 0;
  *(_QWORD*)(v4 + 72) = 0;
  *(_QWORD*)(v4 + 48) = 0;
  *(_QWORD*)(v4 + 56) = 0;
  *(_BYTE*)(v4 + 88) = 0;
  *(_DWORD*)(v4 + 40) = v3;
  *(_WORD*)(v4 + 80) = 257;
  *(_BYTE*)(v4 + 82) = 1;
  *(_DWORD*)(v4 + 84) = 1;
  *(_QWORD*)v4 = game_facility_anonymous_BlacksmithMenuItem_Repair_vtable;
  *(_QWORD*)(v4 + 8) = 0;
  *(_QWORD*)(v4 + 96) = GameData_20fa208;
  *(_QWORD*)(v4 + 104) = v5;
  if (v5 != 0) {
    v6 = (unsigned __int16*)(v5 + 8 * v3 + 828);
  }
  else {
    v6 =
        (unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                      game_TransporterConst_List_instance__ptr
                                                          [0] +
                                                  8LL) +
                                       8LL) +
                            12LL * (int)v3 + 4);
  }
  *(_QWORD*)(v4 + 112) =
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *v6) +
                 24LL) +
      512LL;
  return BasicMenuCursor_16e0c00(v2, v4);
}

#pragma GCC visibility pop
