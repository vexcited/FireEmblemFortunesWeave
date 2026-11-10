#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameSubquestData_125d3e0(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_BasicMenu_Unknown16dd9a0(_QWORD);
__int64 game_menu_BasicMenu_Unknown96(_QWORD);
extern __int64 GameData_212c610;
extern __int64 GameData_212c7b0[11];
extern __int64 GameData_2130f48;
extern __int64 GameData_2131c18[55];
__int64 ProcLegionShopMenu_Unknown92(__int64 a1);
__int64 ProcLegionShopMenu_Unknown96(_QWORD* a1);
__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_15d32c0(_QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_155fbe0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*GameData_20fe308[])();
extern __int64 (*game_facility_anonymous_LegionShopMenuItem_Sell_vtable[])();
extern __int64 GameData_20fdd88;
extern __int64 GameData_212cf80[5];
extern __int64 GameData_21ca060;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212ceb0;
extern __int64* GameData_212e008[9];
extern char* GameData_20fe5a8[14];
const char* ProcLegionShopMenu_Unknown43(__int64 a1, char a2);
__int64 ProcLegionShopMenu_Unknown88(__int64 a1);
__int64 game_facility_anonymous_ProcLegionShopMenu_AddItemList_closure_Invoke(
    __int64 result, unsigned int* a2);
bool game_facility_anonymous_ProcLegionShopMenu_SortAndFilter_closure_Invoke(
    __int64 a1, _QWORD* a2);

const char* ProcLegionShopMenu_Unknown43(__int64 a1, char a2)
{
  if ((unsigned __int8)(a2 - 1) > 9u) {
    return "MID_Menu_Default";
  }
  else {
    return GameData_20fe5a8[(unsigned __int8)(a2 - 1)];
  }
}

__int64 ProcLegionShopMenu_Unknown88(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  result = *(_QWORD*)(a1 + 336);
  if (result != 0) {
    result = __dynamic_cast(result, GameData_212e008[0], &GameData_20fdd88, 0);
    if (result != 0) {
      v3 = result;
      v4 = LayoutAccessor_155fbe0(a1 + 848, "L_InfoDetail");
      v5 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 560LL))(v3);
      return GameRoutine_15d32c0(v4, v5, 0);
    }
  }
  return result;
}

__int64 game_facility_anonymous_ProcLegionShopMenu_AddItemList_closure_Invoke(
    __int64 result, unsigned int* a2)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;

  v2 = *a2;
  v3 = (__int64*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212cf80[0] + 8LL) +
                             48LL) +
                  8 * v2);
  if ((int)v2 < 0) {
    v3 = GameData_212ceb0;
  }
  if (*(_BYTE*)v3 != 0) {
    v4 = *(_QWORD*)(result + 8);
    v5 = result;
    v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        112, 16, 0);
    v7 = *(_QWORD*)(v4 + 1064);
    v8 = **(_DWORD**)(v5 + 16);
    *(_WORD*)(v6 + 80) = 257;
    *(_WORD*)(v6 + 16) = 0;
    *(_QWORD*)(v6 + 48) = 0;
    *(_QWORD*)(v6 + 56) = 0;
    *(_QWORD*)(v6 + 64) = 0;
    *(_QWORD*)(v6 + 72) = 0;
    *(_DWORD*)(v6 + 40) = v2;
    *(_BYTE*)(v6 + 82) = 1;
    *(_QWORD*)v6 = game_facility_anonymous_LegionShopMenuItem_Sell_vtable;
    *(_QWORD*)(v6 + 8) = 0;
    *(_QWORD*)(v6 + 88) = GameData_20fe308;
    *(_QWORD*)(v6 + 96) = v7;
    *(_DWORD*)(v6 + 104) = v8;
    result = BasicMenuCursor_16e0c00(v4, v6);
    ++**(_DWORD**)(v5 + 16);
  }
  return result;
}

bool game_facility_anonymous_ProcLegionShopMenu_SortAndFilter_closure_Invoke(
    __int64 a1, _QWORD* a2)
{
  int v2;
  __int64 v3;
  __int64 v4;
  int v5;

  v2 = *(unsigned __int8*)(a1 + 8);
  v3 = *(unsigned __int8*)(*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 560LL))(*a2);
  if (v2 == 0) {
    return (_DWORD)v3 != 0;
  }
  v4 =
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21ca060 + 64) + 8 * v3) + 64LL);
  if (v4 != 0) {
    v5 = *(unsigned __int8*)(v4 + 250);
    if (v5 <= 9) {
      if (v5 == 7) {
        LODWORD(v4) = 1;
        return v2 == (_DWORD)v4;
      }
      if (v5 != 8) {
        goto LABEL_17;
      }
      LODWORD(v4) = 2;
    }
    else {
      if (v5 != 10 && v5 != 31) {
        if (v5 == 42) {
          LODWORD(v4) = 4;
          return v2 == (_DWORD)v4;
        }
      LABEL_17:
        LODWORD(v4) = 0;
        return v2 == (_DWORD)v4;
      }
      LODWORD(v4) = 3;
    }
  }
  return v2 == (_DWORD)v4;
}

__int64 ProcLegionShopMenu_Unknown92(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 result;

  v2 = a1;
  v3 = a1;
  v4 = GameData_212c610;
  v5 = GameData_2131c18[0];
  do {
    v6 = __dynamic_cast(v3, v4, v5, 0);
    v3 = *(_QWORD*)(v3 + 32);
    if (v6 != 0) {
      v2 = v6;
    }
  } while (v3 != 0);
  if (v2 == a1) {
    (*(void (**)(__int64))(*(_QWORD*)(a1 + 1056) + 104LL))(a1 + 1056);
  }
  result = GameSubquestData_125d3e0(*(_QWORD*)GameData_212c7b0[0]);
  if (*(_QWORD*)GameData_2130f48 != 0) {
    *(_BYTE*)(*(_QWORD*)GameData_2130f48 + 1688LL) = 1;
  }
  return result;
}

__int64 ProcLegionShopMenu_Unknown96(_QWORD* a1)
{
  game_menu_BasicMenu_Unknown96(a1);
  if ((*(unsigned int (**)(_QWORD*))(*a1 + 168LL))(a1)-8 <= 0xFFFFFFF9) {
    (*(void (**)(_QWORD*))(a1[132] + 96LL))(a1 + 132);
  }
  return game_menu_BasicMenu_Unknown16dd9a0(a1);
}

#pragma GCC visibility pop
