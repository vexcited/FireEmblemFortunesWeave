#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1487cc0(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProcSkillReinforceScene_StartFade();
__int64 GameRoutine_1475b00(_QWORD, _QWORD);
extern __int64* GameData_2131560[2];
__int64 ProcSkillReinforceScene_Unknown2();
__int64 ProcSkillReinforceScene_Unknown4();

__int64 ProcSkillReinforceScene_StartFade()
{
  __int64 result;
  __int64 v1;
  char v2;
  unsigned __int64 v3;
  _BYTE v4[15];

  v4[8] = 0;
  v2 = 32;
  v3 = 0xE6A688E65F4D4742LL;
  *(_QWORD*)v4 = 0x968CE5B7BCE5808ALL;
  result = GameRoutine_1487cc0(&v2, 0x13F000000LL);
  if ((v2 & 1) != 0 && *(_QWORD*)&v4[7] != 0) {
    v1 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v1 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v1, *(_QWORD*)&v4[7]);
  }
  return result;
}

__int64 ProcSkillReinforceScene_Unknown2()
{
  __int64 result;
  __int64 v1;
  char v2;
  unsigned __int64 v3;
  _BYTE v4[15];

  v4[8] = 0;
  v2 = 32;
  v3 = 0xE6A688E65F4D4742LL;
  *(_QWORD*)v4 = 0x968CE5B7BCE5808ALL;
  result = GameRoutine_1487cc0(&v2, 0x13F000000LL);
  if ((v2 & 1) != 0 && *(_QWORD*)&v4[7] != 0) {
    v1 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v1 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v1, *(_QWORD*)&v4[7]);
  }
  return result;
}

__int64 ProcSkillReinforceScene_Unknown4()
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

  v0 = GameData_2131560[0];
  v6 = 36;
  *(_WORD*)&v8[8] = -30333;
  v8[10] = 0;
  v1 = *GameData_2131560[0];
  v7 = 0x83E38383E39E83E3LL;
  *(_QWORD*)v8 = 0xE3BC83E3AD83E397LL;
  GameRoutine_1475b00(v1, &v6);
  if ((v6 & 1) != 0 && *(_QWORD*)&v8[7] != 0) {
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v2,
                                  *(_QWORD*)&v8[7]);
  }
  v3 = *v0;
  v6 = 36;
  *(_WORD*)&v8[8] = -30333;
  v8[10] = 0;
  v7 = 0x83E3A383E3AD82E3LL;
  *(_QWORD*)v8 = 0xE3BC83E3AD83E3A9LL;
  result = GameRoutine_1475b00(v3, &v6);
  if ((v6 & 1) != 0 && *(_QWORD*)&v8[7] != 0) {
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, *(_QWORD*)&v8[7]);
  }
  return result;
}

#pragma GCC visibility pop
