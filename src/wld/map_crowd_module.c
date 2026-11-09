#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_a70ec0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 (*GameData_1fd19d8[])();
extern __int64 (*wld_MapCrowdModule_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* game_g_frame_clock_ptr[3];
__int64 MapCrowdModule_Destructor(_QWORD* a1);

__int64 MapCrowdModule_Destructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 result;

  *a1 = wld_MapCrowdModule_vtable;
  v2 = a1[6];
  if (v2 != 0) {
    v3 = std___1___shared_weak_count_lock(v2);
    if (v3 != 0) {
      v4 = v3;
      v5 = a1[5];
      if (v5 != 0) {
        GameRoutine_a70ec0(v5, a1[4]);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        std___1___shared_weak_count___release_weak(v4);
      }
    }
  }
  v6 = *game_g_frame_clock_ptr[0];
  v7 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v8 = *game_g_frame_clock_ptr[0] + 16592;
  v9 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      24, 16, 0);
  *(_DWORD*)(v9 + 8) = 2;
  *(_QWORD*)v9 = GameData_1fd19d8;
  v10 = a1[3];
  a1[3] = 0;
  *(_QWORD*)(v9 + 16) = v10;
  v11 = (_QWORD*)fw_memory_HeapManager_Allocate(*v7, 24, 16, 0);
  v11[1] = v8;
  v11[2] = v9;
  v12 = *(_QWORD*)(v6 + 16592);
  *v11 = v12;
  *(_QWORD*)(v12 + 8) = v11;
  *(_QWORD*)(v6 + 16592) = v11;
  ++*(_QWORD*)(v6 + 16608);
  v13 = a1[6];
  if (v13 != 0) {
    std___1___shared_weak_count___release_weak(v13);
  }
  result = a1[3];
  a1[3] = 0;
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  return result;
}

#pragma GCC visibility pop
