#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 game_Unit_GetParam(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_UnitHPScope_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 UnitHPScope_Destructor(__int64 result);
__int64 UnitHPScope_DeletingDestructor(__int64 a1);

__int64 UnitHPScope_Destructor(__int64 result)
{
  __int64 v1;
  int v2;
  int v4;
  _BYTE v5[4];

  v1 = *(_QWORD*)(result + 8);
  *(_QWORD*)result = game_UnitHPScope_vtable;
  if (v1 != 0) {
    v2 = *(_DWORD*)(result + 16);
    if (v2 != *(__int16*)(v1 + 492)) {
      v5[0] = 0;
      result = game_Unit_GetParam(v1, v5, 1);
      if (*(_WORD*)(v1 + 494) != 0 && v2 != *(__int16*)(v1 + 494)) {
        *(_WORD*)(v1 + 494) = 0;
      }
      if ((int)result >= v2) {
        v4 = v2;
      }
      else {
        v4 = result;
      }
      if (v2 < 0) {
        v4 = 0;
      }
      if (v4 != *(__int16*)(v1 + 492)) {
        *(_WORD*)(v1 + 492) = v4;
      }
    }
  }
  return result;
}

__int64 UnitHPScope_DeletingDestructor(__int64 a1)
{
  __int64 v1;
  int v2;
  int v3;
  int v5;
  __int64 v6;
  _BYTE v8[4];

  v1 = *(_QWORD*)(a1 + 8);
  *(_QWORD*)a1 = game_UnitHPScope_vtable;
  if (v1 != 0) {
    v2 = *(_DWORD*)(a1 + 16);
    if (v2 != *(__int16*)(v1 + 492)) {
      v8[0] = 0;
      v3 = game_Unit_GetParam(v1, v8, 1);
      if (*(_WORD*)(v1 + 494) != 0 && v2 != *(__int16*)(v1 + 494)) {
        *(_WORD*)(v1 + 494) = 0;
      }
      if (v3 >= v2) {
        v5 = v2;
      }
      else {
        v5 = v3;
      }
      if (v2 < 0) {
        v5 = 0;
      }
      if (v5 != *(__int16*)(v1 + 492)) {
        *(_WORD*)(v1 + 492) = v5;
      }
    }
  }
  v6 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v6 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v6, (_QWORD)(a1));
}

#pragma GCC visibility pop
