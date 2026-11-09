#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_cfa2a0(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_hub_CharacterBehaviorStack_StackMoveLoop_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 StackMoveLoop_Unknown2(__int64 result);
__int64 StackMoveLoop_Unknown5(__int64 a1);
_QWORD* StackMoveLoop_Unknown8(_QWORD* result);
__int64 StackMoveLoop_Unknown9(_QWORD* a1);

__int64 StackMoveLoop_Unknown2(__int64 result)
{
  __int64 v1;
  int v2;

  v1 =
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(result + 16) + 16LL) + 24LL) +
                 16LL);
  if ((*(_QWORD*)(v1 + 24) & 0x1FFFFFFFFLL) == 0x100000001LL &&
      (*(_BYTE*)(v1 + 848) & 1) == 0) {
    if (*(_QWORD*)(*(_QWORD*)(v1 + 8) + 32LL) != 0) {
      v2 = 5;
    }
    else {
      v2 = 0;
    }
    *(_DWORD*)(v1 + 32) = v2;
    *(_BYTE*)(v1 + 36) = 1;
    if ((*(_BYTE*)(v1 + 112) & 1) == 0 && (*(_BYTE*)(v1 + 113) & 1) != 0) {
      return GameRoutine_cfa2a0(v1 + 16);
    }
  }
  return result;
}

__int64 StackMoveLoop_Unknown5(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16LL) +
                                        24LL) +
                             16LL) +
                  24LL);
  return BYTE4(v1) & ((v1 & 0x1FFFFFFFFLL) != 0x100000001LL);
}

_QWORD* StackMoveLoop_Unknown8(_QWORD* result)
{
  __int64 v1;
  _QWORD* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v1 = result[9];
  v2 = result;
  *result = game_hub_CharacterBehaviorStack_StackMoveLoop_vtable;
  v3 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    result[10] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v4 + v5);
  }
  v6 = v2[6];
  if (v6 != 0) {
    v7 = *v3;
    v2[7] = v6;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(v7 + v8);
  }
  return result;
}

__int64 StackMoveLoop_Unknown9(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v1 = a1[9];
  *a1 = game_hub_CharacterBehaviorStack_StackMoveLoop_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[10] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5);
  }
  v6 = a1[6];
  if (v6 != 0) {
    v7 = *(_QWORD*)v3;
    a1[7] = v6;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(v7 + v8);
  }
  v9 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v9 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v9);
}

#pragma GCC visibility pop
