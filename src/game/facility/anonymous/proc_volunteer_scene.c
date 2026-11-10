#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1958ed0(_QWORD, _QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 game_facility_ReleaseGroups(void);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern _DWORD* GameData_2130fb8;
extern __int64 (*GameData_2039f68[])();
extern __int64 (*game_facility_anonymous_ProcVolunteerScene_vtable[])();
extern __int64 GameData_212c608[2];
extern __int64 GameData_212dce8;
extern __int64 GameData_212dd18[3];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_2131398[4];
extern __int64* GameData_21313a8[2];
extern __int64* GameData_2132488;
__int64 ProcVolunteerScene_Destructor(__int64* a1);

__int64 ProcVolunteerScene_Destructor(__int64* a1)
{
  __int64* v2;
  __int64* v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;

  *(a1 - 19) = (__int64)game_facility_anonymous_ProcVolunteerScene_vtable;
  v2 = a1 - 19;
  *a1 = (__int64)GameData_2039f68;
  v3 = GameData_21313a8[0];
  (*(void (**)(_QWORD))(**(_QWORD**)GameData_21313a8[0] + 24LL))(
      *GameData_21313a8[0]);
  if (*v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v3 + 8LL))(*v3);
  }
  *v3 = 0;
  v4 = a1[6];
  v5 = GameData_2131398[0] + 18;
  a1[4] = (__int64)(GameData_2131398[0] + 2);
  a1[5] = (__int64)v5;
  if (v4 != 0) {
    a1[7] = v4;
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v6);
  }
  v7 = GameData_212dd18[0] + 192;
  *(a1 - 19) = GameData_212dd18[0] + 16;
  *a1 = v7;
  GameRoutine_1958ed0(a1, v2);
  *a1 = (__int64)(GameData_2132488 + 2);
  v8 = (_QWORD*)GameData_212dce8;
  v9 = *(_QWORD*)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0 && (*GameData_2130fb8)-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 24LL))(v9);
    if (*v8 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v8 + 8LL))(*v8);
    }
    *v8 = 0;
  }
  game_facility_ReleaseGroups();
  *(a1 - 19) = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 - 2) & 0x100) != 0) {
    *((_WORD*)a1 - 8) &= ~0x100u;
  }
  game_ProcInst_Unregister(v2);
  return GameRoutine_658c00(a1 - 8);
}

#pragma GCC visibility pop
