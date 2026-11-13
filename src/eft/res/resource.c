#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_17d4db0(_QWORD, _QWORD);
__int64 GameRoutine_631500(_QWORD, _QWORD);
__int64 GameRoutine_634d80(_QWORD);
__int64 GameRoutine_635a60(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_os_AcquireReadLock(_QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_ReleaseReadLock(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 snprintf(_QWORD, _QWORD, const char*, ...);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 strlen(_QWORD);
extern __int64 (*GameData_1fd0758[])();
extern __int64 (*eft_res_Resource_vtable[])();
extern __int64 GameData_2203100;
extern __int64 eft_g_effectSystem;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* snd_g_fileIndex_ptr[2];
extern char GameData_1af96e6;
extern char GameData_1af96e7;
extern char GameData_1af96e8;
_QWORD* Resource_Destructor_bcdae0(_QWORD* result);
__int64 Resource_DeletingDestructor_alt1(_QWORD* a1) __asm__(
    "Resource_DeletingDestructor");
__int64 Resource_Unknown2(__int64 a1);
__int64 GameRoutine_17d4db0_alt1(__int64,
                                 __int64) __asm__("GameRoutine_17d4db0");
__int64 GameRoutine_631500_alt1(__int64 result,
                                _QWORD*) __asm__("GameRoutine_631500");
__int64 GameRoutine_634d80_alt1(__int64, __int64) __asm__("GameRoutine_634d80");
__int64 GameRoutine_635a60_alt1(__int64, __int64*, char, char, __int64,
                                __int64) __asm__("GameRoutine_635a60");
unsigned __int128
GameRoutine_635a60_alt1_pair(__int64, __int64*, char, char, __int64,
                             __int64) __asm__("GameRoutine_635a60");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 nn_os_AcquireReadLock_alt1(__int64) __asm__("nn_os_AcquireReadLock");
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_ReleaseReadLock_alt1(__int64) __asm__("nn_os_ReleaseReadLock");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
int snprintf_alt1(__int64, unsigned __int64, const char*,
                  ...) __asm__("snprintf");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void Resource_DeletingDestructor(_QWORD* a1);

_QWORD* Resource_Destructor_bcdae0(_QWORD* result)
{
  __int64 v1;

  v1 = result[5];
  *result = eft_res_Resource_vtable;
  if (v1 != 0) {
    return (_QWORD*)GameRoutine_634d80(*(_QWORD*)(v1 + 8));
  }
  return result;
}

void Resource_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;

  v1 = a1[5];
  *a1 = eft_res_Resource_vtable;
  if (v1 != 0) {
    GameRoutine_634d80_alt1(*(_QWORD*)(v1 + 8), v1);
  }
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, (__int64)a1);
}

__int64 Resource_Unknown2(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  char v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 i;
  unsigned __int8* v18;
  int v19;
  char* v20;
  int v21;
  __int64 v22;
  __int64 v23;
  int v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  struct {
    __int64 v29[3];
    __int64 v30;
    __int64 v31;
    int v32;
  } v29_;
  char v33[128];
  struct {
    __int64 (**v34)();
    _QWORD* v35;
    __int64 v36;
    __int64 (***v37)();
    __int64 (***v38)();
  } v34_;
  struct {
    __int64 (**v39)();
    __int64 v40;
  } v39_;
  _QWORD v41[3];

  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((*(_BYTE*)(a1 + 8) & 1) != 0) {
    return 0;
  }
  v41[1] = v1;
  v41[2] = v2;
  v4 = eft_g_effectSystem;
  v5 = *(_QWORD*)(eft_g_effectSystem + 112);
  if (*(_QWORD*)(v5 + 24) == 0) {
    return 0;
  }
  if ((*(_BYTE*)(a1 + 10) & 1) == 0) {
    v6 = a1;
    snprintf_alt1(
        (__int64)v33, 0x80u, "Effect/Particle/%s.ptcl",
        *(const char**)(*(_QWORD*)(v5 + 40) + 8LL * *(int*)(a1 + 32))),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v29_.v29[0] = (__int64)v33;
    v7 = *snd_g_fileIndex_ptr[0];
    v29_.v29[1] = strlen_alt1(v33),
    v8 = COERCE_AS(__typeof__(v8),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v29_.v29[2] = 0;
    v29_.v30 = 0;
    v29_.v31 = GameData_2203100;
    v29_.v32 = 1;
    nn_os_LockMutex_alt1(v7 + 4456),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v39_.v40 = 0;
    v41[0] = v29_.v31;
    v39_.v39 = nullptr;
    v34_.v34 = GameData_1fd0758;
    v34_.v35 = v41;
    v34_.v38 = &v34_.v34;
    v34_.v36 = v7;
    v34_.v37 = &v39_.v39;
    v9 = ({
      unsigned __int128 r_ = GameRoutine_635a60_alt1_pair(v7, v29_.v29, 0, 0, 0,
                                                          (__int64)&v34_.v34);
      v8 = COERCE_AS(__typeof__(v8), (unsigned long long)(r_ >> 64));
      (__int64)(unsigned long long)r_;
    });
    v10 = v8;
    if (v34_.v38 == &v34_.v34) {
      v11 = 4;
    }
    else {
      if (v34_.v38 == nullptr) {
        goto LABEL_10;
      }
      v11 = 5;
    }
    ((void (*)(__int64 (***)(void), __int64))(*v34_.v38)[v11])(v34_.v38, v8),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  LABEL_10:
    if ((v10 & 1) != 0) {
      v12 = v29_.v32;
      v13 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 16, 16, 0),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *(_QWORD*)v13 = v9;
      *(_DWORD*)(v13 + 8) = v12;
      GameRoutine_17d4db0_alt1(v7 + 3536, v13),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    else {
      if (v39_.v40 == 0) {
      LABEL_18:
        nn_os_UnlockMutex_alt1(v7 + 4456),
            v8 = COERCE_AS(__typeof__(v8),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v14 = v29_.v30;
        a1 = v6;
        *(_QWORD*)(v6 + 40) = v9;
        if (v14 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v14),
              v8 = COERCE_AS(__typeof__(v8),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          a1 = v6;
        }
        v4 = eft_g_effectSystem;
        *(_BYTE*)(a1 + 10) = 1;
        v5 = *(_QWORD*)(v4 + 112);
        goto LABEL_21;
      }
      if (*(_QWORD*)(v39_.v40 + 8) != -1) {
        v34_.v34 = v39_.v39;
        v34_.v35 = (_QWORD*)v39_.v40;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v39_.v40 + 16), 1u,
                                  memory_order_relaxed);
        GameRoutine_631500_alt1(v9, &v34_.v34),
            v8 = COERCE_AS(__typeof__(v8),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (v34_.v35 != nullptr) {
          std___1___shared_weak_count___release_weak_alt1((__int64)v34_.v35),
              v8 = COERCE_AS(__typeof__(v8),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
    }
    if (v39_.v40 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v39_.v40),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    goto LABEL_18;
  }
LABEL_21:
  v15 = *(unsigned int*)(v5 + 48);
  if ((int)v15 >= 1) {
    v16 = *(_QWORD*)(v5 + 40);
    for (i = 0; v15 != i; ++i) {
      v18 = *(unsigned __int8**)(v16 + 8 * i);
      v19 = *v18;
      if (v19 == 67) {
        v19 = v18[1];
        if (v19 == 77) {
          v19 = v18[2];
          if (v18[2] == 0) {
            v20 = &GameData_1af96e7;
          LABEL_35:
            v21 = (unsigned __int8)*v20;
            v19 = 0;
            goto LABEL_36;
          }
          if (v19 == 78) {
            v19 = v18[3];
            if (v18[3] == 0) {
              v20 = &GameData_1af96e8;
              goto LABEL_35;
            }
            v21 = 0;
          }
          else {
            v21 = 78;
          }
        }
        else {
          v20 = &GameData_1af96e6;
          if (v19 == 0) {
            goto LABEL_35;
          }
          v21 = 77;
        }
      }
      else {
        v21 = 67;
      }
    LABEL_36:
      if (v19 == v21) {
        goto LABEL_39;
      }
    }
  }
  LODWORD(i) = -1;
LABEL_39:
  if (*(_DWORD*)(a1 + 32) != (_DWORD)i) {
    v26 = *(_QWORD*)(v4 + 104);
    v27 = v26 + 8;
    v28 = *(_QWORD*)(v26 + 16);
    if (v28 == v27) {
      return 0;
    }
    while (*(_DWORD*)(v28 + 16) != (_DWORD)i) {
      v28 = *(_QWORD*)(v28 + 8);
      if (v28 == v27) {
        return 0;
      }
    }
    if ((*(_BYTE*)(v28 - 7) & 1) != 0) {
      return 0;
    }
  }
  v22 = *(_QWORD*)(a1 + 40);
  if (v22 == 0) {
  LABEL_45:
    *(_BYTE*)(a1 + 8) = 1;
    return 1;
  }
  v23 = a1;
  nn_os_AcquireReadLock_alt1(v22 + 696),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v24 = *(_DWORD*)(v22 + 656);
  nn_os_ReleaseReadLock_alt1(v22 + 696),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((v24 & 8) != 0) {
    v25 = *(_QWORD*)(v23 + 40);
    a1 = v23;
    if (v25 != 0 && *(_QWORD*)(v25 + 592) == 0) {
      GameRoutine_634d80_alt1(*(_QWORD*)(v25 + 8), v25),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      a1 = v23;
      *(_QWORD*)(v23 + 40) = 0;
    }
    goto LABEL_45;
  }
  return 0;
}

#pragma GCC visibility pop
