#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1958ed0(_QWORD, _QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 game_facility_ReleaseGroups(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak();
extern _DWORD* GameData_2130fb8;
extern __int64 (*GameData_2043cf8[])();
extern __int64 (*game_facility_anonymous_ProcConversation_vtable[])();
extern __int64 GameData_212c608[2];
extern __int64 GameData_212dce8;
extern __int64 GameData_212dd18[3];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_2132488;
__int64 ProcConversation_Destructor_1496620(__int64 a1);
__int64 ProcConversation_DeletingDestructor_1496750(__int64 a1);

__int64 ProcConversation_Destructor_1496620(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;

  v2 = *(_QWORD*)(a1 + 200);
  *(_QWORD*)a1 = game_facility_anonymous_ProcConversation_vtable;
  *(_QWORD*)(a1 + 152) = GameData_2043cf8;
  v3 = a1 + 152;
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    v4 = v3;
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    std___1___shared_weak_count___release_weak();
    v3 = v4;
  }
  v5 = GameData_212dd18[0] + 192;
  *(_QWORD*)a1 = GameData_212dd18[0] + 16;
  *(_QWORD*)(a1 + 152) = v5;
  GameRoutine_1958ed0(v3, a1);
  *(_QWORD*)(a1 + 152) = GameData_2132488 + 2;
  v6 = (__int64*)GameData_212dce8;
  v7 = *(_QWORD*)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0 && (*GameData_2130fb8)-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 24LL))(v7);
    v7 = *v6;
    if (*v6 != 0) {
      v7 = (*(__int64 (**)(__int64))(*(_QWORD*)v7 + 8LL))(v7);
    }
    *v6 = 0;
  }
  game_facility_ReleaseGroups(v7);
  *(_QWORD*)a1 = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 ProcConversation_DeletingDestructor_1496750(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v9;

  v2 = *(_QWORD*)(a1 + 200);
  *(_QWORD*)a1 = game_facility_anonymous_ProcConversation_vtable;
  *(_QWORD*)(a1 + 152) = GameData_2043cf8;
  v3 = a1 + 152;
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    v4 = v3;
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    std___1___shared_weak_count___release_weak();
    v3 = v4;
  }
  v5 = GameData_212dd18[0] + 192;
  *(_QWORD*)a1 = GameData_212dd18[0] + 16;
  *(_QWORD*)(a1 + 152) = v5;
  GameRoutine_1958ed0(v3, a1);
  *(_QWORD*)(a1 + 152) = GameData_2132488 + 2;
  v6 = (__int64*)GameData_212dce8;
  v7 = *(_QWORD*)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0 && (*GameData_2130fb8)-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 24LL))(v7);
    v7 = *v6;
    if (*v6 != 0) {
      v7 = (*(__int64 (**)(__int64))(*(_QWORD*)v7 + 8LL))(v7);
    }
    *v6 = 0;
  }
  game_facility_ReleaseGroups(v7);
  *(_QWORD*)a1 = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00(a1 + 88);
  v9 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v9 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v9, a1);
}

#pragma GCC visibility pop
