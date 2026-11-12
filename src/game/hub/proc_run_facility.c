#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_176d060(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_adf970(_QWORD, _QWORD);
__int64 Manager_d540c0(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_1ff0198[])();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_hub_ProcRunFacility_vtable[])();
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_21c9dc8;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 game_hub_ProcRunFacility_SetupPreEvent_closure_Invoke(__int64 result);
__int64 ProcRunFacility_Destructor_alt1(__int64 a1) __asm__(
    "ProcRunFacility_Destructor");
_QWORD* GameRoutine_efb8b0(__int64, __int64, __int64*);
__attribute__((swiftcall)) void game_db1620(PSEUDO_X8, unsigned __int64 result,
                                            __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HashString(__int64 result);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 strlen(_QWORD);
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
extern _UNKNOWN GameData_1aad280;
extern __int64 GameData_21f3d08;
extern __int64 fw_memory_g_heap_manager;
extern __int64 game_GameModeData_instance_;
void __attribute__((noreturn)) String_60a1d0();
__n128
game_hub_ProcRunFacility_SetupPreEvent_closure0_Invoke_alt1(__int64 a1) __asm__(
    "game_hub_ProcRunFacility_SetupPreEvent_closure0_Invoke");
_QWORD* GameHr_efb8b0(__int64, __int64, __int64*);
__attribute__((swiftcall)) void
game_db1620_alt1(PSEUDO_X8, __int64, __int64) __asm__("game_db1620");
__int64 game_ProcInst_Unregister_alt1(__int64 result) __asm__(
    "game_ProcInst_Unregister");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void GameRoutine_658c00_alt1(__int64*) __asm__("GameRoutine_658c00");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void game_hub_ProcRunFacility_SetupPreEvent_closure0_Invoke(__int64 a1);
void ProcRunFacility_Destructor(__int64 a1);

__int64 game_hub_ProcRunFacility_SetupPreEvent_closure_Invoke(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v1 = *(_QWORD*)(GameData_21c9dc8 + 64);
  if ((int)((unsigned __int64)(*(_QWORD*)(GameData_21c9dc8 + 72) - v1) >> 3) >=
      1) {
    v2 = *(_QWORD*)(result + 8);
    v3 = 0;
    v4 = 0;
    v5 = (_QWORD*)GameData_212dbb8[0];
    do {
      v6 = *(_QWORD*)(*(_QWORD*)(v1 + 8 * v3) + 40LL);
      result = Manager_d540c0(*v5);
      v1 = *(_QWORD*)(GameData_21c9dc8 + 64);
      if (v6 == result) {
        v4 = *(_QWORD*)(v1 + 8 * v3);
      }
      ++v3;
    } while (
        v3 <
        (int)((unsigned __int64)(*(_QWORD*)(GameData_21c9dc8 + 72) - v1) >> 3));
    if (v4 != 0) {
      v7 = *(_QWORD*)(v4 + 24);
      if ((*(_BYTE*)v7 & 1) != 0) {
        v8 = *(_QWORD*)(v7 + 16);
      }
      else {
        v8 = v7 + 1;
      }
      v9 = GameRoutine_adf970(*(_QWORD*)(v4 + 40), 0);
      return GameRoutine_176d060(v2, v8, "MID_NewAction_ExWarp", v9);
    }
  }
  return result;
}

void game_hub_ProcRunFacility_SetupPreEvent_closure0_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  const char* v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  char* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  struct {
    __int64 v11[2];
    char* v12;
  } v11_;
  struct {
    unsigned __int64 v13[2];
    const char* v14;
  } v13_;

  v1 = *(_QWORD*)(a1 + 8);
  v13_.v13[1] = (unsigned __int64)&GameData_1aad280;
  v13_.v13[0] = game_HashString((__int64)&GameData_1aad280);
  if (game_GameModeData_instance_ == 0) {
    return;
  }
  v2 = game_GameVariableTable_Find(
      *(_QWORD**)(game_GameModeData_instance_ + 48), v13_.v13);
  if (v2 == 0 || *(_DWORD*)(v2 + 32) == 0) {
    return;
  }
  game_db1620_alt1((void*)((__int64)v13_.v13),
                   (__int64)"MID_LGV_1ANH_c07_DN18_005_m02", 29);
  v3 = GameData_21f3d08;
  if ((v13_.v13[0] & 1) != 0) {
    v4 = v13_.v14;
  }
  else {
    v4 = (char*)v13_.v13 + 1;
  }
  v5 = strlen_alt1(v4);
  if (v5 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v6 = v5;
  if (v5 >= 0x17) {
    if ((v5 | 7) == 0x17) {
      v8 = 26;
    }
    else {
      v8 = (v5 | 7) + 1;
    }
    v7 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v8, 16,
                                               0);
    v11_.v11[1] = v6;
    v11_.v12 = v7;
    v11_.v11[0] = v8 | 1;
    goto LABEL_15;
  }
  LOBYTE(v11_.v11[0]) = 2 * v5;
  v7 = (char*)v11_.v11 + 1;
  if (v5 != 0) {
  LABEL_15:
    memmove_alt1((__int64)v7, (__int64)v4, v6);
  }
  v7[v6] = 0;
  GameHr_efb8b0(v3, v1, v11_.v11);
  if ((v11_.v11[0] & 1) != 0 && v11_.v12 != nullptr) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v9, (__int64)v11_.v12);
  }
  *(_DWORD*)(v1 + 152) = 3;
  if ((v13_.v13[0] & 1) != 0 && v13_.v14 != nullptr) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v10, (__int64)v13_.v14);
  }
}

void ProcRunFacility_Destructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;

  v1 = *(_QWORD*)(a1 + 240);
  *(_QWORD*)a1 = game_hub_ProcRunFacility_vtable;
  if (v1 == 0) {
    goto LABEL_14;
  }
  v3 = *(_QWORD*)(a1 + 248);
  if (v1 == v3) {
  LABEL_11:
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v8, v1);
    goto LABEL_14;
  }
  do {
    v5 = *(_QWORD**)(v3 - 16);
    v6 = v3 - 48;
    if ((_QWORD*)(v3 - 48) == v5) {
      v4 = 32;
    LABEL_5:
      (*(void (**)(__int64))(*v5 + v4))((__int64)v5);
      goto LABEL_6;
    }
    if (v5 != nullptr) {
      v4 = 40;
      goto LABEL_5;
    }
  LABEL_6:
    v3 = v6;
  } while (v6 != v1);
  v7 = *(_QWORD*)(a1 + 240);
  *(_QWORD*)(a1 + 248) = v1;
  v1 = v7;
  if (v7 != 0) {
    goto LABEL_11;
  }
LABEL_14:
  if ((*(_BYTE*)(a1 + 216) & 1) != 0) {
    v9 = *(_QWORD*)(a1 + 232);
    if (v9 != 0) {
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v10 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v10, v9);
    }
  }
  v11 = *(_QWORD**)(a1 + 192);
  *(_QWORD*)a1 = GameData_1ff0198;
  if (v11 == (_QWORD*)(a1 + 160)) {
    v12 = 32;
  LABEL_23:
    (*(void (**)(__int64))(*v11 + v12))((__int64)v11);
  }
  else if (v11 != nullptr) {
    v12 = 40;
    goto LABEL_23;
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister_alt1(a1);
  GameRoutine_658c00_alt1((__int64*)(a1 + 88));
}

#pragma GCC visibility pop
