#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SubExchangeMenuItem_Unknown25_17b30e0(_QWORD* a1);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak();
extern __int64 (*game_menu_BasicMenuItem_vtable[])();
extern __int64* GameData_212d640[9];
extern __int64 fw_memory_g_heap_manager_ptr;
__n128 SubExchangeMenuItem_DeletingDestructor(__int64 a1);

__n128 SubExchangeMenuItem_DeletingDestructor(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  *(_QWORD*)a1 = GameData_212d640[0] + 2;
  v2 = (_QWORD*)(a1 + 96);
  v3 = *(_QWORD**)(a1 + 128);
  if (v3 == v2) {
    v4 = 32;
  }
  else {
    if (v3 == nullptr) {
      goto LABEL_6;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
LABEL_6:
  v5 = *(_QWORD*)(a1 + 56);
  *(_QWORD*)a1 = game_menu_BasicMenuItem_vtable;
  if (v5 != 0) {
    std___1___shared_weak_count___release_weak();
  }
  v6 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 16) & 1) != 0 && *(_QWORD*)(a1 + 32) != 0) {
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v7);
  }
  v8 = 128;
  if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
    v8 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v8);
}

__int64 SubExchangeMenuItem_Unknown25_17b30e0(_QWORD* a1)
{
  __int64 v2;
  __int64 v4;

  if (((*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1) & 1) == 0) {
    return 1;
  }
  v2 = a1[24];
  if (v2 == 0 || a1[18] == 0) {
    return 1;
  }
  v4 = a1[18];
  (*(void (**)(__int64, __int64*))(*(_QWORD*)v2 + 48LL))(v2, &v4);
  return 2;
}

#pragma GCC visibility pop
