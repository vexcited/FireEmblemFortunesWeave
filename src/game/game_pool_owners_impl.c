#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BuildThread_Unknown2(_QWORD);
__int64 GameRoutine_6266f0(_QWORD);
__int64 GameRoutine_626830(_QWORD);
__int64 GameRoutine_626970(_QWORD);
__int64 GameRoutine_626ab0(_QWORD);
__int64 Registration_6260e0(__int64 result);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 nn_os_FinalizeMutex(_QWORD);
extern __int64 (*GameData_1f8e518[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern char GameData_21a60b8;
__int64 GamePoolOwners_626600(_QWORD* a1);

__int64 GamePoolOwners_626600(_QWORD* a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;

  *a1 = GameData_1f8e518;
  Registration_6260e0((__int64)a1);
  GameData_21a60b8 = 0;
  GameRoutine_6266f0(a1 + 642);
  GameRoutine_626830(a1 + 633);
  GameRoutine_626970(a1 + 624);
  GameRoutine_626ab0(a1 + 615);
  nn_os_FinalizeMutex(a1 + 611);
  nn_os_FinalizeMutex(a1 + 607);
  nn_os_FinalizeMutex(a1 + 603);
  result = nn_os_FinalizeMutex(a1 + 599);
  v3 = a1[597];
  a1[597] = 0;
  if (v3 != 0) {
    BuildThread_Unknown2(v3);
    v4 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v4 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, v3);
  }
  return result;
}

#pragma GCC visibility pop
