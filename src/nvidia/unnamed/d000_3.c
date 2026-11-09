#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)

void __attribute__((noreturn)) CudaDriverRoutine_0(void);
__int64 CudaDriverRoutine_102e00(_QWORD);
__int64 CudaDriverRoutine_103e40(__int64, __int64, _QWORD*, __int64, char,
                                 __int64*);
__int64 CudaDriverRoutine_1db9f0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_1dbe40(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_1dbf90(_QWORD);
__int64 CudaDriverRoutine_1dbfd0(_QWORD);
__int64 CudaDriverRoutine_985c0(_QWORD);
__int64 CudaDriverRoutine_d4600(_QWORD);
__int64 CudaDriverRoutine_d4660(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_ed630(__int64, __int64, const char*, ...);
__int64 CudaDriverRoutine_f5c60(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 CudaDriverHr_104fd0(__int64 a1, _QWORD* a2, __int64 a3, __int64* a4,
                            unsigned int a5)
{
  __int64 v8;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v16;
  __int64 v17;
  __int64 v18[28];

  v8 = a3;
  v10 = CudaDriverRoutine_1dbe40(a3, *a2, 0);
  v11 = v10;
  if (v10 != 0) {
    v10 = CudaDriverRoutine_1dbfd0(v10);
  }
  if (v10 != 0) {
    v8 = v10;
  }
  *a4 = v8;
  if (v8 == 0) {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0, "Context resolution failure\n");
    return 1;
  }
  v12 = (a2[4] - 1LL) * a2[3] + a2[2] * *((unsigned int*)a2 + 3);
  if ((v11 != 0 || (unsigned __int8)CudaDriverRoutine_985c0(v8) == 0 &&
                       (v11 = CudaDriverRoutine_1db9f0(*(_QWORD*)(v8 + 80), *a2,
                                                       v12, 0)) != 0) &&
      CudaDriverRoutine_1dbfd0(v11) != 0) {
    v13 = *a2 + v12;
    v14 = CudaDriverRoutine_102e00(v11);
    if (v13 > CudaDriverRoutine_1dbf90(v11) + v14) {
      CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                              "Memset crosses allocation boundaries\n");
      return 1;
    }
    CudaDriverRoutine_1dbfd0(v11);
    return 0;
  }
  else {
    v16 = CudaDriverRoutine_d4600(*a2);
    if (v16 != 0) {
      v17 = v16;
      if ((unsigned __int8)CudaDriverRoutine_d4660(a1, v16, *a2, v12, a5) ==
          0) {
        CudaDriverRoutine_ed630((__int64)"CUDA", 0, "Invalid memset range\n");
        return 1;
      }
      if ((unsigned __int8)CudaDriverRoutine_f5c60(v17, *a2, v12,
                                                   *(_QWORD*)(v8 + 64)) == 0) {
        CudaDriverRoutine_ed630(
            (__int64)"CUDA", 0,
            "Operand not accessibile from specified context\n");
        return 1;
      }
      return 0;
    }
    else {
      return CudaDriverRoutine_103e40(v8, a1, a2, 0, 5, v18);
    }
  }
}

__int64* CudaDriverHr_10bee0(__int64* result, _QWORD* a2, _QWORD* a3,
                             _QWORD* a4, _QWORD* a5)
{
  __int64 v5;
  _QWORD* i;

  *a2 = 0;
  *a3 = 0;
  *a4 = 0;
  *a5 = 0;
  if (result != nullptr) {
    v5 = *result;
    if (*result != 0) {
      for (i = result + 1;; i += 2) {
        while (v5 == 2) {
          *a3 = *(_QWORD*)*i;
          v5 = i[1];
          i += 2;
          if (v5 == 0) {
            return nullptr;
          }
        }
        if (v5 != 1) {
          break;
        }
        *a2 = *i;
        v5 = i[1];
        if (v5 == 0) {
          return nullptr;
        }
      }
      CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                              "Unknown \"extra\" parameter type %lld\n", v5);
      return (_QWORD*)(CudaDriverRoutine_0 + 1);
    }
    else {
      return nullptr;
    }
  }
  return result;
}

#pragma GCC visibility pop
