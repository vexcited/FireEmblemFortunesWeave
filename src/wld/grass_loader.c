#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_a934d0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1fd1508[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_g_frame_clock;
extern __int64* GameData_212e340[2];
__int64 wld_GrassLoader_GrassLoader(__int64 a1, __int64 a2, __int64 a3,
                                    __int64 a4);

__int64 wld_GrassLoader_GrassLoader(__int64 a1, __int64 a2, __int64 a3,
                                    __int64 a4)
{
  _QWORD* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 result;
  __int64 v13;
  __int64 v14;
  _QWORD v15[4];
  _QWORD* v16;

  *(_QWORD*)a1 = a4;
  *(_QWORD*)(a1 + 8) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  v7 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
  v7[2] = 0;
  v8 = GameData_212e340[0];
  v7[8] = 0;
  *(_QWORD*)(a1 + 64) = v7 + 4;
  *(_QWORD*)(a1 + 72) = v7;
  v16 = v15;
  *v7 = v8 + 2;
  v7[1] = 0;
  v15[0] = GameData_1fd1508;
  v15[1] = a1;
  GameRoutine_a934d0(v15, v7 + 4);
  if (v16 == v15) {
    v9 = 32;
  }
  else {
    if (v16 == nullptr) {
      goto LABEL_6;
    }
    v9 = 40;
  }
  (*(void (**)(__int64))(*v16 + v9))((__int64)v16);
LABEL_6:
  *(_DWORD*)(a1 + 80) = 1;
  v10 = *(_QWORD*)(game_g_frame_clock + 13432);
  v11 = *(_QWORD*)(a1 + 72);
  v13 = *(_QWORD*)(a1 + 64);
  v14 = v11;
  if (v11 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 16), 1u,
                              memory_order_relaxed);
  }
  *(_QWORD*)(a1 + 56) = (*(__int64 (**)(__int64, __int64, __int64, __int64*))(
      *(_QWORD*)v10 + 24LL))(v10, a2, a3, &v13);
  result = v14;
  if (v14 != 0) {
    return std___1___shared_weak_count___release_weak(v14);
  }
  return result;
}

#pragma GCC visibility pop
