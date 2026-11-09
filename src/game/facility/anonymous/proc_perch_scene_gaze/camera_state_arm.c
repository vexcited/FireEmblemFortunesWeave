#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_138e5e0(_QWORD, _QWORD);
__int64 GameRoutine_1405080(_QWORD);
__int64 GameRoutine_143b060();
__int64 SceneCharacter_1401ce0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak();

extern __int64 (
    *game_facility_anonymous_ProcPerchSceneGaze_CameraStateToQuestion_vtable
        [])();
extern __int64 GameData_212dce8;
extern __int64 GameData_2242748;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char GameData_22469e0;
void GameRoutine_143a390();
_QWORD* CameraStateArm_Unknown5();
__int64 CameraStateArm_Unknown8();

_QWORD* CameraStateArm_Unknown5()
{
  __int64* v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* result;

  v0 = (__int64*)GameData_212dce8;
  v1 = GameRoutine_138e5e0(*(_QWORD*)GameData_212dce8, 0);
  if (v1 != 0) {
    v2 = v1;
    v3 = *(_QWORD*)(v1 + 128);
    v4 = *(_QWORD*)(v2 + 136);
    if (v4 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                                memory_order_relaxed);
      GameRoutine_1405080(v3);
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        std___1___shared_weak_count___release_weak();
      }
    }
    else {
      GameRoutine_1405080(v3);
    }
  }
  GameRoutine_143a390();
  v5 = *v0;
  GameData_22469e0 = 1;
  v6 = GameRoutine_138e5e0(v5, 0);
  if (v6 != 0) {
    SceneCharacter_1401ce0(v6, &GameData_2242748);
  }
  result = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
  *result =
      game_facility_anonymous_ProcPerchSceneGaze_CameraStateToQuestion_vtable;
  return result;
}

__int64 CameraStateArm_Unknown8()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;

  v0 = GameRoutine_138e5e0(*(_QWORD*)GameData_212dce8, 0);
  if (v0 != 0) {
    v1 = v0;
    v2 = *(_QWORD*)(v0 + 128);
    v3 = *(_QWORD*)(v1 + 136);
    if (v3 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                                memory_order_relaxed);
      GameRoutine_1405080(v2);
      if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
        std___1___shared_weak_count___release_weak();
      }
    }
    else {
      GameRoutine_1405080(v2);
    }
  }
  return GameRoutine_143b060();
}

#pragma GCC visibility pop
