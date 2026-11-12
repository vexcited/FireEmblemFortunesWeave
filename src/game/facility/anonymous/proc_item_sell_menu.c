#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_17048e0(__int64*);
__int64 GameRoutine_1566440(_QWORD, _QWORD);
__int64 GameRoutine_1873720(void);
__int64 GameRoutine_1874560(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_BasicMenu_Destroy_BasicMenu(_QWORD);
__int64 game_menu_BasicMenu_Unknown16defa0(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_874520(_QWORD);
__int64 ProcItemSellMenu_Destructor(__int64 a1);
__int64 ProcItemSellMenu_DeletingDestructor(__int64 a1);
__int64 ProcItemSellMenu_Unknown154_alt1(_QWORD* a1, __int64 a2) __asm__(
    "ProcItemSellMenu_Unknown154");
__int64 ProcItemSellMenu_Unknown160(__int64 a1, __int64* a2);
_QWORD* BasicMenuCursor_16e0c00(_QWORD* result, __int64);
extern __int64 (*GameData_20a6b78[])();
extern __int64 (*game_facility_ShopMenuItem_Sell_vtable[])();
_QWORD*
game_facility_anonymous_ProcItemSellMenu_AddItemList_closure_Invoke(__int64 a1,
                                                                    int* a2);
_QWORD* Util_1575c70(__int64, __int64, int, const char*, char, __int64);
__int64* LayoutAccessor_155fbe0(__int64*, __int64);
__int64 LayoutAccessor_1562cf0(__int64 result, __int64);
__int64 LayoutAccessor_1572ac0(__int64*, __int64, char, char);
__int64 Manager_136a920(__int64, __int64, int, unsigned int, _BYTE*);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_gameui_Util_EachItemFromTransporter(__int64);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
bool GameRoutine_159ea20(__int64, __int64, char);
extern _UNKNOWN* GameData_212da30;
extern __int64 (*GameData_20a72c0[])();
extern __int64 (*GameData_20a7340[])();
extern __int64 (*game_facility_EmptyShopMenuItem_Sell_vtable[])();
extern __int64* GameData_212c878[6];
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212e008[9];
extern __int64* GameData_212e010[8];
extern __int64 GameData_212d690;
extern __int64 ui_Manager_instance_;
void GameRoutine_156c910(__int64, __int64, int, ...);
void GameRoutine_157cff0(__int64*, __int64, int, char);
_QWORD* game_facility_anonymous_ProcItemSellMenu_AddItemList(_QWORD* a1);
void ProcItemSellMenu_Unknown141(__int64* a1);
_QWORD* game_facility_anonymous_ProcItemSellMenu_UpdateInfo(__int64 a1);
_QWORD* game_facility_SellController_Clear(__int64*);
__int64 GameRoutine_1873720_alt1(__int64, __int64,
                                 char) __asm__("GameRoutine_1873720");
__int64 game_menu_BasicMenu_Unknown16defa0_alt1(float*) __asm__(
    "game_menu_BasicMenu_Unknown16defa0");
void GameRoutine_1566440_alt1(__int64, char) __asm__("GameRoutine_1566440");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ProcItemSellMenu_Unknown154(__int64 a1, __int64 a2, char a3);

__int64 ProcItemSellMenu_Destructor(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  v1 = *(_QWORD*)(a1 + 1096);
  *(_QWORD*)(a1 + 1104) = v1;
  if (v1 != 0) {
    v2 = a1;
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3,
                                  v1);
    a1 = v2;
  }
  return game_menu_BasicMenu_Destroy_BasicMenu(a1);
}

__int64 ProcItemSellMenu_DeletingDestructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v1 = *(_QWORD*)(a1 + 1096);
  *(_QWORD*)(a1 + 1104) = v1;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4,
                                  v1);
  }
  game_menu_BasicMenu_Destroy_BasicMenu(a1);
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v5 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v5, a1);
}

_QWORD* game_facility_anonymous_ProcItemSellMenu_AddItemList(_QWORD* a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  _QWORD* result;
  _WORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  struct {
    _QWORD v14[4];
    _QWORD* v15;
  } v14_;

  v2 = (__int64*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0);
  *(_QWORD*)(v3 + 72) = 0;
  *(_QWORD*)(v3 + 80) = 0;
  v4 = v3;
  *(_QWORD*)(v3 + 16) = 0;
  *(_QWORD*)(v3 + 24) = 0;
  *(_QWORD*)(v3 + 32) = 0;
  *(_QWORD*)(v3 + 40) = 0;
  *(_QWORD*)(v3 + 48) = 0;
  *(_QWORD*)(v3 + 56) = 0;
  *(_QWORD*)(v3 + 64) = 0;
  *(_WORD*)(v3 + 80) = 257;
  *(_BYTE*)(v3 + 82) = 1;
  *(_DWORD*)(v3 + 84) = 1;
  *(_QWORD*)(v3 + 88) = 0;
  *(_QWORD*)v3 = game_facility_EmptyShopMenuItem_Sell_vtable;
  *(_QWORD*)(v3 + 8) = 0;
  result = (_QWORD*)a1[43];
  if (result != nullptr) {
    result = (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + 8LL))(result);
  }
  v6 = (_WORD*)a1[133];
  *(_QWORD*)(v4 + 8) = a1;
  a1[43] = v4;
  if (v6 != nullptr) {
    if (v6[414] != 0) {
      v7 = fw_memory_HeapManager_Allocate_alt1(*v2, 112, 16, 0);
      *(_WORD*)(v7 + 16) = 0;
      *(_QWORD*)(v7 + 48) = 0;
      *(_QWORD*)(v7 + 56) = 0;
      *(_QWORD*)(v7 + 64) = 0;
      *(_QWORD*)(v7 + 72) = 0;
      *(_BYTE*)(v7 + 88) = 0;
      *(_QWORD*)v7 = game_facility_ShopMenuItem_Sell_vtable;
      *(_QWORD*)(v7 + 8) = 0;
      *(_DWORD*)(v7 + 40) = 0;
      *(_WORD*)(v7 + 80) = 257;
      *(_BYTE*)(v7 + 82) = 1;
      *(_DWORD*)(v7 + 84) = 1;
      *(_QWORD*)(v7 + 96) = GameData_20a6b78;
      *(_QWORD*)(v7 + 104) = v6;
      result = BasicMenuCursor_16e0c00(a1, v7);
      v6 = (_WORD*)a1[133];
    }
    if (v6[418] != 0) {
      v8 = fw_memory_HeapManager_Allocate_alt1(*v2, 112, 16, 0);
      *(_WORD*)(v8 + 16) = 0;
      *(_QWORD*)(v8 + 48) = 0;
      *(_QWORD*)(v8 + 56) = 0;
      *(_QWORD*)(v8 + 64) = 0;
      *(_QWORD*)(v8 + 72) = 0;
      *(_BYTE*)(v8 + 88) = 0;
      *(_QWORD*)v8 = game_facility_ShopMenuItem_Sell_vtable;
      *(_QWORD*)(v8 + 8) = 0;
      *(_WORD*)(v8 + 80) = 257;
      *(_QWORD*)(v8 + 96) = GameData_20a6b78;
      *(_QWORD*)(v8 + 104) = v6;
      *(_BYTE*)(v8 + 82) = 1;
      *(_DWORD*)(v8 + 84) = 1;
      *(_DWORD*)(v8 + 40) = 1;
      result = BasicMenuCursor_16e0c00(a1, v8);
      v6 = (_WORD*)a1[133];
    }
    if (v6[422] != 0) {
      v9 = fw_memory_HeapManager_Allocate_alt1(*v2, 112, 16, 0);
      *(_WORD*)(v9 + 16) = 0;
      *(_QWORD*)(v9 + 48) = 0;
      *(_QWORD*)(v9 + 56) = 0;
      *(_QWORD*)(v9 + 64) = 0;
      *(_QWORD*)(v9 + 72) = 0;
      *(_BYTE*)(v9 + 88) = 0;
      *(_QWORD*)v9 = game_facility_ShopMenuItem_Sell_vtable;
      *(_QWORD*)(v9 + 8) = 0;
      *(_WORD*)(v9 + 80) = 257;
      *(_BYTE*)(v9 + 82) = 1;
      *(_DWORD*)(v9 + 84) = 1;
      *(_QWORD*)(v9 + 96) = GameData_20a6b78;
      *(_QWORD*)(v9 + 104) = v6;
      *(_DWORD*)(v9 + 40) = 2;
      result = BasicMenuCursor_16e0c00(a1, v9);
      v6 = (_WORD*)a1[133];
    }
    if (v6[426] != 0) {
      v10 = fw_memory_HeapManager_Allocate_alt1(*v2, 112, 16, 0);
      *(_WORD*)(v10 + 16) = 0;
      *(_QWORD*)(v10 + 48) = 0;
      *(_QWORD*)(v10 + 56) = 0;
      *(_QWORD*)(v10 + 64) = 0;
      *(_QWORD*)(v10 + 72) = 0;
      *(_BYTE*)(v10 + 88) = 0;
      *(_QWORD*)v10 = game_facility_ShopMenuItem_Sell_vtable;
      *(_QWORD*)(v10 + 8) = 0;
      *(_WORD*)(v10 + 80) = 257;
      *(_BYTE*)(v10 + 82) = 1;
      *(_DWORD*)(v10 + 84) = 1;
      *(_QWORD*)(v10 + 96) = GameData_20a6b78;
      *(_QWORD*)(v10 + 104) = v6;
      *(_DWORD*)(v10 + 40) = 3;
      result = BasicMenuCursor_16e0c00(a1, v10);
      v6 = (_WORD*)a1[133];
    }
    if (v6[430] != 0) {
      v11 = fw_memory_HeapManager_Allocate_alt1(*v2, 112, 16, 0);
      *(_WORD*)(v11 + 16) = 0;
      *(_QWORD*)(v11 + 48) = 0;
      *(_QWORD*)(v11 + 56) = 0;
      *(_QWORD*)(v11 + 64) = 0;
      *(_QWORD*)(v11 + 72) = 0;
      *(_BYTE*)(v11 + 88) = 0;
      *(_QWORD*)v11 = game_facility_ShopMenuItem_Sell_vtable;
      *(_QWORD*)(v11 + 8) = 0;
      *(_WORD*)(v11 + 80) = 257;
      *(_BYTE*)(v11 + 82) = 1;
      *(_DWORD*)(v11 + 84) = 1;
      *(_QWORD*)(v11 + 96) = GameData_20a6b78;
      *(_QWORD*)(v11 + 104) = v6;
      *(_DWORD*)(v11 + 40) = 4;
      result = BasicMenuCursor_16e0c00(a1, v11);
      v6 = (_WORD*)a1[133];
    }
    if (v6[434] != 0) {
      v12 = fw_memory_HeapManager_Allocate_alt1(*v2, 112, 16, 0);
      *(_WORD*)(v12 + 16) = 0;
      *(_QWORD*)(v12 + 48) = 0;
      *(_QWORD*)(v12 + 56) = 0;
      *(_QWORD*)(v12 + 64) = 0;
      *(_QWORD*)(v12 + 72) = 0;
      *(_BYTE*)(v12 + 88) = 0;
      *(_QWORD*)v12 = game_facility_ShopMenuItem_Sell_vtable;
      *(_QWORD*)(v12 + 8) = 0;
      *(_WORD*)(v12 + 80) = 257;
      *(_DWORD*)(v12 + 40) = 5;
      *(_BYTE*)(v12 + 82) = 1;
      *(_DWORD*)(v12 + 84) = 1;
      *(_QWORD*)(v12 + 96) = GameData_20a6b78;
      *(_QWORD*)(v12 + 104) = v6;
      return BasicMenuCursor_16e0c00(a1, v12);
    }
  }
  else {
    v14_.v14[0] = GameData_20a7340;
    v14_.v14[1] = a1;
    v14_.v15 = v14_.v14;
    game_gameui_Util_EachItemFromTransporter((__int64)v14_.v14);
    result = v14_.v15;
    if (v14_.v15 == v14_.v14) {
      v13 = 32;
    }
    else {
      if (v14_.v15 == nullptr) {
        return result;
      }
      v13 = 40;
    }
    return (_QWORD*)(*(__int64 (**)(__int64))(*v14_.v15 + v13))(
        (__int64)v14_.v15);
  }
  return result;
}

void ProcItemSellMenu_Unknown141(__int64* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v5;
  unsigned __int64 v6;
  bool v7;
  const char* v8;
  const char* v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64* v13;
  const char* v15;
  __int64* v16;
  _QWORD* v17;
  _QWORD* v18;
  __int64* v19;
  int v20;
  __int64* v21;
  __int64* v22;
  __int64* v23;
  int v24;
  __int64 v25;
  __int64 v26;
  unsigned __int16* v27;
  __int64 v28;
  unsigned int v29;
  unsigned int v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  int v34;
  __int64 v35;
  _QWORD* v36;
  _QWORD* v37;
  unsigned int v38;
  __int64* v39;
  __int64* v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;

  v1 = a1[138];
  v2 = a1[137];
  v3 = a1[133];
  v5 = (__int64)(a1 + 106);
  v6 = (unsigned __int64)(v1 - v2) >> 3;
  v7 = (int)v6 <= 0;
  if ((int)v6 <= 0) {
    v8 = "Stock_On";
  }
  else {
    v8 = "StockCost_On";
  }
  v9 = "UnitInfo_On";
  if (!v7) {
    v9 = "UnitInfoCost_On";
  }
  if (v3 != 0) {
    v10 = (__int64)v9;
  }
  else {
    v10 = (__int64)v8;
  }
  LayoutAccessor_1562cf0(v5, v10);
  v11 = a1[133];
  v12 = (unsigned __int64)(a1[138] - a1[137]) >> 3;
  v13 = LayoutAccessor_155fbe0(a1 + 106, (__int64)"L_UnitInfo");
  if (v11 == 0 && (int)v12 < 1) {
    v15 = "Simple00";
  }
  else {
    v15 = "Info00";
  }
  LayoutAccessor_1562cf0((__int64)v13, (__int64)v15);
  v16 = LayoutAccessor_155fbe0(a1 + 106, (__int64)"L_CostGold");
  v17 = (_QWORD*)a1[137];
  v18 = (_QWORD*)a1[138];
  v19 = v16;
  if (v17 == v18) {
    v20 = 0;
  }
  else {
    v20 = 0;
    v21 = GameData_212e008[0];
    v22 = GameData_212e010[0];
    v23 = GameData_212c878[0];
    do {
      if (*v17 != 0) {
        v25 = __dynamic_cast(*v17, v21, v22, 0);
        if (v25 != 0) {
          v26 = v25;
          v27 = (unsigned __int16*)(*(__int64 (**)(__int64))(*(_QWORD*)v25 +
                                                             560LL))(v25);
          v28 = *(_QWORD*)(*(_QWORD*)(*v23 + 64) + 8LL * *v27);
          v24 = *(_DWORD*)(v28 + 80);
          if (v24 != 0) {
            v29 = *(unsigned __int8*)(v28 + 87);
            v30 = (v29 - *((unsigned __int8*)v27 + 2)) &
                  ~((int)(v29 - *((unsigned __int8*)v27 + 2)) >> 31);
            if (v30 < v29) {
              v24 = (int)(v30 * v24) / (int)v29;
            }
            if (v24 <= 1) {
              v24 = 1;
            }
          }
          else {
            v24 = 1;
          }
          v20 += *(_DWORD*)(v26 + 84) * v24;
        }
      }
      ++v17;
    } while (v17 != v18);
  }
  GameRoutine_157cff0(v19, (__int64)"T_Num", v20, 0);
  v31 = ui_LayoutAccessor_FindPane(v19, (__int64)"Icon");
  if (v31 != 0) {
    v32 = __dynamic_cast(v31, GameData_212d670[0], GameData_212d678[0], 0);
    if (v32 != 0) {
      v33 = v32;
      v34 = *(int*)((char*)((int*)0x24LL) + (_QWORD)GameData_212da30);
      v35 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v32 + 88LL))(v32, 0);
      if (v35 != 0) {
        *(_DWORD*)(v35 + 12) = v34;
      }
      Manager_136a920(ui_Manager_instance_ + 1264, v33, 0, 7u,
                      "IconStock_Gold");
    }
  }
  v36 = (_QWORD*)a1[137];
  v37 = (_QWORD*)a1[138];
  if (v36 == v37) {
    v38 = 0;
  }
  else {
    v38 = 0;
    v39 = GameData_212e008[0];
    v40 = GameData_212e010[0];
    do {
      if (*v36 != 0) {
        v41 = __dynamic_cast(*v36, v39, v40, 0);
        if (v41 != 0) {
          v38 += *(_DWORD*)(v41 + 84);
        }
      }
      ++v36;
    } while (v36 != v37);
  }
  v42 = ui_LayoutAccessor_FindPane(a1 + 106, (__int64)"T_CountNum");
  if (v42 != 0) {
    v43 = __dynamic_cast(v42, GameData_212d670[0], GameData_212d690, 0);
    if (v43 != 0) {
      GameRoutine_156c910(v43, (__int64)"%d", 1, v38);
    }
  }
}

void ProcItemSellMenu_Unknown154(__int64 a1, __int64 a2, char a3)
{

#pragma clang fp contract(off)
  __int64 v4;
  __int64* v5;
  __int64 v6;
  struct {
    __int64 v7;
    __int64 v8;
    __int64 v9;
  } v7_;

  *(_QWORD*)(a1 + 1064) = a2;
  GameRoutine_1873720_alt1(a1, a2, a3);
  game_facility_SellController_Clear((__int64*)(a1 + 1088));
  game_menu_BasicMenu_Unknown16defa0_alt1((float*)a1);
  v4 = *(_QWORD*)(a1 + 1056);
  v7_.v8 = 0;
  v7_.v9 = 0;
  v7_.v7 = 0;
  (*(void (**)(__int64, __int64*))(v4 + 80))(a1 + 1056, &v7_.v7);
  (*(void (**)(__int64, __int64*))(*(_QWORD*)(a1 + 1056) + 88LL))(a1 + 1056,
                                                                  &v7_.v7);
  if (v7_.v7 == v7_.v8) {
    v5 = nullptr;
  }
  else {
    v5 = &v7_.v7;
  }
  GameRoutine_1566440_alt1((__int64)v5, 0);
  if (v7_.v7 != 0) {
    v7_.v8 = v7_.v7;
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, v7_.v7);
  }
}

__int64 ProcItemSellMenu_Unknown160(__int64 a1, __int64* a2)
{
  unsigned __int64 v2;
  unsigned __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;

  v2 = a2[1];
  v3 = a2[2];
  if (v2 >= v3) {
    v6 = *a2;
    v7 = v2 - *a2;
    v8 = 1 - 0x3333333333333333LL * (v7 >> 3);
    if (v8 > 0x666666666666666LL) {
      GameRoutine_874520(a1);
    }
    v9 = fw_memory_g_heap_manager_ptr;
    v10 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v3 - v6) >> 3);
    if (2 * v10 > v8) {
      v8 = 2 * v10;
    }
    if (v10 >= 0x333333333333333LL) {
      v11 = 0x666666666666666LL;
    }
    else {
      v11 = v8;
    }
    if (v11 != 0) {
      if (v11 > 0x666666666666666LL) {
        GameRoutine_60a210(a1);
      }
      v12 = a1;
      v13 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 40 * v11, 16, 0);
    }
    else {
      v12 = a1;
      v13 = 0;
    }
    v14 = v13 + v7;
    *(_QWORD*)v14 = "MultiSelection";
    *(_QWORD*)(v14 + 8) = "MID_KeyHelp_MultiSelection";
    *(_BYTE*)(v14 + 28) = 0;
    *(_QWORD*)(v14 + 32) = 0;
    *(_BYTE*)(v14 + 16) = 1;
    v15 = v13 + 40 * v11;
    v5 = v13 + v7 + 40;
    *(_QWORD*)(v14 + 20) = 0x200000007LL;
    memcpy(v13, v6, v7);
    *a2 = v13;
    a2[1] = v5;
    a2[2] = v15;
    if (v6 != 0) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v16, v6);
    }
    a1 = v12;
  }
  else {
    *(_BYTE*)(v2 + 28) = 0;
    *(_QWORD*)(v2 + 32) = 0;
    *(_QWORD*)v2 = "MultiSelection";
    *(_QWORD*)(v2 + 8) = "MID_KeyHelp_MultiSelection";
    v5 = v2 + 40;
    *(_BYTE*)(v2 + 16) = 1;
    *(_QWORD*)(v2 + 20) = 0x200000007LL;
  }
  a2[1] = v5;
  return GameRoutine_1874560(a1, a2, 1);
}

_QWORD* game_facility_anonymous_ProcItemSellMenu_UpdateInfo(__int64 a1)
{
  __int64 v2;
  bool v3;
  __int64 v4;
  __int64* v5;
  __int64* v6;
  __int64* v8;
  struct {
    _QWORD v9[4];
    _QWORD* v10;
  } v9_;

  v2 = *(_QWORD*)(a1 + 1064);
  v9_.v9[0] = GameData_20a72c0;
  v9_.v9[1] = a1;
  v9_.v10 = v9_.v9;
  v3 = GameRoutine_159ea20(v2, (__int64)v9_.v9, 1);
  if (v9_.v10 == v9_.v9) {
    v4 = 32;
  }
  else {
    if (v9_.v10 == nullptr) {
      goto LABEL_6;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v9_.v10 + v4))((__int64)v9_.v10);
LABEL_6:
  if (*(_QWORD*)(a1 + 1064) != 0) {
    LayoutAccessor_1562cf0(a1 + 848, (__int64)"UnitInfo_On");
    v5 = LayoutAccessor_155fbe0((__int64*)(a1 + 848), (__int64)"L_UnitInfo");
    LayoutAccessor_1572ac0(v5, *(_QWORD*)(a1 + 1064), 0, v3);
    v6 = LayoutAccessor_155fbe0((__int64*)(a1 + 848), (__int64)"L_MasteryInfo");
    return Util_1575c70((__int64)v6, *(_QWORD*)(a1 + 1064), 0, nullptr, 0, 0);
  }
  else {
    LayoutAccessor_1562cf0(a1 + 848, (__int64)"Stock_On");
    v8 = LayoutAccessor_155fbe0((__int64*)(a1 + 848), (__int64)"L_UnitInfo");
    return (_QWORD*)LayoutAccessor_1572ac0(v8, 0, 0, v3);
  }
}

_QWORD*

game_facility_anonymous_ProcItemSellMenu_AddItemList_closure_Invoke(__int64 a1,
                                                                    int* a2)
{
  _QWORD* v2;
  int v3;
  __int64 v4;

  v2 = *(_QWORD**)(a1 + 8);
  v3 = *a2;
  v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      112, 16, 0);
  *(_WORD*)(v4 + 16) = 0;
  *(_QWORD*)(v4 + 48) = 0;
  *(_QWORD*)(v4 + 56) = 0;
  *(_QWORD*)(v4 + 64) = 0;
  *(_QWORD*)(v4 + 72) = 0;
  *(_BYTE*)(v4 + 88) = 0;
  *(_DWORD*)(v4 + 40) = v3;
  *(_WORD*)(v4 + 80) = 257;
  *(_BYTE*)(v4 + 82) = 1;
  *(_DWORD*)(v4 + 84) = 1;
  *(_QWORD*)v4 = game_facility_ShopMenuItem_Sell_vtable;
  *(_QWORD*)(v4 + 8) = 0;
  *(_QWORD*)(v4 + 96) = GameData_20a6b78;
  *(_QWORD*)(v4 + 104) = 0;
  return BasicMenuCursor_16e0c00(v2, v4);
}

#pragma GCC visibility pop
