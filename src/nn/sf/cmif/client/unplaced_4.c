#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_diag_detail_AbortImpl_plt_858db0(__int64);
__int64 nn_os_ConvertToTimeSpan_plt(_QWORD);
__int64 nn_os_GetSystemTick_plt();
__int64 nn_os_SdkRecursiveMutexType_Lock_plt(__int64);
extern _UNKNOWN SdkData_10464a0;
extern __int64 SdkData_10464a8;
extern __int64 SdkData_10464b0;
extern __int64 SdkData_10464c0;
extern __int64 SdkData_10464d0;
extern __int64 SdkData_10464e0;
extern __int64 SdkData_10464f0;
extern __int64 SdkData_1046500;
extern __int64 SdkData_1046510;
extern __int64 SdkData_1046520;
extern __int64 SdkData_1046530;
extern __int64 SdkData_1046540;
extern __int64 SdkData_1046550;
extern __int64 SdkData_1046560;
extern __int64 SdkData_e88fe8;
extern void (*SdkData_e88fe0[88])();
__int64 nn_sf_cmif_client_6b2ba0(_DWORD* a1, int a2, __int64* a3, int a4);

__int64 nn_sf_cmif_client_6b2ba0(_DWORD* a1, int a2, __int64* a3, int a4)
{
  __int64 v8;
  _DWORD* v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int* v21;
  _QWORD* v22;
  __int64 v23;
  int v24;
  char* v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  __int64 v32;
  int v33;
  char* v34;
  _DWORD* v35;
  __int64* v36;
  _DWORD* v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  _DWORD* v41;
  _QWORD v44[2];
  struct {
    _QWORD v45[2];
    char gap40_[4];
    int v46;
  } v45_;

  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  nn_os_SdkRecursiveMutexType_Lock_plt(SdkData_e88fe8),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  nn_os_SdkRecursiveMutexType_Lock_plt((__int64)&SdkData_10464a0),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v8 = nn_os_GetSystemTick_plt(),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v11 = nn_os_ConvertToTimeSpan_plt(v8) / 1000000 - SdkData_10464a8,
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  if (a4 < 1 || v11 > 39) {
  LABEL_18:
    if (v11 < 40) {
      goto LABEL_32;
    }
  }
  else {
    v12 = (unsigned int)a4;
    v13 = a3;
    v9 = a1;
    v10 = &SdkData_1046560;
    while (1) {
      v15 = *v13++;
      v14 = v15;
      v16 = &SdkData_10464b0;
      if (SdkData_10464b0 != v15) {
        v16 = &SdkData_10464c0;
        if (SdkData_10464c0 != v14) {
          v16 = &SdkData_10464d0;
          if (SdkData_10464d0 != v14) {
            v16 = &SdkData_10464e0;
            if (SdkData_10464e0 != v14) {
              v16 = &SdkData_10464f0;
              if (SdkData_10464f0 != v14) {
                v16 = &SdkData_1046500;
                if (SdkData_1046500 != v14) {
                  v16 = &SdkData_1046510;
                  if (SdkData_1046510 != v14) {
                    v16 = &SdkData_1046520;
                    if (SdkData_1046520 != v14) {
                      v16 = &SdkData_1046530;
                      if (SdkData_1046530 != v14) {
                        v16 = &SdkData_1046540;
                        if (SdkData_1046540 != v14) {
                          v16 = &SdkData_1046550;
                          if (SdkData_1046550 != v14) {
                            v16 = &SdkData_1046560;
                            if (SdkData_1046560 != v14) {
                              break;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      --v12;
      *(_DWORD*)v9++ = *((_DWORD*)v16 + 2);
      if (v12 == 0) {
        goto LABEL_18;
      }
    }
  }
  v17 = *(_QWORD*)SdkData_e88fe0[0];
  v45_.v45[0] = a1;
  v45_.v45[1] = a2;
  v44[0] = a3;
  v44[1] = a4;
  v45_.v46 = (*(__int64 (**)(__int64, _QWORD*, _QWORD*, _DWORD*, __int64*))(
      *(_QWORD*)v17 + 176LL))(v17, v45_.v45, v44, v9, v10),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  if (v45_.v46 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0((__int64)&v45_.v46),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  }
  v18 = nn_os_GetSystemTick_plt(),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  SdkData_10464a8 = nn_os_ConvertToTimeSpan_plt(v18) / 1000000,
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  if (a4 < 1) {
    goto LABEL_29;
  }
  v19 = a4 & 7;
  if ((unsigned int)a4 >= 8) {
    v21 = a1 + 4;
    v22 = a3 + 4;
    v23 = 0;
    v20 = 0;
    do {
      v24 = *(v21 - 4);
      v25 = (char*)&SdkData_10464a0 + v23;
      v20 += 8;
      v23 += 128;
      *((_QWORD*)v25 + 2) = *(v22 - 4);
      *((_DWORD*)v25 + 6) = v24;
      v26 = *(v21 - 3);
      *((_QWORD*)v25 + 4) = *(v22 - 3);
      *((_DWORD*)v25 + 10) = v26;
      v27 = *(v21 - 2);
      *((_QWORD*)v25 + 6) = *(v22 - 2);
      *((_DWORD*)v25 + 14) = v27;
      v28 = *(v21 - 1);
      *((_QWORD*)v25 + 8) = *(v22 - 1);
      *((_DWORD*)v25 + 18) = v28;
      v29 = *v21;
      *((_QWORD*)v25 + 10) = *v22;
      *((_DWORD*)v25 + 22) = v29;
      v30 = v21[1];
      *((_QWORD*)v25 + 12) = v22[1];
      *((_DWORD*)v25 + 26) = v30;
      v31 = v21[2];
      *((_QWORD*)v25 + 14) = v22[2];
      *((_DWORD*)v25 + 30) = v31;
      v32 = v22[3];
      v33 = v21[3];
      v21 += 8;
      v22 += 8;
      *((_QWORD*)v25 + 16) = v32;
      *((_DWORD*)v25 + 34) = v33;
    } while (((16LL * (unsigned int)a4) & 0x7FFFFFF80LL) != v23);
  }
  else {
    v20 = 0;
  }
  if ((a4 & 7) != 0) {
    v34 = (char*)&SdkData_10464a0 + 16 * v20;
    v35 = &a1[v20];
    v36 = &a3[v20];
    v37 = v34 + 24;
    do {
      v39 = *v36++;
      v38 = v39;
      LODWORD(v39) = *(_DWORD*)v35++;
      --v19;
      *((_QWORD*)v37 - 1) = v38;
      *(_DWORD*)v37 = v39;
      v37 += 4;
    } while (v19 != 0);
  }
  if ((unsigned int)a4 <= 0xB) {
  LABEL_29:
    v40 = a4 + 1LL;
    v41 = (_DWORD*)((char*)&SdkData_10464a0 + 16 * a4 + 24);
    do {
      *((_QWORD*)v41 - 1) = 0;
      *(_DWORD*)v41 = 0;
      v41 += 4;
    } while ((_DWORD)v40++ != 12);
  }
LABEL_32:
  _runlock_0_0((void*)&SdkData_10464a0);
  return _runlock_0_0((void*)SdkData_e88fe8);
}

#pragma GCC visibility pop
