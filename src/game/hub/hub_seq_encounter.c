#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_1fddde0[])();
extern __int64 (*game_hub_HubSeqEncounter_vtable[])();
extern __int64 GameData_220d630;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 HubSeqEncounter_Destructor(__int64 result);

__int64 HubSeqEncounter_Destructor(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v1 = result;
  *(_QWORD*)result = game_hub_HubSeqEncounter_vtable;
  if ((*(_BYTE*)(result + 80) & 1) != 0) {
    v2 = *(_QWORD*)(result + 96);
    if (v2 != 0) {
      v3 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v3 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, v2);
    }
  }
  if (*(_BYTE*)(v1 + 64) == 1) {
    v4 = *(_QWORD*)(v1 + 24);
    if (v4 != 0) {
      *(_QWORD*)(v1 + 32) = v4;
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v4);
    }
  }
  *(_QWORD*)v1 = GameData_1fddde0;
  if (GameData_220d630 == v1) {
    GameData_220d630 = 0;
  }
  return result;
}

#pragma GCC visibility pop
