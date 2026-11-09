#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 (*nn_atk_detail_fnd_UnitHeap_vtable[])();
int* UnitHeap_Unknown2(__int64 a1, unsigned __int64 a2);
__int64 UnitHeap_Unknown3(__int64 result, _DWORD* a2);
_QWORD* UnitHeap_Destructor(_QWORD* result);

int* UnitHeap_Unknown2(__int64 a1, unsigned __int64 a2)
{
  int* result;
  __int64 v5;
  char* v6;

  if (*(_QWORD*)(a1 + 8) == 0) {
    return nullptr;
  }
  result = *(int**)(a1 + 40);
  if (result == nullptr || *(_QWORD*)(a1 + 24) < a2) {
    return nullptr;
  }
  v5 = *result;
  if ((_DWORD)v5 != 0) {
    v6 = (char*)result + v5;
  }
  else {
    v6 = nullptr;
  }
  *(_QWORD*)(a1 + 40) = v6;
  ++*(_DWORD*)(a1 + 32);
  return result;
}

__int64 UnitHeap_Unknown3(__int64 result, _DWORD* a2)
{
  __int64 v2;
  int v3;

  if (*(_QWORD*)(result + 8) != 0) {
    v2 = *(_QWORD*)(result + 40);
    if (v2 != 0) {
      v3 = v2 - (_DWORD)a2;
    }
    else {
      v3 = 0;
    }
    *a2 = v3;
    *(_QWORD*)(result + 40) = a2;
    --*(_DWORD*)(result + 32);
  }
  return result;
}

_QWORD* UnitHeap_Destructor(_QWORD* result)
{
  result[5] = 0;
  result[2] = 0;
  result[3] = 0;
  *result = nn_atk_detail_fnd_UnitHeap_vtable;
  result[1] = 0;
  return result;
}

#pragma GCC visibility pop
