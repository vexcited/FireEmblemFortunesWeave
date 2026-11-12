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
__int64 GameRoutine_14a0820(_QWORD);
__int64 GameRoutine_80bdc0(_QWORD);
__int64 Registration_a5aca0(_QWORD);
__int64 Shape_f64270_alt1(_QWORD, _QWORD) __asm__("Shape_f64270");
__int64 physx_PxCreateStatic(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN* GameData_212c840;
extern __int64 (*GameData_1ff6730[])();
extern __int64 (*GameData_212c848[2])();
extern __int64 (*collision_Shape_vtable[])();
extern __int64* GameData_212c838;
__int64 Shape_DeletingDestructor(_QWORD* a1);
__attribute__((swiftcall)) void Shape_f63ef0(PSEUDO_X8 x8_, __int128* a1,
                                             __int64 a2, int a3, float a5);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_9baea0_alt1() __asm__("GameRoutine_9baea0");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");

__int64 Shape_DeletingDestructor(_QWORD* a1)
{
  unsigned __int8 explicit;
  __int64* v3;
  _QWORD* v4;
  int v6;

  *a1 = collision_Shape_vtable;
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212c840,
                                  memory_order_acquire);
  v3 = GameData_212c838;
  if ((explicit & 1) == 0) {
    v6 = __cxa_guard_acquire(GameData_212c840);
    v3 = GameData_212c838;
    if (v6 != 0) {
      *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c838) = 0;
      *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v3 + 8) = 0;
      *v3 = 0;
      v3[1] = 0;
      *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v3) = 0;
      *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v3) = 0;
      *((_BYTE*)((char*)0x40LL) + (_QWORD)v3) = 0;
      *((_BYTE*)((_UNKNOWN*)0x44LL) + (_QWORD)v3) = 0;
      *(_UNKNOWN**)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v3) =
          (_UNKNOWN*)1065353216;
      GameRoutine_14a0820(GameData_212c838);
      GameRoutine_2b0(GameData_212c848[0], GameData_212c838, &GameData_1f50948);
      __cxa_guard_release(GameData_212c840);
      v3 = GameData_212c838;
    }
  }
  v4 = *(_QWORD**)(*v3 + 32);
  (*(void (**)(_QWORD, _QWORD, _QWORD))(*(_QWORD*)*v4 + 952LL))(*v4, 0, 0);
  (*(void (**)(_QWORD, _QWORD, __int64))(*(_QWORD*)*v4 + 248LL))(*v4, a1[2], 1);
  (*(void (**)(_QWORD))(*(_QWORD*)*v4 + 960LL))(*v4);
  (**(void (***)(_QWORD))a1[2])(a1[2]);
  return GameRoutine_80bdc0(a1 + 5);
}

__attribute__((swiftcall)) void Shape_f63ef0(PSEUDO_X8 x8_, __int128* a1,
                                             __int64 a2, int a3, float a5)
{
  _QWORD* a4 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  atomic_uchar* v10;
  unsigned __int8 explicit;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int128 v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;
  _QWORD v27[2];
  char v28[4];

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21fde98,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21fde98) != 0) {
    Registration_a5aca0(&GameData_21fdd90);
    GameRoutine_2b0(GameData_212e358[0], &GameData_21fdd90, &GameData_1f50948);
    __cxa_guard_release(&GameData_21fde98);
  }
  nn_os_LockMutex(&GameData_21fdd90);
  v10 = (atomic_uchar*)GameData_212c840;
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212c840,
                                  memory_order_acquire);
  v12 = GameData_212c838;
  if ((explicit & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire(GameData_212c840) != 0) {
    *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v12) = 0;
    *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v12 + 8) = 0;
    *v12 = 0;
    v12[1] = 0;
    *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v12) = 0;
    *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v12) = 0;
    *((_BYTE*)((char*)0x40LL) + (_QWORD)v12) = 0;
    *((_BYTE*)((_UNKNOWN*)0x44LL) + (_QWORD)v12) = 0;
    *(_UNKNOWN**)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v12) =
        (_UNKNOWN*)1065353216;
    GameRoutine_14a0820(v12);
    GameRoutine_2b0(GameData_212c848[0], v12, &GameData_1f50948);
    __cxa_guard_release(GameData_212c840);
  }
  v13 = *v12;
  LODWORD(v23) = 0;
  *(float*)&v24 = a5;
  v14 = *(_QWORD*)(v13 + 24);
  if ((atomic_load_explicit(v10, memory_order_acquire) & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire(GameData_212c840) != 0) {
    *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v12) = 0;
    *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v12 + 8) = 0;
    *v12 = 0;
    v12[1] = 0;
    *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v12) = 0;
    *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v12) = 0;
    *((_BYTE*)((char*)0x40LL) + (_QWORD)v12) = 0;
    *((_BYTE*)((_UNKNOWN*)0x44LL) + (_QWORD)v12) = 0;
    *(_UNKNOWN**)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v12) =
        (_UNKNOWN*)1065353216;
    GameRoutine_14a0820(v12);
    GameRoutine_2b0(GameData_212c848[0], v12, &GameData_1f50948);
    __cxa_guard_release(GameData_212c840);
  }
  v27[0] = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v12);
  v28[0] = 11;
  v15 = (*(__int64 (**)(__int64, __int64*, _QWORD*, __int64, _QWORD, char*))(
      *(_QWORD*)v14 + 248LL))(v14, &v23, v27, 1, 0, v28);
  v27[1] = 0;
  v16 = (_QWORD*)v15;
  v27[0] = a2;
  (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v15 + 112LL))(v15, v27);
  (*(void (**)(_QWORD*, _QWORD*))(*v16 + 128LL))(v16, v27);
  v17 = *a1;
  v23 = 0;
  v24 = 0x3F80000000000000LL;
  v25 = v17;
  v26 = DWORD2(v17);
  v18 = physx_PxCreateStatic(v14, &v23, v16);
  v19 = *(_QWORD**)(v13 + 32);
  v20 = v18;
  (*(void (**)(_QWORD, _QWORD, _QWORD))(*(_QWORD*)*v19 + 952LL))(*v19, 0, 0);
  (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*v19 + 224LL))(*v19, v20, 0);
  v21 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       112, 16, 0);
  *(_QWORD*)(v21 + 8) = 0;
  *(_QWORD*)(v21 + 16) = 0;
  *(_BYTE*)(v21 + 32) = 1;
  *(_QWORD*)(v21 + 40) = v20;
  *(_QWORD*)(v21 + 48) = a2;
  *(_DWORD*)(v21 + 56) = a3;
  *(_QWORD*)(v21 + 64) = 0;
  *(_QWORD*)(v21 + 72) = 0;
  *(_QWORD*)(v21 + 80) = 0;
  *(_QWORD*)(v21 + 88) = 0;
  *(_QWORD*)(v21 + 96) = 0;
  *(_QWORD*)(v21 + 104) = 0;
  a4[1] = v21;
  *(_QWORD*)v21 = GameData_1ff6730;
  *(_QWORD*)(v21 + 24) = collision_Shape_vtable;
  *a4 = v21 + 24;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21fde98,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21fde98) != 0) {
    Registration_a5aca0(&GameData_21fdd90);
    GameRoutine_2b0(GameData_212e358[0], &GameData_21fdd90, &GameData_1f50948);
    __cxa_guard_release(&GameData_21fde98);
  }
  Shape_f64270_alt1(GameData_21fddd0 - 24, a4);
  v16[2] = *a4;
  (*(void (**)(_QWORD*))*v16)(v16);
  (*(void (**)(_QWORD))(*(_QWORD*)*v19 + 960LL))(*v19);
  {
    nn_os_UnlockMutex(&GameData_21fdd90);
    return;
  }
}

void Shape_f64270(__int64* a1, _QWORD* a2)
{
  _QWORD* v2;
  unsigned __int64 v3;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  signed __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;

  v2 = (_QWORD*)a1[1];
  v3 = a1[2];
  if ((unsigned __int64)v2 >= v3) {
    v8 = *a1;
    v9 = (signed __int64)v2 - *a1;
    v10 = v9 >> 4;
    v11 = (v9 >> 4) + 1;
    if (v11 >> 60 != 0) {
      GameRoutine_9baea0_alt1();
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
      GameRoutine_60a210_alt1();
    }
    v14 = fw_memory_g_heap_manager_ptr;
    v15 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v13, 16, 0);
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
    v19 = (__int64)&v17[-2 * v10];
    v7 = v17 + 2;
    memcpy_alt1(v19, v8, v9);
    *a1 = v19;
    a1[1] = (__int64)v7;
    a1[2] = v18;
    if (v8 != 0) {
      v20 = 128;
      if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
        v20 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v14 + v20, v8);
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
