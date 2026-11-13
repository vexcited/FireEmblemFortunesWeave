#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1009aa0(_QWORD);
__int64 GameRoutine_82e7c0(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_menu_BasicMenu_Unknown16de2e0(void);
extern __int64 GameData_20b1428;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212e008[9];
extern char GameData_2262bfc;
__int64 ProcUnitSelectMenu_Unknown93(__int64 result);
__int64 ProcUnitSelectMenu_Unknown102(__int64 a1);
__attribute__((swiftcall)) void GameRoutine_1560070(PSEUDO_X8, _QWORD, _QWORD);
__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_156af20(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 ProcInOutAnim_173fac0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 sprintf(_QWORD, const char*, ...);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
extern __int64 (*game_facility_anonymous_UnitMenuItem_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_gameui_MenuAnimator_instance_;
extern char GameData_1a9f09e;
void __attribute__((noreturn)) GameRoutine_60a210(void);
void __attribute__((noreturn)) GameRoutine_874500(void);
__int64 ProcUnitSelectMenu_Unknown58_alt1(_QWORD* a1, __int64* a2) __asm__(
    "ProcUnitSelectMenu_Unknown58");
bool game_facility_anonymous_ProcUnitSelectMenu_OnUnbindImpl_closure_Invoke(
    __int64 a1, __int64 a2);
__int64
game_facility_anonymous_ProcUnitSelectMenu_AddItemList_closure_Invoke_alt1(
    __int64 result,
    unsigned __int8* a2) __asm__("game_facility_anonymous_ProcUnitSelectMenu_"
                                 "AddItemList_closure_Invoke");
__int64 GameConst_7f97f0(__int64);
__int64 GameRoutine_14a10d0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_14a3920(long double);
__int64 GameVariable_82e3a0(_QWORD, long double);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 Manager_bc6460(_QWORD, _QWORD, _QWORD);
__int64 _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(__int64 result, char,
                                                    unsigned __int8,
                                                    unsigned __int8);
__int64 game_IsVibrationEnabled(_QWORD);
__int64 game_IsVibrationEnabled_alt1(_BYTE*) __asm__("game_IsVibrationEnabled");
__int64 game_menu_BasicMenu_Unknown96(__int64 result);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD*) __asm__("snd_Fade_Destroy_Fade");
__int64 snd_startSlotVolume_100b50(_QWORD, _QWORD, double);
__int64
snd_startSlotVolume_100b50_alt1(int*, __int64,
                                float) __asm__("snd_startSlotVolume_100b50");
__n128 snd_Fade_Fade_10c830(_QWORD, double);
__n128 snd_fnd_calcCrc32(_QWORD, _QWORD);
__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
__n128 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c548;
extern __int64 (*GameData_20b1af0[])();
extern __int64 (*game_ProcInst_Unknown04_1722970_ptr[])();
extern __int64* eft_g_effectSystem_ptr[3];
extern __int64 game_g_game_setting_ptr;
unsigned __int8* snd_fnd_calcCrc32_alt1(unsigned __int8* result,
                                        int) __asm__("snd_fnd_calcCrc32");
void __attribute__((noreturn)) GameRoutine_60a310();
void snd_Fade_Fade_10c830_alt1(__int64, float) __asm__("snd_Fade_Fade_10c830");
__int64 ProcUnitSelectMenu_Unknown84(__int64 a1);
__int64 game_facility_anonymous_ProcUnitSelectMenu_OnUnbindImpl(__int64 a1);
__int64 game_facility_anonymous_ProcUnitSelectMenu_AddItemList(__int64 a1);
_QWORD* GameHr_14a10d0(_QWORD*, __int64, __int64, __int64);
__int64* GameVariable_82e7c0(unsigned __int8, int);
__int64* Manager_bc6460_alt1(_QWORD*, __int64, char) __asm__("Manager_bc6460");
unsigned __int128 Manager_bc6460_alt1_pair(_QWORD*, __int64,
                                           char) __asm__("Manager_bc6460");
__int64 GameVariable_82e3a0_alt1(int) __asm__("GameVariable_82e3a0");
__int64
LayoutAccessor_1562cf0_alt1(__int64 result,
                            const char*) __asm__("LayoutAccessor_1562cf0");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_14a3920(__int64 result);
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 ui_LayoutAccessor_SetPaneVisible_alt1(
    __int64 result, __int64, char) __asm__("ui_LayoutAccessor_SetPaneVisible");
void BasicMenuCursor_16e0c00_alt1(_QWORD*,
                                  __int64) __asm__("BasicMenuCursor_16e0c00");
void game_facility_anonymous_ProcUnitSelectMenu_AddItemList_closure_Invoke(
    __int64 a1, unsigned __int8* a2);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 GameHr_173f310(__int64, __int64*, char, __int64, __int64, float);
__int64 ProcInOutAnim_173fac0_alt1(__int64,
                                   char) __asm__("ProcInOutAnim_173fac0");
__int64 ProcTransitionAnim_156af20(__int64, int, int, __int64*, const char*,
                                   const char*);
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64 ui_LayoutAccessor_FindTextBox_alt1(__int64*, __int64) __asm__(
    "ui_LayoutAccessor_FindTextBox");
char* GameRoutine_a4dbe0(__int64, const char*, char);
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_212db20;
extern char* GameData_20b1da0[3];
int sprintf_alt1(__int64, const char*, ...) __asm__("sprintf");
unsigned __int64 LayoutAccessor_1562b50(__int64*, const char*);
void GameRoutine_156c5d0_alt1(__int64, __int64,
                              char) __asm__("GameRoutine_156c5d0");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_874500_alt1() __asm__("GameRoutine_874500");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 ProcUnitSelectMenu_Unknown57(__int64* a1, __int64* a2);
void ProcUnitSelectMenu_Unknown58(__int64* a1, __int64* a2);
__int64 GameHr_14a1390(__int64*, char);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 snd_findVoice(__int64);
__int64 snd_fnd_WeakHandle_isValid(__int64*);
__int64 snd_stop_ffc40(__int64*, __int64);
extern __int64 GameData_212c610;
extern __int64 GameData_2131c18[55];
void snd_Fade_Fade_10c910(__int64, int);
__int64 ProcUnitSelectMenu_Unknown92(_QWORD* a1);

__int64 ProcUnitSelectMenu_Unknown57(__int64* a1, __int64* a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  const char* v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64* v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  signed __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  signed __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64* v32;
  __int64 v33;
  char* v34;
  __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 result;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  const char* v44;
  _QWORD v45[2];
  struct {
    __int64 v46;
    __int64 v47;
  } v46_;
  struct {
    __int64* v48;
    _QWORD* v49;
    unsigned __int64 v50;
    unsigned __int64 v51;
    __int64** v52;
    __int64 v53;
    __int64 v54;
    __int64 v55;
    __int64 v56;
    __int64 v57;
    __int64 v58;
    __int64 v59;
    __int64 v60;
    __int64 v61;
    __int64 v62;
    __int64 v63;
    __int64 v64;
    __int64 v65;
  } v48_;

  (*(void (**)(__int64*))(a1[132] + 96))(a1 + 132);
  if (a1[133] == 0) {
    LayoutAccessor_1560070((void*)(&v46_.v46), a1 + 106, "L_Bg");
    v48_.v48 = (__int64*)"In";
    v48_.v49 = (_QWORD*)(((_UNKNOWN*)0x0LL) + 2);
    v45[0] = "Out";
    v45[1] = 3;
    a1[133] = GameHr_173f310((__int64)a1, &v46_.v46, 0, (__int64)&v48_.v48,
                             (__int64)v45, -0x1.0000000000000p+0f);
    if (v46_.v47 != 0) {
      std___1___shared_weak_count___release_weak_alt2(v46_.v47);
    }
    v6 = game_gameui_MenuAnimator_instance_;
    if (game_gameui_MenuAnimator_instance_ == 0) {
      goto LABEL_11;
    }
    v7 = "In";
    if ((LayoutAccessor_1562b50(a1 + 119, "In") & 1) == 0) {
      v7 = "Open";
    }
    if ((LayoutAccessor_1562b50(a1 + 119, v7) & 1) != 0) {
      v8 = ProcTransitionAnim_156af20(v6, 7, 2, a1 + 119, nullptr, v7);
    }
    else {
    LABEL_11:
      v8 = -1;
    }
    v10 = (__int64*)a2[1];
    v9 = a2[2];
    if ((unsigned __int64)v10 >= v9) {
      v22 = *a2;
      v23 = (signed __int64)v10 - *a2;
      v24 = (v23 >> 3) + 1;
      if (v24 >> 61 != 0) {
        goto LABEL_76;
      }
      v25 = v9 - v22;
      if (v25 >> 2 > v24) {
        v24 = v25 >> 2;
      }
      if ((unsigned __int64)v25 >= 0x7FFFFFFFFFFFFFF8LL) {
        v26 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v26 = v24;
      }
      if (v26 != 0) {
        if (v26 >> 61 != 0) {
          goto LABEL_77;
        }
        v27 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v26, 16, 0);
      }
      else {
        v27 = 0;
      }
      v37 = v27 + 8 * v26;
      v38 = v27 + v23 - 8 * (v23 >> 3);
      *(_QWORD*)(v27 + v23) = v8;
      v11 = v27 + v23 + 8;
      memcpy_alt1(v38, v22, v23);
      *a2 = v38;
      a2[1] = v11;
      a2[2] = v37;
      if (v22 != 0) {
        v39 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v39 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v39, v22);
      }
    }
    else {
      *v10 = v8;
      v11 = (__int64)(v10 + 1);
    }
    a2[1] = v11;
    goto LABEL_57;
  }
  v4 = game_gameui_MenuAnimator_instance_;
  if (game_gameui_MenuAnimator_instance_ != 0) {
    sprintf_alt1((__int64)&v48_.v48, "%s%s", "Left", "In");
    v5 = ProcTransitionAnim_156af20(v4, 2, 0, a1 + 119, nullptr,
                                    (const char*)&v48_.v48);
  }
  else {
    v5 = -1;
  }
  v13 = (__int64*)a2[1];
  v12 = a2[2];
  if ((unsigned __int64)v13 >= v12) {
    v15 = *a2;
    v16 = (signed __int64)v13 - *a2;
    v17 = (v16 >> 3) + 1;
    if (v17 >> 61 == 0) {
      v18 = v12 - v15;
      v19 = fw_memory_g_heap_manager_ptr;
      if (v18 >> 2 > v17) {
        v17 = v18 >> 2;
      }
      if ((unsigned __int64)v18 >= 0x7FFFFFFFFFFFFFF8LL) {
        v20 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v20 = v17;
      }
      if (v20 == 0) {
        v21 = 0;
      LABEL_36:
        v28 = v21 + 8 * v20;
        v29 = v21 + v16 - 8 * (v16 >> 3);
        *(_QWORD*)(v21 + v16) = v5;
        v14 = v21 + v16 + 8;
        memcpy_alt1(v29, v15, v16);
        *a2 = v29;
        a2[1] = v14;
        a2[2] = v28;
        if (v15 != 0) {
          v30 = 128;
          if (*(_QWORD*)(*(_QWORD*)v19 + 200LL) == 0) {
            v30 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v19 + v30, v15);
        }
        goto LABEL_40;
      }
      if (v20 >> 61 == 0) {
        v21 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v20, 16, 0);
        goto LABEL_36;
      }
    LABEL_77:
      GameRoutine_60a210_alt1();
    }
  LABEL_76:
    GameRoutine_874500_alt1();
  }
  *v13 = v5;
  v14 = (__int64)(v13 + 1);
LABEL_40:
  a2[1] = v14;
  LayoutAccessor_1560070((void*)(&v48_.v48), a1 + 106, "L_Bg");
  if (v48_.v49 == nullptr) {
    goto LABEL_57;
  }
  v31 = std___1___shared_weak_count_lock_alt1((__int64)v48_.v49);
  v32 = v48_.v48;
  if (v48_.v49 != nullptr) {
    std___1___shared_weak_count___release_weak_alt2((__int64)v48_.v49);
  }
  if (v31 != 0 && v32 != nullptr) {
    v48_.v53 = -1;
    v48_.v54 = -1;
    v48_.v55 = -1;
    v48_.v56 = -1;
    v33 = *msg_MessageManager_instance__ptr[0];
    v48_.v57 = -1;
    v48_.v58 = -1;
    v48_.v59 = -1;
    v48_.v60 = -1;
    v48_.v61 = -1;
    v48_.v62 = -1;
    v48_.v63 = -1;
    v48_.v64 = -1;
    v48_.v48 = GameData_212e348 + 2;
    v48_.v49 = (_QWORD*)0xFFFF0001FFFF0000LL;
    v48_.v50 = 0xFFFF0004FFFF0002LL;
    v48_.v51 = 0xFFFF0006FFFF0005LL;
    v48_.v65 = 8;
    v48_.v52 = (__int64**)0xFFFF0008FFFF0007LL;
    v34 = GameRoutine_a4dbe0(v33, "MID_Menu_UnitSelect_Help", 0);
    if (v34 != nullptr) {
      v35 = (__int64)v34;
      v36 = ui_LayoutAccessor_FindTextBox_alt1(v32, (__int64)"T_Help");
      if (v36 != 0) {
        GameRoutine_156c5d0_alt1(v36, v35, 0);
      }
    }
  }
  else if (v31 == 0) {
    goto LABEL_57;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
    std___1___shared_weak_count___release_weak_alt2(v31);
  }
LABEL_57:
  LayoutAccessor_1560070((void*)(&v48_.v48), a1 + 106, "L_Bg");
  result = (__int64)v48_.v49;
  if (v48_.v49 == nullptr) {
    return result;
  }
  v41 = std___1___shared_weak_count_lock_alt1((__int64)v48_.v49);
  v42 = (__int64)v48_.v48;
  result = (__int64)v48_.v49;
  if (v48_.v49 != nullptr) {
    result = std___1___shared_weak_count___release_weak_alt2((__int64)v48_.v49);
  }
  if (v41 == 0 || v42 == 0) {
    if (v41 == 0) {
      return result;
    }
    goto LABEL_73;
  }
  LOBYTE(v45[0]) = 3;
  v48_.v51 = *(_QWORD*)(game_GameModeData_instance_ + 176);
  v48_.v52 = &v48_.v48;
  v48_.v48 = (__int64*)(GameData_212db20 + 16);
  v48_.v49 = v45;
  LODWORD(v48_.v50) = 2;
  GameConst_7f97f0((__int64)&v48_.v48);
  if (v48_.v52 == &v48_.v48) {
    v43 = 4;
    goto LABEL_68;
  }
  if (v48_.v52 != nullptr) {
    v43 = 5;
  LABEL_68:
    ((void (*)(void*))(*v48_.v52)[v43])(v48_.v52);
  }
  if (LOBYTE(v45[0]) > 2uLL) {
    v44 = "ClearAllOff";
  }
  else {
    v44 = GameData_20b1da0[LOBYTE(v45[0])];
  }
  result = LayoutAccessor_1562cf0_alt1(v42, v44);
LABEL_73:
  if (atomic_fetch_add((atomic_ullong* volatile)(v41 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v41 + 16LL))(v41);
    return std___1___shared_weak_count___release_weak_alt2(v41);
  }
  return result;
}

void ProcUnitSelectMenu_Unknown58(__int64* a1, __int64* a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  signed __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64* v19;
  __int64* v20;
  __int64 v21;
  signed __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64* v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  signed __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  __int64 v50;
  struct {
    __int64* v51;
    __int64 v52;
  } v51_;

  if ((*(unsigned int (**)(__int64*))(*a1 + 168))(a1) != 9) {
    (*(void (**)(__int64*))(a1[132] + 104))(a1 + 132);
    v6 = a1[133];
    if (v6 != 0) {
      ProcInOutAnim_173fac0_alt1(v6, 0);
    }
    v7 = game_gameui_MenuAnimator_instance_;
    if (game_gameui_MenuAnimator_instance_ != 0) {
      sprintf_alt1((__int64)&v51_.v51, "%s%s", "Alpha", "Out");
      v8 = ProcTransitionAnim_156af20(v7, 4, 1, a1 + 106, "N_UnitMenu",
                                      (const char*)&v51_.v51);
    }
    else {
      v8 = -1;
    }
    v19 = (__int64*)a2[1];
    v18 = a2[2];
    if ((unsigned __int64)v19 >= v18) {
      v21 = *a2;
      v22 = (signed __int64)v19 - *a2;
      v23 = (v22 >> 3) + 1;
      if (v23 >> 61 != 0) {
        goto LABEL_73;
      }
      v24 = v18 - v21;
      v25 = fw_memory_g_heap_manager_ptr;
      if (v24 >> 2 > v23) {
        v23 = v24 >> 2;
      }
      if ((unsigned __int64)v24 >= 0x7FFFFFFFFFFFFFF8LL) {
        v26 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v26 = v23;
      }
      if (v26 != 0) {
        if (v26 >> 61 != 0) {
          goto LABEL_74;
        }
        v27 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v26, 16, 0);
      }
      else {
        v27 = 0;
      }
      v34 = v27 + 8 * v26;
      v35 = v27 + v22 - 8 * (v22 >> 3);
      *(_QWORD*)(v27 + v22) = v8;
      v20 = (__int64*)(v27 + v22 + 8);
      memcpy_alt1(v35, v21, v22);
      *a2 = v35;
      a2[1] = (__int64)v20;
      a2[2] = v34;
      if (v21 != 0) {
        v36 = 128;
        if (*(_QWORD*)(*(_QWORD*)v25 + 200LL) == 0) {
          v36 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v25 + v36, v21);
      }
    }
    else {
      *v19 = v8;
      v20 = v19 + 1;
    }
    v37 = game_gameui_MenuAnimator_instance_;
    a2[1] = (__int64)v20;
    if (v37 != 0) {
      sprintf_alt1((__int64)&v51_.v51, "%s%s", "Alpha", "Out");
      v38 = ProcTransitionAnim_156af20(v37, 4, 1, a1 + 106, "N_Story",
                                       (const char*)&v51_.v51);
      v20 = (__int64*)a2[1];
      v39 = v38;
    }
    else {
      v39 = -1;
    }
    v40 = a2[2];
    if ((unsigned __int64)v20 >= v40) {
      v42 = *a2;
      v43 = (signed __int64)v20 - *a2;
      v44 = (v43 >> 3) + 1;
      if (v44 >> 61 != 0) {
        goto LABEL_73;
      }
      v45 = v40 - v42;
      if (v45 >> 2 > v44) {
        v44 = v45 >> 2;
      }
      if ((unsigned __int64)v45 >= 0x7FFFFFFFFFFFFFF8LL) {
        v46 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v46 = v44;
      }
      if (v46 != 0) {
        if (v46 >> 61 != 0) {
          goto LABEL_74;
        }
        v47 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v46, 16, 0);
      }
      else {
        v47 = 0;
      }
      v48 = v47 + 8 * v46;
      v49 = v47 + v43 - 8 * (v43 >> 3);
      *(_QWORD*)(v47 + v43) = v39;
      v41 = v47 + v43 + 8;
      memcpy_alt1(v49, v42, v43);
      *a2 = v49;
      a2[1] = v41;
      a2[2] = v48;
      if (v42 != 0) {
        v50 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v50 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v50, v42);
      }
    }
    else {
      *v20 = v39;
      v41 = (__int64)(v20 + 1);
    }
    a2[1] = v41;
    return;
  }
  v4 = game_gameui_MenuAnimator_instance_;
  if (game_gameui_MenuAnimator_instance_ != 0) {
    sprintf_alt1((__int64)&v51_.v51, "%s%s", "Left", "Out");
    v5 = ProcTransitionAnim_156af20(v4, 2, 1, a1 + 119, nullptr,
                                    (const char*)&v51_.v51);
  }
  else {
    v5 = -1;
  }
  v10 = (__int64*)a2[1];
  v9 = a2[2];
  if ((unsigned __int64)v10 >= v9) {
    v12 = *a2;
    v13 = (signed __int64)v10 - *a2;
    v14 = (v13 >> 3) + 1;
    if (v14 >> 61 == 0) {
      v15 = v9 - v12;
      if (v15 >> 2 > v14) {
        v14 = v15 >> 2;
      }
      if ((unsigned __int64)v15 >= 0x7FFFFFFFFFFFFFF8LL) {
        v16 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v16 = v14;
      }
      if (v16 == 0) {
        v17 = 0;
      LABEL_33:
        v28 = v17 + 8 * v16;
        v29 = v17 + v13 - 8 * (v13 >> 3);
        *(_QWORD*)(v17 + v13) = v5;
        v11 = v17 + v13 + 8;
        memcpy_alt1(v29, v12, v13);
        *a2 = v29;
        a2[1] = v11;
        a2[2] = v28;
        if (v12 != 0) {
          v30 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v30 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v30, v12);
        }
        goto LABEL_37;
      }
      if (v16 >> 61 == 0) {
        v17 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v16, 16, 0);
        goto LABEL_33;
      }
    LABEL_74:
      GameRoutine_60a210_alt1();
    }
  LABEL_73:
    GameRoutine_874500_alt1();
  }
  *v10 = v5;
  v11 = (__int64)(v10 + 1);
LABEL_37:
  a2[1] = v11;
  LayoutAccessor_1560070((void*)(&v51_.v51), a1 + 106, "L_Bg");
  if (v51_.v52 == 0) {
    return;
  }
  v31 = std___1___shared_weak_count_lock_alt1(v51_.v52);
  v32 = v51_.v51;
  if (v51_.v52 != 0) {
    std___1___shared_weak_count___release_weak_alt2(v51_.v52);
  }
  if (v31 != 0 && v32 != nullptr) {
    v33 = ui_LayoutAccessor_FindTextBox_alt1(v32, (__int64)"T_Help");
    if (v33 != 0) {
      GameRoutine_156c5d0_alt1(v33, (__int64)&GameData_1a9f09e, 0);
    }
  }
  else if (v31 == 0) {
    return;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
    std___1___shared_weak_count___release_weak_alt2(v31);
  }
}

__int64 ProcUnitSelectMenu_Unknown84(__int64 a1)
{
  int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  _QWORD* v7;
  _QWORD* v8;
  int v9;
  __int64 v10;
  _DWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  unsigned int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned int v23;
  unsigned int i;
  __int64 v25;
  struct {
    _QWORD v27[3];
    int v28;
    char gap28_[4];
    __int64 v29;
    __int64 v30;
    __int64 v31;
    __int64 v32;
    __int64 v33;
    __int64 v34;
  } v27_;
  struct {
    __int64 v35;
    __int64 v36;
  } v35_;

  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  LayoutAccessor_1562cf0_alt1(a1 + 848, "PartHide"),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v2 = *(_DWORD*)(a1 + 356);
  v3 = *(_QWORD*)(a1 + 336);
  *(_BYTE*)(a1 + 648) = 0;
  *(_DWORD*)(a1 + 356) = v2 | 2;
  if (v3 != 0 && ((*(void (**)(__int64))(*(_QWORD*)v3 + 168LL))(v3),
                  *(_QWORD*)(a1 + 336) = 0,
                  _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(a1, 0, 1u, 0),
                  (v4 = *(_QWORD*)(a1 + 336)) != 0)) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 160LL))(v4),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    game_IsVibrationEnabled_alt1(
        (_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 712LL)),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v5 = *(_QWORD*)(a1 + 336);
    v6 = 4;
    if (v5 != 0) {
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v5 + 120LL))(v5) & 1) != 0) {
        v6 = 4;
      }
      else {
        v6 = 0;
      }
    }
  }
  else {
    v6 = 4;
  }
  v7 = *(_QWORD**)(a1 + 232);
  v8 = *(_QWORD**)(a1 + 240);
  *(_DWORD*)(a1 + 356) = *(_DWORD*)(a1 + 356) & 0xFFFFFFFB | v6;
  if (v7 == v8) {
    goto LABEL_14;
  }
  v9 = 0;
  do {
    v10 = *v7;
    if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v7 + 48LL))(*v7) & 1) != 0) {
      v9 += (*(__int64 (**)(__int64))(*(_QWORD*)v10 + 40LL))(v10) & 1,
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    ++v7;
  } while (v7 != v8);
  if (v9 <= 1) {
  LABEL_14:
    ui_LayoutAccessor_SetPaneVisible_alt1(a1 + 848, (__int64)"L_ArrowL", 0),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    ui_LayoutAccessor_SetPaneVisible_alt1(a1 + 848, (__int64)"L_ArrowR", 0),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if ((GameVariable_82e3a0_alt1(2) & 1) == 0) {
    v11 = *(_DWORD**)(a1 + 1080);
    if (*(_QWORD*)v11 == 0 || *(_DWORD*)(*(_QWORD*)v11 + 16LL) != v11[2]) {
      v27_.v27[0] = 0;
      v27_.v27[1] = 0;
      v12 = *((_QWORD*)GameData_212c540 + 1);
      v14 = *(_QWORD*)GameData_212c548;
      v13 = *((_QWORD*)GameData_212c548 + 1);
      v27_.v29 = *(_QWORD*)GameData_212c540;
      v27_.v30 = v12;
      v27_.v33 = v27_.v29;
      v27_.v34 = v12;
      v27_.v31 = v14;
      v27_.v32 = v13;
      v27_.v28 = 9;
      v27_.v27[2] = "UI_Deco_CharaChoice_Hades";
      v15 = ({
        unsigned __int128 r_ = Manager_bc6460_alt1_pair(
            *(_QWORD**)eft_g_effectSystem_ptr[0], (__int64)v27_.v27, 0);
        v16 = COERCE_AS(__typeof__(v16), (unsigned long long)(r_ >> 64));
        (__int64*)(unsigned long long)r_;
      });
      GameHr_14a10d0(&v35_.v35, (__int64)v15, v16, (__int64)&GameData_1a9f09e),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v17 = v35_.v35;
      v18 = v35_.v36;
      if (v35_.v36 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v35_.v36 + 8), 1u,
                                  memory_order_relaxed);
      }
      v19 = *(_QWORD*)(a1 + 1088);
      *(_QWORD*)(a1 + 1080) = v17;
      *(_QWORD*)(a1 + 1088) = v18;
      if (v19 != 0) {
        if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          std___1___shared_weak_count___release_weak_alt2(v19),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        v18 = *(_QWORD*)(a1 + 1088);
      }
      if (v18 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 8), 1u,
                                  memory_order_relaxed);
        if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          std___1___shared_weak_count___release_weak_alt2(v18),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
      v20 = v35_.v36;
      if (v35_.v36 != 0 &&
          atomic_fetch_add((atomic_ullong* volatile)(v35_.v36 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        std___1___shared_weak_count___release_weak_alt2(v20),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v21 = *(_QWORD*)(a1 + 1080);
      v22 = *(_QWORD*)v21;
      if (*(_QWORD*)v21 != 0 && *(_DWORD*)(v22 + 16) == *(_DWORD*)(v21 + 8)) {
        v23 = *(_DWORD*)(v22 + 36);
        if (v23 != 0) {
          for (i = 0; i < v23; ++i) {
            if ((int)v23 > (int)i) {
              v25 = *(_QWORD*)(v22 + 40 + 8LL * (int)i);
              if (v25 != 0) {
                *(_QWORD*)(v25 + 16) = 0;
                *(_QWORD*)(v25 + 24) = 0;
                *(_BYTE*)(v25 + 128) = 1;
                v23 = *(_DWORD*)(v22 + 36);
              }
            }
          }
        }
      }
      game_14a3920(v21),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  LODWORD(v35_.v35) = (unsigned int)snd_fnd_calcCrc32_alt1("SE_Fade", 0),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  snd_Fade_Fade_10c830_alt1((__int64)v27_.v27, 0x1.f400000000000p+8f),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  snd_startSlotVolume_100b50_alt1((int*)&v35_.v35, (__int64)v27_.v27,
                                  0x0.0p+0f),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  return snd_Fade_Destroy_Fade_alt1(v27_.v27);
}

__int64 ProcUnitSelectMenu_Unknown92(_QWORD* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _DWORD* v7;
  __int64 v8;
  __int64 v9;
  struct {
    _DWORD* v11;
    __int64 v12;
  } v11_;
  __int64 v13[2];

  LayoutAccessor_155e830((__int64)(a1 + 106), 0);
  v2 = a1;
  v3 = a1;
  v4 = GameData_212c610;
  v5 = GameData_2131c18[0];
  do {
    v6 = __dynamic_cast(v3, v4, v5, 0);
    v3 = (_QWORD*)v3[4];
    if (v6 != 0) {
      v2 = (_QWORD*)v6;
    }
  } while (v3 != nullptr);
  if (v2 == a1) {
    (*(void (**)(_QWORD*))(a1[132] + 104LL))(a1 + 132);
  }
  v7 = (_DWORD*)a1[135];
  if (*(_QWORD*)v7 != 0 && *(_DWORD*)(*(_QWORD*)v7 + 16LL) == v7[2]) {
    v8 = a1[136];
    if (v8 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                                memory_order_relaxed);
      v11_.v12 = v8;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                                memory_order_relaxed);
    }
    else {
      v11_.v12 = 0;
    }
    v11_.v11 = v7;
    GameHr_14a1390((__int64*)&v11_.v11, 1);
    v9 = v11_.v12;
    if (v11_.v12 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v11_.v12 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      std___1___shared_weak_count___release_weak_alt2(v9);
    }
    if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      std___1___shared_weak_count___release_weak_alt2(v8);
    }
  }
  snd_Fade_Fade_10c910((__int64)&v11_.v11, 500);
  snd_findVoice((__int64)"SE_SYS_Select_Obelisk_Second");
  if ((snd_fnd_WeakHandle_isValid(v13) & 1) != 0) {
    snd_stop_ffc40(v13, (__int64)&v11_.v11);
  }
  snd_Fade_Destroy_Fade_alt1(&v11_.v11);
  LODWORD(v13[0]) = (unsigned int)snd_fnd_calcCrc32_alt1("SE_Fade", 0);
  snd_Fade_Fade_10c830_alt1((__int64)&v11_.v11, 0x1.f400000000000p+8f);
  snd_startSlotVolume_100b50_alt1((int*)v13, (__int64)&v11_.v11,
                                  0x1.0000000000000p+0f);
  return snd_Fade_Destroy_Fade_alt1(&v11_.v11);
}

__int64 ProcUnitSelectMenu_Unknown93(__int64 result)
{
  if ((*(_BYTE*)(result + 1072) & 1) == 0) {
    *(_BYTE*)(result + 1072) = 1;
    *(_BYTE*)(result + 648) = 1;
    *(_DWORD*)(result + 356) &= ~2u;
    return game_menu_BasicMenu_Unknown16de2e0();
  }
  return result;
}

__int64 game_facility_anonymous_ProcUnitSelectMenu_OnUnbindImpl(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  struct {
    _QWORD v14[4];
    _QWORD* v15;
  } v14_;
  __int64 v16;

  game_menu_BasicMenu_Unknown96(a1);
  if ((*(unsigned int (**)(__int64))(*(_QWORD*)a1 + 168LL))(a1)-8 <=
      0xFFFFFFF9) {
    (*(void (**)(__int64))(*(_QWORD*)(a1 + 1056) + 96LL))(a1 + 1056);
  }
  v2 = *(_QWORD**)(a1 + 232);
  v3 = *(_QWORD**)(a1 + 240);
  v4 = v14_.v14;
  v14_.v14[0] = game_ProcInst_Unknown04_1722970_ptr;
  v14_.v15 = v14_.v14;
  if (v2 == v3) {
    v7 = 0;
  LABEL_16:
    v8 = 32;
    goto LABEL_17;
  }
  v5 = GameData_212e008[0];
  while (1) {
    if (*v2 != 0) {
      v6 = __dynamic_cast(*v2, v5, &GameData_20b1428, 0);
      if (v6 != 0) {
        v7 = v6;
        v16 = v6;
        if (v14_.v15 == nullptr) {
          GameRoutine_60a310();
        }
        if (((*(__int64 (**)(_QWORD*, __int64*))(*v14_.v15 + 48LL))(v14_.v15,
                                                                    &v16) &
             1) != 0) {
          break;
        }
      }
    }
    if (++v2 == v3) {
      v7 = 0;
      break;
    }
  }
  v4 = v14_.v15;
  if (v14_.v15 == v14_.v14) {
    goto LABEL_16;
  }
  if (v14_.v15 != nullptr) {
    v8 = 40;
  LABEL_17:
    (*(void (**)(_QWORD*))(*v4 + v8))(v4);
  }
  if (v7 != 0) {
    v9 = *(_QWORD*)(a1 + 336);
    if (v9 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v9 + 168LL))(v9);
    }
    *(_QWORD*)(a1 + 336) = v7;
    _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(a1, 1, 0, 0);
    v10 = *(_QWORD*)(a1 + 336);
    if (v10 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v10 + 160LL))(v10);
      game_IsVibrationEnabled_alt1(
          (_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 712LL));
      v11 = *(_QWORD*)(a1 + 336);
      v12 = 4;
      if (v11 != 0) {
        if (((*(__int64 (**)(__int64))(*(_QWORD*)v11 + 120LL))(v11) & 1) != 0) {
          v12 = 4;
        }
        else {
          v12 = 0;
        }
      }
    }
    else {
      v12 = 4;
    }
    *(_DWORD*)(a1 + 356) = *(_DWORD*)(a1 + 356) & 0xFFFFFFFB | v12;
  }
  LODWORD(v16) = (unsigned int)snd_fnd_calcCrc32_alt1("SE_Fade", 0);
  snd_Fade_Fade_10c830_alt1((__int64)v14_.v14, 0x1.f400000000000p+8f);
  snd_startSlotVolume_100b50_alt1((int*)&v16, (__int64)v14_.v14, 0x0.0p+0f);
  return snd_Fade_Destroy_Fade_alt1(v14_.v14);
}

__int64 ProcUnitSelectMenu_Unknown102(__int64 a1)
{
  __int64 result;
  __int64 v3;
  _QWORD* v4;

  result = *(_QWORD*)(a1 + 336);
  if (result != 0) {
    result = __dynamic_cast(result, GameData_212e008[0], &GameData_20b1428, 0);
    if (result != 0) {
      v3 = result;
      v4 = (_QWORD*)GameRoutine_82e7c0(*(unsigned __int8*)(result + 83), 2);
      if (*v4 == 0 || game_GameModeData_instance_ == 0) {
        return 0;
      }
      result = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), v4);
      if (result == 0) {
        return result;
      }
      if (*(_DWORD*)(result + 32) != 0) {
        GameData_2262bfc = *(_BYTE*)(v3 + 83);
        GameRoutine_1009aa0(a1);
        return 9;
      }
      else {
        return 0;
      }
    }
  }
  return result;
}

__int64 game_facility_anonymous_ProcUnitSelectMenu_AddItemList(__int64 a1)
{
  __int64 result;
  __int64 v2;
  struct {
    _QWORD v3[4];
    _QWORD* v4;
  } v3_;

  v3_.v3[0] = GameData_20b1af0;
  v3_.v3[1] = a1;
  v3_.v4 = v3_.v3;
  GameConst_7f97f0((__int64)v3_.v3);
  result = (__int64)v3_.v4;
  if (v3_.v4 == v3_.v3) {
    v2 = 32;
  }
  else {
    if (v3_.v4 == nullptr) {
      return result;
    }
    v2 = 40;
  }
  return (*(__int64 (**)(__int64))(*v3_.v4 + v2))((__int64)v3_.v4);
}

bool game_facility_anonymous_ProcUnitSelectMenu_OnUnbindImpl_closure_Invoke(
    __int64 a1, __int64 a2)
{
  return *(unsigned __int8*)(*(_QWORD*)a2 + 83LL) ==
         (unsigned __int8)GameData_2262bfc;
}

void game_facility_anonymous_ProcUnitSelectMenu_AddItemList_closure_Invoke(
    __int64 a1, unsigned __int8* a2)
{
  unsigned __int8 v2;
  _QWORD* v3;
  __int64 v4;
  unsigned __int64* v5;
  char v6;
  unsigned __int64 v7;
  __int64 v8;

  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  v2 = *a2;
  v3 = *(_QWORD**)(a1 + 8);
  if (((unsigned __int8)(*a2 - 5) > 3u || ((1 << (v2 - 2)) & 0x82) != 0) &&
      ((v2 - 7) & 0xFD) != 0) {
    v4 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 88, 16, 0),
    v6 = COERCE_AS(__typeof__(v6),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    *(_WORD*)(v4 + 16) = 0;
    *(_DWORD*)(v4 + 40) = 0;
    *(_QWORD*)(v4 + 48) = 0;
    *(_QWORD*)(v4 + 56) = 0;
    *(_QWORD*)(v4 + 64) = 0;
    *(_QWORD*)(v4 + 72) = 0;
    *(_BYTE*)(v4 + 83) = v2;
    *(_WORD*)(v4 + 80) = 257;
    *(_QWORD*)v4 = game_facility_anonymous_UnitMenuItem_vtable;
    *(_QWORD*)(v4 + 8) = 0;
    v5 = (unsigned __int64*)GameVariable_82e7c0(v2, 1),
    v6 = COERCE_AS(__typeof__(v6),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    v7 = *v5;
    if (*v5 != 0) {
      v6 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ != 0) {
        v8 = game_GameVariableTable_Find_alt1(
            *(_QWORD**)(game_GameModeData_instance_ + 48), v5),
        v6 = COERCE_AS(__typeof__(v6),
                       PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        v6 = v8 != 0 && *(_DWORD*)(v8 + 32) != 0;
      }
    }
    *(_BYTE*)(v4 + 82) = (v7 != 0) & v6;
    BasicMenuCursor_16e0c00_alt1(v3, v4),
        v6 = COERCE_AS(__typeof__(v6),
                       PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  }
}

#pragma GCC visibility pop
