#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 game_telop_TelopResult_Destroy_TelopResult(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 TelopNoticeNewAction_Destructor(__int64 a1);
__int64 TelopNoticeNewAction_DeletingDestructor(__int64 a1);

__int64 TelopNoticeNewAction_Destructor(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  if ((*(_BYTE*)(a1 + 1176) & 1) != 0) {
    v1 = *(_QWORD*)(a1 + 1192);
    if (v1 != 0) {
      v2 = a1;
      v3 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v3 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3,
                                    v1);
      a1 = v2;
    }
  }
  return game_telop_TelopResult_Destroy_TelopResult(a1);
}

__int64 TelopNoticeNewAction_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v2 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 1176) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 1192);
    if (v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4,
                                    v3);
    }
  }
  game_telop_TelopResult_Destroy_TelopResult(a1);
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v5 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v5, a1);
}

#pragma GCC visibility pop
