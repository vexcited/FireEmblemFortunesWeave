#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_14a1b00(_QWORD, float);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
_QWORD* DungeonRouteReport_f604e0(_QWORD* result);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_hub_DungeonRouteReport_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__n128 DungeonRouteReport_f60360(_QWORD* a1);

__n128 DungeonRouteReport_f60360(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  __n128 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;

  *a1 = game_hub_DungeonRouteReport_vtable;
  v3 = a1[1];
  v2 = a1[2];
  if (v2 != v3) {
    v4 = 0;
    do {
      v5 = *(_QWORD*)(v3 + 8 * v4);
      if (v5 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
        *(_QWORD*)(v3 + 8 * v4) = 0;
        v3 = a1[1];
        v2 = a1[2];
      }
      ++v4;
    } while (v4 < (v2 - v3) >> 3);
  }
  a1[2] = v3;
  DungeonRouteReport_f604e0(a1);
  v7 = a1[4];
  v8 = fw_memory_g_heap_manager_ptr;
  if (v7 != 0) {
    v9 = a1[5];
    if (v7 == v9) {
      goto LABEL_14;
    }
    do {
      v10 = *(_QWORD*)(v9 - 8);
      if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
        std___1___shared_weak_count___release_weak(v10);
      }
      v9 -= 16;
    } while (v9 != v7);
    v11 = a1[4];
    a1[5] = v7;
    if (v11 != 0) {
    LABEL_14:
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
        v12 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v12);
    }
  }
  v13 = a1[1];
  if (v13 != 0) {
    v14 = *(_QWORD*)v8;
    a1[2] = v13;
    v15 = 128;
    if (*(_QWORD*)(v14 + 200) == 0) {
      v15 = 56;
    }
    return nn_mem_StandardAllocator_Free(v14 + v15);
  }
  return result;
}

_QWORD* DungeonRouteReport_f604e0(_QWORD* result)
{
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  unsigned __int64 i;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v2 = result[1];
  v1 = result[2];
  v3 = result;
  if (v1 != v2) {
    for (i = 0; i < (v1 - v2) >> 3; ++i) {
      v5 = *(_QWORD*)(v2 + 8 * i);
      v6 = *(_QWORD*)(v5 + 80);
      if (v6 == 0) {
        continue;
      }
      result = *(_QWORD**)(v6 + 8);
      *(_BYTE*)v6 = 0;
      v7 = *result;
      if (*result != 0) {
        if (*(_DWORD*)(v7 + 16) == *((_DWORD*)result + 2)) {
          *(_BYTE*)(v7 + 33) = 0;
          if (*(_BYTE*)v6 != 0) {
            goto LABEL_5;
          }
        }
        result = *(_QWORD**)(v6 + 8);
      }
      result = (_QWORD*)GameRoutine_14a1b00(result, 0.0);
    LABEL_5:
      *(_QWORD*)(v5 + 80) = 0;
      v2 = v3[1];
      v1 = v3[2];
    }
  }
  v8 = v3[4];
  v9 = v3[5];
  if (v9 != v8) {
    do {
      v10 = *(_QWORD*)(v9 - 8);
      if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
        result = (_QWORD*)std___1___shared_weak_count___release_weak(v10);
      }
      v9 -= 16;
    } while (v9 != v8);
    v3[5] = v8;
  }
  return result;
}

#pragma GCC visibility pop
