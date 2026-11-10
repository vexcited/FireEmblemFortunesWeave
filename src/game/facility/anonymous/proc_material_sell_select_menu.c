#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_155fbe0(_QWORD, _QWORD);
__int64 GameRoutine_1567590(_QWORD, _QWORD);
__int64 GameRoutine_15d2910(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_BasicMenu_Destroy_BasicMenu(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212e008[9];
extern __int64* GameData_212e010[8];
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_874520(_QWORD);
__int64 ProcMaterialSellSelectMenu_Destructor(__int64 a1);
__int64 ProcMaterialSellSelectMenu_DeletingDestructor(__int64 a1);
__int64 ProcMaterialSellSelectMenu_Unknown88(__int64 a1);
__int64 ProcMaterialSellSelectMenu_Unknown148(__int64 a1, __int64* a2);
_QWORD* BasicMenuCursor_16e0c00(_QWORD* result, __int64);
__int64 GameRoutine_19ef8e0(_QWORD, _QWORD);
__int64 game_HasSkill(_QWORD, _QWORD);
extern _DWORD* game_g_shared_system_skills_ptr;
extern __int64 (*GameData_20a9128[])();
extern __int64 (*game_facility_anonymous_MaterialSellMenuItem_vtable[])();
extern __int64 GameData_20a9180;
extern __int64* GameData_212c878[6];
bool game_facility_anonymous_ProcMaterialSellSelectMenu_LCall_closure_Invoke(
    __int64 a1, __int64* a2);
_QWORD*
game_facility_anonymous_ProcMaterialSellSelectMenu_AddItemList_closure_Invoke(
    __int64 a1, int* a2);
bool game_facility_anonymous_ProcMaterialSellSelectMenu_SortAndFilter_closure_Invoke_170a850(
    __int64 a1, _QWORD* a2);
__int64
game_facility_anonymous_ProcMaterialSellSelectMenu_SortAndFilter_closure_Invoke_170a990(
    __int64 a1, _QWORD* a2, __int64* a3);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64 BasicMenu_16e1f40(__int64 result, __int64, __int64);
__int64 GameRoutine_15dff80(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1873720(_QWORD, _QWORD, _QWORD);
__int64 ShopMenuItemSell_1704ea0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_gameui_Util_EachMaterialItemFromTransporter(__int64);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
extern __int64 (*GameData_20a8d88[])();
extern __int64 (*GameData_20a8e08[])();
extern __int64 (*GameData_20a92b8[])();
extern __int64 (*GameData_20a9338[])();
extern __int64 (*game_facility_EmptyShopMenuItem_Sell_vtable[])();
extern __int64 GameData_212c610;
extern __int64 GameData_2131c18[55];
extern __int64 GameData_2131c88[41];
__int64 game_facility_anonymous_ProcMaterialSellSelectMenu_LCall(__int64 a1);
__int64 ProcMaterialSellSelectMenu_Unknown105(__int64 a1);
__int64
game_facility_anonymous_ProcMaterialSellSelectMenu_AddItemList(__int64 a1);
__int64
game_facility_anonymous_ProcMaterialSellSelectMenu_SortAndFilter(__int64 a1);
__int64* LayoutAccessor_155fbe0(__int64*, __int64);
__int64 LayoutAccessor_1562cf0(__int64 result, __int64);
__int64 Manager_136a920(__int64, __int64, int, unsigned int, _BYTE*);
__int64 game_facility_17045b0(_QWORD*);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
char* GameRoutine_a4dbe0(__int64, _BYTE*, char);
extern _UNKNOWN* GameData_212da30;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_212d690;
extern __int64 ui_Manager_instance_;
void GameRoutine_156c5d0(__int64, __int64, char);
void GameRoutine_156c910(__int64, __int64, int, ...);
void GameRoutine_157cff0(__int64*, __int64, int, char);
__int64 ProcMaterialSellSelectMenu_Unknown109(__int64* a1);

__int64 ProcMaterialSellSelectMenu_Destructor(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  v1 = *(_QWORD*)(a1 + 1072);
  *(_QWORD*)(a1 + 1080) = v1;
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

__int64 ProcMaterialSellSelectMenu_DeletingDestructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v1 = *(_QWORD*)(a1 + 1072);
  *(_QWORD*)(a1 + 1080) = v1;
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

__int64 ProcMaterialSellSelectMenu_Unknown88(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v2 = *(_QWORD*)(a1 + 336);
  if (v2 != 0) {
    v3 = __dynamic_cast(v2, GameData_212e008[0], GameData_212e010[0], 0);
    if (v3 != 0) {
      v4 = v3;
      v5 = GameRoutine_155fbe0(a1 + 848, "L_InfoDetail");
      v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 560LL))(v4);
      GameRoutine_15d2910(v5, v6);
    }
  }
  return GameRoutine_1567590("StatusChange", 1);
}

__int64 game_facility_anonymous_ProcMaterialSellSelectMenu_LCall(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD v6[4];
  _QWORD* v7;
  __int64 v8;
  _BYTE v9[200];

  v6[0] = GameData_20a8d88;
  v7 = v6;
  v2 = GameRoutine_15dff80(0, 0, v6, 1);
  if (v7 == v6) {
    v3 = 32;
  }
  else {
    if (v7 == nullptr) {
      goto LABEL_6;
    }
    v3 = 40;
  }
  (*(void (**)(__int64))(*v7 + v3))((__int64)v7);
LABEL_6:
  v4 = *(_QWORD*)(a1 + 152);
  if (v4 == 0) {
    v4 = a1;
  }
  ShopMenuItemSell_1704ea0(*(_QWORD*)(v4 + 32), v2);
  snd_Fade_Fade_10c830(v9, 0.0f);
  snd_play_ff2d0((void*)(&v8), "SE_SYS_UnitChange_Left",
                 "SE_SYS_UnitChange_Left", v9, 0, 65537, 0, 0.0f, 1.0f);
  snd_Fade_Destroy_Fade(v9);
  GameRoutine_1873720(a1, v2, 0);
  return 8;
}

__int64 ProcMaterialSellSelectMenu_Unknown105(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v8;
  _BYTE v9[200];

  v1 = *(_QWORD*)(a1 + 152);
  if (v1 == 0) {
    v1 = a1;
  }
  ShopMenuItemSell_1704ea0(*(_QWORD*)(v1 + 32), 0);
  snd_Fade_Fade_10c830(v9, 0.0f);
  snd_play_ff2d0((void*)(&v8), "SE_SYS_UnitChange_Right",
                 "SE_SYS_UnitChange_Right", v9, 0, 65537, 0, 0.0f, 1.0f);
  snd_Fade_Destroy_Fade(v9);
  v3 = *(_QWORD*)(a1 + 152);
  if (v3 == 0) {
    v3 = a1;
  }
  v4 = *(_QWORD*)(v3 + 32);
  if (v4 != 0) {
    v5 = __dynamic_cast(v4, GameData_212c610, GameData_2131c18[0], 0);
    if (v5 != 0) {
      v6 = __dynamic_cast(v5, GameData_2131c18[0], GameData_2131c88[0], 0);
      if (v6 != 0) {
        *(_DWORD*)(v6 + 1392) = 0;
      }
    }
  }
  return 8;
}

__int64 ProcMaterialSellSelectMenu_Unknown109(__int64* a1)
{
  __int64* v2;
  char* v3;
  __int64 v4;
  __int64 v5;
  char* v6;
  __int64 v7;
  __int64 v8;
  const char* v9;
  unsigned __int64 v10;
  __int64* v11;
  const char* v12;
  __int64* v13;
  _QWORD* v14;
  _QWORD* v15;
  __int64* v16;
  int v17;
  __int64* v18;
  __int64* v19;
  __int64* v20;
  int v21;
  __int64 v22;
  __int64 v23;
  unsigned __int16* v24;
  __int64 v25;
  unsigned int v26;
  unsigned int v27;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  int v32;
  __int64 v33;
  _QWORD* v34;
  _QWORD* v35;
  unsigned int v36;
  __int64* v37;
  __int64* v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;

  if ((game_facility_17045b0(a1 + 133) & 1) == 0) {
    return 1;
  }
  v2 = msg_MessageManager_instance__ptr[0];
  v3 = GameRoutine_a4dbe0(*msg_MessageManager_instance__ptr[0],
                          "MID_Shop_Sell_TotalNum", 0);
  if (v3 != nullptr) {
    v4 = (__int64)v3;
    v5 = ui_LayoutAccessor_FindTextBox(a1 + 106, (__int64)"T_NumTitle");
    if (v5 != 0) {
      GameRoutine_156c5d0(v5, v4, 0);
    }
  }
  v6 = GameRoutine_a4dbe0(*v2, "MID_Shop_Sell_TotalPrice", 0);
  if (v6 != nullptr) {
    v7 = (__int64)v6;
    v8 = ui_LayoutAccessor_FindTextBox(a1 + 106, (__int64)"T_CostTitle");
    if (v8 != 0) {
      GameRoutine_156c5d0(v8, v7, 0);
    }
  }
  if ((int)((unsigned __int64)(a1[135] - a1[134]) >> 3) <= 0) {
    v9 = "Transport_On";
  }
  else {
    v9 = "TransportCost_On";
  }
  LayoutAccessor_1562cf0((__int64)(a1 + 106), (__int64)v9);
  v10 = (unsigned __int64)(a1[135] - a1[134]) >> 3;
  v11 = LayoutAccessor_155fbe0(a1 + 106, (__int64)"L_UnitInfo");
  if ((int)v10 >= 1) {
    v12 = "Info00";
  }
  else {
    v12 = "Simple00";
  }
  LayoutAccessor_1562cf0((__int64)v11, (__int64)v12);
  v13 = LayoutAccessor_155fbe0(a1 + 106, (__int64)"L_CostGold");
  v14 = (_QWORD*)a1[134];
  v15 = (_QWORD*)a1[135];
  v16 = v13;
  if (v14 == v15) {
    v17 = 0;
  }
  else {
    v17 = 0;
    v18 = GameData_212e008[0];
    v19 = GameData_212e010[0];
    v20 = GameData_212c878[0];
    do {
      if (*v14 != 0) {
        v22 = __dynamic_cast(*v14, v18, v19, 0);
        if (v22 != 0) {
          v23 = v22;
          v24 = (unsigned __int16*)(*(__int64 (**)(__int64))(*(_QWORD*)v22 +
                                                             560LL))(v22);
          v25 = *(_QWORD*)(*(_QWORD*)(*v20 + 64) + 8LL * *v24);
          v21 = *(_DWORD*)(v25 + 80);
          if (v21 != 0) {
            v26 = *(unsigned __int8*)(v25 + 87);
            v27 = (v26 - *((unsigned __int8*)v24 + 2)) &
                  ~((int)(v26 - *((unsigned __int8*)v24 + 2)) >> 31);
            if (v27 < v26) {
              v21 = (int)(v27 * v21) / (int)v26;
            }
            if (v21 <= 1) {
              v21 = 1;
            }
          }
          else {
            v21 = 1;
          }
          v17 += *(_DWORD*)(v23 + 84) * v21;
        }
      }
      ++v14;
    } while (v14 != v15);
  }
  GameRoutine_157cff0(v16, (__int64)"T_Num", v17, 0);
  v29 = ui_LayoutAccessor_FindPane(v16, (__int64)"Icon");
  if (v29 != 0) {
    v30 = __dynamic_cast(v29, GameData_212d670[0], GameData_212d678[0], 0);
    if (v30 != 0) {
      v31 = v30;
      v32 = *(int*)((char*)((int*)0x24LL) + (_QWORD)GameData_212da30);
      v33 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v30 + 88LL))(v30, 0);
      if (v33 != 0) {
        *(_DWORD*)(v33 + 12) = v32;
      }
      Manager_136a920(ui_Manager_instance_ + 1264, v31, 0, 7u,
                      "IconStock_Gold");
    }
  }
  v34 = (_QWORD*)a1[134];
  v35 = (_QWORD*)a1[135];
  if (v34 == v35) {
    v36 = 0;
  }
  else {
    v36 = 0;
    v37 = GameData_212e008[0];
    v38 = GameData_212e010[0];
    do {
      if (*v34 != 0) {
        v39 = __dynamic_cast(*v34, v37, v38, 0);
        if (v39 != 0) {
          v36 += *(_DWORD*)(v39 + 84);
        }
      }
      ++v34;
    } while (v34 != v35);
  }
  v40 = ui_LayoutAccessor_FindPane(a1 + 106, (__int64)"T_CountNum");
  if (v40 != 0) {
    v41 = __dynamic_cast(v40, GameData_212d670[0], GameData_212d690, 0);
    if (v41 != 0) {
      GameRoutine_156c910(v41, (__int64)"%d", 1, v36);
    }
  }
  return 13;
}

__int64

game_facility_anonymous_ProcMaterialSellSelectMenu_AddItemList(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64 v6;
  struct {
    _QWORD v7[4];
    _QWORD* v8;
  } v7_;

  v2 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0);
  *(_QWORD*)(v2 + 72) = 0;
  *(_QWORD*)(v2 + 80) = 0;
  *(_QWORD*)(v2 + 16) = 0;
  *(_QWORD*)(v2 + 24) = 0;
  v3 = v2;
  *(_QWORD*)(v2 + 32) = 0;
  *(_QWORD*)(v2 + 40) = 0;
  *(_QWORD*)(v2 + 48) = 0;
  *(_QWORD*)(v2 + 56) = 0;
  *(_QWORD*)(v2 + 64) = 0;
  *(_WORD*)(v2 + 80) = 257;
  *(_BYTE*)(v2 + 82) = 1;
  *(_DWORD*)(v2 + 84) = 1;
  *(_QWORD*)(v2 + 88) = 0;
  *(_QWORD*)v2 = game_facility_EmptyShopMenuItem_Sell_vtable;
  *(_QWORD*)(v2 + 8) = 0;
  v4 = *(_QWORD*)(a1 + 344);
  if (v4 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
  }
  *(_QWORD*)(v3 + 8) = a1;
  *(_QWORD*)(a1 + 344) = v3;
  v7_.v7[0] = GameData_20a8e08;
  v7_.v7[1] = a1;
  v7_.v8 = v7_.v7;
  game_gameui_Util_EachMaterialItemFromTransporter((__int64)v7_.v7);
  result = (__int64)v7_.v8;
  if (v7_.v8 == v7_.v7) {
    v6 = 32;
  }
  else {
    if (v7_.v8 == nullptr) {
      return result;
    }
    v6 = 40;
  }
  return (*(__int64 (**)(__int64))(*v7_.v8 + v6))((__int64)v7_.v8);
}

__int64

game_facility_anonymous_ProcMaterialSellSelectMenu_SortAndFilter(__int64 a1)
{
  int v3;
  __int64 v4;
  __int64 v5;
  bool v6;
  unsigned __int64 v7;
  __int64 result;
  __int64 v9;
  struct {
    _QWORD v10[4];
    _QWORD* v11;
  } v10_;
  struct {
    __int64 (**v12)();
    char v13;
    char gap57_[23];
    __int64 (***v14)();
  } v12_;

  v3 = *(_DWORD*)(a1 + 660);
  v4 = *(_QWORD*)(a1 + 672);
  if (v3 < (unsigned __int64)((*(_QWORD*)(a1 + 680) - v4) >> 2)) {
    v3 = *(_DWORD*)(v4 + 4LL * v3);
  }
  v5 = 32;
  v10_.v11 = v10_.v10;
  v6 = (unsigned __int8)v3 >= 6u;
  v12_.v12 = GameData_20a92b8;
  v7 = 0x160E0D141320uLL >> (8 * (unsigned __int8)v3);
  if (v6) {
    LOBYTE(v7) = 32;
  }
  v12_.v13 = v7;
  v12_.v14 = &v12_.v12;
  v10_.v10[0] = GameData_20a9338;
  BasicMenu_16e1f40(a1, (__int64)&v12_.v12, (__int64)v10_.v10);
  if (v10_.v11 != v10_.v10) {
    if (v10_.v11 == nullptr) {
      goto LABEL_10;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v10_.v11 + v5))((__int64)v10_.v11);
LABEL_10:
  result = (__int64)v12_.v14;
  if (v12_.v14 == &v12_.v12) {
    v9 = 4;
  }
  else {
    if (v12_.v14 == nullptr) {
      return result;
    }
    v9 = 5;
  }
  return ((__int64 (*)(__int64))(*v12_.v14)[v9])((__int64)v12_.v14);
}

__int64 ProcMaterialSellSelectMenu_Unknown148(__int64 a1, __int64* a2)
{
  __int64 result;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  int v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;

  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 192LL))(a1);
  v5 = a2[1];
  v6 = a2[2];
  if (v5 >= v6) {
    v8 = *a2;
    v9 = v5 - *a2;
    v10 = 1 - 0x3333333333333333LL * (v9 >> 3);
    if (v10 > 0x666666666666666LL) {
      goto LABEL_34;
    }
    v11 = fw_memory_g_heap_manager_ptr;
    v12 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v6 - v8) >> 3);
    if (2 * v12 > v10) {
      v10 = 2 * v12;
    }
    if (v12 >= 0x333333333333333LL) {
      v13 = 0x666666666666666LL;
    }
    else {
      v13 = v10;
    }
    if (v13 != 0) {
      if (v13 > 0x666666666666666LL) {
        goto LABEL_35;
      }
      v14 = result;
      v15 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 40 * v13, 16, 0);
      LODWORD(result) = v14;
    }
    else {
      v15 = 0;
    }
    v16 = v15 + v9;
    *(_QWORD*)v16 = "MultiSelection";
    *(_QWORD*)(v16 + 8) = "MID_KeyHelp_MultiSelection";
    *(_BYTE*)(v16 + 28) = 0;
    *(_QWORD*)(v16 + 32) = 0;
    *(_BYTE*)(v16 + 16) = 1;
    v17 = v15 + 40 * v13;
    v7 = v15 + v9 + 40;
    *(_DWORD*)(v16 + 20) = 7;
    *(_DWORD*)(v16 + 24) = result;
    memcpy(v15, v8, v9);
    *a2 = v15;
    a2[1] = v7;
    a2[2] = v17;
    if (v8 != 0) {
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v18, v8);
    }
  }
  else {
    *(_BYTE*)(v5 + 28) = 0;
    *(_QWORD*)(v5 + 32) = 0;
    *(_QWORD*)v5 = "MultiSelection";
    *(_QWORD*)(v5 + 8) = "MID_KeyHelp_MultiSelection";
    v7 = v5 + 40;
    *(_BYTE*)(v5 + 16) = 1;
    *(_DWORD*)(v5 + 20) = 7;
    *(_DWORD*)(v5 + 24) = result;
  }
  a2[1] = v7;
  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 192LL))(a1);
  v19 = a2[1];
  v20 = a2[2];
  if (v19 < v20) {
    *(_BYTE*)(v19 + 28) = 0;
    *(_QWORD*)(v19 + 32) = 0;
    *(_QWORD*)v19 = "StatusChange";
    *(_QWORD*)(v19 + 8) = "MID_KeyHelp_StatusChange";
    v21 = v19 + 40;
    *(_BYTE*)(v19 + 16) = 1;
    *(_DWORD*)(v19 + 20) = 2;
    *(_DWORD*)(v19 + 24) = result;
    goto LABEL_33;
  }
  v22 = *a2;
  v23 = v19 - *a2;
  v24 = 1 - 0x3333333333333333LL * (v23 >> 3);
  if (v24 > 0x666666666666666LL) {
  LABEL_34:
    GameRoutine_874520(result);
  }
  v25 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v20 - v22) >> 3);
  if (2 * v25 > v24) {
    v24 = 2 * v25;
  }
  if (v25 >= 0x333333333333333LL) {
    v26 = 0x666666666666666LL;
  }
  else {
    v26 = v24;
  }
  if (v26 != 0) {
    if (v26 <= 0x666666666666666LL) {
      v27 = result;
      v28 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 40 * v26,
                                           16, 0);
      LODWORD(result) = v27;
      goto LABEL_29;
    }
  LABEL_35:
    GameRoutine_60a210(result);
  }
  v28 = 0;

LABEL_29:
  v29 = v28 + v23;
  *(_QWORD*)v29 = "StatusChange";
  *(_QWORD*)(v29 + 8) = "MID_KeyHelp_StatusChange";
  *(_BYTE*)(v29 + 28) = 0;
  *(_QWORD*)(v29 + 32) = 0;
  *(_BYTE*)(v29 + 16) = 1;
  v30 = v28 + 40 * v26;
  v21 = v28 + v23 + 40;
  *(_DWORD*)(v29 + 20) = 2;
  *(_DWORD*)(v29 + 24) = result;
  result = memcpy(v28, v22, v23);
  *a2 = v28;
  a2[1] = v21;
  a2[2] = v30;
  if (v22 != 0) {
    v31 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v31 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v31, v22);
  }

LABEL_33:
  a2[1] = v21;
  return result;
}

bool game_facility_anonymous_ProcMaterialSellSelectMenu_LCall_closure_Invoke(
    __int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  char v4;
  int v6;

  v2 = *a2;
  if (*a2 == 0) {
    return true;
  }
  v6 = *game_g_shared_system_skills_ptr & 0xFFF;
  if ((game_HasSkill(v2 + 1744, &v6) & 1) == 0) {
    return true;
  }
  v3 = *(_QWORD*)(v2 + 440);
  if (v3 != 0) {
    v4 = *(_BYTE*)(v3 + 16);
  }
  else {
    v4 = 9;
  }
  return ((1 << v4) & 0xF1) == 0;
}

_QWORD*

game_facility_anonymous_ProcMaterialSellSelectMenu_AddItemList_closure_Invoke(
    __int64 a1, int* a2)
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
  *(_QWORD*)v4 = game_facility_anonymous_MaterialSellMenuItem_vtable;
  *(_QWORD*)(v4 + 8) = 0;
  *(_QWORD*)(v4 + 96) = GameData_20a9128;
  *(_QWORD*)(v4 + 104) = 0;
  return BasicMenuCursor_16e0c00(v2, v4);
}

bool game_facility_anonymous_ProcMaterialSellSelectMenu_SortAndFilter_closure_Invoke_170a850(
    __int64 a1, _QWORD* a2)
{
  int v2;

  v2 = *(unsigned __int8*)(a1 + 8);
  return v2 == 32 ||
         v2 == *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                         64) +
                                              8LL * *(unsigned __int16*)(*(
                                                        __int64 (**)(_QWORD))(
                                                        *(_QWORD*)*a2 + 560LL))(
                                                        *a2)) +
                                   73LL);
}

__int64

game_facility_anonymous_ProcMaterialSellSelectMenu_SortAndFilter_closure_Invoke_170a990(
    __int64 a1, _QWORD* a2, __int64* a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD v7[3];
  char v8;
  _QWORD v9[3];
  char v10;

  v3 = *a3;
  if (*a2 == 0) {
    v4 = 0;
    if (v3 == 0) {
      goto LABEL_4;
    }
    goto LABEL_3;
  }
  v4 = __dynamic_cast(*a2, GameData_212e008[0], &GameData_20a9180, 0);
  if (v3 != 0) {
  LABEL_3:
    v3 = __dynamic_cast(v3, GameData_212e008[0], &GameData_20a9180, 0);
  }
LABEL_4:
  v5 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 560LL))(v4);
  v7[0] = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 560LL))(v3);
  v7[1] = 0;
  v9[0] = v5;
  v9[1] = 0;
  v9[2] = 0;
  v10 = 0;
  v7[2] = 0;
  v8 = 0;
  return GameRoutine_19ef8e0(v9, v7) & 1;
}

#pragma GCC visibility pop
