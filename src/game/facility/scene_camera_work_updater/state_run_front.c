#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_809ba0(_QWORD, float);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak();
extern __int64 (*GameData_203f280[])();
extern __int64 (*game_facility_SceneCameraWorkUpdater_StateFadeIn_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcFadeView_instance_;
_QWORD* StateRunFront_Unknown4(__int64 a1, __int64 a2);

_QWORD* StateRunFront_Unknown4(__int64 a1, __int64 a2)
{
  _QWORD* result;
  _QWORD* v4;
  _QWORD* v5;
  __int64 v6;

  result = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
  result[1] = 0;
  result[2] = 0;
  *result = GameData_203f280;
  result[3] = game_facility_SceneCameraWorkUpdater_StateFadeIn_vtable;
  v4 = result + 3;
  if (*(_BYTE*)(a2 + 120) == 1 && game_ProcFadeView_instance_ != 0) {
    v5 = result;
    GameRoutine_809ba0(game_ProcFadeView_instance_, 0.5);
    result = v5;
  }
  v6 = *(_QWORD*)(a2 + 136);
  *(_QWORD*)(a2 + 128) = v4;
  *(_QWORD*)(a2 + 136) = result;
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    return (_QWORD*)std___1___shared_weak_count___release_weak();
  }
  return result;
}

#pragma GCC visibility pop
