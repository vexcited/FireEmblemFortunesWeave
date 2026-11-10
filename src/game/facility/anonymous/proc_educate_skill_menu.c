#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_1560070(_QWORD* __return_ptr, _QWORD, _QWORD);
__int64 GameRoutine_15d2f60(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 GameData_209b890;
extern __int64* GameData_212e008[9];
__int64 ProcEducateSkillMenu_Unknown88(__int64 a1);
__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_94d380(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*game_facility_anonymous_EducateSkillMenuItem_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 game_facility_anonymous_ProcEducateSkillMenu_AddItemList_closure_Invoke(
    __int64 a1, _DWORD* a2);

__int64 ProcEducateSkillMenu_Unknown88(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  result = *(_QWORD*)(a1 + 336);
  if (result != 0) {
    result = __dynamic_cast(result, GameData_212e008[0], &GameData_209b890, 0);
    if (result != 0) {
      v3 = result;
      GameRoutine_1560070(&v4, a1 + 848, "L_InfoDetail_Before");
      GameRoutine_15d2f60(&v4, v3 + 96, *(_QWORD*)(v3 + 88), 0);
      result = v5;
      if (v5 != 0) {
        return std___1___shared_weak_count___release_weak(v5);
      }
    }
  }
  return result;
}

__int64 game_facility_anonymous_ProcEducateSkillMenu_AddItemList_closure_Invoke(
    __int64 a1, _DWORD* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;

  v2 = *(_QWORD*)(a1 + 8);
  v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      104, 16, 0);
  v5 = *(_QWORD*)(v2 + 1064);
  v6 = v4;
  v7 = GameRoutine_94d380(v5, a2);
  *(_WORD*)(v6 + 16) = 0;
  *(_DWORD*)(v6 + 40) = 0;
  *(_QWORD*)(v6 + 48) = 0;
  *(_QWORD*)(v6 + 56) = 0;
  *(_QWORD*)(v6 + 64) = 0;
  *(_QWORD*)(v6 + 72) = 0;
  *(_QWORD*)(v6 + 88) = v5;
  *(_WORD*)(v6 + 80) = 257;
  *(_BYTE*)(v6 + 82) = 1;
  *(_DWORD*)(v6 + 96) = *a2;
  *(_DWORD*)(v6 + 100) = v7;
  *(_QWORD*)v6 = game_facility_anonymous_EducateSkillMenuItem_vtable;
  *(_QWORD*)(v6 + 8) = 0;
  return BasicMenuCursor_16e0c00(v2, v6);
}

#pragma GCC visibility pop
