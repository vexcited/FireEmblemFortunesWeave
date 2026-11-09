#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 MapInfo_825790(_QWORD);
__int64 game_telop_TelopResult_Destroy_TelopResult(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_telop_TelopItemSkillLearn_vtable[])();
extern __int64 GameData_21cd128;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 TelopItemSkillLearn_Destructor(_QWORD* a1);
__int64 TelopItemSkillLearn_DeletingDestructor(_QWORD* a1);
__int64 TelopItemSkillLearn_Unknown56(__int64 a1);

__int64 TelopItemSkillLearn_Destructor(_QWORD* a1)
{
  _QWORD* v1;

  *a1 = game_telop_TelopItemSkillLearn_vtable;
  if (GameData_21cd128 != 0) {
    v1 = a1;
    MapInfo_825790(GameData_21cd128);
    a1 = v1;
  }
  return game_telop_TelopResult_Destroy_TelopResult(a1);
}

__int64 TelopItemSkillLearn_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;

  *a1 = game_telop_TelopItemSkillLearn_vtable;
  if (GameData_21cd128 != 0) {
    MapInfo_825790(GameData_21cd128);
  }
  game_telop_TelopResult_Destroy_TelopResult(a1);
  v2 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v2 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, a1);
}

__int64 TelopItemSkillLearn_Unknown56(__int64 a1)
{
  char v3[15];
  __int64 v4;

  v4 = 0;
  v3[12] = 0;
  *(_WORD*)&v3[13] = 0;
  strcpy(v3, "Pos_TalkOff");
  GameRoutine_1562cf0(a1 + 168, v3);
  return GameRoutine_1562cf0(a1 + 168, "Type_TitleOff");
}

#pragma GCC visibility pop
