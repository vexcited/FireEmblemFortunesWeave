#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void Element_1885a60(PSEUDO_X8, _QWORD* result);
__attribute__((swiftcall)) void Element_1886020(PSEUDO_X8, _QWORD* result,
                                                __int64);
__int64 game_c8b000(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 GameData_220b680;
extern __int64 fw_memory_g_heap_manager_ptr;
__attribute__((swiftcall)) void MenuItem_188b680(PSEUDO_X8 x8_, _QWORD* a1,
                                                 __int64 a2);
__int64 game_c8b000_alt1(__int64, __int64*, char) __asm__("game_c8b000");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");

__attribute__((swiftcall)) void MenuItem_188b680(PSEUDO_X8 x8_, _QWORD* a1,
                                                 __int64 a2)
{
  _DWORD* a3 = (_DWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD* result;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  _QWORD* v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  struct {
    __int64 v15;
    __int64 v16;
  } v15_;

  result = X8CALL_X0(_QWORD*, Element_1886020((void*)(a3), a1, a2));
  v6 = *(_DWORD*)(a2 + 8);
  if (v6 <= 36) {
    if (v6 != 0) {
      if (v6 == 20) {
        (_QWORD*)(*(__int64 (**)(_QWORD*))(*a1 + 392LL))(a1);
        return;
      }
    }
    else {
      if (a1[132] != 0) {
        v10 = (_QWORD*)a1[131];
        v11 = *(_QWORD**)(a1[130] + 8LL);
        *(_QWORD*)(*v10 + 8LL) = v11;
        *v11 = *v10;
        a1[132] = 0;
        if (v10 != a1 + 130) {
          v12 = fw_memory_g_heap_manager_ptr;
          do {
            v13 = (_QWORD*)v10[1];
            if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) != 0) {
              v14 = 128;
            }
            else {
              v14 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v12 + v14,
                                               (__int64)v10);
            v10 = v13;
          } while (v13 != a1 + 130);
        }
      }
      {
        (_QWORD*)(*(__int64 (**)(_QWORD*))(*a1 + 400LL))(a1);
        return;
      }
    }
  }
  else {
    switch (v6) {
    case '%':
      Element_1885a60((void*)(&v15_.v15), a1);
      if (v15_.v16 != 0) {
        v7 = std___1___shared_weak_count_lock_alt1(v15_.v16);
        if (v7 != 0) {
          v8 = v15_.v15;
        }
        else {
          v8 = 0;
        }
        if (v15_.v16 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v15_.v16);
        }
        if (v8 != 0) {
          v15_.v15 = v8;
          v15_.v16 = v7;
          v9 = GameData_220b680;
          if (v7 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                                      memory_order_relaxed);
          }
          game_c8b000_alt1(v9, &v15_.v15, 0);
          if (v15_.v16 != 0) {
            std___1___shared_weak_count___release_weak_alt1(v15_.v16);
          }
        }
        if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
          std___1___shared_weak_count___release_weak_alt1(v7);
        }
      }
      {
        (_QWORD*)(*(__int64 (**)(_QWORD*, _QWORD))(*a1 + 360LL))(
            a1, **(unsigned __int8**)(a2 + 16));
        return;
      }
    case '&': {
      (_QWORD*)(*(__int64 (**)(_QWORD*))(*a1 + 368LL))(a1);
      return;
    }
    case '\'': {
      (_QWORD*)(*(__int64 (**)(_QWORD*))(*a1 + 376LL))(a1);
      return;
    }
    default:
      break;
    }
  }
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
