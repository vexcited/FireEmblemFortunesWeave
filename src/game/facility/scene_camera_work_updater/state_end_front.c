#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak();
extern __int64 (*GameData_203efc0[])();
extern __int64 (
    *game_facility_SceneCameraWorkUpdater_StateBranchEnd_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 StateEndFront_Unknown4(__int64 a1, __int64 a2);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");

__int64 StateEndFront_Unknown4(__int64 a1, __int64 a2)
{
  _QWORD* v3;
  __int64 v4;
  __int64 result;

  v3 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
  v4 = *(_QWORD*)(a2 + 136);
  v3[1] = 0;
  v3[2] = 0;
  *(_QWORD*)(a2 + 136) = v3;
  *v3 = GameData_203efc0;
  v3[3] = game_facility_SceneCameraWorkUpdater_StateBranchEnd_vtable;
  result = (__int64)(v3 + 3);
  *(_QWORD*)(a2 + 128) = result;
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    return std___1___shared_weak_count___release_weak_alt1(v4);
  }
  return result;
}

#pragma GCC visibility pop
