#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CudaDriverRoutine_112680(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                 _QWORD);
__int64 CudaDriverStub_12e550(_QWORD, _QWORD);
extern __int64 CudaDriverData_1432488;
__int64 cuda_driver_pool_48d00(__int64 a1, _DWORD* a2, _QWORD* a3, _QWORD* a4,
                               _QWORD* a5, _QWORD* a6, _QWORD* a7,
                               unsigned int a8);

__int64 cuda_driver_pool_48d00(__int64 a1, _DWORD* a2, _QWORD* a3, _QWORD* a4,
                               _QWORD* a5, _QWORD* a6, _QWORD* a7,
                               unsigned int a8)
{
  __int64 result;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  _QWORD* v18;
  _QWORD* v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  _QWORD* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64* v30;
  __int64 v31;
  __int64* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;

  v35 = 0;
  v34 = 0;
  if (a2 == nullptr) {
    return 1;
  }
  result = CudaDriverRoutine_112680(0, a1, a8, &v35, &v34, 13, 0);
  if ((_DWORD)result != 0) {
    return result;
  }
  v15 = v35;
  v16 = *(_QWORD*)(v35 + 992);
  if (v16 == 0) {
  LABEL_6:
    *a2 = v16;
    return 0;
  }
  if (*(_DWORD*)(v16 + 280) != 0) {
    LODWORD(v16) = 2;
    goto LABEL_6;
  }
  *a2 = 1;
  if (a3 != nullptr) {
    *a3 = **(unsigned int**)(v15 + 992);
  }
  v17 = a7;
  v18 = a6;
  v19 = a5;
  if (a4 != nullptr) {
    *a4 = *(_QWORD*)(v15 + 992);
  }
  if (a5 == nullptr) {
    if (a6 == nullptr) {
      goto LABEL_32;
    }
    return 1;
  }
  v20 = *(unsigned int*)(v15 + 1036);
  v21 = *(_QWORD*)(v15 + 1000);
  if (*(_QWORD*)(v15 + 1072) < v20) {
    v22 = CudaDriverStub_12e550(*(_QWORD*)(v15 + 1056), 8 * v20);
    *(_QWORD*)(v15 + 1056) = v22;
    if (v22 == 0) {
      return 2;
    }
    v23 = CudaDriverStub_12e550(*(_QWORD*)(v15 + 1064), 8 * v20);
    *(_QWORD*)(v15 + 1064) = v23;
    if (v23 == 0) {
      return 2;
    }
    *(_QWORD*)(v15 + 1072) = v20;
    v17 = a7;
    v18 = a6;
    v19 = a5;
  }
  if ((_DWORD)v20 == 0) {
    *v19 = *(_QWORD*)(v15 + 1056);
    if (v18 == nullptr) {
    LABEL_32:
      result = 0;
      if (v17 != nullptr) {
        *v17 = *(unsigned int*)(v15 + 1036);
      }
      return result;
    }
  LABEL_31:
    *v18 = *(_QWORD*)(v15 + 1064);
    goto LABEL_32;
  }
  v24 = v20 & 7;
  if ((unsigned int)v20 >= 8) {
    v26 = (_QWORD*)(v21 + 64);
    v25 = 0;
    do {
      *(_QWORD*)(*(_QWORD*)(v15 + 1056) + 8 * v25) = *(v26 - 8);
      *(_QWORD*)(*(_QWORD*)(v15 + 1064) + 8 * v25) = *(v26 - 7);
      *(_QWORD*)(*(_QWORD*)(v15 + 1056) + 8 * v25 + 8) = *(v26 - 6);
      *(_QWORD*)(*(_QWORD*)(v15 + 1064) + 8 * v25 + 8) = *(v26 - 5);
      *(_QWORD*)(*(_QWORD*)(v15 + 1056) + 8 * v25 + 16) = *(v26 - 4);
      *(_QWORD*)(*(_QWORD*)(v15 + 1064) + 8 * v25 + 16) = *(v26 - 3);
      *(_QWORD*)(*(_QWORD*)(v15 + 1056) + 8 * v25 + 24) = *(v26 - 2);
      *(_QWORD*)(*(_QWORD*)(v15 + 1064) + 8 * v25 + 24) = *(v26 - 1);
      *(_QWORD*)(*(_QWORD*)(v15 + 1056) + 8 * v25 + 32) = *v26;
      *(_QWORD*)(*(_QWORD*)(v15 + 1064) + 8 * v25 + 32) = v26[1];
      *(_QWORD*)(*(_QWORD*)(v15 + 1056) + 8 * v25 + 40) = v26[2];
      *(_QWORD*)(*(_QWORD*)(v15 + 1064) + 8 * v25 + 40) = v26[3];
      *(_QWORD*)(*(_QWORD*)(v15 + 1056) + 8 * v25 + 48) = v26[4];
      *(_QWORD*)(*(_QWORD*)(v15 + 1064) + 8 * v25 + 48) = v26[5];
      *(_QWORD*)(*(_QWORD*)(v15 + 1056) + 8 * v25 + 56) = v26[6];
      v27 = v26[7];
      v26 += 16;
      v28 = *(_QWORD*)(v15 + 1064) + 8 * v25;
      v25 += 8;
      *(_QWORD*)(v28 + 56) = v27;
    } while ((v20 & 0xFFFFFFF8) != v25);
  }
  else {
    v25 = 0;
  }
  if ((v20 & 7) != 0) {
    v29 = 8 * v25;
    v30 = (__int64*)(v21 + 16 * v25 + 8);
    do {
      --v24;
      *(_QWORD*)(*(_QWORD*)(v15 + 1056) + v29) = *(v30 - 1);
      v31 = *v30;
      v30 += 2;
      *(_QWORD*)(*(_QWORD*)(v15 + 1064) + v29) = v31;
      v29 += 8;
    } while (v24 != 0);
  }
  *v19 = *(_QWORD*)(v15 + 1056);
  if (v18 != nullptr) {
    goto LABEL_31;
  }
  v32 = (__int64*)(v21 + 8);
  while (1) {
    v33 = *v32;
    v32 += 2;
    if (v33 != CudaDriverData_1432488) {
      return 402;
    }
    if (--v20 == 0) {
      goto LABEL_32;
    }
  }
}

#pragma GCC visibility pop
