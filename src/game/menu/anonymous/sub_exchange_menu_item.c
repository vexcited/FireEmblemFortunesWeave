#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SubExchangeMenuItem_ACall(_QWORD* a1);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak();
extern __int64 (*game_menu_BasicMenuItem_vtable[])();
extern __int64* GameData_212d640[9];
extern __int64 fw_memory_g_heap_manager_ptr;
__n128 SubExchangeMenuItem_DeletingDestructor_alt1(__int64 a1) __asm__(
    "SubExchangeMenuItem_DeletingDestructor");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
extern __int64 (*game_menu_SubMenuItem_vtable[])();
extern __int64 (*game_menu_anonymous_SubExchangeMenuItem_vtable[])();
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void SubExchangeMenuItem_Destructor(__int64 a1);
void SubExchangeMenuItem_DeletingDestructor_17b2fc0(__int64 a1);
void SubExchangeMenuItem_DeletingDestructor(__int64 a1);

void SubExchangeMenuItem_DeletingDestructor(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

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
    std___1___shared_weak_count___release_weak_alt1(v5);
  }
  v6 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
    v7 = *(_QWORD*)(a1 + 32);
    if (v7 != 0) {
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v8, v7);
    }
  }
  v9 = 128;
  if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
    v9 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v6 + v9, a1);
}

void SubExchangeMenuItem_Destructor(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  *(_QWORD*)a1 = game_menu_anonymous_SubExchangeMenuItem_vtable;
  v2 = (_QWORD*)(a1 + 160);
  v3 = *(_QWORD**)(a1 + 192);
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
  v5 = *(_QWORD**)(a1 + 128);
  *(_QWORD*)a1 = game_menu_SubMenuItem_vtable;
  if (v5 == (_QWORD*)(a1 + 96)) {
    v6 = 32;
  }
  else {
    if (v5 == nullptr) {
      goto LABEL_11;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v5 + v6))((__int64)v5);
LABEL_11:
  v7 = *(_QWORD*)(a1 + 56);
  *(_QWORD*)a1 = game_menu_BasicMenuItem_vtable;
  if (v7 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v7);
  }
  if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
    v8 = *(_QWORD*)(a1 + 32);
    if (v8 != 0) {
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v9 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v9, v8);
    }
  }
}

void SubExchangeMenuItem_DeletingDestructor_17b2fc0(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  *(_QWORD*)a1 = game_menu_anonymous_SubExchangeMenuItem_vtable;
  v2 = (_QWORD*)(a1 + 160);
  v3 = *(_QWORD**)(a1 + 192);
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
  v5 = *(_QWORD**)(a1 + 128);
  *(_QWORD*)a1 = game_menu_SubMenuItem_vtable;
  if (v5 == (_QWORD*)(a1 + 96)) {
    v6 = 32;
  }
  else {
    if (v5 == nullptr) {
      goto LABEL_11;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v5 + v6))((__int64)v5);
LABEL_11:
  v7 = *(_QWORD*)(a1 + 56);
  *(_QWORD*)a1 = game_menu_BasicMenuItem_vtable;
  if (v7 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v7);
  }
  v8 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
    v9 = *(_QWORD*)(a1 + 32);
    if (v9 != 0) {
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v10 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v10, v9);
    }
  }
  v11 = 128;
  if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
    v11 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v8 + v11, a1);
}

__int64 SubExchangeMenuItem_ACall(_QWORD* a1)
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
