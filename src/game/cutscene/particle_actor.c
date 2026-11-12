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
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");

__int64 ParticleActor_Unknown8(_QWORD* a1, __int64 a2)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  bool v12;
  __int64 v13;
  unsigned __int64 v14;
  _QWORD v15[2];

  result = a1[2];
  if (result != 0) {
    result = std___1___shared_weak_count_lock_alt1(result);
    if (result != 0) {
      v5 = a1[1];
      v6 = result;
      if (v5 != 0) {
        v7 = *(unsigned __int8*)(v5 + 120);
        v8 = v5 + 121;
        v11 = v5 + 128;
        v9 = *(_QWORD*)(v5 + 128);
        v10 = *(_QWORD*)(v11 + 8);
        v12 = (v7 & 1) == 0;
        v13 = *(_QWORD*)(a2 + 32);
        v14 = v7 >> 1;
        if (v12) {
          v9 = v14;
        }
        else {
          v8 = v10;
        }
        v15[0] = v8;
        v15[1] = v9;
        if (v13 == 0) {
          GameRoutine_60a310_alt1();
        }
        result =
            (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)v13 + 48LL))(v13, v15);
        a1[5] = result;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
        return std___1___shared_weak_count___release_weak_alt1(v6);
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
