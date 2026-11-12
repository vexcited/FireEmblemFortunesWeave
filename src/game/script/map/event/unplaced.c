#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64* GameRoutine_116c400(__int64* result, __int64);
__n128 GameRoutine_113ff20(__int64, int, __int64*);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*decltype_c81af0_ptr[6])();
extern __int64 (*game_map_MapUnitUseActiveSkillEvent_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
void game_script_map_event_116f040(_QWORD* a1, __int64 a2);
void GameHr_113ff20(__int64, int, __int64*);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");

void game_script_map_event_116f040(_QWORD* a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  struct {
    __int64 v10[2];
    __int64 v11;
    __int64 v12;
    __int64 v13;
    char gap40_[24];
    char v14;
    char gap65_[15];
    __int64 v15;
  } v10_;
  char v16;

  GameRoutine_116c400(v10_.v10, a2);
  GameHr_113ff20((__int64)a1, 21, v10_.v10);
  if ((v10_.v14 & 1) != 0 && v10_.v15 != 0) {
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, v10_.v15);
  }
  v4 = v10_.v12;
  if (v10_.v12 != 0) {
    v5 = v10_.v13;
    if (v10_.v12 == v10_.v13) {
      goto LABEL_13;
    }
    do {
      v6 = *(unsigned int*)(v5 - 8);
      v7 = v5 - 32;
      if ((_DWORD)v6 != -1) {
        ((void (*)(char*, __int64))decltype_c81af0_ptr[v6])(&v16, v5 - 32);
      }
      *(_DWORD*)(v5 - 8) = -1;
      v5 -= 32;
    } while (v7 != v4);
    v10_.v13 = v4;
    v4 = v10_.v12;
    if (v10_.v12 != 0) {
    LABEL_13:
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v8, v4);
    }
  }
  if ((v10_.v10[0] & 1) != 0 && v10_.v11 != 0) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v9, v10_.v11);
  }
  *a1 = game_map_MapUnitUseActiveSkillEvent_vtable;
}

#pragma GCC visibility pop
