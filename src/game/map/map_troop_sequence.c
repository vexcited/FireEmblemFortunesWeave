#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 std___1___shared_weak_count___release_weak(__int64);
extern __int64 GameData_2131d50[16];
extern __int64 fw_memory_g_heap_manager_ptr;
void GameRoutine_17869d0(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void MapTroopSequence_DeletingDestructor(_QWORD* a1);

void MapTroopSequence_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v2 = GameData_2131d50[0] + 440;
  *a1 = GameData_2131d50[0] + 16;
  a1[22] = v2;
  v3 = a1[59];
  if (v3 != 0) {
    std___1___shared_weak_count___release_weak(v3);
  }
  v4 = (_QWORD*)a1[56];
  if (v4 == a1 + 52) {
    v5 = 32;
  }
  else {
    if (v4 == nullptr) {
      goto LABEL_8;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v4 + v5))((__int64)v4);
LABEL_8:
  v6 = a1[48];
  v7 = fw_memory_g_heap_manager_ptr;
  if (v6 != 0) {
    v8 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[49] = v6;
    v9 = 128;
    if (*(_QWORD*)(v8 + 200) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free(v8 + v9, v6);
  }
  GameRoutine_17869d0((__int64)a1);
  v10 = 128;
  if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
    v10 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)v7 + v10, (__int64)a1);
}

#pragma GCC visibility pop
