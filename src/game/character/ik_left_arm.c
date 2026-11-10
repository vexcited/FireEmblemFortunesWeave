#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CharacterTrailModule_d3d630(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_200c598[])();
extern __int64 (*game_character_IKLeftArm_vtable[])();
extern __int64 (*kaneko_WPHolder_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__n128 IKLeftArm_10e5930(__int64 a1, __int64* a2, __int64 a3);
__n128 IKLeftArm_Destructor_10e5bb0(_QWORD* a1);
__int64 IKLeftArm_DeletingDestructor(_QWORD* a1);
__n128 IKLeftArm_Destructor_10e5dc0(_QWORD* a1);
__int64 game_character_IKLeftArm_IKLeftArm_lambda0_Invoke(__int64 result,
                                                          int* a2);

__n128 IKLeftArm_10e5930(__int64 a1, __int64* a2, __int64 a3)
{
  __int64 v3;
  __n128 result;
  __int64 v5;
  __int64 v6;

  v3 = a2[1];
  v5 = *a2;
  v6 = v3;
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                              memory_order_relaxed);
  }
  CharacterTrailModule_d3d630(a1, &v5, a3, 1);
  if (v6 != 0) {
    return std___1___shared_weak_count___release_weak(v6);
  }
  return result;
}

__n128 IKLeftArm_Destructor_10e5bb0(_QWORD* a1)
{
  __int64 v1;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __n128 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v1 = a1[14];
  *a1 = game_character_IKLeftArm_vtable;
  a1[5] = GameData_200c598;
  v3 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[15] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5);
  }
  v7 = a1[11];
  if (v7 != 0) {
    v8 = *v3;
    a1[12] = v7;
    v9 = 128;
    if (*(_QWORD*)(v8 + 200) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free(v8 + v9);
  }
  v10 = a1[9];
  a1[5] = kaneko_WPHolder_vtable;
  if (v10 != 0) {
    result = std___1___shared_weak_count___release_weak(v10);
  }
  v11 = a1[7];
  if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    return std___1___shared_weak_count___release_weak(v11);
  }
  return result;
}

__int64 IKLeftArm_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v1 = a1[14];
  *a1 = game_character_IKLeftArm_vtable;
  a1[5] = GameData_200c598;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[15] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5);
  }
  v6 = a1[11];
  if (v6 != 0) {
    v7 = *(_QWORD*)v3;
    a1[12] = v6;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(v7 + v8);
  }
  v9 = a1[9];
  a1[5] = kaneko_WPHolder_vtable;
  if (v9 != 0) {
    std___1___shared_weak_count___release_weak(v9);
  }
  v10 = a1[7];
  if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    std___1___shared_weak_count___release_weak(v10);
  }
  v11 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v11 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v11);
}

__n128 IKLeftArm_Destructor_10e5dc0(_QWORD* a1)
{
  __int64 v1;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __n128 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v1 = a1[9];
  *(a1 - 5) = game_character_IKLeftArm_vtable;
  *a1 = GameData_200c598;
  v3 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[10] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5);
  }
  v7 = a1[6];
  if (v7 != 0) {
    v8 = *v3;
    a1[7] = v7;
    v9 = 128;
    if (*(_QWORD*)(v8 + 200) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free(v8 + v9);
  }
  v10 = a1[4];
  *a1 = kaneko_WPHolder_vtable;
  if (v10 != 0) {
    result = std___1___shared_weak_count___release_weak(v10);
  }
  v11 = a1[2];
  if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    return std___1___shared_weak_count___release_weak(v11);
  }
  return result;
}

__int64 game_character_IKLeftArm_IKLeftArm_lambda0_Invoke(__int64 result,
                                                          int* a2)
{
  int v2;
  float v3;

  v2 = *a2;
  v3 = 0.0;
  if (*a2 <= -574916403) {
    if (v2 == -1101902990 || v2 == -1080537169 || v2 == -589947500) {
      goto LABEL_16;
    }
  }
  else {
    if (v2 <= 387327020) {
      if (v2 != -574916402 && v2 != 119788728) {
        goto LABEL_17;
      }
    LABEL_16:
      v3 = 1.0;
      goto LABEL_17;
    }
    if (v2 == 869686455 || v2 == 387327021) {
      goto LABEL_16;
    }
  }
LABEL_17:
  *(float*)(*(_QWORD*)(result + 8) + 180LL) = v3;
  return result;
}

#pragma GCC visibility pop
