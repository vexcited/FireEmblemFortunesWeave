#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_diag_detail_Abort_plt(_QWORD);
__int64 nn_diag_detail_InvokeAbortObserver_plt(_QWORD);
__int64 nn_os_ConvertToTimeSpan_plt(_QWORD);
__int64 nn_os_GetCurrentThread_plt();
__int64 nn_os_GetSystemTick_plt();
__int64 nn_os_GetThreadNamePointer_plt(__int64);
__int64 nn_os_SdkMutexType_IsLockedByCurrentThread_plt(_QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_util_MessagePackWriter_GetRemainSize_plt(__int64);
__int64 nn_util_MessagePackWriter_MessagePackWriter_plt(__int64, __int64);
__int64 nn_util_MessagePackWriter_WriteArray16_plt(__int64, unsigned __int16);
__int64 nn_util_MessagePackWriter_WriteFloat64_plt(__int64, double);
__int64 nn_util_MessagePackWriter_WriteSignedIntegerAutoSize_plt(__int64,
                                                                 __int64);
__int64 nn_util_MessagePackWriter_WriteString_plt(_QWORD, _QWORD);
__int64 nn_util_MessagePackWriter_WriteUnsignedInteger64_plt(__int64,
                                                             unsigned __int64);
__int64
nn_util_MessagePackWriter_WriteUnsignedIntegerAutoSize_plt(__int64,
                                                           unsigned __int64);
__int64 threadName();
extern _UNKNOWN SdkData_eae2f0;
extern _UNKNOWN SdkData_eae2f8;
extern __int64 (*SdkData_eae388)(_QWORD);
extern __int64 SdkData_eae300[];
extern __int64 SdkData_eae308;
extern __int64 SdkData_eae310;
extern __int64 SdkData_eae318;
extern __int64 SdkData_eae320;
extern __int64 SdkData_eae328;
extern __int64 SdkData_eae330;
extern __int64 SdkData_eae338;
extern __int64 SdkData_eae340;
extern __int64 SdkData_eae348;
extern __int64 SdkData_eae350;
extern __int64 SdkData_eae358;
extern __int64 SdkData_eae360;
extern __int64 SdkData_eae368;
extern __int64 SdkData_eae370;
extern __int64 SdkData_eae378;
extern __int64 SdkData_eae380;
extern char SdkData_bbbd5c;
int __cxa_guard_acquire_plt(__int64);
void __cxa_guard_release_plt(__int64);
void nn_detail_UnexpectedDefaultImpl_plt_857150();
void __attribute__((noreturn)) nn_diag_ba140(void* this_, const char* a2,
                                             const char* a3);
__int64 nn_diag_ba320(_QWORD* a1);

void __attribute__((noreturn)) nn_diag_ba140(void* this_, const char* a2,
                                             const char* a3)
{
  int v4;
  struct {
    _QWORD v6[5];
    int v7;
    int v8;
  } v6_;
  _QWORD v9[2];
  _QWORD v10[4];

  v4 = (int)a3;
  if ((nn_os_SdkMutexType_IsLockedByCurrentThread_plt(&SdkData_eae2f0) & 1) !=
      0) {
    nn_diag_detail_Abort_plt(0);
  }
  nn_os_SdkMutexType_Lock_plt(&SdkData_eae2f0);
  memset(v10, 0, sizeof(v10));
  v6_.v6[4] = a2;
  v6_.v8 = 0;
  v6_.v7 = v4;
  v9[0] = &SdkData_bbbd5c;
  v9[1] = v10;
  v6_.v6[1] = v9;
  v6_.v6[2] = &SdkData_bbbd5c;
  v6_.v6[3] = this_;
  v6_.v6[0] = 4;
  nn_diag_detail_InvokeAbortObserver_plt(v6_.v6);
  nn_diag_detail_Abort_plt(0);
  __udf(0);
}

__int64 nn_diag_ba320(_QWORD* a1)
{

#pragma clang fp contract(off)
  unsigned __int64 v1;
  unsigned __int8** v2;
  __int64 (*v3)(_QWORD*, _QWORD);
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64* v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  char* v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;
  __int64 v27;
  __int64 v28;
  _QWORD* v29;
  char* v30;
  char* v31;
  __int64 v32;
  __int64 v33;
  char* v34;
  char* v35;
  __int64 v36;
  __int64 v37;
  unsigned __int8* v38;
  __int64 v39;
  __int64 v40;
  unsigned __int64* v41;
  __int64* v42;
  __int64 v43;
  __int64 v44;
  unsigned int v45;
  unsigned __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  unsigned int v50;
  __int64 v51;
  __int64* v52;
  unsigned __int64 v53;
  int v54;
  __int64* v55;
  unsigned int* v56;
  double* v57;
  __int64* v58;
  __int64 v59;
  int v60;
  int v61;
  bool v62;
  unsigned int v63;
  __int64 result;
  struct {
    _QWORD v65[2];
    __int64 v66;
  } v65_;
  struct {
    __int64 v67;
    __int64 v68;
  } v67_;
  _QWORD v69[20];

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v1 = a1[1];
  v2 = (unsigned __int8**)a1[2];
  v3 = (__int64 (*)(_QWORD*, _QWORD))a1[3],
  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v67_.v68 = 0;
  memset(v69, 0, 158);
  v65_.v65[0] = v69;
  v65_.v65[1] = 158;
  v65_.v66 = 0;
  v67_.v67 = 0;
  nn_util_MessagePackWriter_MessagePackWriter_plt((__int64)&v67_.v67,
                                                  (__int64)v65_.v65),
      result = COERCE_AS(__typeof__(result),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  LODWORD(v67_.v68) = 0;
  nn_util_MessagePackWriter_WriteArray16_plt((__int64)&v67_.v67, 0),
      result = COERCE_AS(__typeof__(result),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if ((nn_util_MessagePackWriter_WriteUnsignedIntegerAutoSize_plt(
           (__int64)&v67_.v67, v1) &
       1) != 0) {
    LODWORD(v67_.v68) = v67_.v68 + 1;
  }
  v4 = nn_os_GetSystemTick_plt(),
  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v5 = nn_os_ConvertToTimeSpan_plt(v4),
  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if ((nn_util_MessagePackWriter_WriteUnsignedIntegerAutoSize_plt(
           (__int64)&v67_.v67, v5) &
       1) != 0) {
    LODWORD(v67_.v68) = v67_.v68 + 1;
  }
  v6 = nn_os_GetCurrentThread_plt(),
  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v7 = nn_os_GetThreadNamePointer_plt(v6),
  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_eae2f8,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire_plt((__int64)&SdkData_eae2f8) != 0) {
    SdkData_eae370 = 0;
    SdkData_eae378 = 0;
    SdkData_eae360 = 0;
    SdkData_eae368 = 0;
    SdkData_eae350 = 0;
    SdkData_eae358 = 0;
    SdkData_eae340 = 0;
    SdkData_eae348 = 0;
    SdkData_eae330 = 0;
    SdkData_eae338 = 0;
    SdkData_eae320 = 0;
    SdkData_eae328 = 0;
    SdkData_eae310 = 0;
    SdkData_eae318 = 0;
    *(_OWORD*)SdkData_eae300 = (__typeof__(*(_OWORD*)SdkData_eae300)){0};
    SdkData_eae380 = 0;
    SdkData_eae388 = (__int64 (*)(_QWORD))threadName,
    result = COERCE_AS(__typeof__(result),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    __cxa_guard_release_plt((__int64)&SdkData_eae2f8),
        result = COERCE_AS(__typeof__(result),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  if (SdkData_eae300[0] == 0) {
    goto LABEL_16;
  }
  v8 = 0;
  v9 = &SdkData_eae300[2 * SdkData_eae300[0] + 1];
  v10 = (16 * SdkData_eae300[0]) | 8;
  do {
    if (v7 == *(_QWORD*)((char*)&SdkData_eae2f8 + v8 + 16)) {
      v10 = v8 + 8;
      v11 = (__int64*)((char*)&SdkData_eae2f8 + v8 + 16);
      if (v11 == v9) {
        goto LABEL_16;
      }
    LABEL_11:
      if (v10 <= 8) {
        if ((nn_util_MessagePackWriter_WriteUnsignedIntegerAutoSize_plt(
                 (__int64)&v67_.v67, SdkData_eae310) &
             1) != 0) {
          goto LABEL_41;
        }
      LABEL_28:
        v26 = **v2;
        if (**v2 != 0) {
          goto LABEL_42;
        }
        goto LABEL_116;
      }
      v12 = v11[1];
      v13 = v10 - 24;
      v14 = *(_QWORD*)((char*)&SdkData_eae2f8 + v10 + 8);
      if ((~((_BYTE)v10 - 24) & 0x70) != 0) {
        v27 = 0;
        v28 = ((unsigned __int8)((unsigned int)v13 >> 4) + 1) & 7;
        do {
          v29 = (_QWORD*)((char*)&SdkData_eae2f8 + v10 + v27);
          v30 = (char*)&SdkData_eae2f8 + v27;
          v27 -= 16;
          --v28;
          *((_QWORD*)v30 + 16) = *(v29 - 1);
          *((_QWORD*)v30 + 17) = *v29;
        } while (v28 != 0);
        v10 += v27;
        v15 = (char*)&SdkData_eae2f8 + v27 + 144;
        if (v13 < 0x70) {
        LABEL_40:
          SdkData_eae308 = v14;
          SdkData_eae310 = v12;
          if ((nn_util_MessagePackWriter_WriteUnsignedIntegerAutoSize_plt(
                   (__int64)&v67_.v67, v12) &
               1) != 0) {
            goto LABEL_41;
          }
          goto LABEL_28;
        }
      }
      else {
        v15 = (char*)&SdkData_eae388;
        if (v13 < 0x70) {
          goto LABEL_40;
        }
      }
      v31 = (char*)&SdkData_eae2f8 + v10;
      v32 = 0;
      v33 = 8 - v10;
      do {
        v34 = &v31[v32];
        v35 = &v15[v32];
        v32 -= 128;
        *((_QWORD*)v35 - 2) = *((_QWORD*)v34 - 1);
        *((_QWORD*)v35 - 1) = *(_QWORD*)v34;
        *((_QWORD*)v35 - 4) = *((_QWORD*)v34 - 3);
        *((_QWORD*)v35 - 3) = *((_QWORD*)v34 - 2);
        *((_QWORD*)v35 - 6) = *((_QWORD*)v34 - 5);
        *((_QWORD*)v35 - 5) = *((_QWORD*)v34 - 4);
        *((_QWORD*)v35 - 8) = *((_QWORD*)v34 - 7);
        *((_QWORD*)v35 - 7) = *((_QWORD*)v34 - 6);
        *((_QWORD*)v35 - 10) = *((_QWORD*)v34 - 9);
        *((_QWORD*)v35 - 9) = *((_QWORD*)v34 - 8);
        *((_QWORD*)v35 - 12) = *((_QWORD*)v34 - 11);
        *((_QWORD*)v35 - 11) = *((_QWORD*)v34 - 10);
        *((_QWORD*)v35 - 14) = *((_QWORD*)v34 - 13);
        *((_QWORD*)v35 - 13) = *((_QWORD*)v34 - 12);
        *((_QWORD*)v35 - 16) = *((_QWORD*)v34 - 15);
        *((_QWORD*)v35 - 15) = *((_QWORD*)v34 - 14);
      } while (v33 != v32);
      goto LABEL_40;
    }
    v8 += 16;
  } while (16 * SdkData_eae300[0] != v8);
  v11 = (__int64*)((char*)&SdkData_eae2f8 + v10 + 8);
  if (v11 != v9) {
    goto LABEL_11;
  }
LABEL_16:
  v16 = SdkData_eae388(v7);
  v17 = SdkData_eae300[0];
  if (SdkData_eae300[0] == 0) {
    SdkData_eae308 = v7;
    SdkData_eae310 = v16;
    goto LABEL_31;
  }
  if (SdkData_eae300[0] >= 7uLL) {
    v17 = 7;
  }
  v18 = 2 * v17;
  v19 = SdkData_eae300[v18];
  SdkData_eae378 = SdkData_eae300[v18 - 1];
  SdkData_eae380 = v19;
  if (v18 != 2) {
    v20 = SdkData_eae300[v18 - 2];
    SdkData_eae368 = SdkData_eae300[v18 - 3];
    SdkData_eae370 = v20;
    if (v18 != 4) {
      v21 = SdkData_eae300[v18 - 4];
      SdkData_eae358 = SdkData_eae300[v18 - 5];
      SdkData_eae360 = v21;
      if (v18 != 6) {
        v22 = SdkData_eae300[v18 - 6];
        SdkData_eae348 = SdkData_eae300[v18 - 7];
        SdkData_eae350 = v22;
        if (v18 != 8) {
          v23 = SdkData_eae300[v18 - 8];
          SdkData_eae338 = SdkData_eae300[v18 - 9];
          SdkData_eae340 = v23;
          if (v18 != 10) {
            v24 = SdkData_eae300[v18 - 10];
            SdkData_eae328 = SdkData_eae300[v18 - 11];
            SdkData_eae330 = v24;
            if (v18 != 12) {
              v25 = SdkData_eae300[v18 - 12];
              SdkData_eae318 = SdkData_eae300[v18 - 13];
              SdkData_eae320 = v25;
            }
          }
        }
      }
    }
  }
  v17 = SdkData_eae300[0];
  SdkData_eae308 = v7;
  SdkData_eae310 = v16;
  if (SdkData_eae300[0] <= 7uLL) {
  LABEL_31:
    SdkData_eae300[0] = v17 + 1;
    if ((nn_util_MessagePackWriter_WriteUnsignedIntegerAutoSize_plt(
             (__int64)&v67_.v67, v16) &
         1) != 0) {
      goto LABEL_41;
    }
    goto LABEL_28;
  }
  if ((nn_util_MessagePackWriter_WriteUnsignedIntegerAutoSize_plt(
           (__int64)&v67_.v67, v16) &
       1) == 0) {
    goto LABEL_28;
  }
LABEL_41:
  LODWORD(v67_.v68) = v67_.v68 + 1;
  v26 = **v2;
  if (**v2 != 0) {
  LABEL_42:
    v36 = 0;
    while (2) {
      v37 = (unsigned int)(v26 - 1);
      v38 = v2[1];
      switch (v37) {
      case 0LL:
        v47 = *((int*)v38 + 6);
        if ((v47 & 0x80000000) != 0 &&
            (*((_DWORD*)v38 + 6) = v47 + 8, (unsigned int)v47 <= 0xFFFFFFF8)) {
          if ((nn_util_MessagePackWriter_WriteSignedIntegerAutoSize_plt(
                   (__int64)&v67_.v67, *(int*)(*((_QWORD*)v38 + 1) + v47)) &
               1) != 0) {
            goto LABEL_43;
          }
        }
        else {
          v55 = *(__int64**)v38;
          *(_QWORD*)v38 += 8LL;
          if ((nn_util_MessagePackWriter_WriteSignedIntegerAutoSize_plt(
                   (__int64)&v67_.v67, *(int*)v55) &
               1) != 0) {
            goto LABEL_43;
          }
        }
        goto LABEL_44;
      case 1LL:
        v48 = *((int*)v38 + 6);
        if ((v48 & 0x80000000) != 0 &&
            (*((_DWORD*)v38 + 6) = v48 + 8, (unsigned int)v48 <= 0xFFFFFFF8)) {
          if ((nn_util_MessagePackWriter_WriteUnsignedIntegerAutoSize_plt(
                   (__int64)&v67_.v67,
                   *(unsigned int*)(*((_QWORD*)v38 + 1) + v48)) &
               1) != 0) {
            goto LABEL_43;
          }
        }
        else {
          v56 = *(unsigned int**)v38;
          *(_QWORD*)v38 += 8LL;
          if ((nn_util_MessagePackWriter_WriteUnsignedIntegerAutoSize_plt(
                   (__int64)&v67_.v67, *v56) &
               1) != 0) {
            goto LABEL_43;
          }
        }
        goto LABEL_44;
      case 2LL:
      case 4LL:
        v39 = *((int*)v38 + 6);
        if ((v39 & 0x80000000) != 0 &&
            (*((_DWORD*)v38 + 6) = v39 + 8, (unsigned int)v39 <= 0xFFFFFFF8)) {
          if ((nn_util_MessagePackWriter_WriteSignedIntegerAutoSize_plt(
                   (__int64)&v67_.v67, *(_QWORD*)(*((_QWORD*)v38 + 1) + v39)) &
               1) != 0) {
            goto LABEL_43;
          }
        }
        else {
          v42 = *(__int64**)v38;
          *(_QWORD*)v38 += 8LL;
          if ((nn_util_MessagePackWriter_WriteSignedIntegerAutoSize_plt(
                   (__int64)&v67_.v67, *v42) &
               1) != 0) {
            goto LABEL_43;
          }
        }
        goto LABEL_44;
      case 3LL:
      case 5LL:
        v40 = *((int*)v38 + 6);
        if ((v40 & 0x80000000) != 0 &&
            (*((_DWORD*)v38 + 6) = v40 + 8, (unsigned int)v40 <= 0xFFFFFFF8)) {
          if ((nn_util_MessagePackWriter_WriteUnsignedIntegerAutoSize_plt(
                   (__int64)&v67_.v67, *(_QWORD*)(*((_QWORD*)v38 + 1) + v40)) &
               1) != 0) {
            goto LABEL_43;
          }
        }
        else {
          v41 = *(unsigned __int64**)v38;
          *(_QWORD*)v38 += 8LL;
          if ((nn_util_MessagePackWriter_WriteUnsignedIntegerAutoSize_plt(
                   (__int64)&v67_.v67, *v41) &
               1) != 0) {
            goto LABEL_43;
          }
        }
        goto LABEL_44;
      case 6LL:
        v49 = *((int*)v38 + 7);
        if ((v49 & 0x80000000) != 0 &&
            (*((_DWORD*)v38 + 7) = v49 + 16, (unsigned int)v49 <= 0xFFFFFFF0)) {
          if ((nn_util_MessagePackWriter_WriteFloat64_plt(
                   (__int64)&v67_.v67, *(double*)(*((_QWORD*)v38 + 2) + v49)) &
               1) != 0) {
            goto LABEL_43;
          }
        }
        else {
          v57 = *(double**)v38;
          *(_QWORD*)v38 += 8LL;
          if ((nn_util_MessagePackWriter_WriteFloat64_plt((__int64)&v67_.v67,
                                                          *v57) &
               1) != 0) {
            goto LABEL_43;
          }
        }
        goto LABEL_44;
      case 7LL:
        v45 = *((_DWORD*)v38 + 7);
        if ((v45 & 0x80000000) != 0) {
          *((_DWORD*)v38 + 7) = v45 + 16;
          if (v45 < 0xFFFFFFF1) {
            goto LABEL_44;
          }
        }
        v46 = (*(_QWORD*)v38 + 15LL) & 0xFFFFFFFFFFFFFFF0LL;
        goto LABEL_80;
      case 8LL:
        v51 = *((int*)v38 + 6);
        if ((v51 & 0x80000000) != 0 &&
            (*((_DWORD*)v38 + 6) = v51 + 8, (unsigned int)v51 <= 0xFFFFFFF8)) {
          if ((nn_util_MessagePackWriter_WriteUnsignedInteger64_plt(
                   (__int64)&v67_.v67,
                   *(_QWORD*)(*((_QWORD*)v38 + 1) + v51) & 0x7FFFFFFFFFLL) &
               1) != 0) {
            goto LABEL_43;
          }
        }
        else {
          v58 = *(__int64**)v38;
          *(_QWORD*)v38 += 8LL;
          if ((nn_util_MessagePackWriter_WriteUnsignedInteger64_plt(
                   (__int64)&v67_.v67, *v58 & 0x7FFFFFFFFFLL) &
               1) != 0) {
            goto LABEL_43;
          }
        }
        goto LABEL_44;
      case 9LL:
        v43 = *((int*)v38 + 6);
        if ((v43 & 0x80000000) != 0 &&
            (*((_DWORD*)v38 + 6) = v43 + 8, (unsigned int)v43 <= 0xFFFFFFF8)) {
          v44 = *(_QWORD*)(*((_QWORD*)v38 + 1) + v43);
          if (v44 == 0) {
            goto LABEL_44;
          }
        }
        else {
          v52 = *(__int64**)v38;
          *(_QWORD*)v38 += 8LL;
          v44 = *v52;
          if (*v52 == 0) {
            goto LABEL_44;
          }
        }
        if (nn_util_MessagePackWriter_GetRemainSize_plt((__int64)&v67_.v67) ==
            0) {
          goto LABEL_44;
        }
        v53 = nn_util_MessagePackWriter_GetRemainSize_plt((__int64)&v67_.v67),
        result = COERCE_AS(__typeof__(result),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        if (v53 >= 0x21) {
          if (v53 >= 0x102) {
            if (v53 >= 0x10003) {
              if (v53 == 65539) {
                v61 = -4;
              }
              else {
                v61 = -5;
              }
              v54 = v61 + v53;
              if (v61 + (_DWORD)v53 == 0) {
              LABEL_110:
                LODWORD(v59) = 0;
                goto LABEL_111;
              }
            }
            else {
              v54 = v53 - 3;
            }
          }
          else {
            v54 = v53 - 2;
          }
        }
        else {
          v54 = v53 - 1;
          if ((_DWORD)v53 == 1) {
            goto LABEL_110;
          }
        }
        v59 = 0;
        v60 = v54;
        while (*(_BYTE*)(v44 + v59) != 0) {
          --v60;
          ++v59;
          if (v60 == 0) {
            goto LABEL_113;
          }
        }
      LABEL_111:
        v62 = (int)v59 <= v54;
        v54 = v59;
        if (v62) {
        LABEL_113:
          if (*(_BYTE*)(v44 + v54) == 0 &&
              (nn_util_MessagePackWriter_WriteString_plt(&v67_.v67, v44) & 1) !=
                  0) {
          LABEL_43:
            LODWORD(v67_.v68) = v67_.v68 + 1;
          }
        }
      LABEL_44:
        v26 = (*v2)[++v36];
        if ((*v2)[v36] != 0) {
          continue;
        }
        goto LABEL_116;
      case 10LL:
        v50 = *((_DWORD*)v38 + 6);
        if ((v50 & 0x80000000) != 0) {
          *((_DWORD*)v38 + 6) = v50 + 16;
          if (v50 < 0xFFFFFFF1) {
            goto LABEL_44;
          }
        }
        v46 = *(_QWORD*)v38;
      LABEL_80:
        *(_QWORD*)v38 = v46 + 16;
        goto LABEL_44;
      default:
        nn_detail_UnexpectedDefaultImpl_plt_857150(),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        return result;
      }
    }
  }
LABEL_116:
  v63 = v65_.v66;
  v65_.v66 = 0;
  result =
      nn_util_MessagePackWriter_WriteArray16_plt((__int64)&v67_.v67, v67_.v68);
  if ((int)v67_.v68 >= 3) {
    return v3(v69, v63);
  }
  return result;
}

#pragma GCC visibility pop
