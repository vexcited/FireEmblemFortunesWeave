#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_ca7f00(_QWORD);
__int64 hub_ResetDisposition(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_1fd3ca8[])();
extern __int64 (*game_HubDisposFileLoader_vtable[])();
extern __int64 GameData_21c9720;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_220b6b0;
__int64 HubDisposFileLoader_Destructor(_QWORD* a1);
__int64 HubDisposFileLoader_DeletingDestructor_alt1(_QWORD* a1) __asm__(
    "HubDisposFileLoader_DeletingDestructor");
__int64 std___1___shared_weak_count___release_weak(_QWORD);
_QWORD* HubDisposFileLoader_ca7f00_alt1(_QWORD* result) __asm__(
    "HubDisposFileLoader_ca7f00");
__int64 hub_ResetDisposition_alt1(_QWORD*) __asm__("hub_ResetDisposition");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void HubDisposFileLoader_DeletingDestructor(_QWORD* a1);
void HubDisposFileLoader_ca7f00(__int64 a1);

__int64 HubDisposFileLoader_Destructor(_QWORD* a1)
{
  _QWORD* v1;
  _QWORD* v2;
  __int64 result;
  _QWORD* v5;
  _QWORD* v6;
  bool v7;

  v1 = (_QWORD*)a1[1];
  v2 = a1 + 2;
  *a1 = game_HubDisposFileLoader_vtable;
  if (v1 != a1 + 2) {
    do {
      hub_ResetDisposition(v1[7]);
      v5 = (_QWORD*)v1[1];
      if (v5 != nullptr) {
        do {
          v6 = v5;
          v5 = (_QWORD*)*v5;
        } while (v5 != nullptr);
      }
      else {
        do {
          v6 = (_QWORD*)v1[2];
          v7 = v1 == (_QWORD*)*v6;
          v1 = v6;
        } while (!v7);
      }
      v1 = v6;
    } while (v6 != v2);
  }
  result = GameRoutine_ca7f00(a1[2]);
  a1[2] = 0;
  a1[3] = 0;
  *a1 = GameData_1fd3ca8;
  a1[1] = v2;
  if ((_QWORD*)GameData_21c9720 == a1) {
    GameData_21c9720 = 0;
    GameData_220b6b0 = 0;
  }
  return result;
}

void HubDisposFileLoader_DeletingDestructor(_QWORD* a1)
{
  _QWORD* v1;
  _QWORD* v2;
  __int64 v4;
  _QWORD* v5;
  _QWORD* v6;
  bool v7;

  v1 = (_QWORD*)a1[1];
  v2 = a1 + 2;
  *a1 = game_HubDisposFileLoader_vtable;
  if (v1 != a1 + 2) {
    do {
      hub_ResetDisposition_alt1((_QWORD*)v1[7]);
      v5 = (_QWORD*)v1[1];
      if (v5 != nullptr) {
        do {
          v6 = v5;
          v5 = (_QWORD*)*v5;
        } while (v5 != nullptr);
      }
      else {
        do {
          v6 = (_QWORD*)v1[2];
          v7 = v1 == (_QWORD*)*v6;
          v1 = v6;
        } while (!v7);
      }
      v1 = v6;
    } while (v6 != v2);
  }
  HubDisposFileLoader_ca7f00(a1[2]);
  a1[2] = 0;
  a1[3] = 0;
  *a1 = GameData_1fd3ca8;
  a1[1] = v2;
  if ((_QWORD*)GameData_21c9720 == a1) {
    GameData_21c9720 = 0;
    GameData_220b6b0 = 0;
  }
  v4 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v4 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, (__int64)a1);
}

void HubDisposFileLoader_ca7f00(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  if (a1 != 0) {
    HubDisposFileLoader_ca7f00(*(_QWORD*)a1);
    HubDisposFileLoader_ca7f00(*(_QWORD*)(a1 + 8));
    v2 = *(_QWORD*)(a1 + 64);
    if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
      std___1___shared_weak_count___release_weak_alt1(v2);
    }
    v3 = fw_memory_g_heap_manager_ptr;
    if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
      v4 = *(_QWORD*)(a1 + 48);
      if (v4 != 0) {
        v5 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v5 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v4);
      }
    }
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v6, a1);
  }
}

#pragma GCC visibility pop
