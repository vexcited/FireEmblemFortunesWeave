#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
__int64 ActionTick_Unknown6(__int64 a1);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_combat_ActionTick_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* ActionTick_DeletingDestructor(_QWORD* a1);
__int64 ActionTick_Unknown2(_QWORD* a1);

__int64 ActionTick_Unknown6(__int64 a1)
{
  __int64 v2;
  __int64 result;
  int v4;
  int v6;

  v2 = *(_QWORD*)(a1 + 112);
  if (v2 == 0) {
    GameRoutine_60a310(0);
  }
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 48LL))(v2);
  if ((result & 1) == 0) {
    v4 = *(_DWORD*)(a1 + 16);
    if (v4 != 1 && v4 != 3) {
      if (v4 == 2) {
        v6 = 3;
      }
      else {
        v6 = 1;
      }
      *(_DWORD*)(a1 + 16) = v6;
    }
  }
  return result;
}

_QWORD* ActionTick_DeletingDestructor(_QWORD* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  _QWORD* result;
  __int64 v8;

  *a1 = game_combat_ActionTick_vtable;
  v2 = a1 + 16;
  v3 = (_QWORD*)a1[20];
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
  v5 = (_QWORD*)a1[14];
  if (v5 == a1 + 10) {
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
  result = (_QWORD*)a1[8];
  if (result == a1 + 4) {
    v8 = 32;
  }
  else {
    if (result == nullptr) {
      return result;
    }
    v8 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(__int64))(*result + v8))((__int64)result);
}

__int64 ActionTick_Unknown2(_QWORD* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;

  *a1 = game_combat_ActionTick_vtable;
  v2 = a1 + 16;
  v3 = (_QWORD*)a1[20];
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
  v5 = (_QWORD*)a1[14];
  if (v5 == a1 + 10) {
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
  v7 = (_QWORD*)a1[8];
  if (v7 == a1 + 4) {
    v8 = 32;
  }
  else {
    if (v7 == nullptr) {
      goto LABEL_16;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v7 + v8))((__int64)v7);
LABEL_16:
  v9 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v9 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v9);
}

#pragma GCC visibility pop
