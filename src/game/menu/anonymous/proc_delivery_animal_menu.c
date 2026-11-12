#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 GameRoutine_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_171e560(_QWORD);
__int64 GameRoutine_171e690(_QWORD, _QWORD);
__int64 GameRoutine_1861460(void);
__int64 GameRoutine_1862ec0(_QWORD, _QWORD);
__int64 GameRoutine_19efcc0(_QWORD, _QWORD);
__int64 GameRoutine_1a06b90(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6e3b50(_QWORD, _QWORD);
__int64 GameRoutine_930b90(_QWORD, _QWORD);
__int64 GameRoutine_9d0620(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_UnitPool_Get(_QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_20aff00[])();
extern __int64 (*GameData_20aff80[])();
extern __int64 (*game_menu_anonymous_DeliveryMenuItem_vtable[])();
extern __int64 GameData_20afed8;
extern __int64 GameData_212cf88[4];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c8a0;
extern __int64* GameData_212e008[9];
__int64 ProcDeliveryAnimalMenu_Unknown84(__int64 a1);
__int64 ProcDeliveryAnimalMenu_Unknown100(__int64 a1);
__int64 ProcDeliveryAnimalMenu_Unknown149(__int64 a1, __int64 a2, __int64 a3,
                                          __int64 a4, int a5, int a6);
__int64 ProcDeliveryAnimalMenu_Unknown150_alt1(
    __int64 a1, _DWORD* a2,
    _DWORD* a3) __asm__("ProcDeliveryAnimalMenu_Unknown150");
__int64 ProcDeliveryAnimalMenu_Unknown151(__int64 result);
_QWORD* ProcDeliveryAnimalMenu_171e4f0(_QWORD* result);
__int64 GameRoutine_187dc60(_QWORD, _QWORD, _QWORD);
extern __int64 GameData_212c610;
extern __int64 GameData_2131c18[55];
__int64
game_menu_anonymous_ProcDeliveryAnimalMenu_ACall_closure0_Invoke(__int64 a1);
__int64
game_menu_anonymous_ProcDeliveryAnimalMenu_BCall_closure_Invoke(__int64 a1);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_157a1e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                            _QWORD);
__int64 GameRoutine_1862240(_QWORD, _QWORD);
__int64 LayoutAccessor_155e830(_QWORD, _QWORD);
__int64 LayoutAccessor_1562060(_QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 MapSortieMenu_871860(__int64, __int64, __int64, __int64, __int64);
__int64 ProcTransitionAnim_156af20(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                   _QWORD);
__int64 game_util_Format(const char*, ...);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 sprintf(_QWORD, const char*, ...);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
__n128 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern _QWORD GameData_1fae980[6];
extern _UNKNOWN game_g_random_mutex;
extern __int64 (*GameData_20b0000[])();
extern __int64 (*GameData_20b0080[])();
extern __int64* GameData_212ceb0;
extern __int64* game_g_empty_item_ptr;
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 game_gameui_MenuAnimator_instance_;
struct PseudoSret LayoutAccessor_1560070(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_874500(void);
__int64 ProcDeliveryAnimalMenu_Unknown57(__int64 a1, __int64* a2);
void ProcDeliveryAnimalMenu_Unknown85_alt1(__int64 a1) __asm__(
    "ProcDeliveryAnimalMenu_Unknown85");
__int64 game_menu_anonymous_ProcDeliveryAnimalMenu_BCall(_QWORD* a1);
_QWORD* ProcObeliskDepositoryRideMenu_9d0620(__int64, __int64, __int64, __int64,
                                             __int64);
__attribute__((swiftcall)) void
LayoutAccessor_1560070_alt1(PSEUDO_X8, __int64*,
                            const char*) __asm__("LayoutAccessor_1560070");
__int64* game_UnitPool_Get_alt1(_BYTE*) __asm__("game_UnitPool_Get");
__int64 GameRoutine_171e560_alt1(__int64) __asm__("GameRoutine_171e560");
__int64 GameRoutine_1862240_alt1(__int64,
                                 __int64) __asm__("GameRoutine_1862240");
__int64 GameRoutine_930b90_alt1(__int64, __int64) __asm__("GameRoutine_930b90");
__int64 LayoutAccessor_155e830_alt1(__int64 result,
                                    char) __asm__("LayoutAccessor_155e830");
__int64
LayoutAccessor_1562cf0_alt1(__int64 result,
                            const char*) __asm__("LayoutAccessor_1562cf0");
__int64 game_menu_AnimalPoolMenu_GetSumReliance(__int64, unsigned __int8*);
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64 ui_LayoutAccessor_FindTextBox_alt1(__int64*, __int64) __asm__(
    "ui_LayoutAccessor_FindTextBox");
__int64 ui_LayoutAccessor_SetPaneVisible_alt1(
    __int64 result, __int64, char) __asm__("ui_LayoutAccessor_SetPaneVisible");
bool GameRoutine_19efcc0_alt1(_QWORD*, _QWORD*) __asm__("GameRoutine_19efcc0");
char* game_util_Format_alt1(const char*, ...) __asm__("game_util_Format");
void GameRoutine_156c5d0_alt1(__int64, __int64,
                              char) __asm__("GameRoutine_156c5d0");
void GameRoutine_157a1e0_alt1(__int64*, unsigned int*, unsigned __int8, char,
                              char, char, char) __asm__("GameRoutine_157a1e0");
void GameRoutine_171e690_alt1(__int64*, _QWORD*) __asm__("GameRoutine_171e690");
void GameRoutine_6e3b50_alt1(__int64, _QWORD*) __asm__("GameRoutine_6e3b50");
void LayoutAccessor_1562060_alt1(__int64*, __int64,
                                 __int64) __asm__("LayoutAccessor_1562060");
void ObeliskDestinyMenuItem_1a06b90(_QWORD*, __int64, int);
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 ProcDeliveryAnimalMenu_Unknown85(__int64 a1);
bool ProcDeliveryAnimalMenu_Unknown150(__int64 a1, _DWORD* a2, _DWORD* a3);

__int64 ProcDeliveryAnimalMenu_Unknown57(__int64 a1, __int64* a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64* v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
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
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v34;
  _BYTE v35[208];

  v4 = (*(__int64 (**)(__int64))(*(_QWORD*)(a1 + 1056) + 96LL))(a1 + 1056);
  v5 = game_gameui_MenuAnimator_instance_;
  if (game_gameui_MenuAnimator_instance_ != 0) {
    sprintf(v35, "%s%s", "Left", "In");
    v4 = ProcTransitionAnim_156af20(v5, 2, 0, a1 + 848, "Right", v35);
    v6 = v4;
  }
  else {
    v6 = -1;
  }
  v8 = (__int64*)a2[1];
  v7 = a2[2];
  if ((unsigned __int64)v8 >= v7) {
    v10 = *a2;
    v11 = (__int64)v8 - *a2;
    v12 = (v11 >> 3) + 1;
    if (v12 >> 61 != 0) {
      goto LABEL_40;
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
        goto LABEL_41;
      }
      v16 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v15, 16, 0);
    }
    else {
      v16 = 0;
    }
    v17 = v16 + 8 * v15;
    v18 = v16 + v11 - 8 * (v11 >> 3);
    *(_QWORD*)(v16 + v11) = v6;
    v9 = (__int64*)(v16 + v11 + 8);
    v4 = memcpy(v18, v10, v11);
    *a2 = v18;
    a2[1] = (__int64)v9;
    a2[2] = v17;
    if (v10 != 0) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
        v19 = 56;
      }
      v4 = nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v14 + v19);
    }
  }
  else {
    *v8 = v6;
    v9 = v8 + 1;
  }
  v20 = game_gameui_MenuAnimator_instance_;
  a2[1] = (__int64)v9;
  if (v20 != 0) {
    sprintf(v35, "%s%s", "Right", "In");
    v4 = ProcTransitionAnim_156af20(v20, 3, 0, a1 + 848, "N_Condition", v35);
    v9 = (__int64*)a2[1];
    v21 = v4;
  }
  else {
    v21 = -1;
  }
  v22 = a2[2];
  if ((unsigned __int64)v9 < v22) {
    *v9 = v21;
    v23 = (__int64)(v9 + 1);
    goto LABEL_39;
  }
  v24 = *a2;
  v25 = (__int64)v9 - *a2;
  v26 = (v25 >> 3) + 1;
  if (v26 >> 61 != 0) {
  LABEL_40:
    GameRoutine_874500();
  }
  v27 = v22 - v24;
  if (v27 >> 2 > v26) {
    v26 = v27 >> 2;
  }
  if ((unsigned __int64)v27 >= 0x7FFFFFFFFFFFFFF8LL) {
    v28 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v28 = v26;
  }
  if (v28 != 0) {
    if (v28 >> 61 == 0) {
      v29 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v28, 16, 0);
      goto LABEL_35;
    }
  LABEL_41:
    GameRoutine_60a210(v4);
  }
  v29 = 0;
LABEL_35:
  v30 = v29 + 8 * v28;
  v31 = v29 + v25 - 8 * (v25 >> 3);
  *(_QWORD*)(v29 + v25) = v21;
  v23 = v29 + v25 + 8;
  memcpy(v31, v24, v25);
  *a2 = v31;
  a2[1] = v23;
  a2[2] = v30;
  if (v24 != 0) {
    v32 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v32 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v32);
  }
LABEL_39:
  a2[1] = v23;
  snd_Fade_Fade_10c830(v35, 0.0f);
  snd_play_ff2d0((void*)(&v34), "SE_SYS_Window_Open", "SE_SYS_Window_Open", v35,
                 0, 65537, 0, 0.0f, 1.0f);
  return snd_Fade_Destroy_Fade(v35);
}

__int64 ProcDeliveryAnimalMenu_Unknown84(__int64 a1)
{
  GameRoutine_1861460();
  return GameRoutine_1562cf0(a1 + 848, "Menu_Quest");
}

__int64 ProcDeliveryAnimalMenu_Unknown85(__int64 a1)
{
  int v1;
  __int64 v2;
  __int64 v3;
  const char* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  char* v10;
  char* v11;
  __int64 v12;
  const char* v13;
  unsigned int v14;
  _QWORD** v15;
  char* i;
  __int64 result;
  __int64 v18;
  __int64* v19;
  __int64 v20;
  const char* v21;
  _QWORD** v22;
  __int64 v23;
  __int64* v24;
  int v25;
  unsigned int v26;
  unsigned int v27;
  int v28;
  __int64 v29;
  _QWORD* v30;
  __int64 v31;
  _QWORD* v32;
  __int64 v33;
  int v34;
  struct {
    __int64 v35;
    int v36;
  } v35_;
  _QWORD** v37;
  struct {
    _QWORD* v38;
    __int64 v39;
    __int64 v40;
    __int64 v41;
    _BYTE* v42;
  } v38_;
  _BYTE v43[20];
  _QWORD v44[2];
  _QWORD** v45;
  struct {
    _QWORD* v46;
    __int64 v47;
    __int64 v48;
    __int64 v49;
    _BYTE* v50;
    int v51;
    int v52;
    int v53;
  } v46_;

  v1 = *(_DWORD*)(a1 + 660);
  v2 = *(_QWORD*)(a1 + 672);
  v3 = a1;
  if (v1 < (unsigned __int64)((*(_QWORD*)(a1 + 680) - v2) >> 2)) {
    LOBYTE(v1) = *(_BYTE*)(v2 + 4LL * v1);
  }
  if ((unsigned int)(unsigned __int8)v1 - 1 > 4) {
    v4 = "MID_Menu_All";
  }
  else {
    v4 = (const char*)GameData_1fae980[(unsigned __int8)v1];
  }
  LayoutAccessor_1562060_alt1((__int64*)(a1 + 952), (__int64)"T_Type",
                              (__int64)v4);
  GameRoutine_1862240_alt1(v3, *(_QWORD*)(v3 + 1064));
  (*(void (**)(__int64))(*(_QWORD*)v3 + 1216LL))(v3);
  ui_LayoutAccessor_SetPaneVisible_alt1(v3 + 848, (__int64)"A_Condition", 1);
  v5 = **(_QWORD**)(v3 + 1080);
  v6 = *(_QWORD*)(v5 + 360);
  v34 = *(unsigned __int8*)(v5 + 368);
  LayoutAccessor_1560070_alt1((void*)(v43), (__int64*)(v3 + 848),
                              "L_Condition");
  if (*(_QWORD*)&v43[8] == 0) {
    goto LABEL_17;
  }
  v7 = v6;
  v8 = std___1___shared_weak_count_lock_alt1(*(__int64*)&v43[8]);
  v9 = *(__int64**)v43;
  if (*(_QWORD*)&v43[8] != 0) {
    std___1___shared_weak_count___release_weak_alt1(*(__int64*)&v43[8]);
  }
  if (v8 != 0 && v9 != nullptr) {
    v10 = game_util_Format_alt1("Item%02d", 0);
    LayoutAccessor_1562cf0_alt1((__int64)v9, v10);
    v11 = game_util_Format_alt1("%d", v34);
    v12 = ui_LayoutAccessor_FindTextBox_alt1(v9, (__int64)"T_TotalMaxNum");
    if (v12 != 0) {
      GameRoutine_156c5d0_alt1(v12, (__int64)v11, 0);
    }
    GameRoutine_171e560_alt1(v3);
    v6 = v7;
    goto LABEL_15;
  }
  v6 = v7;
  if (v8 != 0) {
  LABEL_15:
    if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      std___1___shared_weak_count___release_weak_alt1(v8);
    }
  }
LABEL_17:
  v13 = "L_Condition/L_ConditionItem%02d";
  v14 = 0;
  v15 = &v38_.v38;
  for (i = game_util_Format_alt1("L_Condition/L_ConditionItem%02d", 0);;
       i = game_util_Format_alt1(v13, v14)) {
    LayoutAccessor_1560070_alt1((void*)(v43), (__int64*)(v3 + 848), i);
    result = *(_QWORD*)&v43[8];
    if (*(_QWORD*)&v43[8] == 0) {
      goto LABEL_18;
    }
    v18 = std___1___shared_weak_count_lock_alt1(*(__int64*)&v43[8]);
    v19 = *(__int64**)v43;
    result = *(_QWORD*)&v43[8];
    if (*(_QWORD*)&v43[8] != 0) {
      result =
          std___1___shared_weak_count___release_weak_alt1(*(__int64*)&v43[8]);
    }
    if (v18 != 0 && v19 != nullptr) {
      v35_.v36 = 0;
      v35_.v35 = 0;
      v38_.v39 = 0;
      v38_.v40 = 0;
      v38_.v41 = 0;
      v38_.v42 = nullptr;
      v37 = v15;
      v38_.v38 = nullptr;
      if (v6 != 0) {
        LOBYTE(v35_.v35) = *(_BYTE*)(v6 + 16);
        nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
        v20 = v3;
        v21 = v13;
        v22 = v15;
        v23 = v6;
        v24 = game_map_MapRandom_instance__ptr[0];
        v25 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                         (unsigned __int64)((__int128*)0x10LL) + 8);
        v26 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                         (unsigned __int64)((__int128*)0x10LL) + 8 + 4);
        v27 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                         (unsigned __int64)((__int128*)0x10LL)) ^
              (*(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                          (unsigned __int64)((__int128*)0x10LL))
               << 11);
        *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                   (unsigned __int64)((__int128*)0x10LL)) =
            *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((__int128*)0x10LL) + 4);
        *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v24 + 4) = v25;
        v28 = (v27 >> 8) ^ (v26 >> 19) ^ v27 ^ v26;
        *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v24 + 8) = v26;
        *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v24 + 12) = v28;
        nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
        *(_WORD*)((char*)&v35_.v35 + 1) =
            __PAIR16__(BYTE2(v35_.v35), v28) & 0xFEFF;
        v6 = v23;
        v15 = v22;
        v13 = v21;
        v3 = v20;
      }
      *(_DWORD*)v43 = 8;
      *(_QWORD*)&v43[4] = *game_g_empty_item_ptr;
      v29 = *(_BYTE*)GameData_212ceb0 != 0 ? *GameData_212ceb0 : 0LL;
      *(_QWORD*)&v43[12] = v29;
      WORD1(v44[0]) = 0;
      HIDWORD(v44[0]) = 0;
      v46_.v46 = nullptr;
      v46_.v47 = 0;
      v45 = &v46_.v46;
      v46_.v48 = 0;
      v46_.v49 = 0;
      v46_.v50 = nullptr;
      GameRoutine_930b90_alt1((__int64)v44, (__int64)&v35_.v35);
      v46_.v53 = 0;
      v46_.v51 = 0;
      v46_.v52 = v34;
      GameRoutine_157a1e0_alt1(v19, (unsigned int*)v43, 1u, 0, 1, 0, 0);
      LODWORD(v44[1]) = 0;
      v44[0] = 0;
      if ((v46_.v48 & 1) != 0) {
        *v46_.v50 = 0;
        v46_.v49 = 0;
      }
      else {
        LOWORD(v46_.v48) = 0;
      }
      GameRoutine_6e3b50_alt1((__int64)&v45, v46_.v46);
      v46_.v46 = nullptr;
      v46_.v47 = 0;
      v45 = &v46_.v46;
      if ((v46_.v48 & 1) != 0) {
        v30 = v46_.v50;
        if (v46_.v50 != nullptr) {
          v31 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v31 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v31, (__int64)v46_.v50);
          v30 = v46_.v46;
        }
      }
      else {
        v30 = nullptr;
      }
      GameRoutine_6e3b50_alt1((__int64)&v45, v30);
      v35_.v36 = 0;
      v35_.v35 = 0;
      if ((v38_.v40 & 1) != 0) {
        *v38_.v42 = 0;
        v38_.v41 = 0;
      }
      else {
        LOWORD(v38_.v40) = 0;
      }
      GameRoutine_6e3b50_alt1((__int64)&v37, v38_.v38);
      v38_.v38 = nullptr;
      v38_.v39 = 0;
      v37 = v15;
      if ((v38_.v40 & 1) != 0) {
        v32 = v38_.v42;
        if (v38_.v42 != nullptr) {
          v33 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v33 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v33, (__int64)v38_.v42);
          v32 = v38_.v38;
        }
      }
      else {
        v32 = nullptr;
      }
      GameRoutine_6e3b50_alt1((__int64)&v37, v32);
      result = LayoutAccessor_155e830_alt1((__int64)v19, v14 == 0);
    }
    else if (v18 == 0) {
      goto LABEL_18;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
      result = std___1___shared_weak_count___release_weak_alt1(v18);
    }
  LABEL_18:
    if (++v14 == 6) {
      break;
    }
  }
  return result;
}

__int64 ProcDeliveryAnimalMenu_Unknown100(__int64 a1)
{
  __int64 result;
  unsigned int v3;
  __int64 (**v4)();
  _BYTE* v5;
  __int64 v6;
  int v7;
  void (**v8)(_BYTE*);
  void (**v9)(_BYTE*);
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  struct {
    _QWORD v22[4];
    _QWORD* v23;
  } v22_;
  struct {
    _QWORD v24[4];
    _QWORD* v25;
  } v24_;
  struct {
    __int64 (**v26)();
    __int64 v27;
    char gap112_[16];
    __int64 (***v28)();
  } v26_;
  const char* v29;

  result = *(_QWORD*)(a1 + 336);
  if (result == 0) {
    return result;
  }
  result = __dynamic_cast(result, GameData_212e008[0], &GameData_20afed8, 0);
  if (result == 0) {
    return result;
  }
  v3 = *(_DWORD*)(result + 40);
  v4 = *(__int64 (***)(void))(result + 88);
  v5 = (_BYTE*)result;
  v6 = *(_QWORD*)a1;
  if (*(_BYTE*)(result + 108) != 1) {
    (*(void (**)(__int64, _QWORD))(v6 + 552))(a1, 0);
    v5[108] = 1;
    if (v5[79] == 1) {
      v9 = (void (**)(_BYTE*))(*(_QWORD*)v5 + 520LL);
    }
    else {
      v9 = (void (**)(_BYTE*))(*(_QWORD*)v5 + 504LL);
      if (*(_BYTE**)(*((_QWORD*)v5 + 1) + 336LL) == v5) {
        v9 = (void (**)(_BYTE*))(*(_QWORD*)v5 + 512LL);
      }
    }
    (*v9)(v5);
    v26_.v26 = v4;
    v26_.v27 = v3 | 0x100000000LL;
    GameRoutine_171e690_alt1((__int64*)(a1 + 1088), &v26_.v26);
    GameRoutine_171e560_alt1(a1);
    if (*(unsigned __int8*)(**(_QWORD**)(a1 + 1080) + 368LL) >
        (unsigned __int64)((__int64)(*(_QWORD*)(a1 + 1096) -
                                     *(_QWORD*)(a1 + 1088)) >>
                           4)) {
      return 0;
    }
    v26_.v28 = &v26_.v26;
    v24_.v24[2] = v5;
    v22_.v22[2] = v5;
    v29 = "MID_DeliveryMenu_Confirm";
    v26_.v26 = GameData_20aff00;
    v26_.v27 = a1;
    v22_.v23 = v22_.v22;
    v24_.v24[0] = GameData_20aff80;
    v24_.v24[1] = a1;
    v24_.v25 = v24_.v24;
    v22_.v22[0] = GameData_20aff80;
    v22_.v22[1] = a1;
    v15 = ProcObeliskDepositoryRideMenu_9d0620(
        a1, (__int64)&v29, (__int64)&v26_.v26, (__int64)v24_.v24,
        (__int64)v22_.v22);
    if (v22_.v23 == v22_.v22) {
      v16 = 32;
    }
    else {
      if (v22_.v23 == nullptr) {
        goto LABEL_30;
      }
      v16 = 40;
    }
    (*(void (**)(__int64))(*v22_.v23 + v16))((__int64)v22_.v23);
  LABEL_30:
    if (v24_.v25 == v24_.v24) {
      v17 = 32;
    }
    else {
      if (v24_.v25 == nullptr) {
        goto LABEL_35;
      }
      v17 = 40;
    }
    (*(void (**)(__int64))(*v24_.v25 + v17))((__int64)v24_.v25);
  LABEL_35:
    if (v26_.v28 == &v26_.v26) {
      v18 = 4;
    }
    else {
      if (v26_.v28 == nullptr) {
      LABEL_40:
        v19 = *(_QWORD*)(a1 + 1088);
        v20 = *(_QWORD*)(a1 + 1096);
        if (v19 != v20) {
          v21 = GameData_212cf88[0];
          do {
            ObeliskDestinyMenuItem_1a06b90(
                v15 + 187,
                *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v21 + 8LL) + 120LL) +
                    ((__int64)*(int*)(v19 + 8) << 6),
                1);
            v19 += 16;
          } while (v19 != v20);
        }
        return 12;
      }
      v18 = 5;
    }
    ((__int64 (*)(__int64))(*v26_.v28)[v18])((__int64)v26_.v28);
    goto LABEL_40;
  }
  (*(void (**)(__int64))(v6 + 576))(a1);
  v7 = (unsigned __int8)v5[79];
  v5[108] = 0;
  if (v7 == 1) {
    v8 = (void (**)(_BYTE*))(*(_QWORD*)v5 + 520LL);
  }
  else {
    v8 = (void (**)(_BYTE*))(*(_QWORD*)v5 + 504LL);
    if (*(_BYTE**)(*((_QWORD*)v5 + 1) + 336LL) == v5) {
      v8 = (void (**)(_BYTE*))(*(_QWORD*)v5 + 512LL);
    }
  }
  (*v8)(v5);
  v10 = *(_QWORD*)(a1 + 1088);
  v11 = *(_QWORD*)(a1 + 1096);
  if (v10 != v11) {
    v12 = *(_QWORD*)(a1 + 1088);
    while (v3 != *(_DWORD*)(v12 + 8) || *(_QWORD*)v12 != (_QWORD)v4) {
      v12 += 16;
      v10 += 16;
      if (v12 == v11) {
        v10 = *(_QWORD*)(a1 + 1096);
        break;
      }
    }
  }
  v14 = v11 - (v10 + 16);
  if (v11 != v10 + 16) {
    memmove_alt1(v10, v10 + 16, v11 - (v10 + 16));
  }
  *(_QWORD*)(a1 + 1096) = v10 + v14;
  return 0;
}

__int64 game_menu_anonymous_ProcDeliveryAnimalMenu_BCall(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  struct {
    _QWORD v5[4];
    _QWORD* v6;
  } v5_;
  struct {
    _QWORD v7[4];
    _QWORD* v8;
  } v7_;
  struct {
    _QWORD v9[4];
    _QWORD* v10;
  } v9_;
  const char* v11;

  if (a1[137] == a1[136]) {
    (*(void (**)(_QWORD*))(a1[132] + 104LL))(a1 + 132);
    return 3;
  }
  v11 = "MID_DeliveryMenu_Cancel_Confirm";
  v7_.v8 = v7_.v7;
  v5_.v6 = v5_.v5;
  v9_.v9[0] = GameData_20b0000;
  v9_.v9[1] = a1;
  v9_.v10 = v9_.v9;
  v7_.v7[0] = GameData_20b0080;
  v5_.v5[0] = GameData_20b0080;
  MapSortieMenu_871860((__int64)a1, (__int64)&v11, (__int64)v9_.v9,
                       (__int64)v7_.v7, (__int64)v5_.v5);
  if (v5_.v6 == v5_.v5) {
    v1 = 32;
  }
  else {
    if (v5_.v6 == nullptr) {
      goto LABEL_8;
    }
    v1 = 40;
  }
  (*(void (**)(__int64))(*v5_.v6 + v1))((__int64)v5_.v6);
LABEL_8:
  if (v7_.v8 == v7_.v7) {
    v3 = 32;
  }
  else {
    if (v7_.v8 == nullptr) {
      goto LABEL_13;
    }
    v3 = 40;
  }
  (*(void (**)(__int64))(*v7_.v8 + v3))((__int64)v7_.v8);
LABEL_13:
  if (v9_.v10 == v9_.v9) {
    v4 = 32;
    goto LABEL_17;
  }
  if (v9_.v10 != nullptr) {
    v4 = 40;
  LABEL_17:
    (*(void (**)(__int64))(*v9_.v10 + v4))((__int64)v9_.v10);
  }
  return 11;
}

__int64 ProcDeliveryAnimalMenu_Unknown149(__int64 a1, __int64 a2, __int64 a3,
                                          __int64 a4, int a5, int a6)
{
  __int64 result;

  result = fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 112, 16, 0);
  *(_DWORD*)(result + 40) = a5;
  *(_QWORD*)(result + 88) = a4;
  *(_QWORD*)(result + 96) = a3;
  *(_DWORD*)(result + 104) = a6;
  *(_WORD*)(result + 16) = 0;
  *(_QWORD*)(result + 48) = 0;
  *(_QWORD*)(result + 56) = 0;
  *(_QWORD*)(result + 64) = 0;
  *(_QWORD*)(result + 72) = 0;
  *(_BYTE*)(result + 108) = 0;
  *(_WORD*)(result + 80) = 257;
  *(_BYTE*)(result + 82) = 1;
  *(_QWORD*)result = game_menu_anonymous_DeliveryMenuItem_vtable;
  *(_QWORD*)(result + 8) = 0;
  return result;
}

bool ProcDeliveryAnimalMenu_Unknown150(__int64 a1, _DWORD* a2, _DWORD* a3)
{
  __int64 v6;
  __int64 v7;
  __int64* v9;
  __int64* v10;
  int v11;
  int v12;
  int v13;
  bool v15;
  _QWORD* v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;
  struct {
    _QWORD v21[2];
    int v22;
    int v23;
    int v24;
    char v25;
  } v21_;
  struct {
    _QWORD v26[2];
    int v27;
    int v28;
    int v29;
    char v30;
  } v26_;
  struct {
    __int64 v31;
    int v32;
  } v31_;
  _QWORD** v33;
  struct {
    _QWORD* v34;
    __int64 v35;
    __int64 v36;
    __int64 v37;
    _BYTE* v38;
  } v34_;
  struct {
    __int64 v39;
    int v40;
  } v39_;
  _QWORD** v41;
  struct {
    _QWORD* v42;
    __int64 v43;
    __int64 v44;
    __int64 v45;
    _BYTE* v46;
  } v42_;

  v6 = (*(__int64 (**)(_DWORD*))(*(_QWORD*)a2 + 560LL))(a2);
  WORD1(v39_.v39) = 0;
  HIDWORD(v39_.v39) = 0;
  v42_.v43 = 0;
  v42_.v44 = 0;
  v42_.v45 = 0;
  v42_.v46 = nullptr;
  v41 = &v42_.v42;
  v42_.v42 = nullptr;
  GameRoutine_930b90_alt1((__int64)&v39_.v39, v6);
  v7 = (*(__int64 (**)(_DWORD*))(*(_QWORD*)a3 + 560LL))(a3);
  WORD1(v31_.v31) = 0;
  HIDWORD(v31_.v31) = 0;
  v34_.v35 = 0;
  v34_.v36 = 0;
  v34_.v37 = 0;
  v34_.v38 = nullptr;
  v33 = &v34_.v34;
  v34_.v34 = nullptr;
  GameRoutine_930b90_alt1((__int64)&v31_.v31, v7);
  if (BYTE3(v39_.v39) != 0) {
    v9 = game_UnitPool_Get_alt1((_BYTE*)&v39_.v39 + 3);
    if (BYTE3(v31_.v31) != 0) {
    LABEL_3:
      v10 = game_UnitPool_Get_alt1((_BYTE*)&v31_.v31 + 3);
      goto LABEL_6;
    }
  }
  else {
    v9 = nullptr;
    if (BYTE3(v31_.v31) != 0) {
      goto LABEL_3;
    }
  }
  v10 = nullptr;
LABEL_6:
  v11 = a2[26];
  v12 = a3[26];
  v13 =
      game_menu_AnimalPoolMenu_GetSumReliance(a1, (unsigned __int8*)&v39_.v39);
  v21_.v22 =
      game_menu_AnimalPoolMenu_GetSumReliance(a1, (unsigned __int8*)&v31_.v31);
  v21_.v23 = v12;
  v26_.v26[0] = &v39_.v39;
  v26_.v26[1] = v9;
  v26_.v27 = v13;
  v26_.v28 = v11;
  v26_.v29 = 0;
  v26_.v30 = 0;
  v21_.v21[0] = &v31_.v31;
  v21_.v21[1] = v10;
  v21_.v24 = 0;
  v21_.v25 = 0;
  v15 = GameRoutine_19efcc0_alt1(v26_.v26, v21_.v21);
  v31_.v31 = 0;
  v31_.v32 = 0;
  if ((v34_.v36 & 1) != 0) {
    *v34_.v38 = 0;
    v34_.v37 = 0;
  }
  else {
    LOWORD(v34_.v36) = 0;
  }
  GameRoutine_6e3b50_alt1((__int64)&v33, v34_.v34);
  v34_.v34 = nullptr;
  v34_.v35 = 0;
  v33 = &v34_.v34;
  if ((v34_.v36 & 1) != 0) {
    v16 = v34_.v38;
    if (v34_.v38 != nullptr) {
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v17 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, (__int64)v34_.v38);
      v16 = v34_.v34;
    }
  }
  else {
    v16 = nullptr;
  }
  GameRoutine_6e3b50_alt1((__int64)&v33, v16);
  v39_.v39 = 0;
  v39_.v40 = 0;
  if ((v42_.v44 & 1) != 0) {
    *v42_.v46 = 0;
    v42_.v45 = 0;
  }
  else {
    LOWORD(v42_.v44) = 0;
  }
  GameRoutine_6e3b50_alt1((__int64)&v41, v42_.v42);
  v42_.v42 = nullptr;
  v42_.v43 = 0;
  v41 = &v42_.v42;
  if ((v42_.v44 & 1) != 0) {
    v18 = v42_.v46;
    if (v42_.v46 != nullptr) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v19 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v19, (__int64)v42_.v46);
      v18 = v42_.v42;
    }
  }
  else {
    v18 = nullptr;
  }
  GameRoutine_6e3b50_alt1((__int64)&v41, v18);
  return v15;
}

__int64 ProcDeliveryAnimalMenu_Unknown151(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  unsigned int v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v11;

  v1 = result;
  v2 = 0;
  v3 = 0;
  v4 = 0;
  v5 = *(_QWORD*)(**(_QWORD**)(result + 1080) + 360LL);
  v6 = GameData_212cf88[0];
  v7 = GameData_212c8a0;
  do {
    v8 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v6 + 8LL) + 120LL);
    if (*(_BYTE*)(v8 + v2) != 0) {
      v9 =
          *(_QWORD*)(*(_QWORD*)(*v7 + 64) + 8LL * *(unsigned __int8*)(v8 + v2));
      if (*(_BYTE*)(v9 + 109) != 0 && v9 == v5) {
        if (*(_BYTE*)(v8 + v2 + 3) != 0) {
          v11 = game_UnitPool_Get(v8 + v2 + 3);
        }
        else {
          v11 = 0;
        }
        result = (*(__int64 (**)(__int64, __int64, _QWORD, __int64, _QWORD,
                                 _QWORD))(*(_QWORD*)v1 + 1192LL))(
            v1, v8 + v2, 0, v11, (unsigned int)v3, v4);
        if (result != 0) {
          result = GameRoutine_16e0c00(v1, result);
          ++v4;
        }
      }
    }
    ++v3;
    v2 += 64;
  } while (v3 != 200);
  return result;
}

_QWORD* ProcDeliveryAnimalMenu_171e4f0(_QWORD* result)
{
  _QWORD* v1;
  __int64 v2;

  if (result != nullptr) {
    v1 = result;
    ProcDeliveryAnimalMenu_171e4f0(*result);
    ProcDeliveryAnimalMenu_171e4f0(v1[1]);
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, v1);
  }
  return result;
}

__int64

game_menu_anonymous_ProcDeliveryAnimalMenu_ACall_closure0_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v1 = *(_QWORD*)(a1 + 8);
  (*(void (**)(__int64))(*(_QWORD*)(v1 + 1056) + 104LL))(v1 + 1056);
  v2 = v1;
  v3 = v1;
  v4 = GameData_212c610;
  v5 = GameData_2131c18[0];
  do {
    v6 = __dynamic_cast(v3, v4, v5, 0);
    v3 = *(_QWORD*)(v3 + 32);
    if (v6 != 0) {
      v2 = v6;
    }
  } while (v3 != 0);
  v7 = *(_QWORD*)(v2 + 152);
  if (v7 == 0) {
    v7 = v2;
  }
  GameRoutine_187dc60(*(_QWORD*)(v7 + 32), *(_QWORD*)(v1 + 1080), v1 + 1088);
  return 4;
}

__int64

game_menu_anonymous_ProcDeliveryAnimalMenu_BCall_closure_Invoke(__int64 a1)
{
  (*(void (**)(__int64))(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 1056LL) + 104LL))(
      *(_QWORD*)(a1 + 8) + 1056LL);
  return 5;
}

#pragma GCC visibility pop
