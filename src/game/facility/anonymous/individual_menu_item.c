#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_159e7c0(_QWORD, _QWORD);
__int64 GameRoutine_947af0(void);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
__int64 game_sound_PlayListRightSe(void);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(long double, double);
extern __int64 (*game_facility_anonymous_IndividualMenuItem_vtable[])();
extern __int64 (*game_menu_BasicMenuItem_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212dcd0;
extern int game_script_hub_ui_g_talk_result;
__int64 IndividualMenuItem_Destructor_1935f60_alt1(__int64 a1) __asm__(
    "IndividualMenuItem_Destructor_1935f60");
__int64 IndividualMenuItem_DeletingDestructor_alt1(__int64 a1) __asm__(
    "IndividualMenuItem_DeletingDestructor");
__int64 IndividualMenuItem_Unknown25(__int64 a1);
__int64 IndividualMenuItem_UpCall(__int64 a1, char a2);
__int64 BasicMenuCursor_16ddaa0(_QWORD, _QWORD);
__int64 GameRoutine_65a180(_QWORD);
_QWORD* IndividualMenuItem_OnClose(_QWORD* result);
__int64 ProcInst_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 ProcNextSeq_16af630(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_ProcInst_Register(_QWORD);
extern _UNKNOWN* GameData_21319e0;
extern __int64* GameData_2130240[8];
extern __int64* GameData_2131b60;
extern __int64 GameData_212c608[2];
extern __int64 GameData_2132370[2];
extern __int64 game_GameModeData_instance_;
extern char* GameData_2131b68[4];
extern int* GameData_2131b58[2];
__int64 IndividualMenuItem_ACall(_QWORD* a1);
__int64 GameRoutine_159e7c0_alt1(__int64, char) __asm__("GameRoutine_159e7c0");
__int64
game_VariableManager_SetFlag_alt1(__int64 result,
                                  int) __asm__("game_VariableManager_SetFlag");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 Alignment_56b600(__int64 result);
__int64 GameHr_1575f30(__int64 result, __int64);
__int64 GameRoutine_1572370(__int64, char);
__int64 LayoutAccessor_1562060(__int64 result, __int64, __int64);
__int64 Manager_136a920(__int64, __int64, int, unsigned int, _BYTE*);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindAlignment(__int64*, __int64);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
char* GameRoutine_60a020(char*, const char*);
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64 ui_Manager_instance_;
extern char* GameData_2118498[4];
extern char GameData_1a9f09e;
void GameRoutine_1936870(__int64*, char);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64* IndividualMenuItem_Unknown16(_QWORD* a1);
void IndividualMenuItem_OnSelect(__int64 a1);
void IndividualMenuItem_OnDeselect(__int64 a1);
__int64 IndividualMenuItem_DownCall(__int64 a1, char a2);
void IndividualMenuItem_DrawText(__int64 a1);
void IndividualMenuItem_Destructor_1935f60(__int64 a1);
void IndividualMenuItem_DeletingDestructor(__int64 a1);

bool IndividualMenuItem_IsDecidable()
{
  return (unsigned int)GameRoutine_947af0() < 0x400000;
}

_QWORD* IndividualMenuItem_OnClose(_QWORD* result)
{
  __int64 v1;

  v1 = result[1];
  if (game_script_hub_ui_g_talk_result == 1) {
    if (v1 != 0) {
    LABEL_3:
      GameRoutine_65a180(result[1]);
      return (_QWORD*)BasicMenuCursor_16ddaa0(v1, 4);
    }
  }
  else if (v1 != 0 && game_script_hub_ui_g_talk_result == 2) {
    goto LABEL_3;
  }
  if (*(_QWORD**)(v1 + 336) == result) {
    return (_QWORD*)(*(__int64 (**)(_QWORD*, _QWORD))(*result + 64LL))(result,
                                                                       0);
  }
  return result;
}

__int64 IndividualMenuItem_ACall(_QWORD* a1)
{
  __int64 v2;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;

  if (((*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1) & 1) == 0) {
    return 1;
  }
  if (game_GameModeData_instance_ == 0) {
    v2 = a1[1];
    goto LABEL_7;
  }
  v2 = a1[1];
  if (*(_DWORD*)(game_GameModeData_instance_ + 60) != 3) {
  LABEL_7:
    *GameData_2131b68[0] = 0;
    *GameData_2131b58[0] = 0;
    v4 = GameData_2131b60;
    *GameData_2131b60 = 0;
    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v4) = 0;
    v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        360, 16, 0);
    *(_QWORD*)(v5 + 144) = 0;
    *(_QWORD*)(v5 + 152) = 0;
    *(_QWORD*)(v5 + 160) = 0;
    *(_QWORD*)(v5 + 168) = 0;
    v6 = v5;
    *(_QWORD*)(v5 + 176) = 0;
    *(_QWORD*)(v5 + 184) = 0;
    *(_QWORD*)(v5 + 192) = 0;
    *(_QWORD*)(v5 + 200) = 0;
    *(_QWORD*)(v5 + 208) = 0;
    *(_QWORD*)(v5 + 216) = 0;
    *(_QWORD*)(v5 + 224) = 0;
    *(_QWORD*)(v5 + 240) = 0;
    *(_QWORD*)(v5 + 248) = 0;
    *(_QWORD*)(v5 + 256) = 0;
    *(_QWORD*)(v5 + 264) = 0;
    *(_QWORD*)(v5 + 272) = 0;
    *(_QWORD*)(v5 + 280) = 0;
    *(_QWORD*)(v5 + 288) = 0;
    *(_QWORD*)(v5 + 296) = 0;
    *(_QWORD*)(v5 + 304) = 0;
    *(_QWORD*)(v5 + 312) = 0;
    *(_QWORD*)(v5 + 320) = 0;
    *(_QWORD*)(v5 + 328) = 0;
    *(_QWORD*)(v5 + 336) = 0;
    *(_QWORD*)(v5 + 344) = 0;
    *(_QWORD*)(v5 + 232) = 0;
    v7 = (_QWORD*)(v5 + 232);
    v8 = GameData_212c608[0] + 16;
    *(_QWORD*)(v5 + 352) = 0;
    *(_QWORD*)(v5 + 96) = 0;
    *(_QWORD*)(v5 + 104) = 0;
    *(_QWORD*)(v5 + 112) = 0;
    *(_QWORD*)(v5 + 120) = 0;
    *(_QWORD*)(v5 + 128) = 0;
    *(_WORD*)(v5 + 136) = 0;
    *(_QWORD*)(v5 + 16) = 0;
    *(_QWORD*)(v5 + 24) = "NULL";
    *(_QWORD*)(v5 + 138) = 0;
    *(_QWORD*)(v5 + 144) = 0;
    *(_QWORD*)(v5 + 32) = 0;
    *(_QWORD*)(v5 + 40) = 0;
    *(_QWORD*)(v5 + 48) = 0;
    *(_QWORD*)(v5 + 56) = 0;
    *(_QWORD*)(v5 + 64) = 0;
    *(_QWORD*)(v5 + 72) = 0;
    *(_QWORD*)(v5 + 80) = 0;
    *(_QWORD*)(v5 + 88) = 0;
    *(_QWORD*)v5 = v8;
    *(_QWORD*)(v5 + 8) = 0;
    game_ProcInst_Register(v5);
    *(_BYTE*)(v6 + 168) = 0;
    v9 = GameData_2130240[0];
    *(_BYTE*)(v6 + 172) = 0;
    *v7 = 0;
    *(_QWORD*)(v6 + 192) = 0;
    *(_QWORD*)(v6 + 200) = 0;
    *(_QWORD*)(v6 + 208) = 0;
    *(_QWORD*)(v6 + 216) = 0;
    *(_QWORD*)(v6 + 224) = v7;
    *(_QWORD*)(v6 + 240) = 0;
    *(_QWORD*)(v6 + 248) = 0;
    *(_QWORD*)(v6 + 256) = 0;
    *(_QWORD*)(v6 + 264) = 0;
    *(_QWORD*)(v6 + 272) = 0;
    *(_QWORD*)(v6 + 344) = 0;
    *(_QWORD*)(v6 + 352) = 0;
    *(_QWORD*)(v6 + 328) = 0;
    *(_QWORD*)(v6 + 336) = 0;
    *(_QWORD*)(v6 + 312) = 0;
    *(_QWORD*)(v6 + 320) = 0;
    *(_QWORD*)(v6 + 296) = 0;
    *(_QWORD*)(v6 + 304) = 0;
    *(_QWORD*)(v6 + 288) = 0;
    *(_QWORD*)(v6 + 152) = 0;
    *(_QWORD*)(v6 + 160) = v9 + 2;
    *(_DWORD*)(v6 + 280) = 1065353216;
    v10 = GameData_2132370[0] + 440;
    *(_QWORD*)v6 = GameData_2132370[0] + 16;
    *(_QWORD*)(v6 + 176) = v10;
    *(_QWORD*)(v6 + 184) = 0;
    ProcInst_657850(v6, GameData_21319e0, "IndividualMenu", 1, v2);
    return 9;
  }
  ProcNextSeq_16af630(v2);
  return 9;
}

void IndividualMenuItem_Destructor_1935f60(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  *(_QWORD*)a1 = game_facility_anonymous_IndividualMenuItem_vtable;
  v2 = *(_QWORD*)(a1 + 104);
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v2);
  }
  v3 = *(_QWORD*)(a1 + 56);
  *(_QWORD*)a1 = game_menu_BasicMenuItem_vtable;
  if (v3 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v3);
  }
  if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
    v4 = *(_QWORD*)(a1 + 32);
    if (v4 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v4);
    }
  }
}

void IndividualMenuItem_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  *(_QWORD*)a1 = game_facility_anonymous_IndividualMenuItem_vtable;
  v2 = *(_QWORD*)(a1 + 104);
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v2);
  }
  v3 = *(_QWORD*)(a1 + 56);
  *(_QWORD*)a1 = game_menu_BasicMenuItem_vtable;
  if (v3 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v3);
  }
  v4 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 32);
    if (v5 != 0) {
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, v5);
    }
  }
  v7 = 128;
  if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
    v7 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v7, a1);
}

__int64* IndividualMenuItem_Unknown16(_QWORD* a1)
{
  __int64* result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  struct {
    __int64 v8;
    __int64* v9;
  } v8_;

  result = (__int64*)a1[7];
  if (result != nullptr) {
    result = (__int64*)std___1___shared_weak_count_lock_alt1((__int64)result);
    if (result != nullptr) {
      v3 = (__int64)result;
      result = (__int64*)a1[6];
      if (result != nullptr) {
        LayoutAccessor_1560070((void*)(&v8_.v8), result, "L_Change");
        v5 = v8_.v8;
        v4 = (__int64)v8_.v9;
        result = (__int64*)a1[13];
        v8_.v8 = 0;
        v8_.v9 = nullptr;
        a1[12] = v5;
        a1[13] = v4;
        if (result != nullptr) {
          std___1___shared_weak_count___release_weak_alt1((__int64)result);
          result = v8_.v9;
          if (v8_.v9 != nullptr) {
            result = (__int64*)std___1___shared_weak_count___release_weak_alt1(
                (__int64)v8_.v9);
          }
          v5 = a1[12];
          v4 = a1[13];
        }
        if (v4 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                                    memory_order_relaxed);
          v6 = std___1___shared_weak_count_lock_alt1(v4);
          if (v6 != 0) {
            v7 = v6;
            if (v5 != 0) {
              GameRoutine_1572370(v5, 0);
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
              std___1___shared_weak_count___release_weak_alt1(v7);
            }
          }
          result =
              (__int64*)std___1___shared_weak_count___release_weak_alt1(v4);
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
        return (__int64*)std___1___shared_weak_count___release_weak_alt1(v3);
      }
    }
  }
  return result;
}

void IndividualMenuItem_OnSelect(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v2 = 512;
  if (*(_BYTE*)(a1 + 79) != 0) {
    v2 = 520;
  }
  (*(void (**)(__int64))(*(_QWORD*)a1 + v2))((__int64)a1);
  v3 = *(_QWORD*)(a1 + 104);
  if (v3 != 0) {
    v4 = *(_QWORD*)(a1 + 96);
    v5 = *(_QWORD*)(a1 + 104);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                              memory_order_relaxed);
    v6 = std___1___shared_weak_count_lock_alt1(v5);
    if (v6 != 0) {
      v7 = v6;
      if (v4 != 0) {
        GameRoutine_1572370(v4, 1);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        std___1___shared_weak_count___release_weak_alt1(v7);
      }
    }
    std___1___shared_weak_count___release_weak_alt1(v3);
  }
  GameRoutine_1936870((__int64*)a1, 1);
}

void IndividualMenuItem_OnDeselect(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v2 = 504;
  if (*(_BYTE*)(a1 + 79) != 0) {
    v2 = 520;
  }
  (*(void (**)(__int64))(*(_QWORD*)a1 + v2))((__int64)a1);
  v3 = *(_QWORD*)(a1 + 104);
  if (v3 != 0) {
    v4 = *(_QWORD*)(a1 + 96);
    v5 = *(_QWORD*)(a1 + 104);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                              memory_order_relaxed);
    v6 = std___1___shared_weak_count_lock_alt1(v5);
    if (v6 != 0) {
      v7 = v6;
      if (v4 != 0) {
        GameRoutine_1572370(v4, 0);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        std___1___shared_weak_count___release_weak_alt1(v7);
      }
    }
    std___1___shared_weak_count___release_weak_alt1(v3);
  }
  GameRoutine_1936870((__int64*)a1, 0);
}

__int64 IndividualMenuItem_Unknown25(__int64 a1)
{
  unsigned int v1;

  v1 = 1;
  if (((*(__int64 (**)(__int64, __int64))(*(_QWORD*)a1 + 312LL))(a1, 1) & 1) !=
      0) {
    game_sound_PlayListRightSe();
    return 13;
  }
  return v1;
}

__int64 IndividualMenuItem_UpCall(__int64 a1, char a2)
{
  __int64 v2;
  __int64* v4;
  __int64 v5;
  unsigned int v6;
  int v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  v2 = *(int*)(a1 + 40);
  v4 = GameData_212dcd0;
  v5 = *GameData_212dcd0;
  if ((a2 & 1) == 0 && *(int*)(*(_QWORD*)(v5 + 72) + 4 * v2) > 2) {
    return 0;
  }
  v6 = *(unsigned __int8*)(a1 + 112);
  if (v6 <= 1) {
    v7 = 1;
  }
  else {
    v7 = *(unsigned __int8*)(a1 + 112);
  }
  if (v6 <= 2) {
    v8 = v7 + 1;
  }
  else {
    v8 = 1;
  }
  *(_BYTE*)(a1 + 112) = v8;
  v9 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v5 + 48) + 8 * v2) + 392LL);
  if (v9 != 0) {
    game_VariableManager_SetFlag_alt1(*(_QWORD*)(v9 + 24) + 1352LL,
                                      (unsigned __int8)v8);
    v5 = *v4;
    v2 = *(int*)(a1 + 40);
  }
  *(_DWORD*)(*(_QWORD*)(v5 + 72) + 4 * v2) = v8;
  (*(void (**)(__int64))(*(_QWORD*)a1 + 440LL))(a1);
  v10 = *(_QWORD*)(a1 + 104);
  if (v10 != 0) {
    v11 = *(_QWORD*)(a1 + 96);
    v12 = *(_QWORD*)(a1 + 104);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 16), 1u,
                              memory_order_relaxed);
    v13 = std___1___shared_weak_count_lock_alt1(v12);
    if (v13 != 0) {
      v14 = v13;
      if (v11 != 0) {
        GameRoutine_159e7c0_alt1(v11, 0);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
        std___1___shared_weak_count___release_weak_alt1(v14);
      }
    }
    std___1___shared_weak_count___release_weak_alt1(v10);
  }
  return 1;
}

__int64 IndividualMenuItem_DownCall(__int64 a1, char a2)
{
  __int64 v2;
  __int64* v4;
  __int64 v5;
  unsigned int v6;
  unsigned int v7;
  int v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;

  v2 = *(int*)(a1 + 40);
  v4 = GameData_212dcd0;
  v5 = *GameData_212dcd0;
  if ((a2 & 1) == 0 && *(int*)(*(_QWORD*)(v5 + 72) + 4 * v2) < 2) {
    return 0;
  }
  v6 = *(unsigned __int8*)(a1 + 112);
  if (v6 <= 1) {
    v6 = 1;
  }
  v7 = v6 - 1;
  if (v7 != 0) {
    v8 = v7;
  }
  else {
    v8 = 3;
  }
  if (v7 > 3) {
    v9 = 1;
  }
  else {
    v9 = v8;
  }
  *(_BYTE*)(a1 + 112) = v9;
  v10 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v5 + 48) + 8 * v2) + 392LL);
  if (v10 != 0) {
    game_VariableManager_SetFlag_alt1(*(_QWORD*)(v10 + 24) + 1352LL, v9);
    v5 = *v4;
    v2 = *(int*)(a1 + 40);
  }
  *(_DWORD*)(*(_QWORD*)(v5 + 72) + 4 * v2) = v9;
  (*(void (**)(__int64))(*(_QWORD*)a1 + 440LL))(a1);
  v11 = *(_QWORD*)(a1 + 104);
  if (v11 != 0) {
    v12 = *(_QWORD*)(a1 + 96);
    v13 = *(_QWORD*)(a1 + 104);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 16), 1u,
                              memory_order_relaxed);
    v14 = std___1___shared_weak_count_lock_alt1(v13);
    if (v14 != 0) {
      v15 = v14;
      if (v12 != 0) {
        GameRoutine_159e7c0_alt1(v12, 1);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
        std___1___shared_weak_count___release_weak_alt1(v15);
      }
    }
    std___1___shared_weak_count___release_weak_alt1(v11);
  }
  return 1;
}

void IndividualMenuItem_DrawText(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned int v15;
  unsigned __int8* v16;
  char* v17;
  char* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21[3];

  v2 = *(_QWORD*)(a1 + 56);
  if (v2 != 0) {
    v3 = std___1___shared_weak_count_lock_alt1(v2);
    if (v3 != 0) {
      v4 = v3;
      v5 = *(_QWORD*)(a1 + 48);
      if (v5 != 0) {
        v6 = *(int*)(a1 + 40);
        v7 = *(_QWORD*)(*GameData_212dcd0 + 48);
        if (v6 >= (*(_QWORD*)(*GameData_212dcd0 + 56) - v7) >> 3) {
          v8 = 0;
        }
        else {
          v8 = *(_QWORD*)(v7 + 8 * v6);
        }
        GameHr_1575f30(v5, v8);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        std___1___shared_weak_count___release_weak_alt1(v4);
      }
    }
  }
  v9 = *(_QWORD*)(a1 + 104);
  if (v9 != 0) {
    v10 = std___1___shared_weak_count_lock_alt1(v9);
    if (v10 != 0) {
      v11 = *(__int64**)(a1 + 96);
      v12 = v10;
      if (v11 == nullptr) {
      LABEL_36:
        if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
          std___1___shared_weak_count___release_weak_alt1(v12);
        }
        return;
      }
      ui_LayoutAccessor_SetPaneVisible(*(_QWORD*)(a1 + 96), (__int64)"Icon", 1);
      v13 = ui_LayoutAccessor_FindPane(v11, (__int64)"Icon");
      if (v13 != 0) {
        v14 = __dynamic_cast(v13, GameData_212d670[0], GameData_212d678[0], 0);
        v16 = (unsigned __int8*)(a1 + 112);
        v15 = *(unsigned __int8*)(a1 + 112);
        if (v14 == 0) {
        LABEL_21:
          LOWORD(v21[0]) = 0;
          v18 = (char*)v21 + 1;
          switch (v15) {
          case 3u:
            GameRoutine_60a020((char*)v21, "MID_IndividualMenu_ActualCombat");
            if ((v21[0] & 1) != 0) {
              v18 = (char*)v21[2];
            }
            else {
              v18 = (char*)v21 + 1;
            }
            break;
          case 2u:
            strcpy((char*)v21, ",MID_ArenaMenu_Training");
            break;
          case 1u:
            strcpy((char*)v21, "(MID_GmapMenu_Explore");
            break;
          default:
            break;
          }
          LayoutAccessor_1562060((__int64)v11, (__int64)"T_Txt", (__int64)v18);
          v19 = ui_LayoutAccessor_FindAlignment(v11, (__int64)"A_Txt");
          if (v19 != 0) {
            Alignment_56b600(v19);
          }
          GameRoutine_1936870((__int64*)a1,
                              *(_QWORD*)(*(_QWORD*)(a1 + 8) + 336LL) == a1);
          if ((v21[0] & 1) != 0 && v21[2] != 0) {
            v20 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v20 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v20, v21[2]);
          }
          goto LABEL_36;
        }
        if (v15 > 3) {
          v17 = &GameData_1a9f09e;
        }
        else {
          v17 = GameData_2118498[*(unsigned __int8*)(a1 + 112)];
        }
        Manager_136a920(ui_Manager_instance_ + 1264, v14, 0, 7u, v17);
      }
      else {
        v16 = (unsigned __int8*)(a1 + 112);
      }
      v15 = *v16;
      goto LABEL_21;
    }
  }
}

#pragma GCC visibility pop
