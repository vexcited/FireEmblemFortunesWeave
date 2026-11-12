#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1487cc0(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProcSkillEducateScene_StartFade_alt1() __asm__(
    "ProcSkillEducateScene_StartFade");
__int64 GameRoutine_1475b00(__int64, unsigned __int8*);
__int64 GameRoutine_1958ed0(_QWORD, _QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 game_facility_ReleaseGroups(_QWORD);
extern _DWORD* GameData_2130fb8;
extern __int64 (*GameData_2041d90[])();
extern __int64 (*game_facility_anonymous_ProcSkillEducateScene_vtable[])();
extern __int64 GameData_212c608[2];
extern __int64 GameData_212dce8;
extern __int64 GameData_212dd18[3];
extern __int64* GameData_2131560[2];
extern __int64* GameData_2132488;
__int64 ProcSkillEducateScene_Destructor(__int64* a1);
__int64 ProcSkillEducateScene_DeletingDestructor(__int64* a1);
__int64
ProcSkillEducateScene_Unknown2_alt1() __asm__("ProcSkillEducateScene_Unknown2");
__int64
ProcSkillEducateScene_Unknown4_alt1() __asm__("ProcSkillEducateScene_Unknown4");
void GameRoutine_1487cc0_alt1(__int64, __int64) __asm__("GameRoutine_1487cc0");
void game_facility_anonymous_1475b00(__int64, unsigned __int8*);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ProcSkillEducateScene_StartFade();
void ProcSkillEducateScene_Unknown2();
void ProcSkillEducateScene_Unknown4();

void ProcSkillEducateScene_StartFade()
{
  __int64 v0;
  char v1;
  unsigned __int64 v2;
  __int16 v3;
  char v4;
  __int64 v5;

  v4 = 0;
  v1 = 20;
  v3 = -30578;
  v2 = 0xE69DBCE45F4D4742LL;
  GameRoutine_1487cc0_alt1((__int64)&v1, 0x13F000000LL);
  if ((v1 & 1) != 0 && v5 != 0) {
    v0 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v0 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v0, v5);
  }
}

__int64 ProcSkillEducateScene_Destructor(__int64* a1)
{
  __int64* v2;
  __int64* v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;

  *(a1 - 19) = (__int64)game_facility_anonymous_ProcSkillEducateScene_vtable;
  v2 = a1 - 19;
  *a1 = (__int64)GameData_2041d90;
  v3 = GameData_2131560[0];
  (*(void (**)(_QWORD))(**(_QWORD**)GameData_2131560[0] + 24LL))(
      *GameData_2131560[0]);
  if (*v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v3 + 8LL))(*v3);
  }
  *v3 = 0;
  v4 = GameData_212dd18[0] + 192;
  *(a1 - 19) = GameData_212dd18[0] + 16;
  *a1 = v4;
  GameRoutine_1958ed0(a1, v2);
  *a1 = (__int64)(GameData_2132488 + 2);
  v5 = (__int64*)GameData_212dce8;
  v6 = *(_QWORD*)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0 && (*GameData_2130fb8)-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 24LL))(v6);
    v6 = *v5;
    if (*v5 != 0) {
      v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v6 + 8LL))(v6);
    }
    *v5 = 0;
  }
  game_facility_ReleaseGroups(v6);
  *(a1 - 19) = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 - 2) & 0x100) != 0) {
    *((_WORD*)a1 - 8) &= ~0x100u;
  }
  game_ProcInst_Unregister(v2);
  return GameRoutine_658c00(a1 - 8);
}

__int64 ProcSkillEducateScene_DeletingDestructor(__int64* a1)
{
  __int64* v2;
  __int64* v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v8;

  *(a1 - 19) = (__int64)game_facility_anonymous_ProcSkillEducateScene_vtable;
  v2 = a1 - 19;
  *a1 = (__int64)GameData_2041d90;
  v3 = GameData_2131560[0];
  (*(void (**)(_QWORD))(**(_QWORD**)GameData_2131560[0] + 24LL))(
      *GameData_2131560[0]);
  if (*v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v3 + 8LL))(*v3);
  }
  *v3 = 0;
  v4 = GameData_212dd18[0] + 192;
  *(a1 - 19) = GameData_212dd18[0] + 16;
  *a1 = v4;
  GameRoutine_1958ed0(a1, v2);
  *a1 = (__int64)(GameData_2132488 + 2);
  v5 = (__int64*)GameData_212dce8;
  v6 = *(_QWORD*)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0 && (*GameData_2130fb8)-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 24LL))(v6);
    v6 = *v5;
    if (*v5 != 0) {
      v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v6 + 8LL))(v6);
    }
    *v5 = 0;
  }
  game_facility_ReleaseGroups(v6);
  *(a1 - 19) = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 - 2) & 0x100) != 0) {
    *((_WORD*)a1 - 8) &= ~0x100u;
  }
  game_ProcInst_Unregister(v2);
  GameRoutine_658c00(a1 - 8);
  v8 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v8 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v8, v2);
}

void ProcSkillEducateScene_Unknown2()
{
  __int64 v0;
  char v1;
  unsigned __int64 v2;
  __int16 v3;
  char v4;
  __int64 v5;

  v4 = 0;
  v1 = 20;
  v3 = -30578;
  v2 = 0xE69DBCE45F4D4742LL;
  GameRoutine_1487cc0_alt1((__int64)&v1, 0x13F000000LL);
  if ((v1 & 1) != 0 && v5 != 0) {
    v0 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v0 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v0, v5);
  }
}

void ProcSkillEducateScene_Unknown4()
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
