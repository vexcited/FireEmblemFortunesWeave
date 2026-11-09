#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak();
extern __int64 (*GameData_203f2d0[])();
extern __int64 (*GameData_203f370[])();

extern __int64 (
    *game_facility_SceneCameraWorkUpdater_StateTickLinear_vtable[])();

extern __int64 (
    *game_facility_SceneCameraWorkUpdater_StateTickSpline_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcFadeView_instance_;
bool StateFadeIn_Unknown3(__int64 a1, __int64 a2);
_QWORD* StateFadeIn_Unknown4(__int64 a1, __int64 a2);

bool StateFadeIn_Unknown3(__int64 a1, __int64 a2)
{
  unsigned __int64 v2;

  if (*(_BYTE*)(a2 + 120) == 0 || game_ProcFadeView_instance_ == 0) {
    return true;
  }
  v2 = game_ProcFadeView_instance_ +
       ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ + 480)
        << 6);
  return *(float*)(v2 + 172) == *(float*)(v2 + 168);
}

_QWORD* StateFadeIn_Unknown4(__int64 a1, __int64 a2)
{
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  _QWORD* result;
  __int64 v7;
  int v8;
  __int64 v9;

  *(_BYTE*)(a2 + 120) = 0;
  v3 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v4 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
  v5 = *(_QWORD*)(a2 + 136);
  v4[1] = 0;
  v4[2] = 0;
  *(_QWORD*)(a2 + 136) = v4;
  *v4 = GameData_203f2d0;
  v4[3] = game_facility_SceneCameraWorkUpdater_StateTickLinear_vtable;
  result = v4 + 3;
  *(_QWORD*)(a2 + 128) = result;
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    result = (_QWORD*)std___1___shared_weak_count___release_weak();
  }
  v7 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 48) +
                             8LL * (*(_QWORD*)(a2 + 72) >> 9)) +
                  8 * (*(_QWORD*)(a2 + 72) & 0x1FFLL));
  if (v7 != 0) {
    v8 = **(unsigned __int8**)(v7 + 24);
    result = (_QWORD*)fw_memory_HeapManager_Allocate(*v3, 32, 16, 0);
    result[1] = 0;
    result[2] = 0;
    if (v8 == 1) {
      *result = GameData_203f370;
      result[3] = game_facility_SceneCameraWorkUpdater_StateTickSpline_vtable;
    }
    else {
      *result = GameData_203f2d0;
      result[3] = game_facility_SceneCameraWorkUpdater_StateTickLinear_vtable;
    }
    v9 = *(_QWORD*)(a2 + 136);
    *(_QWORD*)(a2 + 128) = result + 3;
    *(_QWORD*)(a2 + 136) = result;
    if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      return (_QWORD*)std___1___shared_weak_count___release_weak();
    }
  }
  return result;
}

#pragma GCC visibility pop
