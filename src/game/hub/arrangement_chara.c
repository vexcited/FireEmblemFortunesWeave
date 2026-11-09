#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_cb8b80(_QWORD, _QWORD);
__int64 GameRoutine_e241d0(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1fe37b0[])();
extern __int64 (*game_hub_ArrangementChara_vtable[])();
extern __int64 GameData_220fd08;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212d458[7];
extern int GameData_2216254;
__int64 ArrangementChara_Destructor(_QWORD* a1);
__int64 ArrangementChara_e21d60(__int64 result);

__int64 ArrangementChara_Destructor(_QWORD* a1)
{
  __int64 v1;
  _QWORD* v2;
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
  __int64 v14;
  __int64 result;

  v2 = a1 + 2;
  v1 = a1[2];
  *a1 = game_hub_ArrangementChara_vtable;
  GameRoutine_e241d0(a1 + 1, v1);
  a1[3] = 0;
  a1[1] = v2;
  *v2 = 0;
  ArrangementChara_e21d60(a1);
  v4 = a1[4];
  if (v4 != 0) {
    v5 = a1[5];
    v6 = fw_memory_g_heap_manager_ptr;
    if (v4 == v5) {
      goto LABEL_19;
    }
    do {
      v7 = *(_QWORD*)(v5 - 24);
      if (v7 != 0) {
        v8 = *(_QWORD*)(v5 - 16);
        if (v7 == v8) {
          goto LABEL_12;
        }
        do {
          v9 = *(_QWORD*)(v8 - 8);
          if (v9 != 0) {
            std___1___shared_weak_count___release_weak(v9);
          }
          v8 -= 16;
        } while (v8 != v7);
        v10 = *(_QWORD*)(v5 - 24);
        *(_QWORD*)(v5 - 16) = v7;
        if (v10 != 0) {
        LABEL_12:
          if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) != 0) {
            v11 = 128;
          }
          else {
            v11 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v11);
        }
      }
      v12 = *(_QWORD*)(v5 - 32);
      if (v12 != 0) {
        std___1___shared_weak_count___release_weak(v12);
      }
      v5 -= 40;
    } while (v4 != v5);
    v13 = a1[4];
    a1[5] = v4;
    if (v13 != 0) {
    LABEL_19:
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
        v14 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v14);
    }
  }
  result = GameRoutine_e241d0(a1 + 1, a1[2]);
  *a1 = GameData_1fe37b0;
  if ((_QWORD*)GameData_220fd08 == a1) {
    GameData_220fd08 = 0;
    GameData_2216254 = 0;
  }
  return result;
}

__int64 ArrangementChara_e21d60(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  v1 = *(_QWORD*)(result + 32);
  v2 = *(_QWORD*)(result + 40);
  v3 = result;
  if (v1 != v2) {
    v4 = GameData_212d458[0];
    do {
      v5 = *(__int64**)(v1 + 16);
      v6 = *(__int64**)(v1 + 24);
      while (v5 != v6) {
        v7 = *v5;
        v8 = v5[1];
        if (v8 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                                    memory_order_relaxed);
          v9 = *v4;
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                                    memory_order_relaxed);
        }
        else {
          v9 = *v4;
        }
        v16 = v7;
        v17 = v8;
        GameRoutine_cb8b80(v9, &v16);
        result = v17;
        if (v17 != 0) {
          result = std___1___shared_weak_count___release_weak(v17);
        }
        if (v8 != 0) {
          result = std___1___shared_weak_count___release_weak(v8);
        }
        v5 += 2;
      }
      v1 += 40;
    } while (v1 != v2);
    v1 = *(_QWORD*)(v3 + 32);
    v2 = *(_QWORD*)(v3 + 40);
  }
  if (v1 != v2) {
    v10 = fw_memory_g_heap_manager_ptr;
    do {
      v11 = *(_QWORD*)(v2 - 24);
      if (v11 != 0) {
        v12 = *(_QWORD*)(v2 - 16);
        if (v11 == v12) {
          goto LABEL_25;
        }
        do {
          v13 = *(_QWORD*)(v12 - 8);
          if (v13 != 0) {
            std___1___shared_weak_count___release_weak(v13);
          }
          v12 -= 16;
        } while (v12 != v11);
        v14 = *(_QWORD*)(v2 - 24);
        *(_QWORD*)(v2 - 16) = v11;
        if (v14 != 0) {
        LABEL_25:
          if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) != 0) {
            v15 = 128;
          }
          else {
            v15 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v10 + v15);
        }
      }
      result = *(_QWORD*)(v2 - 32);
      if (result != 0) {
        result = std___1___shared_weak_count___release_weak(result);
      }
      v2 -= 40;
    } while (v1 != v2);
  }
  *(_QWORD*)(v3 + 40) = v1;
  return result;
}

#pragma GCC visibility pop
