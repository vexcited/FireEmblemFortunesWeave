#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* SdkRoutine_1a5510(_QWORD* result, __int64);
__int64 SdkRoutine_169700(void);
__int64 SdkRoutine_1a5438(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_1a5588(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_1a5590(_QWORD);
__int64 SdkRoutine_1a55d0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_85dee0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_85def0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 __cxa_guard_acquire_plt(_QWORD);
__int64 __cxa_guard_release_plt(_QWORD);
__int64 fw_rtld_RegisterCrtDestructor();
__int64 multi_wait_168280(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD, _QWORD, _DWORD);
__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_os_LinkMultiWaitHolder_plt(_QWORD, _QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 nn_os_SetMultiWaitHolderUserData_plt(_QWORD, _QWORD);
__int64 nn_os_SignalEvent_plt(_QWORD);
extern _UNKNOWN SdkData_eb51f8;
extern _UNKNOWN SdkData_eb5228;
extern _UNKNOWN SdkData_eb7648;
extern _UNKNOWN nn_os_detail_g_ThreadLocalAllocator;
extern __int64 SdkData_e86f70;
extern int SdkData_eb51c0;
extern int SdkData_eb7660;
extern void (*SdkData_e86ef0[281])();
void SdkRoutine_1a5380(__int64, _DWORD*);
__int64 nn_os_166450(_QWORD* a1, unsigned int a2, __int64 a3);
__int64 nn_os_RegisterSystemWorkerHandler(__int64 a1, __int64 a2);
_DWORD* nn_os_16cb60(_DWORD* result);
__int64 nn_os_16d870(__int64* a1, unsigned int a2, unsigned __int64 a3,
                     unsigned int a4);
__int64 nn_os_16db80(__int64* a1, unsigned int a2, unsigned __int64 a3,
                     unsigned int a4);
__int64 nn_os_16dd70(unsigned int a1);
__int64 nn_os_16de50(__int64 a1, _DWORD* a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, unsigned int a7);
unsigned __int64 nn_os_170d3c(__int64 a1, unsigned __int64 a2, __int64 a3,
                              unsigned __int64 a4);

__int64 nn_os_166450(_QWORD* a1, unsigned int a2, __int64 a3)
{
  __int64 result;
  __int64 v5;
  int v6;
  _BYTE v7[256];

  v5 = 0;
  v6 = 0;
  result = multi_wait_168280(a3 + 8, &v5, &v6, 1, 0x7FFFFFFFFFFFFFFFLL, a2, v7,
                             64, 0);
  *a1 = v5;
  return result;
}

__int64 nn_os_RegisterSystemWorkerHandler(__int64 a1, __int64 a2)
{
  if ((atomic_load_explicit(
           (atomic_uchar* volatile)&nn_os_detail_g_ThreadLocalAllocator,
           memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(
          &nn_os_detail_g_ThreadLocalAllocator) != 0) {
    SdkRoutine_169700();
    fw_rtld_RegisterCrtDestructor();
    __cxa_guard_release_plt(&nn_os_detail_g_ThreadLocalAllocator);
  }
  nn_os_SdkMutexType_Lock_plt(&SdkData_eb51c0);
  nn_os_SetMultiWaitHolderUserData_plt(a1, a2);
  nn_os_LinkMultiWaitHolder_plt(&SdkData_eb51f8, a1);
  nn_os_SignalEvent_plt(&SdkData_eb5228);
  return nn_os_SdkMutexType_Unlock_plt(&SdkData_eb51c0);
}

_DWORD* nn_os_16cb60(_DWORD* result)
{
  *result = 0;
  return result;
}

__int64 nn_os_16d870(__int64* a1, unsigned int a2, unsigned __int64 a3,
                     unsigned int a4)
{
  __int64 v4;
  __int64 v9;
  void(__attribute__((noreturn)) * v10)();
  __int64 result;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  int v17;
  int v18;
  __int64 v19;
  __int64 v20;
  int v21;
  int v22;
  int v23;
  int v24;
  __int64 v25;
  __int64 v26;
  int v27;
  int v28;
  struct {
    char gap8_[4];
    int v29;
    __int64 v30;
  } v29_;

  v29_.v30 = v4;
  if (a4 > 3) {
    nn_diag_detail_AbortImpl_plt_856170(a1);
  }
  v9 = a2;
  v10 = SdkData_e86ef0[0];
  if (a3 >= 0x200000) {
    v18 = 64;
    v19 = SdkData_e86f70;
    while (1) {
      v20 = SdkRoutine_85dee0((char*)v10 + 88, a3, 0x200000, 0, v19);
      if (v20 == 0) {
        v20 = SdkRoutine_85dee0((char*)v10 + 88, a3, 0x10000, 0, v19);
        if (v20 == 0) {
          v20 = SdkRoutine_85dee0((char*)v10 + 88, a3, 4096, 0, v19);
          if (v20 == 0) {
            return 259075;
          }
        }
      }
      v15 = v20;
      v21 = SdkRoutine_1a5588(v9, v20, a3, a4);
      if (v21 == 0) {
      LABEL_26:
        if ((SdkRoutine_85def0((char*)v10 + 88, v15, a3, 0x4000) & 1) == 0) {
          v28 = SdkRoutine_1a5438(v9, v15, a3);
          if (v28 != 0) {
            nn_diag_detail_AbortImpl_plt_858db0(&v28);
          }
          v15 = 0;
        }
        result = 0;
        *a1 = v15;
        return result;
      }
      v22 = v21;
      v23 = v21 & 0x3FFFFF;
      result = 259075;
      if (v23 != 54273) {
        break;
      }
      if (--v18 == 0) {
        return result;
      }
    }
  LABEL_31:
    if (v23 == 51713) {
      return 258051;
    }
    if (v23 != 58369) {
      if (v23 == 64001) {
        return 257539;
      }
    LABEL_38:
      v29_.v29 = v22;
      nn_diag_detail_AbortImpl_plt_858db0(&v29_.v29);
    }
    return 256515;
  }
  if (a3 >= 0x10000) {
    v24 = 64;
    v25 = SdkData_e86f70;
    while (1) {
      v26 = SdkRoutine_85dee0((char*)v10 + 88, a3, 0x10000, 0, v25);
      if (v26 == 0) {
        v26 = SdkRoutine_85dee0((char*)v10 + 88, a3, 4096, 0, v25);
        if (v26 == 0) {
          return 259075;
        }
      }
      v15 = v26;
      v27 = SdkRoutine_1a5588(v9, v26, a3, a4);
      if (v27 == 0) {
        goto LABEL_26;
      }
      v22 = v27;
      v23 = v27 & 0x3FFFFF;
      result = 259075;
      if (v23 != 54273) {
        goto LABEL_31;
      }
      if (--v24 == 0) {
        return result;
      }
    }
  }
  result = 259075;
  if (a3 < 0x1000) {
    return result;
  }
  v12 = 64;
  v13 = SdkData_e86f70;
  while (1) {
    v14 = SdkRoutine_85dee0((char*)v10 + 88, a3, 4096, 0, v13);
    if (v14 == 0) {
      return 259075;
    }
    v15 = v14;
    v16 = SdkRoutine_1a5588(v9, v14, a3, a4);
    if (v16 == 0) {
      goto LABEL_26;
    }
    v17 = v16 & 0x3FFFFF;
    if ((v16 & 0x3FFFFF) != 0xD401) {
      break;
    }
    if (--v12 == 0) {
      return 259075;
    }
  }
  if (v17 == 51713) {
    return 258051;
  }
  if (v17 == 58369) {
    return 256515;
  }
  v22 = v16;
  result = 257539;
  if (v17 != 64001) {
    goto LABEL_38;
  }
  return result;
}

__int64 nn_os_16db80(__int64* a1, unsigned int a2, unsigned __int64 a3,
                     unsigned int a4)
{
  __int64 v4;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  void(__attribute__((noreturn)) * v13)();
  __int64 v14;
  unsigned int v15;
  void(__attribute__((noreturn)) * v16)();
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned int v20;
  int v21;
  unsigned int v23;
  __int64 v24;
  struct {
    char gap40_[4];
    unsigned int v25;
    __int64 v26;
  } v25_;

  v25_.v26 = v4;
  if (a4 >= 4) {
    nn_diag_detail_AbortImpl_plt_856170(a1);
  }
  if (a3 >> 21 != 0) {
    v9 = 0x200000;
  }
  else if (a3 >> 16 != 0) {
    v9 = 0x10000;
  }
  else {
    if (a3 <= 0xFFF) {
      nn_diag_detail_AbortImpl_plt_856170(a1);
    }
    v9 = 4096;
  }
  v10 = a2;
  v24 = 0;
  v25_.v25 = (unsigned int)SdkRoutine_1a5510(&v24, 34);
  if (v25_.v25 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v25_.v25);
  }
  v23 = a4;
  v11 = v24;
  v12 = 64;
  v13 = SdkData_e86ef0[0];
  v14 = SdkData_e86f70;
  v15 = 259075;
  do {
    v16 = v13;
    v17 = v14;
    v18 = SdkRoutine_85dee0((char*)v13 + 88, a3, v9, v11 & (v9 - 1), v14);
    if (v18 == 0) {
      break;
    }
    v19 = v18;
    v20 = SdkRoutine_1a5588(v10, v18, a3, v23);
    if (v20 == 0) {
      if ((SdkRoutine_85def0((char*)v16 + 88, v19, a3, 0x4000) & 1) == 0) {
        v25_.v25 = SdkRoutine_1a5438(v10, v19, a3);
        if (v25_.v25 != 0) {
          nn_diag_detail_AbortImpl_plt_858db0(&v25_.v25);
        }
        v19 = 0;
      }
      v15 = 0;
      *a1 = v19;
      return v15;
    }
    v21 = v20 & 0x3FFFFF;
    if ((v20 & 0x3FFFFF) != 0xD401) {
      if (v21 == 51713) {
        return 258051;
      }
      else if (v21 == 58369) {
        return 256515;
      }
      else {
        v15 = 257539;
        if (v21 != 64001) {
          v25_.v25 = v20;
          nn_diag_detail_AbortImpl_plt_858db0(&v25_.v25);
        }
      }
      return v15;
    }
    --v12;
    v14 = v17;
    v13 = v16;
  } while (v12 != 0);
  return v15;
}

__int64 nn_os_16dd70(unsigned int a1)
{
  __int64 result;
  int v2;

  result = SdkRoutine_1a5590(a1);
  v2 = result;
  if ((_DWORD)result != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v2);
    __udf(0);
  }
  return result;
}

__int64 nn_os_16de50(__int64 a1, _DWORD* a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, unsigned int a7)
{
  int v8;
  __int64 result;
  int v10;
  int v11;
  int v12;

  v12 = 0;
  v8 = SdkRoutine_1a55d0(&v12, a4, a3, a7, a6);
  result = 0;
  if (v8 == 0) {
    goto LABEL_2;
  }
  v10 = v8 & 0x3FFFFF;
  if ((v8 & 0x3FFFFFu) > 0xF600) {
    result = 261123;
    if (v10 == 62977) {
      if (v12 != -1) {
      LABEL_2:
        *a2 = v12;
        return result;
      }
      *a2 = -3;
      return 261635;
    }
    else {
      if (v10 != 132097) {
        goto LABEL_13;
      }
      *a2 = v12;
      return 262147;
    }
  }
  else {
    if (v10 != 59905) {
      if (v10 == 60417) {
        *a2 = -2;
        return 0;
      }
    LABEL_13:
      v11 = v8;
      nn_diag_detail_AbortImpl_plt_858db0(&v11);
      __udf(0);
    }
    *a2 = -1;
    return 0;
  }
}

unsigned __int64 nn_os_170d3c(__int64 a1, unsigned __int64 a2, __int64 a3,
                              unsigned __int64 a4)
{
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  int v9;
  int v10;
  _DWORD v12[4];

  v5 = a3;
  v6 = *(_QWORD*)(a1 + 80);
  v7 = v6 - 832;
  if (a2 == 1) {
    v6 -= 832;
    a2 = v7;
  }
  if (a3 == 0) {
    v5 = v6;
  }
  if (a2 == 0) {
    v8 = v5 - 832;
    a2 = v8;
    if (a3 != 0 && v8 <= a4) {
      return 0;
    }
  }
  SdkRoutine_1a5380((__int64)&SdkData_eb7648, v12);
  if (v9 != 0) {
    return 0;
  }
  if (SdkData_eb7660 != 3) {
    return 0;
  }
  SdkRoutine_1a5380((__int64)&SdkData_eb7648, v12);
  if (v10 != 0 || SdkData_eb7660 != 3) {
    return 0;
  }
  else {
    return a2;
  }
}

#pragma GCC visibility pop
