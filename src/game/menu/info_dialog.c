#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 InfoDialog_Unknown84(__int64 result);

__int64 InfoDialog_Unknown84(__int64 result)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  int v6;
  unsigned __int64 v7;
  char* v8;
  __int64 v9;
  __int16 v10;
  unsigned __int64 v11;
  char* v12;

  v1 = *(unsigned __int8*)(result + 1496);
  v2 = *(_QWORD*)(result + 1504);
  v3 = result;
  v10 = 0;
  if ((v1 & 1) != 0) {
    v4 = v2;
  }
  else {
    v4 = v1 >> 1;
  }
  if (v4 != 0 || *(_QWORD*)(result + 1552) != 0) {
    result = GameRoutine_1a09ce0(&v10, "Target", 6);
  }
  if (*(_QWORD*)(v3 + 1624) != *(_QWORD*)(v3 + 1616)) {
    result = GameRoutine_1a09ce0(&v10, "Unit", 4);
  }
  if ((*(_DWORD*)(v3 + 1568) & 0x80000000) == 0 ||
      (*(_DWORD*)(v3 + 1572) & 0x80000000) == 0 ||
      (*(_DWORD*)(v3 + 1576) & 0x80000000) == 0 || *(_WORD*)(v3 + 1580) != 0) {
    result = GameRoutine_1a09ce0(&v10, "Resource", 8);
  }
  v6 = v10 & 1;
  v7 = (unsigned __int64)(unsigned __int8)v10 >> 1;
  if (v6 != 0) {
    v7 = v11;
  }
  if (v7 != 0) {
    if (v6 != 0) {
      v8 = v12;
    }
    else {
      v8 = (char*)&v10 + 1;
    }
    result = GameRoutine_1562cf0(v3 + 848, v8);
    v6 = v10 & 1;
  }
  if (v6 != 0 && v12 != nullptr) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v9, v12);
  }
  return result;
}

#pragma GCC visibility pop
