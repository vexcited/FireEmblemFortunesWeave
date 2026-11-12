#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1487cc0(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProcSkillReinforceScene_StartFade_alt1() __asm__(
    "ProcSkillReinforceScene_StartFade");
__int64 GameRoutine_1475b00(_QWORD, _QWORD);
extern __int64* GameData_2131560[2];
__int64 ProcSkillReinforceScene_Unknown2_alt1() __asm__(
    "ProcSkillReinforceScene_Unknown2");
__int64 ProcSkillReinforceScene_Unknown4_alt1() __asm__(
    "ProcSkillReinforceScene_Unknown4");
__int64 GameRoutine_1487cc0_alt1(__int64,
                                 __int64) __asm__("GameRoutine_1487cc0");
void game_facility_anonymous_1475b00(__int64, unsigned __int8*);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ProcSkillReinforceScene_StartFade();
void ProcSkillReinforceScene_Unknown2();
void ProcSkillReinforceScene_Unknown4();

void ProcSkillReinforceScene_StartFade()
{
  __int64 v0;
  char v1;
  unsigned __int64 v2;
  _BYTE v3[15];

  v3[8] = 0;
  v1 = 32;
  v2 = 0xE6A688E65F4D4742LL;
  *(_QWORD*)v3 = 0x968CE5B7BCE5808ALL;
  GameRoutine_1487cc0_alt1((__int64)&v1, 0x13F000000LL);
  if ((v1 & 1) != 0 && *(_QWORD*)&v3[7] != 0) {
    v0 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v0 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v0, *(__int64*)&v3[7]);
  }
}

void ProcSkillReinforceScene_Unknown2()
{
  __int64 v0;
  char v1;
  unsigned __int64 v2;
  _BYTE v3[15];

  v3[8] = 0;
  v1 = 32;
  v2 = 0xE6A688E65F4D4742LL;
  *(_QWORD*)v3 = 0x968CE5B7BCE5808ALL;
  GameRoutine_1487cc0_alt1((__int64)&v1, 0x13F000000LL);
  if ((v1 & 1) != 0 && *(_QWORD*)&v3[7] != 0) {
    v0 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v0 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v0, *(__int64*)&v3[7]);
  }
}

void ProcSkillReinforceScene_Unknown4()
{
  __int64* v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned __int8 v5;
  unsigned __int64 v6;
  _BYTE v7[15];

  v0 = GameData_2131560[0];
  v5 = 36;
  *(_WORD*)&v7[8] = -30333;
  v7[10] = 0;
  v1 = *GameData_2131560[0];
  v6 = 0x83E38383E39E83E3LL;
  *(_QWORD*)v7 = 0xE3BC83E3AD83E397LL;
  game_facility_anonymous_1475b00(v1, &v5);
  if ((v5 & 1) != 0 && *(_QWORD*)&v7[7] != 0) {
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, *(__int64*)&v7[7]);
  }
  v3 = *v0;
  v5 = 36;
  *(_WORD*)&v7[8] = -30333;
  v7[10] = 0;
  v6 = 0x83E3A383E3AD82E3LL;
  *(_QWORD*)v7 = 0xE3BC83E3AD83E3A9LL;
  game_facility_anonymous_1475b00(v3, &v5);
  if ((v5 & 1) != 0 && *(_QWORD*)&v7[7] != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, *(__int64*)&v7[7]);
  }
}

#pragma GCC visibility pop
