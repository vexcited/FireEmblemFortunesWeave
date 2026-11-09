#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_d799f0(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_hub_anonymous_ProcHubSeqFacilityOpen_vtable[])();
extern __int64 GameData_220b6e0;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProcHubSeqFacilityOpen_Destructor(__int64 a1);
__int64 ProcHubSeqFacilityOpen_DeletingDestructor(__int64 a1);

__int64 ProcHubSeqFacilityOpen_Destructor(__int64 a1)
{
  __int64 v2;
  int v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  *(_QWORD*)a1 = game_hub_anonymous_ProcHubSeqFacilityOpen_vtable;
  if (*(_BYTE*)(a1 + 224) != 0) {
    *(_BYTE*)(a1 + 224) = 0;
    v2 = GameData_220b6e0;
    v3 = *(_DWORD*)(GameData_220b6e0 + 176) - 1;
    *(_DWORD*)(GameData_220b6e0 + 176) = v3;
    if (v3 == 0) {
      (*(void (**)(__int64))(*(_QWORD*)(v2 + 168) + 8LL))(v2 + 168);
    }
    GameRoutine_d799f0(v2);
    v4 = *(_DWORD*)(v2 + 192) - 1;
    *(_DWORD*)(v2 + 192) = v4;
    if (v4 == 0) {
      (*(void (**)(__int64))(*(_QWORD*)(v2 + 184) + 8LL))(v2 + 184);
    }
    GameRoutine_d799f0(v2);
  }
  v5 = *(_QWORD*)(a1 + 176);
  if (v5 != 0) {
    *(_QWORD*)(a1 + 184) = v5;
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v6);
  }
  if ((*(_BYTE*)(a1 + 152) & 1) != 0 && *(_QWORD*)(a1 + 168) != 0) {
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v7);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 ProcHubSeqFacilityOpen_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  int v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  *(_QWORD*)a1 = game_hub_anonymous_ProcHubSeqFacilityOpen_vtable;
  if (*(_BYTE*)(a1 + 224) != 0) {
    *(_BYTE*)(a1 + 224) = 0;
    v2 = GameData_220b6e0;
    v3 = *(_DWORD*)(GameData_220b6e0 + 176) - 1;
    *(_DWORD*)(GameData_220b6e0 + 176) = v3;
    if (v3 == 0) {
      (*(void (**)(__int64))(*(_QWORD*)(v2 + 168) + 8LL))(v2 + 168);
    }
    GameRoutine_d799f0(v2);
    v4 = *(_DWORD*)(v2 + 192) - 1;
    *(_DWORD*)(v2 + 192) = v4;
    if (v4 == 0) {
      (*(void (**)(__int64))(*(_QWORD*)(v2 + 184) + 8LL))(v2 + 184);
    }
    GameRoutine_d799f0(v2);
  }
  v5 = *(_QWORD*)(a1 + 176);
  v6 = fw_memory_g_heap_manager_ptr;
  if (v5 != 0) {
    v7 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(a1 + 184) = v5;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(v7 + v8);
  }
  if ((*(_BYTE*)(a1 + 152) & 1) != 0 && *(_QWORD*)(a1 + 168) != 0) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v9);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00(a1 + 88);
  v10 = 128;
  if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
    v10 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v10);
}

#pragma GCC visibility pop
