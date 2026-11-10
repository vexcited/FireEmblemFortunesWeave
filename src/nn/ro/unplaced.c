#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* SdkRoutine_1a5510(_QWORD* result, __int64);
__int64 SdkRoutine_1743a0(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_1743a0_alt1(
    __int64, __int64,
    __int64 (***)(_QWORD, __int64, __int64)) __asm__("SdkRoutine_1743a0");
__int64 SdkRoutine_177220(_QWORD);
__int64 SdkRoutine_1a5360(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_1a5368(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_85e090(_QWORD, _QWORD, _QWORD);
__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_os_AcquireWriteLock_plt(_QWORD);
__int64 nn_os_LockMutex_plt(_QWORD);
__int64 nn_os_ReleaseWriteLock_plt(_QWORD);
__int64 nn_os_UnlockMutex_plt(_QWORD);
atomic_uint* SdkRoutine_16cc80(atomic_uint* result);
extern _UNKNOWN* nn_ro_detail_g_RegistrationList;
extern _UNKNOWN** nn_ro_detail_g_RegistrationList_ptr;
extern _UNKNOWN SdkData_ea1a98;
extern _UNKNOWN SdkData_eb80a0;
extern __int64 (*SdkData_e522e0[])();
extern __int64 (*SdkData_e52360[])();
extern __int64 SdkData_e86f98;
extern __int64 SdkData_eb8098;
extern void (*SdkData_e86fb0[257])();
extern void (*SdkData_e86fd8[252])();
unsigned __int8* nn_os_16cce0(__int64);
void SdkRoutine_1a5380(__int64, _DWORD*);
__int64 nn_ro_Finalize(void* this_);
__int64 nn_ro_RegisterModuleInfo_174370(__int64 a1, __int64 a2);
__int64 nn_ro_RegisterModuleInfo_174530(__int64 a1, __int64 a2, int a3);
__int64 nn_ro_detail_FindModuleHeader(_QWORD* a1, __int64 a2, int* a3);
char* nn_ro_ProtectRelro(char* this_, char* a2, unsigned __int64 a3, _QWORD* a4,
                         const void* a5, const void* a6);
__int64 nn_ro_detail_GetExceptionInfo(__int64* a1, unsigned __int64 a2);

__int64 nn_ro_Finalize(void* this_)
{
  __int64 v1;
  void(__attribute__((noreturn)) * v2)();
  __int64* v3;
  atomic_uint* v4;
  __int64 v5;
  void (*v6)(__int64);
  __int64* v7;
  __int64* v8;
  __int64 v9;
  __int64* v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v16;
  int v17;

  nn_os_AcquireWriteLock_plt(&SdkData_eb80a0);
  v1 = nn_os_LockMutex_plt(&SdkData_ea1a98);
  v2 = SdkData_e86fb0[0];
  v3 = *(__int64**)SdkData_e86fb0[0];
  if (*(_QWORD*)(*(_QWORD*)SdkData_e86fb0[0] + 8LL) !=
      *(_QWORD*)SdkData_e86fb0[0]) {
    v4 = (atomic_uint*)SdkData_e86f98;
    do {
      v5 = *v3;
      v6 = *(void (**)(__int64))(*v3 + 72);
      if (v6 != nullptr) {
        v6(v1);
      }
      SdkRoutine_16cc80(v4);
      v7 = **(__int64***)v2;
      v8 = (__int64*)v7[1];
      v9 = *v8;
      *(_QWORD*)(*v7 + 8) = v8;
      *v8 = *v7;
      *(_QWORD*)(v9 + 8) = v7;
      *v7 = v9;
      nn_os_16cce0((__int64)v4);
      v1 = (*(__int64 (**)(__int64, _QWORD, _QWORD))(
          *(_QWORD*)SdkData_eb8098 + 40LL))(SdkData_eb8098, 0,
                                            *(_QWORD*)(v5 + 40));
      v17 = v1;
      if ((_DWORD)v1 != 0) {
        nn_diag_detail_AbortImpl_plt_858db0(&v17);
      }
      v3 = *(__int64**)v2;
    } while (*(_QWORD*)(*(_QWORD*)v2 + 8LL) != *(_QWORD*)v2);
  }
  while (nn_ro_detail_g_RegistrationList_ptr !=
         &nn_ro_detail_g_RegistrationList) {
    v10 = (__int64*)nn_ro_detail_g_RegistrationList;
    v11 = *((__int64**)nn_ro_detail_g_RegistrationList + 1);
    v12 = *v11;
    *(__int64*)((char*)((__int64*)0x4LL) +
                *(_QWORD*)nn_ro_detail_g_RegistrationList + 4) = (__int64)v11;
    *v11 = *v10;
    *(__int64*)((char*)((__int64*)0x4LL) + v12 + 4) = (__int64)v10;
    *v10 = v12;
    v16 = (*(__int64 (**)(__int64, _QWORD, _QWORD))(
        *(_QWORD*)SdkData_eb8098 + 56LL))(SdkData_eb8098, 0, *(v10 - 1));
    if (v16 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v16);
    }
  }
  v13 = SdkData_eb8098;
  SdkData_eb8098 = 0;
  if (v13 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 8LL))(v13);
    v14 = SdkData_eb8098;
    SdkData_eb8098 = 0;
    if (v14 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v14 + 8LL))(v14);
    }
  }
  nn_os_UnlockMutex_plt(&SdkData_ea1a98);
  return nn_os_ReleaseWriteLock_plt(&SdkData_eb80a0);
}

__int64 nn_ro_RegisterModuleInfo_174370(__int64 a1, __int64 a2)
{
  __int64 (**v3)();

  v3 = SdkData_e522e0;
  return SdkRoutine_1743a0(a1, a2, &v3);
}

__int64 nn_ro_RegisterModuleInfo_174530(__int64 a1, __int64 a2, int a3)
{
  __int64 (**v4[2])(_QWORD, __int64, __int64);
  int v5;

  v5 = a3;
  v4[0] = (__int64 (**)(_QWORD, __int64, __int64))SdkData_e52360;
  v4[1] = (__int64 (**)(_QWORD, __int64, __int64))&v5;
  return SdkRoutine_1743a0_alt1(a1, a2, v4);
}

__int64 nn_ro_detail_FindModuleHeader(_QWORD* a1, __int64 a2, int* a3)
{
  int v6;
  bool v8;
  int v9;
  _BOOL4 v11;
  int v13;
  _DWORD* v14;
  int v15;
  bool v16;
  int v17;
  int v18;
  int v19;
  int* v20;
  _BOOL4 v21;
  char v22;
  int* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;

  *a1 = 0;
  *(_QWORD*)a2 = 0;
  *(_QWORD*)(a2 + 8) = 0;
  v26 = 0;
  v27 = 0;
  v24 = 0;
  v25 = 0;
  v23 = nullptr;
  v28 = 0;
  SdkRoutine_1a5380((__int64)&v23, &v28);
  if (v6 != 0) {
    return 0;
  }
  v8 = (_DWORD)v25 == 8 || (_DWORD)v25 == 3;
  if (!v8 || v23 != a3 || (_DWORD)v26 != 1 && (v26 & 4) == 0) {
    return 0;
  }
  if ((v26 & 1) == 0) {
    while (1) {
      a3 = (int*)((char*)v23 + v24);
      SdkRoutine_1a5380((__int64)&v23, &v28);
      if (v9 != 0) {
        return 0;
      }
      if ((v26 & 4) == 0) {
        v11 = (_DWORD)v25 == 3 || (_DWORD)v25 == 8;
        if ((_DWORD)v26 == 1 && v11) {
          v13 = SdkRoutine_177220(a3);
          v14 = (int*)((char*)a3 + (unsigned int)a3[1]);
          goto LABEL_30;
        }
        return 0;
      }
    }
  }
  v15 = *a3;
  v16 = true;
  v13 = 0;
  v14 = (int*)((char*)a3 + (unsigned int)a3[1]);
  if (*a3 == -369098752 || v15 == 0 || v15 == 335544322) {
    v17 = 0;
    v18 = 0;
    v19 = 0;
  }
  else {
    v13 = 1;
  LABEL_30:
    v20 = (int*)((char*)a3 + (unsigned int)a3[2]);
    if (v20 != nullptr) {
      v17 = *v20;
      v18 = v20[1];
      v19 = v20[2];
      v16 = ((unsigned __int8)v20 & 3) == 0;
    }
    else {
      v17 = 0;
      v18 = 0;
      v19 = 0;
      v16 = true;
    }
  }
  v21 = v13 != 1;
  if (v17 > 18) {
    v21 = true;
  }
  if (v13 == 0) {
    v21 = false;
  }
  if ((unsigned int)v17 >= 0x12) {
    v22 = !v16;
    if (((unsigned __int8)v14 & 3) != 0) {
      v22 = 1;
    }
    if ((v22 & 1) != 0) {
      return 0;
    }
  }
  if (*v14 != 809783117) {
    return 0;
  }
  *a1 = v14;
  *(_DWORD*)a2 = v17;
  *(_DWORD*)(a2 + 4) = v18;
  *(_DWORD*)(a2 + 8) = v19;
  *(_DWORD*)(a2 + 12) = v21;
  return 1;
}

char* nn_ro_ProtectRelro(char* this_, char* a2, unsigned __int64 a3, _QWORD* a4,
                         const void* a5, const void* a6)
{
  char* v8;
  char* v10;
  signed __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  int v15;
  __int64 v16;

  if (a4[4] != 0) {
    return this_;
  }
  v8 = this_;
  v16 = 0;
  this_ = (char*)SdkRoutine_1a5510(&v16, 33);
  v15 = (int)this_;
  if ((_DWORD)this_ != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v15);
  }
  if (((v16 - 1) & a4[5]) != 0) {
    nn_diag_detail_AbortImpl_plt_856170(this_);
  }
  if (((v16 - 1) & a3) != 0) {
    nn_diag_detail_AbortImpl_plt_856170(this_);
  }
  if ((*((_BYTE*)a4 + 195) & 4) != 0) {
    v10 = (char*)a3;
  }
  else {
    v10 = a2;
  }
  if ((*((_BYTE*)a4 + 195) & 0xC) != 8 && v10 != v8) {
    v11 = v10 - v8;
    v15 = SdkRoutine_1a5360(v8, v10 - v8, 1);
    if (v15 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v15);
    }
    this_ = (char*)SdkRoutine_1a5368(v8, v11, 16, 16);
    v15 = (int)this_;
    if ((_DWORD)this_ != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v15);
    }
  }
  v12 = *(_QWORD*)SdkData_e86fd8[0];
  if (*(_QWORD*)SdkData_e86fd8[0] == 0) {
    goto LABEL_18;
  }
  v13 = *(_QWORD*)(v12 + 8);
  if (v13 != v12) {
    v14 = 1;
    do {
      v13 = *(_QWORD*)(v13 + 8);
      --v14;
    } while (v13 != v12);
    LOBYTE(v12) = v14 == 0;
  LABEL_18:
    if ((v12 & 1) != 0) {
      return this_;
    }
  }
  if ((*((_BYTE*)a4 + 195) & 4) == 0) {
    if ((*((_BYTE*)a4 + 195) & 8) != 0) {
      this_ = v8;
    }
    else {
      this_ = a2;
    }
    if ((char*)a3 != this_) {
      this_ = (char*)SdkRoutine_1a5368(this_, a3 - (_QWORD)this_, 16, 16);
      v15 = (int)this_;
      if ((_DWORD)this_ != 0) {
        nn_diag_detail_AbortImpl_plt_858db0(&v15);
      }
    }
  }
  return this_;
}

__int64 nn_ro_detail_GetExceptionInfo(__int64* a1, unsigned __int64 a2)
{
  int v4;
  int v6;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  int v15;
  int v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  int v24;
  struct {
    _QWORD v25[2];
    __int64 v26;
    __int64 v27;
    __int64 v28;
  } v25_;
  int v29;
  int v30;
  struct {
    __int64 v31;
    __int64 v32;
    __int64 v33;
    __int64 v34;
    __int64 v35;
  } v31_;

  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v4 = COERCE_AS(__typeof__(v4),
                 PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v25_.v27 = 0;
  v25_.v28 = 0;
  v25_.v25[1] = 0;
  v25_.v26 = 0;
  v25_.v25[0] = 0;
  v24 = 0;
  SdkRoutine_1a5380((__int64)v25_.v25, &v24),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  LODWORD(v31_.v31) = v4;
  if (v4 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v31_.v31),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v4 = COERCE_AS(__typeof__(v4),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  if ((_DWORD)v25_.v27 != 1 && (v25_.v27 & 4) == 0) {
    return 0;
  }
  v6 = v25_.v26;
  if ((_DWORD)v25_.v26 != 8 && (_DWORD)v25_.v26 != 3) {
    return 0;
  }
  v31_.v34 = 0;
  v31_.v35 = 0;
  v31_.v32 = 0;
  v31_.v33 = 0;
  v31_.v31 = 0;
  v30 = 0;
  SdkRoutine_1a5380((__int64)&v31_.v31, &v30),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v29 = v8;
  if ((_DWORD)v8 != 0) {
  LABEL_45:
    nn_diag_detail_AbortImpl_plt_858db0(&v29),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v4 = COERCE_AS(__typeof__(v4),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  if ((_DWORD)v31_.v33 != v6 || (_DWORD)v31_.v34 != 1 && (v31_.v34 & 4) == 0) {
    nn_diag_detail_AbortImpl_plt_856170(v8),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v4 = COERCE_AS(__typeof__(v4),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  do {
    v9 = v31_.v31;
    if (v31_.v31 - 1 > a2) {
      break;
    }
    SdkRoutine_1a5380((__int64)&v31_.v31, &v30),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v4 = COERCE_AS(__typeof__(v4),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v29 = v10;
    if (v10 != 0) {
      goto LABEL_45;
    }
    if ((_DWORD)v31_.v33 != v6) {
      break;
    }
  } while ((_DWORD)v31_.v34 == 1 || (v31_.v34 & 4) != 0);
  *a1 = v9;
  v31_.v34 = 0;
  v31_.v35 = 0;
  v31_.v32 = 0;
  v31_.v33 = 0;
  v31_.v31 = 0;
  v30 = 0;
  SdkRoutine_1a5380((__int64)&v31_.v31, &v30),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v29 = v12;
  if ((_DWORD)v12 != 0) {
  LABEL_43:
    nn_diag_detail_AbortImpl_plt_858db0(&v29),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v4 = COERCE_AS(__typeof__(v4),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  if ((_DWORD)v31_.v33 != v6) {
    nn_diag_detail_AbortImpl_plt_856170(v12),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v4 = COERCE_AS(__typeof__(v4),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  v13 = v31_.v32 + v31_.v31;
  if (v31_.v32 + v31_.v31 >= a2) {
    v14 = v13 - 1;
    do {
      SdkRoutine_1a5380((__int64)&v31_.v31, &v30),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v15 = COERCE_AS(__typeof__(v15),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v4 = COERCE_AS(__typeof__(v4),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      v29 = v15;
      if (v15 != 0) {
        goto LABEL_43;
      }
      if ((_DWORD)v31_.v33 != v6) {
        break;
      }
      v14 = v31_.v32 + v31_.v31 - 1;
    } while (v31_.v32 + v31_.v31 >= a2);
    v13 = v14 + 1;
  }
  v31_.v34 = 0;
  v31_.v35 = 0;
  v31_.v32 = 0;
  v31_.v33 = 0;
  v31_.v31 = 0;
  if (v6 == 3) {
    v16 = 4;
  }
  else {
    v16 = 9;
  }
  v30 = 0;
  SdkRoutine_1a5380((__int64)&v31_.v31, &v30),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v29 = v17;
  if ((_DWORD)v17 != 0) {
  LABEL_44:
    nn_diag_detail_AbortImpl_plt_858db0(&v29),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v4 = COERCE_AS(__typeof__(v4),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  if ((_DWORD)v31_.v33 != v16) {
    nn_diag_detail_AbortImpl_plt_856170(v17),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v4 = COERCE_AS(__typeof__(v4),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  do {
    v18 = v31_.v32 + v31_.v31 - 1;
    if (v31_.v32 + v31_.v31 < v13) {
      break;
    }
    SdkRoutine_1a5380((__int64)&v31_.v31, &v30),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v4 = COERCE_AS(__typeof__(v4),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v29 = v19;
    if (v19 != 0) {
      goto LABEL_44;
    }
  } while ((_DWORD)v31_.v33 == v16);
  v20 = *a1;
  v25_.v25[0] = 0;
  v31_.v31 = 0;
  v31_.v32 = 0;
  a1[1] = v18 - v9 + 1;
  v21 = SdkRoutine_85e090(v25_.v25, &v31_.v31, v20),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v4 = COERCE_AS(__typeof__(v4),
                 PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if ((v21 & 1) == 0) {
    nn_diag_detail_AbortImpl_plt_856170(v21),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v4 = COERCE_AS(__typeof__(v4),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  v22 = v25_.v25[0];
  a1[2] = *(unsigned int*)((char*)((__int64*)0xCLL) + v25_.v25[0] + 4) +
          v25_.v25[0] - *a1;
  a1[3] = (unsigned int)(*(_DWORD*)((char*)((__int64*)0xCLL) + v22 + 8) -
                         *(_DWORD*)((char*)((__int64*)0xCLL) + v22 + 4));
  return 1;
}

#pragma GCC visibility pop
