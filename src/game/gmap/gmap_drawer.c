#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_19931a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a867a0(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 GameData_2241420;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 GmapDrawer_Unknown3(__int64 result);

__int64 GmapDrawer_Unknown3(__int64 result)
{
  _QWORD* v1;
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  v1 = *(_QWORD**)(result + 8);
  if (v1 != nullptr) {
    if (v1[4] != 0) {
      GameRoutine_a867a0(v1 + 4);
    }
    (*(void (**)(__int64))(*(_QWORD*)GameData_2241420 + 24LL))(
        GameData_2241420);
    if (GameData_2241420 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_2241420 + 8LL))(
          GameData_2241420);
    }
    GameData_2241420 = 0;
    GameRoutine_19931a0(*v1, "UI/Common/common_textures.bntx", 30);
    GameRoutine_19931a0(*v1, "UI/Gmap/gmap_textures.bntx", 26);
    v2 = (_QWORD*)v1[1];
    v3 = (_QWORD*)v1[2];
    if (v2 != v3) {
      do {
        if (*v2 != 0) {
          (*(void (**)(_QWORD))(*(_QWORD*)*v2 + 8LL))(*v2);
        }
        ++v2;
      } while (v2 != v3);
      v2 = (_QWORD*)v1[1];
    }
    v1[2] = v2;
    v4 = v1[13];
    if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak(v4);
    }
    v5 = v1[9];
    v6 = fw_memory_g_heap_manager_ptr;
    if (v5 != 0) {
      v7 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
      v1[10] = v5;
      v8 = 128;
      if (*(_QWORD*)(v7 + 200) == 0) {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free(v7 + v8, v5);
    }
    v9 = v1[1];
    if (v9 != 0) {
      v10 = *(_QWORD*)v6;
      v1[2] = v9;
      v11 = 128;
      if (*(_QWORD*)(v10 + 200) == 0) {
        v11 = 56;
      }
      nn_mem_StandardAllocator_Free(v10 + v11, v9);
    }
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
      v12 = 56;
    }
    return nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v12, v1);
  }
  return result;
}

#pragma GCC visibility pop
