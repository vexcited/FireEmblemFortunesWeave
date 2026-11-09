#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_201a658[])();
extern __int64 GameData_2240070;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_22400f0;
__int64 AIValueFlags_Destructor(__int64 result);

__int64 AIValueFlags_Destructor(__int64 result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;

  v1 = *(_QWORD*)(result + 8);
  v2 = (_QWORD*)result;
  if (v1 != 0) {
    *(_QWORD*)(result + 16) = v1;
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v3);
  }
  *v2 = GameData_201a658;
  if ((_QWORD*)GameData_2240070 == v2) {
    GameData_2240070 = 0;
    GameData_22400f0 = 0;
  }
  return result;
}

#pragma GCC visibility pop
