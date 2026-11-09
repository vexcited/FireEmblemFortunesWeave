#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 GameRoutine_1760e40(_QWORD, _QWORD);
__int64 game_telop_TelopResult_Destroy_TelopResult(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_telop_TelopSkillLearn_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c880[5];
void GameRoutine_17644e0(_QWORD*, __int64, __int64, __int64);
void TelopReinforceSkill_Unknown57(__int64 a1);
__int64 TelopReinforceSkill_DeletingDestructor(_QWORD* a1);

void TelopReinforceSkill_Unknown57(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int16 v4;
  _QWORD v5[6];

  v2 = (_QWORD*)GameRoutine_1760e40(a1, 19);
  GameRoutine_1562cf0(v2, "ArrowOff");
  v3 = *(_QWORD*)(a1 + 1168);
  v4 = *(_DWORD*)(a1 + 1232);
  v5[4] = 0;
  GameRoutine_17644e0(
      v2, v3,
      *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (v4 & 0xFFF)),
      (__int64)v5);
}

__int64 TelopReinforceSkill_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v1 = a1[151];
  *a1 = game_telop_TelopSkillLearn_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[152] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5, v1);
  }
  v6 = a1[147];
  if (v6 != 0) {
    v7 = *(_QWORD*)v3;
    a1[148] = v6;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(v7 + v8, v6);
  }
  game_telop_TelopResult_Destroy_TelopResult(a1);
  v9 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v9 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v9, a1);
}

#pragma GCC visibility pop
