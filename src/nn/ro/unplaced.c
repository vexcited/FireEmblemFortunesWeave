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
__int64 fw_rtld_RegisterCrtDestructor();
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_ro_detail_SymbolTableParser_GetAddress_plt(_QWORD);
__int64 nn_ro_detail_SymbolTableParser_GetIndex_plt(_QWORD);
__int64 nn_ro_detail_SymbolTableParser_GetName_plt(_QWORD);
__int64 nn_ro_detail_SymbolTableParser_GetSize_plt(_QWORD);
__int64 nn_ro_detail_SymbolTableParser_GetType_plt(_QWORD);
__int64 nn_ro_detail_SymbolTableParser_Initialize_plt(_QWORD, _QWORD);
__int64 nn_ro_detail_SymbolTableParser_MoveNext_plt(_QWORD);
__int64 nn_ro_detail_SymbolTableParser_MoveTo_plt(_QWORD, _QWORD);
__int64 strlen_plt(_QWORD);
__int64 unplaced_176b20(__int64 result, __int64 a2, __int64 a3, __int64* a4,
                        char a5, __int64 (*a6)(__int64, __int64));
__int64 unplaced_177220(int* a1);
void unplaced_177290(__int64 a1);
void unplaced_1774c0(_QWORD* a1, __int64 a2);
__int64 unplaced_177880(_QWORD* a1, __int64* a2, _BYTE* a3, __int64 a4,
                        unsigned __int64 a5, unsigned __int64 a6);
__int64 unplaced_177a00();

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

__int64 unplaced_176b20(__int64 result, __int64 a2, __int64 a3, __int64* a4,
                        char a5, __int64 (*a6)(__int64, __int64))
{
  __int64* v7;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  char v14;
  __int64 v15;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  char v30;
  char v31;
  __int64 v32;
  int v33;
  unsigned int* v34;
  __int64 v35;
  __int64 v36;
  __int64* v37;
  __int64* v38;
  __int64 v39;

  v7 = a4;
  v9 = result;
  v37 = nullptr;
  v38 = nullptr;
  v39 = 0;
  *(_QWORD*)(result + 56) = 0;
  v10 = (__int64*)(result + 56);
  *(_QWORD*)(result + 48) = a4;
  *(_QWORD*)(result + 16) = 0;
  *(_QWORD*)(result + 24) = 0;
  *(_QWORD*)(result + 64) = 0;
  *(_QWORD*)(result + 72) = 0;
  *(_QWORD*)(result + 80) = 0;
  *(_QWORD*)(result + 88) = 0;
  *(_QWORD*)(result + 96) = 0;
  *(_QWORD*)(result + 104) = 0;
  *(_QWORD*)(result + 112) = 0;
  *(_QWORD*)(result + 120) = 0;
  *(_QWORD*)(result + 128) = 0;
  *(_QWORD*)(result + 136) = 0;
  *(_QWORD*)(result + 144) = 0;
  *(_QWORD*)(result + 152) = 0;
  *(_QWORD*)(result + 160) = 0;
  *(_QWORD*)(result + 168) = 0;
  *(_QWORD*)(result + 176) = 0;
  *(_QWORD*)(result + 184) = a3;
  *(_BYTE*)(result + 195) = a5;
  *(_BYTE*)(result + 192) = 22;
  *(_QWORD*)(result + 32) = 0;
  *(_QWORD*)(result + 40) = a2;
  while (2) {
    while (1) {
      v11 = *v7;
      if (*v7 <= 1879047924) {
        break;
      }
      if (v11 <= 1879048185) {
        if (v11 == 1879047925) {
          v38 = v7;
          v7 += 2;
        }
        else {
          if (v11 != 1879048185) {
            goto LABEL_3;
          }
          v13 = v7[1];
          v7 += 2;
          *(_QWORD*)(v9 + 152) = v13;
        }
      }
      else {
        switch (v11) {
        case 1879048186LL:
          v29 = v7[1];
          v7 += 2;
          *(_QWORD*)(v9 + 144) = v29;
          break;
        case 1879048187LL:
          if ((v7[1] & 1) != 0) {
          LABEL_2:
            *(_BYTE*)(v9 + 195) |= 4u;
          }
        LABEL_3:
          v7 += 2;
          break;
        case 1879048195LL:
          result = a6(1879048195, v7[1]);
          v7 += 2;
          break;
        default:
          goto LABEL_3;
        }
      }
    }
    switch (v11) {
    case 0LL:
      v30 = *(_BYTE*)(v9 + 195);
      *(_QWORD*)(v9 + 16) = v39;
      if (v38 != nullptr) {
        v31 = v30 | 0x10;
        v32 = v38[1] + a2;
        v33 = *(_DWORD*)(v32 + 8);
        *(_QWORD*)(v9 + 80) = v32 + 16;
        *(_DWORD*)(v9 + 88) = v33;
        *(_QWORD*)(v9 + 160) = *(unsigned int*)(v32 + 12);
        *(_QWORD*)(v9 + 168) = v32;
      }
      else {
        if (v37 == nullptr) {
          goto LABEL_54;
        }
        v31 = v30 & 0xEF;
        v34 = (unsigned int*)(v37[1] + a2);
        v35 = *v34;
        *(_QWORD*)(v9 + 168) = v35;
        v36 = v34[1];
        v34 += 2;
        *(_QWORD*)(v9 + 80) = v34;
        *(_QWORD*)(v9 + 88) = &v34[v35];
        *(_QWORD*)(v9 + 160) = v36;
      }
      *(_BYTE*)(v9 + 195) = v31;
    LABEL_54:
      *(_QWORD*)(v9 + 200) = 0;
      return result;
    case 2LL:
      v21 = v7[1];
      v7 += 2;
      *v10 = v21;
      continue;
    case 3LL:
      v25 = v7[1];
      v7 += 2;
      *(_QWORD*)(v9 + 120) = v25 + a2;
      continue;
    case 4LL:
      v37 = v7;
      v7 += 2;
      continue;
    case 5LL:
      v23 = v7[1];
      v7 += 2;
      *(_QWORD*)(v9 + 96) = v23 + a2;
      continue;
    case 6LL:
      v20 = v7[1];
      v7 += 2;
      *(_QWORD*)(v9 + 104) = v20 + a2;
      continue;
    case 7LL:
    case 17LL:
      v12 = v7[1];
      v7 += 2;
      *(_QWORD*)(v9 + 24) = v12 + a2;
      continue;
    case 8LL:
      v26 = v7[1];
      v7 += 2;
      *(_QWORD*)(v9 + 128) = v26;
      continue;
    case 9LL:
      if (v7[1] == 24) {
        goto LABEL_3;
      }
      result = ((__int64 (*)(__int64))a6)(9);
      v7 += 2;
      continue;
    case 10LL:
      v18 = v7[1];
      v7 += 2;
      *(_QWORD*)(v9 + 112) = v18;
      continue;
    case 11LL:
      if (v7[1] == 24) {
        goto LABEL_3;
      }
      result = ((__int64 (*)(__int64))a6)(11);
      v7 += 2;
      continue;
    case 12LL:
      v27 = v7[1];
      v7 += 2;
      *(_QWORD*)(v9 + 64) = v27 + a2;
      continue;
    case 13LL:
      v19 = v7[1];
      v7 += 2;
      *(_QWORD*)(v9 + 72) = v19 + a2;
      continue;
    case 14LL:
      v24 = v7[1];
      v7 += 2;
      *(_QWORD*)(v9 + 176) = v24;
      continue;
    case 18LL:
      v28 = v7[1];
      v7 += 2;
      *(_QWORD*)(v9 + 136) = v28;
      continue;
    case 19LL:
      if (v7[1] == 16) {
        goto LABEL_3;
      }
      result = ((__int64 (*)(__int64))a6)(19);
      v7 += 2;
      continue;
    case 20LL:
      if (v7[1] == 7) {
        v14 = 2;
      }
      else {
        v14 = 0;
      }
      *(_BYTE*)(v9 + 195) = *(_BYTE*)(v9 + 195) & 0xFD | v14;
      v15 = v7[1];
      if (v15 == 7 || v15 == 17) {
        goto LABEL_3;
      }
      v17 = *v7;
      v7 += 2;
      result = ((__int64 (*)(__int64))a6)(v17);
      continue;
    case 23LL:
      v22 = v7[1];
      v7 += 2;
      v39 = v22 + a2;
      continue;
    case 24LL:
      goto LABEL_2;
    case 30LL:
      if ((v7[1] & 8) == 0) {
        goto LABEL_3;
      }
      goto LABEL_2;
    case 37LL:
      if (v7[1] == 8) {
        goto LABEL_3;
      }
      result = ((__int64 (*)(__int64))a6)(37);
      v7 += 2;
      continue;
    default:
      goto LABEL_3;
    }
  }
}

__int64 unplaced_177220(int* a1)
{
  int v1;
  __int64 result;

  v1 = *a1;
  result = 0;
  if (v1 < 0) {
    if (v1 == -369098752) {
      return result;
    }
  }
  else if (v1 > 335544321) {
    if (v1 == 335544322) {
      return result;
    }
  }
  else if (v1 == 0) {
    return result;
  }
  return 1;
}

void unplaced_177290(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  unsigned __int64* v3;
  unsigned __int64* v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  char v9;
  _DWORD* v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  int v14;
  _DWORD* v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v20;
  _DWORD* v21;
  _BYTE* v22;
  unsigned __int64 v23;
  _BYTE* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64* v34;
  __int64 v35;
  __int64 vars0;

  v1 = nn_diag_detail_AbortImpl_plt_856170(a1);
  v34 = &vars0;
  v35 = v2;
  v4 = v3;
  v5 = (_QWORD*)v1;
  v26 = 0;
  v27 = 0;
  v25 = 0;
  if ((SdkRoutine_85e090(&v27, &v25, v6) & 1) != 0) {
    if (HIDWORD(v26) != 0) {
      v7 = *(int*)(v27 + 36);
      v8 = *(int*)(v27 + 40);
      if ((_DWORD)v8 != (_DWORD)v7) {
        v16 = (_DWORD*)(v7 + v27);
        v17 = v8 - v7;
        v18 = v17 - 8;
        if (v17 >= 8 && *v16 == 0) {
          v20 = (unsigned int)v16[1];
          if (v18 >= v20) {
            v21 = v16 + 2;
            v22 = v16 + 2;
            if ((_DWORD)v20 != 0) {
            LABEL_30:
              v23 = v20 & 3;
              v22 = v21;
              if ((v20 & 3) != 0) {
                while (*v22 != 0) {
                  ++v22;
                  if (--v23 == 0) {
                    goto LABEL_33;
                  }
                }
              }
              else {
              LABEL_33:
                if (v20 - 1 >= 3) {
                  v22 += 3;
                  while (1) {
                    if (*(v22 - 3) == 0) {
                      v22 -= 3;
                      goto LABEL_35;
                    }
                    if (*(v22 - 2) == 0) {
                      v22 -= 2;
                      goto LABEL_35;
                    }
                    if (*(v22 - 1) == 0) {
                      break;
                    }
                    if (*v22 == 0) {
                      goto LABEL_35;
                    }
                    v24 = v22 + 1;
                    v22 += 4;
                    if (v24 == (char*)v21 + v20) {
                      goto LABEL_34;
                    }
                  }
                  --v22;
                }
                else {
                LABEL_34:
                  v22 = (char*)v21 + v20;
                }
              }
            }
          LABEL_35:
            if (v22 - (_BYTE*)v21 == v20) {
              *v5 = v21;
              *v4 = v20;
            }
          }
        }
      }
    }
    else {
      v9 = 0;
      v10 = nullptr;
      v11 = 0;
      v32 = 0;
      v33 = 0;
      v30 = 0;
      v31 = 0;
      v29 = 0;
      v28 = 0;
      while (1) {
        SdkRoutine_1a5380((__int64)&v29, &v28);
        if (v14 != 0) {
          break;
        }
        if ((_DWORD)v31 == 8 || (_DWORD)v31 == 3) {
          if ((v32 & 4) != 0) {
            v12 = v29;
            v11 = 0;
            v9 = 1;
            v13 = v30 + v29;
            v10 = (_DWORD*)(v30 + v29);
          }
          else if ((_DWORD)v32 != 1 || (v9 & 1) == 0) {
            if ((_DWORD)v32 != 1) {
              return;
            }
            v12 = v29;
            v13 = v30 + v29;
          }
          else {
            v12 = v29;
            v9 = 1;
            v13 = v30 + v29;
            v11 = v30 + v29;
          }
          if (v12 < v13) {
            continue;
          }
        }
        if (v11 == 0 || *v10 != 0) {
          return;
        }
        v20 = (unsigned int)v10[1];
        v21 = v10 + 2;
        v22 = v10 + 2;
        if ((_DWORD)v20 == 0) {
          goto LABEL_35;
        }
        goto LABEL_30;
      }
    }
  }
}

void unplaced_1774c0(_QWORD* a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  char v5;
  char* v6;
  char* v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  int v10;
  unsigned __int64 v12;
  __int64 v13;
  bool v14;
  __int64 v15;
  char* v16;
  char* v17;
  unsigned __int64 v18;
  signed __int64 v19;
  __int64 v20;
  char* v21;
  int v22;
  char* v23;
  _BYTE* v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  int v34;

  v27 = 0;
  v28 = 0;
  v26 = 0;
  if ((SdkRoutine_85e090(&v28, &v26, a2) & 1) == 0) {
    return;
  }
  if (HIDWORD(v27) != 0) {
    v4 = *(int*)(v28 + 44);
    v3 = *(int*)(v28 + 48);
    if ((_DWORD)v3 != (_DWORD)v4) {
      v12 = v3 - v4;
      if (v12 >= 0xC) {
        v7 = (char*)(v4 + v28);
        if (*(_DWORD*)(v4 + v28 + 8) == 3) {
          goto LABEL_21;
        }
      }
    }
    return;
  }
  v5 = 0;
  v6 = nullptr;
  v7 = nullptr;
  v32 = 0;
  v33 = 0;
  v30 = 0;
  v31 = 0;
  v29 = 0;
  v34 = 0;
  do {
    SdkRoutine_1a5380((__int64)&v29, &v34);
    if (v10 != 0) {
      return;
    }
    if ((_DWORD)v31 != 8 && (_DWORD)v31 != 3) {
      break;
    }
    if ((v32 & 4) != 0) {
      v8 = v29;
      v7 = nullptr;
      v5 = 1;
      v9 = v30 + v29;
      v6 = (char*)(v30 + v29);
    }
    else if ((_DWORD)v32 != 1 || (v5 & 1) == 0) {
      if ((_DWORD)v32 != 1) {
        return;
      }
      v8 = v29;
      v9 = v30 + v29;
    }
    else {
      v8 = v29;
      v5 = 1;
      v9 = v30 + v29;
      v7 = (char*)(v30 + v29);
    }
  } while (v8 < v9);
  if (v7 != nullptr) {
    v15 = (__int64)((unsigned __int64)(v7 - v6) >> 13 != 0 ? v7 - 0x2000 : v6);
    if (v7 != (char*)v15) {
      v16 = v7 - 4;
    LABEL_37:
      v17 = (char*)v15;
      v18 = (unsigned __int64)v7;
    LABEL_38:
      while (2) {
        while (1) {
          v19 = v7 - v17;
          v20 = (v7 - v17) & 3;
          if (v20 == 0) {
            break;
          }
          v21 = v17;
          while (1) {
            v22 = (unsigned __int8)*v21++;
            if (v22 == 71) {
              break;
            }
            --v20;
            v17 = v21;
            if (v20 == 0) {
              if ((unsigned __int64)(v19 - 1) >= 3) {
                goto LABEL_45;
              }
              goto LABEL_72;
            }
          }
          v24 = v17 + 1;
          if (v17 + 1 == v7) {
            goto LABEL_72;
          }
          v23 = v17++;
          if (*v24 == 78) {
          LABEL_63:
            if (v23 + 2 == v7) {
              goto LABEL_72;
            }
            if (v23[2] == 85) {
              if (v23 + 3 == v7) {
              LABEL_72:
                if (v18 < (unsigned __int64)v7) {
                  if (v15 + 12 > v18) {
                    v7 = (char*)v18;
                  LABEL_36:
                    if (v7 == (char*)v15) {
                      return;
                    }
                    goto LABEL_37;
                  }
                  v7 = (char*)(v18 - 12);
                  if (*(_DWORD*)(v18 - 4) != 3) {
                    goto LABEL_36;
                  }
                  if (*(_DWORD*)(v18 - 12) != 4) {
                    goto LABEL_36;
                  }
                  v25 = *(unsigned int*)(v18 - 8);
                  if ((unsigned int)v25 > 0x20 ||
                      (unsigned __int64)&v16[-v18] < v25) {
                    goto LABEL_36;
                  }
                  v12 = v25 + 16;
                  if (*(_DWORD*)(v18 - 4) == 3) {
                  LABEL_21:
                    if (*(_DWORD*)v7 == 4) {
                      v13 = *((unsigned int*)v7 + 1);
                      v14 = (unsigned int)v13 > 0x20 || v13 + 16 > v12;
                      if (!v14 && *((_DWORD*)v7 + 3) == 5590599) {
                        a1[2] = 0;
                        a1[3] = 0;
                        *a1 = 0;
                        a1[1] = 0;
                        memcpy_plt(a1, v7 + 16, v13);
                        a1[4] = v13;
                      }
                    }
                  }
                }
                return;
              }
              if (v23[3] == 0) {
                v18 = (unsigned __int64)v23;
              }
            }
          }
        }
        v21 = v17;
        if ((unsigned __int64)(v19 - 1) < 3) {
          goto LABEL_72;
        }
      LABEL_45:
        v23 = v21 + 2;
        while (1) {
          if (*(v23 - 2) == 71) {
            v17 = v23 - 1;
            if (v23 - 1 == v7) {
              goto LABEL_72;
            }
            v23 -= 2;
            if (*v17 != 78) {
              goto LABEL_38;
            }
            goto LABEL_63;
          }
          if (*(v23 - 1) == 71) {
            if (v23 == v7) {
              goto LABEL_72;
            }
            v17 = v23--;
            if (*v17 != 78) {
              goto LABEL_38;
            }
            goto LABEL_63;
          }
          if (*v23 == 71) {
            v17 = v23 + 1;
            if (v23 + 1 == v7) {
              goto LABEL_72;
            }
            if (*v17 != 78) {
              goto LABEL_38;
            }
            goto LABEL_63;
          }
          v17 = v23 + 2;
          if (v23[1] == 71) {
            break;
          }
          v23 += 4;
          if (v17 == v7) {
            goto LABEL_72;
          }
        }
        if (v23 + 2 == v7) {
          goto LABEL_72;
        }
        ++v23;
        if (*v17 != 78) {
          continue;
        }
        goto LABEL_63;
      }
    }
  }
}

__int64 unplaced_177880(_QWORD* a1, __int64* a2, _BYTE* a3, __int64 a4,
                        unsigned __int64 a5, unsigned __int64 a6)
{
  unsigned int v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 result;
  __int64 v17;
  int v18;
  char* v19;
  char v20;
  _QWORD v21[4];

  memset(v21, 0, sizeof(v21));
  if ((nn_ro_detail_SymbolTableParser_Initialize_plt(v21, a4) & 1) == 0 ||
      (nn_ro_detail_SymbolTableParser_MoveNext_plt(v21) & 1) == 0) {
    return 2582;
  }
  v11 = -1;
  v12 = 0;
  do {
    if ((unsigned __int8)(nn_ro_detail_SymbolTableParser_GetType_plt(v21) -
                          1) <= 1u) {
      v13 = nn_ro_detail_SymbolTableParser_GetAddress_plt(v21);
      if (v12 < v13) {
        v14 = v13;
        if (v13 <= a6) {
          v11 = nn_ro_detail_SymbolTableParser_GetIndex_plt(v21);
          v12 = v14;
        }
      }
    }
  } while ((nn_ro_detail_SymbolTableParser_MoveNext_plt(v21) & 1) != 0);
  if ((v11 & 0x80000000) != 0) {
    return 2582;
  }
  nn_ro_detail_SymbolTableParser_MoveTo_plt(v21, v11);
  *a1 = nn_ro_detail_SymbolTableParser_GetAddress_plt(v21);
  v15 = nn_ro_detail_SymbolTableParser_GetSize_plt(v21);
  result = 0;
  *a2 = v15;
  if (a3 != nullptr && a5 != 0) {
    v17 = nn_ro_detail_SymbolTableParser_GetName_plt(v21);
    v18 = a5 - 1;
    v19 = (char*)v17;
    if ((int)a5 >= 1) {
      v19 = (char*)v17;
      if ((_DWORD)a5 != 1) {
        do {
          v20 = *v19;
          if (*v19 == 0) {
            break;
          }
          ++v19;
          *a3++ = v20;
          --v18;
        } while (v18 != 0);
      }
      *a3 = 0;
    }
    if (a5 <= (int)((_DWORD)v19 + strlen_plt(v19) - v17)) {
      return 6166;
    }
    else {
      return 0;
    }
  }
  return result;
}

__int64 unplaced_177a00() { return fw_rtld_RegisterCrtDestructor(); }

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
