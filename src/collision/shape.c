#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_2b0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a5aca0(_QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN GameData_21fdd90;
extern _UNKNOWN GameData_21fde98;
extern _UNKNOWN* GameData_1f50948;
extern __int64 (*GameData_212e358[2])();
extern __int64 GameData_21fddd0;
__int64 Shape_f64760(_QWORD* a1);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_9baea0(void);
void Shape_f64270(__int64* a1, _QWORD* a2);

void Shape_f64270(__int64* a1, _QWORD* a2)
{
  _QWORD* v2;
  unsigned __int64 v3;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  unsigned __int64 v18;
  _QWORD* v19;
  __int64 v20;

  v2 = (_QWORD*)a1[1];
  v3 = a1[2];
  if ((unsigned __int64)v2 >= v3) {
    v8 = *a1;
    v9 = (__int64)v2 - *a1;
    v10 = v9 >> 4;
    v11 = (v9 >> 4) + 1;
    if (v11 >> 60 != 0) {
      GameRoutine_9baea0();
    }
    v12 = v3 - v8;
    if (v12 >> 3 > v11) {
      v11 = v12 >> 3;
    }
    if ((unsigned __int64)v12 >= 0x7FFFFFFFFFFFFFF0LL) {
      v13 = 0xFFFFFFFFFFFFFFFLL;
    }
    else {
      v13 = v11;
    }
    if (v13 >> 60 != 0) {
      GameRoutine_60a210(a1);
    }
    v14 = fw_memory_g_heap_manager_ptr;
    v15 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         16 * v13, 16, 0);
    v16 = a2[1];
    v17 = (_QWORD*)(v15 + v9);
    v18 = v15 + 16 * v13;
    *v17 = *a2;
    v17[1] = v16;
    if (v16 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 8), 1u,
                                memory_order_relaxed);
      v8 = *a1;
      v9 = a1[1] - *a1;
      v10 = v9 >> 4;
    }
    v19 = &v17[-2 * v10];
    v7 = v17 + 2;
    memcpy(v19, v8, v9);
    *a1 = (__int64)v19;
    a1[1] = (__int64)v7;
    a1[2] = v18;
    if (v8 != 0) {
      v20 = 128;
      if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
        v20 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v14 + v20);
    }
  }
  else {
    *v2 = *a2;
    v6 = a2[1];
    v2[1] = v6;
    if (v6 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                                memory_order_relaxed);
    }
    v7 = v2 + 2;
  }
  a1[1] = (__int64)v7;
}

__int64 Shape_f64760(_QWORD* a1)
{
  __int64 v2;
  __int64* v3;
  __int64* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21fde98,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21fde98) != 0) {
    GameRoutine_a5aca0(&GameData_21fdd90);
    GameRoutine_2b0(GameData_212e358[0], &GameData_21fdd90, &GameData_1f50948);
    __cxa_guard_release(&GameData_21fde98);
  }
  nn_os_LockMutex(&GameData_21fdd90);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21fde98,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21fde98) != 0) {
    GameRoutine_a5aca0(&GameData_21fdd90);
    GameRoutine_2b0(GameData_212e358[0], &GameData_21fdd90, &GameData_1f50948);
    __cxa_guard_release(&GameData_21fde98);
  }
  v2 = GameData_21fddd0;
  v4 = *(__int64**)(GameData_21fddd0 - 24);
  v3 = *(__int64**)(GameData_21fddd0 - 16);
  if (v4 != v3) {
    while (*v4 != *a1) {
      v4 += 2;
      if (v4 == v3) {
        return nn_os_UnlockMutex(&GameData_21fdd90);
      }
    }
  }
  if (v4 != v3) {
    v5 = v4 + 2;
    if (v4 + 2 != v3) {
      do {
        v7 = *v5;
        v6 = v5[1];
        v8 = *(v5 - 1);
        *v5 = 0;
        v5[1] = 0;
        *(v5 - 2) = v7;
        *(v5 - 1) = v6;
        if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
          std___1___shared_weak_count___release_weak(v8);
        }
        v5 += 2;
      } while (v5 != v3);
      v3 = *(__int64**)(v2 - 16);
      v4 = v5 - 2;
    }
    for (; v3 != v4; v3 -= 2) {
      v9 = *(v3 - 1);
      if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
        std___1___shared_weak_count___release_weak(v9);
      }
    }
    *(_QWORD*)(v2 - 16) = v4;
  }
  return nn_os_UnlockMutex(&GameData_21fdd90);
}

#pragma GCC visibility pop
