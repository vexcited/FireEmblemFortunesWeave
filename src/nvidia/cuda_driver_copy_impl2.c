#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CudaDriverRoutine_112680(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                 _QWORD);
__int64 CudaDriverRoutine_1216a0(_QWORD);
__int64 CudaDriverRoutine_121c60(_QWORD);
__int64 CudaDriverRoutine_98340(_QWORD);
__int64 cuda_driver_misc_helpers_ded50(_QWORD, _QWORD, _QWORD);
__int64 cuda_driver_misc_helpers_deeb0(_QWORD, _QWORD);
__int64 cuda_driver_copy_3adc0(__int64 a1, __int64 a2, unsigned int a3,
                               unsigned int a4, unsigned int a5, _QWORD* a6);

__int64 cuda_driver_copy_3adc0(__int64 a1, __int64 a2, unsigned int a3,
                               unsigned int a4, unsigned int a5, _QWORD* a6)
{
  __int64 result;
  __int64 v13;
  __int64 v14;
  __int64 v15;

  *(_QWORD*)(a1 + 496) = 0;
  v14 = 0;
  v15 = 0;
  *(_OWORD*)a1 = 0u;
  *(_OWORD*)(a1 + 16) = 0u;
  *(_OWORD*)(a1 + 32) = 0u;
  *(_OWORD*)(a1 + 48) = 0u;
  *(_OWORD*)(a1 + 480) = 0u;
  *(_OWORD*)(a1 + 64) = 0u;
  *(_OWORD*)(a1 + 80) = 0u;
  *(_OWORD*)(a1 + 96) = 0u;
  *(_OWORD*)(a1 + 112) = 0u;
  *(_OWORD*)(a1 + 128) = 0u;
  *(_OWORD*)(a1 + 144) = 0u;
  *(_OWORD*)(a1 + 160) = 0u;
  *(_OWORD*)(a1 + 176) = 0u;
  *(_OWORD*)(a1 + 192) = 0u;
  *(_OWORD*)(a1 + 208) = 0u;
  *(_OWORD*)(a1 + 224) = 0u;
  *(_OWORD*)(a1 + 240) = 0u;
  *(_OWORD*)(a1 + 256) = 0u;
  *(_OWORD*)(a1 + 272) = 0u;
  *(_OWORD*)(a1 + 288) = 0u;
  *(_OWORD*)(a1 + 304) = 0u;
  *(_OWORD*)(a1 + 320) = 0u;
  *(_OWORD*)(a1 + 336) = 0u;
  *(_OWORD*)(a1 + 352) = 0u;
  *(_OWORD*)(a1 + 368) = 0u;
  *(_OWORD*)(a1 + 384) = 0u;
  *(_OWORD*)(a1 + 400) = 0u;
  *(_OWORD*)(a1 + 416) = 0u;
  *(_OWORD*)(a1 + 432) = 0u;
  *(_OWORD*)(a1 + 448) = 0u;
  *(_OWORD*)(a1 + 464) = 0u;
  result = CudaDriverRoutine_121c60(&v15);
  *(_DWORD*)a1 = result;
  if ((_DWORD)result == 0) {
    result = cuda_driver_misc_helpers_ded50(v15, 0, 0);
    *(_DWORD*)a1 = result;
    if ((_DWORD)result == 0) {
      v13 = CudaDriverRoutine_1216a0(v15);
      *(_QWORD*)(a1 + 8) = v13;
      if (v13 != 0) {
        result = cuda_driver_misc_helpers_deeb0(v13, a3);
        *(_DWORD*)a1 = result;
        if ((_DWORD)result != 0) {
          return result;
        }
        *(_QWORD*)(a1 + 8) = CudaDriverRoutine_98340(*(_QWORD*)(a1 + 8));
      }
      result = CudaDriverRoutine_112680(v15, a2, a4, a1 + 16, &v14, a5, a3);
      *(_DWORD*)a1 = result;
      if ((_DWORD)result == 0) {
        *a6 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 992LL);
        *(_DWORD*)(a1 + 496) = a3;
        *(_BYTE*)(a1 + 500) = 0;
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
