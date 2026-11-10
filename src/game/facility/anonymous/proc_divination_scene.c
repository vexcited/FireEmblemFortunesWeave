#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1958ed0(__int64 result, __int64);
__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 game_facility_ReleaseGroups(void);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern _DWORD* GameData_2130fb8;
extern __int64 (*GameData_211a498)();
extern __int64 (*game_facility_anonymous_ProcDivinationScene_vtable)();
extern __int64 GameData_212c608[2];
extern __int64 GameData_212dce8;
extern __int64 GameData_212dd18[3];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_2132488;

void __attribute__((noreturn)) ProcDivinationScene_DeletingDestructor()
{
  __udf(0x8002u);
};
__int64 ProcDivinationScene_Destructor(__int64* a1);

__int64 ProcDivinationScene_Destructor(__int64* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;

  v1 = a1[5];
  *(a1 - 19) = (__int64)&game_facility_anonymous_ProcDivinationScene_vtable;
  v3 = (__int64)(a1 - 19);
  *a1 = (__int64)&GameData_211a498;
  if (v1 != 0) {
    a1[6] = v1;
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4);
  }
  v5 = GameData_212dd18[0] + 192;
  *(a1 - 19) = GameData_212dd18[0] + 16;
  *a1 = v5;
  GameRoutine_1958ed0((__int64)a1, v3);
  *a1 = (__int64)(GameData_2132488 + 2);
  v6 = (_QWORD*)GameData_212dce8;
  v7 = *(_QWORD*)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0 && (*GameData_2130fb8)-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 24LL))(v7);
    if (*v6 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v6 + 8LL))(*v6);
    }
    *v6 = 0;
  }
  game_facility_ReleaseGroups();
  *(a1 - 19) = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 - 2) & 0x100) != 0) {
    *((_WORD*)a1 - 8) &= ~0x100u;
  }
  game_ProcInst_Unregister(v3);
  return GameRoutine_658c00(a1 - 8);
}

#pragma GCC visibility pop
