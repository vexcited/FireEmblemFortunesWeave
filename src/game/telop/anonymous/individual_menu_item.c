#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1750310(__int64, int);
__int64 GameRoutine_1758480(_QWORD, _QWORD);
__int64 GameRoutine_1758970(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak();
extern __int64 (*game_gameui_GaugeUtil_ExpChange_vtable[])();
extern __int64 (*game_menu_BasicMenuItem_vtable[])();
extern __int64 (*game_telop_anonymous_IndividualMenuItem_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 IndividualMenuItem_Destructor_1756c80(__int64 a1);
__int64 IndividualMenuItem_Unknown73_1758340(__int64 a1, __int64 a2);
__int64 IndividualMenuItem_Unknown75(__int64 result);

__int64 IndividualMenuItem_Destructor_1756c80(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  _QWORD* v8;
  _QWORD* v9;
  __int64 v10;
  bool v11;
  _QWORD* v12;
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
  __int64 result;
  __int64 v27;
  __int64 v28;

  v1 = *(_QWORD*)(a1 + 384);
  *(_QWORD*)a1 = game_telop_anonymous_IndividualMenuItem_vtable;
  if (v1 != 0) {
    v3 = *(_QWORD*)(a1 + 392);
    if (v1 == v3) {
      goto LABEL_8;
    }
    do {
      if (*(_QWORD*)(v3 - 8) != 0) {
        std___1___shared_weak_count___release_weak();
      }
      v3 -= 16;
    } while (v3 != v1);
    v4 = *(_QWORD*)(a1 + 384);
    *(_QWORD*)(a1 + 392) = v1;
    v1 = v4;
    if (v4 != 0) {
    LABEL_8:
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v5,
                                    v1);
    }
  }
  v6 = *(_QWORD**)(a1 + 360);
  if (v6 != nullptr) {
    v7 = *(_QWORD**)(a1 + 368);
    if (v6 == v7) {
      goto LABEL_17;
    }
    v8 = v7 - 20;
    v9 = v7 - 20;
    do {
      v10 = *v9;
      v9 -= 20;
      (*(void (**)(_QWORD*))(v10 + 24))(v8);
      v11 = v8 == v6;
      v8 = v9;
    } while (!v11);
    v12 = *(_QWORD**)(a1 + 360);
    *(_QWORD*)(a1 + 368) = v6;
    v6 = v12;
    if (v12 != nullptr) {
    LABEL_17:
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v13 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v13, v6);
    }
  }
  *(_QWORD*)(a1 + 224) = game_gameui_GaugeUtil_ExpChange_vtable;
  if ((*(_BYTE*)(a1 + 328) & 1) != 0) {
    v14 = *(_QWORD*)(a1 + 344);
    if (v14 != 0) {
      v15 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v15 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v15, v14);
    }
  }
  if ((*(_BYTE*)(a1 + 304) & 1) != 0) {
    v16 = *(_QWORD*)(a1 + 320);
    if (v16 != 0) {
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v17 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, v16);
    }
  }
  if ((*(_BYTE*)(a1 + 280) & 1) != 0) {
    v18 = *(_QWORD*)(a1 + 296);
    if (v18 != 0) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v19 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v19, v18);
    }
  }
  *(_QWORD*)(a1 + 96) = game_gameui_GaugeUtil_ExpChange_vtable;
  if ((*(_BYTE*)(a1 + 200) & 1) != 0) {
    v20 = *(_QWORD*)(a1 + 216);
    if (v20 != 0) {
      v21 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v21 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v21, v20);
    }
  }
  if ((*(_BYTE*)(a1 + 176) & 1) != 0) {
    v22 = *(_QWORD*)(a1 + 192);
    if (v22 != 0) {
      v23 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v23 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v23, v22);
    }
  }
  if ((*(_BYTE*)(a1 + 152) & 1) != 0) {
    v24 = *(_QWORD*)(a1 + 168);
    if (v24 != 0) {
      v25 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v25 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v25, v24);
    }
  }
  result = *(_QWORD*)(a1 + 56);
  *(_QWORD*)a1 = game_menu_BasicMenuItem_vtable;
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak();
  }
  if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
    v27 = *(_QWORD*)(a1 + 32);
    if (v27 != 0) {
      v28 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v28 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v28, v27);
    }
  }
  return result;
}

__int64 IndividualMenuItem_Unknown73_1758340(__int64 a1, __int64 a2)
{
  char v2;
  __int64 (***v4)(_QWORD, _QWORD);
  __int64 (***v5)(_QWORD, _QWORD);
  __int64 (***v6)(_QWORD, _QWORD);
  __int64 (**v7)(_QWORD, __int64);
  char v8;

  v2 = 0;
  if (*(float*)(a1 + 112) == 0.0 && *(float*)(a1 + 240) == 0.0) {
    v4 = *(__int64 (****)(_QWORD, _QWORD))(a1 + 360);
    v5 = *(__int64 (****)(_QWORD, _QWORD))(a1 + 368);
    if (v4 == v5) {
      v2 = 1;
    }
    else {
      v6 = v4;
      do {
        v7 = *v6;
        v6 += 20;
        v8 = (*v7)(v4, a2);
        if ((v8 & 1) != 0) {
          break;
        }
        v4 = v6;
      } while (v6 != v5);
      v2 = v8 ^ 1;
    }
  }
  return v2 & 1;
}

__int64 IndividualMenuItem_Unknown75(__int64 result)
{
  __int64 v1;
  __int64 i;
  __int64 v3;

  v1 = result;
  if (*(float*)(result + 112) != 0.0) {
    result = GameRoutine_1758480(result, 2);
  }
  if (*(float*)(v1 + 240) != 0.0) {
    result = GameRoutine_1758970(v1, 2);
  }
  v3 = *(_QWORD*)(v1 + 360);
  for (i = *(_QWORD*)(v1 + 368); v3 != i; v3 += 160) {
    result = GameRoutine_1750310(v3, 2);
  }
  return result;
}

#pragma GCC visibility pop
