#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_201a658[])();
extern __int64 GameData_2240070;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_22400f0;
__int64
AIValueFlags_Destructor_alt1(__int64 result) __asm__("AIValueFlags_Destructor");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void AIValueFlags_Destructor(_QWORD* a1);

void AIValueFlags_Destructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;

  v1 = a1[1];
  if (v1 != 0) {
    a1[2] = v1;
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, v1);
  }
  *a1 = GameData_201a658;
  if ((_QWORD*)GameData_2240070 == a1) {
    GameData_2240070 = 0;
    GameData_22400f0 = 0;
  }
}

#pragma GCC visibility pop
