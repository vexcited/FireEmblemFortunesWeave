#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_ee2760(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*GameData_2083310[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212ec18[2];
__int64
game_hub_anonymous_FastTravelMenuItem_JumpCall_closure_Clone(__int64 a1);
__int64
game_hub_anonymous_FastTravelMenuItem_JumpCall_closure_CloneInto(__int64 result,
                                                                 __int64 a2);
__int64
game_hub_anonymous_FastTravelMenuItem_JumpCall_closure_Invoke(__int64 a1);

bool FastTravelMenuItem_1698bc0(__int64 a1)
{
  return **(_DWORD**)(a1 + 88) != 0;
}

__int64 game_hub_anonymous_FastTravelMenuItem_JumpCall_closure_Clone(__int64 a1)
{
  __int64 result;
  int v3;
  __int64 v4;

  result = fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
  v3 = *(unsigned __int8*)(a1 + 48);
  *(_BYTE*)(result + 48) = 0;
  *(_QWORD*)result = GameData_2083310;
  *(_QWORD*)(result + 16) = *(_QWORD*)(a1 + 16);
  *(_BYTE*)(result + 32) = 0;
  if (v3 == 1) {
    v4 = *(_QWORD*)(a1 + 40);
    *(_QWORD*)(result + 32) = *(_QWORD*)(a1 + 32);
    *(_QWORD*)(result + 40) = v4;
    *(_BYTE*)(result + 48) = 1;
  }
  return result;
}

__int64

game_hub_anonymous_FastTravelMenuItem_JumpCall_closure_CloneInto(__int64 result,
                                                                 __int64 a2)
{
  __int64 v2;

  *(_QWORD*)a2 = GameData_2083310;
  v2 = *(_QWORD*)(result + 16);
  *(_BYTE*)(a2 + 32) = 0;
  *(_BYTE*)(a2 + 48) = 0;
  *(_QWORD*)(a2 + 16) = v2;
  if (*(_BYTE*)(result + 48) == 1) {
    *(_QWORD*)(a2 + 40) = *(_QWORD*)(result + 40);
    *(_QWORD*)(a2 + 32) = *(_QWORD*)(result + 32);
    *(_BYTE*)(a2 + 48) = 1;
  }
  return result;
}

__int64

game_hub_anonymous_FastTravelMenuItem_JumpCall_closure_Invoke(__int64 a1)
{
  GameRoutine_ee2760(*GameData_212ec18[0],
                     *(_QWORD*)(*(_QWORD*)(a1 + 16) + 88LL), a1 + 32);
  return 4;
}

#pragma GCC visibility pop
