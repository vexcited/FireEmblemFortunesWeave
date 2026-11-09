#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_c43b70(_QWORD);
__int64 GameRoutine_dfa7a0(_QWORD, float);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_hub_ObjectBuildMapObj_vtable[])();
extern __int64 GameData_21c6978;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212f910[2];
_QWORD* ObjectBuildMapObj_Destructor(_QWORD* result);
bool ObjectBuildMapObj_Unknown2();

_QWORD* ObjectBuildMapObj_Destructor(_QWORD* result)
{
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  char v4;
  __int64 v5;
  int v6;
  int v7;
  char v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v1 = result;
  *result = game_hub_ObjectBuildMapObj_vtable;
  v2 = result[1];
  v3 = result[2];
  if (v2 != v3) {
    v4 = 0;
    do {
      v5 = *(_QWORD*)(v2 + 8);
      v6 = *(unsigned __int8*)(v2 + 25);
      v7 = *(unsigned __int8*)(v2 + 24);
      if (v6 == *(unsigned __int8*)(v5 + 288)) {
        v8 = 0;
      }
      else {
        *(_BYTE*)(v5 + 288) = v6;
        v8 = v6;
      }
      if (v7 != *(unsigned __int8*)(v5 + 289)) {
        *(_BYTE*)(v5 + 289) = v7;
        v8 |= v7;
      }
      v2 += 32;
      v4 |= v7 & v6 & v8;
    } while (v2 != v3);
    if ((v4 & 1) != 0) {
      result = (_QWORD*)GameRoutine_dfa7a0(result[7], 0.3);
    }
  }
  v9 = v1[1];
  v1[2] = v9;
  *v1 = GameData_212f910[0] + 2;
  if ((v1[4] & 1) != 0 && v1[6] != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v10 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v10, v1[6]);
    v9 = v1[1];
  }
  if (v9 != 0) {
    v1[2] = v9;
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, v9);
  }
  return result;
}

bool ObjectBuildMapObj_Unknown2()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  _BOOL8 result;

  v0 = *(_QWORD*)(*(_QWORD*)(GameData_21c6978 + 32) - 8LL);
  if ((GameRoutine_c43b70(*(_QWORD*)(v0 + 56)) & 1) == 0) {
    return false;
  }
  v1 = *(_QWORD*)(v0 + 64);
  if (v1 == 0) {
    return false;
  }
  v2 = *(_QWORD*)(v1 + 96);
  if (v2 == 0 || *(_DWORD*)(v2 + 240) != 5) {
    return false;
  }
  v3 = (_QWORD*)(v1 + 120);
  do {
    v3 = (_QWORD*)*v3;
    result = v3 == nullptr;
  } while (v3 != nullptr && *(_DWORD*)(v3[5] + 240LL) == 5);
  return result;
}

#pragma GCC visibility pop
