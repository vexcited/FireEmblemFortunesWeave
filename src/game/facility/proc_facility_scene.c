#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1958ed0(_QWORD, _QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 game_facility_ReleaseGroups(void);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_1fae8b8[])();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_facility_FacilitySceneBase_vtable[])();
extern __int64 (*game_facility_ProcFacilityScene_vtable[])();
extern __int64 GameData_21f4000;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_2241730;
__int64 ProcFacilityScene_DeletingDestructor(__int64 a1);
extern _DWORD* GameData_2130fb8;
extern __int64 GameData_212c608[2];
extern __int64 GameData_212dce8;
extern __int64* GameData_2132488;
__int64 ProcFacilityScene_Destructor(_QWORD* a1);

__int64 ProcFacilityScene_DeletingDestructor(__int64 a1)
{
  _QWORD* v2;
  __int64 v4;

  *(_QWORD*)a1 = game_facility_ProcFacilityScene_vtable;
  *(_QWORD*)(a1 + 152) = GameData_1fae8b8;
  v2 = (_QWORD*)(a1 + 152);
  GameRoutine_1958ed0(a1 + 152, a1);
  *v2 = game_facility_FacilitySceneBase_vtable;
  if (GameData_21f4000 != 0 && GameData_2241730-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)GameData_21f4000 + 24LL))(
        (__int64)GameData_21f4000);
    if (GameData_21f4000 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_21f4000 + 8LL))(
          GameData_21f4000);
    }
    GameData_21f4000 = 0;
  }
  game_facility_ReleaseGroups();
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00(a1 + 88);
  v4 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v4 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, a1);
}

__int64 ProcFacilityScene_Destructor(_QWORD* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;

  *(a1 - 19) = game_facility_ProcFacilityScene_vtable;
  v2 = a1 - 19;
  *a1 = GameData_1fae8b8;
  GameRoutine_1958ed0(a1, a1 - 19);
  *a1 = GameData_2132488 + 2;
  v3 = (_QWORD*)GameData_212dce8;
  v4 = *(_QWORD*)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0 && (*GameData_2130fb8)-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 24LL))(v4);
    if (*v3 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v3 + 8LL))(*v3);
    }
    *v3 = 0;
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
