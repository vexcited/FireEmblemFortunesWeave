#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_14a1390(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 (*game_cutscene_ParticleActor_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 ParticleActor_Unknown8(_QWORD* a1, __int64 a2);
__int64 ParticleActor_Unknown9(__int64 a1, float* a2);
__int64 ParticleActor_Destructor(_QWORD* a1);
__int64 ParticleActor_DeletingDestructor(_QWORD* a1);

__int64 ParticleActor_Unknown8(_QWORD* a1, __int64 a2)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  bool v13;
  __int64 v14;
  unsigned __int64 v15;
  _QWORD v16[2];

  result = a1[2];
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v6 = a1[1];
      v7 = result;
      if (v6 != 0) {
        v8 = *(unsigned __int8*)(v6 + 120);
        v9 = v6 + 121;
        v12 = v6 + 128;
        v10 = *(_QWORD*)(v6 + 128);
        v11 = *(_QWORD*)(v12 + 8);
        v13 = (v8 & 1) == 0;
        v14 = *(_QWORD*)(a2 + 32);
        v15 = v8 >> 1;
        if (v13) {
          v10 = v15;
        }
        else {
          v9 = v11;
        }
        v16[0] = v9;
        v16[1] = v10;
        if (v14 == 0) {
          GameRoutine_60a310(0, v5);
        }
        result =
            (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)v14 + 48LL))(v14, v16);
        a1[5] = result;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        return std___1___shared_weak_count___release_weak(v7);
      }
    }
  }
  return result;
}

__int64 ParticleActor_Unknown9(__int64 a1, float* a2)
{
  __int64 result;
  _QWORD* v4;
  _QWORD* v5;
  __int64 v6;
  float v7;

  v5 = *(_QWORD**)(a1 + 72);
  result = a1 + 72;
  v4 = v5;
  v6 = *v5;
  if (*v5 != 0 && *(_DWORD*)(v6 + 16) == *((_DWORD*)v4 + 2) &&
      *a2 > (float)(*(float*)(a1 + 48) + 2.0f)) {
    v7 = fabsf(*(float*)(a1 + 52));
    if (v7 <= 0.00000011921f || v7 <= (float)(v7 * 0.00000011921f)) {
      return GameRoutine_14a1390(result, 1);
    }
  }
  return result;
}

__int64 ParticleActor_Destructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 result;

  v1 = a1[10];
  *a1 = game_cutscene_ParticleActor_vtable;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak(v1);
  }
  v3 = a1[4];
  if (v3 != 0) {
    std___1___shared_weak_count___release_weak(v3);
  }
  result = a1[2];
  if (result != 0) {
    return std___1___shared_weak_count___release_weak(result);
  }
  return result;
}

__int64 ParticleActor_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v1 = a1[10];
  *a1 = game_cutscene_ParticleActor_vtable;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak(v1);
  }
  v3 = a1[4];
  if (v3 != 0) {
    std___1___shared_weak_count___release_weak(v3);
  }
  v4 = a1[2];
  if (v4 != 0) {
    std___1___shared_weak_count___release_weak(v4);
  }
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v5 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, a1);
}

#pragma GCC visibility pop
