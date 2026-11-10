#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
extern _UNKNOWN GameData_1fc4de0;
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* RoundedNonuniformSpline_Construct(__int64 a1);

_QWORD* RoundedNonuniformSpline_Construct(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;
  _QWORD* result;

  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 24, 16, 0);
  *(_QWORD*)a1 = v3;
  v4 = v3;
  *v3 = 0;
  v3[1] = 0;
  v3[2] = 0;
  result = (_QWORD*)fw_memory_HeapManager_Allocate(*v2, 32, 16, 0);
  result[2] = 0;
  result[3] = v4;
  *(_QWORD*)(a1 + 8) = result;
  *(_DWORD*)(a1 + 16) = 0;
  *result = &GameData_1fc4de0;
  result[1] = 0;
  return result;
}

#pragma GCC visibility pop
