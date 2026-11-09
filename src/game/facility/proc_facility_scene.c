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

#pragma GCC visibility pop
