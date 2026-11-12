#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_16dcd30(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16de1f0(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(long double, double);
__int64 ui_LayoutAccessor_FindPartsLayout(_QWORD, _QWORD);
extern __int64 (*GameData_2117538[])();
extern __int64 (*game_facility_anonymous_IndividualListMenu_vtable[])();
extern __int64 (*game_facility_anonymous_IndividualMultiMenu_vtable[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr[])();
extern __int64 (*game_menu_MultiMenu_vtable)();
extern __int64 GameData_21f3ff8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_UnitListSet_instance_;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_874520(_QWORD);
__int64 IndividualMenu_Unknown50(__int64 a1, __int64* a2);
__int64 IndividualMenu_Unknown35(__int64 a1);
__int64 GameRoutine_17b8f40(_QWORD, _QWORD);
extern __int64 GameData_2243960;
extern __int64 game_GameModeData_instance_;
extern __int64 game_hub_ProgressDisplayView_instance_;
extern __int64 game_hub_ProgressEventView_instance_;
extern __int64* GameData_212dcd0;
extern char GameData_226b868;
__int64 game_facility_IndividualMenu_CreateFirstReminderDialog_lambda1_Invoke(
    __int64 a1, __int64 a2);
__int64 game_facility_IndividualMenu_Run_lambda0_Invoke_1937550(__int64 a1);
__int64 game_facility_IndividualMenu_Run_lambda0_Invoke_19376d0(__int64 a1);
__int64 game_facility_IndividualMenu_Run_lambda2_Invoke();
__int64 GameRoutine_12dd710(_QWORD);
__int64 GameRoutine_12dd7e0(void);
__int64 GameRoutine_7a8220(_QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 strlen(_QWORD);
extern __int64 GameData_21c9650;
extern __int64 fw_memory_g_heap_manager;
void __attribute__((noreturn)) String_60a1d0(_QWORD);
__attribute__((swiftcall)) void IndividualMenu_Unknown33(PSEUDO_X8 x8_);
_QWORD* GameRoutine_12dd7e0_alt1(int) __asm__("GameRoutine_12dd7e0");
__int64 GameHr_12dd710(__int64);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void GameRoutine_7a8220_alt1(__int64*, _QWORD*) __asm__("GameRoutine_7a8220");
void __attribute__((noreturn)) String_60a1d0_alt1() __asm__("String_60a1d0");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");

__int64 IndividualMenu_Unknown50(__int64 a1, __int64* a2)
{
  __int64 result;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;

  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 192LL))(a1);
  v4 = a2[1];
  v5 = a2[2];
  if (v4 >= v5) {
    v7 = *a2;
    v8 = v4 - *a2;
    v9 = 1 - 0x3333333333333333LL * (v8 >> 3);
    if (v9 > 0x666666666666666LL) {
      GameRoutine_874520(result);
    }
    v10 = fw_memory_g_heap_manager_ptr;
    v11 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v5 - v7) >> 3);
    if (2 * v11 > v9) {
      v9 = 2 * v11;
    }
    if (v11 >= 0x333333333333333LL) {
      v12 = 0x666666666666666LL;
    }
    else {
      v12 = v9;
    }
    if (v12 != 0) {
      if (v12 > 0x666666666666666LL) {
        GameRoutine_60a210(result);
      }
      v13 = result;
      v14 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 40 * v12, 16, 0);
      LODWORD(result) = v13;
    }
    else {
      v14 = 0;
    }
    v15 = v14 + v8;
    *(_QWORD*)v15 = "ItemChange";
    *(_QWORD*)(v15 + 8) = "MID_KeyHelp_ItemChange";
    *(_DWORD*)(v15 + 20) = 0;
    *(_DWORD*)(v15 + 24) = result;
    *(_BYTE*)(v15 + 28) = 0;
    *(_QWORD*)(v15 + 32) = 0;
    *(_BYTE*)(v15 + 16) = 1;
    v16 = v14 + 40 * v12;
    v6 = v14 + v8 + 40;
    result = memcpy(v14, v7, v8);
    *a2 = v14;
    a2[1] = v6;
    a2[2] = v16;
    if (v7 != 0) {
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
        v17 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v10 + v17);
    }
  }
  else {
    *(_DWORD*)(v4 + 20) = 0;
    *(_DWORD*)(v4 + 24) = result;
    *(_BYTE*)(v4 + 28) = 0;
    *(_QWORD*)(v4 + 32) = 0;
    v6 = v4 + 40;
    *(_QWORD*)v4 = "ItemChange";
    *(_QWORD*)(v4 + 8) = "MID_KeyHelp_ItemChange";
    *(_BYTE*)(v4 + 16) = 1;
  }
  a2[1] = v6;
  return result;
}

__int64 IndividualMenu_Unknown35(__int64 a1)
{
  __int64 v2;
  long double v3;
  double v4;
  __int64 v5;
  __int64 (**v6)();
  __int64 v7;
  __int64 v8;
  char v9;
  __int64 v10;
  __int64 v11;
  __int64 (***v12)();
  __int64 v13;
  __int64 v14;
  __int64*** v15;
  __int64** v16;
  __int64** v17;
  __int64* v18;
  __int64* v19;
  _BOOL4 v20;
  __int64 v21;
  _QWORD* v22;
  _QWORD* v23;
  __int64 v24;
  __int64 (**v26)();
  __int64 v27;
  __int64 (***v28)();
  __int64 v29;

  v2 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      1072, 16, 0);
  if (*(_QWORD*)(a1 + 208) != 0 &&
      (v5 = std___1___shared_weak_count_lock(v3, v4)) != 0) {
    v6 = *(__int64 (***)())(a1 + 200);
    v7 = v5;
    v8 = ui_LayoutAccessor_FindPartsLayout(a1 + 200, "L_List");
    v9 = 0;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                              memory_order_relaxed);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                              memory_order_relaxed);
    v26 = v6;
    v27 = v7;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                              memory_order_relaxed);
  }
  else {
    v8 = ui_LayoutAccessor_FindPartsLayout(a1 + 200, "L_List");
    v7 = 0;
    v26 = nullptr;
    v27 = 0;
    v9 = 1;
  }
  GameRoutine_16dcd30(v2, "IndividualListMenu", &v26, v8);
  v10 = v27;
  if (v27 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    std___1___shared_weak_count___release_weak(v10);
  }
  *(_QWORD*)(v2 + 1056) = a1;
  *(_DWORD*)(v2 + 1064) = 0;
  *(_QWORD*)v2 = &game_menu_MultiMenu_vtable;
  *(_QWORD*)(v2 + 176) = game_menu_MenuInput_InputUnknown00_ptr;
  if ((v9 & 1) != 0) {
    *(_QWORD*)v2 = game_facility_anonymous_IndividualMultiMenu_vtable;
    *(_QWORD*)(v2 + 176) = game_menu_MenuInput_InputUnknown00_ptr;
    GameRoutine_16de1f0(v2, 3, 0);
  }
  else {
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak(v7);
    }
    *(_QWORD*)v2 = game_facility_anonymous_IndividualMultiMenu_vtable;
    *(_QWORD*)(v2 + 176) = game_menu_MenuInput_InputUnknown00_ptr;
    GameRoutine_16de1f0(v2, 3, 0);
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak(v7);
    }
  }
  *(_QWORD*)v2 = game_facility_anonymous_IndividualListMenu_vtable;
  v12 = &v26;
  *(_QWORD*)(v2 + 176) = game_menu_MenuInput_InputUnknown00_ptr;
  v13 = GameData_21f3ff8;
  *(_DWORD*)(GameData_21f3ff8 + 8) = -1;
  *(_DWORD*)(v13 + 44) = -1;
  v14 = *(_QWORD*)(v13 + 48);
  *(_QWORD*)(v13 + 12) = -1;
  *(_QWORD*)(v13 + 20) = -1;
  *(_QWORD*)(v13 + 28) = -1;
  *(_QWORD*)(v13 + 36) = -1;
  *(_QWORD*)(v13 + 56) = v14;
  *(_QWORD*)(v13 + 80) = *(_QWORD*)(v13 + 72);
  v26 = GameData_2117538;
  v15 = *(__int64****)(game_UnitListSet_instance_ + 8);
  v28 = &v26;
  v16 = *v15;
  v17 = v15[1];
  if (*v15 == v17) {
    goto LABEL_33;
  }
  do {
    v18 = *v16;
    v19 = v16[1];
    if (v19 != nullptr) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 1), 1u,
                                memory_order_relaxed);
    }
    if (v18 != nullptr) {
      v20 = (v18[6] & 0x20) == 0;
      if (v19 == nullptr) {
        goto LABEL_25;
      }
    }
    else {
      v20 = false;
      if (v19 == nullptr) {
        goto LABEL_25;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 1),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64*))(*v19 + 16))(v19);
      std___1___shared_weak_count___release_weak(v19);
      if (!v20) {
        goto LABEL_17;
      }
      goto LABEL_26;
    }
  LABEL_25:
    if (v20) {
    LABEL_26:
      v29 = **v16;
      if (v28 == nullptr) {
        GameRoutine_60a310(0, v11);
      }
      ((void (*)(__int64 (***)(), __int64*))(*v28)[6])(v28, &v29);
    }
  LABEL_17:
    v16 += 2;
  } while (v16 != v17);
  v12 = v28;
  if (v28 != &v26) {
    if (v28 != nullptr) {
      v21 = 5;
      goto LABEL_34;
    }
    goto LABEL_35;
  }

LABEL_33:
  v21 = 4;

LABEL_34:
  ((void (*)(__int64 (***)()))(*v12)[v21])(v12);

LABEL_35:
  v23 = *(_QWORD**)(v2 + 256);
  v22 = *(_QWORD**)(v2 + 264);
  *(_QWORD*)(v2 + 336) = 0;
  while (v23 != v22) {
    if (*v23 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v23 + 8LL))(*v23);
      v22 = *(_QWORD**)(v2 + 264);
    }
    ++v23;
  }
  v24 = *(_QWORD*)(v2 + 344);
  if (v24 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v24 + 8LL))(v24);
    *(_QWORD*)(v2 + 344) = 0;
  }
  *(_QWORD*)(v2 + 264) = *(_QWORD*)(v2 + 256);
  *(_QWORD*)(v2 + 240) = *(_QWORD*)(v2 + 232);
  (*(void (**)(__int64))(*(_QWORD*)v2 + 1024LL))(v2);
  (*(void (**)(__int64))(*(_QWORD*)v2 + 1032LL))(v2);
  if ((v9 & 1) == 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
  }
  return v2;
}

__attribute__((swiftcall)) void IndividualMenu_Unknown33(PSEUDO_X8 x8_)
{
  __int64* a1 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v2;
  _QWORD* v3;
  const char* v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  char* v7;
  __int64 v8;
  __int64 v9;
  __int128 v10;
  char* v11;

  a1[1] = 0;
  a1[2] = 0;
  *a1 = 0;
  BYTE13(v10) = 0;
  LOBYTE(v10) = 24;
  *(_DWORD*)((char*)&v10 + 9) = -1785993844;
  *(_QWORD*)((char*)&v10 + 1) = 0xA1E8A588E58B80E5LL;
  GameRoutine_7a8220_alt1(a1, &v10);
  if ((v10 & 1) != 0 && v11 != nullptr) {
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, (__int64)v11);
  }
  if ((unsigned int)GameHr_12dd710(GameData_21c9650) == 2) {
    v3 = GameRoutine_12dd7e0_alt1(2);
    if (v3 != nullptr) {
      v4 = (const char*)v3[1];
      v5 = strlen_alt1(v4);
      if (v5 >= 0xFFFFFFFFFFFFFFF7LL) {
        String_60a1d0_alt1();
      }
      v6 = v5;
      if (v5 >= 0x17) {
        if ((v5 | 7) == 0x17) {
          v8 = 26;
        }
        else {
          v8 = (v5 | 7) + 1;
        }
        v7 = (char*)fw_memory_HeapManager_Allocate_alt1(
            fw_memory_g_heap_manager, v8, 16, 0);
        *((_QWORD*)&v10 + 1) = v6;
        v11 = v7;
        *(_QWORD*)&v10 = v8 | 1;
      }
      else {
        LOBYTE(v10) = 2 * v5;
        v7 = (char*)&v10 + 1;
        if (v5 == 0) {
          goto LABEL_17;
        }
      }
      memmove_alt1((__int64)v7, (__int64)v4, v6);
    LABEL_17:
      v7[v6] = 0;
      GameRoutine_7a8220_alt1(a1, &v10);
      if ((v10 & 1) != 0 && v11 != nullptr) {
        v9 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v9 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v9, (__int64)v11);
      }
    }
  }
}

__int64 game_facility_IndividualMenu_CreateFirstReminderDialog_lambda1_Invoke(
    __int64 a1, __int64 a2)
{
  *(_BYTE*)(*(_QWORD*)a2 + 83LL) = 1;
  return 0;
}

__int64 game_facility_IndividualMenu_Run_lambda0_Invoke_1937550(__int64 a1)
{
  int v1;
  int v2;

  v1 = *(_DWORD*)(a1 + 8);
  if (v1 <= 1) {
    v1 = 1;
  }
  *(_DWORD*)(*GameData_212dcd0 + 16) = v1;
  if (GameData_2243960 != 0) {
    v2 = 2;
    if (game_GameModeData_instance_ != 0) {
      if (*(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
        v2 = 6;
      }
      else {
        v2 = 2;
      }
    }
    *(_DWORD*)(GameData_2243960 + 152) = v2;
  }
  GameData_226b868 = 1;
  if (game_hub_ProgressEventView_instance_ != 0) {
    GameRoutine_17b8f40(game_hub_ProgressEventView_instance_, 1);
  }
  return 6;
}

__int64 game_facility_IndividualMenu_Run_lambda0_Invoke_19376d0(__int64 a1)
{
  int v1;
  int v2;

  v1 = *(_DWORD*)(a1 + 8);
  if (v1 <= 1) {
    v1 = 1;
  }
  *(_DWORD*)(*GameData_212dcd0 + 16) = v1;
  if (GameData_2243960 != 0) {
    v2 = 2;
    if (game_GameModeData_instance_ != 0) {
      if (*(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
        v2 = 6;
      }
      else {
        v2 = 2;
      }
    }
    *(_DWORD*)(GameData_2243960 + 152) = v2;
  }
  GameData_226b868 = 1;
  if (game_hub_ProgressEventView_instance_ != 0) {
    GameRoutine_17b8f40(game_hub_ProgressEventView_instance_, 1);
  }
  return 6;
}

__int64 game_facility_IndividualMenu_Run_lambda2_Invoke()
{
  if (game_hub_ProgressEventView_instance_ != 0 &&
      game_hub_ProgressDisplayView_instance_ != 0) {
    *(_BYTE*)(game_hub_ProgressDisplayView_instance_ + 153) = 1;
  }
  return 3;
}

#pragma GCC visibility pop
