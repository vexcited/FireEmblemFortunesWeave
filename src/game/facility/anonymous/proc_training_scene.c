#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1428e90(_QWORD, _QWORD);
__int64 GameRoutine_1487cc0(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_2131458[2];
__int64 ProcTrainingScene_StartFade();
__int64 ProcTrainingScene_Unknown2();
__int64 ProcTrainingScene_Unknown4();

__int64 ProcTrainingScene_StartFade()
{
  __int64 result;
  __int64 v1;
  char v2;
  unsigned __int64 v3;
  __int16 v4;
  char v5;
  __int64 v6;

  v5 = 0;
  v2 = 20;
  v4 = -19273;
  v3 = 0xE793A8E85F4D4742LL;
  result = GameRoutine_1487cc0(&v2, 0x13F000000LL);
  if ((v2 & 1) != 0 && v6 != 0) {
    v1 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v1 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v1);
  }
  return result;
}

__int64 ProcTrainingScene_Unknown2()
{
  __int64 result;
  __int64 v1;
  char v2;
  unsigned __int64 v3;
  __int16 v4;
  char v5;
  __int64 v6;

  v5 = 0;
  v2 = 20;
  v4 = -19273;
  v3 = 0xE793A8E85F4D4742LL;
  result = GameRoutine_1487cc0(&v2, 0x13F000000LL);
  if ((v2 & 1) != 0 && v6 != 0) {
    v1 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v1 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v1);
  }
  return result;
}

__int64 ProcTrainingScene_Unknown4()
{
  __int64* v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  char v6;
  unsigned __int64 v7;
  _BYTE v8[15];

  v0 = GameData_2131458[0];
  v6 = 36;
  *(_WORD*)&v8[8] = -30333;
  v8[10] = 0;
  v1 = *GameData_2131458[0];
  v7 = 0x83E38383E39E83E3LL;
  *(_QWORD*)v8 = 0xE3BC83E3AD83E397LL;
  GameRoutine_1428e90(v1, &v6);
  if ((v6 & 1) != 0 && *(_QWORD*)&v8[7] != 0) {
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v2);
  }
  v3 = *v0;
  v6 = 36;
  *(_WORD*)&v8[8] = -30333;
  v8[10] = 0;
  v7 = 0x83E3A383E3AD82E3LL;
  *(_QWORD*)v8 = 0xE3BC83E3AD83E3A9LL;
  result = GameRoutine_1428e90(v3, &v6);
  if ((v6 & 1) != 0 && *(_QWORD*)&v8[7] != 0) {
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v5);
  }
  return result;
}

#pragma GCC visibility pop
