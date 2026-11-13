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
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64 Alignment_56b600(void);
__int64 ControlCreator_13633c0(void);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_157cff0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_187c5b0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_9db9e0(_QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 ItemShopSelectMenu_1873d80(_QWORD);
__int64 LayoutAccessor_155e830(_QWORD, _QWORD);
__int64 LayoutAccessor_155fbe0(_QWORD, _QWORD);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 Manager_136a920(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 Pane_58f8a0(_QWORD);
__int64 ProcTransitionAnim_156af20(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                   _QWORD);
__int64 game_gameui_anonymous_15d2000(_QWORD, _QWORD, _QWORD);
__int64 game_gameui_anonymous_15d2540(_QWORD, _QWORD, _QWORD);
__int64 game_menu_GameMenu_Unknown135(_QWORD, _QWORD);
__int64 game_util_Format(const char*, ...);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 sprintf(_QWORD, const char*, ...);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindAlignment(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
__n128 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN* GameData_212da30;
extern _UNKNOWN game_g_random_mutex;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212e348;
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 game_GameModeData_instance_;
extern __int64 game_gameui_MenuAnimator_instance_;
extern __int64 ui_Manager_instance_;
extern char GameData_1a9f09e;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_874500(void);
__int64 ProcItemSelectMenu_1877920_alt1(
    __int64* a1, __int64* a2,
    unsigned int a3) __asm__("ProcItemSelectMenu_1877920");
__int64 ProcItemSelectMenu_Unknown135(__int64 result, __int64* a2);
__int64 ProcItemSelectMenu_Unknown88_187a9f0(__int64* a1);
_DWORD* GameRoutine_187c5b0_alt1(__int64*, unsigned __int16*, int, __int64,
                                 char) __asm__("GameRoutine_187c5b0");
__int64*
LayoutAccessor_155fbe0_alt1(__int64*,
                            const char*) __asm__("LayoutAccessor_155fbe0");
__int64 Alignment_56b600_alt1(__int64 result) __asm__("Alignment_56b600");
__int64
ControlCreator_13633c0_alt1(__int64 result) __asm__("ControlCreator_13633c0");
__int64 GameRoutine_1567590_alt1(__int64 result,
                                 char) __asm__("GameRoutine_1567590");
__int64 GameRoutine_9db9e0_alt1(unsigned int,
                                unsigned int) __asm__("GameRoutine_9db9e0");
__int64
ItemShopSelectMenu_1873d80_alt1(_QWORD*) __asm__("ItemShopSelectMenu_1873d80");
__int64 LayoutAccessor_155e830_alt1(__int64 result,
                                    char) __asm__("LayoutAccessor_155e830");
__int64
LayoutAccessor_1562cf0_alt1(__int64 result,
                            const char*) __asm__("LayoutAccessor_1562cf0");
__int64 Manager_136a920_alt1(__int64, __int64, int, unsigned int,
                             _BYTE*) __asm__("Manager_136a920");
__int64 Pane_58f8a0_alt1(__int64) __asm__("Pane_58f8a0");
__int64 game_gameui_anonymous_15d2000_alt1(__int64, __int64, __int64) __asm__(
    "game_gameui_anonymous_15d2000");
__int64 game_gameui_anonymous_15d2540_alt1(__int64*, _WORD*, __int64) __asm__(
    "game_gameui_anonymous_15d2540");
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64 ui_LayoutAccessor_FindAlignment_alt1(__int64*, __int64) __asm__(
    "ui_LayoutAccessor_FindAlignment");
__int64
ui_LayoutAccessor_FindPane_alt1(__int64*,
                                __int64) __asm__("ui_LayoutAccessor_FindPane");
__int64 ui_LayoutAccessor_FindTextBox_alt1(__int64*, __int64) __asm__(
    "ui_LayoutAccessor_FindTextBox");
__int64 ui_LayoutAccessor_SetPaneVisible_alt1(
    __int64 result, __int64, char) __asm__("ui_LayoutAccessor_SetPaneVisible");
char* GameRoutine_a4dbe0_alt1(__int64, _BYTE*,
                              char) __asm__("GameRoutine_a4dbe0");
char* game_util_Format_alt1(const char*, ...) __asm__("game_util_Format");
void GameRoutine_156c5d0_alt1(__int64, __int64,
                              char) __asm__("GameRoutine_156c5d0");
void GameRoutine_157cff0_alt1(__int64*, __int64, int,
                              char) __asm__("GameRoutine_157cff0");
__int64 ProcItemSelectMenu_1877920(__int64 a1, __int64* a2, char a3);
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_facility_187c870(__int64, char, __int64);
__int64 game_facility_187c960(__int64 result, __int64, unsigned __int16*);
__int64 game_gameui_Util_EachItemFromTransporter(__int64);
__int64 game_gameui_anonymous_15d2280(__int64, __int64*, _QWORD*, __int64);
__int64 game_gameui_anonymous_15d2540_alt2(__int64*, _WORD*) __asm__(
    "game_gameui_anonymous_15d2540");
extern __int64 (*GameData_20f8938[])();
extern __int64 (*GameData_20f93a0[])();
extern __int64 (*GameData_20f96f0[])();
extern __int64 (*GameData_20f9770[])();
extern __int64 (*GameData_20fa288[])();
extern __int64 (*GameData_20fa308[])();
extern __int64 (*GameData_20fa388[])();
extern __int64 (*GameData_20fa440[])();
extern __int64 (*game_facility_EmptyShopItemMenuItem_vtable[])();
extern __int64 (*game_facility_anonymous_BlacksmithMenuItem_Before_vtable[])();
extern __int64 (*game_facility_anonymous_BlacksmithMenuItem_Empty_vtable[])();
extern __int64 (*game_facility_anonymous_BlacksmithMenuItem_Info_vtable[])();
unsigned __int16* BlacksmithMenuUtil_187cca0(unsigned __int16* result, __int64);
void BasicMenuCursor_16e0c00_alt1(_QWORD*,
                                  __int64) __asm__("BasicMenuCursor_16e0c00");
__int64 ProcItemSelectMenu_Unknown88_1876270(__int64* a1);
void ProcItemSelectMenu_Unknown128_1876600(__int64 a1);
__int64 ProcItemSelectMenu_Unknown128_1879260(__int64 a1);
__int64 ProcItemSelectMenu_Unknown146_1879560(__int64 a1, unsigned __int16* a2);
__int64 ProcItemSelectMenu_Unknown149_1879660(__int64 a1);
__int64
game_facility_anonymous_ProcItemSelectMenu_OnBuild_closure_Invoke_1879970(
    __int64 a1, unsigned __int16** a2);
__int64 ProcItemSelectMenu_Unknown128_187b1c0(__int64 a1);
__int64 ProcItemSelectMenu_Unknown146_187b2c0(__int64 a1, unsigned __int16* a2);
__int64 ProcItemSelectMenu_Unknown149_187b3c0();
__int64
game_facility_anonymous_ProcItemSelectMenu_OnBuild_closure_Invoke_187b6d0(
    __int64 a1, unsigned __int16** a2);
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
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void snd_Fade_Fade_10c830_alt1(__int64, float) __asm__("snd_Fade_Fade_10c830");
_QWORD* Util_1575c70(__int64, __int64, int, const char*, char, __int64);
bool game_159ea20(__int64, __int64, char);
char* GameRoutine_a4dbe0_alt2(__int64, const char*,
                              char) __asm__("GameRoutine_a4dbe0");
extern __int64 (*GameData_20f9ed0[])();
extern __int64 (*msg_TagSelector_vtable[])();
extern char* GameData_20fa3f8[7];
void LayoutAccessor_1572ac0(__int64*, __int64, char, char);
_QWORD* ProcItemSelectMenu_Unknown85_187a700(__int64 a1);

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

__int64 ProcItemSelectMenu_Unknown88_1876270(__int64* a1)
{
  __int64 v1;
  __int64* v3;
  int v4;
  __int64 v5;
  const char* v6;
  __int64* v7;
  __int64* v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  __int64* v12;
  __int64* v13;
  char v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int16 v21;
  __int64* v22;
  int v23;
  __int64 v24;
  __int64 v25;
  __int64* v26;
  int v27;
  unsigned int v28;
  unsigned int v29;
  int v30;
  __int16 v31;
  __int64* v32;
  __int64 v33;
  __int64 result;
  __int64 v35;
  char v36;
  __int16 v37;
  __int16 v38;
  __int64 v39[7];

  v1 = a1[42];
  if (v1 == 0) {
    goto LABEL_4;
  }
  if (*(__int64 (***)(void))v1 !=
      game_facility_anonymous_BlacksmithMenuItem_Refine_vtable) {
    if (*(__int64 (***)(void))v1 ==
        game_facility_anonymous_BlacksmithMenuItem_Before_vtable) {
      v18 = *(_QWORD*)(v1 + 96);
      v19 = *(int*)(v1 + 104);
      if (v18 != 0) {
        v20 = v18 + 8 * v19 + 828;
      }
      else {
        v20 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                        game_TransporterConst_List_instance__ptr
                                            [0] +
                                    8LL) +
                         8LL) +
              12LL * (int)v19 + 4;
      }
      v37 = *(_WORD*)v20;
      *((_BYTE*)a1 + 1110) = *(_BYTE*)(v20 + 2);
      *((_WORD*)a1 + 554) = v37;
      *((_BYTE*)a1 + 1111) = *(_BYTE*)(v20 + 3);
      *((_DWORD*)a1 + 278) = *(_DWORD*)(v20 + 4);
      v38 = *(_WORD*)v20;
      *((_BYTE*)a1 + 1074) = *(_BYTE*)(v20 + 2);
      *((_WORD*)a1 + 536) = v38;
      *((_BYTE*)a1 + 1075) = *(_BYTE*)(v20 + 3);
      *((_DWORD*)a1 + 269) = *(_DWORD*)(v20 + 4);
      v8 = LayoutAccessor_155fbe0_alt1(a1 + 106, "L_AfterInfoDetail");
      v10 = (__int64*)((char*)a1 + 1108);
      v9 = (__int64*)v20;
      if (*((_BYTE*)a1 + 1080) != 0) {
        v11 = a1[133];
      }
      else {
        v11 = 0;
      }
      goto LABEL_5;
    }
  LABEL_4:
    GameHr_1562680((__int64)(a1 + 106), "MasteryInfo_Off",
                   0x1.0000000000000p+0f);
    v3 = game_g_empty_item_ptr;
    v4 = *((_DWORD*)game_g_empty_item_ptr + 1);
    *((_DWORD*)a1 + 268) = *(_DWORD*)game_g_empty_item_ptr;
    v5 = *a1;
    *((_DWORD*)a1 + 269) = v4;
    v6 = (const char*)(*(__int64 (**)(__int64*))(v5 + 1248))(a1);
    v7 = LayoutAccessor_155fbe0_alt1(a1 + 106, v6);
    game_gameui_anonymous_15d2540_alt2(v7, v3);
    v8 = LayoutAccessor_155fbe0_alt1(a1 + 106, "L_AfterInfoDetail");
    v9 = v3;
    v10 = v3;
    v11 = 0;
  LABEL_5:
    game_gameui_anonymous_15d2280((__int64)v8, v9, v10, v11);
    v12 = LayoutAccessor_155fbe0_alt1(a1 + 106, "L_AccountMenu");
    v13 = v39;
    v14 = 0;
    memset(v39, 0, sizeof(v39));
    goto LABEL_18;
  }
  v15 = *(_QWORD*)(v1 + 104);
  v16 = *(int*)(v1 + 40);
  if (v15 != 0) {
    v17 = v15 + 8 * v16 + 828;
  }
  else {
    v17 =
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                  game_TransporterConst_List_instance__ptr[0] +
                              8LL) +
                   8LL) +
        12LL * (int)v16 + 4;
  }
  v21 = *(_WORD*)v17;
  v22 = *(__int64**)(v1 + 112);
  *((_BYTE*)a1 + 1110) = *(_BYTE*)(v17 + 2);
  *((_WORD*)a1 + 554) = v21;
  *((_BYTE*)a1 + 1111) = *(_BYTE*)(v17 + 3);
  v23 = *(_DWORD*)(v17 + 4);
  v39[0] = 0;
  *((_DWORD*)a1 + 278) = v23;
  v24 = v22[3];
  if (v24 != 0) {
    v25 = *(unsigned __int16*)(v24 + 16);
    LODWORD(v24) = 1;
    HIDWORD(v39[0]) = 1;
    LOWORD(v39[0]) = v25;
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8 * v25) +
                  73LL) == 17) {
      nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
      v26 = game_map_MapRandom_instance__ptr[0];
      v27 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((_UNKNOWN**)0x8LL));
      v28 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
      v29 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
            (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
      *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
          *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
      *((_DWORD*)v26 + 1) = v27;
      v30 = (v29 >> 8) ^ (v28 >> 19) ^ v29 ^ v28;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v26) = v28;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v26 + 4) = v30;
      nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
      LODWORD(v24) =
          (16 * ((_WORD)v30 -
                 1000 * (unsigned __int16)((v30 & 0x7FFFFFFFu) / 0x3E8)) +
           16) &
              0x3FF0 |
          1;
      HIDWORD(v39[0]) = v24;
    }
  }
  v31 = v39[0];
  *((_BYTE*)a1 + 1075) = 0;
  *((_DWORD*)a1 + 269) = v24;
  *((_WORD*)a1 + 536) = v31;
  *((_BYTE*)a1 + 1074) = BYTE2(v39[0]);
  v32 = LayoutAccessor_155fbe0_alt1(a1 + 106, "L_AfterInfoDetail");
  if (*((_BYTE*)a1 + 1080) != 0) {
    v33 = a1[133];
  }
  else {
    v33 = 0;
  }
  game_gameui_anonymous_15d2280((__int64)v32, v39, (__int64*)((char*)a1 + 1108),
                                v33);
  v12 = LayoutAccessor_155fbe0_alt1(a1 + 106, "L_AccountMenu");
  v13 = v22;
  v14 = *(_QWORD*)(*(_QWORD*)(v1 + 8) + 336LL) == v1;
LABEL_18:
  result = ProcItemSelectMenu_1877920((__int64)v12, v13, v14);
  if (*((_BYTE*)a1 + 1081) == 1) {
    v36 = true;
    if (a1[133] != 0 && (ItemShopSelectMenu_1873d80_alt1(a1) & 1) != 0) {
      v35 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                       8LL * *((unsigned __int16*)a1 + 536));
      if (*(unsigned __int8*)(v35 + 72) < 8u || *(_BYTE*)(v35 + 73) == 16) {
        v36 = false;
      }
    }
    return GameRoutine_1567590_alt1((__int64)"StatusChange", v36);
  }
  return result;
}

void ProcItemSelectMenu_Unknown128_1876600(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int16* v10;
  __int64 v11;
  __int64 v12;
  struct {
    _QWORD v13[4];
    _QWORD* v14;
  } v13_;
  int v15;

  v2 = (__int64*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 144, 16, 0);
  *(_QWORD*)(v3 + 72) = 0;
  *(_QWORD*)(v3 + 80) = 0;
  *(_QWORD*)(v3 + 16) = 0;
  *(_QWORD*)(v3 + 24) = 0;
  *(_QWORD*)(v3 + 32) = 0;
  *(_QWORD*)(v3 + 40) = 0;
  strcpy((char*)(v3 + 96), "*MID_RefineMenu_Before");
  *(_BYTE*)(v3 + 17) = 0;
  *(_QWORD*)(v3 + 48) = 0;
  *(_QWORD*)(v3 + 56) = 0;
  *(_QWORD*)(v3 + 64) = 0;
  *(_WORD*)(v3 + 80) = 257;
  *(_BYTE*)(v3 + 82) = 1;
  *(_DWORD*)(v3 + 84) = 1;
  *(_BYTE*)(v3 + 88) = 0;
  *(_QWORD*)v3 = game_facility_anonymous_BlacksmithMenuItem_Info_vtable;
  *(_QWORD*)(v3 + 8) = 0;
  strcpy((char*)(v3 + 120), "(MID_Sys_WeaponEndure");
  BasicMenuCursor_16e0c00_alt1((_QWORD*)a1, v3);
  v4 = fw_memory_HeapManager_Allocate_alt1(*v2, 112, 16, 0);
  v5 = *(_QWORD*)(a1 + 1064);
  v6 = *(_DWORD*)(a1 + 1104);
  *(_QWORD*)(v4 + 72) = 0;
  *(_QWORD*)(v4 + 80) = 0;
  *(_QWORD*)(v4 + 16) = 0;
  *(_QWORD*)(v4 + 24) = 0;
  *(_QWORD*)(v4 + 32) = 0;
  *(_QWORD*)(v4 + 40) = 0;
  *(_BYTE*)(v4 + 17) = 0;
  *(_QWORD*)(v4 + 48) = 0;
  *(_QWORD*)(v4 + 56) = 0;
  *(_QWORD*)(v4 + 64) = 0;
  *(_WORD*)(v4 + 80) = 257;
  *(_BYTE*)(v4 + 82) = 1;
  *(_DWORD*)(v4 + 84) = 1;
  *(_BYTE*)(v4 + 88) = 0;
  *(_QWORD*)v4 = game_facility_anonymous_BlacksmithMenuItem_Before_vtable;
  *(_QWORD*)(v4 + 8) = 0;
  *(_QWORD*)(v4 + 96) = v5;
  *(_DWORD*)(v4 + 104) = v6;
  BasicMenuCursor_16e0c00_alt1((_QWORD*)a1, v4);
  v7 = fw_memory_HeapManager_Allocate_alt1(*v2, 144, 16, 0);
  *(_QWORD*)(v7 + 72) = 0;
  *(_QWORD*)(v7 + 80) = 0;
  *(_QWORD*)(v7 + 16) = 0;
  *(_QWORD*)(v7 + 24) = 0;
  *(_QWORD*)(v7 + 32) = 0;
  *(_QWORD*)(v7 + 40) = 0;
  *(_BYTE*)(v7 + 17) = 0;
  *(_QWORD*)(v7 + 48) = 0;
  *(_QWORD*)(v7 + 56) = 0;
  *(_QWORD*)(v7 + 64) = 0;
  *(_WORD*)(v7 + 80) = 257;
  *(_BYTE*)(v7 + 82) = 1;
  *(_DWORD*)(v7 + 84) = 1;
  *(_BYTE*)(v7 + 88) = 0;
  *(_QWORD*)v7 = game_facility_anonymous_BlacksmithMenuItem_Info_vtable;
  *(_QWORD*)(v7 + 8) = 0;
  strcpy((char*)(v7 + 96), "(MID_RefineMenu_After");
  strcpy((char*)(v7 + 120), "(MID_Sys_WeaponEndure");
  BasicMenuCursor_16e0c00_alt1((_QWORD*)a1, v7);
  v8 = *(_QWORD*)(a1 + 1064);
  v9 = *(int*)(a1 + 1104);
  v15 = 0;
  if (v8 != 0) {
    v10 = (unsigned __int16*)(v8 + 8 * v9 + 828);
  }
  else {
    v10 =
        (unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                      game_TransporterConst_List_instance__ptr
                                                          [0] +
                                                  8LL) +
                                       8LL) +
                            12LL * (int)v9 + 4);
  }
  v13_.v13[0] = GameData_20f8938;
  v13_.v13[1] = a1;
  v13_.v14 = v13_.v13;
  v13_.v13[2] = &v15;
  BlacksmithMenuUtil_187cca0(v10, (__int64)v13_.v13);
  if (v13_.v14 == v13_.v13) {
    v11 = 32;
  }
  else {
    if (v13_.v14 == nullptr) {
      goto LABEL_9;
    }
    v11 = 40;
  }
  (*(void (**)(__int64))(*v13_.v14 + v11))((__int64)v13_.v14);
LABEL_9:
  if (v15 == 0) {
    v12 = fw_memory_HeapManager_Allocate_alt1(*v2, 96, 16, 0);
    *(_QWORD*)(v12 + 72) = 0;
    *(_QWORD*)(v12 + 80) = 0;
    *(_QWORD*)(v12 + 16) = 0;
    *(_QWORD*)(v12 + 24) = 0;
    *(_QWORD*)(v12 + 32) = 0;
    *(_QWORD*)(v12 + 40) = 0;
    *(_BYTE*)(v12 + 17) = 0;
    *(_QWORD*)(v12 + 48) = 0;
    *(_QWORD*)(v12 + 56) = 0;
    *(_QWORD*)(v12 + 64) = 0;
    *(_BYTE*)(v12 + 88) = 0;
    *(_WORD*)(v12 + 80) = 257;
    *(_BYTE*)(v12 + 82) = 1;
    *(_DWORD*)(v12 + 84) = 1;
    *(_QWORD*)v12 = game_facility_anonymous_BlacksmithMenuItem_Empty_vtable;
    *(_QWORD*)(v12 + 8) = 0;
    BasicMenuCursor_16e0c00_alt1((_QWORD*)a1, v12);
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
    (*(void (**)(void*))(*(_QWORD*)v4 + 32))((void*)v4);
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
  return (*(__int64 (**)(void*))(*(_QWORD*)v6 + v2))((void*)v6);
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

__int64 ProcItemSelectMenu_1877920(__int64 a1, __int64* a2, char a3)
{
  __int64* v5;
  bool v6;
  char* v7;
  __int64* v8;
  __int64 v9;
  __int64* v10;
  char* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64* v17;
  __int64 v18;
  int v19;
  char* v20;
  __int64* v21;
  __int64 v22;
  __int64* v23;
  int v24;
  unsigned int v25;
  unsigned int v26;
  int v27;
  char* v28;
  __int64* v29;
  __int64 v30;
  char* v31;
  __int64 v32;
  __int64 v33;
  int v34;
  int v35;
  bool v36;
  void* v37;
  char* v38;
  int v39;
  __int64 v40;
  __int64 v41;
  __int64* v42;
  __int64 v43;
  __int64 v44;
  int v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  char* v53;
  char* v54;
  __int64* v55;
  char* v56;
  __int64* v57;
  char* v58;
  __int64* v59;
  char* v60;
  __int64* v61;
  char* v62;
  __int64* v63;
  __int64 result;
  __int64 v65;
  __int64* v66;
  struct {
    __int64* v67;
    unsigned __int64 v68;
    unsigned __int64 v69;
    unsigned __int64 v70;
    int v71;
    int v72;
    __int64 v73;
    __int64 v74;
    __int64 v75;
    __int64 v76;
    __int64 v77;
    __int64 v78;
    __int64 v79;
    __int64 v80;
    __int64 v81;
    __int64 v82;
    __int64 v83;
    __int64 v84;
    __int64 v85;
  } v67_;

  v5 = (__int64*)a1;
  LayoutAccessor_155e830_alt1(a1, a3);
  v6 = a2[3] == 0;
  v67_.v73 = -1;
  v67_.v74 = -1;
  if (v6) {
    v7 = &GameData_1a9f09e;
  }
  else {
    v7 = "MID_Shop_Consumption";
  }
  v8 = msg_MessageManager_instance__ptr[0];
  v67_.v75 = -1;
  v67_.v76 = -1;
  v67_.v77 = -1;
  v67_.v78 = -1;
  v9 = *msg_MessageManager_instance__ptr[0];
  v10 = GameData_212e348;
  v67_.v79 = -1;
  v67_.v80 = -1;
  v67_.v81 = -1;
  v67_.v82 = -1;
  v67_.v83 = -1;
  v67_.v84 = -1;
  v67_.v67 = GameData_212e348 + 2;
  v67_.v68 = 0xFFFF0001FFFF0000LL;
  v67_.v69 = 0xFFFF0004FFFF0002LL;
  v67_.v70 = 0xFFFF0006FFFF0005LL;
  v67_.v85 = 8;
  v67_.v71 = -65529;
  v67_.v72 = -65528;
  v11 = GameRoutine_a4dbe0_alt1(v9, v7, 0);
  if (v11 != nullptr) {
    v12 = (__int64)v11;
    v13 = ui_LayoutAccessor_FindTextBox_alt1(v5, (__int64)"T_CostTitle_Txt");
    if (v13 != 0) {
      GameRoutine_156c5d0_alt1(v13, v12, 0);
    }
  }
  v14 = *a2;
  v66 = v5;
  if (a2[1] == *a2) {
    LODWORD(v16) = 0;
  }
  else {
    v15 = 0;
    v16 = 0;
    do {
      v17 = (__int64*)(v14 + v15);
      v18 = *v17;
      v19 = *((_DWORD*)v17 + 2);
      v20 = game_util_Format_alt1("L_Item%02d", v16);
      v21 = LayoutAccessor_155fbe0_alt1(v5, v20);
      LayoutAccessor_155e830_alt1((__int64)v21, 1);
      LayoutAccessor_1562cf0_alt1((__int64)v21, "EnduranceOn");
      v67_.v67 = nullptr;
      if (v18 != 0) {
        v22 = *(unsigned __int16*)(v18 + 16);
        HIDWORD(v67_.v67) = 1;
        LOWORD(v67_.v67) = v22;
        if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                 8 * v22) +
                      73LL) == 17) {
          nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
          v23 = game_map_MapRandom_instance__ptr[0];
          v24 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                           (unsigned __int64)((_UNKNOWN**)0x8LL));
          v25 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                           (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
          v26 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
                (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
          *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
              *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
          *((_DWORD*)v23 + 1) = v24;
          v27 = (v26 >> 8) ^ (v25 >> 19) ^ v26 ^ v25;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v23) = v25;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v23 + 4) = v27;
          nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
          v5 = v66;
          HIDWORD(v67_.v67) =
              HIDWORD(v67_.v67) & 0xFFFFC00F |
              (16 *
               (((16 * (v27 - 1000 * ((v27 & 0x7FFFFFFFu) / 0x3E8)) + 16) >>
                 4) &
                0x3FF));
        }
      }
      GameRoutine_187c5b0_alt1(v21, (unsigned __int16*)&v67_.v67, v19, a3 & 1,
                               0);
      v14 = *a2;
      ++v16;
      v15 += 16;
    } while (v16 < (a2[1] - *a2) >> 4);
    v8 = msg_MessageManager_instance__ptr[0];
    v10 = GameData_212e348;
  }
  if ((int)GameRoutine_9db9e0_alt1(0x16u, *((_DWORD*)a2 + 11)) > 0) {
    v28 = game_util_Format_alt1("L_Item%02d", v16);
    v29 = LayoutAccessor_155fbe0_alt1(v5, v28);
    LayoutAccessor_155e830_alt1((__int64)v29, 1);
    v30 = *v8;
    v67_.v73 = -1;
    v67_.v74 = -1;
    v67_.v75 = -1;
    v67_.v76 = -1;
    v67_.v77 = -1;
    v67_.v78 = -1;
    v67_.v79 = -1;
    v67_.v80 = -1;
    v67_.v81 = -1;
    v67_.v82 = -1;
    v67_.v83 = -1;
    v67_.v84 = -1;
    v67_.v67 = v10 + 2;
    v67_.v68 = 0xFFFF0001FFFF0000LL;
    v67_.v69 = 0xFFFF0004FFFF0002LL;
    v67_.v70 = 0xFFFF0006FFFF0005LL;
    v67_.v85 = 8;
    v67_.v71 = -65529;
    v67_.v72 = -65528;
    v31 = GameRoutine_a4dbe0_alt1(v30, "MID_Sys_Gold", 0);
    if (v31 != nullptr) {
      v32 = (__int64)v31;
      v33 = ui_LayoutAccessor_FindTextBox_alt1(v29, (__int64)"T_Txt");
      if (v33 != 0) {
        GameRoutine_156c5d0_alt1(v33, v32, 0);
      }
    }
    LayoutAccessor_1562cf0_alt1((__int64)v29, "Cost");
    v34 = GameRoutine_9db9e0_alt1(0x16u, *((_DWORD*)a2 + 11));
    GameRoutine_157cff0_alt1(v29, (__int64)"T_Num", v34, 0);
    if (game_GameModeData_instance_ != 0) {
      v35 = *(_DWORD*)(game_GameModeData_instance_ + 72);
    }
    else {
      v35 = 0;
    }
    v36 = v35 < (int)GameRoutine_9db9e0_alt1(0x16u, *((_DWORD*)a2 + 11));
    v37 = GameData_212da30;
    v38 = (char*)GameData_212da30 + 60;
    if (!v36) {
      v38 = (char*)GameData_212da30 + 36;
    }
    v39 = *(_DWORD*)v38;
    v40 = ui_LayoutAccessor_FindTextBox_alt1(v29, (__int64)"T_Num");
    if (v40 != 0) {
      v41 = Pane_58f8a0_alt1(v40);
      if (v41 != 0) {
        *(_DWORD*)(v41 + 12) = v39;
      }
    }
    v42 = LayoutAccessor_155fbe0_alt1(v29, "L_Icon");
    v43 = ui_LayoutAccessor_FindPane_alt1(v42, (__int64)"Icon");
    if (v43 != 0) {
      v44 = __dynamic_cast(v43, GameData_212d670[0], GameData_212d678[0], 0);
      if (v44 != 0) {
        v45 = *(int*)((char*)((int*)0x24LL) + (_QWORD)v37);
        v46 = v44;
        v47 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v44 + 88LL))(v44, 0);
        if (v47 != 0) {
          *(_DWORD*)(v47 + 12) = v45;
        }
        Manager_136a920_alt1(ui_Manager_instance_ + 1264, v46, 0, 7u,
                             "IconStock_Gold");
      }
    }
    ui_LayoutAccessor_SetPaneVisible_alt1((__int64)v42, (__int64)"IconDamage",
                                          0);
    ui_LayoutAccessor_SetPaneVisible_alt1((__int64)v42, (__int64)"IconLock", 0);
    ui_LayoutAccessor_SetPaneVisible_alt1((__int64)v42, (__int64)"IconDrop", 0);
    v48 = ui_LayoutAccessor_FindAlignment_alt1(v29, (__int64)"A_Num");
    v5 = v66;
    if (v48 != 0) {
      Alignment_56b600_alt1(v48);
      v49 = v29[1];
      if (v49 != 0) {
        v50 = std___1___shared_weak_count_lock_alt1(v49);
        if (v50 != 0) {
          v51 = v50;
          if (*v29 != 0) {
            ControlCreator_13633c0_alt1(*v29);
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v51 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v51 + 16LL))(v51);
            std___1___shared_weak_count___release_weak_alt1(v51);
          }
        }
      }
    }
    LODWORD(v16) = v16 + 1;
  }
  if ((int)v16 <= 3) {
    v52 = 3;
  }
  else {
    v52 = (unsigned int)v16;
  }
  v53 = game_util_Format_alt1("Cost_%02d", v52);
  LayoutAccessor_1562cf0_alt1((__int64)v5, v53);
  if ((unsigned int)v16 <= 4) {
    v54 = game_util_Format_alt1("L_Item%02d", v16);
    v55 = LayoutAccessor_155fbe0_alt1(v5, v54);
    LayoutAccessor_155e830_alt1((__int64)v55, 0);
    if ((unsigned int)v16 != 4) {
      v56 = game_util_Format_alt1("L_Item%02d", (int)v16 + 1);
      v57 = LayoutAccessor_155fbe0_alt1(v5, v56);
      LayoutAccessor_155e830_alt1((__int64)v57, 0);
      if ((unsigned int)v16 != 3) {
        v58 = game_util_Format_alt1("L_Item%02d", (int)v16 + 2);
        v59 = LayoutAccessor_155fbe0_alt1(v5, v58);
        LayoutAccessor_155e830_alt1((__int64)v59, 0);
        if ((unsigned int)v16 != 2) {
          v60 = game_util_Format_alt1("L_Item%02d", (int)v16 + 3);
          v61 = LayoutAccessor_155fbe0_alt1(v5, v60);
          LayoutAccessor_155e830_alt1((__int64)v61, 0);
          if ((unsigned int)v16 != 1) {
            v62 = game_util_Format_alt1("L_Item%02d", (int)v16 + 4);
            v63 = LayoutAccessor_155fbe0_alt1(v5, v62);
            LayoutAccessor_155e830_alt1((__int64)v63, 0);
          }
        }
      }
    }
  }
  result = ui_LayoutAccessor_FindAlignment_alt1(v5, (__int64)"A_Cost");
  if (result != 0) {
    Alignment_56b600_alt1(result);
    result = v5[1];
    if (result != 0) {
      result = std___1___shared_weak_count_lock_alt1(result);
      if (result != 0) {
        v65 = result;
        result = *v5;
        if (*v5 != 0) {
          result = ControlCreator_13633c0_alt1(result);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v65 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v65 + 16LL))(v65);
          return std___1___shared_weak_count___release_weak_alt1(v65);
        }
      }
    }
  }
  return result;
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

__int64 ProcItemSelectMenu_Unknown128_1879260(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  char v6;
  __int64 result;
  __int64 v8;
  struct {
    _QWORD v9[4];
    _QWORD* v10;
  } v9_;

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
  v6 = *(_BYTE*)(a1 + 1088);
  *(_QWORD*)(v3 + 8) = a1;
  *(_QWORD*)(a1 + 344) = v3;
  v9_.v9[0] = GameData_20f93a0;
  v9_.v9[1] = a1;
  v9_.v10 = v9_.v9;
  game_facility_187c870(v5, v6, (__int64)v9_.v9);
  result = (__int64)v9_.v10;
  if (v9_.v10 == v9_.v9) {
    v8 = 32;
  }
  else {
    if (v9_.v10 == nullptr) {
      return result;
    }
    v8 = 40;
  }
  return (*(__int64 (**)(__int64))(*v9_.v10 + v8))((__int64)v9_.v10);
}

__int64 ProcItemSelectMenu_Unknown135(__int64 result, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  unsigned __int64 v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  signed __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  _QWORD v20[25];

  if (*(_DWORD*)(result + 352) != 9) {
    return game_menu_GameMenu_Unknown135_alt1((__int64*)result, a2);
  }
  v2 = game_gameui_MenuAnimator_instance_;
  if (game_gameui_MenuAnimator_instance_ != 0) {
    v3 = result;
    sprintf_alt1((__int64)v20, "%s%s", "Right", "In");
    result = ProcTransitionAnim_156af20_alt1(v2, 3, 0, (__int64*)(v3 + 848),
                                             "Right", (const char*)v20);
    if (result != -1) {
      v6 = (__int64*)a2[1];
      v5 = a2[2];
      v7 = a2;
      if ((unsigned __int64)v6 >= v5) {
        v9 = *a2;
        v10 = (signed __int64)v6 - *a2;
        v11 = (v10 >> 3) + 1;
        if (v11 >> 61 != 0) {
          GameRoutine_874500_alt1();
        }
        v12 = v5 - v9;
        v13 = fw_memory_g_heap_manager_ptr;
        if (v12 >> 2 > v11) {
          v11 = v12 >> 2;
        }
        if ((unsigned __int64)v12 >= 0x7FFFFFFFFFFFFFF8LL) {
          v14 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v14 = v11;
        }
        if (v14 != 0) {
          if (v14 >> 61 != 0) {
            GameRoutine_60a210_alt1();
          }
          v15 = result;
          v16 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v14, 16, 0);
          result = v15;
        }
        else {
          v16 = 0;
        }
        v17 = v16 + 8 * v14;
        v18 = v16 + v10 - 8 * (v10 >> 3);
        *(_QWORD*)(v16 + v10) = result;
        v8 = v16 + v10 + 8;
        memcpy_alt1(v18, v9, v10);
        *a2 = v18;
        a2[1] = v8;
        a2[2] = v17;
        if (v9 != 0) {
          v19 = 128;
          if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
            v19 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v13 + v19, v9);
        }
        v7 = a2;
      }
      else {
        *v6 = result;
        v8 = (__int64)(v6 + 1);
      }
      v7[1] = v8;
      snd_Fade_Fade_10c830_alt1((__int64)v20, 0x0.0p+0f);
      snd_play_ff2d0_alt1((__int64)"SE_SYS_Window_Open",
                          (__int64)"SE_SYS_Window_Open", (__int64)v20, 0,
                          0x10001u, 0, 0x0.0p+0f, 0x1.0000000000000p+0f);
      return snd_Fade_Destroy_Fade_alt1(v20);
    }
  }
  return result;
}

__int64 ProcItemSelectMenu_Unknown146_1879560(__int64 a1, unsigned __int16* a2)
{
  char v2;
  __int64 v4;
  struct {
    _QWORD v6[4];
    _QWORD* v7;
  } v6_;
  int v8;
  _QWORD v9[2];
  char v10;

  if (a2 == nullptr) {
    return 1;
  }
  v2 = *(_BYTE*)(a1 + 1088);
  v8 = 0;
  v6_.v6[0] = GameData_20f96f0;
  v6_.v6[1] = &v8;
  v6_.v7 = v6_.v6;
  v10 = v2;
  v9[0] = &v10;
  v9[1] = v6_.v6;
  game_facility_187c960((__int64)v9, 0, a2 + 414);
  game_facility_187c960((__int64)v9, 1, a2 + 418);
  game_facility_187c960((__int64)v9, 2, a2 + 422);
  game_facility_187c960((__int64)v9, 3, a2 + 426);
  game_facility_187c960((__int64)v9, 4, a2 + 430);
  game_facility_187c960((__int64)v9, 5, a2 + 434);
  if (v6_.v7 == v6_.v6) {
    v4 = 32;
  }
  else {
    if (v6_.v7 == nullptr) {
      return v8 != 0;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v6_.v7 + v4))((__int64)v6_.v7);
  return v8 != 0;
}

__int64 ProcItemSelectMenu_Unknown149_1879660(__int64 a1)
{
  char v1;
  __int64 v2;
  __int64 v3;
  struct {
    _QWORD v5[4];
    _QWORD* v6;
  } v5_;
  struct {
    _QWORD v7[4];
    _QWORD* v8;
  } v7_;
  _QWORD v9[2];
  unsigned __int8 v10;
  char v11;

  v1 = *(_BYTE*)(a1 + 1088);
  v10 = 0;
  v5_.v5[0] = GameData_20f9770;
  v5_.v5[1] = &v10;
  v7_.v8 = v7_.v7;
  v5_.v6 = v5_.v5;
  v11 = v1;
  v9[0] = &v11;
  v9[1] = v5_.v5;
  v7_.v7[0] = GameData_20fa440;
  v7_.v7[1] = v9;
  game_gameui_Util_EachItemFromTransporter((__int64)v7_.v7);
  if (v7_.v8 == v7_.v7) {
    v2 = 32;
  }
  else {
    if (v7_.v8 == nullptr) {
      goto LABEL_6;
    }
    v2 = 40;
  }
  (*(void (**)(__int64))(*v7_.v8 + v2))((__int64)v7_.v8);
LABEL_6:
  if (v5_.v6 == v5_.v5) {
    v3 = 32;
    goto LABEL_10;
  }
  if (v5_.v6 != nullptr) {
    v3 = 40;
  LABEL_10:
    (*(void (**)(__int64))(*v5_.v6 + v3))((__int64)v5_.v6);
  }
  return v10;
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

game_facility_anonymous_ProcItemSelectMenu_OnBuild_closure_Invoke_1879970(
    __int64 a1, unsigned __int16** a2)
{
  unsigned __int16* v2;
  __int64 v3;
  __int64 v4;
  struct {
    _QWORD v6[4];
    _QWORD* v7;
  } v6_;
  int v8;
  _QWORD v9[2];
  char v10;

  v2 = *a2;
  if (*a2 == nullptr) {
    return 1;
  }
  v3 = *(_QWORD*)(a1 + 8);
  v8 = 0;
  v6_.v6[0] = GameData_20f96f0;
  v6_.v6[1] = &v8;
  v6_.v7 = v6_.v6;
  v10 = *(_BYTE*)(v3 + 1088);
  v9[0] = &v10;
  v9[1] = v6_.v6;
  game_facility_187c960((__int64)v9, 0, v2 + 414);
  game_facility_187c960((__int64)v9, 1, v2 + 418);
  game_facility_187c960((__int64)v9, 2, v2 + 422);
  game_facility_187c960((__int64)v9, 3, v2 + 426);
  game_facility_187c960((__int64)v9, 4, v2 + 430);
  game_facility_187c960((__int64)v9, 5, v2 + 434);
  if (v6_.v7 == v6_.v6) {
    v4 = 32;
  }
  else {
    if (v6_.v7 == nullptr) {
      return v8 != 0;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v6_.v7 + v4))((__int64)v6_.v7);
  return v8 != 0;
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

_QWORD* ProcItemSelectMenu_Unknown85_187a700(__int64 a1)
{
  int v1;
  __int64 v2;
  unsigned __int8 v4;
  const char* v5;
  __int64 v6;
  char* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  bool v13;
  __int64 v14;
  __int64* v15;
  __int64* v16;
  __int64* v17;
  __int64* v19;
  __int64* v20;
  struct {
    _QWORD v21[4];
    _QWORD* v22;
  } v21_;
  struct {
    _QWORD v23[4];
    _QWORD* v24;
  } v23_;
  struct {
    _QWORD v25[4];
    _QWORD* v26;
    __int64 v27;
    __int64 v28;
    __int64 v29;
    __int64 v30;
    __int64 v31;
    __int64 v32;
    __int64 v33;
    __int64 v34;
    __int64 v35;
    __int64 v36;
    __int64 v37;
    __int64 v38;
    __int64 v39;
  } v25_;
  _QWORD v40[2];
  struct {
    char v41;
    char gap281_[3];
    char v42;
  } v41_;

  v1 = *(_DWORD*)(a1 + 660);
  v2 = *(_QWORD*)(a1 + 672);
  if (v1 < (unsigned __int64)((*(_QWORD*)(a1 + 680) - v2) >> 2)) {
    v1 = *(_DWORD*)(v2 + 4LL * v1);
  }
  if (v1 > 5) {
    v4 = -1;
  }
  else {
    v4 = v1 - 1;
  }
  if (v4 > 6u) {
    v5 = "MID_Menu_All";
  }
  else {
    v5 = GameData_20fa3f8[v4];
  }
  v25_.v27 = -1;
  v25_.v28 = -1;
  v25_.v29 = -1;
  v25_.v30 = -1;
  v6 = *msg_MessageManager_instance__ptr[0];
  v25_.v31 = -1;
  v25_.v32 = -1;
  v25_.v33 = -1;
  v25_.v34 = -1;
  v25_.v35 = -1;
  v25_.v36 = -1;
  v25_.v37 = -1;
  v25_.v38 = -1;
  v25_.v25[0] = msg_TagSelector_vtable;
  v25_.v25[1] = 0xFFFF0001FFFF0000LL;
  v25_.v25[2] = 0xFFFF0004FFFF0002LL;
  v25_.v25[3] = 0xFFFF0006FFFF0005LL;
  v25_.v39 = 8;
  v25_.v26 = (_QWORD*)0xFFFF0008FFFF0007LL;
  v7 = GameRoutine_a4dbe0_alt2(v6, v5, 0);
  if (v7 != nullptr) {
    v8 = (__int64)v7;
    v9 = ui_LayoutAccessor_FindTextBox_alt1((__int64*)(a1 + 952),
                                            (__int64)"L_MenuItem_Info/T_Title");
    if (v9 != 0) {
      GameRoutine_156c5d0_alt1(v9, v8, 0);
    }
  }
  v10 = *(_QWORD*)(a1 + 1064);
  v41_.v41 = 0;
  v25_.v26 = v25_.v25;
  v21_.v21[0] = GameData_20f9ed0;
  v21_.v21[1] = a1;
  v21_.v22 = v21_.v21;
  v23_.v23[0] = GameData_20fa388;
  v23_.v23[1] = &v41_.v41;
  v41_.v42 = 1;
  v23_.v24 = v23_.v23;
  v40[0] = &v41_.v42;
  v40[1] = v23_.v23;
  v25_.v25[0] = GameData_20fa440;
  v25_.v25[1] = v40;
  game_gameui_Util_EachItemFromTransporter((__int64)v25_.v25);
  if (v25_.v26 == v25_.v25) {
    v11 = 32;
  }
  else {
    if (v25_.v26 == nullptr) {
      goto LABEL_17;
    }
    v11 = 40;
  }
  (*(void (**)(__int64))(*v25_.v26 + v11))((__int64)v25_.v26);
LABEL_17:
  if (v23_.v24 == v23_.v23) {
    v12 = 32;
  }
  else {
    if (v23_.v24 == nullptr) {
      goto LABEL_22;
    }
    v12 = 40;
  }
  (*(void (**)(__int64))(*v23_.v24 + v12))((__int64)v23_.v24);
LABEL_22:
  v13 = game_159ea20(v10, (__int64)v21_.v21, v41_.v41);
  if (v21_.v22 == v21_.v21) {
    v14 = 32;
  }
  else {
    if (v21_.v22 == nullptr) {
      goto LABEL_27;
    }
    v14 = 40;
  }
  (*(void (**)(__int64))(*v21_.v22 + v14))((__int64)v21_.v22);
LABEL_27:
  if (v10 != 0) {
    GameHr_1562680(a1 + 848, "UnitInfoCost_On", 0x1.0000000000000p+0f);
    v15 = LayoutAccessor_155fbe0_alt1((__int64*)(a1 + 848), "L_UnitInfo");
    LayoutAccessor_1572ac0(v15, v10, 0, v13);
    v16 = LayoutAccessor_155fbe0_alt1((__int64*)(a1 + 848), "L_UnitInfo");
    LayoutAccessor_1562cf0_alt1((__int64)v16, "Info00");
    v17 = LayoutAccessor_155fbe0_alt1((__int64*)(a1 + 848), "L_MasteryInfo");
    return Util_1575c70((__int64)v17, v10, 0, nullptr, 0, 0);
  }
  else {
    GameHr_1562680(a1 + 848, "StockCost_On", 0x1.0000000000000p+0f);
    v19 = LayoutAccessor_155fbe0_alt1((__int64*)(a1 + 848), "L_UnitInfo");
    LayoutAccessor_1572ac0(v19, 0, 0, v13);
    v20 = LayoutAccessor_155fbe0_alt1((__int64*)(a1 + 848), "L_UnitInfo");
    return (_QWORD*)LayoutAccessor_1562cf0_alt1((__int64)v20, "Simple00");
  }
}

__int64 ProcItemSelectMenu_Unknown88_187a9f0(__int64* a1)
{
  __int64 v1;
  __int64* v3;
  int v4;
  __int64 v5;
  const char* v6;
  __int64* v7;
  __int64 v8;
  __int64* v9;
  __int64* v10;
  __int64* v11;
  __int64 result;
  __int64 v13;
  char v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int16 v18;
  __int64* v19;
  __int64* v20;
  __int64 v21;
  __int64* v22;
  __int64* v23;
  __int64* v24;
  __int64 v25;
  __int64* v26;
  char* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  int v31;
  __int64* v32;
  __int64* v33;
  int v34;
  unsigned int v35;
  unsigned int v36;
  int v37;
  unsigned int v38;
  unsigned int v39;
  char* v40;
  __int64* v41;
  __int64 v42;
  char* v43;
  __int64 v44;
  __int64 v45;
  int v46;
  int v47;
  bool v48;
  void* v49;
  char* v50;
  int v51;
  __int64 v52;
  __int64 v53;
  __int64* v54;
  __int64 v55;
  __int64 v56;
  int v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  char* v64;
  char* v65;
  __int64* v66;
  char* v67;
  __int64* v68;
  char* v69;
  __int64* v70;
  char* v71;
  __int64* v72;
  char* v73;
  __int64* v74;
  __int64 v75;
  struct {
    __int64 v76;
    unsigned __int64 v77;
    unsigned __int64 v78;
    unsigned __int64 v79;
    int v80;
    int v81;
    __int64 v82;
    __int64 v83;
    __int64 v84;
    __int64 v85;
    __int64 v86;
    __int64 v87;
    __int64 v88;
    __int64 v89;
    __int64 v90;
    __int64 v91;
    __int64 v92;
    __int64 v93;
    __int64 v94;
  } v76_;

  v1 = a1[42];
  if (v1 != 0 && *(__int64 (***)(void))v1 ==
                     game_facility_anonymous_BlacksmithMenuItem_Repair_vtable) {
    v15 = *(_QWORD*)(v1 + 104);
    v16 = *(int*)(v1 + 40);
    if (v15 != 0) {
      v17 = v15 + 8 * v16 + 828;
    }
    else {
      v17 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                      game_TransporterConst_List_instance__ptr
                                          [0] +
                                  8LL) +
                       8LL) +
            12LL * (int)v16 + 4;
    }
    v18 = *(_WORD*)v17;
    v19 = *(__int64**)(v1 + 112);
    *((_BYTE*)a1 + 1074) = *(_BYTE*)(v17 + 2);
    *((_WORD*)a1 + 536) = v18;
    *((_BYTE*)a1 + 1075) = *(_BYTE*)(v17 + 3);
    *((_DWORD*)a1 + 269) = *(_DWORD*)(v17 + 4);
    v20 = LayoutAccessor_155fbe0_alt1(a1 + 106, "L_BeforeInfoDetail");
    if (*((_BYTE*)a1 + 1080) != 0) {
      v21 = a1[133];
    }
    else {
      v21 = 0;
    }
    game_gameui_anonymous_15d2000_alt1((__int64)v20, v17, v21);
    v22 = LayoutAccessor_155fbe0_alt1(a1 + 106, "L_Cost");
    LayoutAccessor_155e830_alt1((__int64)v22, 1);
    v23 = LayoutAccessor_155fbe0_alt1(a1 + 106, "L_AccountMenu");
    LayoutAccessor_155e830_alt1((__int64)v23, 1);
    v24 = msg_MessageManager_instance__ptr[0];
    v76_.v82 = -1;
    v76_.v83 = -1;
    v76_.v84 = -1;
    v76_.v85 = -1;
    v25 = *msg_MessageManager_instance__ptr[0];
    v26 = GameData_212e348;
    v76_.v86 = -1;
    v76_.v87 = -1;
    v76_.v88 = -1;
    v76_.v89 = -1;
    v76_.v90 = -1;
    v76_.v91 = -1;
    v76_.v92 = -1;
    v76_.v93 = -1;
    v76_.v76 = (__int64)(GameData_212e348 + 2);
    v76_.v77 = 0xFFFF0001FFFF0000LL;
    v76_.v78 = 0xFFFF0004FFFF0002LL;
    v76_.v79 = 0xFFFF0006FFFF0005LL;
    v76_.v94 = 8;
    v76_.v80 = -65529;
    v76_.v81 = -65528;
    v27 = GameRoutine_a4dbe0_alt1(v25, "MID_Shop_Consumption", 0);
    if (v27 != nullptr) {
      v28 = (__int64)v27;
      v29 = ui_LayoutAccessor_FindTextBox_alt1(v23, (__int64)"T_CostTitle_Txt");
      if (v29 != 0) {
        GameRoutine_156c5d0_alt1(v29, v28, 0);
      }
    }
    v30 = *v19;
    if (*v19 != 0) {
      v31 = *((_DWORD*)v19 + 2);
      v32 = LayoutAccessor_155fbe0_alt1(v23, "L_Item00");
      LayoutAccessor_1562cf0_alt1((__int64)v32, "EnduranceOn");
      v76_.v76 = 0x100000000LL;
      LOWORD(v76_.v76) = *(_WORD*)(v30 + 16);
      if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                               8LL * (unsigned __int16)v76_.v76) +
                    73LL) == 17) {
        nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
        v33 = game_map_MapRandom_instance__ptr[0];
        v34 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                         (unsigned __int64)((_UNKNOWN**)0x8LL));
        v35 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                         (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
        v36 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
              (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
        *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
            *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
        *((_DWORD*)v33 + 1) = v34;
        v37 = (v36 >> 8) ^ (v35 >> 19) ^ v36 ^ v35;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v33) = v35;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v33 + 4) = v37;
        nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
        v38 = v37 - 1000 * ((v37 & 0x7FFFFFFFu) / 0x3E8);
        v24 = msg_MessageManager_instance__ptr[0];
        HIDWORD(v76_.v76) = HIDWORD(v76_.v76) & 0xFFFFC00F |
                            (16 * (((16 * v38 + 16) >> 4) & 0x3FF));
      }
      GameRoutine_187c5b0_alt1(v32, (unsigned __int16*)&v76_.v76, v31,
                               *(_QWORD*)(*(_QWORD*)(v1 + 8) + 336LL) == v1, 0);
      v39 = 1;
    }
    else {
      v39 = 0;
    }
    if ((int)GameRoutine_9db9e0_alt1(0x16u, *((_DWORD*)v19 + 3)) >= 1) {
      v40 = game_util_Format_alt1("L_Item%02d", v39);
      v41 = LayoutAccessor_155fbe0_alt1(v23, v40);
      LayoutAccessor_155e830_alt1((__int64)v41, 1);
      v42 = *v24;
      v76_.v82 = -1;
      v76_.v83 = -1;
      v76_.v84 = -1;
      v76_.v85 = -1;
      v76_.v86 = -1;
      v76_.v87 = -1;
      v76_.v88 = -1;
      v76_.v89 = -1;
      v76_.v90 = -1;
      v76_.v91 = -1;
      v76_.v92 = -1;
      v76_.v93 = -1;
      v76_.v76 = (__int64)(v26 + 2);
      v76_.v77 = 0xFFFF0001FFFF0000LL;
      v76_.v78 = 0xFFFF0004FFFF0002LL;
      v76_.v79 = 0xFFFF0006FFFF0005LL;
      v76_.v94 = 8;
      v76_.v80 = -65529;
      v76_.v81 = -65528;
      v43 = GameRoutine_a4dbe0_alt1(v42, "MID_Sys_Gold", 0);
      if (v43 != nullptr) {
        v44 = (__int64)v43;
        v45 = ui_LayoutAccessor_FindTextBox_alt1(v41, (__int64)"T_Txt");
        if (v45 != 0) {
          GameRoutine_156c5d0_alt1(v45, v44, 0);
        }
      }
      LayoutAccessor_1562cf0_alt1((__int64)v41, "Cost");
      v46 = GameRoutine_9db9e0_alt1(0x16u, *((_DWORD*)v19 + 3));
      GameRoutine_157cff0_alt1(v41, (__int64)"T_Num", v46, 0);
      if (game_GameModeData_instance_ != 0) {
        v47 = *(_DWORD*)(game_GameModeData_instance_ + 72);
      }
      else {
        v47 = 0;
      }
      v48 = v47 < (int)GameRoutine_9db9e0_alt1(0x16u, *((_DWORD*)v19 + 3));
      v49 = GameData_212da30;
      v50 = (char*)GameData_212da30 + 60;
      if (!v48) {
        v50 = (char*)GameData_212da30 + 36;
      }
      v51 = *(_DWORD*)v50;
      v52 = ui_LayoutAccessor_FindTextBox_alt1(v41, (__int64)"T_Num");
      if (v52 != 0) {
        v53 = Pane_58f8a0_alt1(v52);
        if (v53 != 0) {
          *(_DWORD*)(v53 + 12) = v51;
        }
      }
      v54 = LayoutAccessor_155fbe0_alt1(v41, "L_Icon");
      v55 = ui_LayoutAccessor_FindPane_alt1(v54, (__int64)"Icon");
      if (v55 != 0) {
        v56 = __dynamic_cast(v55, GameData_212d670[0], GameData_212d678[0], 0);
        if (v56 != 0) {
          v57 = *(int*)((char*)((int*)0x24LL) + (_QWORD)v49);
          v58 = v56;
          v59 =
              (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v56 + 88LL))(v56, 0);
          if (v59 != 0) {
            *(_DWORD*)(v59 + 12) = v57;
          }
          Manager_136a920_alt1(ui_Manager_instance_ + 1264, v58, 0, 7u,
                               "IconStock_Gold");
        }
      }
      ui_LayoutAccessor_SetPaneVisible_alt1((__int64)v54, (__int64)"IconDamage",
                                            0);
      ui_LayoutAccessor_SetPaneVisible_alt1((__int64)v54, (__int64)"IconLock",
                                            0);
      ui_LayoutAccessor_SetPaneVisible_alt1((__int64)v54, (__int64)"IconDrop",
                                            0);
      ui_LayoutAccessor_SetPaneVisible_alt1((__int64)v54, (__int64)"IconLock",
                                            (*(_BYTE*)(v17 + 3) & 0x10) != 0);
      v60 = ui_LayoutAccessor_FindAlignment_alt1(v41, (__int64)"A_Num");
      if (v60 != 0) {
        Alignment_56b600_alt1(v60);
        v61 = v41[1];
        if (v61 != 0) {
          v62 = std___1___shared_weak_count_lock_alt1(v61);
          if (v62 != 0) {
            v63 = v62;
            if (*v41 != 0) {
              ControlCreator_13633c0_alt1(*v41);
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v63 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v63 + 16LL))(v63);
              std___1___shared_weak_count___release_weak_alt1(v63);
            }
          }
        }
      }
      ++v39;
    }
    v64 = game_util_Format_alt1("Cost_%02d", 3);
    LayoutAccessor_1562cf0_alt1((__int64)v23, v64);
    v65 = game_util_Format_alt1("L_Item%02d", v39);
    v66 = LayoutAccessor_155fbe0_alt1(v23, v65);
    LayoutAccessor_155e830_alt1((__int64)v66, 0);
    if (v39 != 4) {
      v67 = game_util_Format_alt1("L_Item%02d", v39 + 1);
      v68 = LayoutAccessor_155fbe0_alt1(v23, v67);
      LayoutAccessor_155e830_alt1((__int64)v68, 0);
      if (v39 != 3) {
        v69 = game_util_Format_alt1("L_Item%02d", v39 + 2);
        v70 = LayoutAccessor_155fbe0_alt1(v23, v69);
        LayoutAccessor_155e830_alt1((__int64)v70, 0);
        if (v39 != 2) {
          v71 = game_util_Format_alt1("L_Item%02d", v39 + 3);
          v72 = LayoutAccessor_155fbe0_alt1(v23, v71);
          LayoutAccessor_155e830_alt1((__int64)v72, 0);
          if ((v39 | 4LL) != 5) {
            v73 = game_util_Format_alt1("L_Item%02d", v39 | 4);
            v74 = LayoutAccessor_155fbe0_alt1(v23, v73);
            LayoutAccessor_155e830_alt1((__int64)v74, 0);
          }
        }
      }
    }
    result = ui_LayoutAccessor_FindAlignment_alt1(v23, (__int64)"A_Cost");
    if (result != 0) {
      Alignment_56b600_alt1(result);
      result = v23[1];
      if (result != 0) {
        result = std___1___shared_weak_count_lock_alt1(result);
        if (result != 0) {
          v75 = result;
          result = *v23;
          if (*v23 != 0) {
            result = ControlCreator_13633c0_alt1(result);
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v75 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v75 + 16LL))(v75);
            result = std___1___shared_weak_count___release_weak_alt1(v75);
          }
        }
      }
    }
  }
  else {
    v3 = game_g_empty_item_ptr;
    v4 = *((_DWORD*)game_g_empty_item_ptr + 1);
    *((_DWORD*)a1 + 268) = *(_DWORD*)game_g_empty_item_ptr;
    v5 = *a1;
    *((_DWORD*)a1 + 269) = v4;
    v6 = (const char*)(*(__int64 (**)(__int64*))(v5 + 1248))(a1);
    v7 = LayoutAccessor_155fbe0_alt1(a1 + 106, v6);
    if (*((_BYTE*)a1 + 1080) != 0) {
      v8 = a1[133];
    }
    else {
      v8 = 0;
    }
    game_gameui_anonymous_15d2540_alt1(v7, v3, v8);
    v9 = LayoutAccessor_155fbe0_alt1(a1 + 106, "L_AfterInfoDetail");
    LayoutAccessor_155e830_alt1((__int64)v9, 0);
    v10 = LayoutAccessor_155fbe0_alt1(a1 + 106, "L_Cost");
    LayoutAccessor_155e830_alt1((__int64)v10, 0);
    v11 = LayoutAccessor_155fbe0_alt1(a1 + 106, "L_AccountMenu");
    result = LayoutAccessor_155e830_alt1((__int64)v11, 0);
  }
  if (*((_BYTE*)a1 + 1081) == 1) {
    v14 = true;
    if (a1[133] != 0 && (ItemShopSelectMenu_1873d80_alt1(a1) & 1) != 0) {
      v13 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                       8LL * *((unsigned __int16*)a1 + 536));
      if (*(unsigned __int8*)(v13 + 72) < 8u || *(_BYTE*)(v13 + 73) == 16) {
        v14 = false;
      }
    }
    return GameRoutine_1567590_alt1((__int64)"StatusChange", v14);
  }
  return result;
}

__int64 ProcItemSelectMenu_Unknown128_187b1c0(__int64 a1)
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
  v8_.v8[0] = GameData_20fa288;
  v8_.v8[1] = a1;
  v8_.v9 = v8_.v8;
  game_facility_187c870(v5, 1, (__int64)v8_.v8);
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

__int64 ProcItemSelectMenu_Unknown146_187b2c0(__int64 a1, unsigned __int16* a2)
{
  __int64 v3;
  struct {
    _QWORD v5[4];
    _QWORD* v6;
  } v5_;
  int v7;
  _QWORD v8[2];
  char v9;

  if (a2 == nullptr) {
    return 1;
  }
  v7 = 0;
  v5_.v5[0] = GameData_20fa308;
  v5_.v5[1] = &v7;
  v5_.v6 = v5_.v5;
  v9 = 1;
  v8[0] = &v9;
  v8[1] = v5_.v5;
  game_facility_187c960((__int64)v8, 0, a2 + 414);
  game_facility_187c960((__int64)v8, 1, a2 + 418);
  game_facility_187c960((__int64)v8, 2, a2 + 422);
  game_facility_187c960((__int64)v8, 3, a2 + 426);
  game_facility_187c960((__int64)v8, 4, a2 + 430);
  game_facility_187c960((__int64)v8, 5, a2 + 434);
  if (v5_.v6 == v5_.v5) {
    v3 = 32;
  }
  else {
    if (v5_.v6 == nullptr) {
      return v7 != 0;
    }
    v3 = 40;
  }
  (*(void (**)(__int64))(*v5_.v6 + v3))((__int64)v5_.v6);
  return v7 != 0;
}

__int64 ProcItemSelectMenu_Unknown149_187b3c0()
{
  __int64 v0;
  __int64 v1;
  struct {
    _QWORD v3[4];
    _QWORD* v4;
  } v3_;
  struct {
    _QWORD v5[4];
    _QWORD* v6;
  } v5_;
  _QWORD v7[2];
  unsigned __int8 v8;
  char v9;

  v8 = 0;
  v3_.v3[0] = GameData_20fa388;
  v3_.v3[1] = &v8;
  v3_.v4 = v3_.v3;
  v5_.v6 = v5_.v5;
  v9 = 1;
  v7[0] = &v9;
  v7[1] = v3_.v3;
  v5_.v5[0] = GameData_20fa440;
  v5_.v5[1] = v7;
  game_gameui_Util_EachItemFromTransporter((__int64)v5_.v5);
  if (v5_.v6 == v5_.v5) {
    v0 = 32;
  }
  else {
    if (v5_.v6 == nullptr) {
      goto LABEL_6;
    }
    v0 = 40;
  }
  (*(void (**)(__int64))(*v5_.v6 + v0))((__int64)v5_.v6);
LABEL_6:
  if (v3_.v4 == v3_.v3) {
    v1 = 32;
    goto LABEL_10;
  }
  if (v3_.v4 != nullptr) {
    v1 = 40;
  LABEL_10:
    (*(void (**)(__int64))(*v3_.v4 + v1))((__int64)v3_.v4);
  }
  return v8;
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

game_facility_anonymous_ProcItemSelectMenu_OnBuild_closure_Invoke_187b6d0(
    __int64 a1, unsigned __int16** a2)
{
  unsigned __int16* v2;
  __int64 v3;
  struct {
    _QWORD v5[4];
    _QWORD* v6;
  } v5_;
  int v7;
  _QWORD v8[2];
  char v9;

  v2 = *a2;
  if (*a2 == nullptr) {
    return 1;
  }
  v7 = 0;
  v5_.v5[0] = GameData_20fa308;
  v5_.v5[1] = &v7;
  v5_.v6 = v5_.v5;
  v9 = 1;
  v8[0] = &v9;
  v8[1] = v5_.v5;
  game_facility_187c960((__int64)v8, 0, v2 + 414);
  game_facility_187c960((__int64)v8, 1, v2 + 418);
  game_facility_187c960((__int64)v8, 2, v2 + 422);
  game_facility_187c960((__int64)v8, 3, v2 + 426);
  game_facility_187c960((__int64)v8, 4, v2 + 430);
  game_facility_187c960((__int64)v8, 5, v2 + 434);
  if (v5_.v6 == v5_.v5) {
    v3 = 32;
  }
  else {
    if (v5_.v6 == nullptr) {
      return v7 != 0;
    }
    v3 = 40;
  }
  (*(void (**)(__int64))(*v5_.v6 + v3))((__int64)v5_.v6);
  return v7 != 0;
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
