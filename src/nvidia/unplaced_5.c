#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 NvOsAlloc_plt(_QWORD);
__int64 NvOsDrvClose_plt(_QWORD);
__int64 NvOsDrvOpen_plt(_QWORD);
__int64 NvOsEventDestroy_plt(void);
__int64 NvOsEventPoolCreate_plt(_QWORD, _QWORD);
__int64 NvOsEventPoolDestroy_plt(void);
__int64 NvOsEventPoolLink_plt(_QWORD, _QWORD);
__int64 NvOsFree_plt(_QWORD);
__int64 NvOsSystemEventCreate_plt(_QWORD, _QWORD, _QWORD);
__int64 NvRmMemGetSize_plt(_QWORD);
__int64 SdkRoutine_629ca0(_QWORD);
__int64 SdkRoutine_629ca0_alt1(void) __asm__("SdkRoutine_629ca0");
__int64 SdkRoutine_62d0e0(_QWORD);
__int64 SdkRoutine_62ea10(__int64, __int64, char);
__int64 SdkRoutine_62fe00(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_ae0f0(_QWORD, _QWORD);
__int64 isalnum_plt(_QWORD);
__int64 isspace_plt(_QWORD);
__int64 memcmp_plt(_QWORD, _QWORD, _QWORD);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 memset_plt(void* this_, void*, int);
__int64 nvidia_626630(__int64*, _DWORD*);
__int64 nvidia_627cd0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                      _QWORD, _QWORD, _QWORD);
__int64 nvidia_6280e0(__int64*, unsigned __int64);
__int64 nvidia_6280e0_alt1(_QWORD, _QWORD) __asm__("nvidia_6280e0");
__int64 nvidia_628f50(void);
__int64 nvidia_628f90(_QWORD*);
__int64 nvidia_62ad20(_QWORD*, unsigned __int64);
__int64 nvidia_62ada0(__int64*, unsigned __int64);
__int64 nvidia_62ae40(_QWORD*, unsigned __int64);
__int64 nvidia_62b1c0(__int64*, unsigned __int64);
__int64 nvidia_62bcb0_alt1(_QWORD, _QWORD) __asm__("nvidia_62bcb0");
__int64 nvidia_62d8a0_alt1(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD) __asm__("nvidia_62d8a0");
__int64 nvidia_62dce0_alt1(_QWORD, _QWORD, _QWORD) __asm__("nvidia_62dce0");
__int64 nvidia_62e9b0_alt1(_QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD) __asm__("nvidia_62e9b0");
__int64 nvidia_62eb50_alt1(_QWORD, _QWORD) __asm__("nvidia_62eb50");
__int64 nvidia_62efd0_alt1(_QWORD, _QWORD, _QWORD,
                           _QWORD) __asm__("nvidia_62efd0");
__int64 nvidia_62f120_alt1(_QWORD) __asm__("nvidia_62f120");
__int64 nvidia_630140_alt1(_QWORD, _QWORD, _QWORD) __asm__("nvidia_630140");
__int64 nvidia_6302e0_alt1(_QWORD, _QWORD, _QWORD) __asm__("nvidia_6302e0");
__int64 nvidia_630440_alt1(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD) __asm__("nvidia_630440");
__int64 nvidia_630700_alt1(_QWORD, _QWORD) __asm__("nvidia_630700");
__int64 nvidia_630820_alt1(_QWORD, _QWORD) __asm__("nvidia_630820");
__int64 nvidia_631e20(_QWORD*, unsigned __int64);
__int64 nvidia_631fc0(_QWORD*, unsigned __int64);
__int64 nvidia_6395c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                      _QWORD);
__int64 nvidia_6395c0_alt1(__int64, __int64, __int64, __int64, __int64, char,
                           char, char) __asm__("nvidia_6395c0");
__int64 nvidia_63d350(_QWORD, _QWORD);
__int64 nvidia_644cf0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nvidia_644cf0_alt1(__int64, __int64, _QWORD*, __int64, __int64*,
                           unsigned __int64) __asm__("nvidia_644cf0");
__int64 nvidia_644da0(__int64, __int64, __int64, __int64);
__int64 nvidia_644da0_alt1(_QWORD, _QWORD, _QWORD,
                           _QWORD) __asm__("nvidia_644da0");
__int64 nvstl_mutex_impl_nvos_63ce10(_QWORD, _QWORD);
extern _BYTE* SdkData_e89a28;
extern _DWORD SdkData_bb01d0[8];
extern _DWORD SdkData_bb0250[8];
extern _DWORD SdkData_bb3080[4];
extern _DWORD SdkData_c77008[11];
extern _DWORD SdkData_c77034[11];
extern _UNKNOWN SdkData_c77060;
extern _UNKNOWN SdkData_c7708c;
extern _UNKNOWN SdkData_c770b8;
extern _UNKNOWN SdkData_c770e4;
extern _UNKNOWN SdkData_c770fc;
extern _UNKNOWN SdkData_c77188;
extern __int64 (*SdkData_e740d8[])();
extern __int64 SdkData_10406e0;
extern __int64 SdkData_ea4520;
extern __int64* SdkData_e899d8[2];
extern char SdkData_10406cc;
extern char SdkData_10406cf;
extern char SdkData_10406d2;
extern char SdkData_10406d3;
extern char SdkData_10406d5;
extern char SdkData_10406d6;
extern char SdkData_bb79ba[7];
extern char SdkData_bbde41[4];
extern char SdkData_bbe92d[3];
extern char SdkData_bbf489[3];
extern char SdkData_bc6b33[7];
extern char SdkData_bc7329[5];
extern char SdkData_ea44f0;
extern int SdkData_10406d8;
void nn_os_detail_RemoveNativeWaitHolder();
__int64 nvidia_62b900(__int64 a1);
__int64 nvidia_62b9a0(__int64 a1, __int64 a2);
__int64 nvidia_62b9c0(__int64 a1, __int64 a2, __int64 a3, unsigned __int64* a4);
__int64 nvidia_62ba40(__int64 a1, int a2);
__int64 nvidia_62baa0(__int64 a1, int a2);
unsigned __int64 nvidia_62bae0(__int64 a1);
__int64 nvidia_62bbc0(_QWORD* a1, __int64* a2);
__int64 nvidia_62bcb0(__int64* a1, _BYTE* a2);
__int64 nvidia_62bd40(__int64 result, unsigned int a2, __int64 a3);
__int64 nvidia_62be30(_QWORD* a1, int* a2, unsigned int* a3);
__int64 nvidia_62c060(__int64 a1, _DWORD* a2, int* a3);
__int64 nvidia_62c120(__int64 a1, __int64 a2, _DWORD* a3);
__int64 nvidia_62c210(__int64 a1, __int64 a2, _DWORD* a3);
__int64 nvidia_62c280(__int64 a1, _DWORD* a2, int* a3);
__int64 nvidia_62c570(__int64 a1, _DWORD* a2, _DWORD* a3);
__int64 nvidia_62c620(__int64 a1, _DWORD* a2, int* a3);
__int64 nvidia_62c6f0(__int64 a1, __int64 a2, _DWORD* a3);
__int64 nvidia_62c700(__int64 a1, __int64 a2, int* a3);
__int64 nvidia_62c9d0(__int64 a1, __int64 a2, int* a3);
__int64 nvidia_62ca30(__int64 a1, __int64 a2, _DWORD* a3);
__int64 nvidia_62ca40(__int64 a1, __int64 a2, _DWORD* a3);
__int64 nvidia_62ca50(__int64 a1, unsigned __int64 a2);
__int64 nvidia_62cad0();
void nvidia_62cae0(__int64 a1, __int64 a2);
__int64 nvidia_62caf0(__int64 a1, __int64 a2);
__int64 nvidia_62cb20();
__int64 nvidia_62cb30(__int64 a1);
__int64 nvidia_62cb60(__int64 a1, __int64 a2, int* a3);
unsigned __int64 nvidia_62cbc0(__int64 a1, __int64 a2);
__int64 nvidia_62cbf0(__int64 a1, _QWORD* a2, _QWORD* a3);
__int64 nvidia_62cc10(__int64 result, __int64 a2);
bool nvidia_62cc90(__int64 a1);
__int64 nvidia_62ce10(__int64 a1, _DWORD* a2, int* a3);
__int64 nvidia_62cea0(__int64 a1, _DWORD* a2, int* a3);
__int64 nvidia_62cf30(__int64 a1, __int64 a2, _DWORD* a3);
__int64 nvidia_62cf40(__int64 a1, __int64 a2, int* a3);
__int64 nvidia_62cfa0(__int64 a1, __int64 a2, _DWORD* a3);
void nvidia_62cfb0();
__int64 nvidia_62cfe0(__int64 a1, _DWORD* a2, int* a3);
__int64 nvidia_62d090(_DWORD* a1);
__int64 nvidia_62d0f0(__int64 a1, __int64 a2);
__int64 nvidia_62d360(__int64 a1);
__int64 nvidia_62d5d0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4,
                      __int64* a5);
__int64 nvidia_62d6c0(__int64 a1, unsigned int a2, _QWORD* a3);
__int64 nvidia_62d740(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      _QWORD* a5);
__int64 nvidia_62d8a0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4,
                      __int64* a5, __int64 a6);
__int64 nvidia_62dce0(__int64 a1, __int64* a2);
__int64 nvidia_62de80(__int64 a1, __int64 a2);
__int64 nvidia_62dee0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      unsigned int* a5);
__int64 nvidia_62dfd0(__int64 a1, __int64 a2);
__int64 nvidia_62e060(__int64 a1);
void nvidia_62e0d0(__int64 a1);
__int64 nvidia_62e140(__int64 a1, unsigned int a2, unsigned __int64 a3,
                      __int64 a4, __int64 a5, __int64* a6);
__int64 nvidia_62e9b0(__int64 a1, __int64 a2, __int64 a3, int a4, _DWORD* a5);
__int64 nvidia_62eb50(__int64 a1, __int64 a2);
__int64 nvidia_62ec60(__int64 a1);
__int64 nvidia_62ed10(__int64 result, _QWORD* a2);
__int64 nvidia_62ed30(_QWORD* a1);
__int64 nvidia_62ed90(__int64 a1, __int64* a2);
_DWORD* nvidia_62efd0(_DWORD* result, _QWORD* a2, char a3, __int64 a4);
char* nvidia_62f120(char* result);
__int64 nvidia_62f550(__int64 result);
__int64 nvidia_62f660(__int64* a1, __int64 a2);
int* nvidia_630140(int* result, __int64 a2, __int64 a3);
__int64 nvidia_6302e0(int* a1, __int64 a2, __int64 a3);
__int64 nvidia_630440(unsigned int* a1, __int64 a2, __int64 a3);
__int64 nvidia_630700(int* a1, __int64 a2);
__int64 nvidia_630820(__int64* a1, _QWORD* a2);
__int64 nvidia_6308c0(__int64 result, __int64 a2, _QWORD* a3, __int64 a4,
                      __int64 a5, _DWORD* a6, __int64 a7);
int* nvidia_6316c0(int* result, unsigned int* a2, __int64 a3, __int64 a4);
__int64 nvidia_631b10(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5);
__int64 nvidia_631ec0(__int64* a1, unsigned __int64 a2);
__int64 nvidia_632040(_QWORD* a1, unsigned __int64 a2);
__int64 nvidia_632100(__int64 a1, int a2, __int64 a3, __int64 a4);
__int64 nvidia_632420(__int64 a1);
__int64 nvidia_632550(__int64 a1);
_QWORD* nvidia_632590(_QWORD* result, __int64 a2, __int64 a3);

__int64 nvidia_62b900(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  unsigned __int64 i;
  __int64 v5;
  __int64 result;

  v1 = *(_QWORD*)(a1 + 8);
  if (*(_QWORD*)(v1 + 40) != 0) {
    v3 = 0;
    for (i = 0; i < *(_QWORD*)(v1 + 40); ++i) {
      v5 = *(_QWORD*)(v1 + 32);
      if (*(_DWORD*)(v5 + v3) == 5 && *(_BYTE*)(v5 + v3 + 8) == 111) {
        result = nvidia_626630((__int64*)(a1 + 32), (_DWORD*)(v5 + v3 + 8));
        if ((_DWORD)result != 0) {
          return result;
        }
        v1 = *(_QWORD*)(a1 + 8);
      }
      v3 += 12;
    }
  }
  return 0;
}

__int64 nvidia_62b9a0(__int64 a1, __int64 a2) { return 8 * a2; }

__int64 nvidia_62b9c0(__int64 a1, __int64 a2, __int64 a3, unsigned __int64* a4)
{
  unsigned __int8* i;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned int v11;

  if (a3 == 0) {
    return 0;
  }
  for (i = (unsigned __int8*)(a2 + 17);; i += 24) {
    v5 = *(_QWORD*)(i - 17);
    if ((v5 & 0xFFFFFF0000000003LL) != 0) {
      break;
    }
    v6 = *(_QWORD*)(i - 9);
    if ((unsigned __int64)(v6 - 0x200000) <= 0xFFFFFFFFFFE00000LL) {
      break;
    }
    v7 = v5 & 0xFF00000000LL;
    v8 = *(_QWORD*)(i - 17) & 0xFFFFFFFCLL;
    v9 = v7 | (v6 << 42);
    if (*(i - 1) != 0) {
      v10 = 0;
    }
    else {
      v10 = 0x8000000000000000LL;
    }
    --a3;
    v11 = *i;
    *a4++ = v10 | v9 | ((unsigned __int64)v11 << 41) | v8;
    if (a3 == 0) {
      return 0;
    }
  }
  return 11;
}

__int64 nvidia_62ba40(__int64 a1, int a2)
{
  __int64 v2;
  int* v3;
  int v4;

  v2 = *(_QWORD*)(a1 + 40);
  if (v2 == 0) {
    return 11;
  }
  v3 = *(int**)(a1 + 32);
  while (1) {
    v4 = *v3++;
    if (v4 == a2) {
      break;
    }
    if (--v2 == 0) {
      return 11;
    }
  }
  return 0;
}

__int64 nvidia_62baa0(__int64 a1, int a2)
{
  if ((a2 & 0xFFFEFFFF) != 0) {
    return 27;
  }
  else {
    return 26;
  }
}

unsigned __int64 nvidia_62bae0(__int64 a1)
{
  __int64 v1;
  unsigned __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 result;
  _BYTE* v7;
  __int64 v8;
  __int64 v9;
  char v10;
  unsigned __int64 v11;
  char v12;
  char* v13;
  char v14;

  v1 = *(_QWORD*)(a1 + 8);
  v2 = *(_QWORD*)(v1 + 80);
  if (v2 == 0) {
    return 0;
  }
  v3 = *(_QWORD*)(v1 + 72);
  v4 = *(_QWORD*)(v1 + 80) & 7LL;
  if (v2 < 8) {
    v5 = 0;
    result = 0;
    if ((v2 & 7) == 0) {
      return result;
    }
    goto LABEL_9;
  }
  v7 = (_BYTE*)(v3 + 8);
  v8 = 0;
  result = 0;
  v9 = -(__int64)(v2 & 0xFFFFFFFFFFFFFFF8LL);
  do {
    v8 -= 8;
    v10 = v7[6];
    v11 = result + (*(v7 - 8) & 1) + (*(v7 - 6) & 1) +
          (unsigned __int64)(*(v7 - 4) & 1) + (*(v7 - 2) & 1) +
          (unsigned __int64)(*v7 & 1) + (v7[2] & 1);
    v12 = v7[4];
    v7 += 16;
    result = v11 + (v12 & 1) + (unsigned __int64)(v10 & 1);
  } while (v9 != v8);
  v5 = -v8;
  if (v4 != 0) {
  LABEL_9:
    v13 = (char*)(v3 + 2 * v5);
    do {
      v14 = *v13;
      v13 += 2;
      --v4;
      result += v14 & 1;
    } while (v4 != 0);
  }
  return result;
}

__int64 nvidia_62bbc0(_QWORD* a1, __int64* a2)
{
  unsigned __int64 v4;
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int v11;
  char v13[4];

  v4 = (*(__int64 (**)(_QWORD*))(*a1 + 128LL))(a1);
  v5 = nvidia_62ada0(a2, v4);
  if (v5 != 0) {
    return v5;
  }
  else {
    nvidia_62ad20(a2, 0);
    v6 = a1[1];
    if (*(_QWORD*)(v6 + 80) != 0) {
      v7 = 0;
      v8 = 0;
      v9 = 0;
      do {
        if ((*(_BYTE*)(*(_QWORD*)(v6 + 72) + v7) & 1) != 0) {
          v13[0] = 0;
          if (v8 > 0xFF) {
            if (v9 == 0) {
              v9 = 11;
            }
          }
          else {
            v13[0] = v8;
          }
          v10 = nvidia_62bcb0_alt1(a2, v13);
          if (v9 != 0) {
            v11 = v9;
          }
          else {
            v11 = v10;
          }
          if (v10 != 0) {
            v9 = v11;
          }
          v6 = a1[1];
        }
        ++v8;
        v7 += 2;
      } while (v8 < *(_QWORD*)(v6 + 80));
    }
    else {
      return 0;
    }
  }
  return v9;
}

__int64 nvidia_62bcb0(__int64* a1, _BYTE* a2)
{
  unsigned __int64 v2;
  __int64 v3;
  _BYTE* v4;
  __int64* v5;
  unsigned __int64 v6;
  unsigned int v7;

  v3 = a1[1];
  v2 = a1[2];
  if (v2 < v3 + 1) {
    v4 = a2;
    v5 = a1;
    if (v2 >= 0x10) {
      v6 = 2 * v2;
    }
    else {
      v6 = 16;
    }
    v7 = nvidia_62ada0(a1, v6);
    if (v7 != 0) {
      return v7;
    }
    v3 = v5[1];
    a1 = v5;
    a2 = v4;
  }
  *(_BYTE*)(*a1 + v3) = *a2;
  ++a1[1];
  return 0;
}

__int64 nvidia_62bd40(__int64 result, unsigned int a2, __int64 a3)
{
  __int64 v3;
  char* v5;
  char v6;
  __int64 v7;
  char v8;
  int v9;

  *(_QWORD*)a3 = 0;
  *(_QWORD*)(a3 + 8) = 0;
  v3 = *(_QWORD*)(result + 8);
  if (*(_QWORD*)(v3 + 80) > (unsigned __int64)a2) {
    v5 = (char*)(*(_QWORD*)(v3 + 72) + 2LL * a2);
    v6 = ~(2 * *(_BYTE*)(v3 + 169)) & 2;
    *(_BYTE*)a3 = *v5 & 1;
    *(_BYTE*)(a3 + 1) = (*v5 & 2) != 0;
    *(_BYTE*)(a3 + 2) = ((unsigned __int8)*v5 >> v6) & 1;
    *(_BYTE*)(a3 + 3) = (*v5 & 8) != 0;
    v7 = result;
    if ((*v5 & 8) != 0) {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 168LL))(result);
    }
    else {
      result = 1;
    }
    *(_BYTE*)(a3 + 4) = result & 1;
    *(_DWORD*)(a3 + 8) = (unsigned __int8)v5[1];
    v8 = *v5;
    v9 = 4096;
    if ((v8 & 8) != 0) {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)v7 + 448LL))(v7);
      if ((_DWORD)result != 0) {
        v9 = 0x10000;
      }
      else {
        v9 = 4096;
      }
    }
    *(_DWORD*)(a3 + 12) = v9;
  }
  return result;
}

__int64 nvidia_62be30(_QWORD* a1, int* a2, unsigned int* a3)
{
  int* v5;
  int v6;
  int v7;
  int v8;
  int v9;
  __int64 result;
  int* v11;
  int v12;
  bool v13;
  __int64 v14;
  __int64 v15;
  int* v16;
  unsigned int v17;
  int v18;

  v17 = -1;
  if (*((_BYTE*)a2 + 4) == 1) {
    if (*((_BYTE*)a2 + 5) == 1) {
      v5 = a2;
      v6 = (*(__int64 (**)(_QWORD*))(*a1 + 168LL))(a1);
      a2 = v5;
      v7 = v6;
      v8 = v5[2];
      v9 = *v5;
      result = 11;
      if (*v5 > 1) {
        goto LABEL_4;
      }
    LABEL_9:
      if (v9 != 0) {
        if (v9 != 1) {
          return result;
        }
        v18 = -1;
        if ((v7 & 1) != 0) {
          v11 = a2;
          result = (*(__int64 (**)(_QWORD*))(*a1 + 376LL))(a1);
          a2 = v11;
        }
        if (v8 != 3 && (_DWORD)result != 0) {
          result =
              (*(__int64 (**)(_QWORD*, int*, int*))(*a1 + 352LL))(a1, a2, &v18);
        }
      }
      else {
        v18 = -1;
        if ((v7 & 1) != 0) {
          v16 = a2;
          result = (*(__int64 (**)(_QWORD*))(*a1 + 408LL))(a1);
          a2 = v16;
        }
        if (v8 != 3 && (_DWORD)result != 0) {
          result =
              (*(__int64 (**)(_QWORD*, int*, int*))(*a1 + 400LL))(a1, a2, &v18);
        }
      }
      v17 = v18;
      if ((_DWORD)result == 0) {
        goto LABEL_23;
      }
      return result;
    }
    v7 = 1;
    v8 = a2[2];
    v9 = *a2;
    result = 11;
    if (*a2 <= 1) {
      goto LABEL_9;
    }
  }
  else {
    v7 = 0;
    v8 = a2[2];
    v9 = *a2;
    result = 11;
    if (*a2 <= 1) {
      goto LABEL_9;
    }
  }
LABEL_4:
  if (v9 != 2) {
    if (v9 != 3) {
      return result;
    }
    result = (*(__int64 (**)(_QWORD*))(*a1 + 440LL))(a1);
    if ((_DWORD)result != 0) {
      return result;
    }
    goto LABEL_23;
  }
  v12 = -1;
  v18 = -1;
  if (((v8 == 3) & ~v7) == 0) {
    v13 = (v7 & 1) == 0;
    v14 = 424;
    if (!v13) {
      v14 = 432;
    }
    result = (*(__int64 (**)(_QWORD*))(*a1 + v14))(a1);
    v12 = v18;
  }
  v17 = v12;
  if ((_DWORD)result == 0) {
  LABEL_23:
    v15 = a1[1];
    if (*(_QWORD*)(v15 + 80) > (unsigned __int64)v17 &&
        (*(_BYTE*)(*(_QWORD*)(v15 + 72) + 2LL * v17) & 1) != 0) {
      *a3 = v17;
      return 0;
    }
    else {
      return 2;
    }
  }
  return result;
}

__int64 nvidia_62c060(__int64 a1, _DWORD* a2, int* a3)
{
  int v3;
  int v5;
  int* v6;
  __int64 result;
  int v8;

  v3 = a2[6];
  v8 = -1;
  if (a2[3] == 1 && v3 == 0) {
    *a3 = 42;
    return 0;
  }
  v5 = a2[5];
  if (v5 == 0) {
    v6 = a3;
    result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 360LL))(a1);
    if ((_DWORD)result != 0) {
      return result;
    }
  LABEL_11:
    *v6 = v8;
    return 0;
  }
  if (v5 != 1) {
    return 11;
  }
  v6 = a3;
  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 368LL))(a1);
  if ((_DWORD)result == 0) {
    goto LABEL_11;
  }
  return result;
}

__int64 nvidia_62c120(__int64 a1, __int64 a2, _DWORD* a3)
{
  int v3;
  __int64 result;
  __int64 v5;
  unsigned int v6;

  v3 = *(_DWORD*)(a2 + 24);
  result = 11;
  if (v3 <= 3) {
    if (v3 <= 1) {
      if (v3 != 0) {
        if (v3 == 1) {
          *a3 = 17;
          return 0;
        }
        return result;
      }
    LABEL_11:
      *a3 = 70;
      return 0;
    }
    if (v3 != 2) {
      goto LABEL_11;
    }
    return 2;
  }
  if (v3 <= 5) {
    if (v3 == 4) {
      v5 = *(unsigned int*)(a2 + 16);
      if ((unsigned int)v5 < 0xB) {
        *a3 = SdkData_c77008[v5];
        return 0;
      }
    }
    return 2;
  }
  if (v3 == 6) {
    v6 = *(_DWORD*)(a2 + 16) - 7;
    if (v6 < 4) {
      *a3 = SdkData_bb3080[v6];
      return 0;
    }
    return 2;
  }
  if (v3 == 7) {
    *a3 = 1;
    return 0;
  }
  return result;
}

__int64 nvidia_62c210(__int64 a1, __int64 a2, _DWORD* a3)
{
  unsigned int v3;
  __int64 v5;

  v3 = *(_DWORD*)(a2 + 24);
  if (v3 > 7) {
    return 11;
  }
  if (((1 << v3) & 0xDB) != 0) {
    return 2;
  }
  if (v3 == 2) {
    *a3 = 123;
    return 0;
  }
  else {
    v5 = *(unsigned int*)(a2 + 16);
    if ((unsigned int)v5 >= 0xB) {
      return 2;
    }
    *a3 = SdkData_c77034[v5];
    return 0;
  }
}

__int64 nvidia_62c280(__int64 a1, _DWORD* a2, int* a3)
{
  unsigned int v3;
  int v4;
  int v5;
  __int64 result;
  int v7;
  __int64 v8;
  _DWORD* v9;
  bool v10;
  int v11;

  v3 = a2[2];
  v4 = a2[6];
  v5 = -1;
  result = 11;
  v7 = 0;
  if (v4 <= 3) {
    if (v4 > 1) {
      if (v4 != 2) {
        switch (a2[4]) {
        case 0:
          v7 = 0;
          v5 = 81;
          break;
        case 1:
          v7 = 0;
          v5 = 82;
          break;
        case 2:
        case 3:
          v7 = 0;
          v5 = 83;
          break;
        case 4:
        case 6:
          goto LABEL_34;
        case 5:
          v7 = 0;
          v5 = 84;
          break;
        case 7:
          v7 = 0;
          if (v3 == 1) {
            v5 = 116;
          }
          else {
            v5 = 112;
          }
          break;
        case 8:
          v7 = 0;
          if (v3 == 1) {
            v5 = 115;
          }
          else {
            v5 = 111;
          }
          break;
        case 9:
          v7 = 0;
          if (v3 == 1) {
            v5 = 117;
          }
          else {
            v5 = 113;
          }
          break;
        case 0xA:
          v7 = 0;
          if (v3 == 1) {
            v5 = 118;
          }
          else {
            v5 = 114;
          }
          break;
        default:
          v5 = -1;
          goto LABEL_44;
        }
      }
      goto LABEL_29;
    }
    if (v4 != 0) {
      if (v4 != 1) {
        return result;
      }
      v8 = (unsigned int)a2[4];
      if ((unsigned int)v8 < 0xB) {
        v9 = &SdkData_c77060;
        v7 = 0;
      LABEL_26:
        v5 = v9[v8];
        goto LABEL_29;
      }
    }
    else {
      v8 = (unsigned int)a2[4];
      if ((unsigned int)v8 < 0xB) {
        v7 = 0;
        v9 = &SdkData_c7708c;
        goto LABEL_26;
      }
    }
    goto LABEL_27;
  }
  if (v4 <= 5) {
    if (v4 == 4) {
      switch (a2[4]) {
      case 0:
        v7 = 0;
        v5 = 23;
        break;
      case 1:
        v7 = 0;
        v5 = 24;
        break;
      case 2:
      case 3:
        v7 = 0;
        v5 = 25;
        break;
      case 4:
      case 6:
      LABEL_34:
        v7 = 0;
        goto LABEL_28;
      case 5:
        v7 = 0;
        v5 = 26;
        break;
      case 7:
        v7 = 0;
        if (v3 == 1) {
          v5 = 63;
        }
        else {
          v5 = 59;
        }
        break;
      case 8:
        v7 = 0;
        if (v3 == 1) {
          v5 = 62;
        }
        else {
          v5 = 58;
        }
        break;
      case 9:
        v7 = 0;
        if (v3 == 1) {
          v5 = 64;
        }
        else {
          v5 = 60;
        }
        break;
      case 0xA:
        v7 = 0;
        if (v3 == 1) {
          v5 = 65;
        }
        else {
          v5 = 61;
        }
        break;
      default:
        v5 = -1;
      LABEL_44:
        v7 = 11;
        break;
      }
    }
  LABEL_29:
    if (v3 == 3) {
      return 2;
    }
    goto LABEL_40;
  }
  if (v4 == 6) {
    v8 = (unsigned int)a2[4];
    if ((unsigned int)v8 < 0xB) {
      v7 = 0;
      v9 = &SdkData_c770b8;
      goto LABEL_26;
    }
  LABEL_27:
    v7 = 11;
  LABEL_28:
    v5 = -1;
    goto LABEL_29;
  }
  if (v4 != 7) {
    return result;
  }
  v7 = a2[4];
  result = 2;
  if (v7 <= 1) {
    if (v7 != 0) {
      if (v7 != 1) {
        return result;
      }
      v7 = 0;
      v10 = v3 > 1;
      v11 = 8;
      v5 = 3;
    }
    else {
      v10 = v3 > 1;
      v11 = 7;
      v5 = 2;
    }
  }
  else if ((unsigned int)(v7 - 2) >= 2) {
    if (v7 != 5) {
      return result;
    }
    v7 = 0;
    v10 = v3 > 1;
    v11 = 10;
    v5 = 5;
  }
  else {
    v7 = 0;
    v10 = v3 > 1;
    v11 = 9;
    v5 = 4;
  }
  if (!v10) {
    v5 = v11;
  }
LABEL_40:
  result = 2;
  if (v7 == 0 && v5 != -1) {
    *a3 = v5;
    return 0;
  }
  return result;
}

__int64 nvidia_62c570(__int64 a1, _DWORD* a2, _DWORD* a3)
{
  unsigned int v3;
  __int64 v5;
  char* v6;
  __int64 v7;

  v3 = a2[6];
  if (v3 > 7) {
    return 11;
  }
  if (((1 << v3) & 0xDB) != 0) {
    return 2;
  }
  if (v3 == 2) {
    v5 = (unsigned int)a2[4];
    if ((unsigned int)v5 > 5) {
      return 2;
    }
    if (((0x2Fu >> v5) & 1) == 0) {
      return 2;
    }
    v6 = (char*)&SdkData_c770e4 + 4 * v5;
    if (a2[2] == 3) {
      return 2;
    }
  }
  else {
    v7 = (unsigned int)a2[4];
    if ((unsigned int)v7 > 0xA) {
      return 2;
    }
    if (((0x7AFu >> v7) & 1) == 0) {
      return 2;
    }
    v6 = (char*)&SdkData_c770fc + 4 * v7;
    if (a2[2] == 3) {
      return 2;
    }
  }
  *a3 = *(_DWORD*)v6;
  return 0;
}

__int64 nvidia_62c620(__int64 a1, _DWORD* a2, int* a3)
{
  int v3;
  int v4;
  int v7;
  int* v8;
  __int64 result;
  int v10;

  v4 = a2[2];
  v3 = a2[3];
  v10 = -1;
  if (v3 == 1 && a2[6] == 0 && v4 != 3) {
    *a3 = 43;
    return 0;
  }
  v7 = a2[5];
  if (v7 == 0) {
    v8 = a3;
    result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 384LL))(a1);
    if ((_DWORD)result != 0) {
      return result;
    }
  LABEL_14:
    *v8 = v10;
    return 0;
  }
  if (v7 != 1) {
    return 11;
  }
  v8 = a3;
  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 392LL))(a1);
  if ((_DWORD)result == 0) {
    goto LABEL_14;
  }
  return result;
}

__int64 nvidia_62c6f0(__int64 a1, __int64 a2, _DWORD* a3)
{
  *a3 = 254;
  return 0;
}

__int64 nvidia_62c700(__int64 a1, __int64 a2, int* a3)
{
  int v3;
  int v4;
  unsigned int v5;
  unsigned int v6;
  int v7;
  int v8;
  bool v9;
  int v10;
  unsigned int v11;
  unsigned int v12;
  int* v14;

  v4 = *(_DWORD*)(a2 + 8);
  v3 = *(_DWORD*)(a2 + 12);
  v5 = 11;
  if (v3 <= 2) {
    if ((unsigned int)v3 >= 3) {
      return v5;
    }
    v8 = 0;
    if (v4 == 3) {
      v7 = -1;
    }
    else {
      v7 = 254;
    }
    goto LABEL_26;
  }
  if (v3 > 4) {
    if (v3 != 5) {
      if (v3 == 6) {
        v11 = *(_DWORD*)(a2 + 16);
        if (v11 > 0xA) {
          goto LABEL_48;
        }
        if (((1 << v11) & 0x18C) != 0) {
          v9 = v4 == 3;
          v10 = 248;
          v8 = 0;
          goto LABEL_23;
        }
        if (((1 << v11) & 0x660) != 0) {
          v8 = 0;
          v9 = v4 == 3;
          v10 = 250;
          goto LABEL_23;
        }
        if (v11 == 1) {
          v8 = 0;
          v9 = v4 == 3;
          v10 = 246;
        }
        else {
        LABEL_48:
          if (v11 != 0) {
            return 2;
          }
          v8 = 0;
          v9 = v4 == 3;
          v10 = 244;
        }
      LABEL_23:
        if (v9) {
          v7 = v10;
        }
        else {
          v7 = v10 + 1;
        }
        goto LABEL_26;
      }
      return v5;
    }
    v12 = *(_DWORD*)(a2 + 16);
    v7 = -1;
    if (v12 <= 0xA) {
      if (((1 << v12) & 0x18C) != 0) {
        if (v4 == 3) {
          v8 = 0;
          v7 = 237;
        }
        else {
          v8 = 0;
          if (v4 == 1) {
            v7 = 241;
          }
          else {
            v7 = 238;
          }
          if (*(_BYTE*)(a2 + 29) != 0) {
            v7 = 240;
          }
        }
        goto LABEL_26;
      }
      if (((1 << v12) & 0x660) != 0) {
        v8 = 0;
        v9 = v4 == 3;
        v10 = 242;
        goto LABEL_23;
      }
      if (v12 == 4) {
        goto LABEL_58;
      }
    }
    if (v12 == 1) {
      goto LABEL_65;
    }
    if (v12 != 0) {
      goto LABEL_64;
    }
    v8 = 0;
    if (v4 == 3) {
      v7 = 230;
    }
    else {
      v7 = 233;
    }
  LABEL_26:
    v5 = 2;
    if (v8 == 0 && v7 != -1) {
      v5 = 0;
      *a3 = v7;
    }
    return v5;
  }
  if (v3 != 3) {
    v6 = *(_DWORD*)(a2 + 16);
    v7 = -1;
    if (v6 <= 0xA) {
      if (((1 << v6) & 0x18C) != 0) {
        if (v4 == 3) {
          v8 = 0;
          v7 = 223;
        }
        else {
          v8 = 0;
          if (v4 == 1) {
            v7 = 227;
          }
          else {
            v7 = 224;
          }
          if (*(_BYTE*)(a2 + 29) != 0) {
            v7 = 226;
          }
        }
        goto LABEL_26;
      }
      if (((1 << v6) & 0x660) != 0) {
        v8 = 0;
        v9 = v4 == 3;
        v10 = 228;
        goto LABEL_23;
      }
      if (v6 == 4) {
      LABEL_58:
        v8 = 0;
        goto LABEL_26;
      }
    }
    if (v6 != 1) {
      if (v6 == 0) {
        v8 = 0;
        if (v4 == 3) {
          v7 = 216;
        }
        else {
          v7 = 219;
        }
        goto LABEL_26;
      }
    LABEL_64:
      v8 = 11;
      goto LABEL_26;
    }
  LABEL_65:
    v14 = a3;
    v8 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 416LL))(a1);
    a3 = v14;
    v7 = -1;
    goto LABEL_26;
  }
  return 2;
}

__int64 nvidia_62c9d0(__int64 a1, __int64 a2, int* a3)
{
  int v3;
  int v4;
  int v5;
  int v7;

  v3 = *(_DWORD*)(a2 + 8);
  v4 = *(_DWORD*)(a2 + 12);
  if (v4 == 5) {
    if (v3 == 3) {
      v7 = 235;
    }
    else {
      v7 = 205;
    }
    *a3 = v7;
    return 0;
  }
  else if (v4 == 4) {
    if (v3 == 3) {
      v5 = 221;
    }
    else {
      v5 = 204;
    }
    *a3 = v5;
    return 0;
  }
  else {
    return 2;
  }
}

__int64 nvidia_62ca30(__int64 a1, __int64 a2, _DWORD* a3)
{
  *a3 = 0;
  return 0;
}

__int64 nvidia_62ca40(__int64 a1, __int64 a2, _DWORD* a3)
{
  *a3 = 202;
  return 0;
}

__int64 nvidia_62ca50(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2;

  v2 =
      ((a2 - ((a2 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL) +
      (((a2 - ((a2 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL);
  return 2 *
         ((unsigned int)((0x101010101010101LL *
                          ((v2 + (v2 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >>
                         32) >>
          24) *
         *(_DWORD*)(*(_QWORD*)(a1 + 8) + 108LL) *
         *(_DWORD*)(*(_QWORD*)(a1 + 8) + 104LL);
}

__int64 nvidia_62cad0() { return 200704; }

void nvidia_62cae0(__int64 a1, __int64 a2)
{
  *(_WORD*)a2 = 0;
  *(_BYTE*)(a2 + 2) = 0;
  *(_DWORD*)(a2 + 4) = 0;
}

__int64 nvidia_62caf0(__int64 a1, __int64 a2)
{
  *(_QWORD*)a2 = 0;
  *(_DWORD*)(a2 + 8) = 1;
  return 0;
}

__int64 nvidia_62cb20() { return 2166784; }

__int64 nvidia_62cb30(__int64 a1)
{
  if (*(_BYTE*)(*(_QWORD*)(a1 + 8) + 169LL) != 0) {
    return 4096;
  }
  else {
    return 0x10000;
  }
}

__int64 nvidia_62cb60(__int64 a1, __int64 a2, int* a3)
{
  int v3;
  int v4;
  int v5;
  bool v6;
  int v7;

  v4 = *(_DWORD*)(a2 + 8);
  v3 = *(_DWORD*)(a2 + 12);
  if (v3 == 5) {
    v5 = 235;
    if (v4 != 3) {
      v6 = *(_BYTE*)(a2 + 29) == 0;
      v7 = 205;
    LABEL_7:
      if (v6) {
        v5 = v7;
      }
    }
  LABEL_10:
    *a3 = v5;
    return 0;
  }
  if (v3 == 4) {
    v5 = 221;
    if (v4 != 3) {
      v6 = *(_BYTE*)(a2 + 29) == 0;
      v7 = 204;
      goto LABEL_7;
    }
    goto LABEL_10;
  }
  return 2;
}

unsigned __int64 nvidia_62cbc0(__int64 a1, __int64 a2)
{
  if ((*(unsigned int*)(a2 + 128) |
       ((unsigned __int64)*(unsigned int*)(a2 + 132) << 32)) != 0 &&
      (*(_DWORD*)(a2 + 128) & 0x1FLL |
       ((unsigned __int64)*(unsigned int*)(a2 + 132) << 32) &
           0xE00000000000001FLL) == 0) {
    return *(unsigned int*)(a2 + 128) |
           ((unsigned __int64)*(unsigned int*)(a2 + 132) << 32);
  }
  else {
    return -1;
  }
}

__int64 nvidia_62cbf0(__int64 a1, _QWORD* a2, _QWORD* a3)
{
  *a2 = &SdkData_c77188;
  *a3 = 1;
  return 0;
}

__int64 nvidia_62cc10(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  _QWORD v5[6];

  if (*(_BYTE*)(*(_QWORD*)(result + 8) + 169LL) == 1) {
    v5[4] = v2;
    v5[5] = v3;
    result = (*(__int64 (**)(_QWORD, _QWORD*))(
        **(_QWORD**)(result + 16) + 64LL))(*(_QWORD*)(result + 16), v5);
    qmemcpy((void*)(a2 + 408), v5, 30);
  }
  return result;
}

bool nvidia_62cc90(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  _QWORD v4[6];

  if (*(_BYTE*)(*(_QWORD*)(a1 + 8) + 169LL) != 1) {
    return false;
  }
  v4[4] = v1;
  v4[5] = v2;
  (*(void (**)(_QWORD, _QWORD*))(**(_QWORD**)(a1 + 16) + 64LL))(
      *(_QWORD*)(a1 + 16), v4);
  return v4[0] != 0;
}

__int64 nvidia_62ce10(__int64 a1, _DWORD* a2, int* a3)
{
  __int64 v3;
  int v5;
  __int64 result;
  int v7;

  v3 = (unsigned int)a2[6];
  if ((_DWORD)v3 == 0 && a2[3] == 1) {
    v7 = 2;
    goto LABEL_11;
  }
  v5 = a2[5];
  if (v5 == 1) {
    if ((_DWORD)v3 == 2) {
      v7 = 6;
    }
    else {
      if ((_DWORD)v3 != 5) {
        return 2;
      }
      v7 = 4;
    }
    goto LABEL_11;
  }
  result = 2;
  if (v5 == 0 && (unsigned int)v3 <= 7 && ((0x9Bu >> v3) & 1) != 0) {
    v7 = SdkData_bb0250[v3];
  LABEL_11:
    result = 0;
    *a3 = v7;
  }
  return result;
}

__int64 nvidia_62cea0(__int64 a1, _DWORD* a2, int* a3)
{
  __int64 v3;
  int v5;
  __int64 result;
  int v7;

  v3 = (unsigned int)a2[6];
  if ((_DWORD)v3 == 0 && a2[3] == 1) {
    v7 = 10;
    goto LABEL_11;
  }
  v5 = a2[5];
  if (v5 == 1) {
    if ((_DWORD)v3 == 2) {
      v7 = 9;
    }
    else {
      if ((_DWORD)v3 != 5) {
        return 2;
      }
      v7 = 13;
    }
    goto LABEL_11;
  }
  result = 2;
  if (v5 == 0 && (unsigned int)v3 <= 7 && ((0x9Bu >> v3) & 1) != 0) {
    v7 = SdkData_bb01d0[v3];
  LABEL_11:
    result = 0;
    *a3 = v7;
  }
  return result;
}

__int64 nvidia_62cf30(__int64 a1, __int64 a2, _DWORD* a3)
{
  *a3 = 6;
  return 0;
}

__int64 nvidia_62cf40(__int64 a1, __int64 a2, int* a3)
{
  int v3;

  if (*(_BYTE*)(a2 + 6) == 1) {
    if (*(_BYTE*)(*(_QWORD*)(a1 + 24) + 7LL) != 0) {
      v3 = 9;
    }
    else {
      v3 = 8;
    }
    *a3 = v3;
    return 0;
  }
  else {
    *a3 = 9;
    return 0;
  }
}

__int64 nvidia_62cfa0(__int64 a1, __int64 a2, _DWORD* a3)
{
  *a3 = 15;
  return 0;
}

void nvidia_62cfb0()
{
  if (SdkData_10406cc == 1) {
    SdkData_ea44f0 = 0;
  }
}

__int64 nvidia_62cfe0(__int64 a1, _DWORD* a2, int* a3)
{
  __int64 result;
  __int64* v7;
  int v8;
  int v9;
  __int64 v10;
  int v12;

  result = nvidia_628f50();
  v7 = SdkData_e899d8[0];
  *(_DWORD*)(a1 + 24) = 0;
  *(_BYTE*)(a1 + 28) = 0;
  *(_DWORD*)(a1 + 24) = -1;
  *(_QWORD*)a1 = v7 + 2;
  *(_QWORD*)(a1 + 32) = a2 + 70;
  v8 = *a3;
  if (*a3 != 0) {
    if ((v8 & (v8 - 1)) != 0) {
      v9 = 0;
    }
    else {
      v9 = a2[98] & v8;
    }
  }
  else {
    v10 = *((_QWORD*)a3 + 2);
    v9 = a2[99];
    if (*((_QWORD*)a3 + 3) == v10 && v10 != 0) {
      v9 = 0;
    }
  }
  v12 = a2[100];
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_DWORD*)(a1 + 96) = 0;
  *(_DWORD*)(a1 + 40) = v9;
  *(_DWORD*)(a1 + 44) = v12;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = -1;
  *(_QWORD*)(a1 + 80) = -1;
  *(_QWORD*)(a1 + 88) = 0;
  return result;
}

__int64 nvidia_62d090(_DWORD* a1)
{
  __int64 result;
  unsigned int v3;
  unsigned int v4;

  result = (*(__int64 (**)(_DWORD*))(*(_QWORD*)a1 + 72LL))(a1);
  v3 = a1[6];
  if (v3 != -1) {
    v4 = result;
    NvOsDrvClose_plt(v3);
    a1[6] = -1;
    return v4;
  }
  return result;
}

__int64 nvidia_62d0f0(__int64 a1, __int64 a2)
{
  __int64 v7;
  char v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned int v11;
  unsigned __int64 v12;
  __int64 v13;
  _BOOL4 v15;
  __int64 result;
  unsigned int v19;
  int v20;
  __int64 v21;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  int v27;
  struct {
    __int64 v28;
    __int64 v29;
    unsigned __int64 v30;
    unsigned __int64 v31;
    __int64 v32;
  } v28_;

  if (*(_DWORD*)a2 != 0 && *(_DWORD*)a2 != *(_DWORD*)(a1 + 40)) {
    return 11;
  }
  v7 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 56LL))(
      *(_QWORD*)(a1 + 8));
  v8 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v7 + 96LL))(
      v7, *(unsigned int*)(a1 + 40));
  v9 = *(_QWORD*)(a2 + 16);
  if (v9 == 0) {
    v11 = *(_DWORD*)(a1 + 40);
    if (v11 <= 0x10000) {
      v19 = 0x10000;
    }
    else {
      v19 = *(_DWORD*)(a1 + 40);
    }
    v10 = (unsigned __int64)v19 << 11;
    if (((v10 | 0x2000000000LL) & ~(-1LL << v8)) == 0) {
      v9 = 0x2000000000LL;
      if (v11 != 0) {
        v13 = 0x400000000LL;
      }
      else {
        v13 = 0;
      }
      goto LABEL_32;
    }
    return 11;
  }
  v10 = *(_QWORD*)(a2 + 8);
  if (((v10 | v9) & ~(-1LL << v8)) != 0) {
    return 11;
  }
  v11 = *(_DWORD*)(a1 + 40);
  v12 = *(_QWORD*)(a2 + 24);
  if (v11 != 0) {
    v13 = *(_QWORD*)(a2 + 24);
    v15 = v12 >= v10 || v12 == 0;
    if ((v12 & ~(-1LL << v8)) == 0 && v12 <= v9 && v15) {
      goto LABEL_32;
    }
    return 11;
  }
  v13 = 0;
  if (v12 != v9 && v12 != 0) {
    return 2;
  }
LABEL_32:
  if (*(_DWORD*)(a1 + 24) != -1) {
    return 8;
  }
  v20 = *(unsigned __int8*)(a2 + 33);
  v21 = NvOsDrvOpen_plt(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 200LL));
  *(_DWORD*)(a1 + 24) = v21;
  if ((_DWORD)v21 == -1) {
    return 196625;
  }
  v28_.v28 = 0;
  v28_.v29 = v11;
  v28_.v30 = v10;
  v28_.v31 = v9;
  v28_.v32 = v13;
  if (v13 == 0 || v20 != 0) {
    if (v20 != 0) {
      v22 = 5;
    }
    else {
      v22 = 4;
    }
    if (v13 != 0) {
      v22 = 1;
    }
    LODWORD(v28_.v28) = v22;
  }
  if (*(_DWORD*)(*(_QWORD*)(a1 + 32) + 32LL) < 9u) {
    return 2;
  }
  result = nvidia_644da0(v21, 1076379913, (__int64)&v28_.v28, 40);
  if ((_DWORD)result == 0) {
    v23 = *(_QWORD*)(a1 + 8);
    if (*(_DWORD*)(v23 + 312) < 0xBu ||
        (*(_QWORD*)(v23 + 360) & 0x4000000) == 0) {
      return nvidia_62d360(a1);
    }
    v24 = *(_QWORD*)(a1 + 32);
    v28_.v28 = 0;
    v28_.v29 = 0;
    result = 2;
    if (*(_DWORD*)(v24 + 32) >= 0xBu &&
        (*(_QWORD*)(v24 + 80) & 0x4000000) != 0) {
      result = nvidia_644da0(*(unsigned int*)(a1 + 24), 2148548875LL,
                             (__int64)&v28_.v28, 16);
    }
    v25 = v28_.v28;
    v26 = (unsigned int)v28_.v29;
    v27 = HIDWORD(v28_.v29);
    *(_QWORD*)(a1 + 72) = v28_.v28;
    *(_DWORD*)(a1 + 88) = v26;
    *(_DWORD*)(a1 + 96) = v27;
    if ((_DWORD)result == 0) {
      *(_QWORD*)(a1 + 80) = v25 + 0x658416F4B12023C6LL;
      if (v26 + -(int)v26 == 0) {
        *(_DWORD*)(a1 + 92) = -(int)v26;
        return nvidia_62d360(a1);
      }
      return 17;
    }
  }
  return result;
}

__int64 nvidia_62d360(__int64 a1)
{
  __int64 v1;
  unsigned int v3;
  unsigned int v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  __int64 v21;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  _QWORD* v27;
  __int64 v28;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  _QWORD v41[4];
  _QWORD v42[2];

  v1 = *(_QWORD*)(a1 + 32);
  v39 = 0;
  v40 = 0;
  v37 = 0;
  v38 = 0;
  v35 = 0;
  v36 = 0;
  v33 = 0;
  v34 = 0;
  if (*(_DWORD*)(v1 + 32) < 8u) {
    v10 = 2;
  LABEL_13:
    v30 = 0;
    v31 = 0;
    v32 = 0;
    goto LABEL_25;
  }
  v3 = nvidia_644da0_alt1(*(unsigned int*)(a1 + 24), 3225436424LL, &v33, 64);
  if (v3 != 0) {
    v10 = v3;
    goto LABEL_13;
  }
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v4 = nvidia_62ae40(&v30, (unsigned int)v34 / 0x18uLL);
  if (v4 == 0) {
    v39 = 0;
    v40 = 0;
    v37 = 0;
    v38 = 0;
    v35 = 0;
    v36 = 0;
    v33 = 0;
    v34 = 0;
    if ((unsigned int)((3 * v31) >> 29) != 0) {
      v10 = 11;
      goto LABEL_25;
    }
    LODWORD(v34) = 24 * v31;
    v42[0] = &v33;
    v42[1] = 64;
    v41[0] = &v33;
    v41[1] = 64;
    v41[2] = v30;
    v41[3] = 24 * v31;
    if (*(_DWORD*)(*(_QWORD*)(a1 + 32) + 32LL) <= 7u) {
      v10 = 2;
      goto LABEL_25;
    }
    v4 = nvidia_644cf0(*(unsigned int*)(a1 + 24), 3225436424LL, v42, 1, v41, 2);
    if (v4 == 0) {
      if (24 * v31 != (unsigned int)v34) {
        v10 = 15;
        goto LABEL_25;
      }
      v4 = nvidia_62ae40((_QWORD*)(a1 + 48), v31);
      if (v4 == 0) {
        v5 = *(_QWORD*)(a1 + 56);
        if (v5 == 0) {
          goto LABEL_24;
        }
        v6 = v30;
        v7 = *(_QWORD*)(a1 + 48);
        v8 = *(_QWORD*)(a1 + 56) & 3LL;
        if (v5 >= 4) {
          v11 = 0;
          v12 = 0;
          v13 = -(__int64)(v5 & 0xFFFFFFFFFFFFFFFCLL);
          do {
            v14 = v6 + v11;
            v15 = v7 + v11;
            v12 -= 4;
            v11 += 96;
            v16 = *(_DWORD*)(v14 + 8);
            *(_QWORD*)v15 = *(_QWORD*)v14;
            v17 = *(_QWORD*)(v14 + 16);
            v18 = *(_QWORD*)(v14 + 24);
            *(_DWORD*)(v15 + 8) = v16;
            v19 = *(_DWORD*)(v14 + 32);
            *(_QWORD*)(v15 + 16) = v17;
            *(_QWORD*)(v15 + 24) = v18;
            v20 = *(_QWORD*)(v14 + 40);
            v21 = *(_QWORD*)(v14 + 48);
            *(_DWORD*)(v15 + 32) = v19;
            v22 = *(_DWORD*)(v14 + 56);
            *(_QWORD*)(v15 + 40) = v20;
            *(_QWORD*)(v15 + 48) = v21;
            *(_DWORD*)(v15 + 56) = v22;
            v23 = *(_QWORD*)(v14 + 72);
            *(_QWORD*)(v15 + 64) = *(_QWORD*)(v14 + 64);
            *(_QWORD*)(v15 + 72) = v23;
            LODWORD(v20) = *(_DWORD*)(v14 + 80);
            v24 = *(_QWORD*)(v14 + 88);
            *(_DWORD*)(v15 + 80) = v20;
            *(_QWORD*)(v15 + 88) = v24;
          } while (v13 != v12);
          v9 = -v12;
        }
        else {
          v9 = 0;
        }
        if (v8 != 0) {
          v25 = 3 * v9;
          v10 = 0;
          v26 = v7 + 8 * v25 + 8;
          v27 = (_QWORD*)(v6 + 8 * v25 + 16);
          do {
            --v8;
            *(_QWORD*)(v26 - 8) = *(v27 - 2);
            *(_DWORD*)v26 = *((_DWORD*)v27 - 2);
            v28 = *v27;
            v27 += 3;
            *(_QWORD*)(v26 + 8) = v28;
            v26 += 24;
          } while (v8 != 0);
        }
        else {
        LABEL_24:
          v10 = 0;
        }
      LABEL_25:
        nvidia_62ae40(&v30, 0);
        NvOsFree_plt(v30);
        return v10;
      }
    }
  }
  v10 = v4;
  goto LABEL_25;
}

__int64 nvidia_62d5d0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4,
                      __int64* a5)
{
  __int64 result;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned int v14;
  __int64 v15;

  if (*a5 != 0) {
    return 8;
  }
  v11 = NvOsAlloc_plt(48);
  if (v11 != 0) {
    v12 = v11;
    nvidia_62e9b0_alt1(v11, a1, a2, a3, a4);
    *a5 = v12;
    result = nvidia_62eb50_alt1(v12, a4);
    if ((_DWORD)result == 0) {
      return result;
    }
  }
  else {
    result = 6;
  }
  v13 = *a5;
  if (*a5 != 0) {
    v14 = result;
    (**(void (***)(__int64))v13)(*a5);
    v15 = *a5;
    *(_BYTE*)(v13 + 17) = 1;
    if (v15 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v15 + 8LL))(v15);
      NvOsFree_plt(*a5);
      *a5 = 0;
    }
    return v14;
  }
  return result;
}

__int64 nvidia_62d6c0(__int64 a1, unsigned int a2, _QWORD* a3)
{
  __int64 v3;
  unsigned __int64 v4;
  bool v5;
  __int64 v6;

  v3 = *(_QWORD*)(a1 + 72);
  if (v3 == -1) {
    return 2;
  }
  if (a2 >= *(_DWORD*)(a1 + 96)) {
    return 4;
  }
  v4 = *(unsigned int*)(a1 + 88) * (unsigned __int64)a2;
  v5 = __CFADD__(v3, v4);
  v6 = v3 + v4;
  if (v5) {
    return 17;
  }
  if (v6 != *(_QWORD*)(a1 + 80) - *(int*)(a1 + 92) * (unsigned __int64)a2 -
                0x658416F4B12023C6LL) {
    return 8;
  }
  *a3 = v6;
  return 0;
}

__int64 nvidia_62d740(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      _QWORD* a5)
{
  __int64 result;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _BYTE* v12;
  __int64 v13;
  unsigned int v14;
  unsigned int v15;
  unsigned int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;

  v21 = 0;
  v22 = 0;
  v19 = 0;
  v20 = 0;
  v18 = 0;
  result = nvidia_62d8a0_alt1(a1, a2, -1, a3, a4, &v18);
  if ((_DWORD)result == 0) {
    v9 = v20;
    v19 = 0;
    v20 = 0;
    result = nvidia_62dce0_alt1(a1, &v18, 0);
    if ((_DWORD)result == 0) {
      v10 = NvOsAlloc_plt(56);
      v11 = v18;
      v12 = (_BYTE*)v10;
      if (v10 != 0) {
        nvidia_6395c0(v10, a1, v18, a3, v9, (unsigned __int8)v22, BYTE1(v22),
                      0);
        if (*a5 == 0) {
          *a5 = v12;
          return 0;
        }
        result = 8;
        v13 = *(_QWORD*)(a1 + 32);
        v23 = v11;
        if (*(_DWORD*)(v13 + 32) < 5u) {
          goto LABEL_7;
        }
      }
      else {
        result = 6;
        v17 = *(_QWORD*)(a1 + 32);
        v23 = v18;
        if (*(_DWORD*)(v17 + 32) < 5u) {
        LABEL_7:
          if (v12 != nullptr) {
            v16 = result;
            (**(void (***)(_BYTE*))v12)(v12);
            v12[17] = 1;
            (*(void (**)(_BYTE*))(*(_QWORD*)v12 + 8LL))(v12);
            NvOsFree_plt(v12);
            return v16;
          }
          return result;
        }
      }
      v14 = *(_DWORD*)(a1 + 24);
      v15 = result;
      nvidia_644da0_alt1(v14, 3221766405LL, &v23, 8);
      result = v15;
      goto LABEL_7;
    }
  }
  return result;
}

__int64 nvidia_62d8a0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4,
                      __int64* a5, __int64 a6)
{
  int v6;
  unsigned int v13;
  unsigned int v14;
  __int64 v16;
  unsigned int v17;
  int v18;
  int v19;
  __int64 v20;
  __int64 v21;
  unsigned int v22;
  unsigned __int64 v23;
  char v24;
  _BYTE* v25;
  int v26;
  unsigned int v27;
  unsigned int v28;
  unsigned __int8 v29;
  _QWORD* v30;
  unsigned __int8 v31;
  __int64 v32;
  __int64 v33;
  char v34;
  int v35;
  char v36;
  char v37;
  char v38;
  __int16 v39;
  __int64 v40;
  __int16 v41;
  char v42;
  int v43;
  struct {
    __int64 v45;
    __int64 v46;
  } v45_;

  v6 = *((_DWORD*)a5 + 8);
  if (a4 != 0) {
    v13 = 0;
  }
  else {
    v13 = 11;
  }
  if (v6 != 0) {
    v14 = v6 & (v6 - 1) |
          v6 & ~(*(_DWORD*)(a1 + 40) | *(_DWORD*)(a1 + 44)) & 0xFFFFEFFF;
    if (a4 != 0 && v14 == 0) {
      v13 = 0;
    }
    else {
      v13 = 11;
    }
  }
  if (*((_BYTE*)a5 + 27) == 1) {
    if ((*((_BYTE*)a5 + 23) & 1 | (v13 != 0)) == 0) {
      v13 = 11;
    }
    v16 = *(_QWORD*)(a1 + 8);
    if (*(_BYTE*)(*(_QWORD*)(v16 + 352) + 168LL) == 1 &&
            ((*(__int64 (**)(_QWORD))(**(_QWORD**)(v16 + 296) + 48LL))(
                 *(_QWORD*)(v16 + 296)) &
             1) != 0 ||
        v13 != 0) {
      if ((*((_BYTE*)a5 + 26) & 1) != 0) {
        if (v13 == 0) {
          v13 = 11;
        }
        if (((*(__int64 (**)(_QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 8) + 288LL) +
                                      320LL))(
                 *(_QWORD*)(*(_QWORD*)(a1 + 8) + 288LL)) &
             1) == 0) {
          goto LABEL_36;
        }
      }
    LABEL_26:
      if (v13 != 0) {
        return v13;
      }
      v17 = *((_DWORD*)a5 + 8);
      v18 = *(_DWORD*)(a1 + 40);
      v19 = *(_DWORD*)(a1 + 44);
      v20 = NvRmMemGetSize_plt(a2);
      if (v20 == 0) {
        return 196623;
      }
      v21 = *(unsigned int*)(a1 + 40);
      v22 = v18 | v19 | 0x1000;
      if (v17 != 0) {
        v22 = v17;
      }
      if (((unsigned int)v21 & v22) != 0) {
        v23 = (v20 + v21 - 1) & -v21;
      }
      else {
        v23 = v20;
      }
      while (1) {
        v24 = __clz(v22);
        if ((v23 & ~(-1LL << (v24 ^ 0x1Fu))) == 0) {
          break;
        }
        v22 &= ~(1 << (v24 ^ 0x1F));
        if (v22 == 0) {
          return 11;
        }
      }
      if (v23 == 0) {
        return 11;
      }
      v13 = 17;
      if (__CFADD__(*a5, a4) || *a5 + a4 > v23) {
        return v13;
      }
      v25 = *(_BYTE**)(a1 + 8);
      v26 = *((_DWORD*)a5 + 2);
      v27 = *((_DWORD*)a5 + 3);
      v28 = *((_DWORD*)a5 + 4);
      v29 = v25[424];
      if ((v29 & *((_BYTE*)a5 + 28) & 1) != 0) {
        v30 = X8CALL_X0(_QWORD*, (*(__attribute__((swiftcall)) void (**)(
                                     PSEUDO_X8, _QWORD))(*(_QWORD*)v25 + 56LL))(
                                     (void*)v25, *(_QWORD*)(a1 + 8)));
        v29 = (*(__int64 (**)(_QWORD*))(*v30 + 168LL))(v30);
      }
      if (v26 == 1) {
        v35 = (v27 != -1) & v29;
        if (v35 == 1) {
          if (v27 > 0xFF) {
            v36 = 0;
            v37 = 0;
            v13 = 11;
          }
          else {
            v37 = 1;
            v13 = 0;
            v36 = v27;
          }
        }
        else {
          v36 = 0;
          v13 = 0;
          v37 = 1;
        }
        if (v28 == -1) {
          if ((*(_BYTE*)(*(_QWORD*)(a1 + 8) + 362LL) & 0x80) != 0) {
            v38 = 0;
          }
          else {
            v38 = v37;
          }
          if ((v38 & 1) != 0) {
            v34 = 0;
            LOBYTE(v27) = 0;
            v13 = 2;
          }
          else {
            v34 = 0;
            if (v36 != 0) {
              v37 = 0;
            }
            if ((v37 & 1) != 0) {
              v13 = 11;
              LOBYTE(v27) = 0;
              v36 = 0;
            }
            else {
              LOBYTE(v27) = 0;
            }
          }
        }
        else if (v28 > 0xFF) {
          LOBYTE(v27) = 0;
          v13 = 11;
          v34 = 1;
        }
        else {
          v34 = 1;
          LOBYTE(v27) = v28;
        }
      }
      else {
        if (v26 != 0) {
          return 11;
        }
        v31 = v29;
        v32 = *(_QWORD*)(a1 + 8);
        v45_.v45 = 0;
        v45_.v46 = 0;
        v33 = (*(__int64 (**)(__int64))(*(_QWORD*)v32 + 56LL))(v32);
        (*(void (**)(__int64, _QWORD, __int64*))(*(_QWORD*)v33 + 144LL))(
            v33, v27, &v45_.v45);
        v34 = v45_.v45;
        if ((v45_.v45 & 1) != 0) {
          if (BYTE3(v45_.v45) == 1) {
            v13 = 0;
            LOBYTE(v35) = v31;
            if ((v31 & 1) != 0) {
              v36 = v27;
            }
            else {
              v36 = 0;
            }
            LOBYTE(v27) = v45_.v46;
          }
          else {
            v36 = 0;
            LOBYTE(v35) = 0;
            v13 = 0;
          }
        }
        else {
          v36 = 0;
          LOBYTE(v35) = 0;
          LOBYTE(v27) = 0;
          v13 = 11;
        }
      }
      if ((v35 & 1) != 0) {
        *(_BYTE*)(a6 + 30) = v36;
        *(_WORD*)(a6 + 28) |= 1u;
        if ((v34 & 1) == 0) {
          goto LABEL_76;
        }
      }
      else if ((v34 & 1) == 0) {
      LABEL_76:
        if (v13 != 0) {
          return v13;
        }
      LABEL_80:
        v40 = *a5;
        v41 = *(_WORD*)(a6 + 28);
        *(_QWORD*)a6 = a3;
        *(_QWORD*)(a6 + 8) = a4;
        *(_QWORD*)(a6 + 16) = v40;
        v42 = *((_BYTE*)a5 + 27);
        *(_DWORD*)(a6 + 24) = a2;
        *(_BYTE*)(a6 + 33) = v24 ^ 0x1F;
        *(_WORD*)(a6 + 28) = v41 & 0xFE83 | (4 * (*((_BYTE*)a5 + 20) & 1)) & 7 |
                             (8 * (*((_BYTE*)a5 + 21) & 1)) & 0xF |
                             (16 * (*((_BYTE*)a5 + 25) & 1)) & 0x1F |
                             (32 * (v42 & 1)) & 0xBF |
                             ((*((_BYTE*)a5 + 23) & 1) << 6) |
                             (*((unsigned __int8*)a5 + 26) << 8);
        v43 = *((_DWORD*)a5 + 9);
        if (v43 == 2 || v43 == 1) {
          v13 = 0;
          *(_BYTE*)(a6 + 34) = v43;
          return v13;
        }
        if (v43 == 0) {
          v13 = 0;
          *(_BYTE*)(a6 + 34) = 0;
          return v13;
        }
        return 11;
      }
      v39 = *(_WORD*)(a6 + 28);
      *(_BYTE*)(a6 + 31) = v27;
      *(_WORD*)(a6 + 28) = v39 | 2;
      if (v13 != 0) {
        return v13;
      }
      goto LABEL_80;
    }
    v13 = 2;
    if ((*((_BYTE*)a5 + 26) & 1) == 0) {
      return v13;
    }
  }
  else if (*((_BYTE*)a5 + 26) != 1) {
    goto LABEL_26;
  }
  if (((*(__int64 (**)(_QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 8) + 288LL) +
                                320LL))(
           *(_QWORD*)(*(_QWORD*)(a1 + 8) + 288LL)) &
       1) != 0) {
    goto LABEL_26;
  }
LABEL_36:
  if (v13 == 0) {
    return 2;
  }
  return v13;
}

__int64 nvidia_62dce0(__int64 a1, __int64* a2)
{
  unsigned int v2;
  int v3;
  __int16 v4;
  int v6;
  bool v7;
  unsigned int v8;
  __int16 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int16 v14;
  int v15;
  int v16;
  int v17;
  __int64 result;
  char v19;
  char v20;
  unsigned int v21;
  unsigned __int16 v22;
  __int16 v23;
  int v24;
  int v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;

  v2 = *((unsigned __int8*)a2 + 33);
  v3 = *((_DWORD*)a2 + 6);
  v4 = *((unsigned __int8*)a2 + 30);
  v6 = 1 << v2;
  v7 = v2 >= 0x20;
  v8 = *((unsigned __int16*)a2 + 14);
  v9 = *((unsigned __int8*)a2 + 31);
  v26 = a2[2];
  if (v7) {
    v10 = 0;
  }
  else {
    v10 = v6;
  }
  v11 = *a2;
  v12 = a2[1];
  v24 = v3;
  v25 = v10;
  v13 = *((unsigned __int8*)a2 + 34);
  if ((v8 & 1) == 0) {
    v4 = -1;
  }
  v27 = v12;
  v28 = 0;
  v22 = v4;
  if ((v8 & 2) != 0) {
    v14 = v9;
  }
  else {
    v14 = -1;
  }
  v23 = v14;
  if (v11 == -1) {
    v15 = 0;
  }
  else {
    v28 = v11;
    v15 = 1;
  }
  if ((v8 & 4) != 0) {
    v16 = 260;
  }
  else {
    v16 = 256;
  }
  v17 = v16 | (16 * v8) & 0x1200 | v15 | (v8 >> 2) & 0x10 |
        (32 * ((v8 & 8) != 0)) | (((v8 & 0x10) != 0) << 7);
  if (v13 == 2) {
    v21 = v17 & 0xFFFFF3FF | 0x800;
    if (*(_DWORD*)(*(_QWORD*)(a1 + 32) + 32LL) >= 6u) {
      goto LABEL_21;
    }
  LABEL_25:
    result = 2;
    goto LABEL_26;
  }
  if (v13 == 1) {
    v21 = v17 & 0xFFFFF3FF | 0x400;
    if (*(_DWORD*)(*(_QWORD*)(a1 + 32) + 32LL) >= 6u) {
      goto LABEL_21;
    }
    goto LABEL_25;
  }
  if (v13 != 0) {
    return 11;
  }
  v21 = v17 & 0xFFFFF3FF;
  if (*(_DWORD*)(*(_QWORD*)(a1 + 32) + 32LL) < 6u) {
    goto LABEL_25;
  }
LABEL_21:
  LODWORD(result) =
      nvidia_644da0_alt1(*(unsigned int*)(a1 + 24), 3223863558LL, &v21, 40);
  if ((_DWORD)result != 0) {
    result = (unsigned int)result;
  }
  else {
    result = 0;
  }
LABEL_26:
  v19 = v23;
  *a2 = v28;
  v20 = v22;
  if (v22 == 0xFFFF) {
    v20 = v19;
  }
  *((_BYTE*)a2 + 32) = v20;
  return result;
}

__int64 nvidia_62de80(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v4;

  v2 = *(_QWORD*)(a1 + 32);
  v4 = a2;
  if (*(_DWORD*)(v2 + 32) < 5u) {
    return 2;
  }
  else {
    return nvidia_644da0_alt1(*(unsigned int*)(a1 + 24), 3221766405LL, &v4, 8);
  }
}

__int64 nvidia_62dee0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      unsigned int* a5)
{
  unsigned __int8* v6;
  unsigned int v7;
  int v11;
  __int64 v12;
  int v13;
  unsigned __int8 v14;
  __int16 v15;
  unsigned __int8 v16;
  __int64 v17;
  unsigned int v18;
  __int64 v19;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;

  v6 = *(unsigned __int8**)(a1 + 8);
  v22 = 0;
  v23 = 0;
  v7 = *a5;
  v11 = v6[424];
  v12 = (*(__int64 (**)(unsigned __int8*))(*(_QWORD*)v6 + 56LL))(v6);
  (*(void (**)(__int64, _QWORD, __int64*))(*(_QWORD*)v12 + 144LL))(v12, v7,
                                                                   &v22);
  if ((v22 & 1) == 0) {
    return 11;
  }
  v13 = BYTE3(v22);
  v14 = v23;
  v15 = (unsigned __int8)v7;
  v22 = 0;
  v23 = a3;
  v24 = a4;
  v25 = a2;
  if ((v13 & v11) == 0) {
    v15 = -1;
  }
  if (v13 != 0) {
    v16 = v14;
  }
  else {
    v16 = v7;
  }
  LOWORD(v22) = v15;
  WORD1(v22) = v16;
  v17 = *(_QWORD*)(a1 + 32);
  v18 = *(_DWORD*)(v17 + 32);
  v19 = *(_QWORD*)(v17 + 80) & 0x400000000LL;
  if (v18 < 0xC || v19 == 0) {
    return 2;
  }
  else {
    return nvidia_644da0_alt1(*(unsigned int*)(a1 + 24), 3223339276LL, &v22,
                              32);
  }
}

__int64 nvidia_62dfd0(__int64 a1, __int64 a2)
{
  _DWORD* v3;
  int v4;
  int v5;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 result;

  v3 = *(_DWORD**)(a1 + 8);
  v4 = *(_DWORD*)(a1 + 40);
  v5 = *(_DWORD*)(a1 + 44);
  v7 = v3[328];
  v8 = *(_QWORD*)(a1 + 48);
  v9 = *(_QWORD*)(a1 + 56);
  v10 = (*(__int64 (**)(_DWORD*))(*(_QWORD*)v3 + 56LL))(v3);
  result = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v10 + 96LL))(
      v10, *(unsigned int*)(a1 + 40));
  *(_QWORD*)a2 = v8;
  *(_QWORD*)(a2 + 8) = v9;
  *(_DWORD*)(a2 + 16) = v7;
  *(_DWORD*)(a2 + 20) = v4;
  *(_DWORD*)(a2 + 24) = v5;
  *(_DWORD*)(a2 + 44) = result;
  *(_QWORD*)(a2 + 28) = 0x1000000000001LL;
  *(_QWORD*)(a2 + 36) = 2;
  return result;
}

__int64 nvidia_62e060(__int64 a1)
{
  __int64 v2;

  *(_QWORD*)a1 = SdkData_e899d8[0] + 2;
  nvidia_62ae40((_QWORD*)(a1 + 48), 0);
  NvOsFree_plt(*(_QWORD*)(a1 + 48));
  v2 = *(unsigned int*)(a1 + 24);
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  if ((_DWORD)v2 != -1) {
    NvOsDrvClose_plt(v2);
    *(_DWORD*)(a1 + 24) = -1;
  }
  return SdkRoutine_629ca0(a1);
}

void nvidia_62e0d0(__int64 a1)
{
  __int64 v2;

  *(_QWORD*)a1 = SdkData_e899d8[0] + 2;
  nvidia_62ae40((_QWORD*)(a1 + 48), 0);
  NvOsFree_plt(*(_QWORD*)(a1 + 48));
  v2 = *(unsigned int*)(a1 + 24);
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  if ((_DWORD)v2 != -1) {
    NvOsDrvClose_plt(v2);
    *(_DWORD*)(a1 + 24) = -1;
  }
  SdkRoutine_629ca0(a1);
  nn_os_detail_RemoveNativeWaitHolder();
}

__int64 nvidia_62e140(__int64 a1, unsigned int a2, unsigned __int64 a3,
                      __int64 a4, __int64 a5, __int64* a6)
{
  int v8;
  __int64 v9;
  bool v10;
  __int64 result;
  __int64 v12;
  unsigned __int64 v14;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  char v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  void (**v26)(_QWORD);
  _QWORD v27[2];
  struct {
    __int64 v28;
    __int64 v29;
    __int64 v30;
    __int64 v31;
    __int64 v32;
  } v28_;

  v8 = *(_DWORD*)(a5 + 32);
  v9 = *(unsigned int*)(a1 + 24);
  v10 = v8 == 0 || v8 == (_DWORD)v9;
  if (!v10 || (*(_QWORD*)a5 & (v9 - 1)) != 0) {
    return 11;
  }
  v12 = *(_QWORD*)(a1 + 8);
  v28_.v31 = 0;
  v28_.v32 = 0;
  v28_.v29 = 0;
  v28_.v30 = 0;
  v28_.v28 = 0;
  if (((v9 - 1) & (a4 | a3)) != 0) {
    return 11;
  }
  result = 17;
  if (!__CFADD__(a3, a4)) {
    v14 = *(_QWORD*)(a1 + 40);
    if (a3 >= v14 && a3 + a4 <= v14 + *(_QWORD*)(a1 + 32) * v9) {
      result = nvidia_62d8a0(v12, a2, a3, a4, (__int64*)a5, (__int64)&v28_.v28);
      if ((_DWORD)result == 0) {
        v18 = *(_QWORD*)(a1 + 8);
        v27[0] = 0;
        v27[1] = 0;
        v19 = SdkRoutine_62d0e0(v18);
        v20 = (*(__int64 (**)(__int64))(*(_QWORD*)v19 + 56LL))(v19);
        (*(void (**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v20 + 144LL))(
            v20, *(unsigned int*)(a5 + 12), v27);
        if (BYTE3(v27[0]) == 1) {
          v21 = *(_QWORD*)a5;
          if ((((*(unsigned int (**)(__int64))(*(_QWORD*)v20 + 112LL))(
                   v20)-1LL) &
               (v21 ^ a3)) != 0) {
            return 11;
          }
        }
        result = nvidia_62dce0(v12, &v28_.v28);
        if ((_DWORD)result == 0) {
          v22 = BYTE4(v28_.v31);
          v23 = NvOsAlloc_plt(56);
          if (v23 != 0) {
            v24 = 30;
            v25 = v23;
            if ((v22 & 1) == 0) {
              v24 = 31;
            }
            nvidia_6395c0_alt1(v23, v12, v28_.v28, v28_.v29, 0,
                               *((_BYTE*)&v28_.v28 + v24), SBYTE1(v28_.v32), 1);
            if (*a6 != 0) {
              nvidia_62de80(v12, v28_.v28);
              (**(void (***)(__int64))v25)(v25);
              v26 = *(void (***)(_QWORD))v25;
              *(_BYTE*)(v25 + 17) = 1;
              v26[1](v25);
              NvOsFree_plt(v25);
              return 8;
            }
            else {
              *a6 = v25;
              return 0;
            }
          }
          else {
            nvidia_62de80(v12, v28_.v28);
            return 6;
          }
        }
      }
    }
  }
  return result;
}

__int64 nvidia_62e9b0(__int64 a1, __int64 a2, __int64 a3, int a4, _DWORD* a5)
{
  __int64 result;

  result = nvidia_628f90((_QWORD*)a1);
  *(_QWORD*)a1 = SdkData_e740d8;
  *(_DWORD*)(a1 + 20) = *a5;
  *(_DWORD*)(a1 + 24) = a4;
  *(_QWORD*)(a1 + 32) = a3;
  *(_QWORD*)(a1 + 40) = -1;
  return result;
}

__int64 nvidia_62eb50(__int64 a1, __int64 a2)
{
  __int64 v3;
  char v4;
  __int64 result;
  unsigned int v7;
  __int64 v8;
  int v9;
  int v10;
  __int64 v11;
  _QWORD v12[2];
  __int64 v13;

  v3 = *(_QWORD*)(a2 + 8);
  v4 = *(_BYTE*)(a2 + 4);
  v12[0] = 0;
  v12[1] = 0;
  LODWORD(result) = SdkRoutine_62ea10(a1, v3, v4);
  v7 = result;
  if ((_DWORD)result != 0) {
    result = (unsigned int)result;
  }
  else {
    result = 11;
  }
  if (HIDWORD(*(_QWORD*)(a1 + 32)) == 0) {
    LODWORD(v12[0]) = *(_QWORD*)(a1 + 32);
    result = v7;
  }
  v9 = *(_DWORD*)(a1 + 20);
  v8 = *(unsigned int*)(a1 + 24);
  HIDWORD(v12[0]) = *(_DWORD*)(a1 + 24);
  if (v9 != 1) {
    v10 = 1;
    if (*(_BYTE*)(a2 + 4) != 1) {
      goto LABEL_11;
    }
    goto LABEL_10;
  }
  LODWORD(v12[1]) = 2;
  v10 = 3;
  if (*(_BYTE*)(a2 + 4) == 1) {
  LABEL_10:
    v8 = *(_QWORD*)(a2 + 8);
    LODWORD(v12[1]) = v10;
  }
LABEL_11:
  v13 = v8;
  if ((_DWORD)result == 0) {
    v11 = *(_QWORD*)(a1 + 8);
    if (*(_DWORD*)(*(_QWORD*)(v11 + 32) + 32LL) < 2u) {
      return 2;
    }
    else {
      result =
          nvidia_644da0_alt1(*(unsigned int*)(v11 + 24), 3222814978LL, v12, 24);
      if ((_DWORD)result == 0) {
        *(_QWORD*)(a1 + 40) = v13;
      }
    }
  }
  return result;
}

__int64 nvidia_62ec60(__int64 a1)
{
  __int64 result;
  int v3;
  __int64 v4;
  __int64 v5;
  int v6;
  int v7;

  result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 72LL))(
      *(_QWORD*)(a1 + 8));
  if (*(_QWORD*)(a1 + 40) != -1) {
    v5 = *(_QWORD*)(a1 + 40);
    if (HIDWORD(*(_QWORD*)(a1 + 32)) != 0) {
      if ((_DWORD)result != 0) {
        result = (unsigned int)result;
      }
      else {
        result = 11;
      }
    }
    else {
      v3 = *(_DWORD*)(a1 + 24);
      v6 = *(_QWORD*)(a1 + 32);
      v7 = v3;
      if ((_DWORD)result == 0) {
        v4 = *(_QWORD*)(a1 + 8);
        if (*(_DWORD*)(*(_QWORD*)(v4 + 32) + 32LL) < 3u) {
          result = 2;
        }
        else {
          result = nvidia_644da0_alt1(*(unsigned int*)(v4 + 24), 3222290691LL,
                                      &v5, 16);
        }
      }
    }
    *(_QWORD*)(a1 + 40) = -1;
  }
  return result;
}

__int64 nvidia_62ed10(__int64 result, _QWORD* a2)
{
  __int64 v2;
  unsigned int v3;
  unsigned int v4;

  v2 = *(_QWORD*)(result + 32);
  *a2 = *(_QWORD*)(result + 40);
  v3 = *(_DWORD*)(result + 20);
  v4 = *(_DWORD*)(result + 24);
  a2[2] = v2;
  a2[1] = v3;
  a2[3] = v4;
  return result;
}

__int64 nvidia_62ed30(_QWORD* a1)
{
  *a1 = SdkData_e740d8;
  return SdkRoutine_629ca0_alt1();
}

__int64 nvidia_62ed90(__int64 a1, __int64* a2)
{
  unsigned int v4;
  __int64* v5;
  __int64 v6;
  unsigned int v7;
  __int64 result;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  char v17[4];
  unsigned int v18;
  char v19;
  char v20[4];
  char v21[4];
  char v22[4];
  char v23[4];
  char v24[4];

  v18 = 0;
  nvidia_62ad20(a2, 0);
  v4 = nvidia_62ada0(a2, 0x100u);
  v19 = 1;
  if (v4 != 0) {
    v18 = v4;
    v5 = a2 + 1;
  }
  else {
    v5 = a2 + 1;
    v6 = a2[1];
    v7 = nvidia_62ad20(a2, v6 + 12);
    v19 = 1;
    if (v7 != 0) {
      v18 = v7;
    }
    else {
      memcpy_plt(*a2 + v6, "NVRM_GPU V1", 12);
    }
  }
  nvidia_62efd0_alt1(&v18, a2, 1, a1);
  nvidia_62efd0_alt1(&v18, a2, 2, a1 + 16);
  result = v18;
  if ((unsigned int)(*(_DWORD*)(a1 + 32) - 1) >= 2 && v18 == 0) {
    return 11;
  }
  v17[0] = *(_DWORD*)(a1 + 32);
  v20[0] = 3;
  if (v18 == 0) {
    v10 = *v5;
    result = nvidia_62ad20(a2, v10 + 1);
    if ((_DWORD)result == 0) {
      memcpy_plt(*a2 + v10, v20, 1);
      v11 = a2[1];
      v21[0] = 1;
      result = nvidia_62ad20(a2, v11 + 1);
      if ((_DWORD)result == 0) {
        memcpy_plt(*a2 + v11, v21, 1);
        v12 = a2[1];
        result = nvidia_62ad20(a2, v12 + 1);
        if ((_DWORD)result == 0) {
          memcpy_plt(*a2 + v12, v17, 1);
          v13 = a2[1];
          v22[0] = 4;
          result = nvidia_62ad20(a2, v13 + 1);
          if ((_DWORD)result == 0) {
            memcpy_plt(*a2 + v13, v22, 1);
            v23[0] = 4;
            v14 = a2[1];
            result = nvidia_62ad20(a2, v14 + 1);
            if ((_DWORD)result == 0) {
              memcpy_plt(*a2 + v14, v23, 1);
              v15 = a2[1];
              result = nvidia_62ad20(a2, v15 + 4);
              if ((_DWORD)result == 0) {
                memcpy_plt(*a2 + v15, a1 + 36, 4);
                v16 = a2[1];
                v24[0] = 0;
                result = nvidia_62ad20(a2, v16 + 1);
                if ((_DWORD)result == 0) {
                  memcpy_plt(*a2 + v16, v24, 1);
                  return 0;
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}

_DWORD* nvidia_62efd0(_DWORD* result, _QWORD* a2, char a3, __int64 a4)
{
  int v4;
  __int64 v5;
  _DWORD* v8;
  int v9;
  int v10;
  __int64 v11;
  __int64 v12;
  _BYTE v13[4];
  char v14[4];

  v4 = *result;
  v13[0] = a3;
  if (v4 == 0) {
    v5 = a2[1];
    v8 = result;
    result = (_DWORD*)nvidia_62ad20(a2, v5 + 1);
    *((_BYTE*)v8 + 4) = 1;
    v9 = *v8;
    if ((_DWORD)result == 0) {
      if (v9 != 0) {
        return result;
      }
      result = (_DWORD*)memcpy_plt(*a2 + v5, v13, 1);
      v10 = *v8;
      v14[0] = 16;
      if (v10 != 0) {
        return result;
      }
      v11 = a2[1];
      result = (_DWORD*)nvidia_62ad20(a2, v11 + 1);
      v9 = *v8;
      *((_BYTE*)v8 + 4) = 1;
      if ((_DWORD)result == 0) {
        if (v9 != 0) {
          return result;
        }
        result = (_DWORD*)memcpy_plt(*a2 + v11, v14, 1);
        if (*v8 != 0) {
          return result;
        }
        v12 = a2[1];
        result = (_DWORD*)nvidia_62ad20(a2, v12 + 16);
        v9 = *v8;
        *((_BYTE*)v8 + 4) = 1;
        if ((_DWORD)result == 0) {
          if (v9 == 0) {
            return (_DWORD*)memcpy_plt(*a2 + v12, a4, 16);
          }
          return result;
        }
      }
    }
    if (v9 == 0) {
      *v8 = (_DWORD)result;
    }
  }
  return result;
}

char* nvidia_62f120(char* result)
{
  unsigned __int8* v1;
  char* v2;
  char* v3;
  char* v4;
  char* v5;
  char* v6;
  char v7;
  unsigned int v8;
  unsigned __int8* v9;
  __int64 i;
  __int64 v11;
  unsigned __int8* v12;
  unsigned int v13;
  __int64 v14;
  unsigned int v15;
  int v16;
  unsigned __int8* v17;
  unsigned int v18;
  unsigned __int8* v19;
  int v20;
  char* v21;
  int v22;
  int v23;
  char* v24;
  char* v25;

  v1 = (unsigned __int8*)SdkData_10406e0;
  if (SdkData_10406e0 != 0) {
    v2 = result;
    result = (char*)*(unsigned __int8*)SdkData_10406e0;
    if (*(_BYTE*)SdkData_10406e0 != 0) {
      v3 = v2 + 583;
      v4 = v2 + 581;
      v24 = v2 + 588;
      v25 = v2 + 587;
      v5 = v2 + 582;
      v6 = v2 + 580;
      do {
        do {
          if ((unsigned int)isspace_plt(result) == 0) {
            break;
          }
          v8 = *++v1;
          result = (char*)v8;
        } while (v8 != 0);
        v9 = v1 + 1;
        for (i = 0;; ++i) {
          if ((unsigned int)isalnum_plt(v1[i]) == 0) {
            v11 = v1[i];
            if ((_DWORD)v11 != 45) {
              break;
            }
          }
          ++v9;
        }
        if (v1[i] != 0) {
          while ((unsigned int)isspace_plt(v11) != 0) {
            v13 = *v9++;
            v11 = v13;
            if (v13 == 0) {
              v12 = v9 - 1;
              v9 = nullptr;
              goto LABEL_27;
            }
          }
          v12 = v9 - 1;
          if (*(v9 - 1) == 61) {
            v14 = *v9;
            if (*v9 != 0) {
              while ((unsigned int)isspace_plt(v14) != 0) {
                v15 = *++v9;
                v14 = v15;
                v12 = v9;
                if (v15 == 0) {
                  goto LABEL_27;
                }
              }
              v12 = v9;
            }
            else {
              v12 = v9;
            }
          }
          else {
            v9 = nullptr;
          }
        }
        else {
          v12 = &v1[i];
          v9 = nullptr;
        }
      LABEL_27:
        while (1) {
          v16 = *v12;
          if (*v12 == 0 || v16 == 44) {
            break;
          }
          ++v12;
        }
        if (v16 == 44) {
          v17 = v12 + 1;
        }
        else {
          v17 = v12;
        }
        if (v9 != nullptr) {
          do {
            if (v12 == v9) {
              v19 = v9;
              if (i == 0) {
                goto LABEL_6;
              }
              goto LABEL_38;
            }
            v18 = *--v12;
          } while ((unsigned int)isspace_plt(v18) != 0);
          v19 = v12 + 1;
          if (i == 0) {
            goto LABEL_6;
          }
        LABEL_38:
          if (v19 - v9 != 1) {
            goto LABEL_6;
          }
          v20 = *v1;
          switch (v20) {
          case 'f':
            if (i == 1 ||
                v1[1] == 98 &&
                    (i == 2 ||
                     v1[2] == 112 && (i == 3 || v1[3] == 97 && i == 4))) {
              v21 = v6;
              if (SdkData_bc7329[i] == 0) {
                goto LABEL_70;
              }
            }
            break;
          case 'l':
            if (i == 1) {
              v21 = v5;
              if (SdkData_bbe92d[1] != 0) {
              LABEL_69:
                v21 = v4;
                if (SdkData_bbf489[i] != 0) {
                  break;
                }
              }
              goto LABEL_70;
            }
            v22 = v1[1];
            if (v22 == 49 && i == 2) {
              v21 = v5;
              if (SdkData_bbe92d[2] != 0) {
                break;
              }
              goto LABEL_70;
            }
            if (v22 == 50 && i == 2) {
              goto LABEL_69;
            }
            break;
          case 's':
            if (i == 1) {
              goto LABEL_56;
            }
            if (v1[1] != 109) {
              break;
            }
            if (i == 2) {
            LABEL_56:
              v21 = v3;
              if (SdkData_bb79ba[i] != 0) {
              LABEL_57:
                v21 = v25;
                if (SdkData_bc6b33[i] != 0) {
                  break;
                }
              }
            LABEL_70:
              v23 = *v9;
              if (v23 == 49) {
                v7 = 1;
              }
              else {
                if (v23 != 48) {
                  break;
                }
                v7 = 0;
              }
              *v21 = v7;
              break;
            }
            if (v1[2] == 45 &&
                (i == 3 ||
                 v1[3] == 108 &&
                     (i == 4 ||
                      v1[4] == 114 && (i == 5 || v1[5] == 102 && i == 6)))) {
              v21 = v3;
              if (SdkData_bb79ba[i] == 0) {
                goto LABEL_70;
              }
            }
            if (v1[2] == 45 &&
                (i == 3 ||
                 v1[3] == 115 &&
                     (i == 4 ||
                      v1[4] == 104 && (i == 5 || v1[5] == 109 && i == 6)))) {
              goto LABEL_57;
            }
            break;
          default:
            if (v20 == 116 &&
                (i == 1 ||
                 v1[1] == 101 && (i == 2 || v1[2] == 120 && i == 3))) {
              v21 = v24;
              if (SdkData_bbde41[i] == 0) {
                goto LABEL_70;
              }
            }
            break;
          }
        }
      LABEL_6:
        result = (char*)*v17;
        v1 = v17;
      } while (*v17 != 0);
    }
  }
  return result;
}

__int64 nvidia_62f550(__int64 result)
{
  int v1;
  unsigned __int64 v2;
  __int64 v3;
  int v4;
  unsigned __int64 v5;
  int v6;
  __int64 v7;
  int v8;

  if (*(_DWORD*)(result + 56) < 0x1Fu ||
      *(_DWORD*)(*(_QWORD*)(result + 88) + 16LL) < 0x130u) {
    return result;
  }
  v1 = *(_DWORD*)(result + 108);
  v2 = *(_QWORD*)(result + 576);
  v3 = result + 568;
  if ((v1 & 2) != 0) {
    if ((v1 & 1) == 0) {
      if (v2 >= 2) {
        goto LABEL_14;
      }
      v4 = 1;
      goto LABEL_13;
    }
    if (v2 < 2) {
      *(_DWORD*)(v3 + 4 * v2) = 0;
      *(_QWORD*)(result + 576) = v2 + 1;
      if (v2 == 0) {
        v4 = 1;
        v2 = 1;
        goto LABEL_13;
      }
    }
  }
  else if ((v1 & 1) != 0 && v2 < 2) {
    v4 = 0;
  LABEL_13:
    *(_DWORD*)(v3 + 4 * v2) = v4;
    *(_QWORD*)(result + 576) = v2 + 1;
  }
LABEL_14:
  v5 = *(_QWORD*)(result + 600);
  v6 = *(_DWORD*)(result + 104);
  v7 = result + 584;
  if ((v6 & 4) != 0) {
    if (((unsigned __int8)v6 & (v5 < 3)) != 0) {
      *(_DWORD*)(v7 + 4 * v5++) = 0;
      *(_QWORD*)(result + 600) = v5;
    }
    if ((v6 & 2) != 0 && v5 <= 2) {
      *(_DWORD*)(v7 + 4 * v5++) = 1;
      *(_QWORD*)(result + 600) = v5;
    }
    if (v5 <= 2) {
      v8 = 2;
      goto LABEL_27;
    }
  }
  else {
    if (((unsigned __int8)v6 & (v5 < 3)) != 0) {
      *(_DWORD*)(v7 + 4 * v5++) = 0;
      *(_QWORD*)(result + 600) = v5;
    }
    if ((v6 & 2) != 0 && v5 < 3) {
      v8 = 1;
    LABEL_27:
      *(_DWORD*)(v7 + 4 * v5) = v8;
      *(_QWORD*)(result + 600) = v5 + 1;
    }
  }
  return result;
}

__int64 nvidia_62f660(__int64* a1, __int64 a2)
{
  char v2;
  unsigned int v5;
  bool v6;
  __int64 v7;
  bool v8;
  char v9;
  bool v10;
  __int64 v11;
  bool v12;
  unsigned int v13;
  bool v14;
  bool v15;
  __int64 result;
  unsigned int v17;
  bool v18;

  v2 = *((_BYTE*)a1 + 97);
  *(_BYTE*)(a2 + 97) = 0;
  *(_BYTE*)(a2 + 96) = v2 & 1;
  v5 = *((_DWORD*)a1 + 19);
  v6 = v5 > 8;
  *(_BYTE*)(a2 + 98) = (v5 > 4) & BYTE1(a1[12]);
  v7 = a1[12];
  v8 = (v7 & 0x100) != 0;
  if (!v6) {
    v8 = false;
  }
  *(_BYTE*)(a2 + 99) = v8;
  if (*((_DWORD*)a1 + 14) <= 0xCu) {
    v9 = 0;
    if ((v7 & 0x100) != 0 && *((_DWORD*)a1 + 19) >= 0xAu) {
      v9 = SdkData_10406cf ^ 1;
    }
  }
  else {
    v9 = 1;
  }
  v10 = (v7 & 0x100) != 0;
  v11 = *a1;
  *(_BYTE*)(a2 + 152) = v9 & 1;
  v12 = *((_DWORD*)a1 + 19) > 6u && v10;
  *(_BYTE*)(a2 + 156) = v12;
  v13 = *((_DWORD*)a1 + 19);
  *(_BYTE*)(a2 + 157) = v10 && v13 > 9;
  v14 = (a1[12] & 0x100) != 0;
  if (v13 <= 9) {
    v14 = false;
  }
  *(_BYTE*)(a2 + 159) = v14;
  v15 = (a1[12] & 0x100) != 0;
  if (v13 <= 6) {
    v15 = false;
  }
  *(_BYTE*)(a2 + 158) = v15;
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v11 + 336LL))(v11);
  v17 = *((_DWORD*)a1 + 19);
  *(_DWORD*)(a2 + 820) = result;
  v6 = v17 > 0xB;
  v18 = (a1[12] & 0x100) != 0;
  if (!v6) {
    v18 = false;
  }
  *(_BYTE*)(a2 + 100) = v18;
  return result;
}

int* nvidia_630140(int* result, __int64 a2, __int64 a3)
{
  __int64 v3;
  int* v4;
  int v7;
  int v8;
  int v9;
  unsigned int* v10;
  __int64 v11;
  __int64* v12;
  unsigned int v13;
  _QWORD* v14;
  int v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  int v19;
  __int64 v20;
  unsigned int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;

  v3 = *(_QWORD*)(a3 + 248);
  if (*(_DWORD*)(a2 + 152) > *(_DWORD*)(v3 + 72)) {
    *((_BYTE*)result + 4) = 1;
    if (*result != 0) {
      return result;
    }
    v7 = 11;
  LABEL_26:
    *result = v7;
    return result;
  }
  if (*result == 0) {
    v4 = result;
    v7 = nvidia_6280e0((__int64*)(a2 + 400), *(unsigned int*)(v3 + 4));
    result = v4;
    *((_BYTE*)v4 + 4) = 1;
    v8 = *v4;
    if (v7 != 0) {
      if (v8 == 0) {
        goto LABEL_26;
      }
    }
    else if (v8 == 0) {
      v9 = *(_DWORD*)(a2 + 152);
      if (v9 != 0) {
        v10 = *(unsigned int**)(a3 + 248);
        v11 = v10[1];
        if ((_DWORD)v11 != 0) {
          v12 = *(__int64**)(a2 + 376);
          v13 = v10[17];
          v14 = *(_QWORD**)(a2 + 400);
          if (v13 != 0) {
            v15 = v9 - 1;
            v16 = 0;
            while (1) {
              v17 = v12[v16];
              v18 = v17 >> v13;
              if (v17 >> v13 != 0) {
                break;
              }
              v19 = 0;
              do {
                v20 = 1LL << v19;
                if ((v19 & 0xC0) != 0) {
                  v20 = 0;
                }
                if ((v20 & ~v17) == 0) {
                  v21 = v10[18] * v19;
                  if (v15 + v21 >= 0x40) {
                    v22 = -1;
                  }
                  else {
                    v22 = (1LL << (v15 + *((_BYTE*)v10 + 72) *
                                             (unsigned __int8)v19)) |
                          ~(-1LL << (v15 + *((_BYTE*)v10 + 72) *
                                               (unsigned __int8)v19));
                  }
                  if (v21 >= 0x40) {
                    v23 = 0;
                  }
                  else {
                    v23 = -1LL << v21;
                  }
                  v18 |= v22 & v23;
                }
                ++v19;
              } while (v13 > (unsigned __int8)v19);
              v14[v16++] = v18;
              if (v16 == v11) {
                return result;
              }
            }
          }
          else {
            while (1) {
              v24 = *v12++;
              if (v24 != 0) {
                break;
              }
              *v14++ = 0;
              if (--v11 == 0) {
                return result;
              }
            }
          }
          *((_BYTE*)v4 + 4) = 1;
          *v4 = 8;
        }
      }
    }
  }
  return result;
}

__int64 nvidia_6302e0(int* a1, __int64 a2, __int64 a3)
{
  __int64 result;
  int v7;
  unsigned int* v8;
  unsigned int v9;
  unsigned int v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned int i;
  unsigned int v19;
  __int64 v20;
  __int64 v21;

  result = nvidia_6280e0((__int64*)(a2 + 448),
                         *(unsigned int*)(*(_QWORD*)(a3 + 248) + 4LL));
  *((_BYTE*)a1 + 4) = 1;
  v7 = *a1;
  if ((_DWORD)result != 0) {
    if (v7 == 0) {
    LABEL_23:
      *a1 = result;
    }
  }
  else if (v7 == 0) {
    v8 = *(unsigned int**)(a3 + 248);
    v9 = v8[5];
    if (v9 != 0) {
      v10 = v8[15];
      if (v10 != 0) {
        v11 = v8[1];
        if ((_DWORD)v11 != 0) {
          v12 = v9 / v10;
          v13 = *(_QWORD*)(a2 + 424);
          v14 = *(_QWORD*)(a2 + 448);
          v15 = 0;
          while (1) {
            v16 = *(_QWORD*)(v13 + 8 * v15);
            v17 = v16 >> v10;
            if (v16 >> v10 != 0) {
              break;
            }
            for (i = 0; i < v10; i = (unsigned __int8)(i + 1)) {
              result = 1LL << i;
              if ((i & 0xC0) != 0) {
                result = 0;
              }
              if ((result & ~v16) == 0) {
                v19 = i * v12;
                if (v12 + i * v12 - 1 >= 0x40) {
                  v20 = -1;
                }
                else {
                  v20 =
                      (1LL << (v12 + (unsigned __int8)i * (unsigned __int8)v12 -
                               1)) |
                      ~(-1LL
                        << (v12 + (unsigned __int8)i * (unsigned __int8)v12 -
                            1));
                }
                if (v19 >= 0x40) {
                  v21 = 0;
                }
                else {
                  v21 = -1LL << v19;
                }
                result = v20 & v21;
                v17 |= result;
              }
            }
            *(_QWORD*)(v14 + 8 * v15++) = v17;
            if (v15 == v11) {
              return result;
            }
          }
          result = 8;
          *((_BYTE*)a1 + 4) = 1;
          goto LABEL_23;
        }
      }
    }
  }
  return result;
}

__int64 nvidia_630440(unsigned int* a1, __int64 a2, __int64 a3)
{
  unsigned int v6;
  int v7;
  unsigned int v8;
  unsigned __int64 v9;
  unsigned int v10;
  int v12;
  int v14;
  __int64 v15;
  unsigned int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _BYTE* v20;
  unsigned int v21;
  _BYTE* v22;
  _BYTE* v23;
  _BYTE* v24;
  _BYTE* v25;
  _BYTE* v26;
  _BYTE* v27;
  _BYTE* v28;
  __int64 v29;
  unsigned int v30;
  __int64 v31;
  __int16 v32;
  __int64 v33;
  __int64 v35;
  struct {
    __int64 v36;
    __int64 v37;
    __int64 v38;
  } v36_;
  __int64 v39[4];
  _QWORD v40[2];

  v6 = nvidia_631e20((_QWORD*)(a2 + 472), (unsigned int)(*(_DWORD*)(a3 + 528) *
                                                         *(_DWORD*)(a2 + 140)));
  if (v6 != 0) {
    return v6;
  }
  else {
    if (*(_DWORD*)(a2 + 140) != 0) {
      v7 = 0;
      v8 = 0;
      while (1) {
        v9 = *(unsigned int*)(a3 + 528);
        v36_.v36 = 0;
        v36_.v37 = 0;
        v36_.v38 = 0;
        v10 = nvidia_631fc0(&v36_.v36, v9);
        if (v10 != 0) {
          if (v8 == 0) {
            v8 = v10;
          }
          goto LABEL_5;
        }
        if (v8 == 0) {
          v12 = *(_DWORD*)(a3 + 528);
          if (v12 != 0) {
            memset_plt((void*)(v36_.v36 + 2LL * (unsigned int)(v12 - 1)),
                       ((_UNKNOWN*)0xC0LL), 2);
          }
          v35 = 0;
          v40[0] = &v35;
          v40[1] = 8;
          v39[0] = (__int64)&v35;
          v39[1] = 8;
          v39[2] = v36_.v36;
          v39[3] = 2 * v36_.v37;
          if (*(_DWORD*)(*((_QWORD*)a1 + 1) + 52LL) > 0x12u &&
              (unsigned int)nvidia_644cf0_alt1(*a1, 3221767955LL, v40, 1, v39,
                                               2u) == 0) {
            v14 = *(_DWORD*)(a3 + 528);
            if (v14 != 0) {
              v15 = v36_.v36 + 2LL * (unsigned int)(v14 - 1);
              memset_plt((void*)v39, ((_UNKNOWN*)0xC0LL), 2);
              if ((unsigned int)memcmp_plt(v39, v15, 2) == 0) {
                v8 = 15;
                goto LABEL_5;
              }
              v16 = *(_DWORD*)(a3 + 528);
              if (v16 != 0) {
                v17 = v36_.v36;
                v18 = *(_QWORD*)(a2 + 472);
                if (v16 >= 8) {
                  v20 = (_BYTE*)(v36_.v36 + 7);
                  v19 = 0;
                  do {
                    v21 = v16 * v7 + v19;
                    v19 += 8;
                    *(_WORD*)(v18 + 6LL * v21) = *(_WORD*)(v20 - 7);
                    v22 = (_BYTE*)(v18 + 6LL * (v21 + 1));
                    *v22 = *(v20 - 5);
                    v22[1] = *(v20 - 4);
                    v23 = (_BYTE*)(v18 + 6LL * (v21 + 2));
                    *v23 = *(v20 - 3);
                    v23[1] = *(v20 - 2);
                    v24 = (_BYTE*)(v18 + 6LL * (v21 + 3));
                    *v24 = *(v20 - 1);
                    v24[1] = *v20;
                    v25 = (_BYTE*)(v18 + 6LL * (v21 + 4));
                    *v25 = v20[1];
                    v25[1] = v20[2];
                    v26 = (_BYTE*)(v18 + 6LL * (v21 + 5));
                    *v26 = v20[3];
                    v26[1] = v20[4];
                    v27 = (_BYTE*)(v18 + 6LL * (v21 + 6));
                    v28 = (_BYTE*)(v18 + 6LL * (v21 + 7));
                    *v27 = v20[5];
                    v27[1] = v20[6];
                    *v28 = v20[7];
                    LOBYTE(v27) = v20[8];
                    v20 += 16;
                    v28[1] = (_BYTE)v27;
                  } while ((v16 & 0xFFFFFFF8) != v19);
                }
                else {
                  v19 = 0;
                }
                v29 = v16 & 7;
                if ((v16 & 7) != 0) {
                  v30 = v19 + v16 * v7;
                  v31 = v17 + 2 * v19 + 1;
                  do {
                    v32 = *(_WORD*)(v31 - 1);
                    v33 = 6LL * v30++;
                    v31 += 2;
                    --v29;
                    v8 = 0;
                    *(_WORD*)(v18 + v33) = v32;
                  } while (v29 != 0);
                  goto LABEL_5;
                }
              }
            }
          }
          v8 = 0;
        }
      LABEL_5:
        nvidia_631fc0(&v36_.v36, 0);
        NvOsFree_plt(v36_.v36);
        if ((unsigned int)++v7 >= *(_DWORD*)(a2 + 140)) {
          return v8;
        }
      }
    }
    return 0;
  }
}

__int64 nvidia_630700(int* a1, __int64 a2)
{
  int v2;
  int v5;
  int v6;
  __int64* v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 result;
  int v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned int v16;

  v2 = *(_DWORD*)(a2 + 128);
  while (1) {
    v5 = v2;
    v2 &= v2 - 1;
    v16 = v2 ^ v5;
    if (v2 != v5) {
      v6 = nvidia_626630((__int64*)(a2 + 520), &v16);
      *((_BYTE*)a1 + 4) = 1;
      if (v6 != 0 && *a1 == 0) {
        *a1 = v6;
      }
    }
    v7 = *(__int64**)a2;
    v14 = 0;
    v15 = 0;
    v13 = 0;
    v8 = *v7;
    LODWORD(v13) = v16;
    BYTE4(v13) = (*(__int64 (**)(__int64*))(v8 + 96))(v7);
    v9 = v16 != 0 ? (unsigned __int64)v16 << 10
                  : 1LL << (*(__int64 (**)(_QWORD, _QWORD))(
                        **(_QWORD**)(a2 + 24) + 96LL))(*(_QWORD*)(a2 + 24), 0);
    v10 = *(_QWORD*)(a2 + 24);
    v14 = v9;
    v15 = 1LL << ((*(unsigned __int8 (**)(__int64))(*(_QWORD*)v10 + 120LL))(
              v10)-1);
    result = nvidia_630820_alt1(a2 + 544, &v13);
    v12 = *a1;
    *((_BYTE*)a1 + 4) = 1;
    if ((_DWORD)result != 0) {
      break;
    }
    if (v2 == 0 || v12 != 0) {
      return result;
    }
  }
  if (v12 == 0) {
    *a1 = result;
  }
  return result;
}

__int64 nvidia_630820(__int64* a1, _QWORD* a2)
{
  unsigned __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64* v5;
  unsigned __int64 v6;
  unsigned int v7;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;

  v3 = a1[1];
  v2 = a1[2];
  if (v2 < v3 + 1) {
    v4 = a2;
    v5 = a1;
    if (v2 >= 0x10) {
      v6 = 2 * v2;
    }
    else {
      v6 = 16;
    }
    v7 = nvidia_62b1c0(a1, v6);
    if (v7 != 0) {
      return v7;
    }
    v3 = v5[1];
    a1 = v5;
    a2 = v4;
  }
  v9 = a2[2];
  v10 = (_QWORD*)(*a1 + 24 * v3);
  v11 = *a2;
  v10[1] = a2[1];
  v10[2] = v9;
  *v10 = v11;
  ++a1[1];
  return 0;
}

__int64 nvidia_6308c0(__int64 result, __int64 a2, _QWORD* a3, __int64 a4,
                      __int64 a5, _DWORD* a6, __int64 a7)
{
  __int64 v7;
  __int64 v8;
  __int64 v13;
  __int64 v15;
  unsigned int v16;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  __int64 v24;
  unsigned int v25;
  unsigned int v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  int v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  unsigned int v37;
  __int64 v38;
  unsigned int v39;
  unsigned int v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  __int64* v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64* v51;
  __int64 v52;
  bool v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64* v64;
  __int64 v65;
  bool v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  int v76;
  int v77;
  _DWORD* v78;
  unsigned int v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  int v83;
  __int64 v84;
  int v85;
  __int64 v86;
  unsigned __int64 v87;
  __int64 v88;
  __int64 v89;
  unsigned int v90;
  _QWORD* v91;
  __int64 v92;
  __int64 v93;
  unsigned __int64 v94;
  unsigned __int64 v95;
  unsigned __int64 v96;
  unsigned __int64 v97;
  unsigned __int64 v98;
  unsigned __int64 v99;
  unsigned int v100;
  unsigned __int64 v101;
  unsigned __int64 v102;
  unsigned __int64 v103;
  unsigned __int64 v104;
  __int64 v105;
  unsigned __int64 v106;
  unsigned __int64 v107;
  unsigned __int64* v108;
  unsigned __int64 v109;
  unsigned int v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  int v114;
  _QWORD* v115;
  __int64 v116;
  __int64 v117;
  unsigned __int64 v118;
  unsigned __int64 v119;
  unsigned __int64 v120;
  unsigned __int64 v121;
  unsigned __int64 v122;
  unsigned __int64 v123;
  unsigned int v124;
  unsigned __int64 v125;
  unsigned __int64 v126;
  unsigned __int64 v127;
  unsigned __int64 v128;
  __int64 v129;
  unsigned __int64 v130;
  unsigned __int64 v131;
  unsigned __int64* v132;
  unsigned __int64 v133;
  unsigned int v134;
  int v135;
  __int64 v136;
  int v137;
  int v138;
  unsigned __int64 v139;
  __int64 v140;
  int v141;
  int v142;
  int v143;
  __int64 v144;
  int v145;
  __int64 v146;
  unsigned int v147;
  int v148;
  char v149;
  __int64 v150;
  char v151;
  __int64 v152;
  char v153;
  __int64 v154;
  __int64 v155;
  __int64 v156;
  int v157;
  __int64 v158;
  int v159;
  int v160;
  __int64* v161;
  __int64 v162;
  int v163;
  int v164;
  int v165;
  int v166;
  __int64 v167;
  __int64 v168;
  __int64 v169;
  __int64 v170;
  __int64 v171;
  char v172;
  char v173;
  __int64 v174;
  __int64* v175;
  __int64 v176;
  __int64 v177;
  __int64 v178;
  __int64 v179;
  __int64 v180;

  if (*(_DWORD*)result != 0) {
    return result;
  }
  v180 = v8;
  v13 = result;
  v15 = *(_QWORD*)(a3[1] + 48LL);
  v16 = *(_DWORD*)(v15 + 4);
  *(_QWORD*)(a4 + 248) = v15;
  if (v16 > 0x20 || *(_DWORD*)(v15 + 8) >= 0x21u) {
    *(_BYTE*)(result + 4) = 1;
    *(_DWORD*)result = 2;
  }
  *(_QWORD*)(a4 + 256) = *(unsigned int*)(a5 + 56);
  *(_QWORD*)(a4 + 288) = *(unsigned int*)(a5 + 136);
  SdkRoutine_62fe00(result, a2, a3, a4);
  v18 =
      nvidia_6280e0_alt1(a3 + 41, *(unsigned int*)(*(_QWORD*)(a4 + 248) + 8LL));
  *(_BYTE*)(v13 + 4) = 1;
  v19 = *(_DWORD*)v13;
  if (v18 != 0) {
    if (v19 == 0) {
      *(_DWORD*)v13 = v18;
    }
  }
  else if (v19 == 0) {
    v31 = *(_QWORD*)(a4 + 248);
    v32 = *(_DWORD*)(v31 + 8);
    if (v32 != 0) {
      v33 = a3[41];
      if (v32 == 1) {
        v34 = 0;
      }
      else {
        v45 = (__int64*)(v33 + 8);
        v34 = 0;
        do {
          v46 = 1LL << v34;
          v47 = 0;
          if (v34 >= 0x40) {
            v46 = 0;
          }
          if ((v46 & ~*(_QWORD*)(a4 + 256)) == 0) {
            if ((unsigned int)(*(_DWORD*)(v31 + 36) - 1) >= 0x40) {
              v47 = -1;
            }
            else {
              v47 = (1LL << (*(_BYTE*)(v31 + 36) - 1)) |
                    ~(-1LL << (*(_BYTE*)(v31 + 36) - 1));
            }
          }
          *(v45 - 1) = v47;
          v48 = 2LL << v34;
          v49 = 0;
          if (v34 >= 0x40) {
            v48 = 0;
          }
          if ((v48 & ~*(_QWORD*)(a4 + 256)) == 0) {
            v49 = (1LL << (*(_BYTE*)(v31 + 36) - 1)) |
                  ~(-1LL << (*(_BYTE*)(v31 + 36) - 1));
            if ((unsigned int)(*(_DWORD*)(v31 + 36) - 1) >= 0x40) {
              v49 = -1;
            }
          }
          *v45 = v49;
          v45 += 2;
          v34 += 2LL;
        } while ((v32 & 0xFFFFFFFE) != v34);
      }
      if ((v32 & 1) != 0) {
        v35 = 0;
        v36 = 1LL << v34;
        if (v34 >= 0x40) {
          v36 = 0;
        }
        if ((v36 & ~*(_QWORD*)(a4 + 256)) == 0) {
          v37 = *(_DWORD*)(v31 + 36) - 1;
          v35 = (1LL << v37) | ~(-1LL << v37);
          if (v37 >= 0x40) {
            v35 = -1;
          }
        }
        *(_QWORD*)(v33 + 8 * v34) = v35;
      }
    }
  }
  v20 =
      nvidia_6280e0_alt1(a3 + 44, *(unsigned int*)(*(_QWORD*)(a4 + 248) + 8LL));
  *(_BYTE*)(v13 + 4) = 1;
  v21 = *(_DWORD*)v13;
  if (v20 != 0) {
    if (v21 == 0) {
      *(_DWORD*)v13 = v20;
    }
  }
  else if (v21 == 0) {
    v38 = *(_QWORD*)(a4 + 248);
    v39 = *(_DWORD*)(v38 + 64);
    if (v39 != 0) {
      v40 = *(_DWORD*)(v38 + 8);
      if (v40 != 0) {
        v41 = v40 & 3;
        if (v39 >= 0x41) {
          v42 = -1;
        }
        else {
          v42 = (1LL << ((unsigned __int8)v39 - 1)) |
                ~(-1LL << ((unsigned __int8)v39 - 1));
        }
        v43 = a3[44];
        if (v40 >= 4) {
          v50 = v40 & 0xFFFFFFFC;
          v51 = (__int64*)(v43 + 16);
          v44 = 0;
          do {
            v52 = 1LL << v44;
            v53 = v44 >= 0x40;
            v54 = 2LL << v44;
            v55 = 4LL << v44;
            v56 = 8LL << v44;
            v44 += 4LL;
            if (v53) {
              v52 = 0;
            }
            if (v53) {
              v54 = 0;
            }
            if (v53) {
              v55 = 0;
            }
            if (v53) {
              v56 = 0;
            }
            if ((v52 & ~*(_QWORD*)(a4 + 256)) != 0) {
              v57 = 0;
            }
            else {
              v57 = v42;
            }
            *(v51 - 2) = v57;
            if ((v54 & ~*(_QWORD*)(a4 + 256)) != 0) {
              v58 = 0;
            }
            else {
              v58 = v42;
            }
            *(v51 - 1) = v58;
            if ((v55 & ~*(_QWORD*)(a4 + 256)) != 0) {
              v59 = 0;
            }
            else {
              v59 = v42;
            }
            *v51 = v59;
            if ((v56 & ~*(_QWORD*)(a4 + 256)) != 0) {
              v60 = 0;
            }
            else {
              v60 = v42;
            }
            v51[1] = v60;
            v51 += 4;
          } while (v50 != v44);
        }
        else {
          v44 = 0;
        }
        for (; v41 != 0; ++v44) {
          v61 = 1LL << v44;
          if (v44 >= 0x40) {
            v61 = 0;
          }
          if ((v61 & ~*(_QWORD*)(a4 + 256)) != 0) {
            v62 = 0;
          }
          else {
            v62 = v42;
          }
          --v41;
          *(_QWORD*)(v43 + 8 * v44) = v62;
        }
      }
    }
  }
  v22 =
      nvidia_6280e0_alt1(a3 + 47, *(unsigned int*)(*(_QWORD*)(a4 + 248) + 4LL));
  *(_BYTE*)(v13 + 4) = 1;
  v23 = *(_DWORD*)v13;
  if (v22 != 0) {
    if (v23 == 0) {
      *(_DWORD*)v13 = v22;
    }
  }
  else if (v23 == 0 && (*(_BYTE*)(a3[11] + 169LL) & 1) == 0) {
    v24 = *(_QWORD*)(a4 + 248);
    v25 = *(_DWORD*)(v24 + 68);
    if (v25 != 0) {
      v26 = *(_DWORD*)(v24 + 4);
      if (v26 != 0) {
        v27 = v26 & 3;
        if (v25 >= 0x41) {
          v28 = -1;
        }
        else {
          v28 = (1LL << ((unsigned __int8)v25 - 1)) |
                ~(-1LL << ((unsigned __int8)v25 - 1));
        }
        v29 = a3[47];
        if (v26 >= 4) {
          v63 = v26 & 0xFFFFFFFC;
          v64 = (__int64*)(v29 + 16);
          v30 = 0;
          do {
            v65 = 1LL << v30;
            v66 = v30 >= 0x40;
            v67 = 2LL << v30;
            v68 = 4LL << v30;
            v69 = 8LL << v30;
            v30 += 4LL;
            if (v66) {
              v65 = 0;
            }
            if (v66) {
              v67 = 0;
            }
            if (v66) {
              v68 = 0;
            }
            if (v66) {
              v69 = 0;
            }
            if ((v65 & ~*(_QWORD*)(a4 + 288)) != 0) {
              v70 = 0;
            }
            else {
              v70 = v28;
            }
            *(v64 - 2) = v70;
            if ((v67 & ~*(_QWORD*)(a4 + 288)) != 0) {
              v71 = 0;
            }
            else {
              v71 = v28;
            }
            *(v64 - 1) = v71;
            if ((v68 & ~*(_QWORD*)(a4 + 288)) != 0) {
              v72 = 0;
            }
            else {
              v72 = v28;
            }
            *v64 = v72;
            if ((v69 & ~*(_QWORD*)(a4 + 288)) != 0) {
              v73 = 0;
            }
            else {
              v73 = v28;
            }
            v64[1] = v73;
            v64 += 4;
          } while (v63 != v30);
        }
        else {
          v30 = 0;
        }
        for (; v27 != 0; ++v30) {
          v74 = 1LL << v30;
          if (v30 >= 0x40) {
            v74 = 0;
          }
          if ((v74 & ~*(_QWORD*)(a4 + 288)) != 0) {
            v75 = 0;
          }
          else {
            v75 = v28;
          }
          --v27;
          *(_QWORD*)(v29 + 8 * v30) = v75;
        }
      }
    }
  }
  nvidia_630140_alt1(v13, a3, a4);
  v76 =
      nvidia_6280e0_alt1(a3 + 53, *(unsigned int*)(*(_QWORD*)(a4 + 248) + 4LL));
  *(_BYTE*)(v13 + 4) = 1;
  v77 = *(_DWORD*)v13;
  if (v76 != 0) {
    if (v77 == 0) {
      *(_DWORD*)v13 = v76;
    }
  }
  else if (v77 == 0) {
    v84 = *(_QWORD*)(a4 + 248);
    v85 = *(_DWORD*)(v84 + 4);
    if (v85 != 0) {
      v86 = a3[53];
      if (v85 == 1) {
        v87 = 0;
      }
      else {
        v175 = (__int64*)(v86 + 8);
        v87 = 0;
        do {
          v176 = 1LL << v87;
          v177 = 0;
          if (v87 >= 0x40) {
            v176 = 0;
          }
          if ((v176 & ~*(_QWORD*)(a4 + 288)) == 0) {
            if ((unsigned int)(*(_DWORD*)(v84 + 60) - 1) >= 0x40) {
              v177 = -1;
            }
            else {
              v177 = (1LL << (*(_BYTE*)(v84 + 60) - 1)) |
                     ~(-1LL << (*(_BYTE*)(v84 + 60) - 1));
            }
          }
          *(v175 - 1) = v177;
          v178 = 2LL << v87;
          v179 = 0;
          if (v87 >= 0x40) {
            v178 = 0;
          }
          if ((v178 & ~*(_QWORD*)(a4 + 288)) == 0) {
            v179 = (1LL << (*(_BYTE*)(v84 + 60) - 1)) |
                   ~(-1LL << (*(_BYTE*)(v84 + 60) - 1));
            if ((unsigned int)(*(_DWORD*)(v84 + 60) - 1) >= 0x40) {
              v179 = -1;
            }
          }
          *v175 = v179;
          v175 += 2;
          v87 += 2LL;
        } while ((v85 & 0xFFFFFFFE) != v87);
      }
      if ((v85 & 1) != 0) {
        v88 = 0;
        v89 = 1LL << v87;
        if (v87 >= 0x40) {
          v89 = 0;
        }
        if ((v89 & ~*(_QWORD*)(a4 + 288)) == 0) {
          v90 = *(_DWORD*)(v84 + 60) - 1;
          v88 = (1LL << v90) | ~(-1LL << v90);
          if (v90 >= 0x40) {
            v88 = -1;
          }
        }
        *(_QWORD*)(v86 + 8 * v87) = v88;
      }
    }
  }
  nvidia_6302e0_alt1(v13, a3, a4);
  if (*(_DWORD*)v13 == 0) {
    v78 = *(_DWORD**)(a4 + 248);
    v79 = v78[1];
    if (v79 != 0) {
      v80 = a3[53];
      v81 = v79 & 7;
      if (v79 >= 8) {
        v91 = (_QWORD*)(v80 + 32);
        v92 = 0;
        v83 = 0;
        v93 = -(__int64)(v79 & 0xFFFFFFF8);
        do {
          v92 -= 8;
          v94 = *(v91 - 3) - ((*(v91 - 3) >> 1) & 0x5555555555555555LL);
          v95 = *(v91 - 4) - ((*(v91 - 4) >> 1) & 0x5555555555555555LL);
          v96 = *(v91 - 2) - ((*(v91 - 2) >> 1) & 0x5555555555555555LL);
          v97 = (v96 & 0x3333333333333333LL) +
                ((v96 >> 2) & 0x3333333333333333LL);
          v98 = *(v91 - 1) - ((*(v91 - 1) >> 1) & 0x5555555555555555LL);
          v99 = *v91 - ((*v91 >> 1) & 0x5555555555555555LL);
          v100 = v83 +
                 ((unsigned int)((0x101010101010101LL *
                                  (((v95 & 0x3333333333333333LL) +
                                    ((v95 >> 2) & 0x3333333333333333LL) +
                                    (((v95 & 0x3333333333333333LL) +
                                      ((v95 >> 2) & 0x3333333333333333LL)) >>
                                     4)) &
                                   0xF0F0F0F0F0F0F0FLL)) >>
                                 32) >>
                  24) +
                 ((unsigned int)((0x101010101010101LL *
                                  (((v94 & 0x3333333333333333LL) +
                                    ((v94 >> 2) & 0x3333333333333333LL) +
                                    (((v94 & 0x3333333333333333LL) +
                                      ((v94 >> 2) & 0x3333333333333333LL)) >>
                                     4)) &
                                   0xF0F0F0F0F0F0F0FLL)) >>
                                 32) >>
                  24) +
                 ((unsigned int)((0x101010101010101LL *
                                  ((v97 + (v97 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >>
                                 32) >>
                  24);
          LODWORD(v94) =
              ((unsigned int)((0x101010101010101LL *
                               (((v98 & 0x3333333333333333LL) +
                                 ((v98 >> 2) & 0x3333333333333333LL) +
                                 (((v98 & 0x3333333333333333LL) +
                                   ((v98 >> 2) & 0x3333333333333333LL)) >>
                                  4)) &
                                0xF0F0F0F0F0F0F0FLL)) >>
                              32) >>
               24) +
              ((unsigned int)((0x101010101010101LL *
                               (((v99 & 0x3333333333333333LL) +
                                 ((v99 >> 2) & 0x3333333333333333LL) +
                                 (((v99 & 0x3333333333333333LL) +
                                   ((v99 >> 2) & 0x3333333333333333LL)) >>
                                  4)) &
                                0xF0F0F0F0F0F0F0FLL)) >>
                              32) >>
               24);
          v101 = ((v91[1] - ((v91[1] >> 1) & 0x5555555555555555LL)) &
                  0x3333333333333333LL) +
                 (((v91[1] - ((v91[1] >> 1) & 0x5555555555555555uLL)) >> 2) &
                  0x3333333333333333LL);
          v103 = v91[2];
          v102 = v91[3];
          v91 += 8;
          v104 = v103 - ((v103 >> 1) & 0x5555555555555555LL);
          v105 = v104 & 0x3333333333333333LL;
          LODWORD(v101) =
              v94 +
              ((unsigned int)((0x101010101010101LL *
                               ((v101 + (v101 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >>
                              32) >>
               24);
          v106 = v104 >> 2;
          v107 = v102 - ((v102 >> 1) & 0x5555555555555555LL);
          v83 = v100 + v101 +
                ((unsigned int)((0x101010101010101LL *
                                 ((v105 + (v106 & 0x3333333333333333LL) +
                                   ((v105 + (v106 & 0x3333333333333333LL)) >>
                                    4)) &
                                  0xF0F0F0F0F0F0F0FLL)) >>
                                32) >>
                 24) +
                ((unsigned int)((0x101010101010101LL *
                                 (((v107 & 0x3333333333333333LL) +
                                   ((v107 >> 2) & 0x3333333333333333LL) +
                                   (((v107 & 0x3333333333333333LL) +
                                     ((v107 >> 2) & 0x3333333333333333LL)) >>
                                    4)) &
                                  0xF0F0F0F0F0F0F0FLL)) >>
                                32) >>
                 24);
        } while (v93 != v92);
        v82 = -v92;
      }
      else {
        v82 = 0;
        v83 = 0;
      }
      if (v81 != 0) {
        v108 = (unsigned __int64*)(v80 + 8 * v82);
        do {
          v109 = *v108++;
          --v81;
          v83 +=
              (unsigned int)((0x101010101010101LL *
                              ((((v109 - ((v109 >> 1) & 0x5555555555555555LL)) &
                                 0x3333333333333333LL) +
                                (((v109 -
                                   ((v109 >> 1) & 0x5555555555555555LL)) >>
                                  2) &
                                 0x3333333333333333LL) +
                                ((((v109 -
                                    ((v109 >> 1) & 0x5555555555555555LL)) &
                                   0x3333333333333333LL) +
                                  (((v109 -
                                     ((v109 >> 1) & 0x5555555555555555LL)) >>
                                    2) &
                                   0x3333333333333333LL)) >>
                                 4)) &
                               0xF0F0F0F0F0F0F0FLL)) >>
                             32) >>
              24;
        } while (v81 != 0);
      }
    }
    else {
      v83 = 0;
    }
    v110 = v78[2];
    *(_DWORD*)(a4 + 576) = v83;
    if (v110 != 0) {
      v111 = a3[38];
      v112 = v110 & 7;
      if (v110 >= 8) {
        v115 = (_QWORD*)(v111 + 32);
        v116 = 0;
        v114 = 0;
        v117 = -(__int64)(v110 & 0xFFFFFFF8);
        do {
          v116 -= 8;
          v118 = *(v115 - 3) - ((*(v115 - 3) >> 1) & 0x5555555555555555LL);
          v119 = *(v115 - 4) - ((*(v115 - 4) >> 1) & 0x5555555555555555LL);
          v120 = *(v115 - 2) - ((*(v115 - 2) >> 1) & 0x5555555555555555LL);
          v121 = (v120 & 0x3333333333333333LL) +
                 ((v120 >> 2) & 0x3333333333333333LL);
          v122 = *(v115 - 1) - ((*(v115 - 1) >> 1) & 0x5555555555555555LL);
          v123 = *v115 - ((*v115 >> 1) & 0x5555555555555555LL);
          v124 =
              v114 +
              ((unsigned int)((0x101010101010101LL *
                               (((v119 & 0x3333333333333333LL) +
                                 ((v119 >> 2) & 0x3333333333333333LL) +
                                 (((v119 & 0x3333333333333333LL) +
                                   ((v119 >> 2) & 0x3333333333333333LL)) >>
                                  4)) &
                                0xF0F0F0F0F0F0F0FLL)) >>
                              32) >>
               24) +
              ((unsigned int)((0x101010101010101LL *
                               (((v118 & 0x3333333333333333LL) +
                                 ((v118 >> 2) & 0x3333333333333333LL) +
                                 (((v118 & 0x3333333333333333LL) +
                                   ((v118 >> 2) & 0x3333333333333333LL)) >>
                                  4)) &
                                0xF0F0F0F0F0F0F0FLL)) >>
                              32) >>
               24) +
              ((unsigned int)((0x101010101010101LL *
                               ((v121 + (v121 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >>
                              32) >>
               24);
          LODWORD(v118) =
              ((unsigned int)((0x101010101010101LL *
                               (((v122 & 0x3333333333333333LL) +
                                 ((v122 >> 2) & 0x3333333333333333LL) +
                                 (((v122 & 0x3333333333333333LL) +
                                   ((v122 >> 2) & 0x3333333333333333LL)) >>
                                  4)) &
                                0xF0F0F0F0F0F0F0FLL)) >>
                              32) >>
               24) +
              ((unsigned int)((0x101010101010101LL *
                               (((v123 & 0x3333333333333333LL) +
                                 ((v123 >> 2) & 0x3333333333333333LL) +
                                 (((v123 & 0x3333333333333333LL) +
                                   ((v123 >> 2) & 0x3333333333333333LL)) >>
                                  4)) &
                                0xF0F0F0F0F0F0F0FLL)) >>
                              32) >>
               24);
          v125 = ((v115[1] - ((v115[1] >> 1) & 0x5555555555555555LL)) &
                  0x3333333333333333LL) +
                 (((v115[1] - ((v115[1] >> 1) & 0x5555555555555555uLL)) >> 2) &
                  0x3333333333333333LL);
          v127 = v115[2];
          v126 = v115[3];
          v115 += 8;
          v128 = v127 - ((v127 >> 1) & 0x5555555555555555LL);
          v129 = v128 & 0x3333333333333333LL;
          LODWORD(v125) =
              v118 +
              ((unsigned int)((0x101010101010101LL *
                               ((v125 + (v125 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >>
                              32) >>
               24);
          v130 = v128 >> 2;
          v131 = v126 - ((v126 >> 1) & 0x5555555555555555LL);
          v114 = v124 + v125 +
                 ((unsigned int)((0x101010101010101LL *
                                  ((v129 + (v130 & 0x3333333333333333LL) +
                                    ((v129 + (v130 & 0x3333333333333333LL)) >>
                                     4)) &
                                   0xF0F0F0F0F0F0F0FLL)) >>
                                 32) >>
                  24) +
                 ((unsigned int)((0x101010101010101LL *
                                  (((v131 & 0x3333333333333333LL) +
                                    ((v131 >> 2) & 0x3333333333333333LL) +
                                    (((v131 & 0x3333333333333333LL) +
                                      ((v131 >> 2) & 0x3333333333333333LL)) >>
                                     4)) &
                                   0xF0F0F0F0F0F0F0FLL)) >>
                                 32) >>
                  24);
        } while (v117 != v116);
        v113 = -v116;
      }
      else {
        v113 = 0;
        v114 = 0;
      }
      if (v112 != 0) {
        v132 = (unsigned __int64*)(v111 + 8 * v113);
        do {
          v133 = *v132++;
          --v112;
          v114 +=
              (unsigned int)((0x101010101010101LL *
                              ((((v133 - ((v133 >> 1) & 0x5555555555555555LL)) &
                                 0x3333333333333333LL) +
                                (((v133 -
                                   ((v133 >> 1) & 0x5555555555555555LL)) >>
                                  2) &
                                 0x3333333333333333LL) +
                                ((((v133 -
                                    ((v133 >> 1) & 0x5555555555555555LL)) &
                                   0x3333333333333333LL) +
                                  (((v133 -
                                     ((v133 >> 1) & 0x5555555555555555LL)) >>
                                    2) &
                                   0x3333333333333333LL)) >>
                                 4)) &
                               0xF0F0F0F0F0F0F0FLL)) >>
                             32) >>
              24;
        } while (v112 != 0);
      }
    }
    else {
      v114 = 0;
    }
    v134 = v78[14] * v114;
    *(_DWORD*)(a4 + 528) = v134;
    if (v134 <= 0x80) {
      if (*((_DWORD*)a3 + 17) < 0x13u) {
        goto LABEL_155;
      }
      v135 = nvidia_630440_alt1(a2, a3, a4, a5, a6, a7);
      *(_BYTE*)(v13 + 4) = 1;
      if (v135 == 0 || *(_DWORD*)v13 != 0) {
        goto LABEL_155;
      }
    }
    else {
      v135 = 2;
      *(_BYTE*)(v13 + 4) = 1;
    }
    *(_DWORD*)v13 = v135;
  }
LABEL_155:
  if (a3[60] != 0) {
    v136 = a3[59];
  }
  else {
    v136 = 0;
  }
  *(_QWORD*)(a4 + 568) = v136;
  nvidia_630700_alt1(v13, a3);
  v137 = a6[34];
  if (v137 == 0) {
    if (*(_DWORD*)(a5 + 36) != 32) {
      *(_DWORD*)(a4 + 440) = 0;
      goto LABEL_162;
    }
    v137 = 1;
  }
  *(_DWORD*)(a4 + 440) = v137;
LABEL_162:
  *(_DWORD*)(a4 + 444) = a6[35];
  v138 = *(_DWORD*)(a3[2] + 144LL);
  *(_QWORD*)(a4 + 448) = 0;
  *(_DWORD*)(a4 + 224) = v138;
  v139 = *(_QWORD*)(a5 + 16);
  if (HIDWORD(v139) != 0) {
    if (*(_DWORD*)v13 == 0) {
      *(_DWORD*)v13 = 11;
    }
  }
  else {
    *(_DWORD*)(a4 + 344) = v139;
  }
  v140 = a3[1];
  *(_BYTE*)(a4 + 848) = 0;
  *(_DWORD*)(a4 + 852) = 0;
  *(_DWORD*)(a4 + 348) = *(_DWORD*)(v140 + 88);
  *(_BYTE*)(v13 + 4) = 1;
  *(_DWORD*)(a4 + 352) = 4096;
  LODWORD(v140) = *((_DWORD*)a3 + 34);
  *(_DWORD*)(a4 + 356) = *((_DWORD*)a3 + 33);
  *(_DWORD*)(a4 + 880) = v140;
  if (*((_BYTE*)a3 + 160) != 0) {
    v141 = *(_DWORD*)(a5 + 44);
  }
  else {
    v141 = 0;
  }
  *(_DWORD*)(a4 + 376) = v141;
  v142 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 96LL))(*a3);
  v143 = *(_DWORD*)(a4 + 376);
  *(_DWORD*)(a4 + 384) = v142;
  if (v143 != 0) {
    *(_DWORD*)(a4 + 380) =
        (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 104LL))(*a3);
  }
  v144 = *a3;
  *(_BYTE*)(a4 + 176) = 0;
  v145 = (*(__int64 (**)(__int64))(*(_QWORD*)v144 + 120LL))(v144);
  v146 = a3[1];
  *(_DWORD*)(a4 + 388) = v145;
  v147 = *(_DWORD*)(v146 + 124);
  if (v147 == 0) {
    v147 = (*(_DWORD*)(v146 + 16) << 23) & 0x80000000 |
           ((unsigned __int8)*(_DWORD*)(v146 + 16) << 20) & 0xFFFFFFF |
           ((unsigned __int8)*(_DWORD*)(a4 + 216) >> 4 << 16) |
           ((*(_DWORD*)(a4 + 216) & 7) << 28) | 0x3D7;
  }
  v148 = *(unsigned __int8*)(v146 + 169);
  *(_DWORD*)(a4 + 464) = v147;
  *(_QWORD*)(a4 + 480) = 0;
  v149 = 0;
  v150 = a3[12];
  *(_DWORD*)(a4 + 220) = v148 ^ 1;
  LOBYTE(v148) = *((_DWORD*)a3 + 13) > 0xDu;
  *(_BYTE*)(a4 + 84) = v148;
  *(_BYTE*)(a4 + 85) = v148;
  v151 = SdkData_10406d2;
  *(_BYTE*)(a4 + 163) = (SdkData_10406d2 ^ 1) & ((v150 & 0x100000) != 0);
  if ((v150 & 0x100000) != 0 && (v151 & 1) == 0) {
    if (((*(__int64 (**)(_QWORD))(*(_QWORD*)a3[4] + 32LL))(a3[4]) & 1) != 0) {
      v149 = 0;
    }
    else {
      v149 = SdkData_10406d3 ^ 1;
    }
  }
  v152 = a3[4];
  *(_BYTE*)(a4 + 164) = v149 & 1;
  v153 = (*(__int64 (**)(__int64))(*(_QWORD*)v152 + 40LL))(v152) & 1;
  v154 = a3[1];
  v155 = *(unsigned int*)(a4 + 440);
  v156 = (unsigned int)a6[36];
  *(_BYTE*)(a4 + 165) = v153;
  v157 = *((_DWORD*)a3 + 24);
  *(_BYTE*)(a4 + 40) = 1;
  *(_BYTE*)(a4 + 39) = (v157 & 0x800000) != 0;
  v159 = nvidia_627cd0(v154, v155, a4 + 444, a4 + 464, v156, a6 + 37, a4, v158,
                       v7, v180);
  *(_BYTE*)(v13 + 4) = 1;
  if (v159 != 0 && *(_DWORD*)v13 == 0) {
    *(_DWORD*)v13 = v159;
  }
  v160 = *(_DWORD*)(a5 + 64);
  *(_DWORD*)(a4 + 532) = *(_DWORD*)(a5 + 60);
  v161 = (__int64*)*a3;
  v162 = a3[1];
  *(_DWORD*)(a4 + 536) = v160;
  v163 = *(_DWORD*)(v162 + 96);
  *(_DWORD*)(a4 + 544) = *(_DWORD*)(v162 + 92);
  v164 = *((_DWORD*)a3 + 37);
  *(_DWORD*)(a4 + 540) = v163;
  *(_DWORD*)(a4 + 548) = v164;
  v165 = *(_DWORD*)(v162 + 112);
  *(_DWORD*)(a4 + 744) = *(_DWORD*)(v162 + 116);
  v166 = *(_DWORD*)(v162 + 120);
  v167 = *(_QWORD*)(v162 + 128);
  *(_DWORD*)(a4 + 556) = v165;
  *(_QWORD*)(a4 + 752) = v167;
  v168 = *v161;
  *(_DWORD*)(a4 + 748) = v166;
  *(_DWORD*)(a4 + 560) = (*(__int64 (**)(__int64*))(v168 + 184))(v161);
  *(_BYTE*)(a4 + 564) =
      (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 192LL))(*a3) & 1;
  nvidia_62f120_alt1(a4);
  v169 = *a3;
  *(_BYTE*)(a4 + 840) =
      ((a3[12] & 0x2000000000LL) != 0) & (*SdkData_e89a28 ^ 1);
  v170 = (*(__int64 (**)(__int64))(*(_QWORD*)v169 + 48LL))(v169);
  v171 = a3[11];
  *(_QWORD*)(a4 + 184) = v170;
  if (*(_BYTE*)(v171 + 168) == 1) {
    v172 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[4] + 48LL))(a3[4]);
  }
  else {
    v172 = 0;
  }
  *(_WORD*)(a4 + 842) = 0;
  v173 = v172 & 1;
  v174 = a3[3];
  *(_BYTE*)(a4 + 166) = v173;
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v174 + 320LL))(v174);
  *(_BYTE*)(a4 + 167) = result & 1;
  return result;
}

int* nvidia_6316c0(int* result, unsigned int* a2, __int64 a3, __int64 a4)
{
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v8;
  __int64 v10;
  int* v11;
  int v12;
  int v13;
  int v14;
  int v15;
  __int64 v16;
  char v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;

  if (*result == 0) {
    v6 = *(_DWORD*)(a3 + 68);
    if (v6 != 0 && v6 != 1 && (*(_QWORD*)(a3 + 96) & 0x20000000000LL) != 0) {
      v34 = v4;
      v35 = v5;
      if ((SdkData_10406d5 & 1) == 0) {
        v8 = *((_QWORD*)a2 + 1);
        LODWORD(v29) = 0;
        if (*(_DWORD*)(v8 + 52) != 0 &&
            (*(_QWORD*)(v8 + 80) & 0x20000000000LL) != 0) {
          v10 = a4;
          v11 = result;
          v12 = nvidia_644da0_alt1(*a2, 2147763969LL, &v29, 4);
          v13 = *v11;
          v14 = v12;
          result = v11;
          if (v14 != 0) {
            *((_BYTE*)v11 + 4) = 1;
            if (v13 != 0) {
              v17 = 0;
              result = v11;
              a4 = v10;
              goto LABEL_23;
            }
            result = v11;
            a4 = v10;
          }
          else {
            v15 = v29;
            a4 = v10;
            *((_BYTE*)v11 + 4) = 1;
            if (v13 != 0) {
              goto LABEL_22;
            }
            v16 = *((_QWORD*)a2 + 1);
            v32 = 0;
            v33 = 0;
            v30 = 0;
            v31 = 0;
            v29 = 0;
            if (*(_DWORD*)(v16 + 52) < 2u) {
              v14 = 2;
            }
            else {
              if ((((unsigned __int8)SdkData_10406d5 ^ 1) &
                   ((*(_BYTE*)(v16 + 85) & 2) != 0)) == 1) {
                v14 = nvidia_644da0_alt1(*a2, 2150123266LL, &v29, 40);
              }
              else {
                v14 = 2;
              }
              result = v11;
              a4 = v10;
            }
            v18 = v29;
            v19 = HIDWORD(v29);
            v20 = v30;
            v21 = HIDWORD(v30);
            *((_BYTE*)result + 4) = 1;
            v22 = v31;
            v23 = HIDWORD(v31);
            v24 = *result;
            v25 = v32;
            v26 = HIDWORD(v32);
            v27 = v33;
            v28 = HIDWORD(v33);
            if (v14 == 0) {
              if (v24 == 0) {
                *(_DWORD*)(a4 + 696) = v15;
                *(_DWORD*)(a4 + 704) = v18;
                v17 = 1;
                *(_DWORD*)(a4 + 708) = v19;
                *(_DWORD*)(a4 + 712) = v20;
                *(_DWORD*)(a4 + 716) = v21;
                *(_DWORD*)(a4 + 720) = v22;
                *(_DWORD*)(a4 + 724) = v23;
                *(_DWORD*)(a4 + 728) = v25;
                *(_DWORD*)(a4 + 732) = v28;
                *(_DWORD*)(a4 + 736) = v26;
                *(_DWORD*)(a4 + 700) = 4096;
                *(_DWORD*)(a4 + 740) = v27;
                goto LABEL_23;
              }
              goto LABEL_22;
            }
            if (v24 != 0) {
            LABEL_22:
              v17 = 0;
              goto LABEL_23;
            }
          }
        }
        else {
          *((_BYTE*)result + 4) = 1;
          v14 = 2;
        }
        v17 = 0;
        *result = v14;
      LABEL_23:
        *(_BYTE*)(a4 + 68) = v17;
        *((_BYTE*)result + 4) = 0;
        *result = 0;
      }
    }
  }
  return result;
}

__int64 nvidia_631b10(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5)
{
  int v5;
  int v6;
  int v10;
  int v11;
  int v12;
  __int64 v13;
  unsigned int v14;
  int v15;
  int v16;
  bool v17;
  unsigned int v18;
  unsigned int v19;
  int v20;
  __int64 v21;
  bool v22;
  int v23;
  int v24;
  char v25;
  unsigned int v26;
  unsigned int v27;
  unsigned int v28;
  _DWORD* v29;
  unsigned int v30;
  unsigned int v31;

  v5 = *(__int16*)(a2 + 120);
  v6 = *(__int16*)(a2 + 116);
  *(_QWORD*)(a1 + 8) = a4;
  *(_DWORD*)(a1 + 32) = v5;
  *(_DWORD*)(a1 + 36) = v6;
  v10 = *(__int16*)(a2 + 122);
  *(_DWORD*)(a1 + 40) = *(__int16*)(a2 + 118);
  *(_DWORD*)(a1 + 44) = v10;
  v11 = *(__int16*)(a2 + 112);
  *(_DWORD*)(a1 + 48) = *(__int16*)(a2 + 124);
  *(_DWORD*)(a1 + 52) = v11;
  v12 = *(__int16*)(a2 + 114);
  *(_DWORD*)(a1 + 56) = *(__int16*)(a2 + 126);
  *(_DWORD*)(a1 + 60) = v12;
  *(_DWORD*)(a1 + 64) = *(__int16*)(a2 + 128);
  v13 = *(_QWORD*)(a2 + 80);
  *(_QWORD*)(a1 + 72) = a3;
  *(_QWORD*)(a1 + 80) = v13;
  if (SdkData_10406d6 == 1) {
    v14 = *(_DWORD*)(a1 + 112);
  }
  else {
    v15 = *(_DWORD*)(a2 + 52) | *(_DWORD*)(a2 + 40);
    v14 = (*(__int64 (**)(__int64))(*(_QWORD*)a4 + 280LL))(a4)&v15;
    v16 = *(_DWORD*)(a2 + 40) & v14;
    *(_DWORD*)(a1 + 112) = v14;
    *(_DWORD*)(a1 + 116) = v16;
  }
  v17 = false;
  *(_DWORD*)(a1 + 120) = 0;
  *(_DWORD*)(a1 + 96) = 0;
  v18 = ((v14 - ((v14 >> 1) & 0x55555555)) & 0x33333333) +
        (((v14 - ((v14 >> 1) & 0x55555555)) >> 2) & 0x33333333);
  v19 = (16843009 * ((v18 + (v18 >> 4)) & 0xF0F0F0F)) >> 24;
  if (v19 >= 3) {
    v20 = 15;
  }
  else {
    v20 = 0;
  }
  if ((*(_BYTE*)(*(_QWORD*)(a1 + 24) + 32LL) & 1) == 0 &&
      (*(_BYTE*)(a5 + 9) & 1) == 0) {
    v17 = *(_DWORD*)(a2 + 44) != 0;
  }
  *(_BYTE*)(a1 + 144) = v17;
  v21 = *(_QWORD*)(a1 + 80);
  v22 = *(_DWORD*)(a1 + 60) > 0xAu && (~(_DWORD)v21 & 0x400100) == 0;
  v23 = *(_DWORD*)(a2 + 180);
  if (!v22) {
    v23 = 1;
  }
  *(_DWORD*)(a1 + 132) = v23;
  *(_DWORD*)(a1 + 136) = 0;
  if ((unsigned __int64)SdkData_ea4520 >> 37 != 0) {
    if (v19 >= 3) {
      v20 = 15;
    }
    else {
      v20 = 11;
    }
  }
  else {
    *(_DWORD*)(a1 + 100) = (unsigned __int64)SdkData_ea4520 >> 5;
  }
  v24 = *(_DWORD*)(a2 + 184);
  *(_DWORD*)(a1 + 88) = *(_DWORD*)(a2 + 188);
  *(_DWORD*)(a1 + 92) = v24;
  if (SdkData_10406d8 == 1) {
    *(_BYTE*)(a1 + 140) = 1;
    if ((SdkRoutine_ae0f0(*(_QWORD*)(*(_QWORD*)a1 + 40LL), 1) & 1) == 0) {
      goto LABEL_27;
    }
  }
  else {
    if (SdkData_10406d8 == 2) {
      *(_BYTE*)(a1 + 140) = 0;
      if ((SdkRoutine_ae0f0(*(_QWORD*)(*(_QWORD*)a1 + 40LL), 1) & 1) != 0) {
        goto LABEL_23;
      }
    LABEL_27:
      *(_BYTE*)(a1 + 141) = 0;
      *(_BYTE*)(a1 + 142) = 0;
      v27 = *(_DWORD*)(a1 + 40);
      *(_BYTE*)(a1 + 143) = 0;
      if (v27 < 0x13) {
        goto LABEL_34;
      }
      goto LABEL_32;
    }
    *(_BYTE*)(a1 + 140) = (v21 & 0x2000000) != 0;
    if ((SdkRoutine_ae0f0(*(_QWORD*)(*(_QWORD*)a1 + 40LL), 1) & 1) == 0) {
      goto LABEL_27;
    }
  }
LABEL_23:
  v25 = SdkRoutine_ae0f0(*(_QWORD*)(*(_QWORD*)a1 + 56LL), 1);
  *(_BYTE*)(a1 + 141) = v25 & 1;
  if ((v25 & 1) != 0) {
    *(_BYTE*)(a1 + 142) = *(_DWORD*)(a1 + 36) > 1u;
    v26 = *(_DWORD*)(a1 + 40);
    *(_BYTE*)(a1 + 143) = 0;
    if (v26 < 0x13) {
      goto LABEL_34;
    }
  }
  else {
    *(_BYTE*)(a1 + 142) = 0;
    v28 = *(_DWORD*)(a1 + 40);
    *(_BYTE*)(a1 + 143) = 0;
    if (v28 < 0x13) {
      goto LABEL_34;
    }
  }
LABEL_32:
  if ((*(_QWORD*)(a1 + 80) & 0x40) != 0) {
    *(_DWORD*)(a1 + 104) = 0x8000000;
  }
LABEL_34:
  if (*(_DWORD*)(a1 + 56) != 0) {
    *(_BYTE*)(a1 + 146) =
        SdkRoutine_ae0f0(*(_QWORD*)(*(_QWORD*)a1 + 72LL), 1) & 1;
    *(_BYTE*)(a1 + 147) =
        SdkRoutine_ae0f0(*(_QWORD*)(*(_QWORD*)a1 + 88LL), 1) & 1;
  }
  v29 = *(_DWORD**)(a1 + 72);
  v30 = *(_DWORD*)(a1 + 132);
  *(_BYTE*)(a1 + 145) = 0;
  if (v29[25] >= v30) {
    if ((v30 | v20) != 0) {
    LABEL_38:
      if ((v29[29] | v20) != 0) {
        v31 = v20;
      }
      else {
        v31 = 15;
      }
      goto LABEL_43;
    }
  }
  else if (v20 != 0) {
    goto LABEL_38;
  }
  v31 = 15;
LABEL_43:
  if ((v29[30] | v31) != 0) {
    return v31;
  }
  else {
    return 15;
  }
}

__int64 nvidia_631ec0(__int64* a1, unsigned __int64 a2)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  int* v10;
  int v11;

  if (a1[2] >= a2) {
    return 0;
  }
  if (a2 > 0x2AAAAAAAAAAAAAAALL) {
    return 6;
  }
  v5 = NvOsAlloc_plt(6 * a2);
  if (v5 == 0) {
    return 6;
  }
  v6 = v5;
  if (a1[1] != 0) {
    v7 = 0;
    v8 = 0;
    do {
      v9 = v5 + v7;
      ++v8;
      v10 = (int*)(*a1 + v7);
      v7 += 6;
      v11 = *v10;
      *(_WORD*)(v9 + 4) = *((_WORD*)v10 + 2);
      *(_DWORD*)v9 = v11;
    } while (v8 < a1[1]);
  }
  NvOsFree_plt(*a1);
  *a1 = v6;
  a1[2] = a2;
  return 0;
}

__int64 nvidia_632040(_QWORD* a1, unsigned __int64 a2)
{
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;

  if (a1[2] >= a2) {
    return 0;
  }
  if ((a2 & 0x8000000000000000LL) != 0) {
    return 6;
  }
  v4 = NvOsAlloc_plt(2 * a2);
  if (v4 == 0) {
    return 6;
  }
  v5 = v4;
  if (a1[1] != 0) {
    v6 = 0;
    do {
      v7 = 2 * v6++;
      *(_WORD*)(v4 + v7) = *(_WORD*)(*a1 + v7);
    } while (v6 < a1[1]);
  }
  NvOsFree_plt(*a1);
  *a1 = v5;
  a1[2] = a2;
  return 0;
}

__int64 nvidia_632100(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 result;
  __int64 v9;
  _QWORD v10[2];
  int v11;
  int v12;

  if (*(_DWORD*)(*(_QWORD*)(a1 + 8) + 320LL) < 0xCu) {
    return 2;
  }
  result = NvOsEventPoolCreate_plt(1, a1 + 136);
  if ((_DWORD)result == 0) {
    result = NvOsSystemEventCreate_plt(*(unsigned int*)(a1 + 48), 7, a1 + 144);
    if ((_DWORD)result == 0) {
      result =
          NvOsEventPoolLink_plt(*(_QWORD*)(a1 + 136), *(_QWORD*)(a1 + 144));
      if ((_DWORD)result == 0) {
        v9 = *(_QWORD*)(a1 + 56);
        v10[1] = a4;
        v12 = 0;
        v11 = a2;
        LODWORD(v9) = *(_DWORD*)(v9 + 40);
        v10[0] = a3;
        if ((unsigned int)v9 >= 0xC) {
          return nvidia_644da0_alt1(*(unsigned int*)(a1 + 48), 3222816780LL,
                                    v10, 24);
        }
        return 2;
      }
    }
  }
  return result;
}

__int64 nvidia_632420(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  unsigned int v4;
  unsigned int v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  _QWORD v11[3];

  v2 = *(unsigned int*)(a1 + 48);
  if ((_DWORD)v2 == -1) {
    return 0;
  }
  if (*(_QWORD*)(a1 + 136) == 0) {
    v5 = 0;
    goto LABEL_13;
  }
  v3 = *(_QWORD*)(a1 + 56);
  memset(v11, 0, sizeof(v11));
  if (*(_DWORD*)(v3 + 40) < 0xCu) {
    v5 = 2;
    if (*(_QWORD*)(a1 + 136) == 0) {
      goto LABEL_13;
    }
    goto LABEL_12;
  }
  v4 = nvidia_644da0_alt1(v2, 3222816780LL, v11, 24);
  if (v4 != 0) {
    v5 = v4;
  }
  else {
    v5 = 0;
  }
  if (*(_QWORD*)(a1 + 136) != 0) {
  LABEL_12:
    NvOsEventPoolDestroy_plt();
  }
LABEL_13:
  if (*(_QWORD*)(a1 + 144) != 0) {
    NvOsEventDestroy_plt();
  }
  v6 = *(_QWORD*)(a1 + 176);
  if (v6 == 0) {
    goto LABEL_19;
  }
  v7 = (**(__int64 (***)(_QWORD))v6)(*(_QWORD*)(a1 + 176));
  v8 = *(_QWORD*)(a1 + 176);
  *(_BYTE*)(v6 + 17) = 1;
  if (v8 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 8LL))(v8);
    NvOsFree_plt(*(_QWORD*)(a1 + 176));
    *(_QWORD*)(a1 + 176) = 0;
  }
  if (v7 != 0) {
    if (v5 == 0) {
      v5 = v7;
    }
    v9 = *(unsigned int*)(a1 + 48);
    if ((_DWORD)v9 != -1) {
      goto LABEL_20;
    }
  }
  else {
  LABEL_19:
    v9 = *(unsigned int*)(a1 + 48);
    if ((_DWORD)v9 != -1) {
    LABEL_20:
      NvOsDrvClose_plt(v9);
      *(_DWORD*)(a1 + 48) = -1;
    }
  }
  return v5;
}

__int64 nvidia_632550(__int64 a1)
{
  __int64 v2;

  v2 = *(_QWORD*)(a1 + 72);
  if (v2 == 0 || *(_QWORD*)(a1 + 24) == 0) {
    return 0;
  }
  else {
    return (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 120LL))(v2);
  }
}

_QWORD* nvidia_632590(_QWORD* result, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  int* v8;
  int v9;
  __int64 v10;
  __int64 v11;
  int v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  __int64 v18;
  _QWORD* v19;
  _QWORD v20[5];

  if (*(_DWORD*)a2 != 0) {
    return result;
  }
  v20[3] = v3;
  v20[4] = v4;
  v5 = *(_QWORD*)(a3 + 40);
  if (v5 != 0) {
  LABEL_3:
    v6 = 0;
  LABEL_4:
    result[9] = v5;
    result[10] = v6;
    return result;
  }
  v6 = *(_QWORD*)(a3 + 48);
  if (v6 != 0) {
    v7 = result;
    v8 = (int*)a2;
    v5 = SdkRoutine_62d0e0(*(_QWORD*)(a3 + 48));
    result = v7;
    v9 = *v8;
    goto LABEL_8;
  }
  v10 = result[1];
  if ((*(_BYTE*)(v10 + 361) & 1) == 0) {
    v5 = 0;
    goto LABEL_3;
  }
  v11 = result[8];
  memset(v20, 0, 24);
  if (v11 != 0) {
    v9 = 8;
    v12 = *(_DWORD*)a2;
    *(_BYTE*)(a2 + 4) = 1;
    if (v12 != 0) {
    LABEL_14:
      v5 = 0;
      v9 = v12;
      goto LABEL_8;
    }
    goto LABEL_26;
  }
  v13 = result;
  v14 = a2;
  v15 = NvOsAlloc_plt(168);
  if (v15 == 0) {
    v9 = 6;
    v18 = v13[8];
    if (v18 == 0) {
      goto LABEL_24;
    }
    goto LABEL_21;
  }
  v16 = v15;
  nvstl_mutex_impl_nvos_63ce10(v15, v10);
  v13[8] = v16;
  v17 = nvidia_63d350(v16, v20);
  if (v17 != 0) {
    v9 = v17;
    v18 = v13[8];
    if (v18 == 0) {
      goto LABEL_24;
    }
  LABEL_21:
    (**(void (***)(__int64))v18)(v18);
    *(_BYTE*)(v18 + 17) = 1;
    v19 = (_QWORD*)v13[8];
    if (v19 != nullptr) {
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD))(*v19 + 8LL))(
          (void*)v19, v13[8]);
      NvOsFree_plt(v13[8]);
      result = v13;
      v13[8] = 0;
      goto LABEL_25;
    }
  LABEL_24:
    result = v13;
  LABEL_25:
    a2 = v14;
    v12 = *(_DWORD*)v14;
    *(_BYTE*)(v14 + 4) = 1;
    if (v12 != 0) {
      goto LABEL_14;
    }
  LABEL_26:
    v5 = 0;
    *(_DWORD*)a2 = v9;
    goto LABEL_8;
  }
  v9 = *(_DWORD*)v14;
  result = v13;
  *(_BYTE*)(v14 + 4) = 1;
  v5 = v13[8];
  if (v9 != 0) {
    v5 = 0;
  }
LABEL_8:
  if (v9 == 0) {
    goto LABEL_4;
  }
  return result;
}

#pragma GCC visibility pop
