#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64* GameRoutine_116c400(__int64* result, __int64);
__n128 GameRoutine_113ff20(__int64, int, __int64*);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*decltype_c81af0_ptr[6])();
extern __int64 (*game_map_MapUnitUseActiveSkillEvent_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
void game_script_map_event_116f040(_QWORD* a1, __int64 a2);

void game_script_map_event_116f040(_QWORD* a1, __int64 a2)
{

#pragma clang fp contract(off)
  __n128 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  struct {
    __int64 v11[3];
    __int64 v12;
    __int64 v13;
    char gap40_[24];
    char v14;
    char gap65_[15];
    __int64 v15;
  } v11_;
  char v16;

  GameRoutine_116c400(v11_.v11, a2);
  v3 = GameRoutine_113ff20((__int64)a1, 21, v11_.v11);
  if ((v11_.v14 & 1) != 0 && v11_.v15 != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    v3 = nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v4);
  }
  v5 = v11_.v12;
  if (v11_.v12 != 0) {
    v6 = v11_.v13;
    if (v11_.v12 == v11_.v13) {
      goto LABEL_13;
    }
    do {
      v7 = *(unsigned int*)(v6 - 8);
      v8 = v6 - 32;
      if ((_DWORD)v7 != -1) {
        ((void (*)(char*, __int64, long double))decltype_c81af0_ptr[v7])(
            &v16, v6 - 32, *(long double*)&v3);
      }
      *(_DWORD*)(v6 - 8) = -1;
      v6 -= 32;
    } while (v8 != v5);
    v11_.v13 = v5;
    if (v11_.v12 != 0) {
    LABEL_13:
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v9 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v9);
    }
  }
  if ((v11_.v11[0] & 1) != 0 && v11_.v11[2] != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v10);
  }
  *a1 = game_map_MapUnitUseActiveSkillEvent_vtable;
}

#pragma GCC visibility pop
