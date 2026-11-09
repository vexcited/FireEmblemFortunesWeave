#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_a5cb20(_QWORD* __return_ptr, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2b0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a5aca0(_QWORD);
__int64 GameRoutine_c20ea0(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN GameData_21fdd90;
extern _UNKNOWN GameData_21fde98;
extern _UNKNOWN* GameData_1f50948;
extern __int64 (*GameData_212e358[2])();
extern __int64 (*game_hub_ObjectBuildCreate_vtable[])();
extern __int64 GameData_212c638;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212f910[2];
_QWORD* ObjectBuildCreate_Destructor(__int64 a1);

_QWORD* ObjectBuildCreate_Destructor(__int64 a1)
{
  unsigned __int64 v2;
  bool v3;
  unsigned __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  _QWORD* result;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  char v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;

  *(_QWORD*)a1 = game_hub_ObjectBuildCreate_vtable;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21fde98,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21fde98) != 0) {
    GameRoutine_a5aca0(&GameData_21fdd90);
    GameRoutine_2b0(GameData_212e358[0], &GameData_21fdd90, &GameData_1f50948);
    __cxa_guard_release(&GameData_21fde98);
  }
  v2 = *(unsigned __int8*)(a1 + 72);
  v3 = (v2 & 1) == 0;
  v4 = v2 >> 1;
  if (v3) {
    v5 = a1 + 73;
  }
  else {
    v5 = *(_QWORD*)(a1 + 88);
  }
  if (v3) {
    v6 = v4;
  }
  else {
    v6 = *(_QWORD*)(a1 + 80);
  }
  result = GameRoutine_a5cb20(&v22, &GameData_21fdd90, v5, v6);
  if (v22 != 0) {
    *(_BYTE*)(v22 + 184) = 0;
  }
  v8 = v23;
  if (v23 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    result = (_QWORD*)std___1___shared_weak_count___release_weak(v8);
  }
  v9 = *(_QWORD*)(a1 + 8);
  v10 = *(_QWORD*)(a1 + 16);
  if (v9 != v10) {
    v11 = (__int64*)GameData_212c638;
    v12 = *(_QWORD*)GameData_212c638;
    do {
      v13 = *(_QWORD*)(v12 + 32);
      if ((unsigned int)((unsigned __int64)(v13 - *(_QWORD*)(v12 + 24)) >> 3) -
              1 ==
          *(_DWORD*)v9) {
        v14 = *(_QWORD*)(v9 + 8);
        if (*(_BYTE*)(v14 + 288) != 0) {
          *(_BYTE*)(v14 + 288) = 0;
          v14 = *(_QWORD*)(v9 + 8);
          v13 = *(_QWORD*)(v12 + 32);
        }
        result = *(_QWORD**)(*(_QWORD*)(v13 - 8) + 64LL);
        if (result != nullptr) {
          result = (_QWORD*)GameRoutine_c20ea0(result, v14);
          v12 = *v11;
        }
      }
      v9 += 32;
    } while (v9 != v10);
    v9 = *(_QWORD*)(a1 + 8);
  }
  v15 = *(_BYTE*)(a1 + 72);
  *(_QWORD*)(a1 + 16) = v9;
  if ((v15 & 1) != 0) {
    v16 = *(_QWORD*)(a1 + 88);
    if (v16 != 0) {
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v17 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, v16);
    }
  }
  *(_QWORD*)a1 = GameData_212f910[0] + 2;
  if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
    v18 = *(_QWORD*)(a1 + 48);
    if (v18 != 0) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v19 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v19, v18);
    }
  }
  v20 = *(_QWORD*)(a1 + 8);
  if (v20 != 0) {
    *(_QWORD*)(a1 + 16) = v20;
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v21 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v21, v20);
  }
  return result;
}

#pragma GCC visibility pop
