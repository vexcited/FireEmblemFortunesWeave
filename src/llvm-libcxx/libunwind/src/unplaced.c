#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* SdkRoutine_851910(__int64, __int64*, _QWORD*, __int64);
_QWORD* SdkRoutine_851fc0(unsigned __int64, __int64, __int64*, _QWORD*);
__int64 SdkRoutine_850e80(__int64, _QWORD*, __int64, __int64, int, __int64);
__int64 SdkRoutine_8527c0(__int64, unsigned __int64, __int64*, unsigned int);
__int64 SdkRoutine_852ab0(__int64, unsigned __int8*, unsigned __int8*, __int64);
__int64 memcpy_plt(__int64, __int64, unsigned __int64);
__int64 memset_plt(__int64, int, unsigned __int64);
__int64 nn_os_LockMutex_plt(__int64);
__int64 nn_os_UnlockMutex_plt(__int64);
__int64 nn_ro_detail_GetExceptionInfo_plt(__int64, unsigned __int64);
const char* SdkRoutine_84fcc0(__int64, unsigned int*, _QWORD*, __int64, char);
extern _UNKNOWN* SdkData_ea94e0;
extern _UNKNOWN* SdkData_ea94e8;
extern _UNKNOWN SdkData_ea94c0;
void __attribute__((noreturn)) SdkRoutine_aeb60(__int64, ...);
__int64 llvm_libcxx_libunwind_src_8507a0(__int64 a1, char a2);
__int64 llvm_libcxx_libunwind_src_850980(__int64 a1, __int64 a2,
                                         unsigned int* a3, __int64 a4,
                                         __int64* a5, _BYTE* a6, char a7);

__int64 llvm_libcxx_libunwind_src_8507a0(__int64 a1, char a2)
{
  __int64 result;
  __int64 v5;
  unsigned __int64 v6;
  _QWORD* i;
  unsigned int* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD v12[7];
  _QWORD v13[6];
  __int64 v14[6];
  struct {
    _QWORD v15[2];
    __int64 v16;
    unsigned __int8* v17;
  } v15_;

  result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a1 + 24LL))(
      a1, 0xFFFFFFFFLL);
  if (result == 0) {
  LABEL_16:
    *(_BYTE*)(a1 + 616) = 1;
    return result;
  }
  v5 = *(_QWORD*)(a1 + 8);
  v6 = result - (a2 & 1) + *(unsigned __int8*)(a1 + 617);
  if ((nn_ro_detail_GetExceptionInfo_plt((__int64)v15_.v15, v6) & 1) == 0 ||
      v15_.v16 == 0 ||
      (v14[4] = v15_.v15[0] + v15_.v16, v14[5] = (__int64)v15_.v17,
       SdkRoutine_852ab0(v5, (unsigned __int8*)(v15_.v15[0] + v15_.v16),
                         v15_.v17, (__int64)v12),
       v14[2] = v12[0], v12[0] == 0) ||
      ((result = SdkRoutine_8527c0(a1, v6, v14, 0)) & 1) == 0) {
    nn_os_LockMutex_plt((__int64)&SdkData_ea94c0);
    for (i = SdkData_ea94e0;; i += 4) {
      if (i >= (_QWORD*)SdkData_ea94e8) {
        result = nn_os_UnlockMutex_plt((__int64)&SdkData_ea94c0);
        goto LABEL_16;
      }
      if (i[1] <= v6 && v6 < i[2]) {
        break;
      }
    }
    v8 = (unsigned int*)i[3];
    result = nn_os_UnlockMutex_plt((__int64)&SdkData_ea94c0);
    if (v8 != nullptr) {
      result = (__int64)SdkRoutine_84fcc0(*(_QWORD*)(a1 + 8), v8, v13,
                                          (__int64)v12, 0);
      if (result == 0) {
        memset_plt((__int64)v15_.v15, 0, 0x620u);
        result = SdkRoutine_850e80(*(_QWORD*)(a1 + 8), v13, (__int64)v12, v6, 4,
                                   (__int64)v15_.v15);
        if ((result & 1) != 0) {
          v9 = v13[3];
          v10 = v13[4];
          *(_QWORD*)(a1 + 584) = 0;
          *(_QWORD*)(a1 + 608) = 0;
          *(_QWORD*)(a1 + 544) = v9;
          v11 = v13[5];
          *(_QWORD*)(a1 + 552) = v10;
          *(_QWORD*)(a1 + 560) = v11;
          *(_QWORD*)(a1 + 568) = v12[4];
          *(_QWORD*)(a1 + 576) = (unsigned int)v15_.v16;
          *(_DWORD*)(a1 + 592) = 50331648;
          LODWORD(v10) = v13[1];
          *(_QWORD*)(a1 + 600) = v13[0];
          *(_DWORD*)(a1 + 596) = v10;
          return result;
        }
      }
    }
    goto LABEL_16;
  }
  return result;
}

__int64 llvm_libcxx_libunwind_src_850980(__int64 a1, __int64 a2,
                                         unsigned int* a3, __int64 a4,
                                         __int64* a5, _BYTE* a6, char a7)
{

#pragma clang fp contract(off)
  __int64* v13;
  char* v14;
  char* i;
  unsigned __int64 v16;
  char* v17;
  __int64* v18;
  __int64 v19;
  int v20;
  __int64* v21;
  char* v22;
  __int64 v23[34];
  _BYTE v24[256];
  struct {
    _QWORD v25[31];
    char* v26;
    char* v27;
    _QWORD* v28;
  } v25_;
  _BYTE v29[256];
  struct {
    _DWORD v30[2];
    unsigned __int64 v31;
  } v30_;
  struct {
    __int64 v32;
    char gap1120_[536];
    __int64 v33;
    __int64 v34;
  } v32_;
  struct {
    _BYTE v35[50];
    unsigned __int8 v36;
    char gap2707_[1];
    char v37;
  } v35_;
  _QWORD v38[6];
  _QWORD v39[3];

  if (SdkRoutine_84fcc0(a1, a3, v38, (__int64)v35_.v35, 0) != nullptr) {
    return 4294960750LL;
  }
  memset_plt((__int64)v30_.v30, 0, 0x620u);
  if ((SdkRoutine_850e80(a1, v38, (__int64)v35_.v35, a2, 4, (__int64)v30_.v30) &
       1) == 0) {
    return 4294960750LL;
  }
  if ((signed __int32)v30_.v30[0] > 29) {
    if ((signed __int32)v30_.v30[0] > 31) {
      if (v30_.v30[0] == 34) {
        v13 = a5 + 33;
        goto LABEL_23;
      }
      if (v30_.v30[0] != 32) {
      LABEL_21:
        if (v30_.v30[0] > 0x1Cu) {
        LABEL_71:
          SdkRoutine_aeb60(
              (__int64)"libunwind: %s %s:%d - %s\n", "getRegister",
              "D:/bb/ntd/ryn-flt-lto/llvm-project/libunwind/src\\Registers.hpp",
              2009, "unsupported arm64 register");
        }
        v13 = &a5[v30_.v30[0]];
        goto LABEL_23;
      }
      goto LABEL_17;
    }
    if (v30_.v30[0] == 30) {
      v13 = a5 + 30;
      goto LABEL_23;
    }
    goto LABEL_11;
  }
  if ((v30_.v30[0] & 0x80000000) != 0) {
    if (v30_.v30[0] != -2) {
      if (v30_.v30[0] != -1) {
        goto LABEL_21;
      }
    LABEL_17:
      v13 = a5 + 32;
      goto LABEL_23;
    }
  LABEL_11:
    v13 = a5 + 31;
    goto LABEL_23;
  }
  if (v30_.v30[0] == 0) {
    v14 = (char*)SdkRoutine_851fc0(v30_.v31, a1, a5, nullptr);
    goto LABEL_24;
  }
  if (v30_.v30[0] != 29) {
    goto LABEL_21;
  }
  v13 = a5 + 29;
LABEL_23:
  v14 = (char*)(*v13 + v30_.v30[1]);
LABEL_24:
  if ((a7 & 1) != 0 && (v35_.v37 & 1) != 0) {
    for (i = (char*)(a5[31] & 0xFFFFFFFFFFFFFFF0LL); i < v14; i += 16) {
      __arm_mte_set_tag(i);
    }
  }
  memcpy_plt((__int64)v25_.v25, (__int64)a5, 0x110u);
  memcpy_plt((__int64)v29, (__int64)(a5 + 34), 0x100u);
  v16 = 0;
  v17 = nullptr;
  v25_.v26 = v14;
  v18 = &v32_.v32;
  do {
    v20 = *(_DWORD*)v18;
    if (*(_DWORD*)v18 == 0) {
      if (v16 != v35_.v36) {
        goto LABEL_31;
      }
      if (v35_.v36 <= 0x1Eu) {
        v21 = a5 + 29;
        if (v35_.v36 != 29) {
          v21 = a5 + 30;
          if (v35_.v36 != 30) {
            goto LABEL_58;
          }
        }
      }
      else {
        v21 = a5 + 33;
        if (v35_.v36 != 34) {
          v21 = a5 + 32;
          if (v35_.v36 != 32) {
            v21 = a5 + 31;
            if (v35_.v36 != 31) {
            LABEL_58:
              if (v35_.v36 > 0x1Cu) {
                goto LABEL_71;
              }
              v21 = &a5[v35_.v36];
            }
          }
        }
      }
      v17 = (char*)*v21;
      goto LABEL_31;
    }
    if ((v16 & 0x60) == 0x40) {
      if (v20 > 4) {
        if (v20 == 5) {
          v19 = *(__int64*)((char*)a5 +
                            (((v18[1] << 32) - 0x4000000000LL) >> 29) + 272);
        }
        else {
          if (v20 != 6) {
          LABEL_70:
            SdkRoutine_aeb60(
                (__int64)"libunwind: %s %s:%d - %s\n", "getSavedFloatRegister",
                "D:/bb/ntd/ryn-flt-lto/llvm-project/libunwind/"
                "src\\DwarfInstructions.hpp",
                153, "unsupported restore location for float register");
          }
          v19 = *SdkRoutine_851fc0(v18[1], a1, a5, v14);
        }
      }
      else {
        v19 = 0;
        if (v20 != 1) {
          if (v20 != 2) {
            goto LABEL_70;
          }
          v19 = *(_QWORD*)&v14[v18[1]];
        }
      }
      *(_QWORD*)&v24[8 * v16 + 16] = v19;
    }
    else if (v16 == v35_.v36) {
      v17 = (char*)SdkRoutine_851910(a1, a5, v14, (__int64)v18);
    }
    else if (v16 == 34) {
      v25_.v28 = SdkRoutine_851910(a1, a5, v14, (__int64)v18);
    }
    else {
      if (v16 > 0x20) {
        return 4294960754LL;
      }
      v22 = (char*)SdkRoutine_851910(a1, a5, v14, (__int64)v18);
      if ((int)v16 > 30) {
        if ((_DWORD)v16 == 31) {
          v25_.v26 = v22;
        }
        else {
          v25_.v27 = v22;
        }
      }
      else if ((_DWORD)v16 == 29) {
        v25_.v25[29] = v22;
      }
      else if ((_DWORD)v16 == 30) {
        v25_.v25[30] = v22;
      }
      else {
        v25_.v25[v16] = v22;
      }
    }
  LABEL_31:
    ++v16;
    v18 += 2;
  } while (v16 != 96);
  *a6 = v35_.v35[48];
  memcpy_plt((__int64)v23, (__int64)a5, 0x110u);
  memcpy_plt((__int64)v24, (__int64)(a5 + 34), 0x100u);
  v39[0] = v32_.v33;
  v39[1] = v32_.v34;
  if ((_DWORD)v32_.v33 != 0) {
    SdkRoutine_851910(a1, v23, v14, (__int64)v39);
  }
  v25_.v27 = v17;
  memcpy_plt((__int64)a5, (__int64)v25_.v25, 0x110u);
  memcpy_plt((__int64)(a5 + 34), (__int64)v29, 0x100u);
  return 1;
}

#pragma GCC visibility pop
