#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_138a5a0(_QWORD);
__int64 GameRoutine_14869b0(_QWORD);
__int64 GameRoutine_1487e00(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1958ed0(_QWORD, _QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_6c3050(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 game_Unit_Destroy_Unit(_QWORD);
__int64 game_facility_ReleaseGroups(void);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern _DWORD* GameData_2130fb8;
extern __int64 (*GameData_1fbcde0[])();
extern __int64 (*GameData_1fbceb0[])();
extern __int64 (*GameData_1fbcf60[])();
extern __int64 (*game_anonymous_ProcJobIntroScene_vtable[])();
extern __int64 GameData_212c608[2];
extern __int64 GameData_212dce8;
extern __int64 GameData_21f3d10;
extern __int64 GameData_21f4000;
extern __int64 GameData_21fa488;
extern __int64 GameData_224b478;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
extern __int64* GameData_212ce20[3];
extern __int64* GameData_2132488;
extern int GameData_21f9698;
__int64 ProcJobIntroScene_Destructor(__int64 a1);
__int64 ProcJobIntroScene_a0eec0();
void ProcJobIntroScene_a0eef0();
__int64 ProcJobIntroScene_Unknown18(__int64 a1);
__int64 ProcJobIntroScene_Unknown2(__int64 a1);

__int64 ProcJobIntroScene_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  int v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;

  *(_QWORD*)a1 = game_anonymous_ProcJobIntroScene_vtable;
  v2 = a1 + 240;
  *(_QWORD*)(a1 + 152) = GameData_1fbcde0;
  v3 = a1 + 152;
  GameRoutine_6c3050(a1 + 240);
  if (GameData_224b478 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)GameData_224b478 + 24LL))(
        GameData_224b478);
    if (GameData_224b478 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_224b478 + 8LL))(
          GameData_224b478);
    }
    GameData_224b478 = 0;
  }
  if (*GameData_212ce20[0] != 0) {
    if (GameData_21f9698 + 1 < (int)((*(_QWORD*)(*GameData_212ce20[0] + 72) -
                                      *(_QWORD*)(*GameData_212ce20[0] + 64)) >>
                                     3)) {
      v4 = GameData_21f9698 + 1;
    }
    else {
      v4 = 0;
    }
    GameData_21f9698 = v4;
  }
  game_Unit_Destroy_Unit(v2);
  v5 = *(_QWORD*)(a1 + 208);
  if (v5 != 0) {
    *(_QWORD*)(a1 + 216) = v5;
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v6);
  }
  *(_QWORD*)a1 = GameData_1fbceb0;
  *(_QWORD*)(a1 + 152) = GameData_1fbcf60;
  GameRoutine_1958ed0(v3, a1);
  *(_QWORD*)(a1 + 152) = GameData_2132488 + 2;
  v7 = (_QWORD*)GameData_212dce8;
  v8 = *(_QWORD*)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0 && (*GameData_2130fb8)-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 24LL))(v8);
    if (*v7 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v7 + 8LL))(*v7);
    }
    *v7 = 0;
  }
  game_facility_ReleaseGroups();
  GameData_21fa488 = 0;
  *(_QWORD*)a1 = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 ProcJobIntroScene_a0eec0()
{
  __int64 v0;

  v0 = GameRoutine_138a5a0(GameData_21f4000);
  return GameRoutine_14869b0(v0);
}

void ProcJobIntroScene_a0eef0()
{
  if (GameData_21f3d10 != 0 && *(int*)(GameData_21f3d10 + 152) >= 1) {
    *(_DWORD*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] + 156LL) =
        1065353216;
  }
}

__int64 ProcJobIntroScene_Unknown18(__int64 a1)
{
  __int64 v1;
  __int64 result;
  __int64 v3;
  _WORD v4[8];
  __int64 v5;

  v1 = ***(_QWORD***)(*(_QWORD*)(a1 + 192) + 40LL);
  v4[0] = 0;
  result = GameRoutine_1487e00(*(_QWORD*)(v1 + 120), v4, 0);
  if ((v4[0] & 1) != 0 && v5 != 0) {
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v3);
  }
  return result;
}

__int64 ProcJobIntroScene_Unknown2(__int64 a1)
{
  __int64 v1;
  __int64 result;
  __int64 v3;
  _WORD v4[8];
  __int64 v5;

  v1 = ***(_QWORD***)(*(_QWORD*)(a1 + 40) + 40LL);
  v4[0] = 0;
  result = GameRoutine_1487e00(*(_QWORD*)(v1 + 120), v4, 0);
  if ((v4[0] & 1) != 0 && v5 != 0) {
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v3);
  }
  return result;
}

#pragma GCC visibility pop
