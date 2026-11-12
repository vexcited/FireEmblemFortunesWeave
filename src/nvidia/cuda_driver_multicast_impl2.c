#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CudaDriverRoutine_12c8b0(__int64, _QWORD*, _QWORD*, __int64);
__int64 CudaDriverRoutine_12cb10(__int64, __int64*, _QWORD*);
__int64 CudaDriverRoutine_1db1b0(__int64);
__int64 CudaDriverRoutine_1dc000(__int64);
__int64 CudaDriverRoutine_1dd1a0(__int64);
__int64 CudaDriverRoutine_df060(__int64*);
__int64 CudaDriverStub_12dc90(void);
__int64 CudaDriverStub_1db760(_QWORD);
__int64 CudaDriverStub_1dbf90(_QWORD);
__int64 CudaDriverStub_1dbfc0(_QWORD);
__int64 CudaDriverStub_4f840(_QWORD);
bool CudaDriverRoutine_12cad0(__int64);
extern _UNKNOWN CudaDriverData_14347a8;
extern int CudaDriverData_1434ac0;
__int64 cuda_driver_multicast_45f00(__int64 a1, __int64 a2, unsigned __int64 a3,
                                    unsigned __int64 a4, __int64 a5);

__int64 cuda_driver_multicast_45f00(__int64 a1, __int64 a2, unsigned __int64 a3,
                                    unsigned __int64 a4, __int64 a5)
{
  __int64 result;
  __int64 v11;
  unsigned __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  int v16;
  int v17;
  __int64 v18;
  _QWORD* v19;
  _BOOL4 v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  unsigned int v31;
  __int64 v32;
  _BOOL4 v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;

  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v35 = 0;
  v36 = 0;
  result = CudaDriverRoutine_df060(nullptr),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((_DWORD)result != 0) {
    return result;
  }
  if (CudaDriverData_1434ac0 == 0) {
    return 801;
  }
  v11 = 0;
  while ((unsigned __int8)CudaDriverStub_4f840(
             *((_QWORD*)&CudaDriverData_14347a8 + v11 + 35)) == 0) {
    if (++v11 >= (unsigned __int64)(unsigned int)CudaDriverData_1434ac0) {
      return 801;
    }
  }
  result = 1;
  if (a1 == 0 || a3 == 0 || (a5 | a3 & 0x1FFFFF) != 0) {
    return result;
  }
  CudaDriverRoutine_12c8b0(0, &v36, &v35, a3),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v36 != 0) {
    if (CudaDriverRoutine_12cad0(a3)) {
      v37 = 0;
      v38 = 0;
      CudaDriverRoutine_12cb10(a3, &v38, &v37),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      result = 1;
      if (__CFADD__(a4, a3) || a4 + a3 > v37 + v38) {
        return result;
      }
      goto LABEL_20;
    }
    v12 = v35 + a4;
    if (v12 <= CudaDriverStub_1dbf90(v36) && !__CFADD__(v35, a4)) {
    LABEL_20:
      v13 = (__int64*)CudaDriverRoutine_1dc000(v36),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v33 = (*(_BYTE*)(a1 + 249) & 0xF8) == 0 &&
            (*(_QWORD*)(a1 + 240) & 0xF800000000LL) != 0x800000000LL;
      if (a4 == 0) {
        return 0;
      }
      v14 = *v13;
      v34 = a4;
      v15 = a2;
      while (1) {
        v37 = 0;
        v38 = 0;
        CudaDriverRoutine_12c8b0(0, &v38, &v37, a3),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v17 = COERCE_AS(__typeof__(v17),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (v38 == 0) {
          break;
        }
        if ((CudaDriverRoutine_1db1b0(v38) & 0x7C0000000000000LL) !=
                0x80000000000000LL &&
            (CudaDriverRoutine_1db1b0(v38) & 0x7C0000000000000LL) !=
                0x180000000000000LL &&
            (CudaDriverRoutine_1db1b0(v38) & 0x7C0000000000000LL) !=
                0x3C0000000000000LL) {
          CudaDriverRoutine_1db1b0(v38),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          if ((v16 & 0x100000) == 0) {
            break;
          }
        }
        if ((CudaDriverRoutine_1db1b0(v38) & 7) != 2 ||
            (CudaDriverRoutine_1db1b0(v38) & 0x7E00) != 0x200 ||
            v14 != *(_QWORD*)CudaDriverRoutine_1dc000(v38) ||
            CudaDriverStub_1db760(v38) != 0) {
          break;
        }
        CudaDriverRoutine_1db1b0(v38),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v17 = COERCE_AS(__typeof__(v17),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if ((v17 & 0x100000) == 0) {
          v18 = CudaDriverStub_1dbfc0(v38),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          if (v18 == 0) {
            break;
          }
          v19 = *(_QWORD*)(v18 + 168) != 0 ? *(_QWORD**)(v18 + 168)
                                           : (_QWORD*)v18;
          if ((v19[30] & 0xF800000000LL) == 0x800000000LL) {
            break;
          }
          v20 = (v19[31] & 0xF800LL) != 0;
          v21 = a3 - *(_QWORD*)(CudaDriverStub_1dbfc0(v38) + 88),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        LABEL_42:
          v28 = CudaDriverStub_1dbf90(v38),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v27 = v28 - v37;
          goto LABEL_43;
        }
        v22 = CudaDriverRoutine_1dd1a0(v38),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v23 = *(unsigned int*)(v22 + 44);
        v24 = *(_QWORD*)(v22 + 96);
        v25 = v22;
        v19 = *(_QWORD**)(*(_QWORD*)(v24 + 80) +
                          80 * ((a3 - *(_QWORD*)(v22 + 24)) / v23));
        v20 = *(_DWORD*)(v24 + 152) != 0;
        v21 = a3 % v23;
        v26 = CudaDriverStub_1dbf90(v38),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v27 = *(unsigned int*)(v25 + 44) - v21;
        if (v26 - v37 < v27) {
          goto LABEL_42;
        }
      LABEL_43:
        if (!v33 && !v20) {
          break;
        }
        v29 = v27 >= v34 ? v34 : v27;
        if ((((unsigned int)v21 | (unsigned int)v15 | (unsigned int)v29) &
             0x1FFFFF) != 0) {
          break;
        }
        result = 1;
        if (__CFADD__(v29, v15) || *(_QWORD*)(a1 + 128) < v29 + v15 ||
            __CFADD__(v29, v21) || v19[16] < v29 + v21) {
          goto LABEL_59;
        }
        while (1) {
          result = (*(__int64 (**)(__int64, __int64, _QWORD*, unsigned __int64,
                                   unsigned __int64, _QWORD))(
              *(_QWORD*)(a1 + 632) + 2496LL))(a1, v15, v19, v21, v29, 0),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          if ((_DWORD)result != 600) {
            break;
          }
          CudaDriverStub_12dc90(),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        if ((_DWORD)result != 0) {
          goto LABEL_59;
        }
        a3 += v29;
        v15 += v29;
        v34 -= v29;
        if (v34 == 0) {
          return result;
        }
      }
      result = 1;
    LABEL_59:
      v30 = a4 - v34;
      if (v30 != 0) {
        v31 = result;
        do {
          v32 = *(_QWORD*)(a1 + 632);
          v38 = 0;
          (*(void (**)(__int64, __int64, __int64, _QWORD, __int64*))(
              v32 + 2512))(a1, v14, a2, 0, &v38),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v30 -= v38;
          a2 += v38;
        } while (v30 != 0);
        return v31;
      }
      return result;
    }
  }
  return 1;
}

#pragma GCC visibility pop
