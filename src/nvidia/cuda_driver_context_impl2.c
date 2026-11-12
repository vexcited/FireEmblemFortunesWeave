#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CudaDriverRoutine_108520(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_1085d0(_QWORD);
__int64 CudaDriverRoutine_10e0d0(_QWORD);
__int64 CudaDriverRoutine_11e860(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_11eb60(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_11ec30(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_121c60(_QWORD);
__int64 CudaDriverRoutine_121e20(_QWORD);
__int64 CudaDriverRoutine_87190(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_87a10(_QWORD);
__int64 CudaDriverRoutine_8a4c0(_QWORD);
__int64 CudaDriverStub_89350(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 cuda_driver_misc_helpers_ded50(_QWORD, _QWORD, _QWORD);
__int64 cuda_driver_context_21920(_QWORD* a1, __int64 a2, unsigned int a3);
__int64 cuda_driver_context_4abc0(__int64 a1, unsigned int* a2, __int64 a3,
                                  unsigned __int64 a4, unsigned int a5, char a6,
                                  char a7, char a8);

__int64 cuda_driver_context_21920(_QWORD* a1, __int64 a2, unsigned int a3)
{
  __int64 result;
  unsigned int v7;
  unsigned int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v11 = 0;
  v9 = 0;
  v10 = 0;
  result = CudaDriverRoutine_121c60(&v11);
  if ((_DWORD)result == 0) {
    result = cuda_driver_misc_helpers_ded50(v11, &v9, a3);
    if ((_DWORD)result == 0) {
      result = CudaDriverRoutine_121e20(v11);
      if ((_DWORD)result == 0) {
        if (a1 != nullptr) {
          result = CudaDriverRoutine_87190(v9, a2, 0, 0, 0);
          if ((_DWORD)result == 0) {
            CudaDriverRoutine_108520(v9 + 24, 0, 0, 0);
            v7 = CudaDriverStub_89350(&v10, v9, a2, 0, 0);
            CudaDriverRoutine_1085d0(v9 + 24);
            if (v7 != 0) {
              return v7;
            }
            else {
              result = CudaDriverRoutine_10e0d0(v10);
              if ((_DWORD)result != 0) {
                v8 = result;
                CudaDriverRoutine_108520(v9 + 24, 0, 0, 0);
                CudaDriverRoutine_8a4c0(v10);
                CudaDriverRoutine_1085d0(v9 + 24);
                return v8;
              }
              else {
                *a1 = v10;
              }
            }
          }
        }
        else {
          return 1;
        }
      }
    }
  }
  return result;
}

__int64 cuda_driver_context_4abc0(__int64 a1, unsigned int* a2, __int64 a3,
                                  unsigned __int64 a4, unsigned int a5, char a6,
                                  char a7, char a8)
{
  __int64 result;
  unsigned __int64 v17;
  __int64 v18;
  _DWORD* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;

  v21 = 0;
  v22 = 0;
  result = CudaDriverRoutine_121c60(&v22);
  if ((_DWORD)result == 0) {
    result = CudaDriverRoutine_11e860(v22, &v21, a1, a5);
    if ((_DWORD)result == 0) {
      if (a2 == nullptr ||
          ((unsigned int)a3 &
           (*(_DWORD*)(*(_QWORD*)(v21 + 64) + 3936LL) - 1)) != 0) {
        return 1;
      }
      v17 = *a2;
      if (a6 != 0) {
        v17 = (unsigned int)v17 *
              (unsigned __int64)(unsigned int)CudaDriverRoutine_87a10(a2[3]);
      }
      if (a4 < v17) {
        return 1;
      }
      if (a7 != 0) {
        v18 = v21;
        if (a2[1] >= 2 &&
            ((unsigned int)a4 &
             (*(_DWORD*)(*(_QWORD*)(v21 + 64) + 3940LL) - 1)) != 0) {
          return 1;
        }
      }
      else {
        v18 = v21;
      }
      if (a8 != 0) {
        v19 = *(_DWORD**)(v18 + 64);
        if (*a2 > v19[989] || a2[1] > v19[990] || a4 > (unsigned int)v19[991]) {
          return 1;
        }
      }
      CudaDriverRoutine_108520(v18 + 24, 0, 0, 0);
      LODWORD(v20) = a2[1];
      if ((unsigned int)v20 <= 1) {
        v20 = 1;
      }
      else {
        v20 = (unsigned int)v20;
      }
      CudaDriverRoutine_11eb60(a1, a3, a4 * v20);
      CudaDriverRoutine_11ec30(a1, a2, (unsigned int)a4);
      CudaDriverRoutine_1085d0(v21 + 24);
      return 0;
    }
  }
  return result;
}

#pragma GCC visibility pop
