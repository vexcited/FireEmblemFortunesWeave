#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_155fbe0(_QWORD, _QWORD);
__int64 GameRoutine_15d2a40(_QWORD, _QWORD);
__int64 GameRoutine_186ad20(_QWORD, _QWORD);
__int64 GameRoutine_667ea0(_QWORD, _QWORD);
__int64 GameRoutine_6680e0(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_BasicMenu_Unknown16dd9a0(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212e008[9];
extern __int64* GameData_212e010[8];
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_874520(_QWORD);
__int64 ProcMaterialItemSelectMenu_Unknown88(__int64 a1);
__int64 ProcMaterialItemSelectMenu_Unknown110(_BYTE* a1, char a2);
_BYTE* ProcMaterialItemSelectMenu_Unknown150(_BYTE* result, __int64* a2);
_QWORD* BasicMenuCursor_16e0c00(_QWORD* result, __int64);
__int64 GameRoutine_1843070(_QWORD, _QWORD);
__int64 GameRoutine_1866680(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_19ef8e0(_QWORD, _QWORD);
__int64 GameRoutine_8a1dc0(_QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
extern __int64 GameData_2131c58[47];
extern __int64 GameData_2131c70[44];
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212c878[6];
__int64
game_facility_anonymous_ProcMaterialItemSelectMenu_OnInit_closure_Invoke(
    __int64 a1, _QWORD* a2, int* a3);
_QWORD*
game_facility_anonymous_ProcMaterialItemSelectMenu_AddItemList_closure_Invoke(
    __int64 a1, __int64 a2);
bool game_facility_anonymous_ProcMaterialItemSelectMenu_SortAndFilter_closure_Invoke_1702e30(
    __int64 a1, _QWORD* a2);
__int64
game_facility_anonymous_ProcMaterialItemSelectMenu_SortAndFilter_closure_Invoke_1702f80_alt1(
    __int64 a1, _QWORD* a2,
    __int64* a3) __asm__("game_facility_anonymous_ProcMaterialItemSelectMenu_"
                         "SortAndFilter_closure_Invoke_1702f80");
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64 BasicMenu_16e1f40(__int64 result, __int64, __int64);
__int64 GameRoutine_8a29c0(__int64 result, __int64);
__int64 ProcTransitionAnim_156af20(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                   _QWORD);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_menu_GameMenu_Unknown135(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 sprintf(_QWORD, const char*, ...);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
extern __int64 (*GameData_20a5c18[])();
extern __int64 (*GameData_20a5c98[])();
extern __int64 (*GameData_20a5d18[])();
extern __int64 (*game_facility_EmptyShopItemMenuItem_vtable[])();
extern __int64 game_gameui_MenuAnimator_instance_;
void __attribute__((noreturn)) GameRoutine_874500(void);
__int64
game_facility_anonymous_ProcMaterialItemSelectMenu_AddItemList(__int64 a1);
__int64
game_facility_anonymous_ProcMaterialItemSelectMenu_SortAndFilter(__int64 a1);
__int64 ProcMaterialItemSelectMenu_Unknown135(__int64 a1, __int64* a2);
__int64 GameRoutine_156c910(_QWORD, const char*, ...);
__int64 GameRoutine_157cff0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_155fbe0(_QWORD, _QWORD);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 Manager_136a920(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
extern _UNKNOWN* GameData_212da30;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64 GameData_212d690;
extern __int64 GameData_2132028[5];
extern __int64 ui_Manager_instance_;
__int64 ProcMaterialItemSelectMenu_Unknown141(__int64 a1);
__int64 GameRoutine_8a1dc0_alt1(__int64**) __asm__("GameRoutine_8a1dc0");
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
bool GameRoutine_19ef8e0_alt1(_QWORD*, _QWORD*) __asm__("GameRoutine_19ef8e0");
bool game_facility_anonymous_ProcMaterialItemSelectMenu_SortAndFilter_closure_Invoke_1702f80(
    __int64 a1, _QWORD* a2, __int64* a3);
__int64 ProcTransitionAnim_156af20_alt1(
    __int64, int, int, __int64*, const char*,
    const char*) __asm__("ProcTransitionAnim_156af20");
__int64 game_menu_GameMenu_Unknown135_alt1(__int64*, __int64*) __asm__(
    "game_menu_GameMenu_Unknown135");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD*) __asm__("snd_Fade_Destroy_Fade");
__int64 snd_play_ff2d0_alt1(__int64, __int64, __int64, unsigned int,
                            unsigned int, int, float,
                            float) __asm__("snd_play_ff2d0");
int sprintf_alt1(__int64, const char*, ...) __asm__("sprintf");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_874500_alt1() __asm__("GameRoutine_874500");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void snd_Fade_Fade_10c830_alt1(__int64, float) __asm__("snd_Fade_Fade_10c830");

__int64 ProcMaterialItemSelectMenu_Unknown88(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  result = *(_QWORD*)(a1 + 336);
  if (result != 0) {
    result =
        __dynamic_cast(result, GameData_212e008[0], GameData_212e010[0], 0);
    if (result != 0) {
      v3 = result;
      v4 = GameRoutine_155fbe0(a1 + 848, "L_InfoDetail");
      v5 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 560LL))(v3);
      return GameRoutine_15d2a40(v4, v5);
    }
  }
  return result;
}

__int64 ProcMaterialItemSelectMenu_Unknown110(_BYTE* a1, char a2)
{
  __int64 v2;
  __int64 v3;
  int v6;
  __int64 v7;
  __int64 v8;
  _BYTE v9[32];
  _BYTE* v10;
  __int64 v11;
  __int64 v12;
  const char* v13;

  if (a1[1128] == 1) {
    return (*(__int64 (**)(_BYTE*, _QWORD))(*(_QWORD*)a1 + 848LL))(a1, a2 & 1);
  }
  if ((a2 & 1) == 0) {
    return 0;
  }
  v11 = v2;
  v12 = v3;
  v6 = GameRoutine_186ad20(a1 + 1096, 0);
  if (v6 == 2) {
    v13 = "MID_Shop_FullItem_Material_Message";
    v7 = GameRoutine_667ea0(a1, &v13);
    if (v7 != 0) {
      v10 = nullptr;
      GameRoutine_6680e0(v9, v7 + 1248);
      if (v10 == v9) {
        v8 = 32;
        goto LABEL_14;
      }
      if (v10 != nullptr) {
        v8 = 40;
      LABEL_14:
        (*(void (**)(void*))(*(_QWORD*)v10 + v8))((void*)v10);
      }
    }
    return 12;
  }
  if (v6 != 0) {
    return 1;
  }
  (*(void (**)(_BYTE*))(*(_QWORD*)a1 + 1128LL))(a1);
  game_menu_BasicMenu_Unknown16dd9a0(a1);
  return 13;
}

__int64

game_facility_anonymous_ProcMaterialItemSelectMenu_AddItemList(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 result;
  __int64 v7;
  struct {
    _QWORD v8[4];
    _QWORD* v9;
  } v8_;

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
  *(_QWORD*)v2 = game_facility_EmptyShopItemMenuItem_vtable;
  *(_QWORD*)(v2 + 8) = 0;
  v4 = *(_QWORD*)(a1 + 344);
  if (v4 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
  }
  v5 = *(_QWORD*)(a1 + 1064);
  *(_QWORD*)(v3 + 8) = a1;
  *(_QWORD*)(a1 + 344) = v3;
  v8_.v8[0] = GameData_20a5c18;
  v8_.v8[1] = a1;
  v8_.v9 = v8_.v8;
  GameRoutine_8a29c0(v5, (__int64)v8_.v8);
  result = (__int64)v8_.v9;
  if (v8_.v9 == v8_.v8) {
    v7 = 32;
  }
  else {
    if (v8_.v9 == nullptr) {
      return result;
    }
    v7 = 40;
  }
  return (*(__int64 (**)(__int64))(*v8_.v9 + v7))((__int64)v8_.v9);
}

__int64

game_facility_anonymous_ProcMaterialItemSelectMenu_SortAndFilter(__int64 a1)
{
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  unsigned __int8 v6;
  unsigned int v7;
  unsigned __int64 v8;
  __int64 result;
  __int64 v10;
  struct {
    _QWORD v11[4];
    _QWORD* v12;
  } v11_;
  struct {
    __int64 (**v13)();
    char v14;
    char gap57_[23];
    __int64 (***v15)();
  } v13_;

  v3 = *(_QWORD*)(a1 + 672);
  v4 = *(int*)(a1 + 660);
  if (v4 < (*(_QWORD*)(a1 + 680) - v3) >> 2) {
    v4 = *(int*)(v3 + 4 * v4);
  }
  v5 = 32;
  v6 = *(_DWORD*)(*(_QWORD*)(a1 + 1072) + 4 * v4);
  v11_.v12 = v11_.v11;
  v7 = v6;
  v8 = 0x160E0D141320uLL >> (8 * v6);
  if (v7 >= 6) {
    LOBYTE(v8) = 32;
  }
  v13_.v13 = GameData_20a5c98;
  v13_.v14 = v8;
  v13_.v15 = &v13_.v13;
  v11_.v11[0] = GameData_20a5d18;
  BasicMenu_16e1f40(a1, (__int64)&v13_.v13, (__int64)v11_.v11);
  if (v11_.v12 != v11_.v11) {
    if (v11_.v12 == nullptr) {
      goto LABEL_9;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v11_.v12 + v5))((__int64)v11_.v12);
LABEL_9:
  result = (__int64)v13_.v15;
  if (v13_.v15 == &v13_.v13) {
    v10 = 4;
  }
  else {
    if (v13_.v15 == nullptr) {
      return result;
    }
    v10 = 5;
  }
  return ((__int64 (*)(__int64))(*v13_.v15)[v10])((__int64)v13_.v15);
}

__int64 ProcMaterialItemSelectMenu_Unknown135(__int64 a1, __int64* a2)
{
  __int64 v4;
  __int64 v5;
  unsigned __int64 v7;
  __int64* v8;
  __int64* v9;
  __int64 v10;
  signed __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  signed __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  _QWORD v34[26];

  if (*(_BYTE*)(a1 + 1128) != 1) {
    return game_menu_GameMenu_Unknown135_alt1((__int64*)a1, a2);
  }
  v4 = game_gameui_MenuAnimator_instance_;
  if (game_gameui_MenuAnimator_instance_ != 0) {
    sprintf_alt1((__int64)v34, "%s%s", "Alpha", "In");
    v5 = ProcTransitionAnim_156af20_alt1(v4, 4, 0, (__int64*)(a1 + 848), "Left",
                                         (const char*)v34);
  }
  else {
    v5 = -1;
  }
  v8 = (__int64*)a2[1];
  v7 = a2[2];
  if ((unsigned __int64)v8 >= v7) {
    v10 = *a2;
    v11 = (signed __int64)v8 - *a2;
    v12 = (v11 >> 3) + 1;
    if (v12 >> 61 != 0) {
      goto LABEL_42;
    }
    v13 = v7 - v10;
    v14 = fw_memory_g_heap_manager_ptr;
    if (v13 >> 2 > v12) {
      v12 = v13 >> 2;
    }
    if ((unsigned __int64)v13 >= 0x7FFFFFFFFFFFFFF8LL) {
      v15 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v15 = v12;
    }
    if (v15 != 0) {
      if (v15 >> 61 != 0) {
        goto LABEL_43;
      }
      v16 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v15, 16, 0);
    }
    else {
      v16 = 0;
    }
    v17 = v16 + 8 * v15;
    v18 = v16 + v11 - 8 * (v11 >> 3);
    *(_QWORD*)(v16 + v11) = v5;
    v9 = (__int64*)(v16 + v11 + 8);
    memcpy_alt1(v18, v10, v11);
    *a2 = v18;
    a2[1] = (__int64)v9;
    a2[2] = v17;
    if (v10 != 0) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
        v19 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v14 + v19, v10);
    }
  }
  else {
    *v8 = v5;
    v9 = v8 + 1;
  }
  v20 = game_gameui_MenuAnimator_instance_;
  a2[1] = (__int64)v9;
  if (v20 != 0) {
    sprintf_alt1((__int64)v34, "%s%s", "Alpha", "In");
    v21 = ProcTransitionAnim_156af20_alt1(v20, 4, 0, (__int64*)(a1 + 848),
                                          "Right", (const char*)v34);
    v9 = (__int64*)a2[1];
    v22 = v21;
  }
  else {
    v22 = -1;
  }
  v23 = a2[2];
  if ((unsigned __int64)v9 >= v23) {
    v25 = *a2;
    v26 = (signed __int64)v9 - *a2;
    v27 = (v26 >> 3) + 1;
    if (v27 >> 61 == 0) {
      v28 = v23 - v25;
      if (v28 >> 2 > v27) {
        v27 = v28 >> 2;
      }
      if ((unsigned __int64)v28 >= 0x7FFFFFFFFFFFFFF8LL) {
        v29 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v29 = v27;
      }
      if (v29 == 0) {
        v30 = 0;
      LABEL_37:
        v31 = v30 + 8 * v29;
        v32 = v30 + v26 - 8 * (v26 >> 3);
        *(_QWORD*)(v30 + v26) = v22;
        v24 = v30 + v26 + 8;
        memcpy_alt1(v32, v25, v26);
        *a2 = v32;
        a2[1] = v24;
        a2[2] = v31;
        if (v25 != 0) {
          v33 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v33 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v33, v25);
        }
        goto LABEL_41;
      }
      if (v29 >> 61 == 0) {
        v30 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v29, 16, 0);
        goto LABEL_37;
      }
    LABEL_43:
      GameRoutine_60a210_alt1();
    }
  LABEL_42:
    GameRoutine_874500_alt1();
  }
  *v9 = v22;
  v24 = (__int64)(v9 + 1);
LABEL_41:
  a2[1] = v24;
  snd_Fade_Fade_10c830_alt1((__int64)v34, 0x0.0p+0f);
  snd_play_ff2d0_alt1((__int64)"SE_SYS_Window_Open",
                      (__int64)"SE_SYS_Window_Open", (__int64)v34, 0, 0x10001u,
                      0, 0x0.0p+0f, 0x1.0000000000000p+0f);
  return snd_Fade_Destroy_Fade_alt1(v34);
}

__int64 ProcMaterialItemSelectMenu_Unknown141(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  const char* v5;
  __int64 v6;
  __int64 v7;
  const char* v8;
  __int64 v9;
  _QWORD* v10;
  _QWORD* v11;
  __int64 v12;
  unsigned int v13;
  __int64* v14;
  __int64 v15;
  _DWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  __int64 v21;
  __int64 result;

  v1 = *(_QWORD*)(a1 + 1112);
  v2 = *(_QWORD*)(a1 + 1104);
  v4 = a1 + 848;
  if ((int)((unsigned __int64)(v1 - v2) >> 3) <= 0) {
    v5 = "Transport_On";
  }
  else {
    v5 = "TransportCost_On";
  }
  LayoutAccessor_1562cf0(v4, v5);
  v6 = (*(_QWORD*)(a1 + 1112) - *(_QWORD*)(a1 + 1104)) >> 3;
  v7 = LayoutAccessor_155fbe0(a1 + 848, "L_UnitInfo");
  if ((int)v6 >= 1) {
    v8 = "Info00";
  }
  else {
    v8 = "Simple00";
  }
  LayoutAccessor_1562cf0(v7, v8);
  v9 = LayoutAccessor_155fbe0(a1 + 848, "L_CostGold");
  v10 = *(_QWORD**)(a1 + 1104);
  v11 = *(_QWORD**)(a1 + 1112);
  v12 = v9;
  if (v10 == v11) {
    v13 = 0;
  }
  else {
    v13 = 0;
    v14 = GameData_212e008[0];
    v15 = GameData_2132028[0];
    do {
      if (*v10 != 0) {
        v16 = (_DWORD*)__dynamic_cast(*v10, v14, v15, 0);
        if (v16 != nullptr) {
          v13 +=
              v16[21] * (*(__int64 (**)(_DWORD*))(*(_QWORD*)v16 + 608LL))(v16);
        }
      }
      ++v10;
    } while (v10 != v11);
  }
  GameRoutine_157cff0(v12, "T_Num", v13, 0);
  v17 = ui_LayoutAccessor_FindPane(v12, "Icon");
  if (v17 != 0) {
    v18 = __dynamic_cast(v17, GameData_212d670[0], GameData_212d678[0], 0);
    if (v18 != 0) {
      v19 = v18;
      v20 = *(int*)((char*)((int*)0x24LL) + (_QWORD)GameData_212da30);
      v21 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v18 + 88LL))(v18, 0);
      if (v21 != 0) {
        *(_DWORD*)(v21 + 12) = v20;
      }
      Manager_136a920(ui_Manager_instance_ + 1264, v19, 0, 7);
    }
  }
  result = ui_LayoutAccessor_FindPane(a1 + 848, "T_CountNum");
  if (result != 0) {
    result = __dynamic_cast(result, GameData_212d670[0], GameData_212d690, 0);
    if (result != 0) {
      return GameRoutine_156c910(result, "%d", 1);
    }
  }
  return result;
}

_BYTE* ProcMaterialItemSelectMenu_Unknown150(_BYTE* result, __int64* a2)
{
  unsigned __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;

  if ((result[1128] & 1) == 0) {
    result =
        (_BYTE*)(*(__int64 (**)(_BYTE*))(*(_QWORD*)result + 192LL))(result);
    v3 = a2[1];
    v4 = a2[2];
    if (v3 >= v4) {
      v6 = *a2;
      v7 = v3 - *a2;
      v8 = 1 - 0x3333333333333333LL * (v7 >> 3);
      if (v8 > 0x666666666666666LL) {
        GameRoutine_874520(result);
      }
      v9 = fw_memory_g_heap_manager_ptr;
      v10 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v4 - v6) >> 3);
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
          GameRoutine_60a210(result);
        }
        v12 = (int)result;
        v13 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 40 * v11, 16, 0);
        LODWORD(result) = v12;
      }
      else {
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
      *(_DWORD*)(v14 + 20) = 7;
      *(_DWORD*)(v14 + 24) = (_DWORD)result;
      result = (_BYTE*)memcpy(v13, v6, v7);
      *a2 = v13;
      a2[1] = v5;
      a2[2] = v15;
      if (v6 != 0) {
        v16 = 128;
        if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
          v16 = 56;
        }
        result = (_BYTE*)nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v16, v6);
      }
    }
    else {
      *(_BYTE*)(v3 + 28) = 0;
      *(_QWORD*)(v3 + 32) = 0;
      *(_QWORD*)v3 = "MultiSelection";
      *(_QWORD*)(v3 + 8) = "MID_KeyHelp_MultiSelection";
      v5 = v3 + 40;
      *(_BYTE*)(v3 + 16) = 1;
      *(_DWORD*)(v3 + 20) = 7;
      *(_DWORD*)(v3 + 24) = (_DWORD)result;
    }
    a2[1] = v5;
  }
  return result;
}

__int64

game_facility_anonymous_ProcMaterialItemSelectMenu_OnInit_closure_Invoke(
    __int64 a1, _QWORD* a2, int* a3)
{
  return GameRoutine_1843070(
      *a2,
      *(unsigned int*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 1072LL) + 4LL * *a3));
}

_QWORD*

game_facility_anonymous_ProcMaterialItemSelectMenu_AddItemList_closure_Invoke(
    __int64 a1, __int64 a2)
{
  __int64 v2;
  _QWORD* v4;
  __int64 v5;

  v2 = *(_QWORD*)(a1 + 8);
  v4 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 176, 16, 0);
  GameRoutine_1866680(v4, 0, *(_QWORD*)(v2 + 1064), a2,
                      *(unsigned __int8*)(v2 + 1128));
  v5 = GameData_2131c70[0];
  v4[18] = 0;
  v4[19] = 0;
  v4[20] = 0;
  v4[21] = 0;
  *v4 = v5 + 16;
  v4[12] = v5 + 712;
  return BasicMenuCursor_16e0c00((_QWORD*)v2, (__int64)v4);
}

bool game_facility_anonymous_ProcMaterialItemSelectMenu_SortAndFilter_closure_Invoke_1702e30(
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

bool game_facility_anonymous_ProcMaterialItemSelectMenu_SortAndFilter_closure_Invoke_1702f80(
    __int64 a1, _QWORD* a2, __int64* a3)
{
  __int64 v3;
  _QWORD* v4;
  _QWORD* v5;
  __int64 v6;
  __int64** v7;
  __int64** v8;
  __int64* v9;
  __int64* v10;
  int v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 (*v19)(_QWORD);
  __int64 v20;
  _QWORD* v21;
  _BOOL4 v22;
  __int64* v23;
  __int64* v24;
  int v25;
  int v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 (*v33)(_QWORD);
  __int64 v34;
  _QWORD* v35;
  _BOOL4 v36;
  __int64 v38;
  __int64 v39;
  __int64** v40;
  struct {
    _QWORD v41[2];
    int v42;
    _BOOL4 v43;
    char v44;
  } v41_;
  struct {
    _QWORD v45[2];
    int v46;
    _BOOL4 v47;
    char v48;
  } v45_;

  v3 = *a3;
  if (*a2 != 0) {
    v4 = (_QWORD*)__dynamic_cast(*a2, GameData_212e008[0], GameData_2131c58[0],
                                 0);
    if (v3 != 0) {
    LABEL_3:
      v5 = (_QWORD*)__dynamic_cast(v3, GameData_212e008[0], GameData_2131c58[0],
                                   0);
      goto LABEL_6;
    }
  }
  else {
    v4 = nullptr;
    if (v3 != 0) {
      goto LABEL_3;
    }
  }
  v5 = nullptr;
LABEL_6:
  v39 = (*(__int64 (**)(_QWORD*))(*v4 + 560LL))(v4);
  v6 = (*(__int64 (**)(_QWORD*))(*v5 + 560LL))(v5);
  v7 = (__int64**)v4[15];
  v8 = (__int64**)v5[15];
  v38 = v6;
  v40 = v8;
  v10 = *v7;
  v9 = v7[1];
  if (v9 == *v7) {
    v22 = true;
  }
  else {
    v11 = 1;
    v12 = 0;
    do {
      v13 = *v10;
      v14 = *(_QWORD*)(*v10 + 24);
      v16 = *(_QWORD*)(v14 + 48);
      v15 = *(_QWORD*)(v14 + 56);
      if (v15 == v16) {
      LABEL_11:
        if (*(_BYTE*)(v13 + 107) != 0) {
          v12 += *(unsigned __int8*)(v13 + 107);
        }
        else {
          v11 = 0;
        }
      }
      else {
        while (1) {
          if (*(_QWORD*)v16 != 0) {
            v17 = game_GameModeData_instance_;
            if (game_GameModeData_instance_ != 0) {
              v18 = game_GameVariableTable_Find_alt1(
                  *(_QWORD**)(game_GameModeData_instance_ + 48),
                  (unsigned __int64*)v16);
              if (v18 != 0) {
                v19 = *(__int64 (**)(_QWORD))(v18 + 72);
                v20 = *(_QWORD*)(v18 + 80);
                v21 = (_QWORD*)(v18 + (v20 >> 1));
                if ((v20 & 1) != 0) {
                  v19 = *(__int64 (**)(_QWORD))((char*)v19 + *v21);
                }
                LOBYTE(v6) = v19(v21);
              }
              else {
                LOBYTE(v6) = 1;
              }
            }
            if (*(_BYTE*)(v16 + 16) != ((v17 == 0) | v6 & 1)) {
              break;
            }
          }
          v16 += 24;
          if (v16 == v15) {
            goto LABEL_11;
          }
        }
      }
      ++v10;
    } while (v10 != v9);
    if (v12 * v11 < 1) {
      v22 = true;
    }
    else {
      LODWORD(v6) = GameRoutine_8a1dc0_alt1(v7);
      v22 = (int)v6 > 0;
    }
    v8 = v40;
  }
  v24 = *v8;
  v23 = v8[1];
  if (v23 == *v8) {
    v36 = true;
  }
  else {
    v25 = 1;
    v26 = 0;
    do {
      v27 = *v24;
      v28 = *(_QWORD*)(*v24 + 24);
      v29 = *(_QWORD*)(v28 + 48);
      v30 = *(_QWORD*)(v28 + 56);
      if (v30 == v29) {
      LABEL_32:
        if (*(_BYTE*)(v27 + 107) != 0) {
          v26 += *(unsigned __int8*)(v27 + 107);
        }
        else {
          v25 = 0;
        }
      }
      else {
        while (1) {
          if (*(_QWORD*)v29 != 0) {
            v31 = game_GameModeData_instance_;
            if (game_GameModeData_instance_ != 0) {
              v32 = game_GameVariableTable_Find_alt1(
                  *(_QWORD**)(game_GameModeData_instance_ + 48),
                  (unsigned __int64*)v29);
              if (v32 != 0) {
                v33 = *(__int64 (**)(_QWORD))(v32 + 72);
                v34 = *(_QWORD*)(v32 + 80);
                v35 = (_QWORD*)(v32 + (v34 >> 1));
                if ((v34 & 1) != 0) {
                  v33 = *(__int64 (**)(_QWORD))((char*)v33 + *v35);
                }
                LOBYTE(v6) = v33(v35);
              }
              else {
                LOBYTE(v6) = 1;
              }
            }
            if (*(_BYTE*)(v29 + 16) != ((v31 == 0) | v6 & 1)) {
              break;
            }
          }
          v29 += 24;
          if (v29 == v30) {
            goto LABEL_32;
          }
        }
      }
      ++v24;
    } while (v24 != v23);
    v36 = v26 * v25 < 1 || (int)GameRoutine_8a1dc0_alt1(v40) > 0;
  }
  v45_.v46 = 0;
  v45_.v47 = v22;
  v45_.v48 = 1;
  v41_.v42 = 0;
  v41_.v43 = v36;
  v41_.v44 = 1;
  v45_.v45[0] = v39;
  v45_.v45[1] = 0;
  v41_.v41[0] = v38;
  v41_.v41[1] = 0;
  return GameRoutine_19ef8e0_alt1(v45_.v45, v41_.v41);
}

#pragma GCC visibility pop
