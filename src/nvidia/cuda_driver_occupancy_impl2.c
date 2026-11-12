#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CudaDriverRoutine_121c60(__int64*);
__int64 CudaDriverRoutine_121e20(__int64);
__int64 CudaDriverRoutine_ed630(__int64, __int64, __int64, ...);
__int64 cuda_driver_checks_103390(__int64, char);
__int64 cuda_driver_misc_helpers_ded50(__int64, __int64*, unsigned int);
extern _UNKNOWN* CudaDriverData_1422118;
__int64 cuda_driver_occupancy_432c0(int* a1, __int64 a2, int* a3);

__int64 cuda_driver_occupancy_432c0(int* a1, __int64 a2, int* a3)
{
  __int64 result;
  int v7;
  unsigned int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _DWORD* v12;
  int v13;
  bool v14;
  int v15;
  __int64 v16;

  v16 = 0;
  result = CudaDriverRoutine_121c60(&v16);
  if ((_DWORD)result != 0) {
    return result;
  }
  result = cuda_driver_misc_helpers_ded50(v16, nullptr, 0);
  if ((_DWORD)result != 0) {
    return result;
  }
  result = CudaDriverRoutine_121e20(v16);
  if ((_DWORD)result != 0) {
    return result;
  }
  if (a1 == nullptr || a2 == 0 || a3 == nullptr) {
    if (a2 != 0) {
      if (a1 != nullptr) {
        goto LABEL_15;
      }
    }
    else {
      CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                              (__int64)"Parameter memPool cannot be NULL");
      if (a1 != nullptr) {
      LABEL_15:
        if (a3 != nullptr) {
          return 1;
        }
      LABEL_19:
        CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                                (__int64)"Parameter location cannot be NULL");
        return 1;
      }
    }
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            (__int64)"Parameter flags cannot be NULL");
    if (a3 != nullptr) {
      return 1;
    }
    goto LABEL_19;
  }
  v7 = *a3;
  if (*a3 != 3) {
    if (v7 == 1) {
      v8 = a3[1];
      if (v8 >= *(_DWORD*)((char*)((_UNKNOWN*)0x318LL) +
                           (_QWORD)CudaDriverData_1422118)) {
        CudaDriverRoutine_ed630(
            (__int64)"CUDA", 0,
            (__int64)"Specified invalid device ordinal(%u) in location->id",
            v8);
        return 1;
      }
      goto LABEL_11;
    }
    CudaDriverRoutine_ed630(
        (__int64)"CUDA", 0,
        (__int64)"Specified invalid location type in location->type");
    return 1;
  }
LABEL_11:
  v9 = *(_QWORD*)(a2 + 96);
  if (v9 != 0) {
    v10 = v9 + 176;
  }
  else {
    v11 = *(_QWORD*)(a2 + 104);
    v10 = v11 + 104;
    v12 = *(_DWORD**)(v11 + 104);
    if (*v12 == a3[1] && v12 != *(_DWORD**)(v11 + 56)) {
      v13 = *(_DWORD*)(v11 + 64);
    LABEL_27:
      *a1 = v13;
      return 0;
    }
  }
  if (v7 == 3) {
    v13 = *(_DWORD*)(v10 + 16);
    if (v13 == 3) {
      goto LABEL_27;
    }
    *a1 = 0;
    return 0;
  }
  else {
    v14 = (unsigned __int8)cuda_driver_checks_103390(v10, a3[1]) == 0;
    result = 0;
    if (v14) {
      v15 = 0;
    }
    else {
      v15 = 3;
    }
    *a1 = v15;
  }
  return result;
}

#pragma GCC visibility pop
