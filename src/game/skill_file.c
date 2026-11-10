#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_705860(_QWORD);
__int64 GameRoutine_705e40(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_1f92940[])();
extern __int64 (*GameData_1f92970[])();
extern __int64 (*GameData_1f92a10[])();
extern __int64 GameData_21c99b0;
extern __int64 GameData_21ca480;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_21ca498;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD, _QWORD,
                                                  _QWORD);
__int64 SkillFile_DeletingDestructor_703640(_QWORD* a1);
__int64 SkillFile_Destructor(_QWORD* a1);
__int64 SkillFile_DeletingDestructor_703770(_QWORD* a1);
__int64 game_SkillFile_OnBuild_lambda0_Invoke(__int64 a1, __int64* a2,
                                              __int64 a3, __int64 a4);

__int64 SkillFile_DeletingDestructor_703640(_QWORD* a1)
{
  _QWORD* v2;
  __int64 v3;

  *a1 = GameData_1f92940;
  a1[1] = GameData_1f92970;
  v2 = a1 + 1;
  GameRoutine_705860(a1 + 1);
  GameRoutine_705e40(v2);
  if ((_QWORD*)GameData_21c99b0 == a1) {
    GameData_21c99b0 = 0;
    GameData_21ca498 = 0;
  }
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, a1);
}

__int64 SkillFile_Destructor(_QWORD* a1)
{
  _QWORD* v2;
  __int64 result;

  *(a1 - 1) = GameData_1f92940;
  v2 = a1 - 1;
  *a1 = GameData_1f92970;
  GameRoutine_705860(a1);
  result = GameRoutine_705e40(a1);
  *v2 = GameData_1f92a10;
  if ((_QWORD*)GameData_21c99b0 == v2) {
    GameData_21c99b0 = 0;
    GameData_21ca498 = 0;
  }
  return result;
}

__int64 SkillFile_DeletingDestructor_703770(_QWORD* a1)
{
  _QWORD* v2;
  __int64 v3;

  *(a1 - 1) = GameData_1f92940;
  v2 = a1 - 1;
  *a1 = GameData_1f92970;
  GameRoutine_705860(a1);
  GameRoutine_705e40(a1);
  if ((_QWORD*)GameData_21c99b0 == v2) {
    GameData_21c99b0 = 0;
    GameData_21ca498 = 0;
  }
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, v2);
}

__int64 game_SkillFile_OnBuild_lambda0_Invoke(__int64 a1, __int64* a2,
                                              __int64 a3, __int64 a4)
{
  __int64 result;
  __int64 v5;

  result = *a2;
  if (*(_QWORD*)(*(_QWORD*)(*a2 + 24) + 1072LL) != 0) {
    v5 = *(_QWORD*)(*(_QWORD*)(*a2 + 24) + 1072LL);
    if (GameData_21ca480 == 0) {
      GameRoutine_60a310(0, a2, a3, a4);
    }
    return (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)GameData_21ca480 +
                                               48LL))(GameData_21ca480, &v5);
  }
  return result;
}

#pragma GCC visibility pop
