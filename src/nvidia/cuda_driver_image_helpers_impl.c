#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CudaDriverRoutine_2472f0(_QWORD, _QWORD);
__int64 CudaDriverRoutine_247310(_QWORD, _QWORD);
__int64 CudaDriverRoutine_a7cc0(void);
__int64 CudaDriverRoutine_a7d20(void);
__int64 CudaDriverStub_57450(_QWORD, _QWORD);
unsigned __int64 cuda_driver_image_helpers_a32e0(__int64 a1, __int64 a2);
unsigned __int64 cuda_driver_image_helpers_a33b0(__int64 a1, __int64 a2);
__int64 cuda_driver_image_helpers_a3480(__int64 a1, _QWORD* a2);
__int64 cuda_driver_image_helpers_a34f0(__int64 a1, _QWORD* a2);
__int64 cuda_driver_image_helpers_a3560(__int64 a1, _QWORD* a2);
__int64 cuda_driver_image_helpers_a35d0(__int64 a1, _QWORD* a2);

unsigned __int64 cuda_driver_image_helpers_a32e0(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;

  if (*(_BYTE*)a1 != 0) {
    return CudaDriverRoutine_a7cc0();
  }
  v3 = *(_QWORD*)(a1 + 88);
  if (v3 == 0) {
    return 0;
  }
  v4 = a1 + *(_QWORD*)(a1 + 16);
  v5 = CudaDriverStub_57450(v4, a2);
  return (v3 - v4 - (unsigned __int64)*(unsigned int*)(v5 + 32)) /
         *(unsigned __int16*)(v5 + 46);
}

unsigned __int64 cuda_driver_image_helpers_a33b0(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;

  if (*(_BYTE*)a1 != 0) {
    return CudaDriverRoutine_a7d20();
  }
  v3 = *(_QWORD*)(a1 + 96);
  if (v3 == 0) {
    return 0;
  }
  v4 = a1 + *(_QWORD*)(a1 + 16);
  v5 = CudaDriverStub_57450(v4, a2);
  return (v3 - v4 - (unsigned __int64)*(unsigned int*)(v5 + 32)) /
         *(unsigned __int16*)(v5 + 46);
}

__int64 cuda_driver_image_helpers_a3480(__int64 a1, _QWORD* a2)
{
  __int64 v3;
  __int64 v4;

  v3 = *(_QWORD*)(a1 + 56);
  if (v3 != 0) {
    v4 = *(_QWORD*)(a1 + 16);
    *a2 = CudaDriverRoutine_247310(a1 + v4, v3);
    return CudaDriverRoutine_2472f0(a1 + v4, *(_QWORD*)(a1 + 56));
  }
  else {
    *a2 = 0;
    return 0;
  }
}

__int64 cuda_driver_image_helpers_a34f0(__int64 a1, _QWORD* a2)
{
  __int64 v3;
  __int64 v4;

  v3 = *(_QWORD*)(a1 + 80);
  if (v3 != 0) {
    v4 = *(_QWORD*)(a1 + 16);
    *a2 = CudaDriverRoutine_247310(a1 + v4, v3);
    return CudaDriverRoutine_2472f0(a1 + v4, *(_QWORD*)(a1 + 80));
  }
  else {
    *a2 = 0;
    return 0;
  }
}

__int64 cuda_driver_image_helpers_a3560(__int64 a1, _QWORD* a2)
{
  __int64 v3;
  __int64 v4;

  v3 = *(_QWORD*)(a1 + 88);
  if (v3 != 0) {
    v4 = *(_QWORD*)(a1 + 16);
    *a2 = CudaDriverRoutine_247310(a1 + v4, v3);
    return CudaDriverRoutine_2472f0(a1 + v4, *(_QWORD*)(a1 + 88));
  }
  else {
    *a2 = 0;
    return 0;
  }
}

__int64 cuda_driver_image_helpers_a35d0(__int64 a1, _QWORD* a2)
{
  __int64 v3;
  __int64 v4;

  v3 = *(_QWORD*)(a1 + 96);
  if (v3 != 0) {
    v4 = *(_QWORD*)(a1 + 16);
    *a2 = CudaDriverRoutine_247310(a1 + v4, v3);
    return CudaDriverRoutine_2472f0(a1 + v4, *(_QWORD*)(a1 + 96));
  }
  else {
    *a2 = 0;
    return 0;
  }
}

#pragma GCC visibility pop
