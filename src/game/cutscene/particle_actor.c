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
__int64* Manager_bc6460(_QWORD*, __int64, char);
unsigned __int128 Manager_bc6460_pair(_QWORD*, __int64,
                                      char) __asm__("Manager_bc6460");
__int64 GameHr_14a10d0(_QWORD*, __int64, __int64, __int64);
__int64 GameRoutine_14a1520(__int64*, char);
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c548;
extern __int64* eft_g_effectSystem_ptr[3];
extern char GameData_1a9f09e;
__int64 ParticleActor_Unknown4(__int64 result, float a2, float a3);

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

__int64 ParticleActor_Unknown4(__int64 result, float a2, float a3)
{

#pragma clang fp contract(off)
  _DWORD* v3;
  __int64* v4;
  __int64 v5;
  float v6;
  float v7;
  __int64 v8;
  __int64 v9;
  float v10;
  float v11;
  float v12;
  float v13;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  __int64* v19;
  unsigned int v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  struct {
    __int64 v25;
    __int64 v26;
    __int64 v27;
    int v28;
    char gap28_[4];
    __int64 v29;
    __int64 v30;
    __int64 v31;
    __int64 v32;
    __int64 v33;
    __int64 v34;
  } v25_;

  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v4 = (__int64*)(result + 72);
  v3 = *(_DWORD**)(result + 72);
  v5 = result;
  if (*(_QWORD*)v3 != 0 && *(_DWORD*)(*(_QWORD*)v3 + 16LL) == v3[2]) {
    v6 = *(float*)(result + 52);
    result = *(_QWORD*)(result + 32);
    if (result != 0) {
      v7 = a3;
      result = std___1___shared_weak_count_lock_alt1(result),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v8 = result;
      if (result == 0) {
        a3 = v7;
        if (v6 > 0x0.0p+0f) {
        LABEL_32:
          if (a3 > (float)(v6 + *(float*)(v5 + 48))) {
            result = GameRoutine_14a1520(v4, 1),
            v20 = COERCE_AS(__typeof__(v20),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
        }
      LABEL_34:
        if (v8 == 0) {
          return result;
        }
        goto LABEL_35;
      }
      v9 = *(_QWORD*)(v5 + 24);
      a3 = v7;
      if (v9 != 0) {
        v10 = 0x1.0000000000000p+1f;
        v11 = fabsf(v6 + 0x1.0000000000000p+1f);
        if (v11 <= 0x1.0000000000000p-23f) {
          goto LABEL_10;
        }
        v12 = fabsf(v6);
        if (v12 >= 0x1.0000000000000p+1f) {
          v10 = v12;
        }
        if (v11 <= (float)(v10 * 0x1.0000000000000p-23f)) {
        LABEL_10:
          if (v7 > (float)(*(float*)(v5 + 48) + *(float*)(v9 + 84))) {
            result = GameRoutine_14a1520(v4, 1),
            v20 = COERCE_AS(__typeof__(v20),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
        LABEL_35:
          if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8),
                v20 =
                    COERCE_AS(__typeof__(v20),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            return std___1___shared_weak_count___release_weak_alt1(v8);
          }
          return result;
        }
      }
    }
    else {
      v8 = 0;
    }
    if (v6 <= 0x0.0p+0f) {
      goto LABEL_34;
    }
    goto LABEL_32;
  }
  v13 = *(float*)(result + 48);
  if (v13 > a2 && v13 <= a3) {
    v15 = *(_QWORD*)(result + 56);
    v25_.v25 = 0;
    v25_.v26 = 0;
    v16 = *((_QWORD*)GameData_212c540 + 1);
    v25_.v29 = *(_QWORD*)GameData_212c540;
    v25_.v30 = v16;
    v17 = (_QWORD*)*eft_g_effectSystem_ptr[0];
    v25_.v33 = v25_.v29;
    v25_.v34 = v16;
    v25_.v28 = 0;
    v25_.v27 = v15;
    v18 = *((_QWORD*)GameData_212c548 + 1);
    v25_.v31 = *(_QWORD*)GameData_212c548;
    v25_.v32 = v18;
    v19 = ({
      unsigned __int128 r_ = Manager_bc6460_pair(v17, (__int64)&v25_.v25, 0);
      v20 = COERCE_AS(__typeof__(v20), (unsigned long long)(r_ >> 64));
      (__int64*)(unsigned long long)r_;
    });
    result = GameHr_14a10d0(&v25_.v25, (__int64)v19, v20,
                            (__int64)&GameData_1a9f09e),
    v20 = COERCE_AS(__typeof__(v20),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v21 = v25_.v25;
    v22 = v25_.v26;
    if (v25_.v26 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v25_.v26 + 8), 1u,
                                memory_order_relaxed);
    }
    v23 = *(_QWORD*)(v5 + 80);
    *(_QWORD*)(v5 + 72) = v21;
    *(_QWORD*)(v5 + 80) = v22;
    if (v23 != 0) {
      if (atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23),
            v20 = COERCE_AS(__typeof__(v20),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        result = std___1___shared_weak_count___release_weak_alt1(v23),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v22 = *(_QWORD*)(v5 + 80);
    }
    if (v22 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v22 + 8), 1u,
                                memory_order_relaxed);
      if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22),
            v20 = COERCE_AS(__typeof__(v20),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        result = std___1___shared_weak_count___release_weak_alt1(v22),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
    v24 = v25_.v26;
    if (v25_.v26 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v25_.v26 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24),
          v20 = COERCE_AS(__typeof__(v20),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      return std___1___shared_weak_count___release_weak_alt1(v24);
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
