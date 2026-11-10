#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_1a5500(_QWORD);
__int64 __nnmusl_get_number_uncalled_tls_dtors_plt(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_os_AcquireReadLock_plt(_QWORD);
__int64 nn_os_AcquireWriteLock_plt(_QWORD);
__int64 nn_os_ReleaseReadLock_plt(_QWORD);
__int64 nn_os_ReleaseWriteLock_plt(_QWORD);
__int64 nn_ro_detail_RoModule_RevertReference_plt(_QWORD, _QWORD, _QWORD);
__int64 strcmp_plt(void* this_, const char*, const char*);
__int64 strcmp_plt_alt1(void* this_, const char*) __asm__("strcmp_plt");
atomic_uint* SdkRoutine_16cc80(atomic_uint* result);
extern _UNKNOWN SdkData_eb80a0;
extern __int64 SdkData_e86f98;
extern __int64 SdkData_e86fb8;
extern __int64 SdkData_eb8098;
extern void (*SdkData_e86fb0[257])();
extern void (*SdkData_e86fd8[252])();
unsigned __int8* nn_os_16cce0(__int64);
__int64 ro_api_174d00(_QWORD* a1, void* a2, const char* a3);
unsigned int* ro_api_175060(__int64 a1, void* this_, const char* a3);
__int64 nn_ro_UnloadModule(__int64** a1);

__int64 ro_api_174d00(_QWORD* a1, void* a2, const char* a3)
{
  void(__attribute__((noreturn)) * v6)();
  bool v7;
  _QWORD* v8;
  _QWORD* v9;
  unsigned int* v10;
  unsigned __int64 v11;
  const char* v12;
  void(__attribute__((noreturn)) * v13)();
  _QWORD* v14;
  _QWORD* v15;
  unsigned int* v16;
  unsigned __int64 v17;
  unsigned int v19;

  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v6 = SdkData_e86fd8[0];
  v7 = a3 == nullptr;
  v8 = *(_QWORD**)SdkData_e86fd8[0];
  v9 = *(_QWORD**)(*(_QWORD*)SdkData_e86fd8[0] + 8LL);
  while (v9 != v8) {
    if (v7) {
      v10 = ro_api_175060((__int64)v9, a2, a3),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      if (v10 != nullptr && *((unsigned __int8*)v10 + 4) >= 0x10u) {
        v19 = 0;
        *a1 = *((_QWORD*)v10 + 1) + v9[5];
        return v19;
      }
    }
    else {
      v11 = v9[5];
      if ((unsigned __int64)a3 < v11 || (unsigned __int64)a3 >= v9[23] + v11) {
        v7 = false;
        goto LABEL_3;
      }
    }
    v7 = true;
  LABEL_3:
    v9 = (_QWORD*)v9[1];
    v8 = *(_QWORD**)v6;
  }
  nn_os_AcquireReadLock_plt(&SdkData_eb80a0),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v13 = SdkData_e86fb0[0];
  v14 = *(_QWORD**)SdkData_e86fb0[0];
  v15 = *(_QWORD**)(*(_QWORD*)SdkData_e86fb0[0] + 8LL);
  while (v15 != v14) {
    if (v7) {
      v16 = ro_api_175060((__int64)v15, a2, v12),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      if (v16 != nullptr && *((unsigned __int8*)v16 + 4) >= 0x10u) {
        v19 = 0;
        *a1 = *((_QWORD*)v16 + 1) + v15[5];
        goto LABEL_24;
      }
    }
    else {
      v17 = v15[5];
      if ((unsigned __int64)a3 < v17 || (unsigned __int64)a3 >= v15[23] + v17) {
        v7 = false;
        goto LABEL_14;
      }
    }
    v7 = true;
  LABEL_14:
    v15 = (_QWORD*)v15[1];
    v14 = *(_QWORD**)v13;
  }
  v19 = 2582;
LABEL_24:
  nn_os_ReleaseReadLock_plt(&SdkData_eb80a0),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  return v19;
}

unsigned int* ro_api_175060(__int64 a1, void* this_, const char* a3)
{
  __int64 v3;
  int v5;
  unsigned __int8* v6;
  unsigned __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  int v11;
  unsigned __int8* v12;
  unsigned int v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned int* v18;
  bool v19;
  unsigned int* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v25;
  int* v26;
  char v27;
  int v28;

  v3 = *(_QWORD*)(a1 + 80);
  if ((*(_BYTE*)(a1 + 195) & 0x10) != 0) {
    v10 = *(unsigned int*)(a1 + 88);
    v11 = *(unsigned __int8*)this_;
    if (*(_BYTE*)this_ != 0) {
      v12 = (unsigned __int8*)this_ + 1;
      v13 = 5381;
      do {
        v13 = 33 * v13 + v11;
        v14 = *v12++;
        v11 = v14;
      } while (v14 != 0);
    }
    else {
      v13 = 5381;
    }
    if ((((1LL << (v13 >> *(_QWORD*)(a1 + 160))) | (1LL << v13)) &
         ~*(_QWORD*)(v3 + 8LL * (((_DWORD)v10 - 1) & (v13 >> 6)))) != 0) {
      return nullptr;
    }
    v20 = *(unsigned int**)(a1 + 168);
    v21 = *v20;
    v22 = v20[1];
    v23 = *(unsigned int*)(v3 + 8 * v10 + 4LL * (v13 % (unsigned int)v21));
    if ((unsigned int)v23 < (unsigned int)v22) {
      return nullptr;
    }
    v25 = *(_QWORD*)(a1 + 96);
    v18 = (unsigned int*)(*(_QWORD*)(a1 + 104) + 24LL * (unsigned int)v23);
    v26 = (int*)(v3 + 8 * v10 + 4 * v21 + 4 * v23 - 4 * v22);
    while (1) {
      v28 = *v26++;
      v27 = v28;
      if ((v28 ^ v13) <= 1 &&
          (unsigned int)strcmp_plt(this_, (const char*)(v25 + *v18), a3) == 0) {
        break;
      }
      v18 += 6;
      if ((v27 & 1) != 0) {
        return nullptr;
      }
    }
  }
  else {
    v5 = *(unsigned __int8*)this_;
    if (*(_BYTE*)this_ != 0) {
      v6 = (unsigned __int8*)this_ + 1;
      LODWORD(v7) = 0;
      do {
        v7 = (v5 + 16 * (_DWORD)v7) & 0xFFFFFFF ^
             (16 * ((unsigned int)(v5 + 16 * v7) >> 28));
        v8 = *v6++;
        v5 = v8;
      } while (v8 != 0);
      v9 = *(unsigned int*)(v3 + 4 * (v7 % *(_QWORD*)(a1 + 168)));
      if ((_DWORD)v9 == 0) {
        return nullptr;
      }
    }
    else {
      v9 = *(unsigned int*)(v3 - 4 * 0uLL / *(_QWORD*)(a1 + 168) *
                                     *(_QWORD*)(a1 + 168));
      if ((_DWORD)v9 == 0) {
        return nullptr;
      }
    }
    v16 = *(_QWORD*)(a1 + 96);
    v15 = *(_QWORD*)(a1 + 104);
    v17 = *(_QWORD*)(a1 + 88);
    while (1) {
      v18 = (unsigned int*)(v15 + 24 * v9);
      if ((v18[1] & 0xF) != 4) {
        v19 = *((_WORD*)v18 + 3) == 0 || *((unsigned __int16*)v18 + 3) == 65522;
        if (!v19 && (unsigned int)strcmp_plt(this_, (const char*)(v16 + *v18),
                                             a3) == 0) {
          break;
        }
      }
      v9 = *(unsigned int*)(v17 + 4 * v9);
      if ((_DWORD)v9 == 0) {
        return nullptr;
      }
    }
  }
  return v18;
}

__int64 nn_ro_UnloadModule(__int64** a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  void (*v5)(__int64);
  void(__attribute__((noreturn)) * v6)();
  __int64* v7;
  __int64* v8;
  __int64 v9;
  void(__attribute__((noreturn)) * v11)();
  _QWORD* v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  bool v17;
  __int64 v18;
  __int64 v19;
  int v20;
  __int64 result;
  int v22;

  v2 = (*a1)[5] + *(unsigned int*)((*a1)[5] + 96);
  if (v2 != 0) {
    v3 = __nnmusl_get_number_uncalled_tls_dtors_plt(v2);
    if (v3 != 0) {
      nn_diag_detail_AbortImpl_plt_856170(v3);
    }
  }
  v4 = nn_os_AcquireWriteLock_plt(&SdkData_eb80a0);
  v5 = (void (*)(__int64))(*a1)[9];
  if (v5 != nullptr) {
    v5(v4);
  }
  SdkRoutine_16cc80((atomic_uint*)SdkData_e86f98);
  v6 = SdkData_e86fb0[0];
  v7 = *a1;
  if (*a1 != *(__int64**)SdkData_e86fb0[0]) {
    v8 = (__int64*)v7[1];
    v9 = *v8;
    *(_QWORD*)(*v7 + 8) = v8;
    *v8 = *v7;
    *(_QWORD*)(v9 + 8) = v7;
    *v7 = v9;
  }
  nn_os_16cce0(SdkData_e86f98);
  if ((*((_BYTE*)*a1 + 195) & 1) == 0) {
    v11 = SdkData_e86fd8[0];
    v12 = *(_QWORD**)SdkData_e86fd8[0];
    v13 = *(_QWORD**)(*(_QWORD*)SdkData_e86fd8[0] + 8LL);
    if (v13 != *(_QWORD**)SdkData_e86fd8[0]) {
      v14 = SdkData_e86fb8;
      do {
        v15 = v13[22];
        v16 = v13[12];
        v17 = v15 == 0 || v16 == 0;
        if (v17 || (unsigned int)strcmp_plt_alt1(
                       (void*)"nnSdk.nss", (const char*)(v16 + v15)) != 0) {
          nn_ro_detail_RoModule_RevertReference_plt(v13, *a1, v14);
          v12 = *(_QWORD**)v11;
        }
        v13 = (_QWORD*)v13[1];
      } while (v13 != v12);
    }
    v18 = *(_QWORD*)(*(_QWORD*)v6 + 8LL);
    if (v18 != *(_QWORD*)v6) {
      v19 = SdkData_e86fb8;
      do {
        nn_ro_detail_RoModule_RevertReference_plt(v18, *a1, v19);
        v18 = *(_QWORD*)(v18 + 8);
      } while (v18 != *(_QWORD*)v6);
    }
  }
  nn_os_ReleaseWriteLock_plt(&SdkData_eb80a0);
  SdkRoutine_1a5500(2147483653LL);
  v20 = (*(__int64 (**)(__int64, _QWORD, __int64))(
      *(_QWORD*)SdkData_eb8098 + 40LL))(SdkData_eb8098, 0, (*a1)[5]);
  result = SdkRoutine_1a5500(2147483654LL);
  v22 = v20;
  if (v20 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v22);
  }
  *((_DWORD*)a1 + 2) = 0;
  return result;
}

#pragma GCC visibility pop
