#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1fed278[])();
extern __int64 (*game_combat_JostleManager_vtable[])();
extern __int64 GameData_22162a8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_22162a4;
_QWORD* JostleManager_Destructor(_QWORD* result);

_QWORD* JostleManager_Destructor(_QWORD* result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  v1 = result[13];
  v2 = result;
  *result = game_combat_JostleManager_vtable;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    result = (_QWORD*)std___1___shared_weak_count___release_weak(v1);
  }
  v3 = v2[9];
  if (v3 != 0) {
    v4 = v2[10];
    if (v3 == v4) {
      goto LABEL_11;
    }
    do {
      result = *(_QWORD**)(v4 - 8);
      if (result != nullptr) {
        result = (_QWORD*)std___1___shared_weak_count___release_weak(result);
      }
      v4 -= 16;
    } while (v4 != v3);
    v5 = v2[9];
    v2[10] = v3;
    v3 = v5;
    if (v5 != 0) {
    LABEL_11:
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v6 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, v3);
    }
  }
  v7 = v2[6];
  if (v7 != 0) {
    v8 = v2[7];
    if (v7 == v8) {
      goto LABEL_22;
    }
    do {
      v9 = *(_QWORD*)(v8 - 8);
      if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
        result = (_QWORD*)std___1___shared_weak_count___release_weak(v9);
      }
      v8 -= 16;
    } while (v8 != v7);
    v10 = v2[6];
    v2[7] = v7;
    v7 = v10;
    if (v10 != 0) {
    LABEL_22:
      v11 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v11 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, v7);
    }
  }
  v12 = v2[5];
  if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    result = (_QWORD*)std___1___shared_weak_count___release_weak(v12);
  }
  v13 = v2[2];
  if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    result = (_QWORD*)std___1___shared_weak_count___release_weak(v13);
  }
  *v2 = GameData_1fed278;
  if ((_QWORD*)GameData_22162a8 == v2) {
    GameData_22162a8 = 0;
    GameData_22162a4 = 0;
  }
  return result;
}

#pragma GCC visibility pop
