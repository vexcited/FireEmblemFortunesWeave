#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_155e140(_QWORD);
__int64 GameRoutine_155ea30(_QWORD);
__int64 GameRoutine_155fbe0(_QWORD, _QWORD);
__int64 GameRoutine_1563f90(_QWORD, _QWORD);
__int64 GameRoutine_1564060(_QWORD);
__int64 GameRoutine_156af20(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15fbc40(__int64, __int64);
__int64 GameRoutine_15fc820(_QWORD, _QWORD);
__int64 GameRoutine_15ffb10(__int64);
__int64 GameRoutine_16030a0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a09d20(_QWORD, _QWORD);
__int64 Pane_58dee0(_QWORD, _QWORD);
__int64 Pane_58df60(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_Unit_Destroy_Unit(_QWORD);
__int64 game_util_Format(const char*, ...);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 sprintf(_QWORD, const char*, ...);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
extern __int64 (*GameData_2065b58[])();
extern __int64 (*GameData_2066070[])();
extern __int64 (*game_map_MapOnMapInfo_vtable[])();
extern __int64 GameData_212c060;
extern __int64 GameData_21ed080;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_gameui_MenuAnimator_instance_;
void __attribute__((noreturn)) GameRoutine_1601ed0(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a1d0(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 MapOnMapInfo_Destructor(_QWORD* a1);
__int64 MapOnMapInfo_16012a0(__int64 a1);
__int64 MapOnMapInfo_16017e0(__int64 result, __int64 a2);
__int64 MapOnMapInfo_Unknown4(__int64 result);
__int64 MapOnMapInfo_1601bf0(__int64 result);
__int64 MapOnMapInfo_1601d20(__int64 result);
__int64 MapOnMapInfo_Unknown5(__int64 result);
_QWORD* GameRoutine_15fba20(_QWORD* result, __int64, __int64);
__int64 GameRoutine_1842ce0(void);
__int64 Manager_136ac50(_QWORD, _QWORD, _QWORD);
__int64 game_HasActiveSkill_843420(_QWORD, _QWORD);
extern __int64 (*GameData_2065ce0[])();
extern __int64 (*GameData_2065de0[])();
extern __int64 (*GameData_2065ee0[])();
extern __int64 ui_Manager_instance_;
extern __int64* GameData_212c880[5];
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 MapOnMapInfo_DeletingDestructor(__int64 result);
_QWORD* game_map_MapOnMapInfo_IconBlink_Update_lambda0_Invoke(__int64 a1,
                                                              _DWORD* a2);
_QWORD* game_map_MapOnMapInfo_Info_SetBattleFactor_lambda0_Invoke_1602160(
    __int64 a1, _DWORD* a2, __int64 a3);
__int64 game_map_MapOnMapInfo_Info_SetBattleFactor_lambda0_Invoke_1602350_alt1(
    __int64 result,
    _DWORD* a2) __asm__("game_map_MapOnMapInfo_Info_SetBattleFactor_lambda0_"
                        "Invoke_1602350");
_QWORD* game_map_MapOnMapInfo_Info_SetBattleFactor_lambda1_Invoke_1602540(
    __int64 a1, _DWORD* a2, __int64 a3);
__int64 game_map_MapOnMapInfo_Info_SetBattleFactor_lambda1_Invoke_1602730(
    __int64 result, _DWORD* a2);
_QWORD* game_map_MapOnMapInfo_Info_SetBattleFactor_lambda2_Invoke_1602920(
    __int64 a1, _DWORD* a2, __int64 a3);
__int64 game_map_MapOnMapInfo_Info_SetBattleFactor_lambda2_Invoke_1602b10(
    __int64 result, _DWORD* a2);
_QWORD* game_map_MapOnMapInfo_Info_SetStatusIcon_lambda1_Invoke(__int64 a1,
                                                                _DWORD* a2);
_QWORD* ui_LayoutAccessor_Setup_155dda0(_QWORD*, _QWORD*);
__attribute__((swiftcall)) void GameRoutine_1366bd0(PSEUDO_X8, __int64, __int64,
                                                    __int64);
__int64 AssetTableFile_7e74e0(_QWORD);
__int64 GameRoutine_15fc1d0(_QWORD, _QWORD);
__int64 GameRoutine_15fc3b0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15fc630(_QWORD);
__int64 GameRoutine_1840740(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6c2b50(__int64);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 LayoutAccessor_155fbe0(_QWORD, _QWORD);
__int64 LayoutAccessor_1562680(_QWORD, _QWORD, float);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 LayoutAccessor_15730d0(_QWORD, _QWORD);
__int64 LayoutEx_579180(_QWORD);
__int64 LayoutEx_5791a0(_QWORD);
__int64 LayoutEx_57b150(void);
__int64 LayoutEx_57cf40(_QWORD, _QWORD);
__int64 LayoutEx_58d200(_QWORD, _QWORD);
__int64 Layout_13639a0(_QWORD, _QWORD);
__int64 Layout_1364020(_QWORD, _QWORD, _QWORD);
__int64 Layout_579280(_QWORD, _QWORD);
__int64 UnitItem_6e8bc0(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_8224a0(_QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_UnitItemList_EachItem(_QWORD, _QWORD);
__int64 game_Unit_GetJob(_QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 nn_ui2d_Pane_GetRuntimeTypeInfoStatic(_QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible_alt1(
    __int64 result, __int64, char) __asm__("ui_LayoutAccessor_SetPaneVisible");
__int64 ui_LayoutAccessor_SetPriority(__int64 result, int);
extern _QWORD game_g_shared_system_skills_ptr;
extern _UNKNOWN* GameData_212dfd0;
extern _UNKNOWN game_g_random_mutex;
extern __int64 (*GameData_1f91de8[])();
extern __int64 (*MapOnMapInfo_1601d20_ptr[])();
extern __int64* GameData_212c878[6];
extern __int64* GameData_212d568[8];
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212dfc0[2];
extern __int64* GameData_212dfc8;
extern __int64* GameData_212e0e0[3];
extern __int64* game_g_frame_clock_ptr[3];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64* ui_LayoutAccessor_empty__ptr[3];
extern __int64 GameData_212d020[5];
extern __int64 GameData_2130ec0[2];
extern __int64 GameData_2131678;
extern __int64 game_GameModeData_instance_;
__int64 MapOnMapInfo_15fbc40(__int64 a1, __int64 a2);
__int64 MapOnMapInfo_15fee80(__int64 a1, _QWORD* a2);
__int64 MapOnMapInfo_15ff4a0_alt1(__int64 a1) __asm__("MapOnMapInfo_15ff4a0");
__attribute__((swiftcall)) void MapOnMapInfo_1600600(PSEUDO_X8 x8_, __int64 a1,
                                                     _QWORD** a2, _QWORD* a3,
                                                     _QWORD* a4);
__int64 Manager_136ac50_alt1(__int64, __int64,
                             __int64) __asm__("Manager_136ac50");
__int64 Manager_136b110(__int64, unsigned int, char*);
extern char GameData_1a9f09e;
_QWORD* MapOnMapInfo_15fbb90(_QWORD* a1, unsigned int a2);
__int64 GameRoutine_1842ce0_alt1(__int64 result) __asm__("GameRoutine_1842ce0");
bool game_HasActiveSkill_843420_alt1(_DWORD*, __int64) __asm__(
    "game_HasActiveSkill_843420");
void GameRoutine_15fba20_alt1(_QWORD*, __int64,
                              __int64) __asm__("GameRoutine_15fba20");
void game_map_MapOnMapInfo_Info_SetBattleFactor_lambda0_Invoke_1602350(
    __int64 a1, unsigned int* a2);
__int64* game_UnitPool_Get(_BYTE*);
__int64 GameHr_1562680(__int64 result, unsigned int*, float);
__int64 LayoutAccessor_1563280(__int64*, __int64, char);
__int64 LayoutAccessor_15636c0(__int64 result, __int64, char, float);
__int64 Pane_58f8a0(__int64);
__int64 ProcTransitionAnim_156af20(__int64, int, int, __int64*, const char*,
                                   __int64);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64 ui_LayoutAccessor_SetPaneVisible_alt2(
    __int64 result, const char*,
    char) __asm__("ui_LayoutAccessor_SetPaneVisible");
__n64 GameRoutine_a6c440(float32x4_t*, __int128*, float32x4_t*);
bool Situation_7652c0();
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern __int128 GameData_1a82940;
extern __int128 GameData_1a83510;
extern __int64* GameData_212cfc8[9];
extern __int64 game_script_hub_g_frame_counter_ptr[3];
float LayoutAccessor_15638b0(__int64*, char*, char);
float ui_LayoutAccessor_SetPaneTranslate(__int64*, const char*, __int64);
int sprintf_alt1(__int64, const char*, ...) __asm__("sprintf");
__int64 MapOnMapInfo_1600a80(__int64 result);
__attribute__((swiftcall)) void game_1366bd0(PSEUDO_X8, __int64, __int64,
                                             __int64);
__int64 GameHr_6c2b50(__int64);
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void MapOnMapInfo_15ff4a0(__int64 a1);
_QWORD* LayoutAccessor_1560520(__int64*, const char*, const char*, char*);
__attribute__((swiftcall)) void GameRoutine_9d5180(PSEUDO_X8, __int64*,
                                                   _QWORD*);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__attribute__((swiftcall)) void
MapOnMapInfo_1600600_alt1(PSEUDO_X8, __int64, _QWORD**, _BYTE**,
                          __int64) __asm__("MapOnMapInfo_1600600");
__int64*
LayoutAccessor_155fbe0_alt1(__int64*,
                            const char*) __asm__("LayoutAccessor_155fbe0");
__int64 GameHr_1562680_alt1(__int64 result, const char*,
                            float) __asm__("GameHr_1562680");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64
ui_LayoutAccessor_FindPane_alt1(__int64*,
                                __int64) __asm__("ui_LayoutAccessor_FindPane");
char* game_util_Format_alt1(const char*, ...) __asm__("game_util_Format");
const char* Pane_58fac0(__int64, const char*);
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void __attribute__((noreturn)) String_60a1d0();
__int64 MapOnMapInfo_15ffb10(__int64 a1);

_QWORD* MapOnMapInfo_15fbb90(_QWORD* a1, unsigned int a2)
{
  _QWORD* result;
  __int64 v5;
  char* v6;
  const char* v7;

  if (a2 == 2) {
    result = (_QWORD*)Manager_136b110(ui_Manager_instance_ + 1264, 7u,
                                      "OnMap_IconFactor_Critical");
    v5 = (__int64)result;
    if (result == nullptr) {
      return result;
    }
    return GameRoutine_15fba20(a1, a2, v5);
  }
  v6 = &GameData_1a9f09e;
  if (a2 == 1) {
    v6 = "OnMap_IconFactor_Vantage";
  }
  if (a2 != 0) {
    v7 = v6;
  }
  else {
    v7 = "OnMap_IconFactor_Efficacy";
  }
  result = (_QWORD*)Manager_136ac50_alt1(ui_Manager_instance_ + 1264, 7,
                                         (__int64)v7);
  v5 = (__int64)result;
  if (result != nullptr) {
    return GameRoutine_15fba20(a1, a2, v5);
  }
  return result;
}

__int64 MapOnMapInfo_15fbc40(__int64 a1, __int64 a2)
{
  char v2;
  __int64 v5;
  _BYTE* v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64* v14;
  __int64 v15;
  char v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64* v26;
  __int64* v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  char v31;
  __int64 v32;
  __int64* v33;
  __int64 v34;
  __int64* v35;
  int v36;
  unsigned int v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64* v41;
  __int64* v42;
  __int64 v43;
  __int64 v44;
  __int64* v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 result;
  _QWORD v50[4];
  _QWORD* v51;
  int v52;

  v2 = *(_BYTE*)(a2 + 2088);
  *(_BYTE*)(a1 + 2392) = 0;
  *(_DWORD*)(a1 + 96) = 0;
  *(_BYTE*)(a1 + 2372) = v2;
  *(_DWORD*)(a1 + 2384) = -1;
  v5 = *(_QWORD*)(a2 + 392);
  if (v5 != 0) {
    v6 = *(_BYTE**)(v5 + 40);
    if (v6 != nullptr) {
      LOBYTE(v6) = *v6 != 0;
    }
    *(_BYTE*)(a1 + 2395) = (_BYTE)v6;
  }
  v7 = *(_QWORD*)(a1 + 8);
  if (v7 != 0) {
    v8 = std___1___shared_weak_count_lock(v7);
    v9 = ui_LayoutAccessor_empty__ptr[0];
    if (v8 != 0) {
      if (*(_QWORD*)a1 != 0) {
        v9 = *(__int64**)a1;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v10 = v9;
        (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
        std___1___shared_weak_count___release_weak(v8);
        v9 = v10;
      }
    }
  }
  else {
    v9 = ui_LayoutAccessor_empty__ptr[0];
  }
  LayoutAccessor_15730d0(v9, a2);
  v11 = *(_QWORD*)(a1 + 8);
  if (v11 != 0) {
    v12 = std___1___shared_weak_count_lock(v11);
    v13 = ui_LayoutAccessor_empty__ptr[0];
    if (v12 != 0) {
      if (*(_QWORD*)a1 != 0) {
        v13 = *(__int64**)a1;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v14 = v13;
        (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
        std___1___shared_weak_count___release_weak(v12);
        v13 = v14;
      }
    }
  }
  else {
    v13 = ui_LayoutAccessor_empty__ptr[0];
  }
  LayoutAccessor_1562cf0(v13, "FaceDisable");
  v15 = game_8224a0(15);
  v16 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v17 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v15);
    v16 = v17 != 0 && *(_DWORD*)(v17 + 32) == 1;
  }
  *(_BYTE*)(a1 + 2393) = v16;
  if (*(_BYTE*)(a1 + 2395) == 1) {
    v18 = *(_QWORD*)(a1 + 8);
    if (v18 != 0) {
      v19 = std___1___shared_weak_count_lock(v18);
      v20 = ui_LayoutAccessor_empty__ptr[0];
      if (v19 != 0) {
        if (*(_QWORD*)a1 != 0) {
          v20 = *(__int64**)a1;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v21 = v20;
          (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
          std___1___shared_weak_count___release_weak(v19);
          v20 = v21;
        }
      }
    }
    else {
      v20 = ui_LayoutAccessor_empty__ptr[0];
    }
    v22 = LayoutAccessor_155fbe0(v20, "L_Face");
    LayoutAccessor_1562cf0(v22, "FaceDisable");
    v23 = ui_LayoutAccessor_FindPane(v22, "Face");
    if (v23 != 0) {
      v23 = __dynamic_cast(v23, GameData_212d670[0], GameData_212d678[0], 0);
    }
    if ((GameRoutine_1840740(v23, 1, a2, 6, 1) & 1) != 0) {
      if (*(_BYTE*)(a1 + 2393) == 1) {
        v24 = *(_QWORD*)(a1 + 8);
        if (v24 != 0) {
          v25 = std___1___shared_weak_count_lock(v24);
          v26 = ui_LayoutAccessor_empty__ptr[0];
          if (v25 != 0) {
            if (*(_QWORD*)a1 != 0) {
              v26 = *(__int64**)a1;
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v27 = v26;
              (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
              std___1___shared_weak_count___release_weak(v25);
              v26 = v27;
            }
          }
        }
        else {
          v26 = ui_LayoutAccessor_empty__ptr[0];
        }
        LayoutAccessor_1562680(v26, "FaceEnable_Keep", 1.0f);
        LayoutAccessor_1562cf0(v22, "FaceEnable");
      }
      *(_BYTE*)(a1 + 2392) = 1;
    }
  }
  v28 = *(_QWORD*)(a2 + 1744);
  v29 =
      *(unsigned int*)((char*)((int*)0x24LL) + game_g_shared_system_skills_ptr);
  v30 = *(_QWORD*)(a2 + 1752) - v28;
  LODWORD(v50[0]) =
      *(int*)((char*)((int*)0x24LL) + game_g_shared_system_skills_ptr) & 0xFFF;
  if (((v29 >> 5) & 0x7F) + 1 <= v30 >> 2 &&
      ((*(_DWORD*)(v28 + 4 * ((v29 >> 5) & 0x7F)) >> v29) & 1) != 0) {
    v31 = game_HasActiveSkill_843420(v50, a2 + 1744);
    v32 = *(_QWORD*)(a1 + 8);
    if (v32 == 0) {
    LABEL_47:
      v33 = ui_LayoutAccessor_empty__ptr[0];
      goto LABEL_54;
    }
  }
  else {
    v31 = 0;
    v32 = *(_QWORD*)(a1 + 8);
    if (v32 == 0) {
      goto LABEL_47;
    }
  }
  v34 = std___1___shared_weak_count_lock(v32);
  v33 = ui_LayoutAccessor_empty__ptr[0];
  if (v34 != 0) {
    if (*(_QWORD*)a1 != 0) {
      v33 = *(__int64**)a1;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v34 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v35 = v33;
      (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34);
      std___1___shared_weak_count___release_weak(v34);
      v33 = v35;
    }
  }
LABEL_54:
  ui_LayoutAccessor_SetPaneVisible(v33, "IconStrong", v31 & 1);
  v36 = *(_DWORD*)(a1 + 96);
  if ((v31 & 1) != 0) {
    if ((v36 & 8) != 0) {
      goto LABEL_60;
    }
    v37 = v36 | 8;
  }
  else {
    if ((v36 & 8) == 0) {
      goto LABEL_60;
    }
    v37 = v36 & 0xFFFFFFF7;
  }
  *(_DWORD*)(a1 + 96) = v37;
LABEL_60:
  GameRoutine_15fc1d0(a1, a2);
  v38 = *(_QWORD*)(a1 + 16);
  if (v38 != 0) {
    *(_BYTE*)(v38 + 88) &= ~1u;
  }
  *(_QWORD*)(a1 + 32) = *(_QWORD*)(a1 + 24);
  GameRoutine_15fc3b0(a1, a2, 0);
  v39 = *(_QWORD*)(a1 + 8);
  if (v39 != 0) {
    v40 = std___1___shared_weak_count_lock(v39);
    v41 = ui_LayoutAccessor_empty__ptr[0];
    if (v40 != 0) {
      if (*(_QWORD*)a1 != 0) {
        v41 = *(__int64**)a1;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v40 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v42 = v41;
        (*(void (**)(__int64))(*(_QWORD*)v40 + 16LL))(v40);
        std___1___shared_weak_count___release_weak(v40);
        v41 = v42;
      }
    }
  }
  else {
    v41 = ui_LayoutAccessor_empty__ptr[0];
  }
  ui_LayoutAccessor_SetPaneVisible(v41, "IconTalk", 0);
  v43 = *(_QWORD*)(a1 + 8);
  if (v43 != 0) {
    v44 = std___1___shared_weak_count_lock(v43);
    v45 = ui_LayoutAccessor_empty__ptr[0];
    if (v44 != 0) {
      if (*(_QWORD*)a1 != 0) {
        v45 = *(__int64**)a1;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v44 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v46 = v44;
        (*(void (**)(__int64))(*(_QWORD*)v44 + 16LL))(v44);
        std___1___shared_weak_count___release_weak(v46);
      }
    }
  }
  else {
    v45 = ui_LayoutAccessor_empty__ptr[0];
  }
  v52 = 0;
  v50[0] = GameData_1f91de8;
  v50[1] = &v52;
  v51 = v50;
  game_UnitItemList_EachItem(a2 + 828, v50);
  if (v51 == v50) {
    v47 = 32;
  }
  else {
    if (v51 == nullptr) {
      goto LABEL_81;
    }
    v47 = 40;
  }
  (*(void (**)(__int64))(*v51 + v47))((__int64)v51);
LABEL_81:
  ui_LayoutAccessor_SetPaneVisible(v45, "IconItemDrop", v52 > 0);
  GameRoutine_15fc630(a1);
  if (*(_BYTE*)(a1 + 2395) == 1) {
    v48 = AssetTableFile_7e74e0(a2);
  }
  else {
    v48 = 0;
  }
  *(_QWORD*)(a1 + 2400) = v48;
  *(_DWORD*)(a1 + 2368) = *(_DWORD*)(a2 + 416);
  result = game_Unit_GetJob(a2);
  *(_DWORD*)(a1 + 2376) = *(unsigned __int16*)(result + 16);
  return result;
}

__int64 MapOnMapInfo_15fee80(__int64 a1, _QWORD* a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  int v14;
  unsigned int v15;
  unsigned int v16;
  int v17;
  __int64 v18;
  __int64 v20;

  v3 = *(_QWORD*)GameData_212d020[0];
  if (*(_QWORD*)GameData_212d020[0] == 0) {
    goto LABEL_24;
  }
  v4 = *(_QWORD*)(v3 + 104);
  if (v4 == 0 || (v5 = *(_QWORD*)(v3 + 96), v7 = *(_QWORD*)(v3 + 104),
                  atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16),
                                            1u, memory_order_relaxed),
                  v8 = std___1___shared_weak_count_lock(v7),
                  std___1___shared_weak_count___release_weak(v4), v8 == 0)) {
  LABEL_22:
    if (*(_QWORD*)(a1 + 128) != 0) {
      *(_QWORD*)(a1 + 128) = 0;
      *(_BYTE*)(a1 + 2396) = 0;
      LOBYTE(a2) = 1;
      return (unsigned __int8)a2 & 1;
    }
  LABEL_24:
    LOBYTE(a2) = 0;
    *(_BYTE*)(a1 + 2396) = 0;
    *(_QWORD*)(a1 + 128) = 0;
    return (unsigned __int8)a2 & 1;
  }
  v9 = 1;
  if (v5 != 0) {
    *(_BYTE*)(a1 + 2396) = 1;
    if ((*(_BYTE*)(v5 + 16) & 1) != 0 &&
        (v10 = *(_QWORD*)(*GameData_212c878[0] + 64),
         (v11 = *(_QWORD*)(v10 + 8LL * *(unsigned __int16*)(v5 + 8))) != 0)) {
      a2 = (_QWORD*)*a2;
      v20 = 0x100000000LL;
      v12 = *(_QWORD*)(v10 + 8LL * *(unsigned __int16*)(v11 + 16));
      LOWORD(v20) = *(_WORD*)(v11 + 16);
      if (*(_BYTE*)(v12 + 73) == 17) {
        nn_os_LockMutex(&game_g_random_mutex);
        v13 = game_map_MapRandom_instance__ptr[0];
        v14 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                         (unsigned __int64)((_UNKNOWN**)0x8LL));
        v15 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                         (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
        v16 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
              (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
        *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
            *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
        *((_DWORD*)v13 + 1) = v14;
        v17 = (v16 >> 8) ^ (v15 >> 19) ^ v16 ^ v15;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v13) = v15;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v13 + 4) = v17;
        nn_os_UnlockMutex(&game_g_random_mutex);
        HIDWORD(v20) =
            (16 * ((_WORD)v17 -
                   1000 * (unsigned __int16)((v17 & 0x7FFFFFFFu) / 0x3E8)) +
             16) &
                0x3FF0 |
            1;
      }
      if ((UnitItem_6e8bc0(&v20, a2) & 1) != 0) {
        if (*(_QWORD*)(a1 + 128) != v11) {
          v9 = 0;
          *(_QWORD*)(a1 + 128) = v11;
        LABEL_16:
          LOBYTE(a2) = 1;
          goto LABEL_18;
        }
        LOBYTE(a2) = 0;
        v9 = 0;
      }
      else {
        v9 = 1;
      }
    }
    else {
      v18 = *(_QWORD*)(v5 + 24);
      if (v18 != 0 && *(_BYTE*)(v18 + 104) == 2 &&
          *(_QWORD*)(a1 + 120) != v18) {
        *(_QWORD*)(a1 + 128) = 0;
        v9 = 0;
        *(_QWORD*)(a1 + 120) = *(_QWORD*)(v5 + 24);
        goto LABEL_16;
      }
    }
  }
LABEL_18:
  if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v9 == 0) {
      return (unsigned __int8)a2 & 1;
    }
    goto LABEL_22;
  }
  (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
  std___1___shared_weak_count___release_weak(v8);
  if ((v9 & 1) != 0) {
    goto LABEL_22;
  }
  return (unsigned __int8)a2 & 1;
}

void MapOnMapInfo_15ff4a0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int128 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  char v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _QWORD v22[2];
  struct {
    __int64 v23;
    __int64 v24;
  } v23_;
  struct {
    _QWORD v25[6];
    int v26;
    char gap100_[4];
    __int64 v27;
    __int64 v28;
    __int64 v29;
  } v25_;

  if (*GameData_212d568[0] == 0) {
    *GameData_212d568[0] = a1;
  }
  *(_DWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  v2 = 0;
  v21 = a1 + 389120;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)a1 = game_map_MapOnMapInfo_vtable;
  *(_QWORD*)(a1 + 8) = MapOnMapInfo_1601d20_ptr;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = a1 + 72;
  *(_DWORD*)(a1 + 120) = 1065353216;
  v3 = GameData_2131678;
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 144) = -1;
  *(_QWORD*)(a1 + 152) = -1;
  v4 = v3 + 16;
  do {
    v5 = a1 + v2;
    *(_DWORD*)(v5 + 256) = 0;
    *(_QWORD*)(v5 + 240) = 0;
    *(_QWORD*)(v5 + 248) = 0;
    *(_QWORD*)(v5 + 224) = 0;
    *(_QWORD*)(v5 + 232) = 0;
    *(_QWORD*)(v5 + 208) = 0;
    *(_QWORD*)(v5 + 216) = 0;
    *(_QWORD*)(v5 + 192) = 0;
    *(_QWORD*)(v5 + 200) = 0;
    *(_QWORD*)(v5 + 176) = 0;
    *(_QWORD*)(v5 + 184) = 0;
    *(_QWORD*)(v5 + 160) = 0;
    *(_QWORD*)(v5 + 168) = 0;
    *(_QWORD*)(v5 + 264) = 0;
    *(_QWORD*)(v5 + 272) = 0;
    *(_QWORD*)(v5 + 280) = 0;
    *(_QWORD*)(v5 + 288) = 0;
    GameHr_6c2b50(a1 + v2 + 304);
    *(_DWORD*)(v5 + 2528) = 0;
    *(_BYTE*)(v5 + 2532) = 0;
    *(_QWORD*)(v5 + 2536) = 0;
    *(_QWORD*)(v5 + 2544) = -1;
    *(_QWORD*)(v5 + 2560) = 0;
    *(_DWORD*)(v5 + 2552) = 0;
    *(_WORD*)(v5 + 2556) = 0;
    v6 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 296, 16, 0);
    *(_QWORD*)(v6 + 8) = 0;
    *(_QWORD*)(v6 + 16) = 0;
    *(_QWORD*)v6 = v4;
    v2 += 2448;
    *(_DWORD*)(v6 + 32) = 0;
    *(_QWORD*)(v6 + 40) = 0;
    *(_DWORD*)(v6 + 104) = 0;
    *(_QWORD*)(v6 + 56) = 0;
    *(_QWORD*)(v6 + 64) = 0;
    *(_QWORD*)(v6 + 72) = 0;
    *(_WORD*)(v6 + 80) = 0;
    *(_DWORD*)(v6 + 112) = -1082130432;
    *(_WORD*)(v6 + 116) = 0;
    *(_DWORD*)(v6 + 48) = 0x2000;
    *(_WORD*)(v6 + 136) = 0;
    *(_BYTE*)(v6 + 160) = 0;
    *(_BYTE*)(v6 + 288) = 0;
    *(_QWORD*)(v6 + 272) = 0;
    *(_QWORD*)(v6 + 280) = 0;
    *(_QWORD*)(v6 + 256) = 0;
    *(_QWORD*)(v6 + 264) = 0;
    *(_QWORD*)(v6 + 240) = 0;
    *(_QWORD*)(v6 + 248) = 0;
    *(_QWORD*)(v6 + 224) = 0;
    *(_QWORD*)(v6 + 232) = 0;
    *(_QWORD*)(v6 + 208) = 0;
    *(_QWORD*)(v6 + 216) = 0;
    *(_QWORD*)(v6 + 192) = 0;
    *(_QWORD*)(v6 + 200) = 0;
    *(_QWORD*)(v6 + 176) = 0;
    *(_QWORD*)(v6 + 184) = 0;
    *(_WORD*)(v6 + 108) = 256;
    *(_QWORD*)(v6 + 168) = 0;
    *(_QWORD*)(v6 + 120) = 0;
    *(_DWORD*)(v6 + 127) = 0;
    *(_DWORD*)(v6 + 292) = 2;
    *(_QWORD*)(v5 + 2576) = v6;
    *(_QWORD*)(v6 + 24) = 0;
    *(_QWORD*)(v5 + 2584) = 0xFFFFFFFF00000000LL;
    *(_QWORD*)(v5 + 2592) = 0x4220000000000000LL;
    *(_DWORD*)(v5 + 2600) = 0;
    *(_QWORD*)(v5 + 2568) = v6 + 24;
  } while (v2 != 391680);
  v7 = fw_memory_g_heap_manager_ptr;
  v25_.v27 = 0;
  v25_.v28 = 0;
  v25_.v29 = 0;
  v25_.v25[4] = 0;
  v25_.v25[5] = 0;
  v25_.v26 = 0;
  *(_OWORD*)(v21 + 2736) = (__typeof__(*(_OWORD*)(v21 + 2736))){0};
  *(_QWORD*)(v21 + 2736) = 1065353216;
  *(_DWORD*)(v21 + 2720) = 0;
  *(_WORD*)(v21 + 2756) = 0;
  *(_BYTE*)(v21 + 2758) = 0;
  v8 = *(_OWORD*)(v21 + 2736);
  *(_DWORD*)(v21 + 2752) = -1;
  *(_OWORD*)(v21 + 2736) = (unsigned __int64)v8;
  v25_.v25[0] = 0x800000018LL;
  v25_.v25[1] = 0x500000040LL;
  v25_.v25[2] = 0x10000000100000LL;
  v25_.v25[3] = 0;
  game_1366bd0((void*)(&v23_.v23), (__int64)"Layout/Battle.arc",
               (__int64)"Battle_UnitInfoOnMap", (__int64)v25_.v25);
  v9 = v23_.v23;
  v10 = v23_.v24;
  v11 = *(_QWORD*)(a1 + 32);
  v23_.v23 = 0;
  v23_.v24 = 0;
  *(_QWORD*)(a1 + 24) = v9;
  *(_QWORD*)(a1 + 32) = v10;
  if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    std___1___shared_weak_count___release_weak_alt1(v11);
  }
  v12 = v23_.v24;
  if (v23_.v24 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v23_.v24 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    std___1___shared_weak_count___release_weak_alt1(v12);
  }
  v13 = *(_QWORD*)(a1 + 32);
  v22[0] = *(_QWORD*)(a1 + 24);
  v22[1] = v13;
  if (v13 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                              memory_order_relaxed);
    ui_LayoutAccessor_Setup_155dda0((_QWORD*)(a1 + 40), v22);
    if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
      std___1___shared_weak_count___release_weak_alt1(v13);
    }
  }
  else {
    ui_LayoutAccessor_Setup_155dda0((_QWORD*)(a1 + 40), v22);
  }
  ui_LayoutAccessor_SetPriority(a1 + 40, -3);
  LayoutAccessor_155e830(a1 + 40, 1);
  if (*GameData_212d568[0] != 0) {
    LayoutAccessor_155e830(*GameData_212d568[0] + 40, 0);
  }
  ui_LayoutAccessor_SetPaneVisible_alt2(a1 + 40, "L_UnitInfo00", 0);
  ui_LayoutAccessor_SetPaneVisible_alt2(a1 + 40, "L_SubInfoNum", 0);
  v14 = v25_.v27;
  if (v25_.v27 != 0) {
    v15 = v25_.v28;
    if (v25_.v27 == v25_.v28) {
      goto LABEL_28;
    }
    v16 = v25_.v28;
    do {
      v17 = *(_BYTE*)(v16 - 24);
      v16 -= 24;
      if ((v17 & 1) != 0) {
        v18 = *(_QWORD*)(v15 - 8);
        if (v18 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) != 0) {
            v19 = 128;
          }
          else {
            v19 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v7 + v19, v18);
        }
      }
      v15 = v16;
    } while (v16 != v14);
    v25_.v28 = v14;
    v14 = v25_.v27;
    if (v25_.v27 != 0) {
    LABEL_28:
      v20 = 128;
      if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
        v20 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v7 + v20, v14);
    }
  }
}

__int64 MapOnMapInfo_Destructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 i;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 result;
  __int64 v14;

  *a1 = game_map_MapOnMapInfo_vtable;
  a1[1] = GameData_2065b58;
  v2 = a1[3];
  if (v2 != 0) {
    *(_BYTE*)(v2 + 2376) = 1;
  }
  v3 = a1[4];
  a1[3] = 0;
  a1[4] = 0;
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
  }
  GameRoutine_155e140(a1 + 5);
  v4 = fw_memory_g_heap_manager_ptr;
  v5 = a1 + 48675;
  for (i = -391680; i != 0; i += 2448) {
    v7 = v5[301];
    if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak(v7);
    }
    game_Unit_Destroy_Unit(v5 + 17);
    v8 = v5[7];
    if (v8 != 0) {
      v5[8] = v8;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
        v9 = 128;
      }
      else {
        v9 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v9, v8);
    }
    v10 = v5[2];
    if (v10 != 0) {
      v5[3] = v10;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
        v11 = 128;
      }
      else {
        v11 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v11, v10);
    }
    if (*v5 != 0) {
      std___1___shared_weak_count___release_weak(*v5);
    }
    v5 -= 306;
  }
  GameRoutine_155e140(a1 + 5);
  v12 = a1[17];
  if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    std___1___shared_weak_count___release_weak(v12);
  }
  GameRoutine_1564060(a1 + 11);
  GameRoutine_1563f90(a1 + 8, a1[9]);
  result = a1[6];
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak(result);
  }
  v14 = a1[4];
  if (v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
    result = std___1___shared_weak_count___release_weak(v14);
  }
  *a1 = GameData_2066070;
  if ((_QWORD*)GameData_21ed080 == a1) {
    GameData_21ed080 = 0;
  }
  return result;
}

__int64 MapOnMapInfo_15ffb10(__int64 a1)
{

#pragma clang fp contract(off)
  int v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  char* v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  char* v9;
  __int64 v10;
  char* v11;
  __int64 v12;
  const char* v13;
  __int64 v14;
  char* v15;
  __int64 v16;
  __int64 v17;
  __int64* v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64* v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64* v32;
  __int64* v33;
  __int64* v34;
  __int64 v35;
  __int64 v36;
  __int64* v37;
  __int64* v38;
  __int64 v39;
  __int64 v40;
  __int64* v41;
  __int64* v42;
  __int64* v43;
  __int64* v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  _BOOL4 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64* v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  _BOOL4 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  const char* v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64* v70;
  __int64* v71;
  __int64 v72;
  char* v73;
  char* v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  char* v81;
  char* v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  const char* v89;
  __int64 v90;
  __int64* v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 result;
  _QWORD v98[2];
  struct {
    __int64* v99;
    __int64 v100;
  } v99_;
  struct {
    char* v101;
    unsigned __int64 v102;
  } v101_;
  struct {
    __int64 v103;
    __int64 v104;
    char* v105;
  } v103_;
  struct {
    _QWORD* v106;
    __int64 v107;
  } v106_;
  struct {
    __int64 v108;
    __int64 v109;
  } v108_;

  LayoutAccessor_1560070((void*)(&v108_.v108), (__int64*)(a1 + 40),
                         "L_UnitInfo00");
  v103_.v103 = (__int64)"L_SubInfoNum";
  v103_.v104 = 12;
  GameRoutine_9d5180((void*)(&v106_.v106), (__int64*)(a1 + 40), &v103_.v103);
  if (v108_.v109 == 0 || *(_QWORD*)(v108_.v109 + 8) == -1 || v106_.v107 == 0 ||
      *(_QWORD*)(v106_.v107 + 8) == -1) {
    goto LABEL_181;
  }
  v3 = std___1___shared_weak_count_lock_alt1(v108_.v109);
  if (v3 != 0) {
    v4 = v3;
    LayoutAccessor_155e830(v108_.v108, 1);
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak_alt1(v4);
    }
  }
  else {
    LayoutAccessor_155e830(0, 1);
  }
  v5 = std___1___shared_weak_count_lock_alt1(v106_.v107);
  (*(void (**)(_QWORD*, __int64))(*v106_.v106 + 40LL))(v106_.v106, 1);
  if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak_alt1(v5);
  }
  v6 = game_util_Format_alt1("L_UnitInfo%03d", *(_DWORD*)(a1 + 391840));
  v7 = strlen_alt1(v6);
  if (v7 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v8 = v7;
  if (v7 >= 0x17) {
    if ((v7 | 7) == 0x17) {
      v10 = 26;
    }
    else {
      v10 = (v7 | 7) + 1;
    }
    v9 = (char*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v10, 16, 0);
    v103_.v104 = v8;
    v103_.v105 = v9;
    v103_.v103 = v10 | 1;
    goto LABEL_19;
  }
  LOBYTE(v103_.v103) = 2 * v7;
  v9 = (char*)&v103_.v103 + 1;
  if (v7 != 0) {
  LABEL_19:
    memmove_alt1((__int64)v9, (__int64)v6, v8);
  }
  v9[v8] = 0;
  if ((v103_.v103 & 1) != 0) {
    v11 = v103_.v105;
  }
  else {
    v11 = (char*)&v103_.v103 + 1;
  }
  LayoutAccessor_1560520((__int64*)(a1 + 40), "L_UnitInfo00", "N_Root", v11);
  v12 = a1 + 2448LL * *(int*)(a1 + 391840) + 160;
  if ((v103_.v103 & 1) != 0) {
    v13 = v103_.v105;
  }
  else {
    v13 = (char*)&v103_.v103 + 1;
  }
  LayoutAccessor_1560070((void*)(&v101_.v101), (__int64*)(a1 + 40), v13);
  v15 = v101_.v101;
  v14 = v101_.v102;
  if (v101_.v102 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v101_.v102 + 16), 1u,
                              memory_order_relaxed);
  }
  v16 = *(_QWORD*)(v12 + 8);
  *(_QWORD*)v12 = v15;
  *(_QWORD*)(v12 + 8) = v14;
  if (v16 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v16);
    v14 = *(_QWORD*)(v12 + 8);
  }
  if (v14 != 0) {
    v17 = std___1___shared_weak_count_lock_alt1(v14);
    v18 = ui_LayoutAccessor_empty__ptr[0];
    if (v17 != 0) {
      if (*(_QWORD*)v12 != 0) {
        v18 = *(__int64**)v12;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v19 = v18;
        (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
        std___1___shared_weak_count___release_weak_alt1(v17);
        v18 = v19;
      }
    }
  }
  else {
    v18 = ui_LayoutAccessor_empty__ptr[0];
  }
  v20 = ui_LayoutAccessor_FindPane_alt1(v18, (__int64)"IconFactor");
  if (v20 != 0) {
    v21 = __dynamic_cast(v20, GameData_212d670[0], GameData_212d678[0], 0);
    *(_QWORD*)(v12 + 16) = v21;
    if (v21 != 0) {
      *(_BYTE*)(v21 + 88) &= ~1u;
    }
  }
  else {
    *(_QWORD*)(v12 + 16) = 0;
  }
  v22 = *(_QWORD*)(v12 + 24);
  v23 = *(_QWORD*)(v12 + 8);
  *(_QWORD*)(v12 + 48) = 0;
  *(_QWORD*)(v12 + 32) = v22;
  if (v23 != 0) {
    v24 = std___1___shared_weak_count_lock_alt1(v23);
    v25 = ui_LayoutAccessor_empty__ptr[0];
    if (v24 != 0) {
      if (*(_QWORD*)v12 != 0) {
        v25 = *(__int64**)v12;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v26 = v25;
        (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
        std___1___shared_weak_count___release_weak_alt1(v24);
        v25 = v26;
      }
    }
  }
  else {
    v25 = ui_LayoutAccessor_empty__ptr[0];
  }
  v27 = ui_LayoutAccessor_FindPane_alt1(v25, (__int64)"IconBadStatus");
  if (v27 != 0) {
    v28 = __dynamic_cast(v27, GameData_212d670[0], GameData_212d678[0], 0);
    *(_QWORD*)(v12 + 56) = v28;
    if (v28 != 0) {
      *(_BYTE*)(v28 + 88) &= ~1u;
    }
  }
  else {
    *(_QWORD*)(v12 + 56) = 0;
  }
  v29 = *(_QWORD*)(v12 + 64);
  v30 = *(_QWORD*)(v12 + 8);
  *(_QWORD*)(v12 + 88) = 0;
  *(_BYTE*)(v12 + 2372) = 0;
  *(_QWORD*)(v12 + 72) = v29;
  if (v30 != 0) {
    v31 = std___1___shared_weak_count_lock_alt1(v30);
    v32 = ui_LayoutAccessor_empty__ptr[0];
    if (v31 != 0) {
      if (*(_QWORD*)v12 != 0) {
        v32 = *(__int64**)v12;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v33 = v32;
        (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
        std___1___shared_weak_count___release_weak_alt1(v31);
        v32 = v33;
      }
    }
  }
  else {
    v32 = ui_LayoutAccessor_empty__ptr[0];
  }
  v34 = LayoutAccessor_155fbe0_alt1(v32, "L_Stock");
  GameHr_1562680_alt1((__int64)v34, "Wait", 0x1.0000000000000p+0f);
  v35 = *(_QWORD*)(v12 + 8);
  if (v35 != 0) {
    v36 = std___1___shared_weak_count_lock_alt1(v35);
    v37 = ui_LayoutAccessor_empty__ptr[0];
    if (v36 != 0) {
      if (*(_QWORD*)v12 != 0) {
        v37 = *(__int64**)v12;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v36 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v38 = v37;
        (*(void (**)(__int64))(*(_QWORD*)v36 + 16LL))(v36);
        std___1___shared_weak_count___release_weak_alt1(v36);
        v37 = v38;
      }
    }
  }
  else {
    v37 = ui_LayoutAccessor_empty__ptr[0];
  }
  LayoutAccessor_155e830((__int64)v37, 0);
  v39 = *(_QWORD*)(v12 + 8);
  if (v39 != 0) {
    v40 = std___1___shared_weak_count_lock_alt1(v39);
    v41 = ui_LayoutAccessor_empty__ptr[0];
    if (v40 != 0) {
      if (*(_QWORD*)v12 != 0) {
        v41 = *(__int64**)v12;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v40 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v42 = v41;
        (*(void (**)(__int64))(*(_QWORD*)v40 + 16LL))(v40);
        std___1___shared_weak_count___release_weak_alt1(v40);
        v41 = v42;
      }
    }
  }
  else {
    v41 = ui_LayoutAccessor_empty__ptr[0];
  }
  v43 = LayoutAccessor_155fbe0_alt1(v41, "L_Face");
  if (v43[2] != 0) {
    v44 = v43;
    v45 = v43[1];
    if (v45 != 0) {
      v46 = std___1___shared_weak_count_lock_alt1(v45);
      if (v46 == 0) {
        goto LABEL_84;
      }
      v47 = *v44;
      if (*v44 != 0) {
        v1 = *(unsigned __int8*)(v47 + 24);
        v48 = v47 + 152;
        if (v1 == 0) {
          v48 = 0;
        }
        v49 = v48 != v44[2];
      }
      else {
        v49 = true;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v46 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v50 = v46;
        (*(void (**)(__int64))(*(_QWORD*)v46 + 16LL))(v46);
        std___1___shared_weak_count___release_weak_alt1(v50);
      }
      if (!v49) {
        if ((v1 & 1) == 0) {
          goto LABEL_117;
        }
      }
      else {
      LABEL_84:
        v51 = v44[1];
        if (v51 == 0 || *(_QWORD*)(v51 + 8) == -1) {
          goto LABEL_117;
        }
      }
      v52 = *(_QWORD*)(v12 + 8);
      if (v52 != 0) {
        v53 = std___1___shared_weak_count_lock_alt1(v52);
        v54 = ui_LayoutAccessor_empty__ptr[0];
        if (v53 != 0) {
          if (*(_QWORD*)v12 != 0) {
            v54 = *(__int64**)v12;
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v53 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            v55 = v53;
            (*(void (**)(__int64))(*(_QWORD*)v53 + 16LL))(v53);
            std___1___shared_weak_count___release_weak_alt1(v55);
          }
        }
      }
      else {
        v54 = ui_LayoutAccessor_empty__ptr[0];
      }
      if (v54[2] == 0) {
        goto LABEL_114;
      }
      v56 = v54[1];
      if (v56 == 0) {
        goto LABEL_114;
      }
      v57 = std___1___shared_weak_count_lock_alt1(v56);
      if (v57 == 0) {
        goto LABEL_106;
      }
      v58 = *v54;
      if (*v54 != 0) {
        v1 = *(unsigned __int8*)(v58 + 24);
        v59 = v58 + 152;
        if (v1 == 0) {
          v59 = 0;
        }
        v60 = v59 != v54[2];
      }
      else {
        v60 = true;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v57 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v61 = v57;
        (*(void (**)(__int64))(*(_QWORD*)v57 + 16LL))(v57);
        std___1___shared_weak_count___release_weak_alt1(v61);
      }
      if (!v60) {
        if ((v1 & 1) == 0) {
          goto LABEL_114;
        }
      }
      else {
      LABEL_106:
        v62 = v54[1];
        if (v62 == 0 || *(_QWORD*)(v62 + 8) == -1) {
        LABEL_114:
          v66 = ui_LayoutAccessor_FindPane_alt1(v34, (__int64)"Face");
          if (v66 != 0) {
            v67 = __dynamic_cast(v66, GameData_212d670[0], GameData_212d678[0],
                                 0);
            if (v67 != 0) {
              *(float*)(v12 + 2436) =
                  *(float*)(v67 + 84) * 0x1.0000000000000p-1f;
            }
          }
          goto LABEL_117;
        }
      }
      v63 = v54[2];
      if (v63 != 0) {
        v64 = *(_QWORD*)(v63 + 24);
        if (v64 != 0) {
          v65 = Pane_58fac0(v64, "ZoomDist");
          if (v65 != nullptr) {
            *(_DWORD*)(v12 + 2440) = *(_DWORD*)&v65[*((unsigned int*)v65 + 1)];
          }
        }
      }
      goto LABEL_114;
    }
  }
LABEL_117:
  v68 = *(_QWORD*)(v12 + 8);
  if (v68 != 0) {
    v69 = std___1___shared_weak_count_lock_alt1(v68);
    v70 = ui_LayoutAccessor_empty__ptr[0];
    if (v69 != 0) {
      if (*(_QWORD*)v12 != 0) {
        v70 = *(__int64**)v12;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v69 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v71 = v70;
        (*(void (**)(__int64))(*(_QWORD*)v69 + 16LL))(v69);
        std___1___shared_weak_count___release_weak_alt1(v69);
        v70 = v71;
      }
    }
  }
  else {
    v70 = ui_LayoutAccessor_empty__ptr[0];
  }
  v72 = ui_LayoutAccessor_FindPane_alt1(v70, (__int64)"N_Root");
  if (v72 != 0) {
    *(_DWORD*)(v12 + 2432) = *(_DWORD*)(v72 + 52);
  }
  if (v101_.v102 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v101_.v102);
  }
  if ((v103_.v103 & 1) != 0) {
    v73 = v103_.v105;
  }
  else {
    v73 = (char*)&v103_.v103 + 1;
  }
  v74 = game_util_Format_alt1("%s/N_Status%02dNum_Lct", v73, 0);
  v75 = ui_LayoutAccessor_FindPane_alt1((__int64*)(a1 + 40), (__int64)v74);
  if (v75 != 0) {
    v76 = v75;
    v77 = *(_QWORD*)(a1 + 48);
    if (v77 != 0) {
      v78 = std___1___shared_weak_count_lock_alt1(v77);
      v79 = *(_QWORD*)(a1 + 40);
      v80 = v78;
    }
    else {
      v79 = 0;
      v80 = 0;
    }
    v101_.v101 = game_util_Format_alt1("L_Status%02d_Num", 0);
    v101_.v102 = strlen_alt1(v101_.v101);
    MapOnMapInfo_1600600_alt1((void*)(&v99_.v99), v79, &v106_.v106, &v101_.v101,
                              v76);
    if (v99_.v100 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v99_.v100);
    }
    if (v80 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v80 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v80 + 16LL))(v80);
      std___1___shared_weak_count___release_weak_alt1(v80);
    }
  }
  if ((v103_.v103 & 1) != 0) {
    v81 = v103_.v105;
  }
  else {
    v81 = (char*)&v103_.v103 + 1;
  }
  v82 = game_util_Format_alt1("%s/N_Status%02dNum_Lct", v81, 1);
  v83 = ui_LayoutAccessor_FindPane_alt1((__int64*)(a1 + 40), (__int64)v82);
  if (v83 != 0) {
    v84 = v83;
    v85 = *(_QWORD*)(a1 + 48);
    if (v85 != 0) {
      v86 = std___1___shared_weak_count_lock_alt1(v85);
      v87 = *(_QWORD*)(a1 + 40);
      v88 = v86;
    }
    else {
      v87 = 0;
      v88 = 0;
    }
    v101_.v101 = game_util_Format_alt1("L_Status%02d_Num", 1);
    v101_.v102 = strlen_alt1(v101_.v101);
    MapOnMapInfo_1600600_alt1((void*)(&v99_.v99), v87, &v106_.v106, &v101_.v101,
                              v84);
    if (v99_.v100 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v99_.v100);
    }
    if (v88 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v88 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v88 + 16LL))(v88);
      std___1___shared_weak_count___release_weak_alt1(v88);
    }
  }
  if ((v103_.v103 & 1) != 0) {
    v89 = v103_.v105;
  }
  else {
    v89 = (char*)&v103_.v103 + 1;
  }
  LayoutAccessor_1560070((void*)(&v101_.v101), (__int64*)(a1 + 40), v89);
  if (v101_.v102 == 0) {
    goto LABEL_169;
  }
  v90 = std___1___shared_weak_count_lock_alt1(v101_.v102);
  v91 = (__int64*)v101_.v101;
  if (v101_.v102 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v101_.v102);
  }
  if (v90 != 0 && v91 != nullptr) {
    v98[0] = "L_Status00_Num";
    v98[1] = 14;
    GameRoutine_9d5180((void*)(&v101_.v101), v91, v98);
    if (v101_.v102 != 0) {
      v92 = std___1___shared_weak_count_lock_alt1(v101_.v102);
      if (v101_.v102 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v101_.v102);
      }
      if (v92 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v92 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v92 + 16LL))(v92);
        std___1___shared_weak_count___release_weak_alt1(v92);
      }
    }
  }
  else if (v90 == 0) {
  LABEL_169:
    if (v108_.v109 != 0 &&
        (v93 = std___1___shared_weak_count_lock_alt1(v108_.v109)) != 0) {
      v94 = v93;
      LayoutAccessor_155e830(v108_.v108, 0);
      if (atomic_fetch_add((atomic_ullong* volatile)(v94 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v94 + 16LL))(v94);
        std___1___shared_weak_count___release_weak_alt1(v94);
      }
    }
    else {
      LayoutAccessor_155e830(0, 0);
    }
    v95 = std___1___shared_weak_count_lock_alt1(v106_.v107);
    (*(void (**)(_QWORD*, _QWORD))(*v106_.v106 + 40LL))(v106_.v106, 0);
    if (atomic_fetch_add((atomic_ullong* volatile)(v95 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v95 + 16LL))(v95);
      std___1___shared_weak_count___release_weak_alt1(v95);
    }
    ++*(_DWORD*)(a1 + 391840);
    if ((v103_.v103 & 1) != 0 && v103_.v105 != nullptr) {
      v96 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v96 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v96, (__int64)v103_.v105);
    }
  LABEL_181:
    if (v106_.v107 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v106_.v107);
    }
    result = v108_.v109;
    if (v108_.v109 != 0) {
      return std___1___shared_weak_count___release_weak_alt1(v108_.v109);
    }
    return result;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v90 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v90 + 16LL))(v90);
    std___1___shared_weak_count___release_weak_alt1(v90);
  }
  goto LABEL_169;
}

__attribute__((swiftcall)) void MapOnMapInfo_1600600(PSEUDO_X8 x8_, __int64 a1,
                                                     _QWORD** a2, _QWORD* a3,
                                                     _QWORD* a4)
{
  __int64** a5 = (__int64**)PSEUDO_X8_VALUE(x8_);
  __int64* result;
  _QWORD* v11;
  __int64* v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  atomic_uchar* v16;
  __int64* v17;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  __int64 i;
  __int64 v25;
  __int64** v26;
  __int64 v27;
  __int64* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  _QWORD* v32;
  __int64 v33;
  __int64 v34;
  char v35;
  __int64 v36;
  __int64** v37;
  __int64* v38;
  __int64 v39;
  __int64* v40;
  __int64* v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64* v45;
  __int64 v46;
  __int64* v47;
  __int64 v48;

  result = a2[1];
  if (result == nullptr) {
    goto LABEL_63;
  }
  result = (__int64*)std___1___shared_weak_count_lock(result);
  if (result == nullptr) {
    goto LABEL_63;
  }
  v11 = *a2;
  v12 = result;
  if (*a2 == nullptr) {
    goto LABEL_60;
  }
  v13 = v11[1];
  if (*(_QWORD*)(*(_QWORD*)(v13 + 24) + 24LL) == 0) {
    goto LABEL_60;
  }
  v14 = a4;
  v15 = *(_BYTE*)(a1 + 24) != 0 ? a1 + 152 : 0LL;
  v43 = v15;
  v16 = (atomic_uchar*)GameData_212dfd0;
  v17 = GameData_212dfc8;
  do {
    if ((atomic_load_explicit(v16, memory_order_acquire) & 1) == 0) {
      v19 = __cxa_guard_acquire(v16);
      if ((_DWORD)v19 != 0) {
        *v17 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic(v19);
        __cxa_guard_release(v16);
      }
    }
    result = (__int64*)(*(__int64 (**)(_QWORD*))(*v14 + 16LL))(v14);
    if (result == v17) {
      goto LABEL_21;
    }
    do {
      result = (__int64*)*result;
    } while (result != v17 && result != nullptr);
    if (result != nullptr) {
    LABEL_21:
      v20 = v14[29];
      if (v13 == 0) {
        goto LABEL_60;
      }
      goto LABEL_24;
    }
    v14 = (_QWORD*)v14[3];
  } while (v14 != nullptr);
  v20 = v43;
  if (v13 == 0) {
    goto LABEL_60;
  }
LABEL_24:
  if (*(_QWORD*)(*(_QWORD*)(v13 + 24) + 24LL) == 0) {
    goto LABEL_60;
  }
  result = (__int64*)LayoutEx_579180(96);
  if (result == nullptr) {
    goto LABEL_60;
  }
  v21 = result;
  v22 = GameData_2130ec0[0];
  result[2] = (__int64)(result + 1);
  v44 = v20;
  *result = v22 + 16;
  result[1] = (__int64)(result + 1);
  result[9] = (__int64)(result + 9);
  result[10] = (__int64)(result + 9);
  LayoutEx_57b150();
  v23 = v21[3];
  LayoutEx_58d200(v23, *a3);
  Pane_58dee0(a4, v23);
  for (i = *(_QWORD*)(v13 + 80); i != v13 + 72; i = *(_QWORD*)(i + 8)) {
    v25 = LayoutEx_57cf40(v21, i - 40);
    if (v25 != 0) {
      Layout_1364020(a1, i - 216, v25);
    }
  }
  (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*, __int64*))(
      *v11 + 16LL))((void*)&v45, v11, v21);
  result = v45;
  if (v45 != nullptr &&
      (result = (__int64*)__dynamic_cast(v45, GameData_212dfc0[0],
                                         GameData_212e0e0[0], 0)) != nullptr) {
    v47 = result;
    v48 = v46;
    v26 = &v45;
  }
  else {
    v26 = &v47;
  }
  *v26 = nullptr;
  v26[1] = nullptr;
  v27 = v46;
  if (v46 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v46 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
    result = (__int64*)std___1___shared_weak_count___release_weak(v27);
  }
  v28 = v47;
  if (v47 == nullptr) {
    v36 = v48;
    if (v48 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v48 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v36 + 16LL))(v36);
      result = (__int64*)std___1___shared_weak_count___release_weak(v36);
    }
    v37 = (__int64**)(v44 + 72);
    if (*(_QWORD*)(v44 + 80) != v44 + 72) {
      v38 = (__int64*)(*v37)[2];
      if (v38 == v21) {
        v39 = *game_g_frame_clock_ptr[0];
        Layout_13639a0(a1, (*v37)[2]);
        v40 = *v37;
        v41 = (__int64*)(*v37)[1];
        v42 = *v41;
        *(_QWORD*)(**v37 + 8) = v41;
        *v41 = *v40;
        *(_QWORD*)(v42 + 8) = v40;
        *v40 = v42;
        Layout_579280(v38, v39 + 568);
        (*(void (**)(__int64*))(*v38 + 8))(v38);
        result = (__int64*)LayoutEx_5791a0(v38);
      }
    }
  LABEL_60:
    v35 = 0;
    goto LABEL_61;
  }
  v29 = v48;
  v45 = v47;
  v46 = v48;
  if (v48 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v48 + 8), 1u,
                              memory_order_relaxed);
  }
  v30 = *(_QWORD*)(a1 + 2280);
  v31 = a1 + 2272;
  if (v30 == a1 + 2272) {
    goto LABEL_44;
  }
  while (*(__int64**)(v30 + 16) != v28) {
    v30 = *(_QWORD*)(v30 + 8);
    if (v30 == v31) {
      goto LABEL_44;
    }
  }
  if (v30 == v31) {
  LABEL_44:
    v32 = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
    v32[2] = v28;
    v32[3] = v29;
    if (v29 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v29 + 8), 1u,
                                memory_order_relaxed);
    }
    v33 = *(_QWORD*)(a1 + 2272);
    *v32 = v33;
    v32[1] = v31;
    *(_QWORD*)(v33 + 8) = v32;
    *(_QWORD*)(a1 + 2272) = v32;
    ++*(_QWORD*)(a1 + 2288);
    result =
        (__int64*)(*(__int64 (**)(__int64*, __int64**))(*v28 + 128))(v28, &v45);
    v29 = v46;
  }
  if (v29 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
    result = (__int64*)std___1___shared_weak_count___release_weak(v29);
  }
  v34 = v48;
  *a5 = v47;
  a5[1] = (__int64*)v34;
  if (v34 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v34 + 16), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v34 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34);
      result = (__int64*)std___1___shared_weak_count___release_weak(v34);
    }
  }
  v35 = 1;
LABEL_61:
  if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 1),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if ((v35 & 1) != 0) {
      result;
      return;
    }
    goto LABEL_63;
  }
  (*(void (**)(__int64*))(*v12 + 16))(v12);
  result = (__int64*)std___1___shared_weak_count___release_weak(v12);
  if ((v35 & 1) == 0) {
  LABEL_63:
    *a5 = nullptr;
    a5[1] = nullptr;
  }
  {
    result;
    return;
  }
}

__int64 MapOnMapInfo_1600a80(__int64 result)
{
  __int64 v1;
  __int64* v2;
  __int64* v3;
  __int64 v4;
  bool v5;
  bool v6;
  bool v7;
  bool v8;
  bool v9;
  bool v10;
  bool v11;
  bool v12;
  __int64 v14;
  __int64 v15;
  int v25;
  bool v26;
  int v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int128 v31;
  unsigned __int64 v32;
  int8x16_t v33;
  int8x16_t v34;
  int8x16_t v35;
  int8x16_t v36;
  int8x16_t v37;
  int8x16_t v38;
  int32x4_t v39;
  float32x4_t v40;
  int8x16_t v41;
  float32x4_t v42;
  float32x4_t v43;
  float32x4_t v44;
  float32x4_t v45;
  float32x4_t v46;
  float32x4_t v47;
  float32x4_t v48;
  int32x4_t v49;
  float32x4_t v50;
  float32x4_t v51;
  float32x4_t v52;
  int8x16_t v53;
  int8x16_t v54;
  float32x4_t v55;
  __int64 v56;
  __int64 v57;
  float v58;
  __int64* v59;
  int v60;
  __int64* v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  float v69;
  __int64* v70;
  unsigned __int64 v71;
  int v72;
  __int64 v73;
  int v74;
  __int64* v75;
  __int64 v76;
  __int64 v77;
  float v78;
  __int64* v79;
  unsigned __int64 v80;
  int v81;
  __int64 v82;
  __int64 v83;
  float v84;
  float v85;
  __int64 v86;
  unsigned __int64 v87;
  unsigned __int64 v88;
  __int64 v89;
  __int64 v90;
  __int128 v91;
  __int128 v92;
  __int128 v93;
  float32x4_t v94;
  float32x4_t v95;
  float32x4_t v96;
  __n64 v97;
  float v98;
  float v99;
  _BYTE* v100;
  float32x4_t v101;
  float32x4_t v102[4];
  _QWORD v103[8];

  v91 = COERCE_AS(__typeof__(v91), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v92 = COERCE_AS(__typeof__(v92), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v93 = COERCE_AS(__typeof__(v93), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v1 = result + 389120;
  v2 = (__int64*)result;
  v3 = GameData_212d568[0];
  if (*(_BYTE*)(result + 391878) == 1) {
    v4 = *(_QWORD*)(result + 152);
    if (v4 == -1 || game_gameui_MenuAnimator_instance_ == 0) {
      goto LABEL_32;
    }
    v5 = v4 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 272) ||
         v4 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 504);
    v6 = v5 || v4 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 736);
    v7 = v6 || v4 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 968);
    v8 = v7 || v4 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1200);
    v9 = v8 || v4 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1432);
    v10 = v9 || v4 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1664);
    v11 = v10 || v4 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1896);
    v12 = v11 || v4 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 2128);
    if (!v12 && v4 != *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 2360)) {
    LABEL_32:
      *(_BYTE*)(result + 391878) = 0;
      if (*v3 != 0) {
        result = LayoutAccessor_155e830(*v3 + 40, 0),
        v91 = COERCE_AS(__typeof__(v91), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v92 = COERCE_AS(__typeof__(v92), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v93 = COERCE_AS(__typeof__(v93), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(__n128, "v3", "=w"));
      }
    }
  }
  if (*(_BYTE*)(v1 + 2756) != 1 || (*(_DWORD*)(v1 + 2752) & 0x80000000) == 0) {
    goto LABEL_72;
  }
  v14 = v2[18];
  v15 = game_gameui_MenuAnimator_instance_;
  if (v14 == -1) {
    *(_BYTE*)(v1 + 2756) = 0;
    if (v15 != 0) {
      goto LABEL_68;
    }
  LABEL_70:
    result = -1;
    goto LABEL_71;
  }
  if (game_gameui_MenuAnimator_instance_ == 0) {
    *(_BYTE*)(v1 + 2756) = 0;
    goto LABEL_70;
  }
  if (v14 != *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 272) &&
      v14 != *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 504) &&
      v14 != *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 736) &&
      v14 != *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 968) &&
      v14 != *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1200) &&
      v14 != *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1432) &&
      v14 != *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1664) &&
      v14 != *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1896) &&
      v14 != *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 2128) &&
      v14 != *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 2360)) {
    *(_BYTE*)(v1 + 2756) = 0;
  LABEL_68:
    sprintf_alt1((__int64)v103, "%s%s", "Alpha", "Out"),
        v91 = COERCE_AS(__typeof__(v91), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v92 = COERCE_AS(__typeof__(v92), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v93 = COERCE_AS(__typeof__(v93), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(__n128, "v3", "=w"));
    result =
        ProcTransitionAnim_156af20(v15, 4, 1, v2 + 5, nullptr, (__int64)v103),
    v91 = COERCE_AS(__typeof__(v91), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v92 = COERCE_AS(__typeof__(v92), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v93 = COERCE_AS(__typeof__(v93), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(__n128, "v3", "=w"));
  LABEL_71:
    v2[19] = result;
    *(_BYTE*)(v1 + 2758) = 1;
  }
LABEL_72:
  if (*v3 == 0 || *(int*)(*v3 + 16) <= 0) {
    v25 = *(_DWORD*)(v1 + 2752);
    v26 = __OFSUB__(v25, 1);
    v27 = v25 - 1;
    if (v27 < 0 == v26) {
      *(_DWORD*)(v1 + 2752) = v27;
      if (v27 != 0) {
        return result;
      }
      *(_DWORD*)(v1 + 2752) = -1;
      if (!Situation_7652c0()) {
        v28 = *v3;
        if (*v3 == 0 || *(int*)(v28 + 16) <= 0) {
          if (*(_BYTE*)(v1 + 2758) == 1) {
            *(_BYTE*)(v1 + 2758) = 0;
          }
          if (v28 != 0) {
            LayoutAccessor_155e830(v28 + 40, 1),
                v91 = COERCE_AS(__typeof__(v91),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v92 = COERCE_AS(__typeof__(v92),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v93 = COERCE_AS(__typeof__(v93),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v94 = COERCE_AS(__typeof__(v94),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v95 = COERCE_AS(__typeof__(v95),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v96 = COERCE_AS(__typeof__(v96),
                                PSEUDO_REGISTER(__n128, "v3", "=w"));
          }
          v29 = game_gameui_MenuAnimator_instance_;
          if (game_gameui_MenuAnimator_instance_ != 0) {
            sprintf_alt1((__int64)v103, "%s%s", "Alpha", "In"),
                v91 = COERCE_AS(__typeof__(v91),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v92 = COERCE_AS(__typeof__(v92),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v93 = COERCE_AS(__typeof__(v93),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v94 = COERCE_AS(__typeof__(v94),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v95 = COERCE_AS(__typeof__(v95),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v96 = COERCE_AS(__typeof__(v96),
                                PSEUDO_REGISTER(__n128, "v3", "=w"));
            v30 = ProcTransitionAnim_156af20(v29, 4, 0, v2 + 5, nullptr,
                                             (__int64)v103),
            v91 =
                COERCE_AS(__typeof__(v91), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v92 =
                COERCE_AS(__typeof__(v92), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v93 =
                COERCE_AS(__typeof__(v93), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v94 =
                COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v95 =
                COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v96 =
                COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(__n128, "v3", "=w"));
          }
          else {
            v30 = -1;
          }
          v2[18] = v30;
        }
      }
    }
  }
  *(_QWORD*)(v1 + 2736) = 1065353216;
  v31 = *(_OWORD*)(v1 + 2736);
  *(_OWORD*)(v1 + 2736) = *(unsigned __int64*)(v1 + 2736);
  if (*GameData_212cfc8[0] != 0) {
    LODWORD(v32) = 0;
    *((float*)&v32 + 1) =
        *(float*)(*GameData_212cfc8[0] + 100) * 0x1.1df46a0000000p-6f;
    v33 = vmlaq_f32(COERCE_AS(float32x4_t, v32), vdupq_n_s32(0xC0C90FDB),
                    vrndnq_f32(vmulq_f32(COERCE_AS(float32x4_t, v32),
                                         vdupq_n_s32(0x3E22F983u))));
    v34 = vcgtq_f32(v33, vdupq_n_s32(0x3FC90FDBu));
    v35 = vmvnq_s8(v34);
    v36 = vbslq_s8(v34, vsubq_f32(vdupq_n_s32(0x40490FDBu), v33), v33);
    v37 = vcgtq_f32(vdupq_n_s32(0xBFC90FDB), v36);
    v38 = vsubq_f32(vdupq_n_s32(0xC0490FDB), v36);
    v39 = *(int32x4_t*)((char*)((_UNKNOWN*)0x4LL) + (_QWORD)GameData_212c190);
    v40 = vbslq_s8(v37, v38, v36);
    PSEUDO_LOW_LANE128(v38, n128_u32, *(_DWORD*)GameData_212c190);
    v41 = vbicq_s8(v35, v37);
    v42 = vmulq_f32(v40, v40);
    v43 = vmlsq_lane_f32(
        vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v39).n128_u64[0]), 0), v42,
        COERCE_AS(float32x2_t, LANES128(v38).n128_u64[0]), 0);
    PSEUDO_LOW_LANE128(
        v38, n128_f32,
        -COERCE_FLOAT(HIDWORD(
            *(_QWORD*)((char*)((_UNKNOWN*)0x4LL) + (_QWORD)GameData_212c190))));
    v44 = vmlaq_f32(
        vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v38).n128_u64[0]), 0), v42,
        v43);
    v45 = vmlaq_f32(vdupq_laneq_s32(v39, 2), v42, v44);
    LANES128(v39).n128_u64[0] = 0x3F8000003F800000LL;
    LANES128(v39).n128_u64[1] = 0x3F8000003F800000LL;
    PSEUDO_LOW_LANE128(
        v44, n128_f32,
        -COERCE_FLOAT(DWORD3(
            *(_OWORD*)((char*)((_UNKNOWN*)0x4LL) + (_QWORD)GameData_212c190))));
    v46 = vmlaq_f32(
        vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v44).n128_u64[0]), 0), v42,
        v45);
    v47 = vmlaq_f32(v39, v42, v46);
    PSEUDO_LOW_LANE128(v46, n128_u32, *(_DWORD*)GameData_212c188);
    v48 = vmulq_f32(v40, v47);
    v49 = *(int32x4_t*)((char*)((_UNKNOWN*)0x4LL) + (_QWORD)GameData_212c188);
    v50 = vmlsq_lane_f32(
        vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v49).n128_u64[0]), 0), v42,
        COERCE_AS(float32x2_t, LANES128(v46).n128_u64[0]), 0);
    PSEUDO_LOW_LANE128(
        v46, n128_f32,
        -COERCE_FLOAT(HIDWORD(
            *(_QWORD*)((char*)((_UNKNOWN*)0x4LL) + (_QWORD)GameData_212c188))));
    v51 = vmlaq_f32(
        vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v46).n128_u64[0]), 0), v42,
        v50);
    v52 = vmlaq_f32(vdupq_laneq_s32(v49, 2), v42, v51);
    LANES128(v51).n128_f32[0] = -LANES128(v49).n128_f32[3];
    v53 = vmlaq_f32(
        v39, v42,
        vmlaq_f32(
            vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v51).n128_u64[0]), 0),
            v42, v52));
    v54 = vbslq_s8(v41, v53, vnegq_f32(v53));
    LANES128(v42).n128_u64[0] =
        LANES128(v54).n128_u32[1] |
        ((unsigned __int64)LANES128(v54).n128_u32[1] << 32);
    LANES128(v49).n128_u64[0] =
        LANES128(v54).n128_u32[2] |
        ((unsigned __int64)LANES128(v48).n128_u32[2] << 32);
    LANES128(v52).n128_u64[0] = LANES128(v49).n128_u64[0];
    LANES128(v42).n128_u64[1] = LANES128(v48).n128_u32[1];
    LANES128(v51).n128_u64[0] =
        LANES128(v48).n128_u32[1] |
        ((unsigned __int64)LANES128(v48).n128_u32[1] << 32);
    LANES128(v52).n128_u64[1] = 3212836864LL;
    LANES128(v51).n128_u64[1] = LANES128(v54).n128_u32[1];
    PSEUDO_LOW_LANE128(v53, n128_u64, __ROR8__(LANES128(v49).n128_u64[0], 32));
    LANES128(v49).n128_u64[1] = 1065353216;
    v55 = vmulq_f32(v51, v49);
    *(float32x4_t*)(v1 + 2736) = vaddq_f32(
        vmlaq_f32(
            vmlaq_lane_f32(
                vmulq_n_f32(vmulq_f32(v42, v52), *(float*)&v31),
                vaddq_f32(vmulq_n_f32(v55, LANES128(v48).n128_f32[0]),
                          vmulq_f32(vmulq_n_f32(v53, LANES128(v54).n128_f32[0]),
                                    COERCE_AS(float32x4_t, GameData_1a82940))),
                *(float32x2_t*)&v31, 1),
            COERCE_AS(float32x4_t, 0),
            vaddq_f32(vmulq_n_f32(v55, LANES128(v54).n128_f32[0]),
                      vmulq_f32(vmulq_n_f32(v53, LANES128(v48).n128_f32[0]),
                                COERCE_AS(float32x4_t, GameData_1a83510)))),
        COERCE_AS(float32x4_t, 0));
  }
  v56 = 0;
  v57 = 391680;
  v58 = *(float*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] + 104LL);
  v59 = ui_LayoutAccessor_empty__ptr[0];
  do {
    v61 = &v2[v56];
    v62 = v2[v56 + 21];
    if (v62 != 0 && (v63 = std___1___shared_weak_count_lock_alt1(v62)) != 0) {
      v64 = v63;
      if (v61[20] != 0) {
        v65 = v61[20];
      }
      else {
        v65 = (__int64)v59;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v64 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v66 = v65;
        (*(void (**)(__int64))(*(_QWORD*)v64 + 16LL))(v64),
            v91 =
                COERCE_AS(__typeof__(v91), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v92 =
                COERCE_AS(__typeof__(v92), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v93 =
                COERCE_AS(__typeof__(v93), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v94 =
                COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v95 =
                COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v96 =
                COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(__n128, "v3", "=w"));
        std___1___shared_weak_count___release_weak_alt1(v64),
            v91 =
                COERCE_AS(__typeof__(v91), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v92 =
                COERCE_AS(__typeof__(v92), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v93 =
                COERCE_AS(__typeof__(v93), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v94 =
                COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v95 =
                COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v96 =
                COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(__n128, "v3", "=w"));
        v65 = v66;
      }
    }
    else {
      v65 = (__int64)v59;
    }
    result = LayoutAccessor_155e830(v65, 0),
    v91 = COERCE_AS(__typeof__(v91), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v92 = COERCE_AS(__typeof__(v92), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v93 = COERCE_AS(__typeof__(v93), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(__n128, "v3", "=w"));
    v67 = v61[23];
    v68 = v61[24];
    *((_BYTE*)v61 + 2557) = 0;
    if ((unsigned __int64)(v68 - v67) >= 0x11) {
      v69 = v58 + *(float*)&v2[v56 + 26];
      *(float*)&v2[v56 + 26] = v69;
      if (v69 > 0x1.6800000000000p+6f) {
        result = v61[22];
        LODWORD(v2[v56 + 26]) = 0;
        if (result != 0) {
          v70 = &v2[v56];
          v71 = (v68 - v67) >> 4;
          v72 = HIDWORD(v2[v56 + 26]);
          if (v71 > v72) {
            v73 = *(_QWORD*)(v67 + 16LL * v72 + 8);
            if (v73 != 0) {
              result = Pane_58f8a0(result),
              v91 = COERCE_AS(__typeof__(v91),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v92 = COERCE_AS(__typeof__(v92),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v93 = COERCE_AS(__typeof__(v93),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v94 = COERCE_AS(__typeof__(v94),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v95 = COERCE_AS(__typeof__(v95),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v96 = COERCE_AS(__typeof__(v96),
                              PSEUDO_REGISTER(__n128, "v3", "=w"));
              *(_QWORD*)(*(_QWORD*)(result + 24) + 8LL) = v73;
              v72 = *((_DWORD*)v70 + 53);
              v71 = (v61[24] - v61[23]) >> 4;
            }
          }
          if (v71 > v72 + 1) {
            v74 = v72 + 1;
          }
          else {
            v74 = 0;
          }
          *((_DWORD*)v70 + 53) = v74;
        }
      }
    }
    v75 = &v2[v56];
    v77 = v2[v56 + 28];
    v76 = v2[v56 + 29];
    if ((unsigned __int64)(v76 - v77) >= 0x11) {
      v78 = v58 + *((float*)v75 + 62);
      *((float*)v75 + 62) = v78;
      if (v78 > 0x1.6800000000000p+6f) {
        result = v75[27];
        *((_DWORD*)v75 + 62) = 0;
        if (result != 0) {
          v79 = &v2[v56];
          v80 = (v76 - v77) >> 4;
          v81 = HIDWORD(v2[v56 + 31]);
          if (v80 > v81) {
            v82 = *(_QWORD*)(v77 + 16LL * v81 + 8);
            if (v82 != 0) {
              result = Pane_58f8a0(result),
              v91 = COERCE_AS(__typeof__(v91),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v92 = COERCE_AS(__typeof__(v92),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v93 = COERCE_AS(__typeof__(v93),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v94 = COERCE_AS(__typeof__(v94),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v95 = COERCE_AS(__typeof__(v95),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v96 = COERCE_AS(__typeof__(v96),
                              PSEUDO_REGISTER(__n128, "v3", "=w"));
              *(_QWORD*)(*(_QWORD*)(result + 24) + 8LL) = v82;
              v81 = *((_DWORD*)v79 + 63);
              v80 = (v75[29] - v75[28]) >> 4;
            }
          }
          if (v80 > v81 + 1) {
            v60 = v81 + 1;
          }
          else {
            v60 = 0;
          }
          *((_DWORD*)v79 + 63) = v60;
        }
      }
    }
    v56 += 306;
  } while (v56 != 48960);
  if ((*(_BYTE*)(v1 + 2757) & 1) != 0) {
    v83 = *GameData_212cfc8[0];
    if (*GameData_212cfc8[0] != 0) {
      v84 = 0x0.0p+0f;
      v85 = *(float*)(*(_QWORD*)(v83 + 432) + 404LL);
      if (v85 > 0x0.0p+0f) {
        v84 = v85 / 0x1.e000000000000p+5f;
      }
      if (v84 <= 0x0.0p+0f || v84 >= 0x1.0000000000000p+0f) {
        result = ui_LayoutAccessor_SetPaneVisible_alt2((__int64)(v2 + 5),
                                                       "N_IconHold", 0),
        v91 = COERCE_AS(__typeof__(v91), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v92 = COERCE_AS(__typeof__(v92), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v93 = COERCE_AS(__typeof__(v93), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(__n128, "v3", "=w"));
      }
      else {
        v86 = *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 4536LL);
        v88 = *(_QWORD*)(v86 + 64);
        v87 = *(_QWORD*)(v86 + 72);
        LANES128(v101).n128_u64[0] = v88;
        LANES128(v101).n128_u64[1] = v87;
        v90 = *(_QWORD*)(v83 + 16);
        v89 = v83 + 16;
        *(long double*)v103 =
            ((long double (*)(__int64)) * (_QWORD*)(v90 + 16))(v89),
        v91 = COERCE_AS(__typeof__(v91), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v92 = COERCE_AS(__typeof__(v92), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v93 = COERCE_AS(__typeof__(v93), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(__n128, "v3", "=w"));
        *(_OWORD*)&v103[2] = v91;
        *(_OWORD*)&v103[4] = v92;
        *(_OWORD*)&v103[6] = v93;
        v102[0] = COERCE_FLOAT32X4_T(((long double (*)(__int64)) *
                                      (_QWORD*)(*(_QWORD*)v89 + 24LL))(v89)),
        v91 = COERCE_AS(__typeof__(v91), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v92 = COERCE_AS(__typeof__(v92), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v93 = COERCE_AS(__typeof__(v93), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(__n128, "v3", "=w"));
        v102[1] = v94;
        v102[2] = v95;
        v102[3] = v96;
        LANES64(v97).n64_u64[0] =
            LANES64_OF(GameRoutine_a6c440(&v101, (__int128*)v103, v102))
                .n64_u64[0],
        v91 = COERCE_AS(__typeof__(v91), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v92 = COERCE_AS(__typeof__(v92), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v93 = COERCE_AS(__typeof__(v93), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(__n128, "v3", "=w"));
        if (v98 <= 0x0.0p+0f) {
          LODWORD(v103[1]) = 0;
          *(float*)v103 = LANES64(v97).n64_f32[0] + -0x1.e000000000000p+9f;
          *((float*)v103 + 1) = 0x1.0e00000000000p+9f - LANES64(v97).n64_f32[1];
          ui_LayoutAccessor_SetPaneTranslate(v2 + 5, "N_IconHold",
                                             (__int64)v103),
              v91 = COERCE_AS(__typeof__(v91),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v92 = COERCE_AS(__typeof__(v92),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v93 = COERCE_AS(__typeof__(v93),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v94 = COERCE_AS(__typeof__(v94),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v95 = COERCE_AS(__typeof__(v95),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v96 = COERCE_AS(__typeof__(v96),
                              PSEUDO_REGISTER(__n128, "v3", "=w"));
        }
        if ((LayoutAccessor_1563280(v2 + 5, (__int64)"Hold", 1) & 1) == 0) {
          GameHr_1562680((__int64)(v2 + 5), (unsigned int*)"Hold", 0x0.0p+0f),
              v91 = COERCE_AS(__typeof__(v91),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v92 = COERCE_AS(__typeof__(v92),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v93 = COERCE_AS(__typeof__(v93),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v94 = COERCE_AS(__typeof__(v94),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v95 = COERCE_AS(__typeof__(v95),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v96 = COERCE_AS(__typeof__(v96),
                              PSEUDO_REGISTER(__n128, "v3", "=w"));
          ui_LayoutAccessor_SetPaneVisible_alt2((__int64)(v2 + 5), "N_IconHold",
                                                1),
              v91 = COERCE_AS(__typeof__(v91),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v92 = COERCE_AS(__typeof__(v92),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v93 = COERCE_AS(__typeof__(v93),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v94 = COERCE_AS(__typeof__(v94),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v95 = COERCE_AS(__typeof__(v95),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v96 = COERCE_AS(__typeof__(v96),
                              PSEUDO_REGISTER(__n128, "v3", "=w"));
        }
        v99 = LayoutAccessor_15638b0(v2 + 5, "Hold", 0),
        v91 = COERCE_AS(__typeof__(v91), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v92 = COERCE_AS(__typeof__(v92), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v93 = COERCE_AS(__typeof__(v93), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(__n128, "v3", "=w"));
        result = LayoutAccessor_15636c0((__int64)(v2 + 5), (__int64)"Hold", 1,
                                        v84 * v99),
        v91 = COERCE_AS(__typeof__(v91), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v92 = COERCE_AS(__typeof__(v92), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v93 = COERCE_AS(__typeof__(v93), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(__n128, "v3", "=w"));
      }
    }
  }
  v100 = (char*)v2 + 2532;
  do {
    if (*v100 != 0) {
      result = (__int64)game_UnitPool_Get(v100),
      v91 = COERCE_AS(__typeof__(v91), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v92 = COERCE_AS(__typeof__(v92), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v93 = COERCE_AS(__typeof__(v93), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(__n128, "v3", "=w"));
      if (result == 0 || *(_QWORD*)(result + 392) == 0) {
        *v100 = 0;
      }
    }
    v57 -= 2448;
    v100 += 2448;
  } while (v57 != 0);
  return result;
}

__int64 MapOnMapInfo_16012a0(__int64 a1)
{
  int v2;
  char* v3;
  char* v4;
  unsigned __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  char* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _BOOL4 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  char* v24;
  __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  char* v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  bool v36;
  __int64 result;
  __int64 v38;
  __int64 v39;
  char* v40;
  __int64 v41;
  char v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  _QWORD* v49;
  _QWORD* v50;
  _QWORD* v51;
  __int64 v52;
  _QWORD* v53;
  _QWORD* v54;
  __int64 v55;
  __int64 v56;
  _QWORD v57[2];
  char* v58;

  v56 = ui_LayoutAccessor_FindPane(a1 + 40, "N_Root");
  v2 = 0;
  v3 = nullptr;
  v4 = nullptr;
  v5 = 0;
  do {
    v6 = game_util_Format("L_UnitInfo%03d", v2);
    v7 = strlen(v6);
    if (v7 >= 0xFFFFFFFFFFFFFFF7LL) {
      GameRoutine_60a1d0();
    }
    v8 = v7;
    if (v7 >= 0x17) {
      if ((v7 | 7) == 0x17) {
        v10 = 26;
      }
      else {
        v10 = (v7 | 7) + 1;
      }
      v9 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v10, 16, 0);
      v57[1] = v8;
      v58 = (char*)v9;
      v57[0] = v10 | 1;
    LABEL_11:
      memmove(v9, v6, v8);
      goto LABEL_12;
    }
    v9 = (__int64)v57 + 1;
    LOBYTE(v57[0]) = 2 * v7;
    if (v7 != 0) {
      goto LABEL_11;
    }
  LABEL_12:
    *(_BYTE*)(v9 + v8) = 0;
    if ((v57[0] & 1) != 0) {
      v11 = v58;
    }
    else {
      v11 = (char*)v57 + 1;
    }
    v12 = (__int64*)GameRoutine_155fbe0(a1 + 40, v11);
    if ((GameRoutine_155ea30(v12) & 1) == 0) {
      goto LABEL_36;
    }
    if (v12[2] == 0) {
      goto LABEL_33;
    }
    v13 = v12[1];
    if (v13 == 0) {
      goto LABEL_33;
    }
    v14 = std___1___shared_weak_count_lock(v13);
    if (v14 != 0) {
      v15 = *v12;
      if (*v12 != 0) {
        LODWORD(v9) = *(unsigned __int8*)(v15 + 24);
        v16 = v15 + 152;
        if ((_DWORD)v9 == 0) {
          v16 = 0;
        }
        v17 = v16 != v12[2];
      }
      else {
        v17 = true;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (!v17) {
          goto LABEL_30;
        }
      }
      else {
        v19 = v14;
        (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
        std___1___shared_weak_count___release_weak(v19);
        if (!v17) {
        LABEL_30:
          if ((v9 & 1) == 0) {
            goto LABEL_33;
          }
          goto LABEL_31;
        }
      }
    }
    v18 = v12[1];
    if (v18 != 0 && *(_QWORD*)(v18 + 8) != -1) {
    LABEL_31:
      v20 = v12[2];
      if (v20 != 0) {
        v21 = *(_QWORD*)(v20 + 24);
        goto LABEL_34;
      }
    }
  LABEL_33:
    v21 = 0;
  LABEL_34:
    v22 = Pane_58df60(v56, v21);
    if ((unsigned __int64)v4 < v5) {
      *(_QWORD*)v4 = v21;
      v4 += 8;
    LABEL_36:
      if ((v57[0] & 1) == 0) {
        goto LABEL_2;
      }
    LABEL_37:
      if (v58 != nullptr) {
        v23 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v23 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v23, v58);
      }
      goto LABEL_2;
    }
    v24 = (char*)(v4 - v3);
    v25 = (v4 - v3) >> 3;
    v26 = v25 + 1;
    if ((unsigned __int64)(v25 + 1) >> 61 != 0) {
      GameRoutine_1601ed0(v22);
    }
    if ((__int64)(v5 - (_QWORD)v3) >> 2 > v26) {
      v26 = (__int64)(v5 - (_QWORD)v3) >> 2;
    }
    if (v5 - (unsigned __int64)v3 >= 0x7FFFFFFFFFFFFFF8LL) {
      v27 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v27 = v26;
    }
    if (v27 != 0) {
      if (v27 >> 61 != 0) {
        GameRoutine_60a210(v22);
      }
      v28 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v27, 16, 0);
    }
    else {
      v28 = 0;
    }
    v5 = v28 + 8 * v27;
    v29 = (char*)(v4 - v3);
    v30 = (__int64)&v24[v28 + -8 * v25];
    *(_QWORD*)&v24[v28] = v21;
    v4 = &v24[v28 + 8];
    memcpy(v30, v3, v29);
    if (v3 != nullptr) {
      v31 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v31 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v31, v3);
    }
    v3 = (char*)v30;
    if ((v57[0] & 1) != 0) {
      goto LABEL_37;
    }
  LABEL_2:
    ++v2;
  } while (v2 != 160);
  if ((v4 - v3) >> 3 < 129) {
    v35 = 0;
  LABEL_63:
    result = GameRoutine_16030a0(v3, v4, (v4 - v3) >> 3, 0, v35);
  }
  else {
    v32 = (v4 - v3) >> 3;
    v33 = GameData_212c060;
    while (1) {
      v34 = GameRoutine_1a09d20(8 * v32, v33);
      if (v34 != 0) {
        break;
      }
      v35 = v32 >> 1;
      v36 = v32 > 1;
      v32 >>= 1;
      if (!v36) {
        goto LABEL_63;
      }
    }
    v38 = v34;
    GameRoutine_16030a0(v3, v4, (v4 - v3) >> 3, v34, v32);
    v39 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v39 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v39, v38);
  }
  if (v3 != v4) {
    v40 = v3;
    do {
      v41 = *(_QWORD*)v40;
      v42 = *(_BYTE*)(*(_QWORD*)v40 + 88LL);
      *(_DWORD*)(v41 + 56) = 0;
      *(_BYTE*)(v41 + 88) = v42 | 0x10;
      v43 = *(_QWORD*)v40;
      v40 += 8;
      result = Pane_58dee0(v56, v43);
    } while (v40 != v4);
  }
  v44 = 0;
  v45 = a1 + 12349;
  v46 = a1 + 4980;
  v47 = a1 + 7428;
  do {
    v48 = a1 + v44;
    if (*(_BYTE*)(a1 + v44 + 2532) != 0 && (*(_BYTE*)(v48 + 2557) & 1) == 0) {
      *(_BYTE*)(v48 + 2532) = 0;
      v49 = (_QWORD*)(a1 + v44);
      v49[33] = 0;
      v49[34] = 0;
      v49[35] = 0;
      v49[36] = 0;
    }
    if (*(_BYTE*)(v46 + v44) != 0 && (*(_BYTE*)(v46 + v44 + 25) & 1) == 0) {
      v50 = (_QWORD*)(a1 + v44);
      *(_BYTE*)(v46 + v44) = 0;
      v50[339] = 0;
      v50[340] = 0;
      v50[341] = 0;
      v50[342] = 0;
    }
    if (*(_BYTE*)(v47 + v44) != 0 && (*(_BYTE*)(v47 + v44 + 25) & 1) == 0) {
      v51 = (_QWORD*)(a1 + v44);
      *(_BYTE*)(v47 + v44) = 0;
      v51[645] = 0;
      v51[646] = 0;
      v51[647] = 0;
      v51[648] = 0;
    }
    v52 = v47 + v44;
    if (*(_BYTE*)(v47 + v44 + 2448) != 0 && (*(_BYTE*)(v52 + 2473) & 1) == 0) {
      *(_BYTE*)(v52 + 2448) = 0;
      v53 = (_QWORD*)(a1 + v44);
      v53[951] = 0;
      v53[952] = 0;
      v53[953] = 0;
      v53[954] = 0;
    }
    if (*(_BYTE*)(v45 + v44 - 25) != 0 && (*(_BYTE*)(v45 + v44) & 1) == 0) {
      *(_BYTE*)(v45 + v44 - 25) = 0;
      v54 = (_QWORD*)(a1 + v44);
      v54[1257] = 0;
      v54[1258] = 0;
      v54[1259] = 0;
      v54[1260] = 0;
    }
    v44 += 12240;
  } while (v44 != 391680);
  if (v3 != nullptr) {
    v55 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v55 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v55, v3);
  }
  return result;
}

__int64 MapOnMapInfo_16017e0(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;

  if (a2 != 0) {
    v2 = result + 160;
    v3 = -7504;
    v4 = -5056;
    v5 = 0;
    v6 = 9876;
    v7 = 4980;
    do {
      v8 = *(_QWORD*)(result + v5 + 168);
      if (v8 != 0 && *(_QWORD*)(v8 + 8) != -1 &&
          *(_BYTE*)(result + v5 + 2532) != 0 &&
          *(unsigned __int8*)(result + v5 + 2532) ==
              *(unsigned __int8*)(a2 + 2088)) {
        v13 = result + v5 + 160;
        return GameRoutine_15fc820(v13, result + 391856);
      }
      v10 = *(_QWORD*)(result + v5 + 2616);
      if (v10 != 0 && *(_QWORD*)(v10 + 8) != -1 &&
          *(_BYTE*)(result + v7) != 0 &&
          *(unsigned __int8*)(result + v7) == *(unsigned __int8*)(a2 + 2088)) {
        v13 = result + v5 + 2608;
        return GameRoutine_15fc820(v13, result + 391856);
      }
      v11 = *(_QWORD*)(result + v5 + 5064);
      if (v11 != 0 && *(_QWORD*)(v11 + 8) != -1 &&
          *(_BYTE*)(result + v7 + 2448) != 0 &&
          *(unsigned __int8*)(result + v7 + 2448) ==
              *(unsigned __int8*)(a2 + 2088)) {
        v13 = result - v4;
        return GameRoutine_15fc820(v13, result + 391856);
      }
      v12 = *(_QWORD*)(result + v5 + 7512);
      if (v12 != 0 && *(_QWORD*)(v12 + 8) != -1 &&
          *(_BYTE*)(result + v6) != 0 &&
          *(unsigned __int8*)(result + v6) == *(unsigned __int8*)(a2 + 2088)) {
        v13 = result - v3;
        return GameRoutine_15fc820(v13, result + 391856);
      }
      v5 += 9792;
      v3 -= 9792;
      v6 += 9792;
      v4 -= 9792;
      v7 += 9792;
    } while (v5 != 391680);
    v14 = -9952;
    v15 = -7504;
    v16 = -5056;
    v17 = 12324;
    v18 = 0;
    v19 = 7428;
    v20 = 4980;
    while (1) {
      v21 = *(_QWORD*)(result + v18 + 168);
      if (v21 != 0 && *(_QWORD*)(v21 + 8) != -1 &&
          *(_BYTE*)(result + v18 + 2532) == 0) {
        v13 = result + v18 + 160;
        v26 = result;
        goto LABEL_50;
      }
      v22 = *(_QWORD*)(result + v18 + 2616);
      if (v22 != 0 && *(_QWORD*)(v22 + 8) != -1 &&
          *(_BYTE*)(result + v20) == 0) {
        v26 = result;
        v13 = result + v18 + 2608;
        goto LABEL_50;
      }
      v23 = *(_QWORD*)(result + v18 + 5064);
      if (v23 != 0 && *(_QWORD*)(v23 + 8) != -1 &&
          *(_BYTE*)(result + v19) == 0) {
        v26 = result;
        v13 = result - v16;
        goto LABEL_50;
      }
      v24 = *(_QWORD*)(result + v18 + 7512);
      if (v24 != 0 && *(_QWORD*)(v24 + 8) != -1 &&
          *(_BYTE*)(result + v19 + 2448) == 0) {
        break;
      }
      v25 = *(_QWORD*)(result + v18 + 9960);
      if (v25 != 0 && *(_QWORD*)(v25 + 8) != -1 &&
          *(_BYTE*)(result + v17) == 0) {
        v26 = result;
        v13 = result - v14;
        goto LABEL_50;
      }
      v18 += 12240;
      v14 -= 12240;
      v17 += 12240;
      v15 -= 12240;
      v16 -= 12240;
      v19 += 12240;
      v20 += 12240;
      if (v18 == 391680) {
        v27 = result;
        v28 = a2;
        GameRoutine_15ffb10(result);
        a2 = v28;
        v26 = v27;
        v13 = v2 + 2448LL * *(int*)(v27 + 391840) - 2448;
        goto LABEL_50;
      }
    }
    v26 = result;
    v13 = result - v15;
  LABEL_50:
    GameRoutine_15fbc40(v13, a2);
    result = v26;
    return GameRoutine_15fc820(v13, result + 391856);
  }
  return result;
}

__int64 MapOnMapInfo_Unknown4(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v13;
  __int64 v14;
  _BYTE v15[32];

  v1 = result + 389120;
  if ((*(_BYTE*)(result + 391878) & 1) == 0) {
    if ((*(_DWORD*)(result + 391872) & 0x80000000) == 0) {
      *(_DWORD*)(result + 391872) = -1;
      return result;
    }
    v2 = *(_QWORD*)(result + 144);
    v3 = game_gameui_MenuAnimator_instance_;
    if (v2 == -1) {
      if (game_gameui_MenuAnimator_instance_ != 0) {
      LABEL_37:
        v13 = result;
        sprintf(v15, "%s%s", "Alpha", "Out");
        v14 = GameRoutine_156af20(v3, 4, 1, v13 + 40, 0, v15);
        result = v13;
      LABEL_39:
        *(_QWORD*)(result + 152) = v14;
        *(_BYTE*)(v1 + 2758) = 1;
        return result;
      }
    }
    else if (game_gameui_MenuAnimator_instance_ != 0) {
      if (v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 272) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 504) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 736) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 968) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1200) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1432) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1664) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1896) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 2128) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 2360)) {
        *(_BYTE*)(result + 391876) = 1;
        return result;
      }
      goto LABEL_37;
    }
    v14 = -1;
    goto LABEL_39;
  }
  return result;
}

__int64 MapOnMapInfo_1601bf0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v13;
  __int64 v14;
  _BYTE v15[32];

  v1 = result + 389120;
  if ((*(_BYTE*)(result + 391878) & 1) == 0) {
    if ((*(_DWORD*)(result + 391872) & 0x80000000) == 0) {
      *(_DWORD*)(result + 391872) = -1;
      return result;
    }
    v2 = *(_QWORD*)(result + 144);
    v3 = game_gameui_MenuAnimator_instance_;
    if (v2 == -1) {
      if (game_gameui_MenuAnimator_instance_ != 0) {
      LABEL_37:
        v13 = result;
        sprintf(v15, "%s%s", "Alpha", "Out");
        v14 = GameRoutine_156af20(v3, 4, 1, v13 + 40, 0, v15);
        result = v13;
      LABEL_39:
        *(_QWORD*)(result + 152) = v14;
        *(_BYTE*)(v1 + 2758) = 1;
        return result;
      }
    }
    else if (game_gameui_MenuAnimator_instance_ != 0) {
      if (v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 272) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 504) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 736) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 968) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1200) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1432) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1664) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1896) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 2128) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 2360)) {
        *(_BYTE*)(result + 391876) = 1;
        return result;
      }
      goto LABEL_37;
    }
    v14 = -1;
    goto LABEL_39;
  }
  return result;
}

__int64 MapOnMapInfo_1601d20(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v13;
  __int64 v14;
  _BYTE v15[32];

  v1 = result + 389120;
  if ((*(_BYTE*)(result + 391870) & 1) == 0) {
    if ((*(_DWORD*)(result + 391864) & 0x80000000) == 0) {
      *(_DWORD*)(result + 391864) = -1;
      return result;
    }
    v2 = *(_QWORD*)(result + 136);
    v3 = game_gameui_MenuAnimator_instance_;
    if (v2 == -1) {
      if (game_gameui_MenuAnimator_instance_ != 0) {
      LABEL_37:
        v13 = result;
        sprintf(v15, "%s%s", "Alpha", "Out");
        v14 = GameRoutine_156af20(v3, 4, 1, v13 + 32, 0, v15);
        result = v13;
      LABEL_39:
        *(_QWORD*)(result + 144) = v14;
        *(_BYTE*)(v1 + 2750) = 1;
        return result;
      }
    }
    else if (game_gameui_MenuAnimator_instance_ != 0) {
      if (v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 272) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 504) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 736) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 968) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1200) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1432) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1664) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1896) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 2128) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 2360)) {
        *(_BYTE*)(result + 391868) = 1;
        return result;
      }
      goto LABEL_37;
    }
    v14 = -1;
    goto LABEL_39;
  }
  return result;
}

__int64 MapOnMapInfo_Unknown5(__int64 result)
{
  *(_DWORD*)(result + 391872) = 4;
  return result;
}

__int64 MapOnMapInfo_DeletingDestructor(__int64 result)
{
  *(_DWORD*)(result + 391864) = 4;
  return result;
}

_QWORD* game_map_MapOnMapInfo_IconBlink_Update_lambda0_Invoke(__int64 a1,
                                                              _DWORD* a2)
{
  _QWORD* result;
  _QWORD* v4;
  __int64 v5;
  unsigned int v6;

  result =
      *(_QWORD**)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a2 & 0xFFF));
  if (result != nullptr) {
    v4 = *(_QWORD**)(a1 + 8);
    if (((1 << *((_BYTE*)result + 104)) & 0x2080) != 0) {
      v5 = result[110];
      if (v5 != 0) {
        v6 = *((unsigned __int16*)result + 8);
        result = (_QWORD*)Manager_136ac50(ui_Manager_instance_ + 1264, 7, v5);
        if (result != nullptr) {
          return GameRoutine_15fba20(v4, v6, (__int64)result);
        }
      }
    }
    else if (*((_BYTE*)result + 104) == 0 && *((_BYTE*)result + 250) == 0) {
      v6 = *((unsigned __int16*)result + 8);
      result = (_QWORD*)GameRoutine_1842ce0();
      if (result != nullptr) {
        return GameRoutine_15fba20(v4, v6, (__int64)result);
      }
    }
  }
  return result;
}

_QWORD* game_map_MapOnMapInfo_Info_SetBattleFactor_lambda0_Invoke_1602160(
    __int64 a1, _DWORD* a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  _QWORD* result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD v12[4];
  _QWORD* v13;

  v3 = *(_QWORD*)(a1 + 16);
  v4 = a1 + 8;
  result = v12;
  v6 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a2 & 0xFFF));
  v12[2] = v3;
  v7 = *(_QWORD*)(v6 + 24);
  v13 = v12;
  v12[0] = GameData_2065ce0;
  v12[1] = v4;
  v8 = *(_QWORD*)(v7 + 352);
  if ((int)((unsigned __int64)(*(_QWORD*)(v7 + 360) - v8) >> 2) < 1) {
    goto LABEL_8;
  }
  v9 = 0;
  v10 = 0;
  do {
    if (v13 == nullptr) {
      GameRoutine_60a310(0, a2);
    }
    (*(void (**)(_QWORD*, __int64))(*v13 + 48LL))(v13, v8 + v9);
    v8 = *(_QWORD*)(v7 + 352);
    ++v10;
    v9 += 4;
  } while (v10 < (int)((unsigned __int64)(*(_QWORD*)(v7 + 360) - v8) >> 2));
  result = v13;
  if (v13 == v12) {
  LABEL_8:
    v11 = 32;
  }
  else {
    if (v13 == nullptr) {
      return result;
    }
    v11 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(_QWORD*, _DWORD*, __int64))(*result + v11))(
      result, a2, a3);
}

void game_map_MapOnMapInfo_Info_SetBattleFactor_lambda0_Invoke_1602350(
    __int64 a1, unsigned int* a2)
{
  unsigned __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  __int64 v10;

  v2 = *a2;
  v3 = **(_QWORD**)(a1 + 8);
  v4 = *(_QWORD*)(v3 + 1744);
  if (((v2 >> 5) & 0x7F) + 1 <= (*(_QWORD*)(v3 + 1752) - v4) >> 2 &&
      ((*(_DWORD*)(v4 + 4 * ((v2 >> 5) & 0x7F)) >> v2) & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 16);
    if (game_HasActiveSkill_843420_alt1(a2, v3 + 1744)) {
      v7 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                      8LL * (*a2 & 0xFFF));
      if (v7 != 0) {
        if (((1 << *(_BYTE*)(v7 + 104)) & 0x2080) != 0) {
          v8 = *(_QWORD*)(v7 + 880);
          if (v8 != 0) {
            v9 = *(unsigned __int16*)(v7 + 16);
            v10 = Manager_136ac50_alt1(ui_Manager_instance_ + 1264, 7, v8);
            if (v10 != 0) {
            LABEL_8:
              GameRoutine_15fba20_alt1((_QWORD*)(v5 + 16), v9, v10);
            }
          }
        }
        else if (*(_BYTE*)(v7 + 104) == 0 && *(_BYTE*)(v7 + 250) == 0) {
          v9 = *(unsigned __int16*)(v7 + 16);
          v10 = GameRoutine_1842ce0_alt1(v7);
          if (v10 != 0) {
            goto LABEL_8;
          }
        }
      }
    }
  }
}

_QWORD* game_map_MapOnMapInfo_Info_SetBattleFactor_lambda1_Invoke_1602540(
    __int64 a1, _DWORD* a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  _QWORD* result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD v12[4];
  _QWORD* v13;

  v3 = *(_QWORD*)(a1 + 16);
  v4 = a1 + 8;
  result = v12;
  v6 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a2 & 0xFFF));
  v12[2] = v3;
  v7 = *(_QWORD*)(v6 + 24);
  v13 = v12;
  v12[0] = GameData_2065de0;
  v12[1] = v4;
  v8 = *(_QWORD*)(v7 + 352);
  if ((int)((unsigned __int64)(*(_QWORD*)(v7 + 360) - v8) >> 2) < 1) {
    goto LABEL_8;
  }
  v9 = 0;
  v10 = 0;
  do {
    if (v13 == nullptr) {
      GameRoutine_60a310(0, a2);
    }
    (*(void (**)(_QWORD*, __int64))(*v13 + 48LL))(v13, v8 + v9);
    v8 = *(_QWORD*)(v7 + 352);
    ++v10;
    v9 += 4;
  } while (v10 < (int)((unsigned __int64)(*(_QWORD*)(v7 + 360) - v8) >> 2));
  result = v13;
  if (v13 == v12) {
  LABEL_8:
    v11 = 32;
  }
  else {
    if (v13 == nullptr) {
      return result;
    }
    v11 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(_QWORD*, _DWORD*, __int64))(*result + v11))(
      result, a2, a3);
}

__int64 game_map_MapOnMapInfo_Info_SetBattleFactor_lambda1_Invoke_1602730(
    __int64 result, _DWORD* a2)
{
  unsigned __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v7;
  unsigned int v8;

  v2 = (unsigned int)*a2;
  v3 = **(_QWORD**)(result + 8);
  v4 = *(_QWORD*)(v3 + 1744);
  if (((v2 >> 5) & 0x7F) + 1 <= (*(_QWORD*)(v3 + 1752) - v4) >> 2 &&
      ((*(_DWORD*)(v4 + 4 * ((v2 >> 5) & 0x7F)) >> v2) & 1) != 0) {
    v5 = *(_QWORD*)(result + 16);
    result = game_HasActiveSkill_843420(a2, v3 + 1744);
    if ((result & 1) != 0) {
      result = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                          8LL * (*a2 & 0xFFF));
      if (result != 0) {
        if (((1 << *(_BYTE*)(result + 104)) & 0x2080) != 0) {
          v7 = *(_QWORD*)(result + 880);
          if (v7 != 0) {
            v8 = *(unsigned __int16*)(result + 16);
            result = Manager_136ac50(ui_Manager_instance_ + 1264, 7, v7);
            if (result != 0) {
              return (__int64)GameRoutine_15fba20((_QWORD*)(v5 + 16), v8,
                                                  result);
            }
          }
        }
        else if (*(_BYTE*)(result + 104) == 0 && *(_BYTE*)(result + 250) == 0) {
          v8 = *(unsigned __int16*)(result + 16);
          result = GameRoutine_1842ce0();
          if (result != 0) {
            return (__int64)GameRoutine_15fba20((_QWORD*)(v5 + 16), v8, result);
          }
        }
      }
    }
  }
  return result;
}

_QWORD* game_map_MapOnMapInfo_Info_SetBattleFactor_lambda2_Invoke_1602920(
    __int64 a1, _DWORD* a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  _QWORD* result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD v12[4];
  _QWORD* v13;

  v3 = *(_QWORD*)(a1 + 16);
  v4 = a1 + 8;
  result = v12;
  v6 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a2 & 0xFFF));
  v12[2] = v3;
  v7 = *(_QWORD*)(v6 + 24);
  v13 = v12;
  v12[0] = GameData_2065ee0;
  v12[1] = v4;
  v8 = *(_QWORD*)(v7 + 352);
  if ((int)((unsigned __int64)(*(_QWORD*)(v7 + 360) - v8) >> 2) < 1) {
    goto LABEL_8;
  }
  v9 = 0;
  v10 = 0;
  do {
    if (v13 == nullptr) {
      GameRoutine_60a310(0, a2);
    }
    (*(void (**)(_QWORD*, __int64))(*v13 + 48LL))(v13, v8 + v9);
    v8 = *(_QWORD*)(v7 + 352);
    ++v10;
    v9 += 4;
  } while (v10 < (int)((unsigned __int64)(*(_QWORD*)(v7 + 360) - v8) >> 2));
  result = v13;
  if (v13 == v12) {
  LABEL_8:
    v11 = 32;
  }
  else {
    if (v13 == nullptr) {
      return result;
    }
    v11 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(_QWORD*, _DWORD*, __int64))(*result + v11))(
      result, a2, a3);
}

__int64 game_map_MapOnMapInfo_Info_SetBattleFactor_lambda2_Invoke_1602b10(
    __int64 result, _DWORD* a2)
{
  unsigned __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v7;
  unsigned int v8;

  v2 = (unsigned int)*a2;
  v3 = **(_QWORD**)(result + 8);
  v4 = *(_QWORD*)(v3 + 1744);
  if (((v2 >> 5) & 0x7F) + 1 <= (*(_QWORD*)(v3 + 1752) - v4) >> 2 &&
      ((*(_DWORD*)(v4 + 4 * ((v2 >> 5) & 0x7F)) >> v2) & 1) != 0) {
    v5 = *(_QWORD*)(result + 16);
    result = game_HasActiveSkill_843420(a2, v3 + 1744);
    if ((result & 1) != 0) {
      result = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                          8LL * (*a2 & 0xFFF));
      if (result != 0) {
        if (((1 << *(_BYTE*)(result + 104)) & 0x2080) != 0) {
          v7 = *(_QWORD*)(result + 880);
          if (v7 != 0) {
            v8 = *(unsigned __int16*)(result + 16);
            result = Manager_136ac50(ui_Manager_instance_ + 1264, 7, v7);
            if (result != 0) {
              return (__int64)GameRoutine_15fba20((_QWORD*)(v5 + 16), v8,
                                                  result);
            }
          }
        }
        else if (*(_BYTE*)(result + 104) == 0 && *(_BYTE*)(result + 250) == 0) {
          v8 = *(unsigned __int16*)(result + 16);
          result = GameRoutine_1842ce0();
          if (result != 0) {
            return (__int64)GameRoutine_15fba20((_QWORD*)(v5 + 16), v8, result);
          }
        }
      }
    }
  }
  return result;
}

_QWORD* game_map_MapOnMapInfo_Info_SetStatusIcon_lambda1_Invoke(__int64 a1,
                                                                _DWORD* a2)
{
  _QWORD* result;
  __int64 v4;
  __int64 v5;
  unsigned int v6;

  result =
      *(_QWORD**)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a2 & 0xFFF));
  if (result != nullptr) {
    v4 = *(_QWORD*)(a1 + 8);
    if (((1 << *((_BYTE*)result + 104)) & 0x2080) != 0) {
      v5 = result[110];
      if (v5 != 0) {
        v6 = *((unsigned __int16*)result + 8);
        result = (_QWORD*)Manager_136ac50(ui_Manager_instance_ + 1264, 7, v5);
        if (result != nullptr) {
          return GameRoutine_15fba20((_QWORD*)(v4 + 56), v6, (__int64)result);
        }
      }
    }
    else if (*((_BYTE*)result + 104) == 0 && *((_BYTE*)result + 250) == 0) {
      v6 = *((unsigned __int16*)result + 8);
      result = (_QWORD*)GameRoutine_1842ce0();
      if (result != nullptr) {
        return GameRoutine_15fba20((_QWORD*)(v4 + 56), v6, (__int64)result);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
