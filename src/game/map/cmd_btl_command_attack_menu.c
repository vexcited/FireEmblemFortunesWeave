#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1620370(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 CmdBtlCommandAttackMenu_Unknown146(__int64 a1, __int64 a2,
                                           unsigned int a3, unsigned int a4);
__int64 CmdBtlCommandAttackMenu_Unknown146(__int64 a1, __int64 a2,
                                           unsigned int a3, unsigned int a4)
{
  __int64 v7;

  v7 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      104, 16, 0);
  GameRoutine_1620370(v7, a2, a3, a4);
  return v7;
}

#pragma GCC visibility pop
