#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_14a1390(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN GameData_21a6130;
extern _UNKNOWN* GameData_212c540;
extern __int128 GameData_21a6120;
extern __int64 (*GameData_1ffc7f8[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__n128 EffectLine_Destructor(_QWORD* a1);
long double EffectLine_fb6440(_QWORD* a1);

__n128 EffectLine_Destructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  unsigned int v5;
  __int128 v6;
  __n128 result;
  __int64 v8;
  __int128 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;

  v1 = a1[1];
  v2 = a1[2];
  *a1 = GameData_1ffc7f8;
  if (v1 != v2) {
    do {
      GameRoutine_14a1390(v1, 1);
      v1 += 16;
    } while (v1 != v2);
    v1 = a1[1];
    v2 = a1[2];
  }
  for (; v2 != v1; v2 -= 16) {
    v4 = *(_QWORD*)(v2 - 8);
    if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak(v4);
    }
  }
  a1[2] = v1;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
    v14 = *((_QWORD*)GameData_212c540 + 1);
    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
    *((_QWORD*)&GameData_21a6120 + 1) = v14;
    __cxa_guard_release(&GameData_21a6130);
  }
  v5 = DWORD2(GameData_21a6120);
  a1[4] = GameData_21a6120;
  v6 = *((_OWORD*)a1 + 2);
  *((_QWORD*)&v6 + 1) = v5;
  *((_OWORD*)a1 + 2) = v6;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
    v15 = *((_QWORD*)GameData_212c540 + 1);
    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
    *((_QWORD*)&GameData_21a6120 + 1) = v15;
    __cxa_guard_release(&GameData_21a6130);
  }
  result = (__n128)GameData_21a6120;
  v8 = a1[1];
  a1[6] = GameData_21a6120;
  v9 = *((_OWORD*)a1 + 3);
  *((_QWORD*)&v9 + 1) = ((uint32_t*)&result)[2];
  *((_OWORD*)a1 + 3) = v9;
  if (v8 != 0) {
    v10 = a1[2];
    if (v8 == v10) {
      goto LABEL_20;
    }
    do {
      v11 = *(_QWORD*)(v10 - 8);
      if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
        result = std___1___shared_weak_count___release_weak(v11);
      }
      v10 -= 16;
    } while (v10 != v8);
    v12 = a1[1];
    a1[2] = v8;
    if (v12 != 0) {
    LABEL_20:
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v13 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v13);
    }
  }
  return result;
}

long double EffectLine_fb6440(_QWORD* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  unsigned int v5;
  __int128 v6;
  long double result;
  __int128 v8;
  __int64 v9;
  __int64 v10;

  v1 = a1[1];
  v2 = a1[2];
  if (v1 != v2) {
    do {
      GameRoutine_14a1390(v1, 1);
      v1 += 16;
    } while (v1 != v2);
    v1 = a1[1];
    v2 = a1[2];
  }
  for (; v2 != v1; v2 -= 16) {
    v4 = *(_QWORD*)(v2 - 8);
    if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak(v4);
    }
  }
  a1[2] = v1;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
    v9 = *((_QWORD*)GameData_212c540 + 1);
    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
    *((_QWORD*)&GameData_21a6120 + 1) = v9;
    __cxa_guard_release(&GameData_21a6130);
  }
  v5 = DWORD2(GameData_21a6120);
  a1[4] = GameData_21a6120;
  v6 = *((_OWORD*)a1 + 2);
  *((_QWORD*)&v6 + 1) = v5;
  *((_OWORD*)a1 + 2) = v6;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
    v10 = *((_QWORD*)GameData_212c540 + 1);
    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
    *((_QWORD*)&GameData_21a6120 + 1) = v10;
    __cxa_guard_release(&GameData_21a6130);
  }
  result = *(long double*)&GameData_21a6120;
  a1[6] = GameData_21a6120;
  v8 = *((_OWORD*)a1 + 3);
  *((_QWORD*)&v8 + 1) = DWORD2(result);
  *((_OWORD*)a1 + 3) = v8;
  return result;
}

#pragma GCC visibility pop
