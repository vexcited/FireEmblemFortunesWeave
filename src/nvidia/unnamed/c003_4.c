#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)

extern __int64 (*CudaDriverData_1440848)(int*);
__int64 CudaDriverRoutine_1e0b00(_QWORD*, char);
__int64 CudaDriverRoutine_1e9390(_QWORD);

__int64 CudaDriverHr_1e1920(_QWORD* a1, int a2)
{
  __int64* v2;
  __int64 v3;
  __int64 result;
  int v5;
  __int64 v6;
  int v7;

  v2 = *(__int64**)(a1[25] + 88LL);
  if (*((_BYTE*)v2 + 16) == 0) {
    return 800;
  }
  if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*a1 + 8LL) + 64LL) +
                                      19824LL) +
                           96LL) +
                265LL) == 0) {
    return 0;
  }
  v5 = 16;
  v3 = *v2;
  v7 = a2;
  v6 = v3;
  result = CudaDriverData_1440848(&v5);
  if ((_DWORD)result != 0) {
    return CudaDriverRoutine_1e9390(result);
  }
  return result;
}

__int64 CudaDriverHr_1e2660(_QWORD** a1, char a2)
{
  _QWORD* v2;
  __int64 result;

  v2 = *a1;
  if (*a1 == nullptr) {
    return 0;
  }
  while (1) {
    result = CudaDriverRoutine_1e0b00(v2, a2);
    if ((_DWORD)result != 0) {
      break;
    }
    v2 = (_QWORD*)v2[4229];
    if (v2 == nullptr) {
      return 0;
    }
  }
  return result;
}

#pragma GCC visibility pop
