#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 NvOsAlloc_plt(_QWORD);
__int64 NvOsFree_plt(_QWORD);
__int64 NvTegraSysGetChipId_plt(void);
__int64 NvTegraSysGetPlatform_plt(void);
__int64 NvTegraSysInit_plt(_QWORD);
__int64 nvidia_5f10c0(_QWORD, _QWORD, _QWORD);
__int64 nvidia_5f1150(_QWORD, _QWORD, _QWORD);
__int64 nvidia_5f11c0();
__int64 nvidia_625d50(char*);
__int64 nvidia_628ea0(void);
__int64 nvidia_632420(void);
__int64 nvidia_63fa00(void);
__int64 nvrm_sync_60b500(void);
extern __int64 (*nvidia_5f0d40_ptr[3])();
extern int SdkData_10406a8;
unsigned __int64 NvUStrlConvertCodePage(_WORD* a1, unsigned __int64 a2, int a3,
                                        char* a4, __int64 a5, int a6);
__int64 nvidia_60b3f0(__int64 a1);
__int64 nvidia_625d00();
__int64 nvidia_6280e0(__int64* a1, unsigned __int64 a2);
__int64 nvidia_632390(__int64 a1);
__int64 nvidia_63f980(_QWORD* a1, unsigned __int64 a2);

unsigned __int64 NvUStrlConvertCodePage(_WORD* a1, unsigned __int64 a2, int a3,
                                        char* a4, __int64 a5, int a6)
{
  _WORD* v6;
  unsigned int v8;
  int v9;
  __int64 v10;
  __int64 (*v12)();
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v16;
  char* v17;
  __int64 v18;
  __int64 (*v19)();
  int v20;
  int v21;
  __int16 v22;
  unsigned __int64 v23;
  unsigned __int8* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned int v29;
  __int64 v30;

  v30 = a5;
  if (a4 == nullptr) {
    return 0;
  }
  v6 = a1;
  if (a1 == nullptr) {
    a2 = -1;
  }
  if (a5 == 0) {
    a5 = -1;
    v30 = -1;
  }
  v8 = a3 != 0 ? a3 : 3;
  v9 = a6 != 0 ? a6 : 3;
  if (v8 > 3) {
    return 0;
  }
  v10 = a5;
  v12 = nvidia_5f0d40_ptr[v8 - 1];
  v13 = ((__int64 (*)(_QWORD, _QWORD))v12)(0, 0);
  if (v13 > a2) {
    return 0;
  }
  v16 = v13;
  v29 = 0;
  v17 = a4;
  if (v9 == 1) {
    v19 = (__int64 (*)())nvidia_5f10c0;
    v18 = v10;
  LABEL_30:
    if (v8 == 2 && *v17 >= 1) {
      if (v16 >= a2) {
        v26 = v30;
      }
      else {
        v22 = (unsigned __int8)*v17;
        v23 = v16 + 2;
        v24 = (unsigned __int8*)(v17 + 1);
        v25 = v18 - 1;
        do {
          v16 = v23;
          v17 = (char*)v24;
          v26 = v25;
          if (v6 != nullptr) {
            *v6++ = v22;
          }
          if ((char)*v24 <= 0) {
            break;
          }
          --v25;
          if (v23 >= a2) {
            break;
          }
          v22 = *v24;
          v23 += 2LL;
          ++v24;
        } while (v26 != 0);
      }
      v30 = v26;
    }
    goto LABEL_46;
  }
  v18 = v10;
  if (v9 != 2) {
    if (v9 != 3) {
      return 0;
    }
    v19 = nvidia_5f11c0;
    goto LABEL_30;
  }
  if ((v8 & 1) != 0) {
    v20 = *(unsigned __int16*)a4;
    if ((unsigned int)(v20 - 1) <= 0x7E) {
      v19 = (__int64 (*)())nvidia_5f1150;
      do {
        if (v16 >= a2 || v18 == 0) {
          break;
        }
        if (v6 != nullptr) {
          *(_BYTE*)v6 = v20;
          v6 = (_WORD*)((char*)v6 + 1);
          v18 = v30;
        }
        v21 = *((unsigned __int16*)v17 + 1);
        v17 += 2;
        ++v16;
        v18 -= 2;
        v30 = v18;
        LOBYTE(v20) = v21;
      } while ((unsigned int)(v21 - 1) < 0x7F);
    LABEL_46:
      v27 = ((__int64 (*)(char*, unsigned int*, __int64*))v19)(v17, &v29, &v30);
      if (v29 != 0) {
        goto LABEL_47;
      }
      goto LABEL_41;
    }
  }
  v19 = (__int64 (*)())nvidia_5f1150;
  v27 = nvidia_5f1150(v17, &v29, &v30);
  if (v29 != 0) {
  LABEL_47:
    v28 = v27;
    while (1) {
      v14 = ((__int64 (*)(_QWORD))v12)(0) + v16;
      if (v6 != nullptr) {
        if (v14 > a2) {
          v14 = v16;
          goto LABEL_53;
        }
        v6 = (_WORD*)((char*)v6 + ((__int64 (*)(_WORD*, _QWORD))v12)(v6, v29));
      }
      v28 =
          ((__int64 (*)(__int64, unsigned int*, __int64*))v19)(v28, &v29, &v30);
      v16 = v14;
      if (v29 == 0) {
        goto LABEL_42;
      }
    }
  }
LABEL_41:
  v14 = v16;
LABEL_42:
  if (v6 != nullptr) {
  LABEL_53:
    ((void (*)(_WORD*, _QWORD))v12)(v6, 0);
  }
  return v14;
}

__int64 nvidia_60b3f0(__int64 a1)
{
  int v1;
  __int64 result;
  __int64 v3;

  v1 = *(_DWORD*)(a1 + 12);
  result = NvOsAlloc_plt(24LL * v1 + 40);
  if (result != 0) {
    *(_DWORD*)(result + 16) = v1;
    *(_QWORD*)(result + 24) = 0;
    v3 = result;
    *(_DWORD*)(result + 32) = 0;
    *(_QWORD*)result = 0;
    *(_QWORD*)(result + 8) = 1;
    *(_BYTE*)(result + 20) = 1;
    nvrm_sync_60b500();
    return v3;
  }
  return result;
}

__int64 nvidia_625d00()
{
  char* v0;

  if ((unsigned int)NvTegraSysInit_plt(0) != 0) {
    return 15;
  }
  SdkData_10406a8 = NvTegraSysGetChipId_plt();
  v0 = (char*)NvTegraSysGetPlatform_plt();
  return nvidia_625d50(v0);
}

__int64 nvidia_6280e0(__int64* a1, unsigned __int64 a2)
{
  __int64 result;
  unsigned __int64 v5;
  __int64 v6;

  result = nvidia_628ea0();
  if ((_DWORD)result == 0) {
    v5 = a1[1];
    if (v5 <= a2) {
      if (v5 < a2) {
        v6 = *a1;
        do {
          *(_QWORD*)(v6 + 8 * v5) = 0;
          v5 = a1[1] + 1;
          a1[1] = v5;
        } while (v5 < a2);
      }
    }
    else {
      a1[1] = a2;
    }
  }
  return result;
}

__int64 nvidia_632390(__int64 a1)
{
  __int64 result;
  __int64 v3;
  unsigned int v4;
  unsigned int v5;
  __int64 v6;

  result = nvidia_632420();
  v3 = *(_QWORD*)(a1 + 64);
  if (v3 != 0) {
    v4 = result;
    v5 = (**(__int64 (***)(_QWORD))v3)(*(_QWORD*)(a1 + 64));
    v6 = *(_QWORD*)(a1 + 64);
    *(_BYTE*)(v3 + 17) = 1;
    if (v6 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 8LL))(v6);
      NvOsFree_plt(*(_QWORD*)(a1 + 64));
      *(_QWORD*)(a1 + 64) = 0;
    }
    result = v4;
    if (v5 != 0) {
      if (v4 != 0) {
        result = v4;
      }
      else {
        result = v5;
      }
    }
    *(_QWORD*)(a1 + 72) = 0;
  }
  return result;
}

__int64 nvidia_63f980(_QWORD* a1, unsigned __int64 a2)
{
  __int64 result;
  unsigned __int64 v5;

  result = nvidia_63fa00();
  if ((_DWORD)result == 0) {
    v5 = a1[1];
    if (v5 <= a2) {
      for (; v5 < a2; a1[1] = v5) {
        *(_QWORD*)(*a1 + 8 * v5) = 0;
        v5 = a1[1] + 1LL;
      }
    }
    else {
      a1[1] = a2;
    }
  }
  return result;
}

#pragma GCC visibility pop
