#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1495040(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_203b128)();
extern __int64 (*GameData_211bff8[])();
extern __int64 (*GameData_211c040[])();
extern __int64 (*game_facility_TrainingArgs_vtable[])();
extern __int64 (*game_facility_anonymous_ProcTrainingMotion_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_2131450[3];
__int64 ProcTrainingMotion_Destructor(_QWORD* a1);
__int64 ProcTrainingMotion_DeletingDestructor(_QWORD* a1);
__int64 GameRoutine_197af90(__int64, __int64);
__int64 ProcTrainingMotion_Destructor_197bc00(_QWORD* a1);
__int64 ProcTrainingMotion_DeletingDestructor_197bc90(_QWORD* a1);
__int64 ProcTrainingMotion_Destructor_197bd40(__int64 a1, __int64 a2);

__int64 ProcTrainingMotion_Destructor(_QWORD* a1)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;

  *a1 = game_facility_anonymous_ProcTrainingMotion_vtable;
  a1[19] = GameData_211bff8;
  v1 = a1[26];
  a1[23] = GameData_211c040;
  a1[24] = game_facility_TrainingArgs_vtable;
  a1[25] = &GameData_203b128;
  if (v1 != 0) {
    a1[27] = v1;
    v2 = a1;
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3);
    a1 = v2;
  }
  return GameRoutine_1495040(a1);
}

__int64 ProcTrainingMotion_DeletingDestructor(_QWORD* a1)
{
  __int64* v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  *a1 = game_facility_anonymous_ProcTrainingMotion_vtable;
  a1[19] = GameData_211bff8;
  v2 = GameData_2131450[0];
  v3 = a1[26];
  v4 = GameData_2131450[0] + 2;
  a1[23] = GameData_211c040;
  a1[24] = v4;
  a1[25] = v2 + 8;
  v5 = fw_memory_g_heap_manager_ptr;
  if (v3 != 0) {
    v6 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[27] = v3;
    v7 = 128;
    if (*(_QWORD*)(v6 + 200) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free(v6 + v7);
  }
  GameRoutine_1495040(a1);
  v8 = 128;
  if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
    v8 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v8);
}

__int64 ProcTrainingMotion_Destructor_197bc00(_QWORD* a1)
{
  _QWORD* v1;
  __int64 v2;
  __int64 v3;

  *(a1 - 19) = game_facility_anonymous_ProcTrainingMotion_vtable;
  v1 = a1 - 19;
  *a1 = GameData_211bff8;
  v2 = a1[7];
  a1[4] = GameData_211c040;
  a1[5] = game_facility_TrainingArgs_vtable;
  a1[6] = &GameData_203b128;
  if (v2 != 0) {
    a1[8] = v2;
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3);
  }
  return GameRoutine_1495040(v1);
}

__int64 ProcTrainingMotion_DeletingDestructor_197bc90(_QWORD* a1)
{
  _QWORD* v1;
  __int64* v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  *(a1 - 19) = game_facility_anonymous_ProcTrainingMotion_vtable;
  v1 = a1 - 19;
  *a1 = GameData_211bff8;
  v2 = GameData_2131450[0];
  v3 = a1[7];
  v4 = GameData_2131450[0] + 2;
  a1[4] = GameData_211c040;
  a1[5] = v4;
  a1[6] = v2 + 8;
  v5 = fw_memory_g_heap_manager_ptr;
  if (v3 != 0) {
    v6 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[8] = v3;
    v7 = 128;
    if (*(_QWORD*)(v6 + 200) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free(v6 + v7);
  }
  GameRoutine_1495040(v1);
  v8 = 128;
  if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
    v8 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v8);
}

__int64 ProcTrainingMotion_Destructor_197bd40(__int64 a1, __int64 a2)
{
  GameRoutine_197af90(a1 - 184, a2);
  return 1;
}

#pragma GCC visibility pop
