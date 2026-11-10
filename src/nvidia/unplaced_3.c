#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void nvidia_617260(PSEUDO_X8, __int64*, int);
__attribute__((swiftcall)) void nvidia_617310(PSEUDO_X8, __int64 result);
__attribute__((swiftcall)) void nvidia_619950(PSEUDO_X8, __int64, _DWORD*,
                                              __int64);
__int64 NvOsAlloc_plt(_QWORD);
__int64 NvOsFree_plt(_QWORD);
__int64 NvSha1Digest(_QWORD, _QWORD, _QWORD);
__int64 NvSpookyHashShort(unsigned __int8*, unsigned __int64, __int64,
                          unsigned __int64);
__int64 NvTegraSysDeInit_plt(void);
__int64 SdkRoutine_602440(_QWORD);
__int64 SdkRoutine_6165a0(_QWORD, _QWORD);
__int64 SdkRoutine_619420(__int64, unsigned int, unsigned __int64,
                          unsigned int);
__int64 SdkRoutine_61a3c0(_QWORD);
__int64 SdkRoutine_61cd70(__int64, unsigned __int16, double, double);
__int64 SdkRoutine_61dc00(__int64);
__int64 SdkRoutine_620ae0(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_85e050(unsigned __int64);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 memmove_plt(_QWORD, _QWORD, _QWORD);
__int64 nvidia_617380(__int64, int, int);
__int64 nvidia_6173d0(__int64, int, int);
__int64 nvidia_617420(__int64, int, int, __int64, __int64);
__int64 nvidia_617480(__int64, int, int, unsigned int, __int64);
__int64 nvidia_617a60(_QWORD);
__int64 nvidia_617a70(_QWORD);
__int64 nvidia_617a70_alt1(_QWORD*) __asm__("nvidia_617a70");
__int64 nvidia_617a80(_QWORD);
__int64 nvidia_617a90(_QWORD*);
__int64 nvidia_617ab0(_QWORD);
__int64 nvidia_617ad0(_QWORD);
__int64 nvidia_618a60(__int64, __int64);
__int64 nvidia_6195f0(__int64);
__int64 nvidia_61b5f0_alt1(_QWORD) __asm__("nvidia_61b5f0");
__int64 nvidia_61b720_alt1(_QWORD) __asm__("nvidia_61b720");
__int64 nvidia_61b880_alt1(_QWORD, _QWORD, _QWORD) __asm__("nvidia_61b880");
__int64 nvidia_61b8f0_alt1(_QWORD) __asm__("nvidia_61b8f0");
__int64 nvidia_61d060_alt1(_QWORD, _QWORD) __asm__("nvidia_61d060");
__int64 nvidia_61d240_alt1(_QWORD, _QWORD) __asm__("nvidia_61d240");
__int64 nvidia_6207a0_alt1(_QWORD, _QWORD) __asm__("nvidia_6207a0");
__int64 nvidia_620cc0_alt1(_QWORD) __asm__("nvidia_620cc0");
__int64 nvidia_623fe0_alt1(_QWORD, _QWORD) __asm__("nvidia_623fe0");
__int64 nvidia_624080(_QWORD, _QWORD);
__int64 nvidia_6260f0_alt1(_QWORD, _QWORD) __asm__("nvidia_6260f0");
__int64 nvidia_6264c0_alt1(_QWORD, _QWORD) __asm__("nvidia_6264c0");
__int64 nvidia_626590_alt1(_QWORD, _QWORD) __asm__("nvidia_626590");
__int64 nvidia_626630_alt1(_QWORD, _QWORD) __asm__("nvidia_626630");
__int64 nvidia_627be0(void);
__int64 nvidia_628d40(_QWORD, _QWORD);
__int64 nvstl_mutex_impl_nvos_624170(_QWORD, _QWORD, _QWORD);
__int64 nvstl_mutex_impl_nvos_6241e0(_QWORD);
__int64 pow_plt(void* this_, double, double);
__int64 powf_plt_alt2(float, float) __asm__("powf_plt");
__int64 snprintf_plt(_QWORD, _QWORD, const char*, ...);
__int64 strcmp_plt(void* this_, const char*, const char*);
bool nvidia_619320(__int64, int);
extern _DWORD SdkData_bb2c90[4];
extern _DWORD SdkData_bb35e0[4];
extern _DWORD SdkData_c75018_alt1[] __asm__("SdkData_c75018");
extern _DWORD SdkData_c75084[];
extern _DWORD SdkData_c750b4[];
extern _DWORD SdkData_c76a38[22];
extern _QWORD SdkData_c72f18[8];
extern _QWORD SdkData_c72f58[8];
extern _UNKNOWN* SdkData_e72360;
extern _UNKNOWN* SdkData_e72368;
extern _UNKNOWN* SdkData_e72370;
extern _UNKNOWN* SdkData_e72718;
extern _UNKNOWN* SdkData_e727a0;
extern _UNKNOWN* SdkData_e72b80;
extern _UNKNOWN* SdkData_e72be0;
extern _UNKNOWN** SdkData_e89928;
extern _UNKNOWN SdkData_c75018;
extern _UNKNOWN SdkData_c75048;
extern _UNKNOWN SdkData_c75068;
extern _UNKNOWN SdkData_c750e4;
extern _UNKNOWN SdkData_c75504;
extern _UNKNOWN SdkData_c75524;
extern _UNKNOWN SdkData_c75544;
extern _UNKNOWN SdkData_c75564;
extern _UNKNOWN SdkData_c75584;
extern _UNKNOWN SdkData_c755a4;
extern _UNKNOWN SdkData_c755c4;
extern _UNKNOWN SdkData_c75634;
extern _UNKNOWN SdkData_c75650;
extern _UNKNOWN SdkData_c7566c;
extern _UNKNOWN SdkData_c75aa8;
extern _UNKNOWN SdkData_c75ad8;
extern _UNKNOWN SdkData_c75b08;
extern _UNKNOWN SdkData_e72378;
extern _UNKNOWN SdkData_e72438;
extern _UNKNOWN SdkData_e72478;
extern _UNKNOWN SdkData_e724b8;
extern _UNKNOWN SdkData_e724f8;
extern _UNKNOWN SdkData_e72538;
extern _UNKNOWN SdkData_e72578;
extern _UNKNOWN SdkData_e72588;
extern _UNKNOWN SdkData_e725a8;
extern _UNKNOWN SdkData_e725e8;
extern _UNKNOWN SdkData_e72628;
extern _UNKNOWN SdkData_e72668;
extern _UNKNOWN SdkData_e726a8;
extern _UNKNOWN SdkData_e726d8;
extern _UNKNOWN SdkData_e726e8;
extern _UNKNOWN SdkData_e726f8;
extern _UNKNOWN SdkData_e72708;
extern __int64 (*nn_os_detail_RemoveNativeWaitHolder_ptr[])();
extern __int64 SdkData_e72358;
extern __int64* SdkData_e898e8[2];
extern __int64* SdkData_e898f0;
extern char* SdkData_e72b70;
extern char* SdkData_e72b90;
extern char* SdkData_e72ba0;
extern char* SdkData_e72bb0;
extern char* SdkData_e72bc0;
extern char* SdkData_e72bd0;
extern char* SdkData_e72bf0;
extern char* SdkData_e72c00;
extern int SdkData_c75b38[];
float exp2f_plt(float);
float log10f_plt(long double);
float nvidia_621720_alt1(float) __asm__("nvidia_621720");
float powf_plt_alt1(float, float) __asm__("powf_plt");
long double powf_plt(float, float);
void SdkRoutine_6225f0(__int64, float, float, float);
bool nvidia_619fb0(__int64 a1, __int64 a2);
__int64 nvidia_61a070(__int64 a1);
__int64 nvidia_61b5f0(_QWORD* a1);
__int64 nvidia_61b720(__int64 a1);
__int64 nvidia_61b880(_DWORD* a1, __int64 a2, __int64 a3);
__int64 nvidia_61b8f0(__int64 a1);
__int64 nvidia_61b940(__int64 a1);
__int64 nvidia_61ba00(_QWORD* a1, __int64 a2);
__int64 nvidia_61bb60(__int64 a1, __int64 a2, int a3, __int64 a4);
__attribute__((swiftcall)) void nvidia_61cee0(PSEUDO_X8 x8_, _DWORD* result);
__int64 nvidia_61d060(__int64 a1);
__int64 nvidia_61d240(__int64 a1, __int64* a2);
__int64 nvidia_61d630(__int64* a1);
__int64 nvidia_61d6e0(__int64 a1);
__int64 nvidia_61d8a0(__int64 a1);
__int64 nvidia_61d910(__int64 a1);
__attribute__((swiftcall)) void nvidia_61db80(PSEUDO_X8 x8_, __int64* result,
                                              unsigned int a2);
__int64 nvidia_61de50(__int64 a1);
double nvidia_61e450(float* a1, int* a2, unsigned int a3);
unsigned __int64 nvidia_61e4c0(__int64 a1, double a2, double a3);
__int64 nvidia_61e570(char a1, __int64 a2);
__int64 nvidia_61e690(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                      __int64 a9, __int64 a10);
__int64 nvidia_61e910(__int64 a1);
__int64 nvidia_61ea60(_QWORD* a1, char a2);
__int64 nvidia_61eb20(__int64 a1, char a2);
__int64 nvidia_61ec10(char a1);
__int64 nvidia_61ec20(__int64 a1, unsigned __int8 a2);
__attribute__((swiftcall)) void nvidia_61ec40(PSEUDO_X8 x8_, __int64 a1,
                                              double a3);
__attribute__((swiftcall)) void nvidia_61ee80(PSEUDO_X8 x8_, _QWORD* result,
                                              int a2, char a3);
__int64 nvidia_61f2b0(__int64 result, _DWORD* a2, _DWORD* a3, __int64 a4);
__attribute__((swiftcall)) void nvidia_61f3b0(PSEUDO_X8 x8_, _QWORD* result,
                                              _QWORD* a2, int a3, int a4,
                                              char a5, char a6, char a7);
__int64 nvidia_620430(__int64 result, __int64 a2, _DWORD* a3, _DWORD* a4,
                      unsigned int a5, _DWORD* a6, _DWORD* a7, unsigned int a8,
                      _DWORD* a9, int a10);
bool nvidia_6207a0(unsigned __int16* a1, unsigned __int16* a2);
_DWORD* nvidia_620870(_DWORD* result, double* a2);
__int64 nvidia_620cc0(__int64 result);
_QWORD* nvidia_620d60(__int64 a1, __int64 a2);
__int64 nvidia_620e80(__int64 result, __int64 a2, __int64 a3, __int64 a4);
long double nvidia_621720(float a1);
float nvidia_621a20(__int64 a1, __int64 a2, float a3, float a4, float a5,
                    float a6);
float nvidia_622350(__int64 a1, long double a2);
float nvidia_623710(__int64 a1, float a2);
_QWORD* nvidia_623a50(__int64 a1);
__int64 nvidia_623a90(__int64 result, _QWORD* a2);
__int64 nvidia_623ab0(__int64 a1, float* a2);
_QWORD* nvidia_623b00(_QWORD* result, _QWORD* a2);
_QWORD* nvidia_623c40(__int64 a1);
__int64 nvidia_623c80(__int64 result, _QWORD* a2);
float nvidia_623ca0(__int64 a1, float* a2);
_QWORD* nvidia_623d70();
void nvidia_623da0(__int64 a1, _QWORD* a2);
float nvidia_623db0(__int64 a1, __int64 a2);
__int64 nvidia_623e00(__int64 a1, __int64 a2, __int64 a3, _QWORD* a4);
__int64 nvidia_623e90(__int64 a1, __int64 a2, __int64 a3, _QWORD* a4);
__int64 nvidia_623f20(unsigned int a1, unsigned int a2, __int64* a3);
__int64 nvidia_623fe0(__int64* a1, unsigned __int64 a2);
atomic_ullong* nvidia_6240f0(atomic_ullong* result, atomic_ullong** a2);
__int64 nvidia_624100(atomic_ullong* volatile* a1);
bool nvidia_624420(unsigned __int8* a1, unsigned __int8* a2);
__int64 nvidia_624770(__int64 a1, _QWORD* a2, _QWORD* a3);
__int64 nvidia_624a40(__int64* a1, unsigned __int64 a2);
__int64 nvidia_624b80(__int64* a1, unsigned __int64 a2);
__int64 nvidia_625d50(char* a1, _DWORD* a2, const char* a3);
__int64 nvidia_625ed0();
__int64 nvidia_625f00(_DWORD* a1, _DWORD* a2);
__int64 nvidia_625f80(__int64 a1, _BYTE* a2, __int64 a3);
__int64 nvidia_6260f0(_QWORD* a1, __int64* a2);
__int64 nvidia_6261a0(__int64 a1, _QWORD* a2, unsigned __int64* a3);
__int64 nvidia_6264c0(__int64* a1, unsigned __int64 a2);
__int64 nvidia_626590(__int64* a1, _QWORD* a2);
__int64 nvidia_626630(__int64* a1, _DWORD* a2);
__int64 nvidia_6266c0(unsigned __int16* a1, unsigned __int16* a2);
__int64 nvidia_6266e0(__int64 a1, unsigned int a2, unsigned __int16* a3,
                      unsigned int* a4, __int64 a5);
__int64 nvidia_626810(__int16 a1, __int64 a2, int a3, __int64 a4, __int64 a5);
__int64 nvidia_626a60(__int64 a1, unsigned int a2, unsigned __int16* a3,
                      __int64 a4, int a5, __int64 a6, _QWORD* a7, _QWORD* a8);
__int64 nvidia_626be0(int a1);
__int64 nvidia_626c20(__int64 result, unsigned __int8 a2, __int64 a3);
__int64 nvidia_626ca0(__int64 a1, _BYTE* a2, __int64* a3);

bool nvidia_619fb0(__int64 a1, __int64 a2)
{
  unsigned int v2;
  int v5;
  int v6;
  int v7;
  _BOOL8 result;

  v2 = *(_DWORD*)(*(_QWORD*)a1 + 264LL);
  result = true;
  if (v2 <= 2) {
    v5 = *(_DWORD*)(*(_QWORD*)a1 + 24LL);
    if (v5 != 0 && !nvidia_619320(a2 + 1256, v5)) {
      return false;
    }
    if (v2 != 0) {
      v6 = *(_DWORD*)(*(_QWORD*)a1 + 112LL);
      if (v6 != 0 && !nvidia_619320(a2 + 1256, v6)) {
        return false;
      }
      if (v2 != 1) {
        v7 = *(_DWORD*)(*(_QWORD*)a1 + 200LL);
        if (v7 != 0 && !nvidia_619320(a2 + 1256, v7)) {
          return false;
        }
      }
    }
  }
  return result;
}

__int64 nvidia_61a070(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 result;
  unsigned int v9;
  _DWORD* v10;
  int* v11;
  __int64 v12;
  int v13;
  unsigned __int64 v14;
  int v15;
  int v16;
  __int64 v17;
  __int64 v18;

  v17 = v1;
  v18 = v2;
  v4 = nvidia_617a70(a1);
  v5 = nvidia_617ad0(a1);
  v6 = *(_QWORD*)(a1 + 8);
  v7 = v5;
  result = SdkRoutine_61a3c0(a1);
  if ((_DWORD)result == 0) {
    v9 = *(_DWORD*)(v6 + 3632);
    if (v9 <= 0x20) {
      *(_QWORD*)(v7 + 8) = 0;
      *(_QWORD*)(v7 + 16) = 0;
      *(_DWORD*)(v7 + 24) = v9;
      if (v9 != 0) {
        v10 = (_DWORD*)(v7 + 3264);
        v11 = (int*)(v6 + 3380);
        v12 = 784;
        do {
          *(v10 - 32) = *(v11 - 1);
          v13 = *v11;
          v11 += 2;
          *v10++ = v13;
          v14 = v12 - 783;
          ++v12;
        } while (v14 < *(unsigned int*)(v6 + 3632));
      }
      v16 = 0;
      memcpy_plt(&v15, &v16, 4);
      result = nvidia_6173d0(v7, 512, v15);
      if ((_DWORD)result == 0) {
        result = nvidia_617380(v7, *(_DWORD*)(v4 + 136), *(_DWORD*)(v4 + 140));
        if ((_DWORD)result == 0) {
          result = nvidia_61b5f0_alt1(a1);
          if ((_DWORD)result == 0) {
            result = nvidia_61b720_alt1(a1);
            if ((_DWORD)result == 0) {
              result = nvidia_61b880_alt1(v6 + 3640, *(_QWORD*)(a1 + 24), v7);
              if ((_DWORD)result == 0) {
                return nvidia_61b8f0_alt1(v7);
              }
            }
          }
        }
      }
    }
    else {
      return 11;
    }
  }
  return result;
}

__int64 nvidia_61b5f0(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 result;
  _QWORD* v5;
  int v6;
  int v7;

  v1 = a1[1];
  v3 = nvidia_617ad0(a1);
  v7 = 0;
  memcpy_plt(&v6, &v7, 4);
  result = nvidia_6173d0(v3, 1796, v6);
  if ((_DWORD)result == 0) {
    result = nvidia_617420(v3, 1800, 0, *(_QWORD*)(a1[2] + 32LL),
                           *(_QWORD*)(a1[2] + 16LL));
    if ((_DWORD)result == 0) {
      result =
          nvidia_617480(v3, 1804, 0, *(_DWORD*)(v1 + 16), *(_QWORD*)(v1 + 24));
      if ((_DWORD)result == 0) {
        result = nvidia_617480(v3, 1856, 0, *(_DWORD*)(a1[5] + 28LL), 0);
        if ((_DWORD)result == 0) {
          result = nvidia_617480(v3, 1860, 0, *(_DWORD*)(a1[6] + 28LL), 0);
          if ((_DWORD)result == 0) {
            result = nvidia_617420(v3, 1864, 0, *(_QWORD*)(a1[4] + 32LL),
                                   *(_QWORD*)(a1[4] + 16LL));
            if ((_DWORD)result == 0) {
              v5 = a1 + 9;
              if (a1[9] == 0) {
                return nvidia_61d060_alt1(a1, v5);
              }
              result = nvidia_61d240_alt1(a1, v5);
              if ((_DWORD)result == 0) {
                return nvidia_61d060_alt1(a1, v5);
              }
            }
          }
        }
      }
    }
  }
  return result;
}

__int64 nvidia_61b720(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  unsigned int v4;
  unsigned int v5;
  __int64 result;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  int v16;

  v2 = nvidia_617ad0(a1);
  v3 = *(_QWORD*)(a1 + 8);
  v4 = *(_DWORD*)(v3 + 3864);
  v5 = *(_DWORD*)(v3 + 3904);
  if (v4 > 0x10 || v5 > 3) {
    return 11;
  }
  v8 = v2;
  if (v4 != 0) {
    v9 = v3 + 3672;
    v10 = 0;
    while (1) {
      v11 = *(_QWORD*)(v9 + 8 * v10 + 64);
      result = nvidia_617480(v8, 788, 0, *(_DWORD*)(v9 + 4 * v10),
                             v11 & 0xFFFFFFFFFFFFFF00LL);
      if ((_DWORD)result != 0) {
        break;
      }
      v16 = (unsigned __int8)v11;
      memcpy_plt(&v15, &v16, 4);
      result = nvidia_6173d0(v8, 896, v15);
      if ((_DWORD)result != 0) {
        break;
      }
      if (++v10 >= (unsigned __int64)*(unsigned int*)(v3 + 3864)) {
        v5 = *(_DWORD*)(v3 + 3904);
        goto LABEL_14;
      }
    }
  }
  else {
  LABEL_14:
    if (v5 != 0) {
      v12 = v3 + 3868;
      v13 = 0;
      while (1) {
        v14 = *(_QWORD*)(v12 + 8 * v13 + 12);
        result = nvidia_617480(v8, 792, 0, *(_DWORD*)(v12 + 4 * v13),
                               v14 & 0xFFFFFFFFFFFFFF00LL);
        if ((_DWORD)result != 0) {
          break;
        }
        v16 = (unsigned __int8)v14;
        memcpy_plt(&v15, &v16, 4);
        result = nvidia_6173d0(v8, 900, v15);
        if ((_DWORD)result != 0) {
          break;
        }
        if (++v13 >= (unsigned __int64)*(unsigned int*)(v3 + 3904)) {
          return 0;
        }
      }
    }
    else {
      return 0;
    }
  }
  return result;
}

__int64 nvidia_61b880(_DWORD* a1, __int64 a2, __int64 a3)
{
  __int64 result;
  int v5;

  result = 0;
  if (a2 != 0 && *a1 != 0) {
    v5 = a1[1];
    if (v5 == 1) {
      return nvidia_617420(a3, 1840, 0, *(_QWORD*)(a2 + 32),
                           *(_QWORD*)(a2 + 16));
    }
    else if (v5 != 0) {
      return 2;
    }
    else {
      return nvidia_617420(a3, 1844, 0, *(_QWORD*)(a2 + 32),
                           *(_QWORD*)(a2 + 16));
    }
  }
  return result;
}

__int64 nvidia_61b8f0(__int64 a1)
{
  int v3;
  int v4;

  v4 = 256;
  memcpy_plt(&v3, &v4, 4);
  return nvidia_6173d0(a1, 768, v3);
}

__int64 nvidia_61b940(__int64 a1)
{
  __int64 v1;

  v1 = *(unsigned int*)(a1 + 12);
  if ((unsigned int)v1 > 7) {
    return 0x200000000LL;
  }
  else {
    return SdkData_c72f58[v1] | SdkData_c72f18[v1];
  }
}

__int64 nvidia_61ba00(_QWORD* a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  int v4;
  unsigned int v5;
  bool v6;
  __int64 v7;
  __int64 v8;
  int v9;
  bool v10;
  bool v11;
  __int64 v12;
  __int64 v13;

  v2 = *(_QWORD*)(a2 + 8);
  v3 = a1[1];
  v4 = *(_DWORD*)(*(_QWORD*)(a2 + 16) + 12LL) & 0x3F;
  v5 = v4 - 21;
  v6 = (unsigned int)(v4 - 21) < 2 || v4 == 13;
  if (!v6 && (v4 != 7 ||
              (unsigned int)*(unsigned __int16*)(v2 + 112) - 81 > 0xFFFFFFAF)) {
  LABEL_31:
    v13 = 0;
    goto LABEL_32;
  }
  v7 = 128;
  if (a1[16] == 0) {
    v7 = 352;
  }
  v8 = 72;
  if (a1[9] == 0) {
    v8 = v7;
  }
  v9 = *(_DWORD*)(*(_QWORD*)((char*)a1 + v8) + 12LL) & 0x3F;
  v10 = (unsigned int)(v9 - 21) < 2 || v9 == 13;
  if (!v10 && (v9 != 7 ||
               (unsigned int)*(unsigned __int16*)(v3 + 84) - 81 > 0xFFFFFFAF)) {
    v13 = 0x300000000LL;
  LABEL_32:
    v12 = 1;
    return v13 | v12;
  }
  v11 = v5 < 2 || v4 == 13;
  if (!v11 && (v4 != 7 || (unsigned int)*(unsigned __int16*)(v2 + 112) - 81 >
                              0xFFFFFFAF) ||
      (nvidia_6207a0_alt1(v3 + 64, v2 + 92) & 1) != 0) {
    if ((*(_WORD*)(v3 + 3916) & 0x180) == 0) {
      if (v4 == 13 || v4 == 7) {
        if ((unsigned int)(v9 - 21) < 2) {
          v13 = 0x800000000LL;
          goto LABEL_32;
        }
      }
      else if (v5 <= 1 && (v9 == 7 || v9 == 13)) {
        v13 = 0x900000000LL;
        goto LABEL_32;
      }
    }
    goto LABEL_31;
  }
  v12 = 0;
  v13 = 0x200000000LL;
  return v13 | v12;
}

__int64 nvidia_61bb60(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v4;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  unsigned __int64 v16;
  unsigned __int64 v17;
  void* v18;
  double v19;
  double v20;
  void* v21;
  double v22;
  double v23;
  void* v24;
  double v25;
  void* v26;
  double v27;
  double v28;
  void* v29;
  double v30;
  double v31;
  void* v32;
  double v33;
  void* v34;
  double v35;
  double v36;
  double v37;
  double v38;
  void* v39;
  double v40;
  double v41;
  void* v42;
  double v43;
  _WORD* v44;
  __int64 v45;
  int v46;
  double v47;
  float v48;
  double v49;
  double v50;
  unsigned int v51;
  __int16 v52;
  double v53;
  float v54;
  void* v55;
  double v56;
  double v57;
  void* v58;
  double v59;
  void* v60;
  double v61;
  double v62;
  void* v63;
  double v64;
  double v65;
  void* v66;
  double v67;
  void* v68;
  double v69;
  double v70;
  double v71;
  double v72;
  void* v73;
  double v74;
  double v75;
  void* v76;
  double v77;
  double v78;
  _WORD* v79;
  __int64 v80;
  int v81;
  double v82;
  double v83;
  unsigned int v84;
  __int16 v85;
  double v86;
  double v87;
  void* v88;
  double v89;
  double v90;
  _WORD* v91;
  __int64 v92;
  __int64 v93;
  int v94;
  int v95;
  unsigned int v96;
  __int16 v97;
  void* v98;
  double v99;
  double v100;
  void* v101;
  double v102;
  void* v103;
  double v104;
  double v105;
  void* v106;
  double v107;
  double v108;
  void* v109;
  double v110;
  void* v111;
  double v112;
  double v113;
  double v114;
  double v115;
  void* v116;
  double v117;
  double v118;
  void* v119;
  double v120;
  double v121;
  _WORD* v122;
  __int64 v123;
  int v124;
  double v125;
  double v126;
  unsigned int v127;
  __int16 v128;
  double v129;
  double v130;
  void* v131;
  double v132;
  double v133;
  void* v134;
  double v135;
  double v136;
  void* v137;
  double v138;
  void* v139;
  double v140;
  double v141;
  void* v142;
  double v143;
  double v144;
  void* v145;
  double v146;
  void* v147;
  unsigned int v148;
  double v149;
  double v150;
  double v151;
  double v152;
  void* v153;
  double v154;
  double v155;
  void* v156;
  double v157;
  void* v158;
  double v159;
  void* v160;
  double v161;
  double v162;
  double v163;
  void* v164;
  double v165;
  double v166;
  double v167;
  _WORD* v168;
  __int64 v169;
  int v170;
  double v171;
  double v172;
  double v173;
  double v174;
  unsigned int v175;
  __int16 v176;
  double v177;
  double v178;
  double v179;
  _WORD* v180;
  __int64 v181;
  int v182;
  double v183;
  double v184;
  unsigned int v185;
  __int16 v186;
  double v187;
  double v188;
  _WORD* v189;
  __int64 v190;
  unsigned __int16 v191;
  int v192;
  unsigned int v193;
  __int16 v194;
  double v195;
  _WORD* v196;
  __int64 v197;
  int v198;
  double v199;
  double v200;
  unsigned int v201;
  __int16 v202;
  double v203;
  double v204;
  double v205;
  double v206;
  double v207;
  _WORD* v208;
  __int64 v209;
  int v210;
  double v211;
  double v212;
  unsigned int v213;
  __int16 v214;
  double v215;
  double v216;
  double v217;
  double v218;
  struct {
    double v219[11];
    __int16 v220;
  } v219_;

  v102 = COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(double, "d0", "=w")),
  v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(double, "d0", "=w")),
  v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(double, "d0", "=w")),
  v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
  v112 = COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
  v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
  v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
  v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(double, "d0", "=w")),
  v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(double, "d0", "=w")),
  v135 = COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(double, "d0", "=w")),
  v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
  v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
  v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(double, "d0", "=w")),
  v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(double, "d0", "=w")),
  v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
  v154 = COERCE_AS(__typeof__(v154), PSEUDO_REGISTER(double, "d0", "=w")),
  v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(double, "d0", "=w")),
  v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
  v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(double, "d0", "=w")),
  v162 = COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(double, "d1", "=w")),
  v163 = COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(double, "d0", "=w")),
  v165 = COERCE_AS(__typeof__(v165), PSEUDO_REGISTER(double, "d0", "=w")),
  v167 = COERCE_AS(__typeof__(v167), PSEUDO_REGISTER(double, "d0", "=w")),
  v171 = COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
  v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
  v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
  v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(double, "d0", "=w")),
  v188 = COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(double, "d0", "=w")),
  v195 = COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(double, "d0", "=w")),
  v199 = COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(double, "d0", "=w")),
  v205 = COERCE_AS(__typeof__(v205), PSEUDO_REGISTER(double, "d0", "=w")),
  v207 = COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(double, "d0", "=w")),
  v211 = COERCE_AS(__typeof__(v211), PSEUDO_REGISTER(double, "d0", "=w")),
  v218 = COERCE_AS(__typeof__(v218), PSEUDO_REGISTER(double, "d0", "=w")),
  v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(double, "d0", "=w")),
  v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(double, "d0", "=w")),
  v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(double, "d0", "=w")),
  v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(double, "d0", "=w")),
  v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(double, "d0", "=w")),
  v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(double, "d0", "=w")),
  v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(double, "d0", "=w")),
  v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(double, "d0", "=w")),
  v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(double, "d0", "=w")),
  v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(double, "d0", "=w")),
  v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(double, "d0", "=w")),
  v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(double, "d0", "=w")),
  v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(double, "d0", "=w")),
  v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(double, "d0", "=w")),
  v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(double, "d0", "=w")),
  v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(double, "d0", "=w")),
  v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(double, "d0", "=w")),
  v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(double, "d0", "=w")),
  v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(double, "d0", "=w")),
  v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(double, "d0", "=w"));
  v4 = *(_QWORD*)(a2 + 8);
  v8 = 0;
  if (a3 <= 4) {
    if (a3 > 2) {
      v11 = *(unsigned __int16*)(v4 + 112);
      if (a3 == 3) {
        v12 = 3;
      }
      else {
        v12 = 4;
      }
    }
    else {
      if (a3 == 1) {
        v8 = 1;
        goto LABEL_22;
      }
      if (a3 != 2) {
        goto LABEL_22;
      }
      v11 = *(unsigned __int16*)(v4 + 112);
      v12 = 2;
    }
    goto LABEL_21;
  }
  if (a3 <= 6) {
    if (a3 != 5) {
      v8 = 6;
      goto LABEL_22;
    }
    v11 = *(unsigned __int16*)(v4 + 112);
    v12 = 5;
  LABEL_21:
    v8 = v12 | (v11 << 8);
    goto LABEL_22;
  }
  v9 = 9;
  v10 = 8;
  if (a3 != 9) {
    v9 = 0;
  }
  if (a3 != 8) {
    v10 = v9;
  }
  if (a3 == 7) {
    v8 = 7;
  }
  else {
    v8 = v10;
  }
LABEL_22:
  v13 = SdkRoutine_602440(a1),
  v102 = COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(double, "d0", "=w")),
  v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(double, "d0", "=w")),
  v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(double, "d0", "=w")),
  v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
  v112 = COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
  v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
  v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
  v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(double, "d0", "=w")),
  v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(double, "d0", "=w")),
  v135 = COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(double, "d0", "=w")),
  v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
  v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
  v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(double, "d0", "=w")),
  v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(double, "d0", "=w")),
  v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
  v154 = COERCE_AS(__typeof__(v154), PSEUDO_REGISTER(double, "d0", "=w")),
  v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(double, "d0", "=w")),
  v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
  v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(double, "d0", "=w")),
  v162 = COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(double, "d1", "=w")),
  v163 = COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(double, "d0", "=w")),
  v165 = COERCE_AS(__typeof__(v165), PSEUDO_REGISTER(double, "d0", "=w")),
  v167 = COERCE_AS(__typeof__(v167), PSEUDO_REGISTER(double, "d0", "=w")),
  v171 = COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
  v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
  v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
  v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(double, "d0", "=w")),
  v188 = COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(double, "d0", "=w")),
  v195 = COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(double, "d0", "=w")),
  v199 = COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(double, "d0", "=w")),
  v205 = COERCE_AS(__typeof__(v205), PSEUDO_REGISTER(double, "d0", "=w")),
  v207 = COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(double, "d0", "=w")),
  v211 = COERCE_AS(__typeof__(v211), PSEUDO_REGISTER(double, "d0", "=w")),
  v218 = COERCE_AS(__typeof__(v218), PSEUDO_REGISTER(double, "d0", "=w")),
  v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(double, "d0", "=w")),
  v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(double, "d0", "=w")),
  v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(double, "d0", "=w")),
  v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(double, "d0", "=w")),
  v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(double, "d0", "=w")),
  v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(double, "d0", "=w")),
  v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(double, "d0", "=w")),
  v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(double, "d0", "=w")),
  v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(double, "d0", "=w")),
  v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(double, "d0", "=w")),
  v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(double, "d0", "=w")),
  v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(double, "d0", "=w")),
  v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(double, "d0", "=w")),
  v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(double, "d0", "=w")),
  v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(double, "d0", "=w")),
  v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(double, "d0", "=w")),
  v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(double, "d0", "=w")),
  v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(double, "d0", "=w")),
  v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(double, "d0", "=w")),
  v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(double, "d0", "=w"));
  v14 = nvidia_620d60(v13 + 9032, v8),
  v102 = COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(double, "d0", "=w")),
  v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(double, "d0", "=w")),
  v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(double, "d0", "=w")),
  v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
  v112 = COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
  v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
  v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
  v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(double, "d0", "=w")),
  v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(double, "d0", "=w")),
  v135 = COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(double, "d0", "=w")),
  v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
  v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
  v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(double, "d0", "=w")),
  v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(double, "d0", "=w")),
  v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
  v154 = COERCE_AS(__typeof__(v154), PSEUDO_REGISTER(double, "d0", "=w")),
  v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(double, "d0", "=w")),
  v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
  v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(double, "d0", "=w")),
  v162 = COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(double, "d1", "=w")),
  v163 = COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(double, "d0", "=w")),
  v165 = COERCE_AS(__typeof__(v165), PSEUDO_REGISTER(double, "d0", "=w")),
  v167 = COERCE_AS(__typeof__(v167), PSEUDO_REGISTER(double, "d0", "=w")),
  v171 = COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
  v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
  v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
  v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(double, "d0", "=w")),
  v188 = COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(double, "d0", "=w")),
  v195 = COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(double, "d0", "=w")),
  v199 = COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(double, "d0", "=w")),
  v205 = COERCE_AS(__typeof__(v205), PSEUDO_REGISTER(double, "d0", "=w")),
  v207 = COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(double, "d0", "=w")),
  v211 = COERCE_AS(__typeof__(v211), PSEUDO_REGISTER(double, "d0", "=w")),
  v218 = COERCE_AS(__typeof__(v218), PSEUDO_REGISTER(double, "d0", "=w")),
  v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(double, "d0", "=w")),
  v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(double, "d0", "=w")),
  v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(double, "d0", "=w")),
  v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(double, "d0", "=w")),
  v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(double, "d0", "=w")),
  v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(double, "d0", "=w")),
  v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(double, "d0", "=w")),
  v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(double, "d0", "=w")),
  v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(double, "d0", "=w")),
  v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(double, "d0", "=w")),
  v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(double, "d0", "=w")),
  v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(double, "d0", "=w")),
  v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(double, "d0", "=w")),
  v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(double, "d0", "=w")),
  v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(double, "d0", "=w")),
  v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(double, "d0", "=w")),
  v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(double, "d0", "=w")),
  v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(double, "d0", "=w")),
  v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(double, "d0", "=w")),
  v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(double, "d0", "=w"));
  if (v14 != nullptr) {
    return memmove_plt(a4, v14[2], 8448);
  }
  v16 = ((unsigned __int64)*(unsigned __int16*)(a4 + 14) << 48) |
        0x924924924924LL;
  *(_QWORD*)a4 =
      ((unsigned __int64)*(unsigned __int16*)(a4 + 6) << 48) | 0x924924924924LL;
  *(_QWORD*)(a4 + 8) = v16;
  v17 = ((unsigned __int64)*(unsigned __int16*)(a4 + 30) << 48) |
        0x924924924924LL;
  *(_QWORD*)(a4 + 16) =
      ((unsigned __int64)*(unsigned __int16*)(a4 + 22) << 48) |
      0x924924924924LL;
  *(_QWORD*)(a4 + 24) = v17;
  if (a3 <= 4) {
    if (a3 > 2) {
      if (a3 == 3) {
        v98 =
            (void*)pow_plt(nullptr, 0x1.0624dd2f1a9fcp-7, 0x1.4640000000000p-3),
        v102 = COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(double, "d0", "=w")),
        v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(double, "d0", "=w")),
        v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(double, "d0", "=w")),
        v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
        v112 = COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
        v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
        v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(double, "d0", "=w")),
        v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(double, "d0", "=w")),
        v135 = COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(double, "d0", "=w")),
        v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
        v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
        v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(double, "d0", "=w")),
        v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(double, "d0", "=w")),
        v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
        v154 = COERCE_AS(__typeof__(v154), PSEUDO_REGISTER(double, "d0", "=w")),
        v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(double, "d0", "=w")),
        v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
        v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(double, "d0", "=w")),
        v162 = COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(double, "d1", "=w")),
        v163 = COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(double, "d0", "=w")),
        v165 = COERCE_AS(__typeof__(v165), PSEUDO_REGISTER(double, "d0", "=w")),
        v167 = COERCE_AS(__typeof__(v167), PSEUDO_REGISTER(double, "d0", "=w")),
        v171 = COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
        v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
        v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
        v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(double, "d0", "=w")),
        v188 = COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(double, "d0", "=w")),
        v195 = COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(double, "d0", "=w")),
        v199 = COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(double, "d0", "=w")),
        v205 = COERCE_AS(__typeof__(v205), PSEUDO_REGISTER(double, "d0", "=w")),
        v207 = COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(double, "d0", "=w")),
        v211 = COERCE_AS(__typeof__(v211), PSEUDO_REGISTER(double, "d0", "=w")),
        v218 = COERCE_AS(__typeof__(v218), PSEUDO_REGISTER(double, "d0", "=w")),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(double, "d0", "=w")),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(double, "d0", "=w")),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(double, "d0", "=w")),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(double, "d0", "=w")),
        v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(double, "d0", "=w")),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(double, "d0", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(double, "d0", "=w")),
        v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(double, "d0", "=w")),
        v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(double, "d0", "=w")),
        v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(double, "d0", "=w")),
        v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(double, "d0", "=w")),
        v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(double, "d0", "=w")),
        v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(double, "d0", "=w")),
        v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(double, "d0", "=w")),
        v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(double, "d0", "=w")),
        v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(double, "d0", "=w")),
        v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(double, "d0", "=w")),
        v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(double, "d0", "=w")),
        v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(double, "d0", "=w")),
        v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(double, "d0", "=w"));
        v100 = v99 * 0x1.2da0000000000p+4 + 0x1.ac00000000000p-1;
        v101 = (void*)pow_plt(v98, 0x1.0624dd2f1a9fcp-7, 0x1.4640000000000p-3),
        v102 = COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(double, "d0", "=w")),
        v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(double, "d0", "=w")),
        v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(double, "d0", "=w")),
        v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
        v112 = COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
        v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
        v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(double, "d0", "=w")),
        v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(double, "d0", "=w")),
        v135 = COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(double, "d0", "=w")),
        v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
        v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
        v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(double, "d0", "=w")),
        v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(double, "d0", "=w")),
        v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
        v154 = COERCE_AS(__typeof__(v154), PSEUDO_REGISTER(double, "d0", "=w")),
        v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(double, "d0", "=w")),
        v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
        v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(double, "d0", "=w")),
        v162 = COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(double, "d1", "=w")),
        v163 = COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(double, "d0", "=w")),
        v165 = COERCE_AS(__typeof__(v165), PSEUDO_REGISTER(double, "d0", "=w")),
        v167 = COERCE_AS(__typeof__(v167), PSEUDO_REGISTER(double, "d0", "=w")),
        v171 = COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
        v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
        v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
        v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(double, "d0", "=w")),
        v188 = COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(double, "d0", "=w")),
        v195 = COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(double, "d0", "=w")),
        v199 = COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(double, "d0", "=w")),
        v205 = COERCE_AS(__typeof__(v205), PSEUDO_REGISTER(double, "d0", "=w")),
        v207 = COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(double, "d0", "=w")),
        v211 = COERCE_AS(__typeof__(v211), PSEUDO_REGISTER(double, "d0", "=w")),
        v218 = COERCE_AS(__typeof__(v218), PSEUDO_REGISTER(double, "d0", "=w")),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(double, "d0", "=w")),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(double, "d0", "=w")),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(double, "d0", "=w")),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(double, "d0", "=w")),
        v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(double, "d0", "=w")),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(double, "d0", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(double, "d0", "=w")),
        v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(double, "d0", "=w")),
        v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(double, "d0", "=w")),
        v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(double, "d0", "=w")),
        v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(double, "d0", "=w")),
        v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(double, "d0", "=w")),
        v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(double, "d0", "=w")),
        v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(double, "d0", "=w")),
        v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(double, "d0", "=w")),
        v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(double, "d0", "=w")),
        v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(double, "d0", "=w")),
        v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(double, "d0", "=w")),
        v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(double, "d0", "=w")),
        v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(double, "d0", "=w"));
        v103 = (void*)pow_plt(
            v101, v100 / (v102 * 0x1.2b00000000000p+4 + 0x1.0000000000000p+0),
            0x1.3b60000000000p+6),
        v102 = COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(double, "d0", "=w")),
        v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(double, "d0", "=w")),
        v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(double, "d0", "=w")),
        v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
        v112 = COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
        v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
        v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(double, "d0", "=w")),
        v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(double, "d0", "=w")),
        v135 = COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(double, "d0", "=w")),
        v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
        v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
        v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(double, "d0", "=w")),
        v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(double, "d0", "=w")),
        v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
        v154 = COERCE_AS(__typeof__(v154), PSEUDO_REGISTER(double, "d0", "=w")),
        v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(double, "d0", "=w")),
        v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
        v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(double, "d0", "=w")),
        v162 = COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(double, "d1", "=w")),
        v163 = COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(double, "d0", "=w")),
        v165 = COERCE_AS(__typeof__(v165), PSEUDO_REGISTER(double, "d0", "=w")),
        v167 = COERCE_AS(__typeof__(v167), PSEUDO_REGISTER(double, "d0", "=w")),
        v171 = COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
        v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
        v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
        v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(double, "d0", "=w")),
        v188 = COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(double, "d0", "=w")),
        v195 = COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(double, "d0", "=w")),
        v199 = COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(double, "d0", "=w")),
        v205 = COERCE_AS(__typeof__(v205), PSEUDO_REGISTER(double, "d0", "=w")),
        v207 = COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(double, "d0", "=w")),
        v211 = COERCE_AS(__typeof__(v211), PSEUDO_REGISTER(double, "d0", "=w")),
        v218 = COERCE_AS(__typeof__(v218), PSEUDO_REGISTER(double, "d0", "=w")),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(double, "d0", "=w")),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(double, "d0", "=w")),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(double, "d0", "=w")),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(double, "d0", "=w")),
        v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(double, "d0", "=w")),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(double, "d0", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(double, "d0", "=w")),
        v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(double, "d0", "=w")),
        v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(double, "d0", "=w")),
        v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(double, "d0", "=w")),
        v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(double, "d0", "=w")),
        v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(double, "d0", "=w")),
        v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(double, "d0", "=w")),
        v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(double, "d0", "=w")),
        v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(double, "d0", "=w")),
        v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(double, "d0", "=w")),
        v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(double, "d0", "=w")),
        v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(double, "d0", "=w")),
        v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(double, "d0", "=w")),
        v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(double, "d0", "=w"));
        v105 = v104;
        v106 = (void*)pow_plt(v103, 0x0.0p+0, 0x1.4640000000000p-3),
        v102 = COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(double, "d0", "=w")),
        v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(double, "d0", "=w")),
        v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(double, "d0", "=w")),
        v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
        v112 = COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
        v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
        v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(double, "d0", "=w")),
        v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(double, "d0", "=w")),
        v135 = COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(double, "d0", "=w")),
        v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
        v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
        v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(double, "d0", "=w")),
        v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(double, "d0", "=w")),
        v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
        v154 = COERCE_AS(__typeof__(v154), PSEUDO_REGISTER(double, "d0", "=w")),
        v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(double, "d0", "=w")),
        v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
        v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(double, "d0", "=w")),
        v162 = COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(double, "d1", "=w")),
        v163 = COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(double, "d0", "=w")),
        v165 = COERCE_AS(__typeof__(v165), PSEUDO_REGISTER(double, "d0", "=w")),
        v167 = COERCE_AS(__typeof__(v167), PSEUDO_REGISTER(double, "d0", "=w")),
        v171 = COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
        v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
        v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
        v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(double, "d0", "=w")),
        v188 = COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(double, "d0", "=w")),
        v195 = COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(double, "d0", "=w")),
        v199 = COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(double, "d0", "=w")),
        v205 = COERCE_AS(__typeof__(v205), PSEUDO_REGISTER(double, "d0", "=w")),
        v207 = COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(double, "d0", "=w")),
        v211 = COERCE_AS(__typeof__(v211), PSEUDO_REGISTER(double, "d0", "=w")),
        v218 = COERCE_AS(__typeof__(v218), PSEUDO_REGISTER(double, "d0", "=w")),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(double, "d0", "=w")),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(double, "d0", "=w")),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(double, "d0", "=w")),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(double, "d0", "=w")),
        v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(double, "d0", "=w")),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(double, "d0", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(double, "d0", "=w")),
        v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(double, "d0", "=w")),
        v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(double, "d0", "=w")),
        v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(double, "d0", "=w")),
        v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(double, "d0", "=w")),
        v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(double, "d0", "=w")),
        v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(double, "d0", "=w")),
        v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(double, "d0", "=w")),
        v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(double, "d0", "=w")),
        v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(double, "d0", "=w")),
        v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(double, "d0", "=w")),
        v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(double, "d0", "=w")),
        v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(double, "d0", "=w")),
        v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(double, "d0", "=w"));
        v108 = v107 * 0x1.2da0000000000p+4 + 0x1.ac00000000000p-1;
        v109 = (void*)pow_plt(v106, 0x0.0p+0, 0x1.4640000000000p-3),
        v102 = COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(double, "d0", "=w")),
        v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(double, "d0", "=w")),
        v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(double, "d0", "=w")),
        v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
        v112 = COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
        v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
        v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(double, "d0", "=w")),
        v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(double, "d0", "=w")),
        v135 = COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(double, "d0", "=w")),
        v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
        v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
        v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(double, "d0", "=w")),
        v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(double, "d0", "=w")),
        v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
        v154 = COERCE_AS(__typeof__(v154), PSEUDO_REGISTER(double, "d0", "=w")),
        v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(double, "d0", "=w")),
        v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
        v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(double, "d0", "=w")),
        v162 = COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(double, "d1", "=w")),
        v163 = COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(double, "d0", "=w")),
        v165 = COERCE_AS(__typeof__(v165), PSEUDO_REGISTER(double, "d0", "=w")),
        v167 = COERCE_AS(__typeof__(v167), PSEUDO_REGISTER(double, "d0", "=w")),
        v171 = COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
        v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
        v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
        v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(double, "d0", "=w")),
        v188 = COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(double, "d0", "=w")),
        v195 = COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(double, "d0", "=w")),
        v199 = COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(double, "d0", "=w")),
        v205 = COERCE_AS(__typeof__(v205), PSEUDO_REGISTER(double, "d0", "=w")),
        v207 = COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(double, "d0", "=w")),
        v211 = COERCE_AS(__typeof__(v211), PSEUDO_REGISTER(double, "d0", "=w")),
        v218 = COERCE_AS(__typeof__(v218), PSEUDO_REGISTER(double, "d0", "=w")),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(double, "d0", "=w")),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(double, "d0", "=w")),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(double, "d0", "=w")),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(double, "d0", "=w")),
        v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(double, "d0", "=w")),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(double, "d0", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(double, "d0", "=w")),
        v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(double, "d0", "=w")),
        v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(double, "d0", "=w")),
        v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(double, "d0", "=w")),
        v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(double, "d0", "=w")),
        v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(double, "d0", "=w")),
        v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(double, "d0", "=w")),
        v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(double, "d0", "=w")),
        v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(double, "d0", "=w")),
        v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(double, "d0", "=w")),
        v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(double, "d0", "=w")),
        v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(double, "d0", "=w")),
        v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(double, "d0", "=w")),
        v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(double, "d0", "=w"));
        v111 = (void*)pow_plt(
            v109, v108 / (v110 * 0x1.2b00000000000p+4 + 0x1.0000000000000p+0),
            0x1.3b60000000000p+6),
        v102 = COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(double, "d0", "=w")),
        v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(double, "d0", "=w")),
        v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(double, "d0", "=w")),
        v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
        v112 = COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
        v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
        v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(double, "d0", "=w")),
        v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(double, "d0", "=w")),
        v135 = COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(double, "d0", "=w")),
        v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
        v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
        v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(double, "d0", "=w")),
        v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(double, "d0", "=w")),
        v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
        v154 = COERCE_AS(__typeof__(v154), PSEUDO_REGISTER(double, "d0", "=w")),
        v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(double, "d0", "=w")),
        v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
        v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(double, "d0", "=w")),
        v162 = COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(double, "d1", "=w")),
        v163 = COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(double, "d0", "=w")),
        v165 = COERCE_AS(__typeof__(v165), PSEUDO_REGISTER(double, "d0", "=w")),
        v167 = COERCE_AS(__typeof__(v167), PSEUDO_REGISTER(double, "d0", "=w")),
        v171 = COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
        v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
        v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
        v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(double, "d0", "=w")),
        v188 = COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(double, "d0", "=w")),
        v195 = COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(double, "d0", "=w")),
        v199 = COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(double, "d0", "=w")),
        v205 = COERCE_AS(__typeof__(v205), PSEUDO_REGISTER(double, "d0", "=w")),
        v207 = COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(double, "d0", "=w")),
        v211 = COERCE_AS(__typeof__(v211), PSEUDO_REGISTER(double, "d0", "=w")),
        v218 = COERCE_AS(__typeof__(v218), PSEUDO_REGISTER(double, "d0", "=w")),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(double, "d0", "=w")),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(double, "d0", "=w")),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(double, "d0", "=w")),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(double, "d0", "=w")),
        v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(double, "d0", "=w")),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(double, "d0", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(double, "d0", "=w")),
        v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(double, "d0", "=w")),
        v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(double, "d0", "=w")),
        v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(double, "d0", "=w")),
        v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(double, "d0", "=w")),
        v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(double, "d0", "=w")),
        v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(double, "d0", "=w")),
        v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(double, "d0", "=w")),
        v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(double, "d0", "=w")),
        v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(double, "d0", "=w")),
        v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(double, "d0", "=w")),
        v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(double, "d0", "=w")),
        v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(double, "d0", "=w")),
        v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(double, "d0", "=w"));
        v113 = v112;
        v114 = 0x1.0000000000000p+0;
        if (*(_WORD*)(v4 + 112) != 0) {
          v114 = (double)*(unsigned __int16*)(v4 + 112) / 0x1.3880000000000p+13;
        }
        if (v114 <= 0x1.0000000000000p+0) {
          v115 = v114;
        }
        else {
          v115 = 0x1.0000000000000p+0;
        }
        v116 = (void*)pow_plt(v111, v115, 0x1.4640000000000p-3),
        v102 = COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(double, "d0", "=w")),
        v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(double, "d0", "=w")),
        v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(double, "d0", "=w")),
        v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
        v112 = COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
        v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
        v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(double, "d0", "=w")),
        v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(double, "d0", "=w")),
        v135 = COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(double, "d0", "=w")),
        v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
        v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
        v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(double, "d0", "=w")),
        v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(double, "d0", "=w")),
        v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
        v154 = COERCE_AS(__typeof__(v154), PSEUDO_REGISTER(double, "d0", "=w")),
        v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(double, "d0", "=w")),
        v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
        v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(double, "d0", "=w")),
        v162 = COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(double, "d1", "=w")),
        v163 = COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(double, "d0", "=w")),
        v165 = COERCE_AS(__typeof__(v165), PSEUDO_REGISTER(double, "d0", "=w")),
        v167 = COERCE_AS(__typeof__(v167), PSEUDO_REGISTER(double, "d0", "=w")),
        v171 = COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
        v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
        v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
        v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(double, "d0", "=w")),
        v188 = COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(double, "d0", "=w")),
        v195 = COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(double, "d0", "=w")),
        v199 = COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(double, "d0", "=w")),
        v205 = COERCE_AS(__typeof__(v205), PSEUDO_REGISTER(double, "d0", "=w")),
        v207 = COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(double, "d0", "=w")),
        v211 = COERCE_AS(__typeof__(v211), PSEUDO_REGISTER(double, "d0", "=w")),
        v218 = COERCE_AS(__typeof__(v218), PSEUDO_REGISTER(double, "d0", "=w")),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(double, "d0", "=w")),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(double, "d0", "=w")),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(double, "d0", "=w")),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(double, "d0", "=w")),
        v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(double, "d0", "=w")),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(double, "d0", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(double, "d0", "=w")),
        v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(double, "d0", "=w")),
        v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(double, "d0", "=w")),
        v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(double, "d0", "=w")),
        v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(double, "d0", "=w")),
        v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(double, "d0", "=w")),
        v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(double, "d0", "=w")),
        v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(double, "d0", "=w")),
        v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(double, "d0", "=w")),
        v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(double, "d0", "=w")),
        v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(double, "d0", "=w")),
        v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(double, "d0", "=w")),
        v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(double, "d0", "=w")),
        v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(double, "d0", "=w"));
        v118 = v117 * 0x1.2da0000000000p+4 + 0x1.ac00000000000p-1;
        v119 = (void*)pow_plt(v116, v115, 0x1.4640000000000p-3),
        v102 = COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(double, "d0", "=w")),
        v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(double, "d0", "=w")),
        v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(double, "d0", "=w")),
        v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
        v112 = COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
        v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
        v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(double, "d0", "=w")),
        v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(double, "d0", "=w")),
        v135 = COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(double, "d0", "=w")),
        v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
        v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
        v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(double, "d0", "=w")),
        v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(double, "d0", "=w")),
        v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
        v154 = COERCE_AS(__typeof__(v154), PSEUDO_REGISTER(double, "d0", "=w")),
        v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(double, "d0", "=w")),
        v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
        v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(double, "d0", "=w")),
        v162 = COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(double, "d1", "=w")),
        v163 = COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(double, "d0", "=w")),
        v165 = COERCE_AS(__typeof__(v165), PSEUDO_REGISTER(double, "d0", "=w")),
        v167 = COERCE_AS(__typeof__(v167), PSEUDO_REGISTER(double, "d0", "=w")),
        v171 = COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
        v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
        v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
        v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(double, "d0", "=w")),
        v188 = COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(double, "d0", "=w")),
        v195 = COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(double, "d0", "=w")),
        v199 = COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(double, "d0", "=w")),
        v205 = COERCE_AS(__typeof__(v205), PSEUDO_REGISTER(double, "d0", "=w")),
        v207 = COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(double, "d0", "=w")),
        v211 = COERCE_AS(__typeof__(v211), PSEUDO_REGISTER(double, "d0", "=w")),
        v218 = COERCE_AS(__typeof__(v218), PSEUDO_REGISTER(double, "d0", "=w")),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(double, "d0", "=w")),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(double, "d0", "=w")),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(double, "d0", "=w")),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(double, "d0", "=w")),
        v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(double, "d0", "=w")),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(double, "d0", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(double, "d0", "=w")),
        v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(double, "d0", "=w")),
        v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(double, "d0", "=w")),
        v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(double, "d0", "=w")),
        v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(double, "d0", "=w")),
        v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(double, "d0", "=w")),
        v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(double, "d0", "=w")),
        v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(double, "d0", "=w")),
        v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(double, "d0", "=w")),
        v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(double, "d0", "=w")),
        v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(double, "d0", "=w")),
        v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(double, "d0", "=w")),
        v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(double, "d0", "=w")),
        v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(double, "d0", "=w"));
        pow_plt(v119,
                v118 / (v120 * 0x1.2b00000000000p+4 + 0x1.0000000000000p+0),
                0x1.3b60000000000p+6),
            v102 = COERCE_AS(__typeof__(v102),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v104 = COERCE_AS(__typeof__(v104),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v107 = COERCE_AS(__typeof__(v107),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v110 = COERCE_AS(__typeof__(v110),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v112 = COERCE_AS(__typeof__(v112),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v117 = COERCE_AS(__typeof__(v117),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v120 = COERCE_AS(__typeof__(v120),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v121 = COERCE_AS(__typeof__(v121),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v132 = COERCE_AS(__typeof__(v132),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v135 = COERCE_AS(__typeof__(v135),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v138 = COERCE_AS(__typeof__(v138),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v140 = COERCE_AS(__typeof__(v140),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v143 = COERCE_AS(__typeof__(v143),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v146 = COERCE_AS(__typeof__(v146),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v149 = COERCE_AS(__typeof__(v149),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v154 = COERCE_AS(__typeof__(v154),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v157 = COERCE_AS(__typeof__(v157),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v159 = COERCE_AS(__typeof__(v159),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v161 = COERCE_AS(__typeof__(v161),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v162 = COERCE_AS(__typeof__(v162),
                             PSEUDO_REGISTER(double, "d1", "=w")),
            v163 = COERCE_AS(__typeof__(v163),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v165 = COERCE_AS(__typeof__(v165),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v167 = COERCE_AS(__typeof__(v167),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v171 = COERCE_AS(__typeof__(v171),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v173 = COERCE_AS(__typeof__(v173),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v179 = COERCE_AS(__typeof__(v179),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v183 = COERCE_AS(__typeof__(v183),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v188 = COERCE_AS(__typeof__(v188),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v19 =
                COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(double, "d0", "=w")),
            v195 = COERCE_AS(__typeof__(v195),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v199 = COERCE_AS(__typeof__(v199),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v205 = COERCE_AS(__typeof__(v205),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v207 = COERCE_AS(__typeof__(v207),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v211 = COERCE_AS(__typeof__(v211),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v218 = COERCE_AS(__typeof__(v218),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v22 =
                COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(double, "d0", "=w")),
            v25 =
                COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(double, "d0", "=w")),
            v27 =
                COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(double, "d0", "=w")),
            v30 =
                COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(double, "d0", "=w")),
            v33 =
                COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(double, "d0", "=w")),
            v35 =
                COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(double, "d0", "=w")),
            v40 =
                COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(double, "d0", "=w")),
            v43 =
                COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(double, "d0", "=w")),
            v47 =
                COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(double, "d0", "=w")),
            v56 =
                COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(double, "d0", "=w")),
            v59 =
                COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(double, "d0", "=w")),
            v61 =
                COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(double, "d0", "=w")),
            v64 =
                COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(double, "d0", "=w")),
            v67 =
                COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(double, "d0", "=w")),
            v69 =
                COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(double, "d0", "=w")),
            v74 =
                COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(double, "d0", "=w")),
            v77 =
                COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(double, "d0", "=w")),
            v78 =
                COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(double, "d0", "=w")),
            v89 =
                COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(double, "d0", "=w")),
            v99 =
                COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(double, "d0", "=w"));
        v122 = (_WORD*)(a4 + 32);
        v123 = 8200;
        v124 = 0;
        v125 = v105 / v121 * 0x1.8000000000000p+0 + -0x1.0000000000000p-1;
        v126 = 0x1.0000000000000p+0 - v125;
        do {
          v129 = (double)(unsigned __int16)(((v124 << 14) -
                                             (unsigned int)(unsigned __int16)
                                                 v124) >>
                                            10) /
                 0x1.fff8000000000p+13 / v121;
          if (v129 >= v125) {
            v130 = (v129 - v125) / v126;
            v129 =
                PSEUDO_UNFUSED(v126 *
                               (v130 - (PSEUDO_UNFUSED(v130 * (v130 + v130)) -
                                        PSEUDO_UNFUSED(v130 * v130) * v130))) +
                (0x1.0000000000000p+0 -
                 (PSEUDO_UNFUSED(
                      v130 * (PSEUDO_UNFUSED(v130 * 0x1.8000000000000p+1))) -
                  PSEUDO_UNFUSED(v130 * (v130 + v130)) * v130)) *
                    v125 +
                (PSEUDO_UNFUSED(v130 *
                                (PSEUDO_UNFUSED(v130 * 0x1.8000000000000p+1))) +
                 PSEUDO_UNFUSED(v130 * (v130 * -0x1.0000000000000p+1)) * v130) *
                    (v105 / v121);
          }
          v127 = (int)(v121 *
                           (v129 +
                            PSEUDO_UNFUSED((0x1.0000000000000p+0 - v129) *
                                           ((0x1.0000000000000p+0 - v129) *
                                            (v113 / v121 *
                                             (0x1.0000000000000p+0 - v129)))) *
                                (0x1.0000000000000p+0 - v129)) *
                           0x1.fff8000000000p+13 +
                       0x1.0000000000000p-1);
          if (v127 >= 0x3FFF) {
            LOWORD(v127) = 0x3FFF;
          }
          v128 = 4 * v127;
          *v122 = v128;
          v122[1] = v128;
          v122[2] = v128;
          v122 += 4;
          if ((unsigned int)(unsigned __int16)v124 + 1 < 0xFFFF) {
            v124 = (unsigned __int16)v124 + 1;
          }
          else {
            v124 = 0xFFFF;
          }
          v123 -= 8;
        } while (v123 != 0);
      }
      else {
        v55 =
            (void*)pow_plt(nullptr, 0x1.47ae147ae147bp-7, 0x1.4640000000000p-3),
        v102 = COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(double, "d0", "=w")),
        v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(double, "d0", "=w")),
        v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(double, "d0", "=w")),
        v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
        v112 = COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
        v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
        v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(double, "d0", "=w")),
        v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(double, "d0", "=w")),
        v135 = COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(double, "d0", "=w")),
        v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
        v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
        v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(double, "d0", "=w")),
        v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(double, "d0", "=w")),
        v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
        v154 = COERCE_AS(__typeof__(v154), PSEUDO_REGISTER(double, "d0", "=w")),
        v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(double, "d0", "=w")),
        v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
        v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(double, "d0", "=w")),
        v162 = COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(double, "d1", "=w")),
        v163 = COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(double, "d0", "=w")),
        v165 = COERCE_AS(__typeof__(v165), PSEUDO_REGISTER(double, "d0", "=w")),
        v167 = COERCE_AS(__typeof__(v167), PSEUDO_REGISTER(double, "d0", "=w")),
        v171 = COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
        v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
        v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
        v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(double, "d0", "=w")),
        v188 = COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(double, "d0", "=w")),
        v195 = COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(double, "d0", "=w")),
        v199 = COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(double, "d0", "=w")),
        v205 = COERCE_AS(__typeof__(v205), PSEUDO_REGISTER(double, "d0", "=w")),
        v207 = COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(double, "d0", "=w")),
        v211 = COERCE_AS(__typeof__(v211), PSEUDO_REGISTER(double, "d0", "=w")),
        v218 = COERCE_AS(__typeof__(v218), PSEUDO_REGISTER(double, "d0", "=w")),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(double, "d0", "=w")),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(double, "d0", "=w")),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(double, "d0", "=w")),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(double, "d0", "=w")),
        v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(double, "d0", "=w")),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(double, "d0", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(double, "d0", "=w")),
        v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(double, "d0", "=w")),
        v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(double, "d0", "=w")),
        v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(double, "d0", "=w")),
        v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(double, "d0", "=w")),
        v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(double, "d0", "=w")),
        v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(double, "d0", "=w")),
        v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(double, "d0", "=w")),
        v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(double, "d0", "=w")),
        v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(double, "d0", "=w")),
        v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(double, "d0", "=w")),
        v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(double, "d0", "=w")),
        v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(double, "d0", "=w")),
        v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(double, "d0", "=w"));
        v57 = v56 * 0x1.2da0000000000p+4 + 0x1.ac00000000000p-1;
        v58 = (void*)pow_plt(v55, 0x1.47ae147ae147bp-7, 0x1.4640000000000p-3),
        v102 = COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(double, "d0", "=w")),
        v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(double, "d0", "=w")),
        v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(double, "d0", "=w")),
        v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
        v112 = COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
        v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
        v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(double, "d0", "=w")),
        v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(double, "d0", "=w")),
        v135 = COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(double, "d0", "=w")),
        v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
        v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
        v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(double, "d0", "=w")),
        v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(double, "d0", "=w")),
        v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
        v154 = COERCE_AS(__typeof__(v154), PSEUDO_REGISTER(double, "d0", "=w")),
        v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(double, "d0", "=w")),
        v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
        v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(double, "d0", "=w")),
        v162 = COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(double, "d1", "=w")),
        v163 = COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(double, "d0", "=w")),
        v165 = COERCE_AS(__typeof__(v165), PSEUDO_REGISTER(double, "d0", "=w")),
        v167 = COERCE_AS(__typeof__(v167), PSEUDO_REGISTER(double, "d0", "=w")),
        v171 = COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
        v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
        v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
        v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(double, "d0", "=w")),
        v188 = COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(double, "d0", "=w")),
        v195 = COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(double, "d0", "=w")),
        v199 = COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(double, "d0", "=w")),
        v205 = COERCE_AS(__typeof__(v205), PSEUDO_REGISTER(double, "d0", "=w")),
        v207 = COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(double, "d0", "=w")),
        v211 = COERCE_AS(__typeof__(v211), PSEUDO_REGISTER(double, "d0", "=w")),
        v218 = COERCE_AS(__typeof__(v218), PSEUDO_REGISTER(double, "d0", "=w")),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(double, "d0", "=w")),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(double, "d0", "=w")),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(double, "d0", "=w")),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(double, "d0", "=w")),
        v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(double, "d0", "=w")),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(double, "d0", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(double, "d0", "=w")),
        v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(double, "d0", "=w")),
        v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(double, "d0", "=w")),
        v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(double, "d0", "=w")),
        v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(double, "d0", "=w")),
        v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(double, "d0", "=w")),
        v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(double, "d0", "=w")),
        v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(double, "d0", "=w")),
        v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(double, "d0", "=w")),
        v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(double, "d0", "=w")),
        v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(double, "d0", "=w")),
        v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(double, "d0", "=w")),
        v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(double, "d0", "=w")),
        v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(double, "d0", "=w"));
        v60 = (void*)pow_plt(
            v58, v57 / (v59 * 0x1.2b00000000000p+4 + 0x1.0000000000000p+0),
            0x1.3b60000000000p+6),
        v102 = COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(double, "d0", "=w")),
        v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(double, "d0", "=w")),
        v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(double, "d0", "=w")),
        v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
        v112 = COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
        v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
        v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(double, "d0", "=w")),
        v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(double, "d0", "=w")),
        v135 = COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(double, "d0", "=w")),
        v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
        v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
        v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(double, "d0", "=w")),
        v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(double, "d0", "=w")),
        v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
        v154 = COERCE_AS(__typeof__(v154), PSEUDO_REGISTER(double, "d0", "=w")),
        v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(double, "d0", "=w")),
        v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
        v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(double, "d0", "=w")),
        v162 = COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(double, "d1", "=w")),
        v163 = COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(double, "d0", "=w")),
        v165 = COERCE_AS(__typeof__(v165), PSEUDO_REGISTER(double, "d0", "=w")),
        v167 = COERCE_AS(__typeof__(v167), PSEUDO_REGISTER(double, "d0", "=w")),
        v171 = COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
        v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
        v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
        v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(double, "d0", "=w")),
        v188 = COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(double, "d0", "=w")),
        v195 = COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(double, "d0", "=w")),
        v199 = COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(double, "d0", "=w")),
        v205 = COERCE_AS(__typeof__(v205), PSEUDO_REGISTER(double, "d0", "=w")),
        v207 = COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(double, "d0", "=w")),
        v211 = COERCE_AS(__typeof__(v211), PSEUDO_REGISTER(double, "d0", "=w")),
        v218 = COERCE_AS(__typeof__(v218), PSEUDO_REGISTER(double, "d0", "=w")),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(double, "d0", "=w")),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(double, "d0", "=w")),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(double, "d0", "=w")),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(double, "d0", "=w")),
        v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(double, "d0", "=w")),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(double, "d0", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(double, "d0", "=w")),
        v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(double, "d0", "=w")),
        v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(double, "d0", "=w")),
        v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(double, "d0", "=w")),
        v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(double, "d0", "=w")),
        v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(double, "d0", "=w")),
        v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(double, "d0", "=w")),
        v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(double, "d0", "=w")),
        v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(double, "d0", "=w")),
        v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(double, "d0", "=w")),
        v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(double, "d0", "=w")),
        v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(double, "d0", "=w")),
        v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(double, "d0", "=w")),
        v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(double, "d0", "=w"));
        v62 = v61;
        v63 = (void*)pow_plt(v60, 0x0.0p+0, 0x1.4640000000000p-3),
        v102 = COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(double, "d0", "=w")),
        v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(double, "d0", "=w")),
        v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(double, "d0", "=w")),
        v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
        v112 = COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
        v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
        v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(double, "d0", "=w")),
        v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(double, "d0", "=w")),
        v135 = COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(double, "d0", "=w")),
        v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
        v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
        v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(double, "d0", "=w")),
        v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(double, "d0", "=w")),
        v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
        v154 = COERCE_AS(__typeof__(v154), PSEUDO_REGISTER(double, "d0", "=w")),
        v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(double, "d0", "=w")),
        v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
        v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(double, "d0", "=w")),
        v162 = COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(double, "d1", "=w")),
        v163 = COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(double, "d0", "=w")),
        v165 = COERCE_AS(__typeof__(v165), PSEUDO_REGISTER(double, "d0", "=w")),
        v167 = COERCE_AS(__typeof__(v167), PSEUDO_REGISTER(double, "d0", "=w")),
        v171 = COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
        v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
        v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
        v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(double, "d0", "=w")),
        v188 = COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(double, "d0", "=w")),
        v195 = COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(double, "d0", "=w")),
        v199 = COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(double, "d0", "=w")),
        v205 = COERCE_AS(__typeof__(v205), PSEUDO_REGISTER(double, "d0", "=w")),
        v207 = COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(double, "d0", "=w")),
        v211 = COERCE_AS(__typeof__(v211), PSEUDO_REGISTER(double, "d0", "=w")),
        v218 = COERCE_AS(__typeof__(v218), PSEUDO_REGISTER(double, "d0", "=w")),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(double, "d0", "=w")),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(double, "d0", "=w")),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(double, "d0", "=w")),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(double, "d0", "=w")),
        v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(double, "d0", "=w")),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(double, "d0", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(double, "d0", "=w")),
        v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(double, "d0", "=w")),
        v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(double, "d0", "=w")),
        v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(double, "d0", "=w")),
        v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(double, "d0", "=w")),
        v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(double, "d0", "=w")),
        v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(double, "d0", "=w")),
        v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(double, "d0", "=w")),
        v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(double, "d0", "=w")),
        v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(double, "d0", "=w")),
        v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(double, "d0", "=w")),
        v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(double, "d0", "=w")),
        v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(double, "d0", "=w")),
        v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(double, "d0", "=w"));
        v65 = v64 * 0x1.2da0000000000p+4 + 0x1.ac00000000000p-1;
        v66 = (void*)pow_plt(v63, 0x0.0p+0, 0x1.4640000000000p-3),
        v102 = COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(double, "d0", "=w")),
        v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(double, "d0", "=w")),
        v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(double, "d0", "=w")),
        v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
        v112 = COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
        v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
        v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(double, "d0", "=w")),
        v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(double, "d0", "=w")),
        v135 = COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(double, "d0", "=w")),
        v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
        v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
        v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(double, "d0", "=w")),
        v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(double, "d0", "=w")),
        v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
        v154 = COERCE_AS(__typeof__(v154), PSEUDO_REGISTER(double, "d0", "=w")),
        v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(double, "d0", "=w")),
        v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
        v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(double, "d0", "=w")),
        v162 = COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(double, "d1", "=w")),
        v163 = COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(double, "d0", "=w")),
        v165 = COERCE_AS(__typeof__(v165), PSEUDO_REGISTER(double, "d0", "=w")),
        v167 = COERCE_AS(__typeof__(v167), PSEUDO_REGISTER(double, "d0", "=w")),
        v171 = COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
        v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
        v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
        v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(double, "d0", "=w")),
        v188 = COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(double, "d0", "=w")),
        v195 = COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(double, "d0", "=w")),
        v199 = COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(double, "d0", "=w")),
        v205 = COERCE_AS(__typeof__(v205), PSEUDO_REGISTER(double, "d0", "=w")),
        v207 = COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(double, "d0", "=w")),
        v211 = COERCE_AS(__typeof__(v211), PSEUDO_REGISTER(double, "d0", "=w")),
        v218 = COERCE_AS(__typeof__(v218), PSEUDO_REGISTER(double, "d0", "=w")),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(double, "d0", "=w")),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(double, "d0", "=w")),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(double, "d0", "=w")),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(double, "d0", "=w")),
        v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(double, "d0", "=w")),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(double, "d0", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(double, "d0", "=w")),
        v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(double, "d0", "=w")),
        v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(double, "d0", "=w")),
        v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(double, "d0", "=w")),
        v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(double, "d0", "=w")),
        v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(double, "d0", "=w")),
        v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(double, "d0", "=w")),
        v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(double, "d0", "=w")),
        v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(double, "d0", "=w")),
        v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(double, "d0", "=w")),
        v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(double, "d0", "=w")),
        v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(double, "d0", "=w")),
        v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(double, "d0", "=w")),
        v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(double, "d0", "=w"));
        v68 = (void*)pow_plt(
            v66, v65 / (v67 * 0x1.2b00000000000p+4 + 0x1.0000000000000p+0),
            0x1.3b60000000000p+6),
        v102 = COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(double, "d0", "=w")),
        v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(double, "d0", "=w")),
        v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(double, "d0", "=w")),
        v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
        v112 = COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
        v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
        v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(double, "d0", "=w")),
        v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(double, "d0", "=w")),
        v135 = COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(double, "d0", "=w")),
        v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
        v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
        v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(double, "d0", "=w")),
        v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(double, "d0", "=w")),
        v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
        v154 = COERCE_AS(__typeof__(v154), PSEUDO_REGISTER(double, "d0", "=w")),
        v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(double, "d0", "=w")),
        v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
        v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(double, "d0", "=w")),
        v162 = COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(double, "d1", "=w")),
        v163 = COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(double, "d0", "=w")),
        v165 = COERCE_AS(__typeof__(v165), PSEUDO_REGISTER(double, "d0", "=w")),
        v167 = COERCE_AS(__typeof__(v167), PSEUDO_REGISTER(double, "d0", "=w")),
        v171 = COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
        v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
        v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
        v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(double, "d0", "=w")),
        v188 = COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(double, "d0", "=w")),
        v195 = COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(double, "d0", "=w")),
        v199 = COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(double, "d0", "=w")),
        v205 = COERCE_AS(__typeof__(v205), PSEUDO_REGISTER(double, "d0", "=w")),
        v207 = COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(double, "d0", "=w")),
        v211 = COERCE_AS(__typeof__(v211), PSEUDO_REGISTER(double, "d0", "=w")),
        v218 = COERCE_AS(__typeof__(v218), PSEUDO_REGISTER(double, "d0", "=w")),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(double, "d0", "=w")),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(double, "d0", "=w")),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(double, "d0", "=w")),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(double, "d0", "=w")),
        v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(double, "d0", "=w")),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(double, "d0", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(double, "d0", "=w")),
        v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(double, "d0", "=w")),
        v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(double, "d0", "=w")),
        v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(double, "d0", "=w")),
        v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(double, "d0", "=w")),
        v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(double, "d0", "=w")),
        v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(double, "d0", "=w")),
        v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(double, "d0", "=w")),
        v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(double, "d0", "=w")),
        v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(double, "d0", "=w")),
        v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(double, "d0", "=w")),
        v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(double, "d0", "=w")),
        v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(double, "d0", "=w")),
        v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(double, "d0", "=w"));
        v70 = v69;
        v71 = 0x1.0000000000000p+0;
        if (*(_WORD*)(v4 + 112) != 0) {
          v71 = (double)*(unsigned __int16*)(v4 + 112) / 0x1.3880000000000p+13;
        }
        if (v71 <= 0x1.0000000000000p+0) {
          v72 = v71;
        }
        else {
          v72 = 0x1.0000000000000p+0;
        }
        v73 = (void*)pow_plt(v68, v72, 0x1.4640000000000p-3),
        v102 = COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(double, "d0", "=w")),
        v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(double, "d0", "=w")),
        v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(double, "d0", "=w")),
        v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
        v112 = COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
        v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
        v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(double, "d0", "=w")),
        v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(double, "d0", "=w")),
        v135 = COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(double, "d0", "=w")),
        v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
        v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
        v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(double, "d0", "=w")),
        v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(double, "d0", "=w")),
        v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
        v154 = COERCE_AS(__typeof__(v154), PSEUDO_REGISTER(double, "d0", "=w")),
        v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(double, "d0", "=w")),
        v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
        v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(double, "d0", "=w")),
        v162 = COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(double, "d1", "=w")),
        v163 = COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(double, "d0", "=w")),
        v165 = COERCE_AS(__typeof__(v165), PSEUDO_REGISTER(double, "d0", "=w")),
        v167 = COERCE_AS(__typeof__(v167), PSEUDO_REGISTER(double, "d0", "=w")),
        v171 = COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
        v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
        v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
        v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(double, "d0", "=w")),
        v188 = COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(double, "d0", "=w")),
        v195 = COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(double, "d0", "=w")),
        v199 = COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(double, "d0", "=w")),
        v205 = COERCE_AS(__typeof__(v205), PSEUDO_REGISTER(double, "d0", "=w")),
        v207 = COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(double, "d0", "=w")),
        v211 = COERCE_AS(__typeof__(v211), PSEUDO_REGISTER(double, "d0", "=w")),
        v218 = COERCE_AS(__typeof__(v218), PSEUDO_REGISTER(double, "d0", "=w")),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(double, "d0", "=w")),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(double, "d0", "=w")),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(double, "d0", "=w")),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(double, "d0", "=w")),
        v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(double, "d0", "=w")),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(double, "d0", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(double, "d0", "=w")),
        v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(double, "d0", "=w")),
        v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(double, "d0", "=w")),
        v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(double, "d0", "=w")),
        v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(double, "d0", "=w")),
        v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(double, "d0", "=w")),
        v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(double, "d0", "=w")),
        v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(double, "d0", "=w")),
        v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(double, "d0", "=w")),
        v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(double, "d0", "=w")),
        v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(double, "d0", "=w")),
        v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(double, "d0", "=w")),
        v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(double, "d0", "=w")),
        v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(double, "d0", "=w"));
        v75 = v74 * 0x1.2da0000000000p+4 + 0x1.ac00000000000p-1;
        v76 = (void*)pow_plt(v73, v72, 0x1.4640000000000p-3),
        v102 = COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(double, "d0", "=w")),
        v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(double, "d0", "=w")),
        v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(double, "d0", "=w")),
        v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
        v112 = COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
        v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
        v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(double, "d0", "=w")),
        v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(double, "d0", "=w")),
        v135 = COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(double, "d0", "=w")),
        v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
        v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
        v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(double, "d0", "=w")),
        v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(double, "d0", "=w")),
        v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
        v154 = COERCE_AS(__typeof__(v154), PSEUDO_REGISTER(double, "d0", "=w")),
        v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(double, "d0", "=w")),
        v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
        v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(double, "d0", "=w")),
        v162 = COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(double, "d1", "=w")),
        v163 = COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(double, "d0", "=w")),
        v165 = COERCE_AS(__typeof__(v165), PSEUDO_REGISTER(double, "d0", "=w")),
        v167 = COERCE_AS(__typeof__(v167), PSEUDO_REGISTER(double, "d0", "=w")),
        v171 = COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
        v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
        v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
        v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(double, "d0", "=w")),
        v188 = COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(double, "d0", "=w")),
        v195 = COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(double, "d0", "=w")),
        v199 = COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(double, "d0", "=w")),
        v205 = COERCE_AS(__typeof__(v205), PSEUDO_REGISTER(double, "d0", "=w")),
        v207 = COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(double, "d0", "=w")),
        v211 = COERCE_AS(__typeof__(v211), PSEUDO_REGISTER(double, "d0", "=w")),
        v218 = COERCE_AS(__typeof__(v218), PSEUDO_REGISTER(double, "d0", "=w")),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(double, "d0", "=w")),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(double, "d0", "=w")),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(double, "d0", "=w")),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(double, "d0", "=w")),
        v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(double, "d0", "=w")),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(double, "d0", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(double, "d0", "=w")),
        v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(double, "d0", "=w")),
        v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(double, "d0", "=w")),
        v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(double, "d0", "=w")),
        v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(double, "d0", "=w")),
        v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(double, "d0", "=w")),
        v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(double, "d0", "=w")),
        v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(double, "d0", "=w")),
        v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(double, "d0", "=w")),
        v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(double, "d0", "=w")),
        v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(double, "d0", "=w")),
        v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(double, "d0", "=w")),
        v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(double, "d0", "=w")),
        v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(double, "d0", "=w"));
        pow_plt(v76, v75 / (v77 * 0x1.2b00000000000p+4 + 0x1.0000000000000p+0),
                0x1.3b60000000000p+6),
            v102 = COERCE_AS(__typeof__(v102),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v104 = COERCE_AS(__typeof__(v104),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v107 = COERCE_AS(__typeof__(v107),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v110 = COERCE_AS(__typeof__(v110),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v112 = COERCE_AS(__typeof__(v112),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v117 = COERCE_AS(__typeof__(v117),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v120 = COERCE_AS(__typeof__(v120),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v121 = COERCE_AS(__typeof__(v121),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v132 = COERCE_AS(__typeof__(v132),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v135 = COERCE_AS(__typeof__(v135),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v138 = COERCE_AS(__typeof__(v138),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v140 = COERCE_AS(__typeof__(v140),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v143 = COERCE_AS(__typeof__(v143),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v146 = COERCE_AS(__typeof__(v146),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v149 = COERCE_AS(__typeof__(v149),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v154 = COERCE_AS(__typeof__(v154),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v157 = COERCE_AS(__typeof__(v157),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v159 = COERCE_AS(__typeof__(v159),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v161 = COERCE_AS(__typeof__(v161),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v162 = COERCE_AS(__typeof__(v162),
                             PSEUDO_REGISTER(double, "d1", "=w")),
            v163 = COERCE_AS(__typeof__(v163),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v165 = COERCE_AS(__typeof__(v165),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v167 = COERCE_AS(__typeof__(v167),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v171 = COERCE_AS(__typeof__(v171),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v173 = COERCE_AS(__typeof__(v173),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v179 = COERCE_AS(__typeof__(v179),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v183 = COERCE_AS(__typeof__(v183),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v188 = COERCE_AS(__typeof__(v188),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v19 =
                COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(double, "d0", "=w")),
            v195 = COERCE_AS(__typeof__(v195),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v199 = COERCE_AS(__typeof__(v199),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v205 = COERCE_AS(__typeof__(v205),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v207 = COERCE_AS(__typeof__(v207),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v211 = COERCE_AS(__typeof__(v211),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v218 = COERCE_AS(__typeof__(v218),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v22 =
                COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(double, "d0", "=w")),
            v25 =
                COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(double, "d0", "=w")),
            v27 =
                COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(double, "d0", "=w")),
            v30 =
                COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(double, "d0", "=w")),
            v33 =
                COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(double, "d0", "=w")),
            v35 =
                COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(double, "d0", "=w")),
            v40 =
                COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(double, "d0", "=w")),
            v43 =
                COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(double, "d0", "=w")),
            v47 =
                COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(double, "d0", "=w")),
            v56 =
                COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(double, "d0", "=w")),
            v59 =
                COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(double, "d0", "=w")),
            v61 =
                COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(double, "d0", "=w")),
            v64 =
                COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(double, "d0", "=w")),
            v67 =
                COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(double, "d0", "=w")),
            v69 =
                COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(double, "d0", "=w")),
            v74 =
                COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(double, "d0", "=w")),
            v77 =
                COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(double, "d0", "=w")),
            v78 =
                COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(double, "d0", "=w")),
            v89 =
                COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(double, "d0", "=w")),
            v99 =
                COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(double, "d0", "=w"));
        v79 = (_WORD*)(a4 + 32);
        v80 = 8200;
        v81 = 0;
        v82 = v62 / v78 * 0x1.8000000000000p+0 + -0x1.0000000000000p-1;
        v83 = 0x1.0000000000000p+0 - v82;
        do {
          v86 = (double)(unsigned __int16)(((v81 << 14) -
                                            (unsigned int)(unsigned __int16)
                                                v81) >>
                                           10) /
                0x1.fff8000000000p+13 / v78;
          if (v86 >= v82) {
            v87 = (v86 - v82) / v83;
            v86 = PSEUDO_UNFUSED(v83 *
                                 (v87 - (PSEUDO_UNFUSED(v87 * (v87 + v87)) -
                                         PSEUDO_UNFUSED(v87 * v87) * v87))) +
                  (0x1.0000000000000p+0 -
                   (PSEUDO_UNFUSED(
                        v87 * (PSEUDO_UNFUSED(v87 * 0x1.8000000000000p+1))) -
                    PSEUDO_UNFUSED(v87 * (v87 + v87)) * v87)) *
                      v82 +
                  (PSEUDO_UNFUSED(
                       v87 * (PSEUDO_UNFUSED(v87 * 0x1.8000000000000p+1))) +
                   PSEUDO_UNFUSED(v87 * (v87 * -0x1.0000000000000p+1)) * v87) *
                      (v62 / v78);
          }
          v84 = (int)(v78 *
                          (v86 +
                           PSEUDO_UNFUSED(
                               (0x1.0000000000000p+0 - v86) *
                               ((0x1.0000000000000p+0 - v86) *
                                (v70 / v78 * (0x1.0000000000000p+0 - v86)))) *
                               (0x1.0000000000000p+0 - v86)) *
                          0x1.fff8000000000p+13 +
                      0x1.0000000000000p-1);
          if (v84 >= 0x3FFF) {
            LOWORD(v84) = 0x3FFF;
          }
          v85 = 4 * v84;
          *v79 = v85;
          v79[1] = v85;
          v79[2] = v85;
          v79 += 4;
          if ((unsigned int)(unsigned __int16)v81 + 1 < 0xFFFF) {
            v81 = (unsigned __int16)v81 + 1;
          }
          else {
            v81 = 0xFFFF;
          }
          v80 -= 8;
        } while (v80 != 0);
      }
    }
    else if (a3 == 1) {
      v91 = (_WORD*)(a4 + 36);
      v92 = 8200;
      v93 = SdkRoutine_602440(a1),
      v102 = COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(double, "d0", "=w")),
      v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(double, "d0", "=w")),
      v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(double, "d0", "=w")),
      v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
      v112 = COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
      v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
      v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(double, "d0", "=w")),
      v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(double, "d0", "=w")),
      v135 = COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(double, "d0", "=w")),
      v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
      v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
      v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(double, "d0", "=w")),
      v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(double, "d0", "=w")),
      v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
      v154 = COERCE_AS(__typeof__(v154), PSEUDO_REGISTER(double, "d0", "=w")),
      v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(double, "d0", "=w")),
      v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
      v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(double, "d0", "=w")),
      v162 = COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(double, "d1", "=w")),
      v163 = COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(double, "d0", "=w")),
      v165 = COERCE_AS(__typeof__(v165), PSEUDO_REGISTER(double, "d0", "=w")),
      v167 = COERCE_AS(__typeof__(v167), PSEUDO_REGISTER(double, "d0", "=w")),
      v171 = COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
      v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
      v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
      v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(double, "d0", "=w")),
      v188 = COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(double, "d0", "=w")),
      v195 = COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(double, "d0", "=w")),
      v199 = COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(double, "d0", "=w")),
      v205 = COERCE_AS(__typeof__(v205), PSEUDO_REGISTER(double, "d0", "=w")),
      v207 = COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(double, "d0", "=w")),
      v211 = COERCE_AS(__typeof__(v211), PSEUDO_REGISTER(double, "d0", "=w")),
      v218 = COERCE_AS(__typeof__(v218), PSEUDO_REGISTER(double, "d0", "=w")),
      v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(double, "d0", "=w")),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(double, "d0", "=w")),
      v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(double, "d0", "=w")),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(double, "d0", "=w")),
      v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(double, "d0", "=w")),
      v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(double, "d0", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(double, "d0", "=w")),
      v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(double, "d0", "=w")),
      v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(double, "d0", "=w")),
      v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(double, "d0", "=w")),
      v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(double, "d0", "=w")),
      v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(double, "d0", "=w")),
      v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(double, "d0", "=w")),
      v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(double, "d0", "=w")),
      v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(double, "d0", "=w")),
      v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(double, "d0", "=w")),
      v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(double, "d0", "=w")),
      v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(double, "d0", "=w")),
      v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(double, "d0", "=w")),
      v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(double, "d0", "=w"));
      v94 = 0;
      do {
        v95 = (unsigned __int16)v94;
        v96 =
            (int)(float)((float)(nvidia_623710(
                                     v93 + 9072,
                                     (float)(unsigned __int16)(((v94 << 14) -
                                                                (unsigned int)(unsigned __int16)
                                                                    v94) >>
                                                               10) /
                                         0x1.fff8000000000p+13f) *
                                 0x1.fff8000000000p+13f) +
                         0x1.0000000000000p-1f),
        v102 = COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(double, "d0", "=w")),
        v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(double, "d0", "=w")),
        v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(double, "d0", "=w")),
        v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
        v112 = COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
        v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
        v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(double, "d0", "=w")),
        v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(double, "d0", "=w")),
        v135 = COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(double, "d0", "=w")),
        v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
        v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
        v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(double, "d0", "=w")),
        v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(double, "d0", "=w")),
        v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
        v154 = COERCE_AS(__typeof__(v154), PSEUDO_REGISTER(double, "d0", "=w")),
        v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(double, "d0", "=w")),
        v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
        v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(double, "d0", "=w")),
        v162 = COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(double, "d1", "=w")),
        v163 = COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(double, "d0", "=w")),
        v165 = COERCE_AS(__typeof__(v165), PSEUDO_REGISTER(double, "d0", "=w")),
        v167 = COERCE_AS(__typeof__(v167), PSEUDO_REGISTER(double, "d0", "=w")),
        v171 = COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
        v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
        v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
        v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(double, "d0", "=w")),
        v188 = COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(double, "d0", "=w")),
        v195 = COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(double, "d0", "=w")),
        v199 = COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(double, "d0", "=w")),
        v205 = COERCE_AS(__typeof__(v205), PSEUDO_REGISTER(double, "d0", "=w")),
        v207 = COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(double, "d0", "=w")),
        v211 = COERCE_AS(__typeof__(v211), PSEUDO_REGISTER(double, "d0", "=w")),
        v218 = COERCE_AS(__typeof__(v218), PSEUDO_REGISTER(double, "d0", "=w")),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(double, "d0", "=w")),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(double, "d0", "=w")),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(double, "d0", "=w")),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(double, "d0", "=w")),
        v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(double, "d0", "=w")),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(double, "d0", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(double, "d0", "=w")),
        v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(double, "d0", "=w")),
        v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(double, "d0", "=w")),
        v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(double, "d0", "=w")),
        v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(double, "d0", "=w")),
        v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(double, "d0", "=w")),
        v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(double, "d0", "=w")),
        v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(double, "d0", "=w")),
        v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(double, "d0", "=w")),
        v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(double, "d0", "=w")),
        v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(double, "d0", "=w")),
        v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(double, "d0", "=w")),
        v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(double, "d0", "=w")),
        v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(double, "d0", "=w"));
        if (v96 >= 0x3FFF) {
          LOWORD(v96) = 0x3FFF;
        }
        v97 = 4 * v96;
        *(v91 - 2) = v97;
        *(v91 - 1) = v97;
        *v91 = v97;
        v91 += 4;
        if ((unsigned int)(v95 + 1) < 0xFFFF) {
          v94 = v95 + 1;
        }
        else {
          v94 = 0xFFFF;
        }
        v92 -= 8;
      } while (v92 != 0);
    }
    else if (a3 == 2) {
      v21 = (void*)pow_plt(nullptr, 0x1.0624dd2f1a9fcp-7, 0x1.4640000000000p-3),
      v102 = COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(double, "d0", "=w")),
      v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(double, "d0", "=w")),
      v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(double, "d0", "=w")),
      v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
      v112 = COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
      v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
      v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(double, "d0", "=w")),
      v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(double, "d0", "=w")),
      v135 = COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(double, "d0", "=w")),
      v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
      v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
      v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(double, "d0", "=w")),
      v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(double, "d0", "=w")),
      v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
      v154 = COERCE_AS(__typeof__(v154), PSEUDO_REGISTER(double, "d0", "=w")),
      v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(double, "d0", "=w")),
      v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
      v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(double, "d0", "=w")),
      v162 = COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(double, "d1", "=w")),
      v163 = COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(double, "d0", "=w")),
      v165 = COERCE_AS(__typeof__(v165), PSEUDO_REGISTER(double, "d0", "=w")),
      v167 = COERCE_AS(__typeof__(v167), PSEUDO_REGISTER(double, "d0", "=w")),
      v171 = COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
      v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
      v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
      v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(double, "d0", "=w")),
      v188 = COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(double, "d0", "=w")),
      v195 = COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(double, "d0", "=w")),
      v199 = COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(double, "d0", "=w")),
      v205 = COERCE_AS(__typeof__(v205), PSEUDO_REGISTER(double, "d0", "=w")),
      v207 = COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(double, "d0", "=w")),
      v211 = COERCE_AS(__typeof__(v211), PSEUDO_REGISTER(double, "d0", "=w")),
      v218 = COERCE_AS(__typeof__(v218), PSEUDO_REGISTER(double, "d0", "=w")),
      v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(double, "d0", "=w")),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(double, "d0", "=w")),
      v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(double, "d0", "=w")),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(double, "d0", "=w")),
      v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(double, "d0", "=w")),
      v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(double, "d0", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(double, "d0", "=w")),
      v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(double, "d0", "=w")),
      v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(double, "d0", "=w")),
      v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(double, "d0", "=w")),
      v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(double, "d0", "=w")),
      v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(double, "d0", "=w")),
      v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(double, "d0", "=w")),
      v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(double, "d0", "=w")),
      v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(double, "d0", "=w")),
      v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(double, "d0", "=w")),
      v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(double, "d0", "=w")),
      v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(double, "d0", "=w")),
      v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(double, "d0", "=w")),
      v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(double, "d0", "=w"));
      v23 = v22 * 0x1.2da0000000000p+4 + 0x1.ac00000000000p-1;
      v24 = (void*)pow_plt(v21, 0x1.0624dd2f1a9fcp-7, 0x1.4640000000000p-3),
      v102 = COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(double, "d0", "=w")),
      v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(double, "d0", "=w")),
      v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(double, "d0", "=w")),
      v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
      v112 = COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
      v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
      v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(double, "d0", "=w")),
      v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(double, "d0", "=w")),
      v135 = COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(double, "d0", "=w")),
      v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
      v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
      v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(double, "d0", "=w")),
      v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(double, "d0", "=w")),
      v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
      v154 = COERCE_AS(__typeof__(v154), PSEUDO_REGISTER(double, "d0", "=w")),
      v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(double, "d0", "=w")),
      v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
      v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(double, "d0", "=w")),
      v162 = COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(double, "d1", "=w")),
      v163 = COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(double, "d0", "=w")),
      v165 = COERCE_AS(__typeof__(v165), PSEUDO_REGISTER(double, "d0", "=w")),
      v167 = COERCE_AS(__typeof__(v167), PSEUDO_REGISTER(double, "d0", "=w")),
      v171 = COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
      v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
      v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
      v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(double, "d0", "=w")),
      v188 = COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(double, "d0", "=w")),
      v195 = COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(double, "d0", "=w")),
      v199 = COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(double, "d0", "=w")),
      v205 = COERCE_AS(__typeof__(v205), PSEUDO_REGISTER(double, "d0", "=w")),
      v207 = COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(double, "d0", "=w")),
      v211 = COERCE_AS(__typeof__(v211), PSEUDO_REGISTER(double, "d0", "=w")),
      v218 = COERCE_AS(__typeof__(v218), PSEUDO_REGISTER(double, "d0", "=w")),
      v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(double, "d0", "=w")),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(double, "d0", "=w")),
      v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(double, "d0", "=w")),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(double, "d0", "=w")),
      v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(double, "d0", "=w")),
      v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(double, "d0", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(double, "d0", "=w")),
      v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(double, "d0", "=w")),
      v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(double, "d0", "=w")),
      v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(double, "d0", "=w")),
      v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(double, "d0", "=w")),
      v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(double, "d0", "=w")),
      v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(double, "d0", "=w")),
      v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(double, "d0", "=w")),
      v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(double, "d0", "=w")),
      v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(double, "d0", "=w")),
      v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(double, "d0", "=w")),
      v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(double, "d0", "=w")),
      v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(double, "d0", "=w")),
      v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(double, "d0", "=w"));
      v26 = (void*)pow_plt(
          v24, v23 / (v25 * 0x1.2b00000000000p+4 + 0x1.0000000000000p+0),
          0x1.3b60000000000p+6),
      v102 = COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(double, "d0", "=w")),
      v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(double, "d0", "=w")),
      v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(double, "d0", "=w")),
      v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
      v112 = COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
      v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
      v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(double, "d0", "=w")),
      v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(double, "d0", "=w")),
      v135 = COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(double, "d0", "=w")),
      v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
      v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
      v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(double, "d0", "=w")),
      v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(double, "d0", "=w")),
      v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
      v154 = COERCE_AS(__typeof__(v154), PSEUDO_REGISTER(double, "d0", "=w")),
      v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(double, "d0", "=w")),
      v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
      v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(double, "d0", "=w")),
      v162 = COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(double, "d1", "=w")),
      v163 = COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(double, "d0", "=w")),
      v165 = COERCE_AS(__typeof__(v165), PSEUDO_REGISTER(double, "d0", "=w")),
      v167 = COERCE_AS(__typeof__(v167), PSEUDO_REGISTER(double, "d0", "=w")),
      v171 = COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
      v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
      v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
      v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(double, "d0", "=w")),
      v188 = COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(double, "d0", "=w")),
      v195 = COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(double, "d0", "=w")),
      v199 = COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(double, "d0", "=w")),
      v205 = COERCE_AS(__typeof__(v205), PSEUDO_REGISTER(double, "d0", "=w")),
      v207 = COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(double, "d0", "=w")),
      v211 = COERCE_AS(__typeof__(v211), PSEUDO_REGISTER(double, "d0", "=w")),
      v218 = COERCE_AS(__typeof__(v218), PSEUDO_REGISTER(double, "d0", "=w")),
      v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(double, "d0", "=w")),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(double, "d0", "=w")),
      v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(double, "d0", "=w")),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(double, "d0", "=w")),
      v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(double, "d0", "=w")),
      v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(double, "d0", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(double, "d0", "=w")),
      v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(double, "d0", "=w")),
      v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(double, "d0", "=w")),
      v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(double, "d0", "=w")),
      v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(double, "d0", "=w")),
      v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(double, "d0", "=w")),
      v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(double, "d0", "=w")),
      v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(double, "d0", "=w")),
      v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(double, "d0", "=w")),
      v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(double, "d0", "=w")),
      v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(double, "d0", "=w")),
      v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(double, "d0", "=w")),
      v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(double, "d0", "=w")),
      v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(double, "d0", "=w"));
      v28 = v27;
      v29 = (void*)pow_plt(v26, 0x0.0p+0, 0x1.4640000000000p-3),
      v102 = COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(double, "d0", "=w")),
      v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(double, "d0", "=w")),
      v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(double, "d0", "=w")),
      v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
      v112 = COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
      v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
      v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(double, "d0", "=w")),
      v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(double, "d0", "=w")),
      v135 = COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(double, "d0", "=w")),
      v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
      v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
      v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(double, "d0", "=w")),
      v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(double, "d0", "=w")),
      v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
      v154 = COERCE_AS(__typeof__(v154), PSEUDO_REGISTER(double, "d0", "=w")),
      v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(double, "d0", "=w")),
      v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
      v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(double, "d0", "=w")),
      v162 = COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(double, "d1", "=w")),
      v163 = COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(double, "d0", "=w")),
      v165 = COERCE_AS(__typeof__(v165), PSEUDO_REGISTER(double, "d0", "=w")),
      v167 = COERCE_AS(__typeof__(v167), PSEUDO_REGISTER(double, "d0", "=w")),
      v171 = COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
      v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
      v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
      v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(double, "d0", "=w")),
      v188 = COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(double, "d0", "=w")),
      v195 = COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(double, "d0", "=w")),
      v199 = COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(double, "d0", "=w")),
      v205 = COERCE_AS(__typeof__(v205), PSEUDO_REGISTER(double, "d0", "=w")),
      v207 = COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(double, "d0", "=w")),
      v211 = COERCE_AS(__typeof__(v211), PSEUDO_REGISTER(double, "d0", "=w")),
      v218 = COERCE_AS(__typeof__(v218), PSEUDO_REGISTER(double, "d0", "=w")),
      v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(double, "d0", "=w")),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(double, "d0", "=w")),
      v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(double, "d0", "=w")),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(double, "d0", "=w")),
      v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(double, "d0", "=w")),
      v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(double, "d0", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(double, "d0", "=w")),
      v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(double, "d0", "=w")),
      v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(double, "d0", "=w")),
      v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(double, "d0", "=w")),
      v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(double, "d0", "=w")),
      v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(double, "d0", "=w")),
      v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(double, "d0", "=w")),
      v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(double, "d0", "=w")),
      v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(double, "d0", "=w")),
      v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(double, "d0", "=w")),
      v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(double, "d0", "=w")),
      v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(double, "d0", "=w")),
      v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(double, "d0", "=w")),
      v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(double, "d0", "=w"));
      v31 = v30 * 0x1.2da0000000000p+4 + 0x1.ac00000000000p-1;
      v32 = (void*)pow_plt(v29, 0x0.0p+0, 0x1.4640000000000p-3),
      v102 = COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(double, "d0", "=w")),
      v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(double, "d0", "=w")),
      v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(double, "d0", "=w")),
      v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
      v112 = COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
      v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
      v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(double, "d0", "=w")),
      v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(double, "d0", "=w")),
      v135 = COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(double, "d0", "=w")),
      v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
      v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
      v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(double, "d0", "=w")),
      v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(double, "d0", "=w")),
      v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
      v154 = COERCE_AS(__typeof__(v154), PSEUDO_REGISTER(double, "d0", "=w")),
      v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(double, "d0", "=w")),
      v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
      v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(double, "d0", "=w")),
      v162 = COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(double, "d1", "=w")),
      v163 = COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(double, "d0", "=w")),
      v165 = COERCE_AS(__typeof__(v165), PSEUDO_REGISTER(double, "d0", "=w")),
      v167 = COERCE_AS(__typeof__(v167), PSEUDO_REGISTER(double, "d0", "=w")),
      v171 = COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
      v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
      v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
      v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(double, "d0", "=w")),
      v188 = COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(double, "d0", "=w")),
      v195 = COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(double, "d0", "=w")),
      v199 = COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(double, "d0", "=w")),
      v205 = COERCE_AS(__typeof__(v205), PSEUDO_REGISTER(double, "d0", "=w")),
      v207 = COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(double, "d0", "=w")),
      v211 = COERCE_AS(__typeof__(v211), PSEUDO_REGISTER(double, "d0", "=w")),
      v218 = COERCE_AS(__typeof__(v218), PSEUDO_REGISTER(double, "d0", "=w")),
      v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(double, "d0", "=w")),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(double, "d0", "=w")),
      v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(double, "d0", "=w")),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(double, "d0", "=w")),
      v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(double, "d0", "=w")),
      v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(double, "d0", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(double, "d0", "=w")),
      v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(double, "d0", "=w")),
      v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(double, "d0", "=w")),
      v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(double, "d0", "=w")),
      v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(double, "d0", "=w")),
      v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(double, "d0", "=w")),
      v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(double, "d0", "=w")),
      v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(double, "d0", "=w")),
      v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(double, "d0", "=w")),
      v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(double, "d0", "=w")),
      v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(double, "d0", "=w")),
      v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(double, "d0", "=w")),
      v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(double, "d0", "=w")),
      v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(double, "d0", "=w"));
      v34 = (void*)pow_plt(
          v32, v31 / (v33 * 0x1.2b00000000000p+4 + 0x1.0000000000000p+0),
          0x1.3b60000000000p+6),
      v102 = COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(double, "d0", "=w")),
      v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(double, "d0", "=w")),
      v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(double, "d0", "=w")),
      v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
      v112 = COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
      v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
      v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(double, "d0", "=w")),
      v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(double, "d0", "=w")),
      v135 = COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(double, "d0", "=w")),
      v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
      v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
      v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(double, "d0", "=w")),
      v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(double, "d0", "=w")),
      v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
      v154 = COERCE_AS(__typeof__(v154), PSEUDO_REGISTER(double, "d0", "=w")),
      v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(double, "d0", "=w")),
      v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
      v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(double, "d0", "=w")),
      v162 = COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(double, "d1", "=w")),
      v163 = COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(double, "d0", "=w")),
      v165 = COERCE_AS(__typeof__(v165), PSEUDO_REGISTER(double, "d0", "=w")),
      v167 = COERCE_AS(__typeof__(v167), PSEUDO_REGISTER(double, "d0", "=w")),
      v171 = COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
      v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
      v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
      v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(double, "d0", "=w")),
      v188 = COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(double, "d0", "=w")),
      v195 = COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(double, "d0", "=w")),
      v199 = COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(double, "d0", "=w")),
      v205 = COERCE_AS(__typeof__(v205), PSEUDO_REGISTER(double, "d0", "=w")),
      v207 = COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(double, "d0", "=w")),
      v211 = COERCE_AS(__typeof__(v211), PSEUDO_REGISTER(double, "d0", "=w")),
      v218 = COERCE_AS(__typeof__(v218), PSEUDO_REGISTER(double, "d0", "=w")),
      v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(double, "d0", "=w")),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(double, "d0", "=w")),
      v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(double, "d0", "=w")),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(double, "d0", "=w")),
      v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(double, "d0", "=w")),
      v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(double, "d0", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(double, "d0", "=w")),
      v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(double, "d0", "=w")),
      v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(double, "d0", "=w")),
      v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(double, "d0", "=w")),
      v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(double, "d0", "=w")),
      v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(double, "d0", "=w")),
      v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(double, "d0", "=w")),
      v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(double, "d0", "=w")),
      v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(double, "d0", "=w")),
      v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(double, "d0", "=w")),
      v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(double, "d0", "=w")),
      v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(double, "d0", "=w")),
      v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(double, "d0", "=w")),
      v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(double, "d0", "=w"));
      v36 = v35;
      v37 = 0x1.0000000000000p+0;
      if (*(_WORD*)(v4 + 112) != 0) {
        v37 = (double)*(unsigned __int16*)(v4 + 112) / 0x1.3880000000000p+13;
      }
      if (v37 <= 0x1.0000000000000p+0) {
        v38 = v37;
      }
      else {
        v38 = 0x1.0000000000000p+0;
      }
      v39 = (void*)pow_plt(v34, v38, 0x1.4640000000000p-3),
      v102 = COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(double, "d0", "=w")),
      v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(double, "d0", "=w")),
      v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(double, "d0", "=w")),
      v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
      v112 = COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
      v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
      v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(double, "d0", "=w")),
      v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(double, "d0", "=w")),
      v135 = COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(double, "d0", "=w")),
      v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
      v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
      v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(double, "d0", "=w")),
      v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(double, "d0", "=w")),
      v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
      v154 = COERCE_AS(__typeof__(v154), PSEUDO_REGISTER(double, "d0", "=w")),
      v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(double, "d0", "=w")),
      v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
      v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(double, "d0", "=w")),
      v162 = COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(double, "d1", "=w")),
      v163 = COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(double, "d0", "=w")),
      v165 = COERCE_AS(__typeof__(v165), PSEUDO_REGISTER(double, "d0", "=w")),
      v167 = COERCE_AS(__typeof__(v167), PSEUDO_REGISTER(double, "d0", "=w")),
      v171 = COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
      v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
      v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
      v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(double, "d0", "=w")),
      v188 = COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(double, "d0", "=w")),
      v195 = COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(double, "d0", "=w")),
      v199 = COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(double, "d0", "=w")),
      v205 = COERCE_AS(__typeof__(v205), PSEUDO_REGISTER(double, "d0", "=w")),
      v207 = COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(double, "d0", "=w")),
      v211 = COERCE_AS(__typeof__(v211), PSEUDO_REGISTER(double, "d0", "=w")),
      v218 = COERCE_AS(__typeof__(v218), PSEUDO_REGISTER(double, "d0", "=w")),
      v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(double, "d0", "=w")),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(double, "d0", "=w")),
      v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(double, "d0", "=w")),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(double, "d0", "=w")),
      v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(double, "d0", "=w")),
      v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(double, "d0", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(double, "d0", "=w")),
      v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(double, "d0", "=w")),
      v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(double, "d0", "=w")),
      v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(double, "d0", "=w")),
      v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(double, "d0", "=w")),
      v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(double, "d0", "=w")),
      v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(double, "d0", "=w")),
      v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(double, "d0", "=w")),
      v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(double, "d0", "=w")),
      v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(double, "d0", "=w")),
      v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(double, "d0", "=w")),
      v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(double, "d0", "=w")),
      v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(double, "d0", "=w")),
      v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(double, "d0", "=w"));
      v41 = v40 * 0x1.2da0000000000p+4 + 0x1.ac00000000000p-1;
      v42 = (void*)pow_plt(v39, v38, 0x1.4640000000000p-3),
      v102 = COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(double, "d0", "=w")),
      v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(double, "d0", "=w")),
      v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(double, "d0", "=w")),
      v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
      v112 = COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
      v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
      v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(double, "d0", "=w")),
      v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(double, "d0", "=w")),
      v135 = COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(double, "d0", "=w")),
      v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
      v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
      v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(double, "d0", "=w")),
      v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(double, "d0", "=w")),
      v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
      v154 = COERCE_AS(__typeof__(v154), PSEUDO_REGISTER(double, "d0", "=w")),
      v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(double, "d0", "=w")),
      v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
      v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(double, "d0", "=w")),
      v162 = COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(double, "d1", "=w")),
      v163 = COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(double, "d0", "=w")),
      v165 = COERCE_AS(__typeof__(v165), PSEUDO_REGISTER(double, "d0", "=w")),
      v167 = COERCE_AS(__typeof__(v167), PSEUDO_REGISTER(double, "d0", "=w")),
      v171 = COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
      v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
      v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
      v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(double, "d0", "=w")),
      v188 = COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(double, "d0", "=w")),
      v195 = COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(double, "d0", "=w")),
      v199 = COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(double, "d0", "=w")),
      v205 = COERCE_AS(__typeof__(v205), PSEUDO_REGISTER(double, "d0", "=w")),
      v207 = COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(double, "d0", "=w")),
      v211 = COERCE_AS(__typeof__(v211), PSEUDO_REGISTER(double, "d0", "=w")),
      v218 = COERCE_AS(__typeof__(v218), PSEUDO_REGISTER(double, "d0", "=w")),
      v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(double, "d0", "=w")),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(double, "d0", "=w")),
      v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(double, "d0", "=w")),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(double, "d0", "=w")),
      v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(double, "d0", "=w")),
      v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(double, "d0", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(double, "d0", "=w")),
      v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(double, "d0", "=w")),
      v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(double, "d0", "=w")),
      v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(double, "d0", "=w")),
      v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(double, "d0", "=w")),
      v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(double, "d0", "=w")),
      v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(double, "d0", "=w")),
      v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(double, "d0", "=w")),
      v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(double, "d0", "=w")),
      v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(double, "d0", "=w")),
      v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(double, "d0", "=w")),
      v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(double, "d0", "=w")),
      v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(double, "d0", "=w")),
      v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(double, "d0", "=w"));
      pow_plt(v42, v41 / (v43 * 0x1.2b00000000000p+4 + 0x1.0000000000000p+0),
              0x1.3b60000000000p+6),
          v102 =
              COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(double, "d0", "=w")),
          v104 =
              COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(double, "d0", "=w")),
          v107 =
              COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(double, "d0", "=w")),
          v110 =
              COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
          v112 =
              COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
          v117 =
              COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
          v120 =
              COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
          v121 =
              COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(double, "d0", "=w")),
          v132 =
              COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(double, "d0", "=w")),
          v135 =
              COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(double, "d0", "=w")),
          v138 =
              COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
          v140 =
              COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
          v143 =
              COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(double, "d0", "=w")),
          v146 =
              COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(double, "d0", "=w")),
          v149 =
              COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
          v154 =
              COERCE_AS(__typeof__(v154), PSEUDO_REGISTER(double, "d0", "=w")),
          v157 =
              COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(double, "d0", "=w")),
          v159 =
              COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
          v161 =
              COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(double, "d0", "=w")),
          v162 =
              COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(double, "d1", "=w")),
          v163 =
              COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(double, "d0", "=w")),
          v165 =
              COERCE_AS(__typeof__(v165), PSEUDO_REGISTER(double, "d0", "=w")),
          v167 =
              COERCE_AS(__typeof__(v167), PSEUDO_REGISTER(double, "d0", "=w")),
          v171 =
              COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
          v173 =
              COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
          v179 =
              COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
          v183 =
              COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(double, "d0", "=w")),
          v188 =
              COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
          v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(double, "d0", "=w")),
          v195 =
              COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(double, "d0", "=w")),
          v199 =
              COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(double, "d0", "=w")),
          v205 =
              COERCE_AS(__typeof__(v205), PSEUDO_REGISTER(double, "d0", "=w")),
          v207 =
              COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(double, "d0", "=w")),
          v211 =
              COERCE_AS(__typeof__(v211), PSEUDO_REGISTER(double, "d0", "=w")),
          v218 =
              COERCE_AS(__typeof__(v218), PSEUDO_REGISTER(double, "d0", "=w")),
          v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(double, "d0", "=w")),
          v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(double, "d0", "=w")),
          v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(double, "d0", "=w")),
          v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(double, "d0", "=w")),
          v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(double, "d0", "=w")),
          v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(double, "d0", "=w")),
          v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(double, "d0", "=w")),
          v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(double, "d0", "=w")),
          v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(double, "d0", "=w")),
          v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(double, "d0", "=w")),
          v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(double, "d0", "=w")),
          v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(double, "d0", "=w")),
          v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(double, "d0", "=w")),
          v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(double, "d0", "=w")),
          v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(double, "d0", "=w")),
          v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(double, "d0", "=w")),
          v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(double, "d0", "=w")),
          v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(double, "d0", "=w")),
          v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(double, "d0", "=w")),
          v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(double, "d0", "=w"));
      v44 = (_WORD*)(a4 + 32);
      v45 = 8200;
      v46 = 0;
      v48 = (v28 * 0x1.8000000000000p+0 + -0x1.0000000000000p-1) * v47;
      v49 = v48;
      v50 = v47 - v48;
      do {
        v53 =
            (double)(unsigned __int16)(((v46 << 14) -
                                        (unsigned int)(unsigned __int16)v46) >>
                                       10) /
            0x1.fff8000000000p+13;
        if (v53 >= v49) {
          v54 = (v53 - v49) / v50;
          v53 =
              (float)((float)(PSEUDO_UNFUSED(
                          (float)(0x1.0000000000000p+0f - v48) *
                          (float)(v54 - (float)((float)(PSEUDO_UNFUSED(
                                                    (float)(v54 + v54) * v54)) -
                                                (float)((float)(v54 * v54) *
                                                        v54))))) +
                      (float)((float)(0x1.0000000000000p+0f -
                                      (float)((float)(PSEUDO_UNFUSED(
                                                  (float)(v54 *
                                                          0x1.8000000000000p+1f) *
                                                  v54)) -
                                              (float)((float)((float)(v54 +
                                                                      v54) *
                                                              v54) *
                                                      v54))) *
                              v48)) +
              (float)((float)(PSEUDO_UNFUSED(
                          (float)(v54 * 0x1.8000000000000p+1f) * v54)) +
                      (float)((float)((float)(v54 * -0x1.0000000000000p+1f) *
                                      v54) *
                              v54)) *
                  v28;
        }
        v51 = (int)((v53 +
                     PSEUDO_UNFUSED((0x1.0000000000000p+0 - v53) *
                                    ((0x1.0000000000000p+0 - v53) *
                                     (v36 * (0x1.0000000000000p+0 - v53)))) *
                         (0x1.0000000000000p+0 - v53)) *
                        0x1.fff8000000000p+13 +
                    0x1.0000000000000p-1);
        if (v51 >= 0x3FFF) {
          LOWORD(v51) = 0x3FFF;
        }
        v52 = 4 * v51;
        *v44 = v52;
        v44[1] = v52;
        v44[2] = v52;
        v44 += 4;
        if ((unsigned int)(unsigned __int16)v46 + 1 < 0xFFFF) {
          v46 = (unsigned __int16)v46 + 1;
        }
        else {
          v46 = 0xFFFF;
        }
        v45 -= 8;
      } while (v45 != 0);
    }
    return nvidia_620e80(v13 + 9032, v8, a4, 8448);
  }
  if (a3 <= 6) {
    if (a3 == 5) {
      v219_.v219[0] = 0x1.fff8000000000p+13;
      v134 =
          (void*)pow_plt(nullptr, 0x1.47ae147ae147bp-7, 0x1.4640000000000p-3),
      v102 = COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(double, "d0", "=w")),
      v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(double, "d0", "=w")),
      v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(double, "d0", "=w")),
      v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
      v112 = COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
      v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
      v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(double, "d0", "=w")),
      v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(double, "d0", "=w")),
      v135 = COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(double, "d0", "=w")),
      v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
      v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
      v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(double, "d0", "=w")),
      v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(double, "d0", "=w")),
      v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
      v154 = COERCE_AS(__typeof__(v154), PSEUDO_REGISTER(double, "d0", "=w")),
      v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(double, "d0", "=w")),
      v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
      v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(double, "d0", "=w")),
      v162 = COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(double, "d1", "=w")),
      v163 = COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(double, "d0", "=w")),
      v165 = COERCE_AS(__typeof__(v165), PSEUDO_REGISTER(double, "d0", "=w")),
      v167 = COERCE_AS(__typeof__(v167), PSEUDO_REGISTER(double, "d0", "=w")),
      v171 = COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
      v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
      v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
      v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(double, "d0", "=w")),
      v188 = COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(double, "d0", "=w")),
      v195 = COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(double, "d0", "=w")),
      v199 = COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(double, "d0", "=w")),
      v205 = COERCE_AS(__typeof__(v205), PSEUDO_REGISTER(double, "d0", "=w")),
      v207 = COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(double, "d0", "=w")),
      v211 = COERCE_AS(__typeof__(v211), PSEUDO_REGISTER(double, "d0", "=w")),
      v218 = COERCE_AS(__typeof__(v218), PSEUDO_REGISTER(double, "d0", "=w")),
      v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(double, "d0", "=w")),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(double, "d0", "=w")),
      v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(double, "d0", "=w")),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(double, "d0", "=w")),
      v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(double, "d0", "=w")),
      v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(double, "d0", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(double, "d0", "=w")),
      v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(double, "d0", "=w")),
      v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(double, "d0", "=w")),
      v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(double, "d0", "=w")),
      v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(double, "d0", "=w")),
      v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(double, "d0", "=w")),
      v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(double, "d0", "=w")),
      v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(double, "d0", "=w")),
      v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(double, "d0", "=w")),
      v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(double, "d0", "=w")),
      v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(double, "d0", "=w")),
      v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(double, "d0", "=w")),
      v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(double, "d0", "=w")),
      v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(double, "d0", "=w"));
      v136 = v135 * 0x1.2da0000000000p+4 + 0x1.ac00000000000p-1;
      v137 = (void*)pow_plt(v134, 0x1.47ae147ae147bp-7, 0x1.4640000000000p-3),
      v102 = COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(double, "d0", "=w")),
      v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(double, "d0", "=w")),
      v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(double, "d0", "=w")),
      v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
      v112 = COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
      v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
      v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(double, "d0", "=w")),
      v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(double, "d0", "=w")),
      v135 = COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(double, "d0", "=w")),
      v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
      v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
      v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(double, "d0", "=w")),
      v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(double, "d0", "=w")),
      v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
      v154 = COERCE_AS(__typeof__(v154), PSEUDO_REGISTER(double, "d0", "=w")),
      v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(double, "d0", "=w")),
      v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
      v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(double, "d0", "=w")),
      v162 = COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(double, "d1", "=w")),
      v163 = COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(double, "d0", "=w")),
      v165 = COERCE_AS(__typeof__(v165), PSEUDO_REGISTER(double, "d0", "=w")),
      v167 = COERCE_AS(__typeof__(v167), PSEUDO_REGISTER(double, "d0", "=w")),
      v171 = COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
      v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
      v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
      v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(double, "d0", "=w")),
      v188 = COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(double, "d0", "=w")),
      v195 = COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(double, "d0", "=w")),
      v199 = COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(double, "d0", "=w")),
      v205 = COERCE_AS(__typeof__(v205), PSEUDO_REGISTER(double, "d0", "=w")),
      v207 = COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(double, "d0", "=w")),
      v211 = COERCE_AS(__typeof__(v211), PSEUDO_REGISTER(double, "d0", "=w")),
      v218 = COERCE_AS(__typeof__(v218), PSEUDO_REGISTER(double, "d0", "=w")),
      v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(double, "d0", "=w")),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(double, "d0", "=w")),
      v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(double, "d0", "=w")),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(double, "d0", "=w")),
      v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(double, "d0", "=w")),
      v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(double, "d0", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(double, "d0", "=w")),
      v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(double, "d0", "=w")),
      v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(double, "d0", "=w")),
      v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(double, "d0", "=w")),
      v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(double, "d0", "=w")),
      v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(double, "d0", "=w")),
      v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(double, "d0", "=w")),
      v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(double, "d0", "=w")),
      v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(double, "d0", "=w")),
      v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(double, "d0", "=w")),
      v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(double, "d0", "=w")),
      v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(double, "d0", "=w")),
      v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(double, "d0", "=w")),
      v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(double, "d0", "=w"));
      v139 = (void*)pow_plt(
          v137, v136 / (v138 * 0x1.2b00000000000p+4 + 0x1.0000000000000p+0),
          0x1.3b60000000000p+6),
      v102 = COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(double, "d0", "=w")),
      v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(double, "d0", "=w")),
      v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(double, "d0", "=w")),
      v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
      v112 = COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
      v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
      v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(double, "d0", "=w")),
      v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(double, "d0", "=w")),
      v135 = COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(double, "d0", "=w")),
      v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
      v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
      v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(double, "d0", "=w")),
      v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(double, "d0", "=w")),
      v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
      v154 = COERCE_AS(__typeof__(v154), PSEUDO_REGISTER(double, "d0", "=w")),
      v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(double, "d0", "=w")),
      v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
      v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(double, "d0", "=w")),
      v162 = COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(double, "d1", "=w")),
      v163 = COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(double, "d0", "=w")),
      v165 = COERCE_AS(__typeof__(v165), PSEUDO_REGISTER(double, "d0", "=w")),
      v167 = COERCE_AS(__typeof__(v167), PSEUDO_REGISTER(double, "d0", "=w")),
      v171 = COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
      v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
      v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
      v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(double, "d0", "=w")),
      v188 = COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(double, "d0", "=w")),
      v195 = COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(double, "d0", "=w")),
      v199 = COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(double, "d0", "=w")),
      v205 = COERCE_AS(__typeof__(v205), PSEUDO_REGISTER(double, "d0", "=w")),
      v207 = COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(double, "d0", "=w")),
      v211 = COERCE_AS(__typeof__(v211), PSEUDO_REGISTER(double, "d0", "=w")),
      v218 = COERCE_AS(__typeof__(v218), PSEUDO_REGISTER(double, "d0", "=w")),
      v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(double, "d0", "=w")),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(double, "d0", "=w")),
      v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(double, "d0", "=w")),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(double, "d0", "=w")),
      v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(double, "d0", "=w")),
      v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(double, "d0", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(double, "d0", "=w")),
      v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(double, "d0", "=w")),
      v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(double, "d0", "=w")),
      v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(double, "d0", "=w")),
      v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(double, "d0", "=w")),
      v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(double, "d0", "=w")),
      v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(double, "d0", "=w")),
      v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(double, "d0", "=w")),
      v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(double, "d0", "=w")),
      v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(double, "d0", "=w")),
      v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(double, "d0", "=w")),
      v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(double, "d0", "=w")),
      v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(double, "d0", "=w")),
      v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(double, "d0", "=w"));
      v141 = v140;
      v219_.v219[1] = v140;
      v142 = (void*)pow_plt(v139, 0x0.0p+0, 0x1.4640000000000p-3),
      v102 = COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(double, "d0", "=w")),
      v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(double, "d0", "=w")),
      v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(double, "d0", "=w")),
      v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
      v112 = COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
      v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
      v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(double, "d0", "=w")),
      v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(double, "d0", "=w")),
      v135 = COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(double, "d0", "=w")),
      v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
      v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
      v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(double, "d0", "=w")),
      v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(double, "d0", "=w")),
      v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
      v154 = COERCE_AS(__typeof__(v154), PSEUDO_REGISTER(double, "d0", "=w")),
      v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(double, "d0", "=w")),
      v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
      v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(double, "d0", "=w")),
      v162 = COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(double, "d1", "=w")),
      v163 = COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(double, "d0", "=w")),
      v165 = COERCE_AS(__typeof__(v165), PSEUDO_REGISTER(double, "d0", "=w")),
      v167 = COERCE_AS(__typeof__(v167), PSEUDO_REGISTER(double, "d0", "=w")),
      v171 = COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
      v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
      v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
      v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(double, "d0", "=w")),
      v188 = COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(double, "d0", "=w")),
      v195 = COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(double, "d0", "=w")),
      v199 = COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(double, "d0", "=w")),
      v205 = COERCE_AS(__typeof__(v205), PSEUDO_REGISTER(double, "d0", "=w")),
      v207 = COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(double, "d0", "=w")),
      v211 = COERCE_AS(__typeof__(v211), PSEUDO_REGISTER(double, "d0", "=w")),
      v218 = COERCE_AS(__typeof__(v218), PSEUDO_REGISTER(double, "d0", "=w")),
      v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(double, "d0", "=w")),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(double, "d0", "=w")),
      v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(double, "d0", "=w")),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(double, "d0", "=w")),
      v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(double, "d0", "=w")),
      v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(double, "d0", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(double, "d0", "=w")),
      v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(double, "d0", "=w")),
      v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(double, "d0", "=w")),
      v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(double, "d0", "=w")),
      v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(double, "d0", "=w")),
      v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(double, "d0", "=w")),
      v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(double, "d0", "=w")),
      v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(double, "d0", "=w")),
      v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(double, "d0", "=w")),
      v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(double, "d0", "=w")),
      v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(double, "d0", "=w")),
      v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(double, "d0", "=w")),
      v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(double, "d0", "=w")),
      v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(double, "d0", "=w"));
      v144 = v143 * 0x1.2da0000000000p+4 + 0x1.ac00000000000p-1;
      v145 = (void*)pow_plt(v142, 0x0.0p+0, 0x1.4640000000000p-3),
      v102 = COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(double, "d0", "=w")),
      v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(double, "d0", "=w")),
      v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(double, "d0", "=w")),
      v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
      v112 = COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
      v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
      v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(double, "d0", "=w")),
      v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(double, "d0", "=w")),
      v135 = COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(double, "d0", "=w")),
      v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
      v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
      v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(double, "d0", "=w")),
      v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(double, "d0", "=w")),
      v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
      v154 = COERCE_AS(__typeof__(v154), PSEUDO_REGISTER(double, "d0", "=w")),
      v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(double, "d0", "=w")),
      v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
      v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(double, "d0", "=w")),
      v162 = COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(double, "d1", "=w")),
      v163 = COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(double, "d0", "=w")),
      v165 = COERCE_AS(__typeof__(v165), PSEUDO_REGISTER(double, "d0", "=w")),
      v167 = COERCE_AS(__typeof__(v167), PSEUDO_REGISTER(double, "d0", "=w")),
      v171 = COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
      v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
      v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
      v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(double, "d0", "=w")),
      v188 = COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(double, "d0", "=w")),
      v195 = COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(double, "d0", "=w")),
      v199 = COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(double, "d0", "=w")),
      v205 = COERCE_AS(__typeof__(v205), PSEUDO_REGISTER(double, "d0", "=w")),
      v207 = COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(double, "d0", "=w")),
      v211 = COERCE_AS(__typeof__(v211), PSEUDO_REGISTER(double, "d0", "=w")),
      v218 = COERCE_AS(__typeof__(v218), PSEUDO_REGISTER(double, "d0", "=w")),
      v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(double, "d0", "=w")),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(double, "d0", "=w")),
      v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(double, "d0", "=w")),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(double, "d0", "=w")),
      v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(double, "d0", "=w")),
      v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(double, "d0", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(double, "d0", "=w")),
      v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(double, "d0", "=w")),
      v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(double, "d0", "=w")),
      v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(double, "d0", "=w")),
      v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(double, "d0", "=w")),
      v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(double, "d0", "=w")),
      v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(double, "d0", "=w")),
      v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(double, "d0", "=w")),
      v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(double, "d0", "=w")),
      v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(double, "d0", "=w")),
      v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(double, "d0", "=w")),
      v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(double, "d0", "=w")),
      v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(double, "d0", "=w")),
      v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(double, "d0", "=w"));
      v147 = (void*)pow_plt(
          v145, v144 / (v146 * 0x1.2b00000000000p+4 + 0x1.0000000000000p+0),
          0x1.3b60000000000p+6),
      v102 = COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(double, "d0", "=w")),
      v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(double, "d0", "=w")),
      v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(double, "d0", "=w")),
      v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
      v112 = COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
      v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
      v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(double, "d0", "=w")),
      v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(double, "d0", "=w")),
      v135 = COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(double, "d0", "=w")),
      v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
      v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
      v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(double, "d0", "=w")),
      v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(double, "d0", "=w")),
      v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
      v154 = COERCE_AS(__typeof__(v154), PSEUDO_REGISTER(double, "d0", "=w")),
      v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(double, "d0", "=w")),
      v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
      v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(double, "d0", "=w")),
      v162 = COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(double, "d1", "=w")),
      v163 = COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(double, "d0", "=w")),
      v165 = COERCE_AS(__typeof__(v165), PSEUDO_REGISTER(double, "d0", "=w")),
      v167 = COERCE_AS(__typeof__(v167), PSEUDO_REGISTER(double, "d0", "=w")),
      v171 = COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
      v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
      v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
      v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(double, "d0", "=w")),
      v188 = COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(double, "d0", "=w")),
      v195 = COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(double, "d0", "=w")),
      v199 = COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(double, "d0", "=w")),
      v205 = COERCE_AS(__typeof__(v205), PSEUDO_REGISTER(double, "d0", "=w")),
      v207 = COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(double, "d0", "=w")),
      v211 = COERCE_AS(__typeof__(v211), PSEUDO_REGISTER(double, "d0", "=w")),
      v218 = COERCE_AS(__typeof__(v218), PSEUDO_REGISTER(double, "d0", "=w")),
      v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(double, "d0", "=w")),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(double, "d0", "=w")),
      v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(double, "d0", "=w")),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(double, "d0", "=w")),
      v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(double, "d0", "=w")),
      v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(double, "d0", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(double, "d0", "=w")),
      v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(double, "d0", "=w")),
      v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(double, "d0", "=w")),
      v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(double, "d0", "=w")),
      v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(double, "d0", "=w")),
      v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(double, "d0", "=w")),
      v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(double, "d0", "=w")),
      v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(double, "d0", "=w")),
      v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(double, "d0", "=w")),
      v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(double, "d0", "=w")),
      v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(double, "d0", "=w")),
      v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(double, "d0", "=w")),
      v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(double, "d0", "=w")),
      v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(double, "d0", "=w"));
      v148 = *(unsigned __int16*)(v4 + 112);
      v150 = v149;
      v219_.v219[2] = v149;
      v151 = 0x1.0000000000000p+0;
      if (v148 != 0) {
        v151 = (double)v148 / 0x1.3880000000000p+13;
      }
      if (v151 <= 0x1.0000000000000p+0) {
        v152 = v151;
      }
      else {
        v152 = 0x1.0000000000000p+0;
      }
      v153 = (void*)pow_plt(v147, v152, 0x1.4640000000000p-3),
      v102 = COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(double, "d0", "=w")),
      v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(double, "d0", "=w")),
      v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(double, "d0", "=w")),
      v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
      v112 = COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
      v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
      v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(double, "d0", "=w")),
      v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(double, "d0", "=w")),
      v135 = COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(double, "d0", "=w")),
      v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
      v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
      v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(double, "d0", "=w")),
      v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(double, "d0", "=w")),
      v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
      v154 = COERCE_AS(__typeof__(v154), PSEUDO_REGISTER(double, "d0", "=w")),
      v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(double, "d0", "=w")),
      v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
      v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(double, "d0", "=w")),
      v162 = COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(double, "d1", "=w")),
      v163 = COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(double, "d0", "=w")),
      v165 = COERCE_AS(__typeof__(v165), PSEUDO_REGISTER(double, "d0", "=w")),
      v167 = COERCE_AS(__typeof__(v167), PSEUDO_REGISTER(double, "d0", "=w")),
      v171 = COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
      v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
      v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
      v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(double, "d0", "=w")),
      v188 = COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(double, "d0", "=w")),
      v195 = COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(double, "d0", "=w")),
      v199 = COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(double, "d0", "=w")),
      v205 = COERCE_AS(__typeof__(v205), PSEUDO_REGISTER(double, "d0", "=w")),
      v207 = COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(double, "d0", "=w")),
      v211 = COERCE_AS(__typeof__(v211), PSEUDO_REGISTER(double, "d0", "=w")),
      v218 = COERCE_AS(__typeof__(v218), PSEUDO_REGISTER(double, "d0", "=w")),
      v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(double, "d0", "=w")),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(double, "d0", "=w")),
      v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(double, "d0", "=w")),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(double, "d0", "=w")),
      v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(double, "d0", "=w")),
      v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(double, "d0", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(double, "d0", "=w")),
      v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(double, "d0", "=w")),
      v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(double, "d0", "=w")),
      v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(double, "d0", "=w")),
      v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(double, "d0", "=w")),
      v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(double, "d0", "=w")),
      v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(double, "d0", "=w")),
      v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(double, "d0", "=w")),
      v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(double, "d0", "=w")),
      v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(double, "d0", "=w")),
      v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(double, "d0", "=w")),
      v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(double, "d0", "=w")),
      v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(double, "d0", "=w")),
      v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(double, "d0", "=w"));
      v155 = v154 * 0x1.2da0000000000p+4 + 0x1.ac00000000000p-1;
      v156 = (void*)pow_plt(v153, v152, 0x1.4640000000000p-3),
      v102 = COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(double, "d0", "=w")),
      v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(double, "d0", "=w")),
      v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(double, "d0", "=w")),
      v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
      v112 = COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
      v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
      v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(double, "d0", "=w")),
      v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(double, "d0", "=w")),
      v135 = COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(double, "d0", "=w")),
      v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
      v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
      v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(double, "d0", "=w")),
      v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(double, "d0", "=w")),
      v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
      v154 = COERCE_AS(__typeof__(v154), PSEUDO_REGISTER(double, "d0", "=w")),
      v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(double, "d0", "=w")),
      v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
      v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(double, "d0", "=w")),
      v162 = COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(double, "d1", "=w")),
      v163 = COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(double, "d0", "=w")),
      v165 = COERCE_AS(__typeof__(v165), PSEUDO_REGISTER(double, "d0", "=w")),
      v167 = COERCE_AS(__typeof__(v167), PSEUDO_REGISTER(double, "d0", "=w")),
      v171 = COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
      v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
      v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
      v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(double, "d0", "=w")),
      v188 = COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(double, "d0", "=w")),
      v195 = COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(double, "d0", "=w")),
      v199 = COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(double, "d0", "=w")),
      v205 = COERCE_AS(__typeof__(v205), PSEUDO_REGISTER(double, "d0", "=w")),
      v207 = COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(double, "d0", "=w")),
      v211 = COERCE_AS(__typeof__(v211), PSEUDO_REGISTER(double, "d0", "=w")),
      v218 = COERCE_AS(__typeof__(v218), PSEUDO_REGISTER(double, "d0", "=w")),
      v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(double, "d0", "=w")),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(double, "d0", "=w")),
      v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(double, "d0", "=w")),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(double, "d0", "=w")),
      v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(double, "d0", "=w")),
      v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(double, "d0", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(double, "d0", "=w")),
      v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(double, "d0", "=w")),
      v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(double, "d0", "=w")),
      v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(double, "d0", "=w")),
      v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(double, "d0", "=w")),
      v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(double, "d0", "=w")),
      v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(double, "d0", "=w")),
      v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(double, "d0", "=w")),
      v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(double, "d0", "=w")),
      v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(double, "d0", "=w")),
      v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(double, "d0", "=w")),
      v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(double, "d0", "=w")),
      v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(double, "d0", "=w")),
      v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(double, "d0", "=w"));
      v158 = (void*)pow_plt(
          v156, v155 / (v157 * 0x1.2b00000000000p+4 + 0x1.0000000000000p+0),
          0x1.3b60000000000p+6),
      v102 = COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(double, "d0", "=w")),
      v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(double, "d0", "=w")),
      v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(double, "d0", "=w")),
      v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
      v112 = COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
      v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
      v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(double, "d0", "=w")),
      v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(double, "d0", "=w")),
      v135 = COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(double, "d0", "=w")),
      v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
      v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
      v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(double, "d0", "=w")),
      v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(double, "d0", "=w")),
      v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
      v154 = COERCE_AS(__typeof__(v154), PSEUDO_REGISTER(double, "d0", "=w")),
      v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(double, "d0", "=w")),
      v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
      v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(double, "d0", "=w")),
      v162 = COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(double, "d1", "=w")),
      v163 = COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(double, "d0", "=w")),
      v165 = COERCE_AS(__typeof__(v165), PSEUDO_REGISTER(double, "d0", "=w")),
      v167 = COERCE_AS(__typeof__(v167), PSEUDO_REGISTER(double, "d0", "=w")),
      v171 = COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
      v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
      v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
      v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(double, "d0", "=w")),
      v188 = COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(double, "d0", "=w")),
      v195 = COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(double, "d0", "=w")),
      v199 = COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(double, "d0", "=w")),
      v205 = COERCE_AS(__typeof__(v205), PSEUDO_REGISTER(double, "d0", "=w")),
      v207 = COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(double, "d0", "=w")),
      v211 = COERCE_AS(__typeof__(v211), PSEUDO_REGISTER(double, "d0", "=w")),
      v218 = COERCE_AS(__typeof__(v218), PSEUDO_REGISTER(double, "d0", "=w")),
      v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(double, "d0", "=w")),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(double, "d0", "=w")),
      v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(double, "d0", "=w")),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(double, "d0", "=w")),
      v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(double, "d0", "=w")),
      v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(double, "d0", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(double, "d0", "=w")),
      v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(double, "d0", "=w")),
      v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(double, "d0", "=w")),
      v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(double, "d0", "=w")),
      v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(double, "d0", "=w")),
      v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(double, "d0", "=w")),
      v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(double, "d0", "=w")),
      v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(double, "d0", "=w")),
      v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(double, "d0", "=w")),
      v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(double, "d0", "=w")),
      v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(double, "d0", "=w")),
      v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(double, "d0", "=w")),
      v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(double, "d0", "=w")),
      v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(double, "d0", "=w"));
      v219_.v219[9] = 0x1.9000000000000p+6;
      v219_.v219[7] = 0x1.9000000000000p+6;
      v219_.v219[8] = 0x1.3880000000000p+13;
      v219_.v219[3] = v159;
      v219_.v219[4] = v150 / v159;
      v219_.v219[5] = v141 / v159;
      v219_.v219[6] =
          v141 / v159 * 0x1.8000000000000p+0 + -0x1.0000000000000p-1;
      v160 = (void*)pow_plt(v158, 0x1.9000000000000p+6, 0x1.aaaaaaaaaaaabp-2),
      v102 = COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(double, "d0", "=w")),
      v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(double, "d0", "=w")),
      v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(double, "d0", "=w")),
      v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
      v112 = COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
      v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
      v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(double, "d0", "=w")),
      v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(double, "d0", "=w")),
      v135 = COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(double, "d0", "=w")),
      v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
      v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
      v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(double, "d0", "=w")),
      v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(double, "d0", "=w")),
      v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
      v154 = COERCE_AS(__typeof__(v154), PSEUDO_REGISTER(double, "d0", "=w")),
      v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(double, "d0", "=w")),
      v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
      v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(double, "d0", "=w")),
      v162 = COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(double, "d1", "=w")),
      v163 = COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(double, "d0", "=w")),
      v165 = COERCE_AS(__typeof__(v165), PSEUDO_REGISTER(double, "d0", "=w")),
      v167 = COERCE_AS(__typeof__(v167), PSEUDO_REGISTER(double, "d0", "=w")),
      v171 = COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
      v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
      v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
      v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(double, "d0", "=w")),
      v188 = COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(double, "d0", "=w")),
      v195 = COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(double, "d0", "=w")),
      v199 = COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(double, "d0", "=w")),
      v205 = COERCE_AS(__typeof__(v205), PSEUDO_REGISTER(double, "d0", "=w")),
      v207 = COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(double, "d0", "=w")),
      v211 = COERCE_AS(__typeof__(v211), PSEUDO_REGISTER(double, "d0", "=w")),
      v218 = COERCE_AS(__typeof__(v218), PSEUDO_REGISTER(double, "d0", "=w")),
      v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(double, "d0", "=w")),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(double, "d0", "=w")),
      v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(double, "d0", "=w")),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(double, "d0", "=w")),
      v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(double, "d0", "=w")),
      v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(double, "d0", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(double, "d0", "=w")),
      v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(double, "d0", "=w")),
      v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(double, "d0", "=w")),
      v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(double, "d0", "=w")),
      v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(double, "d0", "=w")),
      v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(double, "d0", "=w")),
      v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(double, "d0", "=w")),
      v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(double, "d0", "=w")),
      v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(double, "d0", "=w")),
      v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(double, "d0", "=w")),
      v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(double, "d0", "=w")),
      v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(double, "d0", "=w")),
      v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(double, "d0", "=w")),
      v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(double, "d0", "=w"));
      if (v161 >= 0x1.4bc6a7ef9db23p-4) {
        pow_plt(v160, (v161 + 0x1.95810624dd2f2p-4) / 0x1.195810624dd2fp+0,
                0x1.1c71c71c71c72p+1),
            v102 = COERCE_AS(__typeof__(v102),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v104 = COERCE_AS(__typeof__(v104),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v107 = COERCE_AS(__typeof__(v107),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v110 = COERCE_AS(__typeof__(v110),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v112 = COERCE_AS(__typeof__(v112),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v117 = COERCE_AS(__typeof__(v117),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v120 = COERCE_AS(__typeof__(v120),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v121 = COERCE_AS(__typeof__(v121),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v132 = COERCE_AS(__typeof__(v132),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v135 = COERCE_AS(__typeof__(v135),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v138 = COERCE_AS(__typeof__(v138),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v140 = COERCE_AS(__typeof__(v140),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v143 = COERCE_AS(__typeof__(v143),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v146 = COERCE_AS(__typeof__(v146),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v149 = COERCE_AS(__typeof__(v149),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v154 = COERCE_AS(__typeof__(v154),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v157 = COERCE_AS(__typeof__(v157),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v159 = COERCE_AS(__typeof__(v159),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v161 = COERCE_AS(__typeof__(v161),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v162 = COERCE_AS(__typeof__(v162),
                             PSEUDO_REGISTER(double, "d1", "=w")),
            v163 = COERCE_AS(__typeof__(v163),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v165 = COERCE_AS(__typeof__(v165),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v167 = COERCE_AS(__typeof__(v167),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v171 = COERCE_AS(__typeof__(v171),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v173 = COERCE_AS(__typeof__(v173),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v179 = COERCE_AS(__typeof__(v179),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v183 = COERCE_AS(__typeof__(v183),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v188 = COERCE_AS(__typeof__(v188),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v19 =
                COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(double, "d0", "=w")),
            v195 = COERCE_AS(__typeof__(v195),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v199 = COERCE_AS(__typeof__(v199),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v205 = COERCE_AS(__typeof__(v205),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v207 = COERCE_AS(__typeof__(v207),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v211 = COERCE_AS(__typeof__(v211),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v218 = COERCE_AS(__typeof__(v218),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v22 =
                COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(double, "d0", "=w")),
            v25 =
                COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(double, "d0", "=w")),
            v27 =
                COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(double, "d0", "=w")),
            v30 =
                COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(double, "d0", "=w")),
            v33 =
                COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(double, "d0", "=w")),
            v35 =
                COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(double, "d0", "=w")),
            v40 =
                COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(double, "d0", "=w")),
            v43 =
                COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(double, "d0", "=w")),
            v47 =
                COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(double, "d0", "=w")),
            v56 =
                COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(double, "d0", "=w")),
            v59 =
                COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(double, "d0", "=w")),
            v61 =
                COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(double, "d0", "=w")),
            v64 =
                COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(double, "d0", "=w")),
            v67 =
                COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(double, "d0", "=w")),
            v69 =
                COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(double, "d0", "=w")),
            v74 =
                COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(double, "d0", "=w")),
            v77 =
                COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(double, "d0", "=w")),
            v78 =
                COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(double, "d0", "=w")),
            v89 =
                COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(double, "d0", "=w")),
            v99 =
                COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(double, "d0", "=w"));
      }
      else {
        v162 = 0x1.2000000000000p+2;
        v163 = v161 / 0x1.2000000000000p+2;
      }
      v189 = (_WORD*)(a4 + 36);
      v190 = 8200;
      v191 = 0;
      v219_.v219[10] = v163;
      v219_.v220 = 0x3FFF;
      do {
        v192 = v191;
        v193 = (unsigned __int16)SdkRoutine_61cd70(
            (__int64)v219_.v219, (0x3FFF * (unsigned int)v191) >> 10, v163,
            v162),
        v102 = COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(double, "d0", "=w")),
        v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(double, "d0", "=w")),
        v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(double, "d0", "=w")),
        v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
        v112 = COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
        v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
        v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(double, "d0", "=w")),
        v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(double, "d0", "=w")),
        v135 = COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(double, "d0", "=w")),
        v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
        v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
        v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(double, "d0", "=w")),
        v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(double, "d0", "=w")),
        v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
        v154 = COERCE_AS(__typeof__(v154), PSEUDO_REGISTER(double, "d0", "=w")),
        v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(double, "d0", "=w")),
        v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
        v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(double, "d0", "=w")),
        v162 = COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(double, "d1", "=w")),
        v163 = COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(double, "d0", "=w")),
        v165 = COERCE_AS(__typeof__(v165), PSEUDO_REGISTER(double, "d0", "=w")),
        v167 = COERCE_AS(__typeof__(v167), PSEUDO_REGISTER(double, "d0", "=w")),
        v171 = COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
        v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
        v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
        v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(double, "d0", "=w")),
        v188 = COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(double, "d0", "=w")),
        v195 = COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(double, "d0", "=w")),
        v199 = COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(double, "d0", "=w")),
        v205 = COERCE_AS(__typeof__(v205), PSEUDO_REGISTER(double, "d0", "=w")),
        v207 = COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(double, "d0", "=w")),
        v211 = COERCE_AS(__typeof__(v211), PSEUDO_REGISTER(double, "d0", "=w")),
        v218 = COERCE_AS(__typeof__(v218), PSEUDO_REGISTER(double, "d0", "=w")),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(double, "d0", "=w")),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(double, "d0", "=w")),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(double, "d0", "=w")),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(double, "d0", "=w")),
        v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(double, "d0", "=w")),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(double, "d0", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(double, "d0", "=w")),
        v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(double, "d0", "=w")),
        v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(double, "d0", "=w")),
        v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(double, "d0", "=w")),
        v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(double, "d0", "=w")),
        v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(double, "d0", "=w")),
        v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(double, "d0", "=w")),
        v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(double, "d0", "=w")),
        v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(double, "d0", "=w")),
        v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(double, "d0", "=w")),
        v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(double, "d0", "=w")),
        v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(double, "d0", "=w")),
        v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(double, "d0", "=w")),
        v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(double, "d0", "=w"));
        if (v193 >= 0x3FFF) {
          LOWORD(v193) = 0x3FFF;
        }
        v194 = 4 * v193;
        *(v189 - 2) = v194;
        *(v189 - 1) = v194;
        *v189 = v194;
        v189 += 4;
        if ((unsigned int)(v192 + 1) < 0xFFFF) {
          v191 = v192 + 1;
        }
        else {
          v191 = -1;
        }
        v190 -= 8;
      } while (v190 != 0);
    }
    else {
      v88 = (void*)pow_plt(nullptr, 0x1.9000000000000p+6, 0x1.aaaaaaaaaaaabp-2),
      v102 = COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(double, "d0", "=w")),
      v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(double, "d0", "=w")),
      v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(double, "d0", "=w")),
      v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
      v112 = COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
      v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
      v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(double, "d0", "=w")),
      v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(double, "d0", "=w")),
      v135 = COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(double, "d0", "=w")),
      v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
      v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
      v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(double, "d0", "=w")),
      v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(double, "d0", "=w")),
      v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
      v154 = COERCE_AS(__typeof__(v154), PSEUDO_REGISTER(double, "d0", "=w")),
      v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(double, "d0", "=w")),
      v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
      v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(double, "d0", "=w")),
      v162 = COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(double, "d1", "=w")),
      v163 = COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(double, "d0", "=w")),
      v165 = COERCE_AS(__typeof__(v165), PSEUDO_REGISTER(double, "d0", "=w")),
      v167 = COERCE_AS(__typeof__(v167), PSEUDO_REGISTER(double, "d0", "=w")),
      v171 = COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
      v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
      v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
      v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(double, "d0", "=w")),
      v188 = COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(double, "d0", "=w")),
      v195 = COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(double, "d0", "=w")),
      v199 = COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(double, "d0", "=w")),
      v205 = COERCE_AS(__typeof__(v205), PSEUDO_REGISTER(double, "d0", "=w")),
      v207 = COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(double, "d0", "=w")),
      v211 = COERCE_AS(__typeof__(v211), PSEUDO_REGISTER(double, "d0", "=w")),
      v218 = COERCE_AS(__typeof__(v218), PSEUDO_REGISTER(double, "d0", "=w")),
      v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(double, "d0", "=w")),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(double, "d0", "=w")),
      v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(double, "d0", "=w")),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(double, "d0", "=w")),
      v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(double, "d0", "=w")),
      v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(double, "d0", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(double, "d0", "=w")),
      v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(double, "d0", "=w")),
      v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(double, "d0", "=w")),
      v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(double, "d0", "=w")),
      v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(double, "d0", "=w")),
      v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(double, "d0", "=w")),
      v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(double, "d0", "=w")),
      v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(double, "d0", "=w")),
      v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(double, "d0", "=w")),
      v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(double, "d0", "=w")),
      v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(double, "d0", "=w")),
      v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(double, "d0", "=w")),
      v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(double, "d0", "=w")),
      v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(double, "d0", "=w"));
      if (v89 >= 0x1.4bc6a7ef9db23p-4) {
        v88 = (void*)pow_plt(
            v88, (v89 + 0x1.95810624dd2f2p-4) / 0x1.195810624dd2fp+0,
            0x1.1c71c71c71c72p+1),
        v102 = COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(double, "d0", "=w")),
        v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(double, "d0", "=w")),
        v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(double, "d0", "=w")),
        v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
        v112 = COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
        v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
        v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(double, "d0", "=w")),
        v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(double, "d0", "=w")),
        v135 = COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(double, "d0", "=w")),
        v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
        v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
        v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(double, "d0", "=w")),
        v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(double, "d0", "=w")),
        v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
        v154 = COERCE_AS(__typeof__(v154), PSEUDO_REGISTER(double, "d0", "=w")),
        v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(double, "d0", "=w")),
        v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
        v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(double, "d0", "=w")),
        v162 = COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(double, "d1", "=w")),
        v163 = COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(double, "d0", "=w")),
        v165 = COERCE_AS(__typeof__(v165), PSEUDO_REGISTER(double, "d0", "=w")),
        v167 = COERCE_AS(__typeof__(v167), PSEUDO_REGISTER(double, "d0", "=w")),
        v171 = COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
        v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
        v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
        v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(double, "d0", "=w")),
        v188 = COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(double, "d0", "=w")),
        v195 = COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(double, "d0", "=w")),
        v199 = COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(double, "d0", "=w")),
        v205 = COERCE_AS(__typeof__(v205), PSEUDO_REGISTER(double, "d0", "=w")),
        v207 = COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(double, "d0", "=w")),
        v211 = COERCE_AS(__typeof__(v211), PSEUDO_REGISTER(double, "d0", "=w")),
        v218 = COERCE_AS(__typeof__(v218), PSEUDO_REGISTER(double, "d0", "=w")),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(double, "d0", "=w")),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(double, "d0", "=w")),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(double, "d0", "=w")),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(double, "d0", "=w")),
        v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(double, "d0", "=w")),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(double, "d0", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(double, "d0", "=w")),
        v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(double, "d0", "=w")),
        v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(double, "d0", "=w")),
        v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(double, "d0", "=w")),
        v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(double, "d0", "=w")),
        v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(double, "d0", "=w")),
        v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(double, "d0", "=w")),
        v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(double, "d0", "=w")),
        v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(double, "d0", "=w")),
        v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(double, "d0", "=w")),
        v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(double, "d0", "=w")),
        v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(double, "d0", "=w")),
        v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(double, "d0", "=w")),
        v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(double, "d0", "=w"));
        v90 = v167;
      }
      else {
        v90 = v89 / 0x1.2000000000000p+2;
      }
      v168 = (_WORD*)(a4 + 32);
      v169 = 8200;
      v170 = 0;
      do {
        v177 =
            (double)(unsigned __int16)(((v170 << 14) -
                                        (unsigned int)(unsigned __int16)v170) >>
                                       10) /
            0x1.fff8000000000p+13;
        if (v177 > 0x1.0000000000000p+0) {
          v177 = 0x1.0000000000000p+0;
        }
        v178 = v90 * v177;
        if (v178 >= 0x1.26e978d4fdf3bp-6) {
          v88 = (void*)pow_plt(v88, v178, 0x1.ccccccccccccdp-2),
          v102 =
              COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(double, "d0", "=w")),
          v104 =
              COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(double, "d0", "=w")),
          v107 =
              COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(double, "d0", "=w")),
          v110 =
              COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
          v112 =
              COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
          v117 =
              COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
          v120 =
              COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
          v121 =
              COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(double, "d0", "=w")),
          v132 =
              COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(double, "d0", "=w")),
          v135 =
              COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(double, "d0", "=w")),
          v138 =
              COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
          v140 =
              COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
          v143 =
              COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(double, "d0", "=w")),
          v146 =
              COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(double, "d0", "=w")),
          v149 =
              COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
          v154 =
              COERCE_AS(__typeof__(v154), PSEUDO_REGISTER(double, "d0", "=w")),
          v157 =
              COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(double, "d0", "=w")),
          v159 =
              COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
          v161 =
              COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(double, "d0", "=w")),
          v162 =
              COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(double, "d1", "=w")),
          v163 =
              COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(double, "d0", "=w")),
          v165 =
              COERCE_AS(__typeof__(v165), PSEUDO_REGISTER(double, "d0", "=w")),
          v167 =
              COERCE_AS(__typeof__(v167), PSEUDO_REGISTER(double, "d0", "=w")),
          v171 =
              COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
          v173 =
              COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
          v179 =
              COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
          v183 =
              COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(double, "d0", "=w")),
          v188 =
              COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
          v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(double, "d0", "=w")),
          v195 =
              COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(double, "d0", "=w")),
          v199 =
              COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(double, "d0", "=w")),
          v205 =
              COERCE_AS(__typeof__(v205), PSEUDO_REGISTER(double, "d0", "=w")),
          v207 =
              COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(double, "d0", "=w")),
          v211 =
              COERCE_AS(__typeof__(v211), PSEUDO_REGISTER(double, "d0", "=w")),
          v218 =
              COERCE_AS(__typeof__(v218), PSEUDO_REGISTER(double, "d0", "=w")),
          v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(double, "d0", "=w")),
          v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(double, "d0", "=w")),
          v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(double, "d0", "=w")),
          v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(double, "d0", "=w")),
          v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(double, "d0", "=w")),
          v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(double, "d0", "=w")),
          v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(double, "d0", "=w")),
          v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(double, "d0", "=w")),
          v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(double, "d0", "=w")),
          v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(double, "d0", "=w")),
          v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(double, "d0", "=w")),
          v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(double, "d0", "=w")),
          v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(double, "d0", "=w")),
          v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(double, "d0", "=w")),
          v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(double, "d0", "=w")),
          v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(double, "d0", "=w")),
          v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(double, "d0", "=w")),
          v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(double, "d0", "=w")),
          v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(double, "d0", "=w")),
          v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(double, "d0", "=w"));
          v172 = v171 * 0x1.195810624dd2fp+0 + -0x1.95810624dd2f2p-4;
        }
        else {
          v172 = v178 * 0x1.2000000000000p+2;
        }
        v88 = (void*)pow_plt(v88, v172, 0x1.3333333333333p+1),
        v102 = COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(double, "d0", "=w")),
        v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(double, "d0", "=w")),
        v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(double, "d0", "=w")),
        v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
        v112 = COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
        v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
        v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(double, "d0", "=w")),
        v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(double, "d0", "=w")),
        v135 = COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(double, "d0", "=w")),
        v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
        v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
        v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(double, "d0", "=w")),
        v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(double, "d0", "=w")),
        v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
        v154 = COERCE_AS(__typeof__(v154), PSEUDO_REGISTER(double, "d0", "=w")),
        v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(double, "d0", "=w")),
        v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
        v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(double, "d0", "=w")),
        v162 = COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(double, "d1", "=w")),
        v163 = COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(double, "d0", "=w")),
        v165 = COERCE_AS(__typeof__(v165), PSEUDO_REGISTER(double, "d0", "=w")),
        v167 = COERCE_AS(__typeof__(v167), PSEUDO_REGISTER(double, "d0", "=w")),
        v171 = COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
        v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
        v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
        v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(double, "d0", "=w")),
        v188 = COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(double, "d0", "=w")),
        v195 = COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(double, "d0", "=w")),
        v199 = COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(double, "d0", "=w")),
        v205 = COERCE_AS(__typeof__(v205), PSEUDO_REGISTER(double, "d0", "=w")),
        v207 = COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(double, "d0", "=w")),
        v211 = COERCE_AS(__typeof__(v211), PSEUDO_REGISTER(double, "d0", "=w")),
        v218 = COERCE_AS(__typeof__(v218), PSEUDO_REGISTER(double, "d0", "=w")),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(double, "d0", "=w")),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(double, "d0", "=w")),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(double, "d0", "=w")),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(double, "d0", "=w")),
        v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(double, "d0", "=w")),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(double, "d0", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(double, "d0", "=w")),
        v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(double, "d0", "=w")),
        v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(double, "d0", "=w")),
        v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(double, "d0", "=w")),
        v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(double, "d0", "=w")),
        v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(double, "d0", "=w")),
        v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(double, "d0", "=w")),
        v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(double, "d0", "=w")),
        v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(double, "d0", "=w")),
        v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(double, "d0", "=w")),
        v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(double, "d0", "=w")),
        v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(double, "d0", "=w")),
        v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(double, "d0", "=w")),
        v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(double, "d0", "=w"));
        v174 = v173 * 0x1.9000000000000p+6 / 0x1.3880000000000p+13;
        if (v174 < 0x0.0p+0) {
          v174 = 0x0.0p+0;
        }
        if (v174 > 0x1.0000000000000p+0) {
          v174 = 0x1.0000000000000p+0;
        }
        v175 = (int)(v174 * 0x1.fff8000000000p+13 + 0x1.0000000000000p-1);
        if (v175 >= 0x3FFF) {
          LOWORD(v175) = 0x3FFF;
        }
        v176 = 4 * v175;
        *v168 = v176;
        v168[1] = v176;
        v168[2] = v176;
        v168 += 4;
        if ((unsigned int)(unsigned __int16)v170 + 1 < 0xFFFF) {
          v170 = (unsigned __int16)v170 + 1;
        }
        else {
          v170 = 0xFFFF;
        }
        v169 -= 8;
      } while (v169 != 0);
    }
    return nvidia_620e80(v13 + 9032, v8, a4, 8448);
  }
  switch (a3) {
  case 7:
    v131 = (void*)pow_plt(nullptr, 0x1.9000000000000p+6, 0x1.aaaaaaaaaaaabp-2),
    v102 = COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(double, "d0", "=w")),
    v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(double, "d0", "=w")),
    v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(double, "d0", "=w")),
    v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
    v112 = COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
    v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
    v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
    v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(double, "d0", "=w")),
    v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(double, "d0", "=w")),
    v135 = COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(double, "d0", "=w")),
    v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
    v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
    v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(double, "d0", "=w")),
    v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(double, "d0", "=w")),
    v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
    v154 = COERCE_AS(__typeof__(v154), PSEUDO_REGISTER(double, "d0", "=w")),
    v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(double, "d0", "=w")),
    v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
    v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(double, "d0", "=w")),
    v162 = COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(double, "d1", "=w")),
    v163 = COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(double, "d0", "=w")),
    v165 = COERCE_AS(__typeof__(v165), PSEUDO_REGISTER(double, "d0", "=w")),
    v167 = COERCE_AS(__typeof__(v167), PSEUDO_REGISTER(double, "d0", "=w")),
    v171 = COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
    v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
    v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
    v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(double, "d0", "=w")),
    v188 = COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
    v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(double, "d0", "=w")),
    v195 = COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(double, "d0", "=w")),
    v199 = COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(double, "d0", "=w")),
    v205 = COERCE_AS(__typeof__(v205), PSEUDO_REGISTER(double, "d0", "=w")),
    v207 = COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(double, "d0", "=w")),
    v211 = COERCE_AS(__typeof__(v211), PSEUDO_REGISTER(double, "d0", "=w")),
    v218 = COERCE_AS(__typeof__(v218), PSEUDO_REGISTER(double, "d0", "=w")),
    v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(double, "d0", "=w")),
    v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(double, "d0", "=w")),
    v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(double, "d0", "=w")),
    v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(double, "d0", "=w")),
    v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(double, "d0", "=w")),
    v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(double, "d0", "=w")),
    v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(double, "d0", "=w")),
    v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(double, "d0", "=w")),
    v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(double, "d0", "=w")),
    v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(double, "d0", "=w")),
    v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(double, "d0", "=w")),
    v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(double, "d0", "=w")),
    v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(double, "d0", "=w")),
    v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(double, "d0", "=w")),
    v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(double, "d0", "=w")),
    v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(double, "d0", "=w")),
    v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(double, "d0", "=w")),
    v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(double, "d0", "=w")),
    v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(double, "d0", "=w")),
    v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(double, "d0", "=w"));
    if (v132 >= 0x1.4bc6a7ef9db23p-4) {
      v131 = (void*)pow_plt(
          v131, (v132 + 0x1.95810624dd2f2p-4) / 0x1.195810624dd2fp+0,
          0x1.1c71c71c71c72p+1),
      v102 = COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(double, "d0", "=w")),
      v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(double, "d0", "=w")),
      v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(double, "d0", "=w")),
      v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
      v112 = COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
      v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
      v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(double, "d0", "=w")),
      v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(double, "d0", "=w")),
      v135 = COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(double, "d0", "=w")),
      v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
      v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
      v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(double, "d0", "=w")),
      v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(double, "d0", "=w")),
      v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
      v154 = COERCE_AS(__typeof__(v154), PSEUDO_REGISTER(double, "d0", "=w")),
      v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(double, "d0", "=w")),
      v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
      v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(double, "d0", "=w")),
      v162 = COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(double, "d1", "=w")),
      v163 = COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(double, "d0", "=w")),
      v165 = COERCE_AS(__typeof__(v165), PSEUDO_REGISTER(double, "d0", "=w")),
      v167 = COERCE_AS(__typeof__(v167), PSEUDO_REGISTER(double, "d0", "=w")),
      v171 = COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
      v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
      v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
      v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(double, "d0", "=w")),
      v188 = COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(double, "d0", "=w")),
      v195 = COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(double, "d0", "=w")),
      v199 = COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(double, "d0", "=w")),
      v205 = COERCE_AS(__typeof__(v205), PSEUDO_REGISTER(double, "d0", "=w")),
      v207 = COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(double, "d0", "=w")),
      v211 = COERCE_AS(__typeof__(v211), PSEUDO_REGISTER(double, "d0", "=w")),
      v218 = COERCE_AS(__typeof__(v218), PSEUDO_REGISTER(double, "d0", "=w")),
      v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(double, "d0", "=w")),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(double, "d0", "=w")),
      v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(double, "d0", "=w")),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(double, "d0", "=w")),
      v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(double, "d0", "=w")),
      v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(double, "d0", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(double, "d0", "=w")),
      v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(double, "d0", "=w")),
      v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(double, "d0", "=w")),
      v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(double, "d0", "=w")),
      v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(double, "d0", "=w")),
      v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(double, "d0", "=w")),
      v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(double, "d0", "=w")),
      v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(double, "d0", "=w")),
      v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(double, "d0", "=w")),
      v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(double, "d0", "=w")),
      v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(double, "d0", "=w")),
      v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(double, "d0", "=w")),
      v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(double, "d0", "=w")),
      v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(double, "d0", "=w"));
      v133 = v179;
    }
    else {
      v133 = v132 / 0x1.2000000000000p+2;
    }
    v180 = (_WORD*)(a4 + 32);
    v181 = 8200;
    v182 = 0;
    do {
      v187 =
          (double)(unsigned __int16)(((v182 << 14) -
                                      (unsigned int)(unsigned __int16)v182) >>
                                     10) /
          0x1.fff8000000000p+13;
      if (v187 > 0x1.0000000000000p+0) {
        v187 = 0x1.0000000000000p+0;
      }
      v131 = (void*)pow_plt(v131,
                            v187 * 0x1.3880000000000p+13 / 0x1.9000000000000p+6,
                            0x1.aaaaaaaaaaaabp-2),
      v102 = COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(double, "d0", "=w")),
      v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(double, "d0", "=w")),
      v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(double, "d0", "=w")),
      v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
      v112 = COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
      v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
      v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(double, "d0", "=w")),
      v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(double, "d0", "=w")),
      v135 = COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(double, "d0", "=w")),
      v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
      v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
      v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(double, "d0", "=w")),
      v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(double, "d0", "=w")),
      v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
      v154 = COERCE_AS(__typeof__(v154), PSEUDO_REGISTER(double, "d0", "=w")),
      v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(double, "d0", "=w")),
      v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
      v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(double, "d0", "=w")),
      v162 = COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(double, "d1", "=w")),
      v163 = COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(double, "d0", "=w")),
      v165 = COERCE_AS(__typeof__(v165), PSEUDO_REGISTER(double, "d0", "=w")),
      v167 = COERCE_AS(__typeof__(v167), PSEUDO_REGISTER(double, "d0", "=w")),
      v171 = COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
      v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
      v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
      v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(double, "d0", "=w")),
      v188 = COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(double, "d0", "=w")),
      v195 = COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(double, "d0", "=w")),
      v199 = COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(double, "d0", "=w")),
      v205 = COERCE_AS(__typeof__(v205), PSEUDO_REGISTER(double, "d0", "=w")),
      v207 = COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(double, "d0", "=w")),
      v211 = COERCE_AS(__typeof__(v211), PSEUDO_REGISTER(double, "d0", "=w")),
      v218 = COERCE_AS(__typeof__(v218), PSEUDO_REGISTER(double, "d0", "=w")),
      v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(double, "d0", "=w")),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(double, "d0", "=w")),
      v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(double, "d0", "=w")),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(double, "d0", "=w")),
      v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(double, "d0", "=w")),
      v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(double, "d0", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(double, "d0", "=w")),
      v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(double, "d0", "=w")),
      v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(double, "d0", "=w")),
      v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(double, "d0", "=w")),
      v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(double, "d0", "=w")),
      v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(double, "d0", "=w")),
      v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(double, "d0", "=w")),
      v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(double, "d0", "=w")),
      v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(double, "d0", "=w")),
      v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(double, "d0", "=w")),
      v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(double, "d0", "=w")),
      v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(double, "d0", "=w")),
      v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(double, "d0", "=w")),
      v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(double, "d0", "=w"));
      if (v188 >= 0x1.4bc6a7ef9db23p-4) {
        v131 = (void*)pow_plt(
            v131, (v188 + 0x1.95810624dd2f2p-4) / 0x1.195810624dd2fp+0,
            0x1.1c71c71c71c72p+1),
        v102 = COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(double, "d0", "=w")),
        v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(double, "d0", "=w")),
        v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(double, "d0", "=w")),
        v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
        v112 = COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
        v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
        v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(double, "d0", "=w")),
        v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(double, "d0", "=w")),
        v135 = COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(double, "d0", "=w")),
        v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
        v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
        v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(double, "d0", "=w")),
        v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(double, "d0", "=w")),
        v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
        v154 = COERCE_AS(__typeof__(v154), PSEUDO_REGISTER(double, "d0", "=w")),
        v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(double, "d0", "=w")),
        v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
        v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(double, "d0", "=w")),
        v162 = COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(double, "d1", "=w")),
        v163 = COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(double, "d0", "=w")),
        v165 = COERCE_AS(__typeof__(v165), PSEUDO_REGISTER(double, "d0", "=w")),
        v167 = COERCE_AS(__typeof__(v167), PSEUDO_REGISTER(double, "d0", "=w")),
        v171 = COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
        v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
        v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
        v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(double, "d0", "=w")),
        v188 = COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(double, "d0", "=w")),
        v195 = COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(double, "d0", "=w")),
        v199 = COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(double, "d0", "=w")),
        v205 = COERCE_AS(__typeof__(v205), PSEUDO_REGISTER(double, "d0", "=w")),
        v207 = COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(double, "d0", "=w")),
        v211 = COERCE_AS(__typeof__(v211), PSEUDO_REGISTER(double, "d0", "=w")),
        v218 = COERCE_AS(__typeof__(v218), PSEUDO_REGISTER(double, "d0", "=w")),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(double, "d0", "=w")),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(double, "d0", "=w")),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(double, "d0", "=w")),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(double, "d0", "=w")),
        v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(double, "d0", "=w")),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(double, "d0", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(double, "d0", "=w")),
        v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(double, "d0", "=w")),
        v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(double, "d0", "=w")),
        v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(double, "d0", "=w")),
        v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(double, "d0", "=w")),
        v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(double, "d0", "=w")),
        v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(double, "d0", "=w")),
        v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(double, "d0", "=w")),
        v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(double, "d0", "=w")),
        v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(double, "d0", "=w")),
        v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(double, "d0", "=w")),
        v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(double, "d0", "=w")),
        v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(double, "d0", "=w")),
        v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(double, "d0", "=w"));
      }
      else {
        v183 = v188 / 0x1.2000000000000p+2;
      }
      v184 = v183 / v133;
      if (v184 < 0x0.0p+0) {
        v184 = 0x0.0p+0;
      }
      if (v184 > 0x1.0000000000000p+0) {
        v184 = 0x1.0000000000000p+0;
      }
      v185 = (int)(v184 * 0x1.fff8000000000p+13 + 0x1.0000000000000p-1);
      if (v185 >= 0x3FFF) {
        LOWORD(v185) = 0x3FFF;
      }
      v186 = 4 * v185;
      *v180 = v186;
      v180[1] = v186;
      v180[2] = v186;
      v180 += 4;
      if ((unsigned int)(unsigned __int16)v182 + 1 < 0xFFFF) {
        v182 = (unsigned __int16)v182 + 1;
      }
      else {
        v182 = 0xFFFF;
      }
      v181 -= 8;
    } while (v181 != 0);
    return nvidia_620e80(v13 + 9032, v8, a4, 8448);
  case 8:
    v164 = (void*)pow_plt(nullptr, 0x1.f400000000000p+6, 0x1.aaaaaaaaaaaabp-2),
    v102 = COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(double, "d0", "=w")),
    v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(double, "d0", "=w")),
    v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(double, "d0", "=w")),
    v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
    v112 = COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
    v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
    v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
    v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(double, "d0", "=w")),
    v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(double, "d0", "=w")),
    v135 = COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(double, "d0", "=w")),
    v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
    v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
    v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(double, "d0", "=w")),
    v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(double, "d0", "=w")),
    v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
    v154 = COERCE_AS(__typeof__(v154), PSEUDO_REGISTER(double, "d0", "=w")),
    v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(double, "d0", "=w")),
    v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
    v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(double, "d0", "=w")),
    v162 = COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(double, "d1", "=w")),
    v163 = COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(double, "d0", "=w")),
    v165 = COERCE_AS(__typeof__(v165), PSEUDO_REGISTER(double, "d0", "=w")),
    v167 = COERCE_AS(__typeof__(v167), PSEUDO_REGISTER(double, "d0", "=w")),
    v171 = COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
    v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
    v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
    v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(double, "d0", "=w")),
    v188 = COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
    v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(double, "d0", "=w")),
    v195 = COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(double, "d0", "=w")),
    v199 = COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(double, "d0", "=w")),
    v205 = COERCE_AS(__typeof__(v205), PSEUDO_REGISTER(double, "d0", "=w")),
    v207 = COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(double, "d0", "=w")),
    v211 = COERCE_AS(__typeof__(v211), PSEUDO_REGISTER(double, "d0", "=w")),
    v218 = COERCE_AS(__typeof__(v218), PSEUDO_REGISTER(double, "d0", "=w")),
    v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(double, "d0", "=w")),
    v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(double, "d0", "=w")),
    v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(double, "d0", "=w")),
    v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(double, "d0", "=w")),
    v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(double, "d0", "=w")),
    v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(double, "d0", "=w")),
    v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(double, "d0", "=w")),
    v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(double, "d0", "=w")),
    v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(double, "d0", "=w")),
    v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(double, "d0", "=w")),
    v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(double, "d0", "=w")),
    v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(double, "d0", "=w")),
    v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(double, "d0", "=w")),
    v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(double, "d0", "=w")),
    v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(double, "d0", "=w")),
    v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(double, "d0", "=w")),
    v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(double, "d0", "=w")),
    v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(double, "d0", "=w")),
    v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(double, "d0", "=w")),
    v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(double, "d0", "=w"));
    if (v165 >= 0x1.4bc6a7ef9db23p-4) {
      v164 = (void*)pow_plt(
          v164, (v165 + 0x1.95810624dd2f2p-4) / 0x1.195810624dd2fp+0,
          0x1.1c71c71c71c72p+1),
      v102 = COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(double, "d0", "=w")),
      v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(double, "d0", "=w")),
      v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(double, "d0", "=w")),
      v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
      v112 = COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
      v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
      v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(double, "d0", "=w")),
      v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(double, "d0", "=w")),
      v135 = COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(double, "d0", "=w")),
      v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
      v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
      v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(double, "d0", "=w")),
      v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(double, "d0", "=w")),
      v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
      v154 = COERCE_AS(__typeof__(v154), PSEUDO_REGISTER(double, "d0", "=w")),
      v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(double, "d0", "=w")),
      v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
      v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(double, "d0", "=w")),
      v162 = COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(double, "d1", "=w")),
      v163 = COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(double, "d0", "=w")),
      v165 = COERCE_AS(__typeof__(v165), PSEUDO_REGISTER(double, "d0", "=w")),
      v167 = COERCE_AS(__typeof__(v167), PSEUDO_REGISTER(double, "d0", "=w")),
      v171 = COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
      v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
      v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
      v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(double, "d0", "=w")),
      v188 = COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(double, "d0", "=w")),
      v195 = COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(double, "d0", "=w")),
      v199 = COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(double, "d0", "=w")),
      v205 = COERCE_AS(__typeof__(v205), PSEUDO_REGISTER(double, "d0", "=w")),
      v207 = COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(double, "d0", "=w")),
      v211 = COERCE_AS(__typeof__(v211), PSEUDO_REGISTER(double, "d0", "=w")),
      v218 = COERCE_AS(__typeof__(v218), PSEUDO_REGISTER(double, "d0", "=w")),
      v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(double, "d0", "=w")),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(double, "d0", "=w")),
      v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(double, "d0", "=w")),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(double, "d0", "=w")),
      v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(double, "d0", "=w")),
      v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(double, "d0", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(double, "d0", "=w")),
      v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(double, "d0", "=w")),
      v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(double, "d0", "=w")),
      v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(double, "d0", "=w")),
      v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(double, "d0", "=w")),
      v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(double, "d0", "=w")),
      v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(double, "d0", "=w")),
      v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(double, "d0", "=w")),
      v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(double, "d0", "=w")),
      v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(double, "d0", "=w")),
      v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(double, "d0", "=w")),
      v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(double, "d0", "=w")),
      v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(double, "d0", "=w")),
      v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(double, "d0", "=w"));
      v166 = v207;
    }
    else {
      v166 = v165 / 0x1.2000000000000p+2;
    }
    v208 = (_WORD*)(a4 + 32);
    v209 = 8200;
    v210 = 0;
    while (1) {
      v215 =
          (double)(unsigned __int16)(((v210 << 14) -
                                      (unsigned int)(unsigned __int16)v210) >>
                                     10) /
          0x1.fff8000000000p+13;
      if (v215 > 0x1.0000000000000p+0) {
        v215 = 0x1.0000000000000p+0;
      }
      v216 = v166 * v215;
      if (v216 >= 0x1.26e978d4fdf3bp-6) {
        v164 = (void*)pow_plt(v164, v216, 0x1.ccccccccccccdp-2),
        v102 = COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(double, "d0", "=w")),
        v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(double, "d0", "=w")),
        v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(double, "d0", "=w")),
        v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
        v112 = COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
        v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
        v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(double, "d0", "=w")),
        v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(double, "d0", "=w")),
        v135 = COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(double, "d0", "=w")),
        v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
        v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
        v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(double, "d0", "=w")),
        v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(double, "d0", "=w")),
        v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
        v154 = COERCE_AS(__typeof__(v154), PSEUDO_REGISTER(double, "d0", "=w")),
        v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(double, "d0", "=w")),
        v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
        v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(double, "d0", "=w")),
        v162 = COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(double, "d1", "=w")),
        v163 = COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(double, "d0", "=w")),
        v165 = COERCE_AS(__typeof__(v165), PSEUDO_REGISTER(double, "d0", "=w")),
        v167 = COERCE_AS(__typeof__(v167), PSEUDO_REGISTER(double, "d0", "=w")),
        v171 = COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
        v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
        v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
        v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(double, "d0", "=w")),
        v188 = COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(double, "d0", "=w")),
        v195 = COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(double, "d0", "=w")),
        v199 = COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(double, "d0", "=w")),
        v205 = COERCE_AS(__typeof__(v205), PSEUDO_REGISTER(double, "d0", "=w")),
        v207 = COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(double, "d0", "=w")),
        v211 = COERCE_AS(__typeof__(v211), PSEUDO_REGISTER(double, "d0", "=w")),
        v218 = COERCE_AS(__typeof__(v218), PSEUDO_REGISTER(double, "d0", "=w")),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(double, "d0", "=w")),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(double, "d0", "=w")),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(double, "d0", "=w")),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(double, "d0", "=w")),
        v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(double, "d0", "=w")),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(double, "d0", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(double, "d0", "=w")),
        v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(double, "d0", "=w")),
        v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(double, "d0", "=w")),
        v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(double, "d0", "=w")),
        v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(double, "d0", "=w")),
        v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(double, "d0", "=w")),
        v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(double, "d0", "=w")),
        v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(double, "d0", "=w")),
        v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(double, "d0", "=w")),
        v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(double, "d0", "=w")),
        v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(double, "d0", "=w")),
        v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(double, "d0", "=w")),
        v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(double, "d0", "=w")),
        v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(double, "d0", "=w"));
        v217 = v218 * 0x1.195810624dd2fp+0 + -0x1.95810624dd2f2p-4;
        if (v217 <= 0x1.4b5dcc63f1412p-5) {
        LABEL_181:
          v211 = v217 / 0x1.9d70a3d70a3d7p+3;
          goto LABEL_165;
        }
      }
      else {
        v217 = v216 * 0x1.2000000000000p+2;
        if (v217 <= 0x1.4b5dcc63f1412p-5) {
          goto LABEL_181;
        }
      }
      v164 = (void*)pow_plt(
          v164, (v217 + 0x1.c28f5c28f5c29p-5) / 0x1.0e147ae147ae1p+0,
          0x1.3333333333333p+1),
      v102 = COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(double, "d0", "=w")),
      v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(double, "d0", "=w")),
      v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(double, "d0", "=w")),
      v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
      v112 = COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
      v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
      v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(double, "d0", "=w")),
      v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(double, "d0", "=w")),
      v135 = COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(double, "d0", "=w")),
      v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
      v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
      v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(double, "d0", "=w")),
      v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(double, "d0", "=w")),
      v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
      v154 = COERCE_AS(__typeof__(v154), PSEUDO_REGISTER(double, "d0", "=w")),
      v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(double, "d0", "=w")),
      v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
      v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(double, "d0", "=w")),
      v162 = COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(double, "d1", "=w")),
      v163 = COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(double, "d0", "=w")),
      v165 = COERCE_AS(__typeof__(v165), PSEUDO_REGISTER(double, "d0", "=w")),
      v167 = COERCE_AS(__typeof__(v167), PSEUDO_REGISTER(double, "d0", "=w")),
      v171 = COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
      v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
      v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
      v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(double, "d0", "=w")),
      v188 = COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(double, "d0", "=w")),
      v195 = COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(double, "d0", "=w")),
      v199 = COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(double, "d0", "=w")),
      v205 = COERCE_AS(__typeof__(v205), PSEUDO_REGISTER(double, "d0", "=w")),
      v207 = COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(double, "d0", "=w")),
      v211 = COERCE_AS(__typeof__(v211), PSEUDO_REGISTER(double, "d0", "=w")),
      v218 = COERCE_AS(__typeof__(v218), PSEUDO_REGISTER(double, "d0", "=w")),
      v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(double, "d0", "=w")),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(double, "d0", "=w")),
      v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(double, "d0", "=w")),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(double, "d0", "=w")),
      v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(double, "d0", "=w")),
      v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(double, "d0", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(double, "d0", "=w")),
      v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(double, "d0", "=w")),
      v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(double, "d0", "=w")),
      v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(double, "d0", "=w")),
      v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(double, "d0", "=w")),
      v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(double, "d0", "=w")),
      v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(double, "d0", "=w")),
      v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(double, "d0", "=w")),
      v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(double, "d0", "=w")),
      v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(double, "d0", "=w")),
      v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(double, "d0", "=w")),
      v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(double, "d0", "=w")),
      v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(double, "d0", "=w")),
      v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(double, "d0", "=w"));
    LABEL_165:
      v212 = v211 * 0x1.4000000000000p+6 / 0x1.3880000000000p+13;
      if (v212 < 0x0.0p+0) {
        v212 = 0x0.0p+0;
      }
      if (v212 > 0x1.0000000000000p+0) {
        v212 = 0x1.0000000000000p+0;
      }
      v213 = (int)(v212 * 0x1.fff8000000000p+13 + 0x1.0000000000000p-1);
      if (v213 >= 0x3FFF) {
        LOWORD(v213) = 0x3FFF;
      }
      v214 = 4 * v213;
      *v208 = v214;
      v208[1] = v214;
      v208[2] = v214;
      v208 += 4;
      if ((unsigned int)(unsigned __int16)v210 + 1 < 0xFFFF) {
        v210 = (unsigned __int16)v210 + 1;
      }
      else {
        v210 = 0xFFFF;
      }
      v209 -= 8;
      if (v209 == 0) {
        return nvidia_620e80(v13 + 9032, v8, a4, 8448);
      }
    }
  case 9:
    v18 = (void*)pow_plt(nullptr, 0x1.f400000000000p+6, 0x1.aaaaaaaaaaaabp-2),
    v102 = COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(double, "d0", "=w")),
    v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(double, "d0", "=w")),
    v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(double, "d0", "=w")),
    v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
    v112 = COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
    v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
    v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
    v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(double, "d0", "=w")),
    v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(double, "d0", "=w")),
    v135 = COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(double, "d0", "=w")),
    v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
    v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
    v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(double, "d0", "=w")),
    v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(double, "d0", "=w")),
    v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
    v154 = COERCE_AS(__typeof__(v154), PSEUDO_REGISTER(double, "d0", "=w")),
    v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(double, "d0", "=w")),
    v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
    v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(double, "d0", "=w")),
    v162 = COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(double, "d1", "=w")),
    v163 = COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(double, "d0", "=w")),
    v165 = COERCE_AS(__typeof__(v165), PSEUDO_REGISTER(double, "d0", "=w")),
    v167 = COERCE_AS(__typeof__(v167), PSEUDO_REGISTER(double, "d0", "=w")),
    v171 = COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
    v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
    v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
    v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(double, "d0", "=w")),
    v188 = COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
    v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(double, "d0", "=w")),
    v195 = COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(double, "d0", "=w")),
    v199 = COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(double, "d0", "=w")),
    v205 = COERCE_AS(__typeof__(v205), PSEUDO_REGISTER(double, "d0", "=w")),
    v207 = COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(double, "d0", "=w")),
    v211 = COERCE_AS(__typeof__(v211), PSEUDO_REGISTER(double, "d0", "=w")),
    v218 = COERCE_AS(__typeof__(v218), PSEUDO_REGISTER(double, "d0", "=w")),
    v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(double, "d0", "=w")),
    v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(double, "d0", "=w")),
    v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(double, "d0", "=w")),
    v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(double, "d0", "=w")),
    v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(double, "d0", "=w")),
    v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(double, "d0", "=w")),
    v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(double, "d0", "=w")),
    v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(double, "d0", "=w")),
    v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(double, "d0", "=w")),
    v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(double, "d0", "=w")),
    v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(double, "d0", "=w")),
    v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(double, "d0", "=w")),
    v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(double, "d0", "=w")),
    v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(double, "d0", "=w")),
    v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(double, "d0", "=w")),
    v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(double, "d0", "=w")),
    v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(double, "d0", "=w")),
    v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(double, "d0", "=w")),
    v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(double, "d0", "=w")),
    v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(double, "d0", "=w"));
    if (v19 >= 0x1.4bc6a7ef9db23p-4) {
      v18 = (void*)pow_plt(v18,
                           (v19 + 0x1.95810624dd2f2p-4) / 0x1.195810624dd2fp+0,
                           0x1.1c71c71c71c72p+1),
      v102 = COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(double, "d0", "=w")),
      v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(double, "d0", "=w")),
      v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(double, "d0", "=w")),
      v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
      v112 = COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
      v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
      v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(double, "d0", "=w")),
      v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(double, "d0", "=w")),
      v135 = COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(double, "d0", "=w")),
      v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
      v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
      v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(double, "d0", "=w")),
      v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(double, "d0", "=w")),
      v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
      v154 = COERCE_AS(__typeof__(v154), PSEUDO_REGISTER(double, "d0", "=w")),
      v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(double, "d0", "=w")),
      v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
      v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(double, "d0", "=w")),
      v162 = COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(double, "d1", "=w")),
      v163 = COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(double, "d0", "=w")),
      v165 = COERCE_AS(__typeof__(v165), PSEUDO_REGISTER(double, "d0", "=w")),
      v167 = COERCE_AS(__typeof__(v167), PSEUDO_REGISTER(double, "d0", "=w")),
      v171 = COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
      v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
      v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
      v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(double, "d0", "=w")),
      v188 = COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(double, "d0", "=w")),
      v195 = COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(double, "d0", "=w")),
      v199 = COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(double, "d0", "=w")),
      v205 = COERCE_AS(__typeof__(v205), PSEUDO_REGISTER(double, "d0", "=w")),
      v207 = COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(double, "d0", "=w")),
      v211 = COERCE_AS(__typeof__(v211), PSEUDO_REGISTER(double, "d0", "=w")),
      v218 = COERCE_AS(__typeof__(v218), PSEUDO_REGISTER(double, "d0", "=w")),
      v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(double, "d0", "=w")),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(double, "d0", "=w")),
      v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(double, "d0", "=w")),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(double, "d0", "=w")),
      v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(double, "d0", "=w")),
      v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(double, "d0", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(double, "d0", "=w")),
      v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(double, "d0", "=w")),
      v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(double, "d0", "=w")),
      v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(double, "d0", "=w")),
      v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(double, "d0", "=w")),
      v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(double, "d0", "=w")),
      v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(double, "d0", "=w")),
      v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(double, "d0", "=w")),
      v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(double, "d0", "=w")),
      v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(double, "d0", "=w")),
      v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(double, "d0", "=w")),
      v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(double, "d0", "=w")),
      v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(double, "d0", "=w")),
      v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(double, "d0", "=w"));
      v20 = v195;
    }
    else {
      v20 = v19 / 0x1.2000000000000p+2;
    }
    v196 = (_WORD*)(a4 + 32);
    v197 = 8200;
    v198 = 0;
    do {
      v203 =
          (double)(unsigned __int16)(((v198 << 14) -
                                      (unsigned int)(unsigned __int16)v198) >>
                                     10) /
          0x1.fff8000000000p+13;
      if (v203 > 0x1.0000000000000p+0) {
        v203 = 0x1.0000000000000p+0;
      }
      v204 = v203 * 0x1.3880000000000p+13 / 0x1.4000000000000p+6;
      if (v204 <= 0x1.9a5c37387b719p-9) {
        v206 = v204 * 0x1.9d70a3d70a3d7p+3;
        if (v206 < 0x1.4bc6a7ef9db23p-4) {
        LABEL_161:
          v199 = v206 / 0x1.2000000000000p+2;
          goto LABEL_145;
        }
      }
      else {
        v18 = (void*)pow_plt(v18, v204, 0x1.aaaaaaaaaaaabp-2),
        v102 = COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(double, "d0", "=w")),
        v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(double, "d0", "=w")),
        v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(double, "d0", "=w")),
        v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
        v112 = COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
        v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
        v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(double, "d0", "=w")),
        v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(double, "d0", "=w")),
        v135 = COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(double, "d0", "=w")),
        v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
        v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
        v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(double, "d0", "=w")),
        v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(double, "d0", "=w")),
        v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
        v154 = COERCE_AS(__typeof__(v154), PSEUDO_REGISTER(double, "d0", "=w")),
        v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(double, "d0", "=w")),
        v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
        v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(double, "d0", "=w")),
        v162 = COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(double, "d1", "=w")),
        v163 = COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(double, "d0", "=w")),
        v165 = COERCE_AS(__typeof__(v165), PSEUDO_REGISTER(double, "d0", "=w")),
        v167 = COERCE_AS(__typeof__(v167), PSEUDO_REGISTER(double, "d0", "=w")),
        v171 = COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
        v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
        v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
        v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(double, "d0", "=w")),
        v188 = COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(double, "d0", "=w")),
        v195 = COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(double, "d0", "=w")),
        v199 = COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(double, "d0", "=w")),
        v205 = COERCE_AS(__typeof__(v205), PSEUDO_REGISTER(double, "d0", "=w")),
        v207 = COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(double, "d0", "=w")),
        v211 = COERCE_AS(__typeof__(v211), PSEUDO_REGISTER(double, "d0", "=w")),
        v218 = COERCE_AS(__typeof__(v218), PSEUDO_REGISTER(double, "d0", "=w")),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(double, "d0", "=w")),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(double, "d0", "=w")),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(double, "d0", "=w")),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(double, "d0", "=w")),
        v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(double, "d0", "=w")),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(double, "d0", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(double, "d0", "=w")),
        v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(double, "d0", "=w")),
        v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(double, "d0", "=w")),
        v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(double, "d0", "=w")),
        v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(double, "d0", "=w")),
        v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(double, "d0", "=w")),
        v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(double, "d0", "=w")),
        v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(double, "d0", "=w")),
        v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(double, "d0", "=w")),
        v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(double, "d0", "=w")),
        v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(double, "d0", "=w")),
        v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(double, "d0", "=w")),
        v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(double, "d0", "=w")),
        v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(double, "d0", "=w"));
        v206 = v205 * 0x1.0e147ae147ae1p+0 + -0x1.c28f5c28f5c29p-5;
        if (v206 < 0x1.4bc6a7ef9db23p-4) {
          goto LABEL_161;
        }
      }
      v18 = (void*)pow_plt(v18,
                           (v206 + 0x1.95810624dd2f2p-4) / 0x1.195810624dd2fp+0,
                           0x1.1c71c71c71c72p+1),
      v102 = COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(double, "d0", "=w")),
      v104 = COERCE_AS(__typeof__(v104), PSEUDO_REGISTER(double, "d0", "=w")),
      v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(double, "d0", "=w")),
      v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w")),
      v112 = COERCE_AS(__typeof__(v112), PSEUDO_REGISTER(double, "d0", "=w")),
      v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(double, "d0", "=w")),
      v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(double, "d0", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(double, "d0", "=w")),
      v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(double, "d0", "=w")),
      v135 = COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(double, "d0", "=w")),
      v138 = COERCE_AS(__typeof__(v138), PSEUDO_REGISTER(double, "d0", "=w")),
      v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(double, "d0", "=w")),
      v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(double, "d0", "=w")),
      v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(double, "d0", "=w")),
      v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(double, "d0", "=w")),
      v154 = COERCE_AS(__typeof__(v154), PSEUDO_REGISTER(double, "d0", "=w")),
      v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(double, "d0", "=w")),
      v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(double, "d0", "=w")),
      v161 = COERCE_AS(__typeof__(v161), PSEUDO_REGISTER(double, "d0", "=w")),
      v162 = COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(double, "d1", "=w")),
      v163 = COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(double, "d0", "=w")),
      v165 = COERCE_AS(__typeof__(v165), PSEUDO_REGISTER(double, "d0", "=w")),
      v167 = COERCE_AS(__typeof__(v167), PSEUDO_REGISTER(double, "d0", "=w")),
      v171 = COERCE_AS(__typeof__(v171), PSEUDO_REGISTER(double, "d0", "=w")),
      v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
      v179 = COERCE_AS(__typeof__(v179), PSEUDO_REGISTER(double, "d0", "=w")),
      v183 = COERCE_AS(__typeof__(v183), PSEUDO_REGISTER(double, "d0", "=w")),
      v188 = COERCE_AS(__typeof__(v188), PSEUDO_REGISTER(double, "d0", "=w")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(double, "d0", "=w")),
      v195 = COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(double, "d0", "=w")),
      v199 = COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(double, "d0", "=w")),
      v205 = COERCE_AS(__typeof__(v205), PSEUDO_REGISTER(double, "d0", "=w")),
      v207 = COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(double, "d0", "=w")),
      v211 = COERCE_AS(__typeof__(v211), PSEUDO_REGISTER(double, "d0", "=w")),
      v218 = COERCE_AS(__typeof__(v218), PSEUDO_REGISTER(double, "d0", "=w")),
      v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(double, "d0", "=w")),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(double, "d0", "=w")),
      v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(double, "d0", "=w")),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(double, "d0", "=w")),
      v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(double, "d0", "=w")),
      v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(double, "d0", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(double, "d0", "=w")),
      v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(double, "d0", "=w")),
      v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(double, "d0", "=w")),
      v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(double, "d0", "=w")),
      v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(double, "d0", "=w")),
      v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(double, "d0", "=w")),
      v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(double, "d0", "=w")),
      v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(double, "d0", "=w")),
      v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(double, "d0", "=w")),
      v74 = COERCE_AS(__typeof__(v74), PSEUDO_REGISTER(double, "d0", "=w")),
      v77 = COERCE_AS(__typeof__(v77), PSEUDO_REGISTER(double, "d0", "=w")),
      v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(double, "d0", "=w")),
      v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(double, "d0", "=w")),
      v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(double, "d0", "=w"));
    LABEL_145:
      v200 = v199 / v20;
      if (v200 < 0x0.0p+0) {
        v200 = 0x0.0p+0;
      }
      if (v200 > 0x1.0000000000000p+0) {
        v200 = 0x1.0000000000000p+0;
      }
      v201 = (int)(v200 * 0x1.fff8000000000p+13 + 0x1.0000000000000p-1);
      if (v201 >= 0x3FFF) {
        LOWORD(v201) = 0x3FFF;
      }
      v202 = 4 * v201;
      *v196 = v202;
      v196[1] = v202;
      v196[2] = v202;
      v196 += 4;
      if ((unsigned int)(unsigned __int16)v198 + 1 < 0xFFFF) {
        v198 = (unsigned __int16)v198 + 1;
      }
      else {
        v198 = 0xFFFF;
      }
      v197 -= 8;
    } while (v197 != 0);
    break;
  default:
    break;
  }
  return nvidia_620e80(v13 + 9032, v8, a4, 8448);
}

__attribute__((swiftcall)) void nvidia_61cee0(PSEUDO_X8 x8_, _DWORD* result)
{
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  int v2;
  int v3;
  bool v4;
  int v5;
  int v6;
  int v7;

  v2 = result[30];
  if (v2 > 2) {
    if (v2 == 4) {
      v2 = 3;
      v3 = result[31];
      v4 = (unsigned int)v3 >= 2;
      if (v3 <= 2) {
        goto LABEL_9;
      }
      goto LABEL_14;
    }
    if (v2 != 3) {
    LABEL_22:
      *(_BYTE*)a2 = 0;
      *(_DWORD*)(a2 + 4) = 11;
      {
        result;
        return;
      }
    }
    v2 = 2;
  }
  else if ((unsigned int)v2 >= 2) {
    if (v2 == 2) {
      *(_BYTE*)a2 = 0;
      *(_DWORD*)(a2 + 4) = 2;
      {
        result;
        return;
      }
    }
    goto LABEL_22;
  }
  v3 = result[31];
  v4 = (unsigned int)v3 >= 2;
  if (v3 <= 2) {
  LABEL_9:
    if (!v4) {
    LABEL_17:
      v5 = result[32];
      v6 = 2;
      if (v5 > 1) {
        goto LABEL_18;
      }
      goto LABEL_24;
    }
    if (v3 == 2) {
      *(_BYTE*)a2 = 0;
      *(_DWORD*)(a2 + 4) = 2;
      {
        result;
        return;
      }
    }
    goto LABEL_31;
  }
LABEL_14:
  if (v3 != 4) {
    if (v3 == 3) {
      v3 = 2;
      goto LABEL_17;
    }
  LABEL_31:
    *(_BYTE*)a2 = 0;
    *(_DWORD*)(a2 + 4) = 11;
    {
      result;
      return;
    }
  }
  v3 = 3;
  v5 = result[32];
  v6 = 2;
  if (v5 > 1) {
  LABEL_18:
    if (v5 == 2 || v5 == 4) {
      goto LABEL_36;
    }
    if (v5 != 3) {
      goto LABEL_35;
    }
    v5 = 2;
    goto LABEL_26;
  }
LABEL_24:
  if (v5 == 0) {
    goto LABEL_36;
  }
  if (v5 != 1) {
  LABEL_35:
    v6 = 11;
    goto LABEL_36;
  }
LABEL_26:
  v7 = result[33];
  if (v7 > 1) {
    if (v7 == 2 || v7 == 4) {
      goto LABEL_36;
    }
    if (v7 == 3) {
      v7 = 2;
    LABEL_34:
      *(_DWORD*)(a2 + 12) = v5;
      *(_DWORD*)(a2 + 4) = v2;
      *(_DWORD*)(a2 + 8) = v3;
      *(_BYTE*)a2 = 1;
      *(_DWORD*)(a2 + 16) = v7;
      {
        result;
        return;
      }
    }
    goto LABEL_35;
  }
  if (v7 != 0) {
    if (v7 == 1) {
      goto LABEL_34;
    }
    goto LABEL_35;
  }
LABEL_36:
  *(_BYTE*)a2 = 0;
  *(_DWORD*)(a2 + 4) = v6;
  {
    result;
    return;
  }
}

__int64 nvidia_61d060(__int64 a1)
{
  __int64** v1;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 v7;
  int v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  int v18;
  unsigned int v19;
  __int64 v20;
  unsigned int v21;
  __int64 v22;
  bool v23;
  int v24;
  int v25;
  int v26;
  __int64 result;
  unsigned int v28;
  int v30;
  int v31;
  int v32;
  int v34;
  int v35;
  int v36;

  if (*(_DWORD*)(a1 + 480) == 0) {
    return 0;
  }
  v1 = (__int64**)(a1 + 496);
  v3 = 0;
  while (1) {
    v4 = **v1;
    v5 = *(_DWORD*)(v4 + 264);
    if (v5 != 0) {
      if (v5 == 1) {
        v6 = v4 + 88;
        v7 = 0;
      }
      else {
        v8 = *(_DWORD*)(v4 + 8);
        v9 = *(_DWORD*)(v4 + 96);
        if ((v8 & 0xE0000) != 0) {
          v10 = 0;
        }
        else {
          v10 = **v1;
        }
        if ((v8 & 0x700000) != 0) {
          v11 = 0;
        }
        else {
          v11 = **v1;
        }
        if ((v8 & 0x3800000) != 0) {
          v12 = 0;
        }
        else {
          v12 = **v1;
        }
        if ((v9 & 0xE0000) == 0) {
          v10 = v4 + 88;
        }
        if ((v9 & 0x700000) == 0) {
          v11 = v4 + 88;
        }
        v23 = (v9 & 0x3800000) == 0;
        v13 = *(_DWORD*)(v4 + 184);
        if (v23) {
          v12 = v4 + 88;
        }
        v14 = v4 + 176;
        if ((v13 & 0xE0000) != 0) {
          v4 = v10;
        }
        else {
          v4 += 176;
        }
        v6 = (v13 & 0x700000) != 0 ? v11 : v14;
        v7 = (v13 & 0x3800000) != 0 ? v12 : v14;
      }
    }
    else {
      v7 = 0;
      v6 = 0;
    }
    v15 = *((_DWORD*)v1 - 2);
    v16 = nvidia_617ad0(a1);
    v17 = *(_QWORD*)(v4 + 48);
    v18 = *(_DWORD*)(v4 + 16);
    v19 = *(_DWORD*)(v4 + 24);
    v20 = *(unsigned int*)(v4 + 28);
    v21 = v15 >> 30;
    v22 = v16;
    v23 = (v17 & 4) == 0 && v18 == 3;
    if (v23) {
      v24 = 2;
    }
    else {
      v24 = 1;
    }
    v25 = 4 * v15 + 4608;
    if (4 * v15 >= 0xFFFFEE00) {
      v25 = -1;
    }
    v26 = v21 != 0 ? -1 : v25;
    result = nvidia_617480(v16, v26, v24, v19, v20);
    if ((_DWORD)result != 0) {
      break;
    }
    if (v6 != 0) {
      v28 = 4 * v15;
      if ((*(_QWORD*)(v6 + 48) & 4LL) == 0 && *(_DWORD*)(v6 + 16) == 3) {
        v30 = 2;
      }
      else {
        v30 = 1;
      }
      v31 = v28 + 4672;
      if (v28 >= 0xFFFFEDC0) {
        v31 = -1;
      }
      v32 = v21 != 0 ? -1 : v31;
      result = nvidia_617480(v22, v32, v30, *(_DWORD*)(v6 + 24),
                             *(unsigned int*)(v6 + 28));
      if ((_DWORD)result != 0) {
        break;
      }
      if (v7 != 0) {
        if ((*(_QWORD*)(v7 + 48) & 4LL) == 0 && *(_DWORD*)(v7 + 16) == 3) {
          v34 = 2;
        }
        else {
          v34 = 1;
        }
        v35 = v28 + 4736;
        if (v28 >= 0xFFFFED80) {
          v35 = -1;
        }
        v36 = v21 != 0 ? -1 : v35;
        result = nvidia_617480(v22, v36, v34, *(_DWORD*)(v7 + 24),
                               *(unsigned int*)(v7 + 28));
        if ((_DWORD)result != 0) {
          break;
        }
      }
    }
    v1 += 17;
    if (++v3 >= (unsigned __int64)*(unsigned int*)(a1 + 480)) {
      return 0;
    }
  }
  return result;
}

__int64 nvidia_61d240(__int64 a1, __int64* a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  int v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  bool v16;
  int v17;
  __int64 result;
  bool v19;
  int v20;
  bool v21;
  int v22;

  v3 = nvidia_617ad0(a1);
  v4 = *a2;
  v5 = v3;
  v6 = *(_DWORD*)(*a2 + 264);
  if (v6 != 0) {
    if (v6 == 1) {
      v7 = v4 + 88;
      v8 = 0;
    }
    else {
      v9 = *(_DWORD*)(v4 + 8);
      v10 = *(_DWORD*)(v4 + 96);
      if ((v9 & 0xE0000) != 0) {
        v11 = 0;
      }
      else {
        v11 = *a2;
      }
      if ((v9 & 0x700000) != 0) {
        v12 = 0;
      }
      else {
        v12 = *a2;
      }
      if ((v9 & 0x3800000) != 0) {
        v13 = 0;
      }
      else {
        v13 = *a2;
      }
      if ((v10 & 0xE0000) == 0) {
        v11 = v4 + 88;
      }
      if ((v10 & 0x700000) == 0) {
        v12 = v4 + 88;
      }
      v16 = (v10 & 0x3800000) == 0;
      v14 = *(_DWORD*)(v4 + 184);
      if (v16) {
        v13 = v4 + 88;
      }
      v15 = v4 + 176;
      if ((v14 & 0xE0000) != 0) {
        v4 = v11;
      }
      else {
        v4 += 176;
      }
      if ((v14 & 0x700000) != 0) {
        v7 = v12;
      }
      else {
        v7 = v15;
      }
      if ((v14 & 0x3800000) != 0) {
        v8 = v13;
      }
      else {
        v8 = v15;
      }
    }
  }
  else {
    v8 = 0;
    v7 = 0;
  }
  v16 = (*(_QWORD*)(v4 + 48) & 4LL) == 0 && *(_DWORD*)(v4 + 16) == 3;
  if (v16) {
    v17 = 2;
  }
  else {
    v17 = 1;
  }
  result = nvidia_617480(v3, 1824, v17, *(_DWORD*)(v4 + 24),
                         *(unsigned int*)(v4 + 28));
  if ((_DWORD)result == 0) {
    if (v7 == 0) {
      return 0;
    }
    v19 = (*(_QWORD*)(v7 + 48) & 4LL) == 0 && *(_DWORD*)(v7 + 16) == 3;
    v20 = v19 ? 2 : 1;
    result = nvidia_617480(v5, 1828, v20, *(_DWORD*)(v7 + 24),
                           *(unsigned int*)(v7 + 28));
    if ((_DWORD)result == 0) {
      if (v8 == 0) {
        return 0;
      }
      v21 = (*(_QWORD*)(v8 + 48) & 4LL) == 0 && *(_DWORD*)(v8 + 16) == 3;
      v22 = v21 ? 2 : 1;
      result = nvidia_617480(v5, 1832, v22, *(_DWORD*)(v8 + 24),
                             *(unsigned int*)(v8 + 28));
      if ((_DWORD)result == 0) {
        return 0;
      }
    }
  }
  return result;
}

__int64 nvidia_61d630(__int64* a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  result = nvidia_6195f0((__int64)(a1 + 491));
  if ((_DWORD)result == 0) {
    result = nvidia_6195f0((__int64)(a1 + 498));
    if ((_DWORD)result == 0) {
      if (a1[505] != 0) {
        v3 = nvidia_617ab0(a1);
        result = nvidia_618a60(v3, a1[505]);
        if ((_DWORD)result != 0) {
          return result;
        }
        a1[505] = 0;
      }
      if (a1[506] != 0) {
        v4 = nvidia_617ab0(a1);
        result = nvidia_618a60(v4, a1[506]);
        if ((_DWORD)result != 0) {
          return result;
        }
        a1[506] = 0;
      }
      if (a1[507] == 0) {
      LABEL_13:
        nvidia_620cc0_alt1(a1 + 510);
        return 0;
      }
      v5 = nvidia_617ab0(a1);
      result = nvidia_618a60(v5, a1[507]);
      if ((_DWORD)result == 0) {
        a1[507] = 0;
        goto LABEL_13;
      }
    }
  }
  return result;
}

__int64 nvidia_61d6e0(__int64 a1)
{
  __int64 result;
  int v3;
  __int64 v4;
  __int64 v5;

  result = nvidia_617a70(a1);
  *(_QWORD*)(a1 + 8) = 0;
  *(_QWORD*)(a1 + 16) = 0x201A22120LL;
  v3 = *(_DWORD*)(*(_QWORD*)(a1 + 4040) + 28LL);
  *(_DWORD*)(a1 + 3920) = *(_DWORD*)(result + 152);
  *(_DWORD*)(a1 + 24) = v3;
  v4 = -2944;
  do {
    v5 = a1 + v4;
    v4 += 368;
    *(_DWORD*)(v5 + 3080) = 0;
    *(_BYTE*)(v5 + 3084) = 1;
    *(_QWORD*)(v5 + 3088) = 0;
    *(_BYTE*)(v5 + 3096) = 1;
    *(_BYTE*)(v5 + 3204) = 0;
    *(_QWORD*)(v5 + 3208) = 1065353216;
    *(_DWORD*)(v5 + 3216) = 1065353216;
    *(_DWORD*)(v5 + 3264) = 0;
    *(_BYTE*)(v5 + 3268) = 1;
    *(_QWORD*)(v5 + 3272) = 0;
    *(_BYTE*)(v5 + 3280) = 1;
    *(_BYTE*)(v5 + 3388) = 0;
    *(_QWORD*)(v5 + 3392) = 1065353216;
    *(_DWORD*)(v5 + 3400) = 1065353216;
    *(_QWORD*)(v5 + 3100) = 0x100000001LL;
    *(_QWORD*)(v5 + 3108) = 1065353216;
    *(_QWORD*)(v5 + 3116) = 0x100000002LL;
    *(_QWORD*)(v5 + 3124) = 0x100000002LL;
    *(_QWORD*)(v5 + 3196) = 1065353216;
    *(_QWORD*)(v5 + 3284) = 0x100000001LL;
    *(_QWORD*)(v5 + 3292) = 1065353216;
    *(_QWORD*)(v5 + 3300) = 0x100000002LL;
    *(_QWORD*)(v5 + 3308) = 0x100000002LL;
    *(_QWORD*)(v5 + 3380) = 1065353216;
  } while (v4 != 0);
  *(_QWORD*)(a1 + 3680) = 0;
  *(_QWORD*)(a1 + 3688) = 0;
  *(_QWORD*)(a1 + 3696) = 0;
  *(_QWORD*)(a1 + 3704) = 0;
  *(_QWORD*)(a1 + 3712) = 0;
  *(_QWORD*)(a1 + 3720) = 0;
  *(_QWORD*)(a1 + 3728) = 0;
  *(_QWORD*)(a1 + 3736) = 0;
  *(_DWORD*)(a1 + 3884) = 0;
  *(_QWORD*)(a1 + 3384) = 0xFFFFFFFFLL;
  *(_QWORD*)(a1 + 3392) = 0xFFFFFFFFLL;
  *(_QWORD*)(a1 + 3400) = 0xFFFFFFFFLL;
  *(_QWORD*)(a1 + 3408) = 0xFFFFFFFFLL;
  *(_QWORD*)(a1 + 3416) = 0xFFFFFFFFLL;
  *(_QWORD*)(a1 + 3424) = 0xFFFFFFFFLL;
  *(_QWORD*)(a1 + 3432) = 0xFFFFFFFFLL;
  *(_QWORD*)(a1 + 3440) = 0xFFFFFFFFLL;
  *(_QWORD*)(a1 + 3448) = 0xFFFFFFFFLL;
  *(_QWORD*)(a1 + 3456) = 0xFFFFFFFFLL;
  *(_QWORD*)(a1 + 3464) = 0xFFFFFFFFLL;
  *(_QWORD*)(a1 + 3472) = 0xFFFFFFFFLL;
  *(_QWORD*)(a1 + 3480) = 0xFFFFFFFFLL;
  *(_QWORD*)(a1 + 3488) = 0xFFFFFFFFLL;
  *(_QWORD*)(a1 + 3496) = 0xFFFFFFFFLL;
  *(_QWORD*)(a1 + 3504) = 0xFFFFFFFFLL;
  *(_QWORD*)(a1 + 3512) = 0xFFFFFFFFLL;
  *(_QWORD*)(a1 + 3520) = 0xFFFFFFFFLL;
  *(_QWORD*)(a1 + 3528) = 0xFFFFFFFFLL;
  *(_QWORD*)(a1 + 3536) = 0xFFFFFFFFLL;
  *(_QWORD*)(a1 + 3544) = 0xFFFFFFFFLL;
  *(_QWORD*)(a1 + 3552) = 0xFFFFFFFFLL;
  *(_QWORD*)(a1 + 3560) = 0xFFFFFFFFLL;
  *(_QWORD*)(a1 + 3568) = 0xFFFFFFFFLL;
  *(_QWORD*)(a1 + 3576) = 0xFFFFFFFFLL;
  *(_QWORD*)(a1 + 3584) = 0xFFFFFFFFLL;
  *(_QWORD*)(a1 + 3592) = 0xFFFFFFFFLL;
  *(_QWORD*)(a1 + 3600) = 0xFFFFFFFFLL;
  *(_QWORD*)(a1 + 3608) = 0xFFFFFFFFLL;
  *(_QWORD*)(a1 + 3616) = 0xFFFFFFFFLL;
  *(_QWORD*)(a1 + 3624) = 0xFFFFFFFFLL;
  *(_QWORD*)(a1 + 3632) = 0xFFFFFFFFLL;
  *(_QWORD*)(a1 + 3648) = 0x100000000LL;
  *(_QWORD*)(a1 + 3876) = 0;
  return result;
}

__int64 nvidia_61d8a0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;

  v2 = nvidia_617a70(a1);
  if (*(_QWORD*)(v2 + 112) == 0) {
    return 0;
  }
  v3 = v2;
  v4 = nvidia_617a60(a1);
  return SdkRoutine_619420(a1 + 3984, *(_DWORD*)(v4 + 32),
                           *(_QWORD*)(v3 + 112) * *(unsigned int*)(v3 + 16),
                           *(_DWORD*)(v3 + 68));
}

__int64 nvidia_61d910(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;

  v2 = nvidia_617a70(a1);
  if (*(_QWORD*)(v2 + 112) == 0) {
    return 0;
  }
  v3 = v2;
  v4 = nvidia_617a60(a1);
  return SdkRoutine_620ae0(a1 + 4080, *(unsigned int*)(v4 + 44),
                           *(_QWORD*)(v3 + 112));
}

__attribute__((swiftcall)) void nvidia_61db80(PSEUDO_X8 x8_, __int64* result,
                                              unsigned int a2)
{
  _BYTE* a3 = (_BYTE*)PSEUDO_X8_VALUE(x8_);
  _BYTE* v4;
  __int64* v5;
  unsigned int v6;

  if (*result != 0 || result[1] != 0x201A22120LL) {
    X8CALL_X0(__int64*, nvidia_617260((void*)((__int64)a3), result, a2));
    return;
  }
  v4 = a3;
  v5 = result;
  v6 = a2;
  nvidia_617310((void*)((__int64)a3), a2);
  a3 = v4;
  result = v5;
  a2 = v6;
  if ((*v4 & 1) == 0) {
    X8CALL_X0(__int64*, nvidia_617260((void*)((__int64)a3), result, a2));
    return;
  }
  {
    result;
    return;
  }
}

__int64 nvidia_61de50(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _DWORD* v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned int v11;
  unsigned __int64 v12;
  bool v13;
  int v14;
  __int64 v15;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  _DWORD** v32;
  __int64 v33;
  __int64 v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  bool v45;
  bool v46;
  bool v47;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  unsigned int* v53;
  unsigned __int64 v54;
  unsigned __int64 v55;
  unsigned int v56;
  unsigned int v57;
  unsigned __int64 v58;
  _BOOL4 v60;
  __int64 v61;
  __int64 v62;
  __int64 v65;
  _DWORD* v67;
  double v68;
  double v69;
  double v70;
  double v71;
  double v72;
  double v73;
  double v74;
  unsigned __int64 v75;
  float v76;
  __int64 v77;
  float v78;
  _DWORD* v79;
  float v80;
  unsigned __int64 v81;
  unsigned __int64 v82;
  char v83;
  struct {
    unsigned __int64 v84;
    unsigned __int64 v85;
  } v84_;
  _QWORD v86[8];

  v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(double, "d1", "=w"));
  v2 = nvidia_617a70_alt1((_QWORD*)a1),
  v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(double, "d1", "=w"));
  result = SdkRoutine_61dc00(a1),
  v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(double, "d1", "=w"));
  if ((_DWORD)result != 0) {
    return result;
  }
  v4 = *(_QWORD*)(a1 + 8);
  v5 = 128;
  if (*(_QWORD*)(a1 + 128) == 0) {
    v5 = 352;
  }
  v6 = 72;
  if (*(_QWORD*)(a1 + 72) == 0) {
    v6 = v5;
  }
  v7 = *(_DWORD**)(a1 + v6);
  v8 = *(_QWORD*)(v4 + 48);
  v9 = *(_QWORD*)(v4 + 56);
  LODWORD(v10) = *v7;
  v11 = v7[1];
  v12 = HIDWORD(v8);
  v13 = HIDWORD(v8) == 0 && (_DWORD)v8 == 0;
  v14 = v13;
  if ((unsigned int)v10 >= 0x7FFFFFFF) {
    v10 = 0x7FFFFFFF;
  }
  else {
    v10 = (unsigned int)v10;
  }
  if (v11 >= 0x7FFFFFFF) {
    v15 = 0x7FFFFFFF;
  }
  else {
    v15 = v11;
  }
  if (v14 == 1 && HIDWORD(v9) == 0 && (_DWORD)v9 == 0) {
    v9 = v10 | (v15 << 32);
    LODWORD(v12) = 0;
  }
  else {
    result = 11;
    if ((v8 & 0x8000000080000000LL) != 0 || (int)v10 < (int)v9 ||
        (int)v15 < SHIDWORD(v9)) {
      return result;
    }
    if ((int)v8 >= (int)v9 || SHIDWORD(v8) >= SHIDWORD(v9)) {
      return result;
    }
    if ((*(_BYTE*)(v4 + 3032) & 1) != 0 || *(_QWORD*)(v4 + 3360) != 0) {
      if ((_DWORD)v10 != (_DWORD)v9) {
        v14 = 0;
      }
      if (v14 != 1 || (_DWORD)v15 != HIDWORD(v9)) {
        return 2;
      }
    }
  }
  if ((*(_BYTE*)(v2 + 14) & 1) != 0 || (unsigned int)(v7[67] - 1) > 2 ||
      (result = 11, (v8 & 1) == 0) && (v12 & 1) == 0 &&
          (v9 & 0x100000001LL) == 0) {
    *(_QWORD*)(a1 + 464) = (unsigned int)*(_QWORD*)(v4 + 48) |
                           ((unsigned __int64)(unsigned int)v12 << 32);
    *(_QWORD*)(a1 + 472) = v9;
    if (*(_BYTE*)(v4 + 3032) == 1) {
      *(_QWORD*)(a1 + 240) = 0;
      *(_QWORD*)(a1 + 248) = 0;
      *(_QWORD*)(a1 + 256) = 0;
      *(_QWORD*)(a1 + 264) = 0;
      *(_QWORD*)(a1 + 272) = 0;
      *(_DWORD*)(a1 + 280) = 0;
      *(_QWORD*)(a1 + 296) = 0;
      *(_QWORD*)(a1 + 304) = 0;
      *(_QWORD*)(a1 + 312) = 0;
      *(_QWORD*)(a1 + 320) = 0;
      *(_QWORD*)(a1 + 328) = 0;
      *(_DWORD*)(a1 + 336) = 0;
      *(_QWORD*)(a1 + 184) = 0;
      *(_QWORD*)(a1 + 192) = 0;
      *(_QWORD*)(a1 + 200) = 0;
      *(_QWORD*)(a1 + 208) = 0;
      *(_QWORD*)(a1 + 284) = 0;
      *(_QWORD*)(a1 + 216) = 0;
      *(_DWORD*)(a1 + 224) = 0;
      *(_QWORD*)(a1 + 228) = 0;
      *(_QWORD*)(a1 + 128) = 0;
      *(_QWORD*)(a1 + 136) = 0;
      *(_QWORD*)(a1 + 144) = 0;
      *(_QWORD*)(a1 + 152) = 0;
      *(_QWORD*)(a1 + 160) = 0;
      *(_DWORD*)(a1 + 168) = 0;
      *(_QWORD*)(a1 + 172) = 0;
      *(_QWORD*)(a1 + 340) = 0;
      return 2;
    }
    if (*(_QWORD*)(v4 + 3360) != 0 || *(_QWORD*)(v4 + 3368) != 0) {
      *(_QWORD*)(a1 + 352) = 0;
      *(_QWORD*)(a1 + 360) = 0;
      *(_QWORD*)(a1 + 368) = 0;
      *(_QWORD*)(a1 + 376) = 0;
      *(_QWORD*)(a1 + 384) = 0;
      *(_DWORD*)(a1 + 392) = 0;
      *(_QWORD*)(a1 + 408) = 0;
      *(_QWORD*)(a1 + 416) = 0;
      *(_QWORD*)(a1 + 424) = 0;
      *(_QWORD*)(a1 + 432) = 0;
      *(_QWORD*)(a1 + 440) = 0;
      *(_DWORD*)(a1 + 448) = 0;
      *(_QWORD*)(a1 + 396) = 0;
      *(_QWORD*)(a1 + 452) = 0;
      return 2;
    }
    v20 = -2944;
    v21 = 0;
    while (1) {
      v31 = *(_QWORD*)(a1 + 8);
      if (*(_QWORD*)(v31 + v20 + 3032) != 0) {
        if (v21 >= *(unsigned int*)(v2 + 16) ||
            *(_BYTE*)(v31 + 32) == 1 && v21 >= *(unsigned int*)(v2 + 20)) {
          return 2;
        }
        v32 = (_DWORD**)(v31 + v20 + 3032);
        v33 = SdkRoutine_602440(a1),
        v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(double, "d1", "=w"));
        nvidia_619950((void*)((__int64)v86), v33, *v32, v2),
            v69 =
                COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(double, "d1", "=w"));
        if ((v86[0] & 1) == 0) {
          return LODWORD(v86[1]);
        }
        v34 = v31 + v20;
        v35 = *(float*)(v31 + v20 + 3040);
        v36 = *(float*)(v31 + v20 + 3044);
        v37 = *(float*)(v31 + v20 + 3048);
        v38 = *(float*)(v31 + v20 + 3052);
        v39 = fabsf(v36);
        v40 = fabsf(v37);
        v41 = fabsf(v38);
        if (fabsf(v35) < 0x1.0000000000000p-23f &&
            v39 < 0x1.0000000000000p-23f && v40 < 0x1.0000000000000p-23f &&
            v41 < 0x1.0000000000000p-23f) {
          v38 = *(float*)&v86[7];
          v37 = *((float*)&v86[6] + 1);
          v36 = 0x0.0p+0f;
          v35 = 0x0.0p+0f;
        }
        else {
          if (v35 < 0x0.0p+0f) {
            return 11;
          }
          v45 = v36 >= 0x0.0p+0f && v37 <= *((float*)&v86[6] + 1);
          v46 = v45 && v38 <= *(float*)&v86[7];
          v47 = v46 && v35 < v37;
          if (!v47 || v36 >= v38) {
            return 11;
          }
        }
        v49 = *(_QWORD*)(a1 + 128);
        v50 = *(_QWORD*)(a1 + 72);
        v83 = 1;
        v13 = v49 == 0;
        v51 = 128;
        v84_.v84 = __PAIR64__(LODWORD(v36), LODWORD(v35));
        v84_.v85 = __PAIR64__(LODWORD(v38), LODWORD(v37));
        if (v13) {
          v51 = 352;
        }
        v13 = v50 == 0;
        v52 = 72;
        if (v13) {
          v52 = v51;
        }
        v53 = *(unsigned int**)(a1 + v52);
        v54 = *(_QWORD*)(v34 + 3056);
        v55 = *(_QWORD*)(v34 + 3064);
        v56 = *v53;
        v57 = v53[1];
        v58 = HIDWORD(v54);
        v60 = HIDWORD(v54) == 0 && (_DWORD)v54 == 0;
        if (v56 >= 0x7FFFFFFF) {
          v61 = 0x7FFFFFFF;
        }
        else {
          v61 = v56;
        }
        if (v57 >= 0x7FFFFFFF) {
          v62 = 0x7FFFFFFF;
        }
        else {
          v62 = v57;
        }
        if (v60 && HIDWORD(v55) == 0 && (_DWORD)v55 == 0) {
          v55 = v61 | (v62 << 32);
          LODWORD(v58) = 0;
        }
        else {
          result = 11;
          if ((v54 & 0x8000000080000000LL) != 0 || (int)v61 < (int)v55 ||
              (int)v62 < SHIDWORD(v55) || (int)v54 >= (int)v55 ||
              SHIDWORD(v54) >= SHIDWORD(v55)) {
            return result;
          }
          v65 = *(_QWORD*)(a1 + 8);
          if ((*(_BYTE*)(v65 + 3032) & 1) != 0 || *(_QWORD*)(v65 + 3360) != 0) {
            if ((_DWORD)v61 != (_DWORD)v55) {
              v60 = false;
            }
            if (!v60 || (_DWORD)v62 != HIDWORD(v55)) {
              return 2;
            }
          }
        }
        if ((*(_BYTE*)(v2 + 14) & 1) == 0 && v53[67] - 1 <= 2) {
          result = 11;
          if ((v54 & 1) != 0 || (v58 & 1) != 0 || (v55 & 0x100000001LL) != 0) {
            return result;
          }
        }
        v67 = *(_DWORD**)(v31 + v20 + 3176);
        if (v67 != nullptr && *v67 != 0) {
          result = 11;
          if ((v54 & 1) != 0 || (v58 & 1) != 0 || (v55 & 0x100000001LL) != 0) {
            return result;
          }
        }
        v82 = v55;
        v81 = (unsigned int)v54 | ((unsigned __int64)(unsigned int)v58 << 32);
        v68 = nvidia_61e450((float*)&v84_.v84, (int*)&v81,
                            *(_DWORD*)(v31 + v20 + 3072)),
        v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(double, "d1", "=w"));
        v70 = v69;
        v71 = 0x1.0000000000000p+0 / v68;
        v72 = 0x1.0000000000000p+0 / v69;
        if (v72 >= 0x1.0000000000000p+0 / v68) {
          v73 = 0x1.0000000000000p+0 / v68;
        }
        else {
          v73 = v72;
        }
        if (v73 < *(float*)(v2 + 40)) {
          return 2;
        }
        v74 = v71 >= v72 ? 0x1.0000000000000p+0 / v68 : v72;
        if (v74 > *(float*)(v2 + 44)) {
          return 2;
        }
        v75 = nvidia_61e4c0((__int64)v32, v71, v72),
        v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(double, "d1", "=w"));
        result = 11;
        v76 = *(float*)(v31 + v20 + 3100);
        if (*(_BYTE*)(v31 + v20 + 3088) != 0) {
          v77 = 0x100000001LL;
        }
        else {
          v77 = *(_QWORD*)(v31 + v20 + 3092);
        }
        if (v76 < 0x0.0p+0f) {
          return result;
        }
        if (v76 > 0x1.0000000000000p+0f) {
          return result;
        }
        v78 = *(float*)(v31 + v20 + 3104);
        if (v78 < 0x0.0p+0f || v78 > 0x1.0000000000000p+0f) {
          return result;
        }
        v79 = *(_DWORD**)(v31 + v20 + 3176);
        if (v79 != nullptr && *v79 != 0) {
          return 2;
        }
        if (*(_BYTE*)(v2 + 10) != 0) {
          v80 = *(float*)(v31 + v20 + 3188);
        }
        else {
          if (*(_QWORD*)(v31 + v20 + 3152) != 0) {
            return 2;
          }
          v80 = *(float*)(v31 + v20 + 3188);
          if (fabsf(v80 + -0x1.0000000000000p+0f) >= 0x1.0000000000000p-23f) {
            return 2;
          }
        }
        if (v80 < 0x0.0p+0f) {
          return 11;
        }
        result = nvidia_61e570(*(_BYTE*)(v2 + 10), v31 + v20 + 3196),
        v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(double, "d1", "=w"));
        if ((_DWORD)result != 0) {
          return result;
        }
        v23 = v86[3];
        v22 = v86[4];
        v24 = a1 + 488 + 136 * v21;
        v25 = v86[5];
        v26 = v86[6];
        *(_DWORD*)v24 = v21++;
        *(double*)(v24 + 104) = v68;
        *(double*)(v24 + 112) = v70;
        *(_QWORD*)(v24 + 40) = v22;
        *(_QWORD*)(v24 + 48) = v25;
        v27 = v86[7];
        *(_QWORD*)(v24 + 56) = v26;
        *(_QWORD*)(v24 + 64) = v27;
        v28 = v86[1];
        *(_QWORD*)(v24 + 24) = v86[2];
        *(_QWORD*)(v24 + 32) = v23;
        *(_QWORD*)(v24 + 8) = v32;
        *(_QWORD*)(v24 + 16) = v28;
        v29 = v84_.v85;
        *(_QWORD*)(v24 + 72) = v84_.v84;
        *(_QWORD*)(v24 + 80) = v29;
        v30 = v82;
        *(_QWORD*)(v24 + 88) = v81;
        *(_QWORD*)(v24 + 96) = v30;
        *(_QWORD*)(v24 + 120) = v75;
        *(_QWORD*)(v24 + 128) = v77;
      }
      v20 += 184;
      if (v20 == 0) {
        *(_DWORD*)(a1 + 480) = v21;
        return 0;
      }
    }
  }
  return result;
}

double nvidia_61e450(float* a1, int* a2, unsigned int a3)
{
  int v3;
  int v4;
  int v5;

  if (a3 <= 7 && ((1 << a3) & 0xCA) != 0) {
    v3 = a2[3];
    v4 = a2[1];
  }
  else {
    v3 = a2[2];
    v4 = *a2;
  }
  v5 = v3 - v4;
  if (v5 < 0) {
    v5 = -v5;
  }
  return (float)(a1[2] - *a1) / (double)(unsigned int)v5;
}

unsigned __int64 nvidia_61e4c0(__int64 a1, double a2, double a3)
{
  _DWORD* v3;
  int v5;
  unsigned int v6;
  unsigned int v7;
  __int64 v8;

  if (*(_BYTE*)(a1 + 44) != 1) {
    return *(unsigned int*)(a1 + 48) |
           ((unsigned __int64)*(unsigned int*)(a1 + 52) << 32);
  }
  v3 = *(_DWORD**)(a1 + 144);
  if (v3 != nullptr && *v3 != 0) {
    return 0x100000001LL;
  }
  if (a2 >= 1.0) {
    v5 = a2 > 1.0;
  }
  else {
    v5 = 3;
  }
  if (a2 > 0.25) {
    v6 = v5;
  }
  else {
    v6 = 4;
  }
  if (v3 != nullptr && *v3 != 0) {
    return v6 | 0x100000000LL;
  }
  if (a3 >= 1.0) {
    v7 = a3 > 1.0;
  }
  else {
    v7 = 3;
  }
  if (a3 > 0.25) {
    v8 = v7;
  }
  else {
    v8 = 4;
  }
  return v6 | (unsigned __int64)(v8 << 32);
}

__int64 nvidia_61e570(char a1, __int64 a2)
{

#pragma clang fp contract(off)
  float v3;
  float v5;

  if (*(_BYTE*)a2 == 0) {
    return 0;
  }
  if ((a1 & 1) != 0) {
    return 2;
  }
  v3 = *(float*)(a2 + 4);
  if (v3 < 0x0.0p+0f || v3 > 0x1.4000000000000p+3f) {
    return 11;
  }
  if (fabsf(*(float*)(a2 + 8)) > 0x1.0000000000000p+0f) {
    return 11;
  }
  v5 = *(float*)(a2 + 12);
  if (v5 < 0x0.0p+0f || v5 > 0x1.4000000000000p+3f) {
    return 11;
  }
  else {
    return 0;
  }
}

__int64 nvidia_61e690(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                      __int64 a9, __int64 a10)
{
  __int64 result;

  *(_QWORD*)a1 = a2;
  *(_QWORD*)(a1 + 8) = a3;
  *(_QWORD*)(a1 + 16) = a4;
  *(_QWORD*)(a1 + 24) = a5;
  *(_QWORD*)(a1 + 32) = a6;
  *(_QWORD*)(a1 + 40) = a7;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_DWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_DWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 184) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  *(_QWORD*)(a1 + 200) = 0;
  *(_QWORD*)(a1 + 208) = 0;
  *(_QWORD*)(a1 + 216) = 0;
  *(_QWORD*)(a1 + 224) = 0;
  *(_DWORD*)(a1 + 232) = 0;
  *(_QWORD*)(a1 + 240) = 0;
  *(_QWORD*)(a1 + 248) = 0;
  *(_QWORD*)(a1 + 256) = 0;
  *(_QWORD*)(a1 + 264) = 0;
  *(_QWORD*)(a1 + 272) = 0;
  *(_QWORD*)(a1 + 280) = 0;
  *(_DWORD*)(a1 + 288) = 0;
  *(_QWORD*)(a1 + 296) = 0;
  *(_QWORD*)(a1 + 304) = 0;
  *(_QWORD*)(a1 + 312) = 0;
  *(_QWORD*)(a1 + 320) = 0;
  *(_QWORD*)(a1 + 328) = 0;
  *(_QWORD*)(a1 + 336) = 0;
  *(_DWORD*)(a1 + 344) = 0;
  *(_QWORD*)(a1 + 352) = 0;
  *(_QWORD*)(a1 + 360) = 0;
  *(_QWORD*)(a1 + 368) = 0;
  *(_QWORD*)(a1 + 376) = 0;
  *(_QWORD*)(a1 + 384) = 0;
  *(_QWORD*)(a1 + 392) = 0;
  *(_DWORD*)(a1 + 400) = 0;
  *(_QWORD*)(a1 + 408) = 0;
  *(_QWORD*)(a1 + 416) = 0;
  *(_QWORD*)(a1 + 424) = 0;
  *(_QWORD*)(a1 + 432) = 0;
  *(_QWORD*)(a1 + 440) = 0;
  *(_QWORD*)(a1 + 448) = 0;
  *(_DWORD*)(a1 + 456) = 0;
  *(_QWORD*)(a1 + 464) = 0;
  *(_QWORD*)(a1 + 472) = 0;
  *(_DWORD*)(a1 + 480) = 0;
  *(_QWORD*)(a1 + 48) = a8;
  *(_QWORD*)(a1 + 56) = a9;
  *(_QWORD*)(a1 + 64) = a10;
  *(_QWORD*)(a1 + 72) = 0;
  result = a1 + 488;
  *(_QWORD*)(result + 16) = 0;
  *(_QWORD*)(result + 24) = 0;
  *(_QWORD*)(result + 32) = 0;
  *(_QWORD*)(result + 40) = 0;
  *(_QWORD*)(result + 48) = 0;
  *(_DWORD*)(result + 56) = 0;
  *(_QWORD*)(result + 60) = 0;
  *(_QWORD*)(result + 152) = 0;
  *(_QWORD*)(result + 160) = 0;
  *(_QWORD*)(result + 168) = 0;
  *(_QWORD*)(result + 176) = 0;
  *(_QWORD*)(result + 184) = 0;
  *(_DWORD*)(result + 192) = 0;
  *(_QWORD*)(result + 196) = 0;
  *(_QWORD*)(result + 288) = 0;
  *(_QWORD*)(result + 296) = 0;
  *(_QWORD*)(result + 332) = 0;
  *(_QWORD*)(result + 304) = 0;
  *(_QWORD*)(result + 312) = 0;
  *(_QWORD*)(result + 320) = 0;
  *(_DWORD*)(result + 328) = 0;
  *(_QWORD*)(result + 424) = 0;
  *(_QWORD*)(result + 432) = 0;
  *(_QWORD*)(result + 440) = 0;
  *(_QWORD*)(result + 448) = 0;
  *(_QWORD*)(result + 456) = 0;
  *(_DWORD*)(result + 464) = 0;
  *(_QWORD*)(result + 560) = 0;
  *(_QWORD*)(result + 568) = 0;
  *(_QWORD*)(result + 576) = 0;
  *(_QWORD*)(result + 468) = 0;
  *(_QWORD*)(result + 584) = 0;
  *(_QWORD*)(result + 592) = 0;
  *(_DWORD*)(result + 600) = 0;
  *(_QWORD*)(result + 696) = 0;
  *(_QWORD*)(result + 704) = 0;
  *(_QWORD*)(result + 712) = 0;
  *(_QWORD*)(result + 720) = 0;
  *(_QWORD*)(result + 728) = 0;
  *(_DWORD*)(result + 736) = 0;
  *(_QWORD*)(result + 832) = 0;
  *(_QWORD*)(result + 604) = 0;
  *(_QWORD*)(result + 840) = 0;
  *(_QWORD*)(result + 848) = 0;
  *(_QWORD*)(result + 856) = 0;
  *(_QWORD*)(result + 864) = 0;
  *(_DWORD*)(result + 872) = 0;
  *(_QWORD*)(result + 968) = 0;
  *(_QWORD*)(result + 976) = 0;
  *(_QWORD*)(result + 984) = 0;
  *(_QWORD*)(result + 992) = 0;
  *(_QWORD*)(result + 1000) = 0;
  *(_QWORD*)(result + 740) = 0;
  *(_DWORD*)(result + 1008) = 0;
  *(_QWORD*)(result + 1104) = 0;
  *(_QWORD*)(result + 1112) = 0;
  *(_QWORD*)(result + 1120) = 0;
  *(_QWORD*)(result + 1128) = 0;
  *(_QWORD*)(result + 1136) = 0;
  *(_DWORD*)(result + 1144) = 0;
  *(_QWORD*)(result + 1240) = 0;
  *(_QWORD*)(result + 1248) = 0;
  *(_QWORD*)(result + 1256) = 0;
  *(_QWORD*)(result + 876) = 0;
  *(_QWORD*)(result + 1264) = 0;
  *(_QWORD*)(result + 1272) = 0;
  *(_DWORD*)(result + 1280) = 0;
  *(_QWORD*)(result + 1376) = 0;
  *(_QWORD*)(result + 1384) = 0;
  *(_QWORD*)(result + 1392) = 0;
  *(_QWORD*)(result + 1400) = 0;
  *(_QWORD*)(result + 1408) = 0;
  *(_DWORD*)(result + 1416) = 0;
  *(_QWORD*)(result + 1512) = 0;
  *(_QWORD*)(result + 1012) = 0;
  *(_QWORD*)(result + 1520) = 0;
  *(_QWORD*)(result + 1528) = 0;
  *(_QWORD*)(result + 1536) = 0;
  *(_QWORD*)(result + 1544) = 0;
  *(_DWORD*)(result + 1552) = 0;
  *(_QWORD*)(result + 1648) = 0;
  *(_QWORD*)(result + 1656) = 0;
  *(_QWORD*)(result + 1664) = 0;
  *(_QWORD*)(result + 1672) = 0;
  *(_QWORD*)(result + 1680) = 0;
  *(_QWORD*)(result + 1148) = 0;
  *(_DWORD*)(result + 1688) = 0;
  *(_QWORD*)(result + 1784) = 0;
  *(_QWORD*)(result + 1792) = 0;
  *(_QWORD*)(result + 1800) = 0;
  *(_QWORD*)(result + 1808) = 0;
  *(_QWORD*)(result + 1816) = 0;
  *(_DWORD*)(result + 1824) = 0;
  *(_QWORD*)(result + 1920) = 0;
  *(_QWORD*)(result + 1928) = 0;
  *(_QWORD*)(result + 1936) = 0;
  *(_QWORD*)(result + 1284) = 0;
  *(_QWORD*)(result + 1944) = 0;
  *(_QWORD*)(result + 1952) = 0;
  *(_DWORD*)(result + 1960) = 0;
  *(_QWORD*)(result + 2056) = 0;
  *(_QWORD*)(result + 2064) = 0;
  *(_QWORD*)(result + 2072) = 0;
  *(_QWORD*)(result + 2080) = 0;
  *(_QWORD*)(result + 2088) = 0;
  *(_DWORD*)(result + 2096) = 0;
  *(_QWORD*)(result + 1420) = 0;
  *(_QWORD*)(result + 1556) = 0;
  *(_QWORD*)(result + 1692) = 0;
  *(_QWORD*)(result + 1828) = 0;
  *(_QWORD*)(result + 1964) = 0;
  *(_QWORD*)(result + 2100) = 0;
  return result;
}

__int64 nvidia_61e910(__int64 a1)
{
  __int64* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 v9;
  __int64 i;
  __int64 v11;
  bool v12;
  bool v13;
  float v15;
  float v16;
  _DWORD* v18;

  v1 = *(__int64**)(a1 + 8);
  v2 = 128;
  if (*(_QWORD*)(a1 + 128) == 0) {
    v2 = 352;
  }
  v3 = 72;
  if (*(_QWORD*)(a1 + 72) == 0) {
    v3 = v2;
  }
  v4 = v1[1];
  v5 = *(_DWORD*)(*(_QWORD*)(a1 + v3) + 12LL) & 0x3F;
  if ((BYTE4(v4) & 0x3F) != v5) {
    v6 = *v1;
    if (v4 != 0x201A22120LL || v6 != 0) {
      return 1;
    }
  }
  v9 = *(unsigned int*)(a1 + 480);
  if ((_DWORD)v9 != 0) {
    for (i = a1 + 612;; i += 136) {
      v11 = *(_QWORD*)(i - 116);
      if ((*(_DWORD*)(*(_QWORD*)v11 + 12LL) & 0x3F) != v5) {
        break;
      }
      v12 = *(_DWORD*)(v11 + 76) == 2 && *(_DWORD*)(v11 + 80) == 1;
      v13 = v12 && *(_DWORD*)(v11 + 84) == 2;
      if (!v13 || *(_DWORD*)(v11 + 88) != 1) {
        break;
      }
      v15 = 65535.0f;
      v16 = (float)(*(float*)(v11 + 68) * 65535.0f) + 0.5f;
      if (v16 < 65535.0f) {
        v15 = (float)(*(float*)(v11 + 68) * 65535.0f) + 0.5f;
      }
      if (v16 <= 0.0f || (int)v15 != 0xFFFF) {
        break;
      }
      if (*(_QWORD*)(v11 + 120) != 0) {
        break;
      }
      if (*(_QWORD*)(i - 4) != 0) {
        v18 = *(_DWORD**)(v11 + 144);
        if (v18 == nullptr || *v18 == 0 ||
            (unsigned int)(v5 - 17) >= 6 && v5 != 15) {
          break;
        }
      }
      if (fabsf(*(float*)(v11 + 156) + -1.0f) >= 0.00000011921f) {
        break;
      }
      if (--v9 == 0) {
        return 0;
      }
    }
    return 1;
  }
  return 0;
}

__int64 nvidia_61ea60(_QWORD* a1, char a2)
{
  __int64 v2;
  __int64 v3;
  int v4;
  __int64 v6;
  __int64 v7;

  if ((a2 & 1) != 0) {
    v2 = 128;
    if (a1[16] == 0) {
      v2 = 352;
    }
    v3 = 72;
    if (a1[9] == 0) {
      v3 = v2;
    }
    v4 = *(_DWORD*)(*(_QWORD*)((char*)a1 + v3) + 12LL) & 0x3F;
    if (*(_DWORD*)(a1[1] + 3912LL) != 0) {
      if ((((unsigned int)(v4 - 11) < 0xC) &
           (unsigned __int8)(0xE07u >> (v4 - 11))) != 0) {
        return 12;
      }
    }
    else if ((((unsigned int)(v4 - 11) < 0xC) &
              (unsigned __int8)(0xE07u >> (v4 - 11))) != 0) {
      return 12;
    }
    if ((unsigned int)(v4 - 9) >= 2) {
      return 6;
    }
    else {
      return 9;
    }
  }
  else {
    v6 = 128;
    if (a1[16] == 0) {
      v6 = 352;
    }
    v7 = 72;
    if (a1[9] == 0) {
      v7 = v6;
    }
    return *(_DWORD*)(*(_QWORD*)((char*)a1 + v7) + 12LL) & 0x3F;
  }
}

__int64 nvidia_61eb20(__int64 a1, char a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  bool v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  unsigned __int64 v12;
  bool v13;

  if ((a2 & 1) == 0) {
    return 0;
  }
  v2 = *(_QWORD*)(a1 + 8);
  if (*(_DWORD*)(v2 + 3912) == 1 || (*(_DWORD*)(v2 + 3916) & 2) != 0) {
    return 0;
  }
  v4 = 128;
  if (*(_QWORD*)(a1 + 128) == 0) {
    v4 = 352;
  }
  v5 = 72;
  if (*(_QWORD*)(a1 + 72) == 0) {
    v5 = v4;
  }
  v6 = *(_QWORD*)(*(_QWORD*)(a1 + v5) + 8LL);
  v7 = HIDWORD(v6) & 0x3F;
  v8 = (unsigned int)v7 > 0x16 || ((1 << (BYTE4(v6) & 0x3F)) & 0x602000) == 0;
  if (v8 && ((0x10C0uLL >> SBYTE4(v6)) & 1) == 0) {
    return (unsigned int)v7;
  }
  v9 = *(unsigned int*)(a1 + 480);
  if ((_DWORD)v9 != 0) {
    v10 = (__int64*)(a1 + 496);
    while (1) {
      v11 = *v10;
      v10 += 17;
      v12 = *(_QWORD*)(*(_QWORD*)v11 + 8LL);
      v7 = HIDWORD(v12) & 0x3F;
      v13 = (unsigned int)v7 > 0x16 ||
            ((1 << (BYTE4(v12) & 0x3F)) & 0x602000) == 0;
      if (v13 && ((0x10C0uLL >> SBYTE4(v12)) & 1) == 0) {
        break;
      }
      if (--v9 == 0) {
        return 0;
      }
    }
    return (unsigned int)v7;
  }
  return 0;
}

__int64 nvidia_61ec10(char a1)
{
  if ((a1 & 1) != 0) {
    return 0;
  }
  else {
    return 2;
  }
}

__int64 nvidia_61ec20(__int64 a1, unsigned __int8 a2)
{
  return a2 & ((*(_DWORD*)(*(_QWORD*)(a1 + 8) + 3916LL) & 4) == 0);
}

__attribute__((swiftcall)) void nvidia_61ec40(PSEUDO_X8 x8_, __int64 a1,
                                              double a3)
{
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  int v7;
  __int64 v8;
  int v9;
  int v10;
  int v11;
  float v12;
  float v13;
  double v14;
  float v15;
  float v16;
  double v17;
  double v18;
  double v19;
  double v20;
  double v21;
  double v22;
  float v23;
  double v24;
  float v25;
  double v26;
  float v27;
  double v28;
  float v29;
  float v30;
  float v31;
  float v32;
  double v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;

  v3 = *(_QWORD*)(a1 + 8);
  v4 = *(_QWORD*)(v3 + 144);
  if (v4 == 0 || *(_DWORD*)v4 == 0) {
    v9 = *(_DWORD*)(a1 + 88);
    v10 = *(_DWORD*)(a1 + 92);
    v11 = *(_DWORD*)(v3 + 40);
    *(_QWORD*)a2 = 0;
    *(_QWORD*)(a2 + 8) = 0;
    *(_QWORD*)(a2 + 16) = 0;
    *(_QWORD*)(a2 + 24) = 0;
    v12 = (float)v9;
    v13 = (float)v10;
    v14 = *(double*)(a1 + 104);
    a3 = *(double*)(a1 + 112);
    v15 = *(float*)(a1 + 72);
    v16 = *(float*)(a1 + 76);
    *(_DWORD*)(a2 + 32) = 1065353216;
    v17 = v15 + (v14 + -0x1.0000000000000p+0) * 0x1.0000000000000p-1;
    v18 = *(float*)(a1 + 80) + -0x1.0000000000000p+0 +
          (v14 + -0x1.0000000000000p+0) * 0x1.0000000000000p-1;
    v19 = v16 + (a3 + -0x1.0000000000000p+0) * 0x1.0000000000000p-1;
    v20 = *(float*)(a1 + 84) + -0x1.0000000000000p+0 +
          (a3 + -0x1.0000000000000p+0) * 0x1.0000000000000p-1;
    v21 = v12;
    v22 = v13;
    if (v11 > 3) {
      if (v11 > 5) {
        if (v11 == 6) {
          v41 = v14;
          *(float*)(a2 + 4) = v41;
          v24 = v17 - v22 * v41;
        LABEL_26:
          v42 = v24;
          v43 = a3;
          *(float*)(a2 + 8) = v42;
          *(float*)(a2 + 12) = v43;
          a3 = v19 - v21 * v43;
          goto LABEL_27;
        }
        if (v11 != 7) {
          *(float*)&a3;
          return;
        }
        v29 = v14;
        v28 = v18 + v22 * v29;
        *(float*)(a2 + 4) = -v29;
        goto LABEL_19;
      }
      if (v11 == 4) {
        v34 = v14;
        *(float*)a2 = -v34;
        v33 = v18 + v21 * v34;
        goto LABEL_22;
      }
      v25 = v14;
      *(float*)a2 = v25;
      v26 = v17 - v21 * v25;
    }
    else {
      if (v11 <= 1) {
        if (v11 != 0) {
          if (v11 != 1) {
            *(float*)&a3;
            return;
          }
          v23 = v14;
          v24 = v18 + v22 * v23;
          *(float*)(a2 + 4) = -v23;
          goto LABEL_26;
        }
        v32 = v14;
        *(float*)a2 = v32;
        v33 = v17 - v21 * v32;
      LABEL_22:
        v35 = v33;
        *(float*)(a2 + 8) = v35;
        *(float*)&a3 = a3;
        v36 = v19 - v22 * *(float*)&a3;
        *(_DWORD*)(a2 + 16) = LODWORD(a3);
        *(float*)(a2 + 20) = v36;
        {
          *(float*)&a3;
          return;
        }
      }
      if (v11 != 2) {
        v27 = v14;
        *(float*)(a2 + 4) = v27;
        v28 = v17 - v22 * v27;
      LABEL_19:
        v30 = v28;
        v31 = a3;
        *(float*)(a2 + 8) = v30;
        *(float*)(a2 + 12) = -v31;
        a3 = v20 + v21 * v31;
      LABEL_27:
        *(float*)&a3 = a3;
        *(_DWORD*)(a2 + 20) = LODWORD(a3);
        {
          *(float*)&a3;
          return;
        }
      }
      v37 = v14;
      *(float*)a2 = -v37;
      v26 = v18 + v21 * v37;
    }
    v38 = v26;
    *(float*)(a2 + 8) = v38;
    v39 = a3;
    v40 = -v39;
    a3 = v20 + v22 * v39;
    *(float*)(a2 + 16) = v40;
    goto LABEL_27;
  }
  if (*(_DWORD*)v4 == 2) {
    v5 = *(_DWORD*)(v4 + 104);
    *(_QWORD*)a2 = *(_QWORD*)(v4 + 96);
    v6 = *(_QWORD*)(v4 + 108);
    *(_DWORD*)(a2 + 8) = v5;
    v7 = *(_DWORD*)(v4 + 116);
    *(_QWORD*)(a2 + 12) = v6;
    v8 = *(_QWORD*)(v4 + 120);
    *(_DWORD*)(a2 + 20) = v7;
    LODWORD(a3) = *(_DWORD*)(v4 + 128);
    *(_QWORD*)(a2 + 24) = v8;
    *(_DWORD*)(a2 + 32) = LODWORD(a3);
  }
  else {
    *(_DWORD*)(a2 + 32) = 0;
    *(_QWORD*)(a2 + 16) = 0;
    *(_QWORD*)(a2 + 24) = 0;
    *(_QWORD*)a2 = 0;
    *(_QWORD*)(a2 + 8) = 0;
  }
  {
    *(float*)&a3;
    return;
  }
}

__attribute__((swiftcall)) void nvidia_61ee80(PSEUDO_X8 x8_, _QWORD* result,
                                              int a2, char a3)
{
  __int64 a4 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v9;
  bool v10;
  bool v11;
  _DWORD* v12;
  unsigned int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  void* v19;
  void* v20;
  _DWORD* v22;
  void* v23;
  int v24;
  char* v25;
  _QWORD* v26;
  char* v27;
  bool v29;
  int v30;
  bool v31;

  v4 = 128;
  if (result[16] == 0) {
    v4 = 352;
  }
  v5 = 72;
  if (result[9] == 0) {
    v5 = v4;
  }
  if ((a3 & 1) == 0) {
    *(_BYTE*)a4 = 1;
    v19 = SdkData_e72360;
    *(_QWORD*)(a4 + 8) = SdkData_e72358;
    *(_QWORD*)(a4 + 16) = v19;
    v20 = SdkData_e72370;
    *(_QWORD*)(a4 + 24) = SdkData_e72368;
    *(_QWORD*)(a4 + 32) = v20;
    {
      result;
      return;
    }
  }
  v6 = *(_QWORD*)(*(_QWORD*)((char*)result + v5) + 8LL);
  v7 = HIDWORD(v6) & 0x3F;
  if ((unsigned int)v7 > 0x16 || ((1 << (BYTE4(v6) & 0x3F)) & 0x7EBEF4) == 0) {
    *(_BYTE*)a4 = 0;
    *(_DWORD*)(a4 + 8) = 2;
    {
      result;
      return;
    }
  }
  v9 = result[1];
  if (a2 != 6 ||
      ((_DWORD)v7 != 17 ? (v10 = (_DWORD)v7 == 15) : (v10 = true),
       v10 ? (v11 = (*(_DWORD*)(v9 + 3916) & 0x40) == 0) : (v11 = false),
       !v11)) {
    v12 = &SdkData_c75018;
    if ((unsigned int)(v7 - 17) >= 6 && (_DWORD)v7 != 15) {
      goto LABEL_38;
    }
  LABEL_23:
    v14 = v6 & 0x3FFF;
    v15 = 1;
    v16 = 0;
    if (v14 <= 0x1D1F) {
      if (v14 == 2576) {
        goto LABEL_45;
      }
      v17 = 0;
      v18 = 0;
      if (v14 == 3856) {
        goto LABEL_43;
      }
      if (v14 != 4112) {
        goto LABEL_42;
      }
    }
    else {
      if ((v6 & 0x3FFF) <= 0x241F) {
        if (v14 != 7456) {
          v17 = 0;
          v18 = 0;
          if (v14 == 8736) {
            goto LABEL_43;
          }
          goto LABEL_42;
        }
      LABEL_45:
        v18 = 1;
        v16 = 0;
        v15 = 0;
        v17 = 0;
        if ((v6 & 0x1C000) == 0x4000) {
          goto LABEL_44;
        }
        goto LABEL_46;
      }
      if (v14 == 10304) {
        goto LABEL_45;
      }
      if (v14 != 9248) {
      LABEL_42:
        v15 = 0;
        v17 = 0;
        v18 = 0;
        v16 = 1;
      LABEL_43:
        if ((v6 & 0x1C000) == 0x4000) {
          goto LABEL_44;
        }
        goto LABEL_46;
      }
    }
    v16 = 0;
    v15 = 0;
    v18 = 0;
    v17 = 1;
    if ((v6 & 0x1C000) == 0x4000) {
    LABEL_44:
      v23 = &SdkData_c75048;
      v22 = &SdkData_c75018;
      goto LABEL_105;
    }
  LABEL_46:
    v22 = &SdkData_c75018;
    if ((BYTE4(v6) & 0x3Fu) <= 0x12) {
      switch ((_DWORD)v7) {
      case 0xF:
        v24 = v16 | v15 | v17;
        v25 = (char*)&SdkData_e72438;
        break;
      case 0x11:
        v24 = v16 | v15 | v17;
        v25 = (char*)&SdkData_e72478;
        break;
      case 0x12:
        v24 = v16 | v15 | v17;
        v25 = (char*)&SdkData_e724b8;
        break;
      default:
        goto LABEL_74;
      }
    }
    else {
      if ((BYTE4(v6) & 0x3Fu) > 0x14) {
        if ((_DWORD)v7 == 21) {
          if ((v15 & 1) == 0) {
            goto LABEL_74;
          }
          v26 = &SdkData_e72578;
          goto LABEL_73;
        }
        if ((_DWORD)v7 == 22 && v18 != 0) {
          v26 = &SdkData_e72588;
        LABEL_73:
          v22 = (_DWORD*)v26[1];
        }
      LABEL_74:
        if (*(_DWORD*)(v9 + 3912) != 0) {
          if ((unsigned int)v7 <= 0x16) {
            if (((1 << v7) & 0x12C0) != 0) {
            LABEL_77:
              v23 = &SdkData_c75544;
              goto LABEL_105;
            }
            if (((1 << v7) & 0x602000) != 0) {
            LABEL_104:
              v23 = &SdkData_c75564;
              goto LABEL_105;
            }
          }
          if ((*(_BYTE*)(v9 + 3916) & 8) != 0 &&
              ((v29 = (unsigned int)v7 > 0xA, v30 = (1 << v7) & 0x414, !v29)
                   ? (v31 = v30 == 0)
                   : (v31 = true),
               v31)) {
            v23 = &SdkData_c755a4;
          }
          else {
            v23 = &SdkData_c75504;
          }
          goto LABEL_105;
        }
        v23 = &SdkData_c75504;
        if ((int)v7 <= 9) {
          if ((int)v7 <= 5) {
            if ((_DWORD)v7 == 2 || (_DWORD)v7 == 4) {
              goto LABEL_105;
            }
            goto LABEL_107;
          }
          if ((_DWORD)v7 != 6) {
            if ((_DWORD)v7 == 7 || (_DWORD)v7 == 9) {
              goto LABEL_77;
            }
            goto LABEL_107;
          }
        LABEL_106:
          v23 = &SdkData_c75524;
          goto LABEL_105;
        }
        if ((int)v7 > 20) {
          if ((unsigned int)(v7 - 21) < 2) {
            goto LABEL_104;
          }
        }
        else {
          switch ((_DWORD)v7) {
          case 0xA:
            goto LABEL_105;
          case 0xC:
            goto LABEL_106;
          case 0xD:
            goto LABEL_104;
          default:
            break;
          }
        }
      LABEL_107:
        v23 = &SdkData_c75584;
        goto LABEL_105;
      }
      v24 = v16 | v15 | v17;
      if ((_DWORD)v7 == 19) {
        v25 = (char*)&SdkData_e724f8;
      }
      else {
        v25 = (char*)&SdkData_e72538;
      }
    }
    if (v15 != 0) {
      v27 = v25 + 16;
    }
    else {
      v27 = v25 + 32;
    }
    if (v16 != 0) {
      v26 = v25;
    }
    else {
      v26 = v27;
    }
    if (v24 == 0) {
      v26 = v25 + 48;
    }
    if ((((unsigned __int8)v24 | (unsigned __int8)v18) & 1) != 0) {
      goto LABEL_73;
    }
    goto LABEL_74;
  }
  v12 = &SdkData_c750e4;
  if ((unsigned int)(v7 - 17) < 6 || (_DWORD)v7 == 15) {
    goto LABEL_23;
  }
LABEL_38:
  v22 = &SdkData_c75018;
  if ((v6 & 0x1C000) != 0x4000) {
    goto LABEL_74;
  }
  v23 = &SdkData_c75048;
LABEL_105:
  result = (_QWORD*)nvidia_61f2b0(a4 + 8, v12, v22, (__int64)v23);
  *(_BYTE*)a4 = 1;
  {
    result;
    return;
  }
}

__int64 nvidia_61f2b0(__int64 result, _DWORD* a2, _DWORD* a3, __int64 a4)
{
  _BOOL4 v7;
  bool v8;
  bool v9;
  bool v12;
  bool v13;
  bool v14;

  if (*a2 == 0x10000 && a2[1] == 0 && a2[2] == 0 && a2[3] == 0) {
    v7 = true;
    if (a2[4] == 0) {
      v8 = a2[5] == 0x10000 && a2[6] == 0;
      v9 = v8 && a2[7] == 0;
      if (v9 && a2[8] == 0 && a2[9] == 0 && a2[10] == 0x10000) {
        v7 = a2[11] != 0;
      }
    }
  }
  else {
    v7 = true;
  }
  *(_DWORD*)result = v7;
  v12 = *a3 == 0x10000 && a3[1] == 0 && a3[2] == 0 && a3[3] == 0;
  if (!v12 || a3[4] != 0 ||
      (a3[5] == 0x10000 ? (v13 = a3[6] == 0) : (v13 = false),
       v13 ? (v14 = a3[7] == 0) : (v14 = false),
       !v14 || a3[8] != 0 || a3[9] != 0 || a3[10] != 0x10000)) {
    *(_DWORD*)(result + 4) = 1;
    *(_QWORD*)(result + 8) = a2;
    *(_QWORD*)(result + 16) = a3;
    *(_QWORD*)(result + 24) = a4;
  }
  else {
    *(_DWORD*)(result + 4) = a3[11] != 0;
    *(_QWORD*)(result + 8) = a2;
    *(_QWORD*)(result + 16) = a3;
    *(_QWORD*)(result + 24) = a4;
  }
  return result;
}

__attribute__((swiftcall)) void nvidia_61f3b0(PSEUDO_X8 x8_, _QWORD* result,
                                              _QWORD* a2, int a3, int a4,
                                              char a5, char a6, char a7)
{
  __int64 a8 = (__int64)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 v9;
  __int64 v10;
  char* v12;
  unsigned int v14;
  int v15;
  int v16;
  char v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned int v21;
  int v22;
  _DWORD* v24;
  char v25;
  char* v26;
  unsigned int v27;
  _QWORD* v28;
  char v29;
  int v31;
  unsigned int v32;
  int v34;
  int v35;
  _BOOL4 v36;
  char v38;
  char* v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  unsigned int v45;
  bool v46;
  int v47;
  bool v48;
  float v49;
  float v50;
  int v51;
  int v52;
  int v53;
  double v54;
  double v55;
  double v56;
  double v57;
  double v58;
  double v59;
  double v60;
  double v61;
  double v62;
  float v63;
  unsigned int v64;
  bool v65;
  float v66;
  int v67;
  int v68;
  double v69;
  double v70;
  double v71;
  double v72;
  double v73;
  double v74;
  double v75;
  double v76;
  double v77;
  double v78;
  double v79;
  double v80;
  double v81;
  double v82;
  double v83;
  double v84;
  double v85;
  double v86;
  double v90;
  double v92;
  _DWORD* v93;
  float v94;
  double v95;
  double v96;
  double v98;
  double v99;
  unsigned int v100;
  _DWORD v101[12];
  struct {
    double v102[2];
    double v103;
    double v104;
    double v105;
    double v106;
    double v107;
    double v108;
    double v109;
    double v110;
    double v111;
    double v112;
  } v102_;

  v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(float, "s0", "=w"));
  if ((a5 & 1) == 0) {
    *(_BYTE*)a8 = 1;
    {
      (_QWORD*)memcpy_plt(a8 + 8, &SdkData_e72378, 192),
          v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(float, "s0", "=w"));
      return;
    }
  }
  v9 = *(_QWORD*)(a2[2] + 8LL);
  v10 = HIDWORD(v9) & 0x3F;
  if ((unsigned int)v10 > 0x16 || ((1 << (BYTE4(v9) & 0x3F)) & 0x7EBEF4) == 0) {
    *(_BYTE*)a8 = 0;
    *(_DWORD*)(a8 + 8) = 2;
    {
      result;
      return;
    }
  }
  if ((v9 & 0x1C000) == 0x4000) {
    v12 = (char*)&SdkData_c75068;
    if ((unsigned int)(v10 - 17) >= 6 && (_DWORD)v10 != 15) {
    LABEL_29:
      v24 = SdkData_c75018_alt1;
      goto LABEL_96;
    }
  }
  else {
    v18 = result[1];
    if (*(_DWORD*)(v18 + 3912) != 0) {
      v19 = 128;
      if (result[16] == 0) {
        v19 = 352;
      }
      v20 = 72;
      if (result[9] == 0) {
        v20 = v19;
      }
      v21 = v10 - 6;
      v22 = *(_DWORD*)(*(_QWORD*)((char*)result + v20) + 12LL);
      if ((unsigned int)(v10 - 6) <= 0x10 && ((0x180CBu >> v21) & 1) != 0) {
        v12 = (char*)*(&SdkData_e72718 + v21);
        if ((unsigned int)(v10 - 17) >= 6 && (_DWORD)v10 != 15) {
          goto LABEL_29;
        }
      }
      else {
        v34 = *(_DWORD*)(v18 + 3916);
        if ((v34 & 8) != 0) {
          if ((unsigned int)v10 > 0xA ||
              ((1 << (BYTE4(v9) & 0x3F)) & 0x414) == 0) {
            v12 = (char*)&SdkData_c7566c;
            if ((unsigned int)(v10 - 17) >= 6 && (_DWORD)v10 != 15) {
              goto LABEL_29;
            }
          }
          else {
            v12 = (char*)&SdkData_c755c4;
            if ((unsigned int)(v10 - 17) >= 6 && (_DWORD)v10 != 15) {
              goto LABEL_29;
            }
          }
        }
        else {
          v35 = v22 & 0x3F;
          v36 = (v34 & 0x80) != 0;
          if (v35 != 13) {
            v36 = (unsigned int)(v35 - 21) < 2;
          }
          if (v36) {
            v12 = (char*)&SdkData_c75650;
          }
          else {
            v12 = (char*)&SdkData_c755c4;
          }
          if ((unsigned int)(v10 - 17) >= 6 && (_DWORD)v10 != 15) {
            goto LABEL_29;
          }
        }
      }
    }
    else {
      if ((unsigned int)v10 > 0x16 ||
          ((1 << (BYTE4(v9) & 0x3F)) & 0x6030C0) == 0) {
        v31 = a4;
      }
      else {
        v31 = HIDWORD(*(_QWORD*)(a2[2] + 8LL)) & 0x3F;
      }
      if (a4 == 0) {
        v31 = HIDWORD(*(_QWORD*)(a2[2] + 8LL)) & 0x3F;
      }
      v32 = v31 - 2;
      if (v32 >= 0x15) {
        v12 = (char*)&SdkData_c75634;
        if ((unsigned int)(v10 - 17) >= 6 && (_DWORD)v10 != 15) {
          goto LABEL_29;
        }
      }
      else {
        v12 = (char*)SdkData_c75b38 + SdkData_c75b38[v32];
        if ((unsigned int)(v10 - 17) >= 6 && (_DWORD)v10 != 15) {
          goto LABEL_29;
        }
      }
    }
  }
  v14 = v9 & 0x3FFF;
  v15 = 1;
  v16 = 0;
  if (v14 <= 0x1D1F) {
    if (v14 == 2576) {
      goto LABEL_43;
    }
    v17 = 0;
    if (v14 == 3856) {
      goto LABEL_34;
    }
    if (v14 != 4112) {
      goto LABEL_40;
    }
  LABEL_33:
    v15 = 0;
    v17 = 0;
    v16 = 1;
    goto LABEL_34;
  }
  if ((v9 & 0x3FFF) <= 0x241F) {
    if (v14 != 7456) {
      v17 = 0;
      if (v14 != 8736) {
        goto LABEL_40;
      }
    LABEL_34:
      v24 = SdkData_c75018_alt1;
      if (((unsigned int)HIDWORD(*(_QWORD*)(a2[2] + 8LL)) & 0x3F) > 0x12) {
      LABEL_35:
        if (((unsigned int)HIDWORD(*(_QWORD*)(a2[2] + 8LL)) & 0x3F) > 0x14) {
          if ((_DWORD)v10 == 21) {
            v38 = v15 | v17;
            if (v15 != 0) {
              v28 = &SdkData_e726d8;
            }
            else {
              v28 = &SdkData_e726e8;
            }
            if ((v38 & 1) != 0) {
              goto LABEL_95;
            }
          }
          else if ((_DWORD)v10 == 22) {
            v29 = v15 | v17;
            v28 = v15 != 0 ? &SdkData_e726f8 : &SdkData_e72708;
            if ((v29 & 1) != 0) {
              goto LABEL_95;
            }
          }
          goto LABEL_96;
        }
        v25 = v15 | v16 | v17;
        if ((_DWORD)v10 == 19) {
          v26 = (char*)&SdkData_e72668;
        }
        else {
          v26 = (char*)&SdkData_e726a8;
        }
        goto LABEL_88;
      }
    LABEL_44:
      switch ((_DWORD)v10) {
      case 0xF:
        v25 = v15 | v16 | v17;
        v26 = (char*)&SdkData_e725a8;
        break;
      case 0x11:
        v25 = v15 | v16 | v17;
        v26 = (char*)&SdkData_e725e8;
        break;
      case 0x12:
        v25 = v15 | v16 | v17;
        v26 = (char*)&SdkData_e72628;
        break;
      default:
        goto LABEL_96;
      }
    LABEL_88:
      if (v16 != 0) {
        v39 = v26 + 16;
      }
      else {
        v39 = v26 + 32;
      }
      if (v15 != 0) {
        v28 = v26;
      }
      else {
        v28 = v39;
      }
      if ((v25 & 1) != 0) {
        goto LABEL_95;
      }
      goto LABEL_96;
    }
  LABEL_43:
    v17 = 1;
    v15 = 0;
    v16 = 0;
    v24 = SdkData_c75018_alt1;
    if (((unsigned int)HIDWORD(*(_QWORD*)(a2[2] + 8LL)) & 0x3F) > 0x12) {
      goto LABEL_35;
    }
    goto LABEL_44;
  }
  if (v14 == 10304) {
    goto LABEL_43;
  }
  if (v14 == 9248) {
    goto LABEL_33;
  }
LABEL_40:
  v27 = v10 - 15;
  v24 = SdkData_c75018_alt1;
  if ((unsigned int)(v10 - 15) <= 5 && ((0x3Du >> v27) & 1) != 0) {
    v28 = *(&SdkData_e727a0 + v27);
  LABEL_95:
    v24 = (_DWORD*)v28[1];
  }
LABEL_96:
  v40 = a2[1];
  v41 = 128;
  v42 = result[1];
  if (result[16] == 0) {
    v41 = 352;
  }
  v43 = 72;
  if (result[9] == 0) {
    v43 = v41;
  }
  v44 = *(_QWORD*)((char*)result + v43);
  if ((unsigned int)(*(_DWORD*)(v44 + 268) - 1) > 2 ||
      ((v45 = *(_DWORD*)(v44 + 12) & 0x3F, v46 = v45 > 0x16,
        v47 = (1 << v45) & 0x602000, !v46)
           ? (v48 = v47 == 0)
           : (v48 = true),
       v48 || (v9 & 0x3F00000000LL) != 0x700000000LL ||
           *(_DWORD*)(v42 + 3912) != 1 ||
           (v49 = *(float*)(v40 + 152)) <= 0x0.0p+0f)) {
    v52 = 0;
    if ((a6 & 1 | (a2[15] != 0)) == 0) {
      goto LABEL_114;
    }
  LABEL_120:
    v63 = *(float*)(v40 + 156);
    v64 = *((_DWORD*)v12 + 1) & 0xFFFFFFFE;
    v65 = v64 == 2 || v64 == 4;
    v66 = fabsf(v63 + -0x1.0000000000000p+0f);
    v67 = v65;
    if ((a6 & 1) == 0 && v66 < 0x1.0000000000000p-23f && (a7 & 1) != 0 &&
        v67 != 0) {
      v68 = *(_DWORD*)(v42 + 3916);
      if (a3 == 9) {
        v74 = 0x0.0p+0;
        if ((unsigned int)v10 <= 0x16) {
          if (((1 << v10) & 0x703800) != 0) {
            v69 = 0x1.044b7a7130250p+0;
            v70 = -0x1.411a0b3b69daep-6;
            v71 = 0x1.71db7856ebd99p-9;
            v72 = 0x1.57f4be8e88a8ep+0;
            v73 = -0x1.20f3b52193005p-2;
            v74 = -0x1.f6fa28c47d19ap-5;
            v75 = -0x1.0b7557849c129p-4;
            v76 = 0x1.1366d63bcb023p+0;
            v77 = -0x1.57c061f79a3f8p-7;
            goto LABEL_221;
          }
          v76 = 0x1.0000000000000p+0;
          if (((1 << v10) & 0x600) != 0) {
            v77 = 0x0.0p+0;
            v75 = 0x0.0p+0;
            goto LABEL_220;
          }
          if (((1 << v10) & 0x28000) != 0 && (v68 & 0x40) == 0) {
            v69 = 0x1.ccb033fc10443p-1;
            v70 = 0x1.51710487cba74p-4;
            v71 = 0x1.24356e5ec8dc5p-6;
            v72 = 0x1.b7a5ab63b0238p-1;
            v73 = 0x1.216952713f720p-3;
            v75 = 0x1.1be745d5ea5b4p-5;
            v77 = -0x0.0p+0;
            v76 = 0x1.ee418ba2a15a5p-1;
            goto LABEL_221;
          }
        }
        v77 = 0x0.0p+0;
        v69 = 0x1.d22fab0762f25p-1;
        v70 = 0x1.288a3801edf99p-4;
        v71 = 0x1.17e1bf0be9cf3p-6;
        v72 = 0x1.a519bc338a619p-1;
        v73 = 0x1.6b990f31d679cp-3;
        v74 = -0x0.0p+0;
        v75 = 0x1.0fed47d6284c4p-5;
        v76 = 0x1.ef012b829d7b4p-1;
        goto LABEL_221;
      }
      if (a3 == 6) {
        if ((unsigned int)v10 <= 0x16) {
          if (((1 << v10) & 0x703800) != 0) {
            v69 = 0x1.1e65112cc7351p+0;
            v70 = -0x1.9bf89e593e572p-4;
            v71 = -0x1.2961d1ccd3e82p-6;
            v72 = 0x1.a915f035525f5p+0;
            v73 = -0x1.2cdf4ca1dc42cp-1;
            v74 = -0x1.2a649e4643df9p-4;
            v75 = -0x1.fe28a36adc4a7p-4;
            v76 = 0x1.2205ba47afaf1p+0;
            v77 = -0x1.11980880f5366p-7;
          LABEL_221:
            v98 = 0x0.0p+0;
            if (v66 >= 0x1.0000000000000p-23f) {
              v99 = v63;
              v72 = v72 * v99;
              v73 = v73 * v99;
              v74 = v74 * v99;
              v98 = v99 * 0x0.0p+0;
              v75 = v75 * v99;
              v76 = v76 * v99;
              v77 = v77 * v99;
              v71 = v71 * v99;
              v70 = v70 * v99;
              v69 = v69 * v99;
            }
            v102_.v102[0] = v72;
            v102_.v102[1] = v73;
            v102_.v103 = v74;
            v102_.v104 = v98;
            v102_.v105 = v75;
            v102_.v106 = v76;
            v102_.v107 = v77;
            v102_.v108 = v98;
            v102_.v109 = v71;
            v102_.v110 = v70;
            v102_.v111 = v69;
            v102_.v112 = v98;
            nvidia_620870(v101, v102_.v102),
                v49 = COERCE_AS(__typeof__(v49),
                                PSEUDO_REGISTER(float, "s0", "=w"));
            if (v64 == 4) {
              v100 = 3;
            }
            else {
              v100 = 2;
            }
            result = (_QWORD*)nvidia_620430(
                a8 + 8, (__int64)v12, v24, v101, v100, SdkData_c75018_alt1,
                SdkData_c75018_alt1, v100, SdkData_c75018_alt1, v52),
            v49 =
                COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(float, "s0", "=w"));
            goto LABEL_227;
          }
          if (((1 << v10) & 0x600) != 0) {
            v74 = 0x0.0p+0;
            v69 = 0x1.1928756a7d5bdp+0;
            v70 = -0x1.4217dec238615p-4;
            v71 = -0x1.41bddfb1f24f1p-6;
            v72 = 0x1.3995adecc3d56p+0;
            v73 = -0x1.ccad6f661eaadp-3;
            v75 = -0x1.5887d3a02ff3bp-5;
            v77 = -0x0.0p+0;
            v76 = 0x1.0ac43e9d017fap+0;
            goto LABEL_221;
          }
          if (((1 << v10) & 0x28000) != 0) {
            v76 = 0x1.0000000000000p+0;
            v77 = 0x0.0p+0;
            if ((v68 & 0x40) == 0) {
              v74 = 0x0.0p+0;
              v69 = 0x1.f9f637e3c8c71p-1;
              v70 = 0x1.8272070dce3a6p-7;
              v72 = 0x1.0b466a6d682a9p+0;
              v73 = -0x1.68cd4dad0551ep-5;
              v75 = -0x0.0p+0;
              v71 = -0x0.0p+0;
              goto LABEL_221;
            }
            goto LABEL_160;
          }
        }
      LABEL_159:
        v76 = 0x1.0000000000000p+0;
        v77 = 0x0.0p+0;
      LABEL_160:
        v75 = 0x0.0p+0;
        v74 = 0x0.0p+0;
      LABEL_220:
        v73 = 0x0.0p+0;
        v72 = 0x1.0000000000000p+0;
        v71 = 0x0.0p+0;
        v70 = 0x0.0p+0;
        v69 = 0x1.0000000000000p+0;
        goto LABEL_221;
      }
      if ((unsigned int)v10 <= 0x16) {
        if (((1 << v10) & 0x703800) != 0) {
          goto LABEL_159;
        }
        if (((1 << v10) & 0x600) != 0) {
          v69 = 0x1.f79b8ca88e61dp-1;
          v70 = 0x1.2062f40a0b434p-6;
          v71 = -0x1.3d4891bd77dd4p-10;
          v72 = 0x1.81f6674ac8ee5p-1;
          v73 = 0x1.96ba37aad9607p-3;
          v74 = 0x1.85b0acb5ca09ap-5;
          v75 = 0x1.76bbcdee57588p-5;
          v76 = 0x1.e2309fae514ebp-1;
          v77 = 0x1.98e8dcb24ef07p-7;
          goto LABEL_221;
        }
        if (((1 << v10) & 0x28000) != 0 && (v68 & 0x40) == 0) {
          v69 = 0x1.c52310f8b7109p-1;
          v70 = 0x1.90ceccd054761p-4;
          v71 = 0x1.1862ad8c4f352p-6;
          v72 = 0x1.4f60fafb351f6p-1;
          v73 = 0x1.3569af1b36116p-2;
          v74 = 0x1.5ea2d772fd7f7p-5;
          v75 = 0x1.277cdaf725f48p-4;
          v76 = 0x1.d550ace16214ap-1;
          v77 = 0x1.6fedefee4b32fp-7;
          goto LABEL_221;
        }
      }
      v69 = 0x1.ca8b7605e4c82p-1;
      v70 = 0x1.6880a470b144cp-4;
      v71 = 0x1.0c8ead80a1e90p-6;
      v72 = 0x1.413b155c8c06bp-1;
      v73 = 0x1.512f92a438d83p-2;
      v74 = 0x1.62d2151578d3ap-5;
      v75 = 0x1.1b05c26371a75p-4;
      v76 = 0x1.d6cdffa89c5fdp-1;
      v77 = 0x1.745202f4548fdp-7;
      goto LABEL_221;
    }
    if ((unsigned int)v10 <= 0x16) {
      if (((1 << v10) & 0x703800) != 0) {
        v78 = 0x1.ccffb96f5e17fp-1;
        v79 = 0x1.3523e4b333cebp-4;
        v80 = 0x1.a5e6aab3363c9p-2;
        v81 = 0x1.0c3d71c39a51bp-1;
        v82 = 0x1.06614b8c7fdc8p-4;
        v83 = 0x1.554ee25a357d2p-3;
        v84 = 0x1.70d5f97748e38p-1;
        v85 = 0x1.ce9eb8a8ada7ap-4;
        v86 = 0x1.8b0967f40a476p-6;
      LABEL_185:
        v90 = 0x0.0p+0;
        if (v66 >= 0x1.0000000000000p-23f) {
          v92 = v63;
          v80 = v80 * v92;
          v81 = v81 * v92;
          v82 = v82 * v92;
          v90 = v92 * 0x0.0p+0;
          v83 = v83 * v92;
          v84 = v84 * v92;
          v85 = v85 * v92;
          v86 = v86 * v92;
          v79 = v79 * v92;
          v78 = v78 * v92;
        }
        v102_.v102[0] = v80;
        v102_.v102[1] = v81;
        v102_.v103 = v82;
        v102_.v104 = v90;
        v102_.v105 = v83;
        v102_.v106 = v84;
        v102_.v107 = v85;
        v102_.v108 = v90;
        v102_.v109 = v86;
        v102_.v110 = v79;
        v102_.v111 = v78;
        v102_.v112 = v90;
        nvidia_620870(v101, v102_.v102),
            v49 =
                COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(float, "s0", "=w"));
        v93 = &SdkData_c75aa8;
        if (a3 != 9) {
          if (a3 == 6) {
            if ((*(_BYTE*)(v42 + 3916) & 0x10) == 0) {
              v93 = &SdkData_c75ad8;
            }
          }
          else {
            v93 = &SdkData_c75b08;
          }
        }
        result =
            (_QWORD*)nvidia_620430(a8 + 8, (__int64)v12, v24, v101, 0,
                                   SdkData_c75084, SdkData_c750b4, 0, v93, v52),
        v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(float, "s0", "=w"));
        goto LABEL_227;
      }
      if (((1 << v10) & 0x600) != 0) {
        v78 = 0x1.c683a5bc67a4dp-1;
        v79 = 0x1.7795df00d532cp-4;
        v80 = 0x1.56947046006ddp-2;
        v81 = 0x1.271cbbc84eab1p-1;
        v82 = 0x1.6cc860a588f06p-4;
        v83 = 0x1.44a641cf817dbp-3;
        v84 = 0x1.6d5eac9f0a0fep-1;
        v85 = 0x1.05df0bb0e6a6ep-3;
        v86 = 0x1.5133cc6fb69a8p-6;
        goto LABEL_185;
      }
      if (((1 << v10) & 0x28000) != 0 && (*(_BYTE*)(v42 + 3916) & 0x40) == 0) {
        v78 = 0x1.98f62c5041c13p-1;
        v79 = 0x1.510bb50fcdc5ap-3;
        v80 = 0x1.3c2f6a785a33fp-2;
        v81 = 0x1.38d3d7def2c0ep-1;
        v82 = 0x1.488b1ba40bbd9p-4;
        v83 = 0x1.4df5c07231b1ep-3;
        v84 = 0x1.71870c49f67f6p-1;
        v85 = 0x1.d7c865dc69273p-4;
        v86 = 0x1.2c367b12fb175p-5;
        goto LABEL_185;
      }
    }
    v78 = 0x1.9dd79b2a39fbbp-1;
    v79 = 0x1.40b0819b28c37p-3;
    v80 = 0x1.2ed8cc800de6dp-2;
    v81 = 0x1.3f01af07b908bp-1;
    v82 = 0x1.4c76da3f0ab3bp-4;
    v83 = 0x1.3fdf2d7caee00p-3;
    v84 = 0x1.745885809c986p-1;
    v85 = 0x1.dd69c2191d3b0p-4;
    v86 = 0x1.1f8c5b384d07fp-5;
    goto LABEL_185;
  }
  v50 = (float)((float)(v49 * 0x1.f800000000000p+2f) * 0x1.0000000000000p+3f) +
        0x1.0000000000000p-1f;
  v51 = (int)v50 & 0x3F;
  if (v50 >= 0x1.f800000000000p+5f) {
    v51 = 63;
  }
  if (v50 <= 0x0.0p+0f) {
    v52 = 0;
  }
  else {
    v52 = v51;
  }
  if ((a6 & 1 | (a2[15] != 0)) != 0) {
    goto LABEL_120;
  }
LABEL_114:
  v53 = *(_DWORD*)(v42 + 3916);
  if (a3 == 9) {
    v59 = 0x0.0p+0;
    if ((unsigned int)v10 <= 0x16) {
      if (((1 << v10) & 0x703800) != 0) {
        v54 = 0x1.044b7a7130250p+0;
        v55 = -0x1.411a0b3b69daep-6;
        v56 = 0x1.71db7856ebd99p-9;
        v57 = 0x1.57f4be8e88a8ep+0;
        v58 = -0x1.20f3b52193005p-2;
        v59 = -0x1.f6fa28c47d19ap-5;
        v60 = -0x1.0b7557849c129p-4;
        v61 = 0x1.1366d63bcb023p+0;
        v62 = -0x1.57c061f79a3f8p-7;
        goto LABEL_209;
      }
      v61 = 0x1.0000000000000p+0;
      if (((1 << v10) & 0x600) != 0) {
        v62 = 0x0.0p+0;
        v60 = 0x0.0p+0;
        goto LABEL_208;
      }
      if (((1 << v10) & 0x28000) != 0 && (v53 & 0x40) == 0) {
        v54 = 0x1.ccb033fc10443p-1;
        v55 = 0x1.51710487cba74p-4;
        v56 = 0x1.24356e5ec8dc5p-6;
        v57 = 0x1.b7a5ab63b0238p-1;
        v58 = 0x1.216952713f720p-3;
        v60 = 0x1.1be745d5ea5b4p-5;
        v62 = -0x0.0p+0;
        v61 = 0x1.ee418ba2a15a5p-1;
        goto LABEL_209;
      }
    }
    v62 = 0x0.0p+0;
    v54 = 0x1.d22fab0762f25p-1;
    v55 = 0x1.288a3801edf99p-4;
    v56 = 0x1.17e1bf0be9cf3p-6;
    v57 = 0x1.a519bc338a619p-1;
    v58 = 0x1.6b990f31d679cp-3;
    v59 = -0x0.0p+0;
    v60 = 0x1.0fed47d6284c4p-5;
    v61 = 0x1.ef012b829d7b4p-1;
    goto LABEL_209;
  }
  if (a3 != 6) {
    if ((unsigned int)v10 <= 0x16) {
      if (((1 << v10) & 0x703800) != 0) {
        goto LABEL_143;
      }
      if (((1 << v10) & 0x600) != 0) {
        v54 = 0x1.f79b8ca88e61dp-1;
        v55 = 0x1.2062f40a0b434p-6;
        v56 = -0x1.3d4891bd77dd4p-10;
        v57 = 0x1.81f6674ac8ee5p-1;
        v58 = 0x1.96ba37aad9607p-3;
        v59 = 0x1.85b0acb5ca09ap-5;
        v60 = 0x1.76bbcdee57588p-5;
        v61 = 0x1.e2309fae514ebp-1;
        v62 = 0x1.98e8dcb24ef07p-7;
        goto LABEL_209;
      }
      if (((1 << v10) & 0x28000) != 0 && (v53 & 0x40) == 0) {
        v54 = 0x1.c52310f8b7109p-1;
        v55 = 0x1.90ceccd054761p-4;
        v56 = 0x1.1862ad8c4f352p-6;
        v57 = 0x1.4f60fafb351f6p-1;
        v58 = 0x1.3569af1b36116p-2;
        v59 = 0x1.5ea2d772fd7f7p-5;
        v60 = 0x1.277cdaf725f48p-4;
        v61 = 0x1.d550ace16214ap-1;
        v62 = 0x1.6fedefee4b32fp-7;
        goto LABEL_209;
      }
    }
    v54 = 0x1.ca8b7605e4c82p-1;
    v55 = 0x1.6880a470b144cp-4;
    v56 = 0x1.0c8ead80a1e90p-6;
    v57 = 0x1.413b155c8c06bp-1;
    v58 = 0x1.512f92a438d83p-2;
    v59 = 0x1.62d2151578d3ap-5;
    v60 = 0x1.1b05c26371a75p-4;
    v61 = 0x1.d6cdffa89c5fdp-1;
    v62 = 0x1.745202f4548fdp-7;
    goto LABEL_209;
  }
  if ((unsigned int)v10 > 0x16) {
  LABEL_143:
    v61 = 0x1.0000000000000p+0;
    v62 = 0x0.0p+0;
  LABEL_144:
    v60 = 0x0.0p+0;
    v59 = 0x0.0p+0;
  LABEL_208:
    v58 = 0x0.0p+0;
    v57 = 0x1.0000000000000p+0;
    v56 = 0x0.0p+0;
    v55 = 0x0.0p+0;
    v54 = 0x1.0000000000000p+0;
    goto LABEL_209;
  }
  if (((1 << v10) & 0x703800) == 0) {
    if (((1 << v10) & 0x600) != 0) {
      v59 = 0x0.0p+0;
      v54 = 0x1.1928756a7d5bdp+0;
      v55 = -0x1.4217dec238615p-4;
      v56 = -0x1.41bddfb1f24f1p-6;
      v57 = 0x1.3995adecc3d56p+0;
      v58 = -0x1.ccad6f661eaadp-3;
      v60 = -0x1.5887d3a02ff3bp-5;
      v62 = -0x0.0p+0;
      v61 = 0x1.0ac43e9d017fap+0;
      goto LABEL_209;
    }
    if (((1 << v10) & 0x28000) != 0) {
      v61 = 0x1.0000000000000p+0;
      v62 = 0x0.0p+0;
      if ((v53 & 0x40) == 0) {
        v59 = 0x0.0p+0;
        v54 = 0x1.f9f637e3c8c71p-1;
        v55 = 0x1.8272070dce3a6p-7;
        v57 = 0x1.0b466a6d682a9p+0;
        v58 = -0x1.68cd4dad0551ep-5;
        v60 = -0x0.0p+0;
        v56 = -0x0.0p+0;
        goto LABEL_209;
      }
      goto LABEL_144;
    }
    goto LABEL_143;
  }
  v54 = 0x1.1e65112cc7351p+0;
  v55 = -0x1.9bf89e593e572p-4;
  v56 = -0x1.2961d1ccd3e82p-6;
  v57 = 0x1.a915f035525f5p+0;
  v58 = -0x1.2cdf4ca1dc42cp-1;
  v59 = -0x1.2a649e4643df9p-4;
  v60 = -0x1.fe28a36adc4a7p-4;
  v61 = 0x1.2205ba47afaf1p+0;
  v62 = -0x1.11980880f5366p-7;
LABEL_209:
  v94 = *(float*)(v40 + 156);
  v95 = 0x0.0p+0;
  if (fabsf(v94 + -0x1.0000000000000p+0f) >= 0x1.0000000000000p-23f) {
    v96 = v94;
    v57 = v57 * v96;
    v58 = v58 * v96;
    v59 = v59 * v96;
    v95 = v96 * 0x0.0p+0;
    v60 = v60 * v96;
    v61 = v61 * v96;
    v62 = v62 * v96;
    v56 = v56 * v96;
    v55 = v55 * v96;
    v54 = v54 * v96;
  }
  v102_.v102[0] = v57;
  v102_.v102[1] = v58;
  v102_.v103 = v59;
  v102_.v104 = v95;
  v102_.v105 = v60;
  v102_.v106 = v61;
  v102_.v107 = v62;
  v102_.v108 = v95;
  v102_.v109 = v56;
  v102_.v110 = v55;
  v102_.v111 = v54;
  v102_.v112 = v95;
  nvidia_620870(v101, v102_.v102),
      v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(float, "s0", "=w"));
  result = (_QWORD*)nvidia_620430(a8 + 8, (__int64)v12, v24, v101, 4u,
                                  SdkData_c75018_alt1, SdkData_c75018_alt1, 4u,
                                  SdkData_c75018_alt1, v52),
  v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(float, "s0", "=w"));
LABEL_227:
  *(_BYTE*)a8 = 1;
  {
    result;
    return;
  }
}

__int64 nvidia_620430(__int64 result, __int64 a2, _DWORD* a3, _DWORD* a4,
                      unsigned int a5, _DWORD* a6, _DWORD* a7, unsigned int a8,
                      _DWORD* a9, int a10)
{
  _BOOL4 v13;
  bool v14;
  bool v15;
  _BOOL4 v19;
  bool v20;
  bool v21;
  _BOOL4 v22;
  _BOOL4 v23;
  _BOOL4 v27;
  int v28;
  int v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;

  if (*a3 == 0x10000 && a3[1] == 0 && a3[2] == 0 && a3[3] == 0) {
    v13 = true;
    if (a3[4] == 0) {
      v14 = a3[5] == 0x10000 && a3[6] == 0;
      v15 = v14 && a3[7] == 0;
      if (v15 && a3[8] == 0 && a3[9] == 0 && a3[10] == 0x10000) {
        v13 = a3[11] != 0;
      }
    }
  }
  else {
    v13 = true;
  }
  *(_DWORD*)result = v13;
  if (*a4 == 0x10000 && a4[1] == 0 && a4[2] == 0 && a4[3] == 0) {
    v19 = true;
    if (a4[4] == 0) {
      v20 = a4[5] == 0x10000 && a4[6] == 0;
      v21 = v20 && a4[7] == 0;
      if (v21 && a4[8] == 0 && a4[9] == 0 && a4[10] == 0x10000) {
        v19 = a4[11] != 0;
      }
    }
  }
  else {
    v19 = true;
  }
  *(_DWORD*)(result + 4) = v19;
  v22 = true;
  if (*a6 == 0x10000 && a6[1] == 0 && a6[2] == 0 && a6[3] == 0 && a6[4] == 0 &&
      a6[5] == 0x10000 && a6[6] == 0 && a6[7] == 0 && a6[8] == 0 &&
      a6[9] == 0 && a6[10] == 0x10000) {
    v22 = a6[11] != 0;
  }
  *(_DWORD*)(result + 8) = v22;
  v23 = true;
  if (*a7 == 0x10000 && a7[1] == 0 && a7[2] == 0 && a7[3] == 0 && a7[4] == 0 &&
      a7[5] == 0x10000 && a7[6] == 0 && a7[7] == 0 && a7[8] == 0 &&
      a7[9] == 0 && a7[10] == 0x10000) {
    v23 = a7[11] != 0;
  }
  *(_DWORD*)(result + 12) = v23;
  if (*a9 == 0x10000 && a9[1] == 0 && a9[2] == 0 && a9[3] == 0) {
    v27 = true;
    if (a9[4] == 0 && a9[5] == 0x10000 && a9[6] == 0 && a9[7] == 0 &&
        a9[8] == 0 && a9[9] == 0 && a9[10] == 0x10000) {
      v27 = a9[11] != 0;
    }
  }
  else {
    v27 = true;
  }
  *(_DWORD*)(result + 16) = v27;
  *(_DWORD*)(result + 20) = a5 != 4;
  *(_QWORD*)(result + 24) = 0x100000001LL;
  if (a5 - 2 < 2) {
    *(_DWORD*)(result + 32) = 2;
  LABEL_86:
    v28 = SdkData_bb2c90[a5];
    goto LABEL_99;
  }
  if (a5 == 1) {
    *(_DWORD*)(result + 32) = 1;
    v28 = 343597383;
  }
  else {
    *(_DWORD*)(result + 32) = 0;
    if (a5 <= 3) {
      goto LABEL_86;
    }
    v28 = 0;
  }
LABEL_99:
  *(_DWORD*)(result + 36) = v28;
  *(_DWORD*)(result + 40) = a8 != 4;
  *(_QWORD*)(result + 44) = 0x100000001LL;
  if (a8 - 2 >= 2) {
    if (a8 == 1) {
      *(_DWORD*)(result + 52) = 1;
      v29 = 19008;
      goto LABEL_106;
    }
    *(_DWORD*)(result + 52) = 0;
    if (a8 > 3) {
      v29 = 0;
      goto LABEL_106;
    }
  }
  else {
    *(_DWORD*)(result + 52) = 2;
  }
  v29 = SdkData_bb35e0[a8];
LABEL_106:
  *(_DWORD*)(result + 56) = v29;
  *(_DWORD*)(result + 60) = a10;
  *(_QWORD*)(result + 64) = a2;
  *(_QWORD*)(result + 72) = a3;
  v30 = *((_QWORD*)a4 + 1);
  *(_QWORD*)(result + 80) = *(_QWORD*)a4;
  *(_QWORD*)(result + 88) = v30;
  v31 = *((_QWORD*)a4 + 2);
  v32 = *((_QWORD*)a4 + 3);
  v33 = *((_QWORD*)a4 + 4);
  v34 = *((_QWORD*)a4 + 5);
  *(_QWORD*)(result + 128) = a6;
  *(_QWORD*)(result + 136) = a7;
  *(_QWORD*)(result + 112) = v33;
  *(_QWORD*)(result + 120) = v34;
  *(_QWORD*)(result + 96) = v31;
  *(_QWORD*)(result + 104) = v32;
  v35 = *((_QWORD*)a9 + 1);
  *(_QWORD*)(result + 144) = *(_QWORD*)a9;
  *(_QWORD*)(result + 152) = v35;
  v36 = *((_QWORD*)a9 + 2);
  v37 = *((_QWORD*)a9 + 3);
  v38 = *((_QWORD*)a9 + 5);
  *(_QWORD*)(result + 176) = *((_QWORD*)a9 + 4);
  *(_QWORD*)(result + 184) = v38;
  *(_QWORD*)(result + 160) = v36;
  *(_QWORD*)(result + 168) = v37;
  return result;
}

bool nvidia_6207a0(unsigned __int16* a1, unsigned __int16* a2)
{
  return *a1 == *a2 && a1[1] == a2[1] && a1[2] == a2[2] && a1[3] == a2[3] &&
         a1[4] == a2[4] && a1[5] == a2[5] && a1[6] == a2[6] && a1[7] == a2[7] &&
         a1[8] == a2[8] && a1[9] == a2[9] && a1[10] == a2[10] &&
         a1[11] == a2[11];
}

_DWORD* nvidia_620870(_DWORD* result, double* a2)
{
  double v2;
  double v3;
  double v4;
  __int64 v5;
  int v6;
  bool v7;
  double v8;
  double v9;
  double v10;
  __int64 v11;
  int v12;
  double v13;
  __int64 v14;
  int v15;
  double v16;
  double v17;
  double v18;
  __int64 v19;
  int v20;
  double v21;
  __int64 v22;
  int v23;
  double v24;
  double v25;
  double v26;
  __int64 v27;
  int v28;
  double v29;
  __int64 v30;
  int v31;
  double v32;
  double v33;
  double v34;
  __int64 v35;
  int v36;
  double v37;
  __int64 v38;
  int v39;
  double v40;
  double v41;
  double v42;
  double v43;
  __int64 v44;
  double v45;
  __int64 v46;
  double v47;
  int v48;
  double v49;
  __int64 v50;

  v3 = a2[8];
  v2 = a2[9];
  if (v3 >= 0.0) {
    v4 = a2[8];
  }
  else {
    v4 = -v3;
  }
  v5 = (__int64)(v4 * 65536.0 + 0.5 + 1.0e-12);
  v6 = -(int)v5;
  if (v5 == 0x8000000000000000LL) {
    v6 = -1;
  }
  v7 = v3 < 0.0;
  v9 = a2[6];
  v8 = a2[7];
  if (v7) {
    LODWORD(v5) = v6;
  }
  v10 = -v8;
  if (v8 >= 0.0) {
    v10 = a2[7];
  }
  v11 = (__int64)(v10 * 65536.0 + 0.5 + 1.0e-12);
  v12 = -(int)v11;
  if (v11 == 0x8000000000000000LL) {
    v12 = -1;
  }
  v7 = v8 < 0.0;
  v13 = -v9;
  if (v7) {
    LODWORD(v11) = v12;
  }
  if (v9 >= 0.0) {
    v13 = a2[6];
  }
  v14 = (__int64)(v13 * 65536.0 + 0.5 + 1.0e-12);
  v15 = -(int)v14;
  if (v14 == 0x8000000000000000LL) {
    v15 = -1;
  }
  v7 = v9 < 0.0;
  v17 = a2[4];
  v16 = a2[5];
  if (v7) {
    LODWORD(v14) = v15;
  }
  result[6] = v14;
  result[7] = v11;
  v18 = -v16;
  if (v16 >= 0.0) {
    v18 = v16;
  }
  v19 = (__int64)(v18 * 65536.0 + 0.5 + 1.0e-12);
  v20 = -(int)v19;
  if (v19 == 0x8000000000000000LL) {
    v20 = -1;
  }
  v7 = v16 < 0.0;
  v21 = -v17;
  if (v7) {
    LODWORD(v19) = v20;
  }
  if (v17 >= 0.0) {
    v21 = v17;
  }
  v22 = (__int64)(v21 * 65536.0 + 0.5 + 1.0e-12);
  v23 = -(int)v22;
  if (v22 == 0x8000000000000000LL) {
    v23 = -1;
  }
  v7 = v17 < 0.0;
  v25 = a2[2];
  v24 = a2[3];
  if (v7) {
    LODWORD(v22) = v23;
  }
  result[4] = v22;
  result[5] = v19;
  v26 = -v24;
  if (v24 >= 0.0) {
    v26 = v24;
  }
  v27 = (__int64)(v26 * 65536.0 + 0.5 + 1.0e-12);
  v28 = -(int)v27;
  if (v27 == 0x8000000000000000LL) {
    v28 = -1;
  }
  v7 = v24 < 0.0;
  v29 = -v25;
  if (v7) {
    LODWORD(v27) = v28;
  }
  if (v25 >= 0.0) {
    v29 = v25;
  }
  v30 = (__int64)(v29 * 65536.0 + 0.5 + 1.0e-12);
  v31 = -(int)v30;
  if (v30 == 0x8000000000000000LL) {
    v31 = -1;
  }
  v7 = v25 < 0.0;
  v33 = *a2;
  v32 = a2[1];
  if (v7) {
    LODWORD(v30) = v31;
  }
  result[2] = v30;
  result[3] = v27;
  v34 = -v32;
  if (v32 >= 0.0) {
    v34 = v32;
  }
  v35 = (__int64)(v34 * 65536.0 + 0.5 + 1.0e-12);
  v36 = -(int)v35;
  if (v35 == 0x8000000000000000LL) {
    v36 = -1;
  }
  v7 = v32 < 0.0;
  v37 = -v33;
  if (v7) {
    LODWORD(v35) = v36;
  }
  if (v33 >= 0.0) {
    v37 = v33;
  }
  v38 = (__int64)(v37 * 65536.0 + 0.5 + 1.0e-12);
  v39 = -(int)v38;
  if (v38 == 0x8000000000000000LL) {
    v39 = -1;
  }
  v7 = v33 < 0.0;
  v41 = a2[10];
  v40 = a2[11];
  if (v7) {
    LODWORD(v38) = v39;
  }
  *result = v38;
  result[1] = v35;
  v42 = -v40;
  if (v40 >= 0.0) {
    v42 = v40;
  }
  v43 = v42 * 65536.0 + 0.5 + 1.0e-12;
  LODWORD(v44) = -(int)(__int64)v43;
  if ((__int64)v43 == 0x8000000000000000LL) {
    LODWORD(v44) = -1;
  }
  v7 = v40 < 0.0;
  v45 = -v41;
  if (!v7) {
    v44 = (__int64)v43;
  }
  if (v41 >= 0.0) {
    v45 = v41;
  }
  v46 = (__int64)(v45 * 65536.0 + 0.5 + 1.0e-12);
  v47 = -v2;
  v48 = -(int)v46;
  if (v46 == 0x8000000000000000LL) {
    v48 = -1;
  }
  if (v41 < 0.0) {
    LODWORD(v46) = v48;
  }
  result[10] = v46;
  result[11] = v44;
  if (v2 >= 0.0) {
    v47 = v2;
  }
  v49 = v47 * 65536.0 + 0.5 + 1.0e-12;
  if ((__int64)v49 == 0x8000000000000000LL) {
    LODWORD(v50) = -1;
  }
  else {
    LODWORD(v50) = -(int)(__int64)v49;
  }
  if (v2 >= 0.0) {
    v50 = (__int64)v49;
  }
  result[8] = v5;
  result[9] = v50;
  return result;
}

__int64 nvidia_620cc0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;

  v1 = *(_QWORD*)(result + 16);
  v2 = *(unsigned int*)(result + 24);
  v3 = result;
  if ((_DWORD)v2 != 0) {
    v4 = 32 * v2;
    v5 = (_QWORD*)(v1 + 16);
    do {
      if (*v5 != 0) {
        v6 = nvidia_617a80(v3);
        result = SdkRoutine_6165a0(v6, *v5);
      }
      v5 += 4;
      v4 -= 32;
    } while (v4 != 0);
    v1 = *(_QWORD*)(v3 + 16);
  }
  if (v1 != 0) {
    v7 = nvidia_617a80(v3 + 8);
    result = SdkRoutine_6165a0(v7, *(_QWORD*)(v3 + 16));
    *(_QWORD*)(v3 + 16) = 0;
    *(_DWORD*)(v3 + 24) = 0;
  }
  return result;
}

_QWORD* nvidia_620d60(__int64 a1, __int64 a2)
{
  int v2;
  __int64 v3;
  unsigned __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  int v8;
  bool v9;
  int v10;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;

  v2 = *(_DWORD*)(a1 + 24);
  if (v2 != 0) {
    v3 = 32LL * *(unsigned int*)(a1 + 24);
    v4 = v3 - 32;
    if ((~(32 * (_BYTE)v2 - 32) & 0x60) != 0) {
      v6 = ((unsigned __int8)((unsigned int)v4 >> 5) + 1) & 3;
      v5 = *(_QWORD**)(a1 + 16);
      while (*v5 != a2) {
        v5 += 4;
        if (--v6 == 0) {
          goto LABEL_7;
        }
      }
    }
    else {
      v5 = *(_QWORD**)(a1 + 16);
    LABEL_7:
      if (v4 < 0x60) {
        goto LABEL_8;
      }
      v12 = *(_QWORD*)(a1 + 16) + v3;
      v5 += 8;
      while (1) {
        if (*(v5 - 8) == a2) {
          v5 -= 8;
          goto LABEL_22;
        }
        if (*(v5 - 4) == a2) {
          v5 -= 4;
          goto LABEL_22;
        }
        if (*v5 == a2) {
          goto LABEL_22;
        }
        if (v5[4] == a2) {
          break;
        }
        v13 = v5 + 8;
        v5 += 16;
        if (v13 == (_QWORD*)v12) {
          goto LABEL_8;
        }
      }
      v5 += 4;
    }
  LABEL_22:
    v14 = *(_QWORD*)(a1 + 32) + 1LL;
    *(_QWORD*)(a1 + 32) = v14;
    v5[1] = v14;
    return v5;
  }
LABEL_8:
  v7 = nvidia_617a90((_QWORD*)a1);
  v8 = *(_DWORD*)(v7 + 44);
  v9 = __CFADD__(v8, 1);
  v10 = v8 + 1;
  if (v9) {
    v10 = -1;
  }
  *(_DWORD*)(v7 + 44) = v10;
  return nullptr;
}

__int64 nvidia_620e80(__int64 result, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4;
  unsigned __int64 v5;
  _QWORD* v6;
  __int64 v7;
  _QWORD* v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  bool v13;
  __int64 v14;
  __int64 v15;

  v4 = *(unsigned int*)(result + 24);
  v5 = *(_QWORD*)(result + 32) + 1LL;
  *(_QWORD*)(result + 32) = v5;
  if ((_DWORD)v4 != 0) {
    v6 = *(_QWORD**)(result + 16);
    v7 = 32 * v4;
    v8 = nullptr;
    v9 = 0;
    do {
      if (*v6 == 0) {
        v15 = v6[2];
        *v6 = a2;
        v6[1] = v5;
        return memmove_plt(v15, a3, a4);
      }
      v10 = v6[1];
      if (v5 < v10) {
        v11 = ~v10;
      }
      else {
        v11 = -(__int64)v10;
      }
      v12 = v11 + v5;
      v13 = v9 >= v12;
      if (v9 <= v12) {
        v9 = v12;
      }
      if (!v13) {
        v8 = v6;
      }
      v6 += 4;
      v7 -= 32;
    } while (v7 != 0);
    if (v8 != nullptr) {
      v14 = v8[2];
      *v8 = a2;
      v8[1] = v5;
      return memmove_plt(v14, a3, a4);
    }
  }
  return result;
}

long double nvidia_621720(float a1)
{
  float v2;
  float v3;
  long double v4;
  float v5;
  long double v6;
  long double v7;
  long double v8;
  float v9;
  long double v10;
  float v11;
  long double v12;
  float v13;
  int v14;
  float v15;
  int v16;
  float v17;
  long double v18;
  float v19;
  long double v20;
  float v21;
  int v22;
  float v23;
  long double v24;
  float v25;
  float v26;
  float v27;
  float v28;
  _QWORD v30[3];
  _QWORD v31[7];

  v30[0] = 0xC0800000C0800000LL;
  v30[1] = 0xBEF872B0C04A1275LL;
  v30[2] = 0x3FEC827F3FEC827FLL;
  v31[0] = 0x40052F9BBF37F2C7LL;
  v31[1] = 0x40800000406AC28CLL;
  v31[2] = 0x4080000040800000LL;
  v2 = exp2f_plt(-0x1.e000000000000p+3f) * 0x1.70a3d80000000p-3f;
  v3 = exp2f_plt(0x1.2000000000000p+4f);
  *(float*)&v4 = a1;
  if (a1 <= 0x0.0p+0f) {
    *(float*)&v4 = exp2f_plt(-0x1.c000000000000p+3f);
  }
  v5 = log10f_plt(v4);
  *(float*)&v6 = v2;
  if (v5 <= log10f_plt(v6)) {
    v16 = 953267991;
  }
  else {
    *(float*)&v7 = v2;
    if (v5 > log10f_plt(v7)) {
      LODWORD(v8) = 1043878380;
      if (v5 < log10f_plt(v8)) {
        *(float*)&v8 = v2;
        v9 = (float)(v5 - log10f_plt(v8)) * 0x1.8000000000000p+1f;
        LODWORD(v10) = 1043878380;
        v11 = log10f_plt(v10);
        *(float*)&v12 = v2;
        v13 = v9 / (float)(v11 - log10f_plt(v12));
        if (v13 >= -0x1.0000000000000p+31f) {
          if (v13 <= 0x1.fffffffc00000p+30) {
            v14 = (int)v13 & ~((int)v13 >> 31);
            v15 = v13 - (float)(int)v13;
            if (v14 >= 3) {
              v14 = 3;
            }
          }
          else {
            v14 = 3;
            v15 = v13 + -0x1.0000000000000p+31f;
          }
        }
        else {
          v14 = 0;
          v15 = v13 + 0x1.0000000000000p+31f;
        }
        v26 = *((float*)v30 + (unsigned int)v14);
        v27 = *((float*)v30 + (unsigned int)(v14 + 1));
        v28 = *((float*)v30 + (unsigned int)(v14 + 2));
      LABEL_25:
        v25 =
            (float)((float)((float)(PSEUDO_UNFUSED(v26 *
                                                   0x1.0000000000000p-1f)) +
                            (float)(PSEUDO_UNFUSED(v27 *
                                                   0x1.0000000000000p-1f))) +
                    (float)(PSEUDO_UNFUSED(v28 * 0x0.0p+0f))) +
            (float)((float)(PSEUDO_UNFUSED(
                        v15 *
                        (float)((float)(v27 - v26) +
                                (float)(PSEUDO_UNFUSED(v28 * 0x0.0p+0f))))) +
                    (float)((float)(v15 * v15) *
                            (float)((float)((float)(PSEUDO_UNFUSED(
                                                v26 * 0x1.0000000000000p-1f)) -
                                            v27) +
                                    (float)(PSEUDO_UNFUSED(
                                        v28 * 0x1.0000000000000p-1f)))));
        return powf_plt(0x1.4000000000000p+3f, v25);
      }
    }
    v2 = v3 * 0x1.70a3d80000000p-3f;
    LODWORD(v8) = 1043878380;
    if (v5 >= log10f_plt(v8)) {
      *(float*)&v7 = v3 * 0x1.70a3d80000000p-3f;
      if (v5 < log10f_plt(v7)) {
        LODWORD(v7) = 1043878380;
        v17 = (float)(v5 - log10f_plt(v7)) * 0x1.8000000000000p+1f;
        *(float*)&v18 = v3 * 0x1.70a3d80000000p-3f;
        v19 = log10f_plt(v18);
        LODWORD(v20) = 1043878380;
        v21 = v17 / (float)(v19 - log10f_plt(v20));
        if (v21 >= -0x1.0000000000000p+31f) {
          if (v21 <= 0x1.fffffffc00000p+30) {
            v22 = (int)v21 & ~((int)v21 >> 31);
            v15 = v21 - (float)(int)v21;
            if (v22 >= 3) {
              v22 = 3;
            }
          }
          else {
            v22 = 3;
            v15 = v21 + -0x1.0000000000000p+31f;
          }
        }
        else {
          v22 = 0;
          v15 = v21 + 0x1.0000000000000p+31f;
        }
        v26 = *((float*)v31 + (unsigned int)v22);
        v27 = *((float*)v31 + (unsigned int)(v22 + 1));
        v28 = *((float*)v31 + (unsigned int)(v22 + 2));
        goto LABEL_25;
      }
    }
    v16 = 1176256512;
  }
  LODWORD(v7) = v16;
  v23 = log10f_plt(v7);
  *(float*)&v24 = v2;
  v25 = (float)(v23 + (float)(log10f_plt(v24) * -0x0.0p+0f)) +
        (float)(v5 * 0x0.0p+0f);
  return powf_plt(0x1.4000000000000p+3f, v25);
}

float nvidia_621a20(__int64 a1, __int64 a2, float a3, float a4, float a5,
                    float a6)
{
  __int64 v6;
  __int64 v7;
  __int64 v12;
  __int64 v13;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  float v21;
  float v22;
  int v23;
  long double v24;
  float v25;
  long double v26;
  float v27;
  long double v28;
  float v29;
  int v30;
  float v31;
  long double v32;
  float v33;
  float v34;
  long double v35;
  float v36;
  long double v37;
  float v38;
  float v39;
  long double v40;
  float v41;
  long double v42;
  float v43;
  float v44;
  long double v45;
  float v46;
  long double v47;
  float v48;
  float v49;
  long double v50;
  float v51;
  long double v52;
  float v53;
  float v54;
  long double v55;
  float v56;
  long double v57;
  float v58;
  float v59;
  long double v60;
  float v61;
  long double v62;
  float v63;
  float v64;
  long double v65;
  float v66;
  long double v67;
  float v68;
  float v69;
  long double v70;
  float v71;
  long double v72;
  float v73;
  float v74;
  long double v75;
  float v76;
  long double v77;
  float v78;
  float v79;
  long double v80;
  float v81;
  long double v82;
  long double v83;
  float v84;
  long double v85;
  float v86;
  long double v87;
  float v88;
  int v89;
  float v90;
  long double v91;
  float v92;
  float v93;
  float v94;
  long double v95;
  float v96;
  long double v97;
  float v98;
  float v99;
  long double v100;
  float v101;
  long double v102;
  float v103;
  float v104;
  long double v105;
  float v106;
  long double v107;
  float v108;
  float v109;
  long double v110;
  float v111;
  long double v112;
  float v113;
  float v114;
  long double v115;
  float v116;
  long double v117;
  float v118;
  float v119;
  long double v120;
  float v121;
  long double v122;
  float v123;
  float v124;
  long double v125;
  float v126;
  long double v127;
  float v128;
  float v129;
  long double v130;
  float v131;
  long double v132;
  float v133;
  float v134;
  long double v135;
  float v136;
  long double v137;
  float v138;
  float v139;
  long double v140;
  float v141;
  long double v142;
  float v143;
  int v144;
  float v145;
  float v146;
  float v147;
  long double v148;
  float v149;
  long double v150;
  float v151;
  long double v152;
  float v153;
  long double v154;
  float v155;
  float v156;
  float v157;
  float v158;
  float v159;
  float v160;
  float v161;
  float v162;
  float v163;
  float v164;
  float v165;
  float v166;
  float v167;
  float v168;
  float v169;
  float v170;
  float v171;
  float v172;
  float v173;
  float v174;
  float v175;
  float v176;
  float v177;
  float v178;
  float v179;
  float v180;
  float v181;
  float v182;
  float v183;
  float v184;
  float v185;
  float v186;
  float v187;
  float v188;
  float v189;
  float v190;
  float v191;
  float v192;
  float v193;
  float v194;
  float v195;
  float v196;
  float v197;
  float v198;
  float v199;
  float v200;
  float v201;
  float v202;
  float v203;
  float v204;
  float v205;
  float v206;
  float v207;
  float v208;
  float v209;
  float v210;
  float v211;
  float v212;
  float v213;
  float v214;
  float v215;
  float v216;
  float v217;
  float v218;
  float v219;
  float v220;
  float v221;
  float v222;
  float v223;
  float v224;
  float v225;
  float v226;
  float v227;
  float v228;
  float v229;
  float v230;
  float v231;
  float v232;
  float v233;
  float v234;
  float v235;
  float v236;
  float v237;
  float v238;
  float v239;
  float v240;
  float v241;
  float v242;
  float v243;
  float v244;
  float v245;
  float v246;
  float v247;
  float v248;
  float v249;
  float v250;
  float v251;
  float v252;
  float v253;
  float v254;
  float v255;
  float v256;
  float v257;
  float result;
  float v259;
  float v260;
  float v261;
  float v262;
  float v263;
  float v264;
  float v265;
  float v266;
  float v267;
  float v268;

  v6 = *(_QWORD*)(a2 + 104);
  v7 = *(_QWORD*)(a2 + 112);
  *(_QWORD*)(a1 + 96) = *(_QWORD*)(a2 + 96);
  *(_QWORD*)(a1 + 104) = v6;
  v12 = *(_QWORD*)(a2 + 64);
  v13 = *(_QWORD*)(a2 + 72);
  *(_QWORD*)(a1 + 112) = v7;
  *(_QWORD*)(a1 + 64) = v12;
  *(_QWORD*)(a1 + 72) = v13;
  v16 = *(_QWORD*)(a2 + 88);
  *(_QWORD*)(a1 + 80) = *(_QWORD*)(a2 + 80);
  *(_QWORD*)(a1 + 88) = v16;
  v17 = *(_QWORD*)(a2 + 40);
  *(_QWORD*)(a1 + 32) = *(_QWORD*)(a2 + 32);
  *(_QWORD*)(a1 + 40) = v17;
  v18 = *(_QWORD*)(a2 + 56);
  *(_QWORD*)(a1 + 48) = *(_QWORD*)(a2 + 48);
  *(_QWORD*)(a1 + 56) = v18;
  v19 = *(_QWORD*)(a2 + 8);
  *(_QWORD*)a1 = *(_QWORD*)a2;
  *(_QWORD*)(a1 + 8) = v19;
  v20 = *(_QWORD*)(a2 + 24);
  *(_QWORD*)(a1 + 16) = *(_QWORD*)(a2 + 16);
  *(_QWORD*)(a1 + 24) = v20;
  *(float*)(a1 + 96) = nvidia_621720_alt1(a4);
  *(float*)(a1 + 100) = a5;
  *(float*)(a1 + 116) = a4;
  *(float*)(a1 + 80) = nvidia_621720_alt1(a3);
  v21 = *(float*)(a1 + 92);
  *(float*)(a1 + 112) = a3;
  v22 = a6 * v21;
  v23 = *(_DWORD*)(a2 + 92);
  *(float*)(a1 + 92) = v22;
  LODWORD(v24) = v23;
  v25 = log10f_plt(v24);
  LODWORD(v26) = *(_DWORD*)(a2 + 84);
  v27 = v25 - log10f_plt(v26);
  *(float*)&v28 = v22;
  v29 = log10f_plt(v28);
  v30 = *(_DWORD*)(a1 + 84);
  v31 = v29;
  LODWORD(v32) = v30;
  v33 = v27 / (float)(v31 - log10f_plt(v32));
  v34 = *(float*)a1;
  LODWORD(v35) = v30;
  v36 = (float)(v34 - log10f_plt(v35)) / v33;
  LODWORD(v37) = v30;
  v38 = log10f_plt(v37) + v36;
  v39 = *(float*)(a1 + 4);
  *(float*)a1 = v38;
  LODWORD(v40) = v30;
  v41 = (float)(v39 - log10f_plt(v40)) / v33;
  LODWORD(v42) = v30;
  v43 = log10f_plt(v42) + v41;
  v44 = *(float*)(a1 + 8);
  *(float*)(a1 + 4) = v43;
  LODWORD(v45) = v30;
  v46 = (float)(v44 - log10f_plt(v45)) / v33;
  LODWORD(v47) = v30;
  v48 = log10f_plt(v47) + v46;
  v49 = *(float*)(a1 + 12);
  *(float*)(a1 + 8) = v48;
  LODWORD(v50) = v30;
  v51 = (float)(v49 - log10f_plt(v50)) / v33;
  LODWORD(v52) = v30;
  v53 = log10f_plt(v52) + v51;
  v54 = *(float*)(a1 + 16);
  *(float*)(a1 + 12) = v53;
  LODWORD(v55) = v30;
  v56 = (float)(v54 - log10f_plt(v55)) / v33;
  LODWORD(v57) = v30;
  v58 = log10f_plt(v57) + v56;
  v59 = *(float*)(a1 + 20);
  *(float*)(a1 + 16) = v58;
  LODWORD(v60) = v30;
  v61 = (float)(v59 - log10f_plt(v60)) / v33;
  LODWORD(v62) = v30;
  v63 = log10f_plt(v62) + v61;
  v64 = *(float*)(a1 + 24);
  *(float*)(a1 + 20) = v63;
  LODWORD(v65) = v30;
  v66 = (float)(v64 - log10f_plt(v65)) / v33;
  LODWORD(v67) = v30;
  v68 = log10f_plt(v67) + v66;
  v69 = *(float*)(a1 + 28);
  *(float*)(a1 + 24) = v68;
  LODWORD(v70) = v30;
  v71 = (float)(v69 - log10f_plt(v70)) / v33;
  LODWORD(v72) = v30;
  v73 = log10f_plt(v72) + v71;
  v74 = *(float*)(a1 + 32);
  *(float*)(a1 + 28) = v73;
  LODWORD(v75) = v30;
  v76 = (float)(v74 - log10f_plt(v75)) / v33;
  LODWORD(v77) = v30;
  v78 = log10f_plt(v77) + v76;
  v79 = *(float*)(a1 + 36);
  *(float*)(a1 + 32) = v78;
  LODWORD(v80) = v30;
  v81 = (float)(v79 - log10f_plt(v80)) / v33;
  LODWORD(v82) = v30;
  v261 = log10f_plt(v82) + v81;
  *(float*)(a1 + 36) = v261;
  LODWORD(v83) = *(_DWORD*)(a2 + 100);
  v84 = log10f_plt(v83);
  LODWORD(v85) = v23;
  v86 = v84 - log10f_plt(v85);
  LODWORD(v87) = *(_DWORD*)(a1 + 100);
  v88 = log10f_plt(v87);
  v89 = *(_DWORD*)(a1 + 92);
  v90 = v88;
  LODWORD(v91) = v89;
  v92 = v90 - log10f_plt(v91);
  v93 = *(float*)(a1 + 40);
  v94 = v86 / v92;
  LODWORD(v95) = v23;
  v96 = (float)(v93 - log10f_plt(v95)) / v94;
  LODWORD(v97) = v89;
  v98 = v96 + log10f_plt(v97);
  v99 = *(float*)(a1 + 44);
  v260 = v98;
  *(float*)(a1 + 40) = v98;
  LODWORD(v100) = v23;
  v101 = (float)(v99 - log10f_plt(v100)) / v94;
  LODWORD(v102) = v89;
  v103 = v101 + log10f_plt(v102);
  v104 = *(float*)(a1 + 48);
  LODWORD(v105) = v23;
  *(float*)(a1 + 44) = v103;
  v106 = (float)(v104 - log10f_plt(v105)) / v94;
  LODWORD(v107) = v89;
  v108 = v106 + log10f_plt(v107);
  v109 = *(float*)(a1 + 52);
  LODWORD(v110) = v23;
  *(float*)(a1 + 48) = v108;
  v111 = (float)(v109 - log10f_plt(v110)) / v94;
  LODWORD(v112) = v89;
  v113 = log10f_plt(v112);
  v114 = *(float*)(a1 + 56);
  v262 = v111 + v113;
  *(float*)(a1 + 52) = v111 + v113;
  LODWORD(v115) = v23;
  v116 = (float)(v114 - log10f_plt(v115)) / v94;
  LODWORD(v117) = v89;
  v118 = v116 + log10f_plt(v117);
  v119 = *(float*)(a1 + 60);
  v263 = v118;
  *(float*)(a1 + 56) = v118;
  LODWORD(v120) = v23;
  v121 = (float)(v119 - log10f_plt(v120)) / v94;
  LODWORD(v122) = v89;
  v123 = v121 + log10f_plt(v122);
  v124 = *(float*)(a1 + 64);
  v264 = v123;
  *(float*)(a1 + 60) = v123;
  LODWORD(v125) = v23;
  v126 = (float)(v124 - log10f_plt(v125)) / v94;
  LODWORD(v127) = v89;
  v128 = v126 + log10f_plt(v127);
  v129 = *(float*)(a1 + 68);
  v265 = v128;
  *(float*)(a1 + 64) = v128;
  LODWORD(v130) = v23;
  v131 = (float)(v129 - log10f_plt(v130)) / v94;
  LODWORD(v132) = v89;
  v133 = v131 + log10f_plt(v132);
  v134 = *(float*)(a1 + 72);
  v266 = v133;
  *(float*)(a1 + 68) = v133;
  LODWORD(v135) = v23;
  v136 = (float)(v134 - log10f_plt(v135)) / v94;
  LODWORD(v137) = v89;
  v138 = v136 + log10f_plt(v137);
  v139 = *(float*)(a1 + 76);
  v267 = v138;
  *(float*)(a1 + 72) = v138;
  LODWORD(v140) = v23;
  v141 = (float)(v139 - log10f_plt(v140)) / v94;
  LODWORD(v142) = v89;
  v143 = v141 + log10f_plt(v142);
  v144 = *(_DWORD*)(a1 + 88);
  v268 = v143;
  *(float*)(a1 + 76) = v143;
  v145 = *(float*)(a1 + 28);
  v146 = *(float*)(a1 + 32);
  v147 =
      (float)((float)(v145 * 0.5) + (float)(v146 * 0.5)) + (float)(v261 * 0.0);
  v259 = (float)(v146 - v145) + (float)(v261 * 0.0);
  LODWORD(v148) = v144;
  v149 = log10f_plt(v148);
  LODWORD(v150) = *(_DWORD*)(a1 + 80);
  v151 = 1.0 / (float)(v149 - log10f_plt(v150));
  LODWORD(v152) = *(_DWORD*)(a1 + 96);
  v153 = log10f_plt(v152);
  LODWORD(v154) = v144;
  v155 = v153 - log10f_plt(v154);
  v156 = v264;
  v157 = (float)(v259 * v151) / (float)(1.0 / v155);
  v158 =
      (float)((float)((float)((float)(v157 +
                                      (float)((float)((float)((float)(v260 *
                                                                      0.5) -
                                                              v103) +
                                                      (float)(v108 * 0.5)) *
                                              2.0)) +
                              (float)((float)((float)((float)(v103 - v260) +
                                                      (float)(v108 * 0.0)) +
                                              (float)((float)((float)((float)(v260 *
                                                                              0.5) -
                                                                      v103) +
                                                              (float)(v108 *
                                                                      0.5)) *
                                                      2.0)) *
                                      7.0)) *
                      0.125) -
              v157) *
      0.5;
  v159 = v147 + (float)((float)(v157 * 0.5) + (float)(v158 * 0.0));
  v160 = v147 + (float)((float)(v158 * 0.0) - (float)(v157 * 0.5));
  v161 = v147 + (float)((float)(v157 * 1.5) + (float)(v158 + v158));
  v162 = v161 * 0.5;
  v163 = (float)(v159 * 0.5) - v161;
  v164 = v161 - v159;
  v165 = (float)(v159 * 0.5) + v162;
  v166 = *(float*)(a1 + 52);
  v167 = *(float*)(a1 + 56);
  v168 = v166 * 0.5;
  v169 = v166 * 0.0;
  v170 = v163 + v168;
  v171 = v164 + v169;
  v172 = v165 + v169;
  v173 =
      (float)((float)((float)((float)((float)(v171 + (float)(v170 * 2.0)) +
                                      (float)(v171 + (float)(v170 * 2.0))) +
                              (float)((float)((float)((float)(v108 - v103) +
                                                      (float)(v262 * 0.0)) +
                                              (float)((float)((float)((float)(v103 *
                                                                              0.5) -
                                                                      v108) +
                                                              (float)(v262 *
                                                                      0.5)) *
                                                      2.0)) *
                                      6.0)) *
                      0.125) -
              v171) *
      0.5;
  v174 = v173 * 0.0;
  v175 = (float)(v171 * 1.5) + (float)(v173 + v173);
  v176 = v174 - (float)(v171 * 0.5);
  v177 = (float)(v171 * 0.5) + v174;
  v178 = v172 + v176;
  v179 = v172 + v177;
  v180 = v172 + v175;
  *(float*)(a1 + 40) = v160;
  *(float*)(a1 + 44) = v178;
  v181 = (float)(v179 * 0.5) - v180;
  v182 = (float)(v179 * 0.5) + (float)(v180 * 0.5);
  v183 = v167 * 0.5;
  v184 = v167 * 0.0;
  v185 = v180 - v179;
  v186 = (float)(v185 + v184) * 0.5;
  v187 =
      (float)((float)((float)((float)((float)((float)(v185 + v184) +
                                              (float)((float)(v181 + v183) *
                                                      2.0)) *
                                      3.0) +
                              (float)((float)((float)((float)(v262 - v108) +
                                                      (float)(v263 * 0.0)) +
                                              (float)((float)((float)((float)(v108 *
                                                                              0.5) -
                                                                      v262) +
                                                              (float)(v263 *
                                                                      0.5)) *
                                                      2.0)) *
                                      5.0)) *
                      0.125) -
              (float)(v185 + v184)) *
      0.5;
  v188 = (float)(v182 + v184) +
         (float)((float)((float)(v185 + v184) * 1.5) + (float)(v187 + v187));
  v189 = (float)(v182 + v184) + (float)(v186 + (float)(v187 * 0.0));
  v190 = (float)(v182 + v184) + (float)((float)(v187 * 0.0) - v186);
  v191 = v188 * 0.5;
  v192 = (float)(v189 * 0.5) - v188;
  v193 = v188 - v189;
  v194 = (float)(v189 * 0.5) + v191;
  v195 = *(float*)(a1 + 60);
  v196 = *(float*)(a1 + 64);
  v197 = v195 * 0.5;
  v198 = v195 * 0.0;
  v199 = v193 + v198;
  v200 = v194 + v198;
  v201 = (float)((float)(v199 + (float)((float)(v192 + v197) * 2.0)) * 4.0) +
         (float)((float)((float)((float)(v263 - v262) + (float)(v156 * 0.0)) +
                         (float)((float)((float)((float)(v262 * 0.5) - v263) +
                                         (float)(v156 * 0.5)) *
                                 2.0)) *
                 4.0);
  v202 = v199 * 0.5;
  v203 = (float)((float)(v201 * 0.125) - v199) * 0.5;
  v204 = (float)(v199 * 0.5) + (float)(v203 * 0.0);
  v205 = v200 + (float)((float)(v199 * 1.5) + (float)(v203 + v203));
  v206 = v200 + (float)((float)(v203 * 0.0) - v202);
  v207 = v200 + v204;
  v209 = v265;
  v208 = v266;
  *(float*)(a1 + 48) = v190;
  *(float*)(a1 + 52) = v206;
  v210 = (float)(v207 * 0.5) + (float)(v205 * 0.5);
  v211 = v196 * 0.5;
  v212 = v196 * 0.0;
  v213 = (float)((float)(v207 * 0.5) - v205) + v211;
  v214 = (float)(v205 - v207) + v212;
  v215 = v210 + v212;
  v216 = (float)(v214 + (float)(v213 * 2.0)) * 5.0;
  v217 = v214 * 0.5;
  v218 =
      (float)((float)((float)(v216 +
                              (float)((float)((float)((float)(v264 - v263) +
                                                      (float)(v209 * 0.0)) +
                                              (float)((float)((float)((float)(v263 *
                                                                              0.5) -
                                                                      v264) +
                                                              (float)(v209 *
                                                                      0.5)) *
                                                      2.0)) *
                                      3.0)) *
                      0.125) -
              v214) *
      0.5;
  v219 = (float)(v214 * 1.5) + (float)(v218 + v218);
  v220 = v217 + (float)(v218 * 0.0);
  v221 = v215 + (float)((float)(v218 * 0.0) - v217);
  v222 = v215 + v220;
  v223 = v215 + v219;
  v224 = v222 * 0.5;
  v225 = v223 - v222;
  v226 = v224 - v223;
  v227 = v224 + (float)(v223 * 0.5);
  v228 = *(float*)(a1 + 68);
  v229 = *(float*)(a1 + 72);
  v230 = v228 * 0.5;
  v231 = v228 * 0.0;
  v232 = v225 + v231;
  v233 = v227 + v231;
  v234 =
      (float)((float)((float)((float)((float)(v232 +
                                              (float)((float)(v226 + v230) *
                                                      2.0)) *
                                      6.0) +
                              (float)((float)((float)((float)(v209 - v156) +
                                                      (float)(v208 * 0.0)) +
                                              (float)((float)((float)((float)(v156 *
                                                                              0.5) -
                                                                      v209) +
                                                              (float)(v208 *
                                                                      0.5)) *
                                                      2.0)) *
                                      2.0)) *
                      0.125) -
              v232) *
      0.5;
  v235 = (float)(v234 * 0.0) - (float)(v232 * 0.5);
  v236 = (float)(v232 * 0.5) + (float)(v234 * 0.0);
  v237 = v233 + (float)((float)(v232 * 1.5) + (float)(v234 + v234));
  v238 = v233 + v236;
  *(float*)(a1 + 56) = v221;
  *(float*)(a1 + 60) = v233 + v235;
  v239 = v237 * 0.5;
  v240 = (float)(v238 * 0.5) - v237;
  v241 = (float)(v237 - v238) + (float)(v229 * 0.0);
  v242 = (float)((float)(v238 * 0.5) + v239) + (float)(v229 * 0.0);
  v243 = (float)((float)((float)((float)((float)((float)(v208 - v209) +
                                                 (float)(v267 * 0.0)) +
                                         (float)((float)((float)((float)(v209 *
                                                                         0.5) -
                                                                 v208) +
                                                         (float)(v267 * 0.5)) *
                                                 2.0)) +
                                 (float)((float)(v241 +
                                                 (float)((float)(v240 +
                                                                 (float)(v229 *
                                                                         0.5)) *
                                                         2.0)) *
                                         7.0)) *
                         0.125) -
                 v241) *
         0.5;
  v244 = (float)(v243 * 0.0) - (float)(v241 * 0.5);
  v245 = (float)(v241 * 0.5) + (float)(v243 * 0.0);
  v246 = v242 + (float)((float)(v241 * 1.5) + (float)(v243 + v243));
  v247 = v242 + v244;
  v248 = v242 + v245;
  v249 = *(float*)(a1 + 76);
  v250 = v246 * 0.5;
  v251 = (float)(v248 * 0.5) - v246;
  v252 = v249 * 0.5;
  v253 = v249 * 0.0;
  v254 = (float)(v246 - v248) + v253;
  v255 = (float)((float)(v248 * 0.5) + v250) + v253;
  v256 =
      (float)((float)((float)((float)((float)(v254 +
                                              (float)((float)(v251 + v252) *
                                                      2.0)) *
                                      8.0) +
                              (float)((float)((float)((float)(v267 - v266) +
                                                      (float)(v268 * 0.0)) +
                                              (float)((float)((float)((float)(v266 *
                                                                              0.5) -
                                                                      v267) +
                                                              (float)(v268 *
                                                                      0.5)) *
                                                      2.0)) *
                                      0.0)) *
                      0.125) -
              v254) *
      0.5;
  v257 = v256 * 0.0;
  result = v255 + (float)((float)(v254 * 1.5) + (float)(v256 + v256));
  *(float*)(a1 + 64) = v247;
  *(float*)(a1 + 68) = v255 + (float)(v257 - (float)(v254 * 0.5));
  *(float*)(a1 + 72) = v255 + (float)((float)(v254 * 0.5) + v257);
  *(float*)(a1 + 76) = result;
  return result;
}

float nvidia_622350(__int64 a1, long double a2)
{
  float v3;
  int v4;
  float v5;
  long double v6;
  long double v7;
  long double v8;
  int v9;
  float v10;
  long double v11;
  float v12;
  long double v13;
  float v14;
  int v15;
  float v16;
  float v17;
  float v18;
  long double v19;
  float v20;
  long double v21;
  int v22;
  float v23;
  long double v24;
  float v25;
  long double v26;
  float v27;
  int v28;
  float v29;
  float v30;
  long double v31;
  float v32;
  float v33;
  float v34;

  if (*(float*)&a2 <= 0.0) {
    *(float*)&a2 = 0.0001;
  }
  v3 = log10f_plt(a2);
  v4 = *(_DWORD*)(a1 + 160);
  v5 = v3;
  LODWORD(v6) = v4;
  if (v5 <= log10f_plt(v6)) {
    LODWORD(v7) = *(_DWORD*)(a1 + 164);
    v17 = *(float*)(a1 + 184);
    v18 = log10f_plt(v7);
    LODWORD(v19) = v4;
    v20 = (float)(v18 - (float)(v17 * log10f_plt(v19))) + (float)(v5 * v17);
  }
  else {
    LODWORD(v7) = v4;
    *(float*)&v8 = log10f_plt(v7);
    v9 = *(_DWORD*)(a1 + 168);
    if (v5 > *(float*)&v8) {
      LODWORD(v8) = *(_DWORD*)(a1 + 168);
      if (v5 < log10f_plt(v8)) {
        LODWORD(v8) = v4;
        v10 = (float)(v5 - log10f_plt(v8)) * 7.0;
        LODWORD(v11) = v9;
        v12 = log10f_plt(v11);
        LODWORD(v13) = v4;
        v14 = v10 / (float)(v12 - log10f_plt(v13));
        if (v14 >= -2147500000.0) {
          if (v14 <= 2147483650.0) {
            v15 = (int)v14 & ~((int)v14 >> 31);
            v16 = v14 - (float)(int)v14;
            if (v15 >= 7) {
              v15 = 7;
            }
          }
          else {
            v15 = 7;
            v16 = v14 + -2147500000.0;
          }
        }
        else {
          v15 = 0;
          v16 = v14 + 2147500000.0;
        }
        v32 = *(float*)(a1 + 16LL * (unsigned int)v15);
        v33 = *(float*)(a1 + 16LL * (unsigned int)(v15 + 1));
        v34 = *(float*)(a1 + 16LL * (unsigned int)(v15 + 2));
      LABEL_24:
        v20 = (float)((float)((float)(v32 * 0.5) + (float)(v33 * 0.5)) +
                      (float)(v34 * 0.0)) +
              (float)((float)(v16 * (float)((float)(v33 - v32) +
                                            (float)(v34 * 0.0))) +
                      (float)((float)(v16 * v16) *
                              (float)((float)((float)(v32 * 0.5) - v33) +
                                      (float)(v34 * 0.5))));
        return powf_plt_alt1(10.0, v20);
      }
    }
    LODWORD(v8) = v9;
    if (v5 >= log10f_plt(v8)) {
      v22 = *(_DWORD*)(a1 + 176);
      LODWORD(v21) = v22;
      if (v5 < log10f_plt(v21)) {
        LODWORD(v21) = v9;
        v23 = (float)(v5 - log10f_plt(v21)) * 7.0;
        LODWORD(v24) = v22;
        v25 = log10f_plt(v24);
        LODWORD(v26) = v9;
        v27 = v23 / (float)(v25 - log10f_plt(v26));
        if (v27 >= -2147500000.0) {
          if (v27 <= 2147483650.0) {
            v28 = (int)v27 & ~((int)v27 >> 31);
            v16 = v27 - (float)(int)v27;
            if (v28 >= 7) {
              v28 = 7;
            }
          }
          else {
            v28 = 7;
            v16 = v27 + -2147500000.0;
          }
        }
        else {
          v28 = 0;
          v16 = v27 + 2147500000.0;
        }
        v32 = *(float*)(a1 + 16LL * (unsigned int)v28 + 4);
        v33 = *(float*)(a1 + 16LL * (unsigned int)(v28 + 1) + 4);
        v34 = *(float*)(a1 + 16LL * (unsigned int)(v28 + 2) + 4);
        goto LABEL_24;
      }
    }
    LODWORD(v21) = *(_DWORD*)(a1 + 180);
    v29 = *(float*)(a1 + 188);
    v30 = log10f_plt(v21);
    LODWORD(v31) = *(_DWORD*)(a1 + 176);
    v20 = (float)(v30 - (float)(v29 * log10f_plt(v31))) + (float)(v5 * v29);
  }
  return powf_plt_alt1(10.0, v20);
}

float nvidia_623710(__int64 a1, float a2)
{
  long double v4;
  float v5;
  bool v6;
  float v7;
  long double v8;
  long double v9;
  float v10;
  float v11;
  long double v12;
  float v13;
  long double v14;
  float v15;
  float v16;
  long double v17;
  float v18;
  float v19;
  float v20;
  float v21;
  long double v22;
  long double v23;
  long double v24;
  long double v25;
  float v26;
  long double v27;
  long double v28;
  float v30;
  float v31;
  float v32;
  float v33;

  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s1", "=w")),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s0", "=w")),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s2", "=w"));
  v32 = a2 + 0x0.0p+0f;
  v4 = powf_plt(a2 + 0x0.0p+0f, 0x1.9f9b580000000p-7f),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s1", "=w")),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s0", "=w")),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s2", "=w"));
  v5 = *(float*)&v4 + -0x1.ac00000000000p-1f;
  v6 = (float)(*(float*)&v4 + -0x1.ac00000000000p-1f) < 0x0.0p+0f;
  v7 = (float)(*(float*)&v4 * -0x1.2b00000000000p+4f) + 0x1.2da0000000000p+4f;
  if (v6) {
    v5 = 0x0.0p+0f;
  }
  v8 = powf_plt(v5 / v7, 0x1.91c0d60000000p+2f),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s1", "=w")),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s0", "=w")),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s2", "=w"));
  v30 = (float)(*(float*)&v8 * 0x1.3880000000000p+13f) / 0x1.4000000000000p+6f;
  v9 = powf_plt(a2, 0x1.9f9b580000000p-7f),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s1", "=w")),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s0", "=w")),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s2", "=w"));
  v10 = *(float*)&v9 + -0x1.ac00000000000p-1f;
  v11 = (float)(*(float*)&v9 * -0x1.2b00000000000p+4f) + 0x1.2da0000000000p+4f;
  if (v10 < 0x0.0p+0f) {
    v10 = 0x0.0p+0f;
  }
  v12 = powf_plt(v10 / v11, 0x1.91c0d60000000p+2f),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s1", "=w")),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s0", "=w")),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s2", "=w"));
  v13 = (float)(*(float*)&v12 * 0x1.3880000000000p+13f) / 0x1.4000000000000p+6f;
  v14 = powf_plt(v32, 0x1.9f9b580000000p-7f),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s1", "=w")),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s0", "=w")),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s2", "=w"));
  v15 = *(float*)&v14 + -0x1.ac00000000000p-1f;
  v16 = (float)(*(float*)&v14 * -0x1.2b00000000000p+4f) + 0x1.2da0000000000p+4f;
  if (v15 < 0x0.0p+0f) {
    v15 = 0x0.0p+0f;
  }
  v17 = powf_plt(v15 / v16, 0x1.91c0d60000000p+2f),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s1", "=w")),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s0", "=w")),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s2", "=w"));
  SdkRoutine_6225f0(
      a1 + 76,
      (float)((float)(PSEUDO_UNFUSED(v13 * -0x1.5483120000000p+2f)) +
              (float)(v30 * 0x1.8b12440000000p+2f)) +
          (float)((float)((float)(*(float*)&v17 * 0x1.3880000000000p+13f) /
                          0x1.4000000000000p+6f) *
                  0x1.2d4d400000000p-3f),
      (float)((float)(PSEUDO_UNFUSED(v13 * 0x1.47b2aa0000000p+1f)) +
              (float)(v30 * -0x1.52e87e0000000p+0f)) +
          (float)((float)((float)(*(float*)&v17 * 0x1.3880000000000p+13f) /
                          0x1.4000000000000p+6f) *
                  -0x1.e388660000000p-3f),
      (float)((float)(PSEUDO_UNFUSED(v13 * -0x1.0f2f980000000p-2f)) +
              (float)(v30 * -0x1.7fb69a0000000p-7f)) +
          (float)((float)((float)(*(float*)&v17 * 0x1.3880000000000p+13f) /
                          0x1.4000000000000p+6f) *
                  0x1.46c4c60000000p+0f)),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s1", "=w")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s0", "=w")),
      v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s2", "=w"));
  v21 = (float)((float)(PSEUDO_UNFUSED(v18 * 0x1.6d53ce0000000p-1f)) +
                (float)(v19 * 0x1.447c300000000p-3f)) +
        (float)(v20 * 0x1.0615220000000p-3f);
  v33 = (float)((float)(PSEUDO_UNFUSED(v18 * 0x1.77af640000000p-4f)) +
                (float)(v19 * 0x1.50dae40000000p-6f)) +
        (float)(v20 * 0x1.c68c6a0000000p-1f);
  v22 = powf_plt((float)((float)((float)((float)(PSEUDO_UNFUSED(
                                             v18 * 0x1.2719f80000000p-1f)) +
                                         (float)(v19 * 0x1.5689ca0000000p-2f)) +
                                 (float)(v20 * 0x1.6d1e100000000p-4f)) *
                         0x1.4000000000000p+6f) /
                     0x1.3880000000000p+13f,
                 0x1.4640000000000p-3f),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s1", "=w")),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s0", "=w")),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s2", "=w"));
  v23 = powf_plt((float)((float)(*(float*)&v22 * 0x1.2da0000000000p+4f) +
                         0x1.ac00000000000p-1f) /
                     (float)((float)(*(float*)&v22 * 0x1.2b00000000000p+4f) +
                             0x1.0000000000000p+0f),
                 0x1.3b60000000000p+6f),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s1", "=w")),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s0", "=w")),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s2", "=w"));
  v31 = *(float*)&v23;
  v24 = powf_plt((float)(v21 * 0x1.4000000000000p+6f) / 0x1.3880000000000p+13f,
                 0x1.4640000000000p-3f),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s1", "=w")),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s0", "=w")),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s2", "=w"));
  v25 = powf_plt((float)((float)(*(float*)&v24 * 0x1.2da0000000000p+4f) +
                         0x1.ac00000000000p-1f) /
                     (float)((float)(*(float*)&v24 * 0x1.2b00000000000p+4f) +
                             0x1.0000000000000p+0f),
                 0x1.3b60000000000p+6f),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s1", "=w")),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s0", "=w")),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s2", "=w"));
  v26 = *(float*)&v25;
  v27 = powf_plt((float)(v33 * 0x1.4000000000000p+6f) / 0x1.3880000000000p+13f,
                 0x1.4640000000000p-3f),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s1", "=w")),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s0", "=w")),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s2", "=w"));
  v28 = powf_plt((float)((float)(*(float*)&v27 * 0x1.2da0000000000p+4f) +
                         0x1.ac00000000000p-1f) /
                     (float)((float)(*(float*)&v27 * 0x1.2b00000000000p+4f) +
                             0x1.0000000000000p+0f),
                 0x1.3b60000000000p+6f),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s1", "=w")),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s0", "=w")),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s2", "=w"));
  return (float)((float)(PSEUDO_UNFUSED(v26 * 0x1.0000000000000p-1f)) +
                 (float)(v31 * 0x1.0000000000000p-1f)) +
         (float)(*(float*)&v28 * 0x0.0p+0f);
}

_QWORD* nvidia_623a50(__int64 a1)
{
  _QWORD* result;
  __int64 v3;

  result = (_QWORD*)SdkRoutine_85e050(0x10u);
  v3 = *(_QWORD*)(a1 + 8);
  *result = nn_os_detail_RemoveNativeWaitHolder_ptr;
  result[1] = v3;
  return result;
}

__int64 nvidia_623a90(__int64 result, _QWORD* a2)
{
  __int64 v2;

  v2 = *(_QWORD*)(result + 8);
  *a2 = nn_os_detail_RemoveNativeWaitHolder_ptr;
  a2[1] = v2;
  return result;
}

__int64 nvidia_623ab0(__int64 a1, float* a2)
{
  return powf_plt_alt2(2.0, (float)(*a2 - *(float*)(*(_QWORD*)(a1 + 8) + 4LL)) /
                                **(float**)(a1 + 8));
}

_QWORD* nvidia_623b00(_QWORD* result, _QWORD* a2)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  _QWORD* v5;
  __int64 v8;
  _QWORD v9[6];

  if (a2 != result) {
    v9[4] = v2;
    v9[5] = v3;
    v4 = result;
    result = (_QWORD*)result[4];
    v5 = (_QWORD*)a2[4];
    if (result == v4) {
      if (v5 == a2) {
        (*(void (**)(_QWORD*, _QWORD*))(*result + 24LL))(result, v9);
        (*(void (**)(_QWORD))(*(_QWORD*)v4[4] + 32LL))(v4[4]);
        v4[4] = 0;
        (*(void (**)(_QWORD, _QWORD*))(*(_QWORD*)a2[4] + 24LL))(a2[4], v4);
        (*(void (**)(_QWORD))(*(_QWORD*)a2[4] + 32LL))(a2[4]);
        v8 = v9[0];
        a2[4] = 0;
        v4[4] = v4;
        (*(void (**)(_QWORD*, _QWORD*))(v8 + 24))(v9, a2);
        result = (_QWORD*)(*(__int64 (**)(_QWORD*))(v9[0] + 32LL))(v9);
      }
      else {
        (*(void (**)(_QWORD*))(*result + 24LL))(result);
        result =
            (_QWORD*)(*(__int64 (**)(_QWORD))(*(_QWORD*)v4[4] + 32LL))(v4[4]);
        v4[4] = a2[4];
      }
      a2[4] = a2;
    }
    else if (v5 == a2) {
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD, _QWORD*))(
          *v5 + 24LL))((void*)v5, a2[4], v4);
      result =
          (_QWORD*)(*(__int64 (**)(_QWORD))(*(_QWORD*)a2[4] + 32LL))(a2[4]);
      a2[4] = v4[4];
      v4[4] = v4;
    }
    else {
      v4[4] = v5;
      a2[4] = result;
    }
  }
  return result;
}

_QWORD* nvidia_623c40(__int64 a1)
{
  _QWORD* result;
  __int64 v3;

  result = (_QWORD*)SdkRoutine_85e050(0x10u);
  v3 = *(_QWORD*)(a1 + 8);
  *result = nn_os_detail_RemoveNativeWaitHolder_ptr;
  result[1] = v3;
  return result;
}

__int64 nvidia_623c80(__int64 result, _QWORD* a2)
{
  __int64 v2;

  v2 = *(_QWORD*)(result + 8);
  *a2 = nn_os_detail_RemoveNativeWaitHolder_ptr;
  a2[1] = v2;
  return result;
}

float nvidia_623ca0(__int64 a1, float* a2)
{
  float* v2;
  long double v3;
  float v4;
  long double v5;

  v2 = *(float**)(a1 + 8);
  v3 = powf_plt(*a2, 0x1.9f9b580000000p-7f);
  v4 = *(float*)&v3 + -0x1.ac00000000000p-1f;
  if ((float)(*(float*)&v3 + -0x1.ac00000000000p-1f) < 0x0.0p+0f) {
    v4 = 0x0.0p+0f;
  }
  v5 = powf_plt(v4 / (float)((float)(*(float*)&v3 * -0x1.2b00000000000p+4f) +
                             0x1.2da0000000000p+4f),
                0x1.91c0d60000000p+2f);
  return (float)((float)(PSEUDO_UNFUSED(*(float*)&v5 *
                                        0x1.3880000000000p+13f)) -
                 v2[1]) /
         *v2;
}

_QWORD* nvidia_623d70()
{
  _QWORD* result;

  result = (_QWORD*)SdkRoutine_85e050(0x10u);
  *result = nn_os_detail_RemoveNativeWaitHolder_ptr;
  return result;
}

void nvidia_623da0(__int64 a1, _QWORD* a2)
{
  *a2 = nn_os_detail_RemoveNativeWaitHolder_ptr;
}

float nvidia_623db0(__int64 a1, __int64 a2) { return *(float*)a2; }

__int64 nvidia_623e00(__int64 a1, __int64 a2, __int64 a3, _QWORD* a4)
{
  _QWORD* v8;
  unsigned int v9;

  if (*a4 != 0) {
    (**(void (***)(_QWORD))*a4)(*a4);
    NvOsFree_plt(*a4);
  }
  *a4 = 0;
  v8 = (_QWORD*)NvOsAlloc_plt(56);
  if (v8 != nullptr) {
    v8[2] = a2;
    v8[3] = a3;
    v8[4] = 0;
    v8[5] = 0;
    v9 = 0;
    v8[6] = 0;
    *v8 = SdkData_e898e8[0] + 2;
    v8[1] = a1;
  }
  else {
    v9 = 6;
  }
  *a4 = v8;
  return v9;
}

__int64 nvidia_623e90(__int64 a1, __int64 a2, __int64 a3, _QWORD* a4)
{
  _QWORD* v8;
  unsigned int v9;
  __int64* v10;

  if (*a4 != 0) {
    (**(void (***)(_QWORD))*a4)(*a4);
    NvOsFree_plt(*a4);
  }
  *a4 = 0;
  v8 = (_QWORD*)NvOsAlloc_plt(56);
  if (v8 != nullptr) {
    v8[2] = a2;
    v8[3] = a3;
    v9 = 0;
    v10 = SdkData_e898f0;
    v8[4] = 0;
    v8[5] = 0;
    v8[6] = 0;
    *v8 = v10 + 2;
    v8[1] = a1;
  }
  else {
    v9 = 6;
  }
  *a4 = v8;
  return v9;
}

__int64 nvidia_623f20(unsigned int a1, unsigned int a2, __int64* a3)
{
  __int64 result;
  __int64 v7;
  __int64 v8;
  unsigned int v9;

  if (a1 > a2) {
    return 11;
  }
  v7 = NvOsAlloc_plt(72);
  if (v7 == 0) {
    return 6;
  }
  v8 = v7;
  nvstl_mutex_impl_nvos_624170(v7, a1, a2);
  v9 = nvidia_623fe0_alt1(v8 + 24, (a2 + 31) & 0xFFFFFFE0);
  result = nvidia_624080(v8 + 48, a2);
  if (v9 != 0) {
    return v9;
  }
  if ((_DWORD)result == 0) {
    *a3 = v8;
  }
  return result;
}

__int64 nvidia_623fe0(__int64* a1, unsigned __int64 a2)
{
  __int64 result;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 i;
  unsigned __int64 v9;
  _QWORD* v10;

  result = nvidia_624a40(a1, a2);
  if ((_DWORD)result == 0) {
    v5 = a1[1];
    v6 = v5 - a2;
    if (v5 <= a2) {
      if (v5 >= a2) {
        return result;
      }
      v7 = *a1;
      for (i = ((_BYTE)a2 - (_BYTE)v5) & 7; i != 0; --i) {
        *(_DWORD*)(v7 + 4 * v5++) = 0;
      }
      if (v6 <= 0xFFFFFFFFFFFFFFF8LL) {
        v9 = a2 - v5;
        v10 = (_QWORD*)(v7 + 4 * v5 + 16);
        do {
          *(v10 - 2) = 0;
          *(v10 - 1) = 0;
          v9 -= 8LL;
          *v10 = 0;
          v10[1] = 0;
          v10 += 4;
        } while (v9 != 0);
      }
    }
    a1[1] = a2;
  }
  return result;
}

atomic_ullong* nvidia_6240f0(atomic_ullong* result, atomic_ullong** a2)
{
  atomic_fetch_add_explicit(result, 1u, memory_order_relaxed);
  *a2 = result;
  return result;
}

__int64 nvidia_624100(atomic_ullong* volatile* a1)
{
  unsigned __int64 add_explicit;
  __int64 result;
  _BOOL4 v4;

  if (*a1 == nullptr) {
    return 0;
  }
  add_explicit = atomic_fetch_add_explicit(*a1, 0xFFFFFFFFFFFFFFFFLL,
                                           memory_order_relaxed);
  result = add_explicit == 1;
  if (add_explicit == 1 && *a1 != nullptr) {
    v4 = add_explicit == 1;
    nvstl_mutex_impl_nvos_6241e0(*a1);
    NvOsFree_plt(*a1);
    result = v4;
  }
  *a1 = nullptr;
  return result;
}

bool nvidia_624420(unsigned __int8* a1, unsigned __int8* a2)
{
  return *a1 == *a2 && a1[1] == a2[1] && a1[2] == a2[2] && a1[3] == a2[3] &&
         a1[4] == a2[4] && a1[5] == a2[5] && a1[6] == a2[6] && a1[7] == a2[7] &&
         a1[8] == a2[8] && a1[9] == a2[9] && a1[10] == a2[10] &&
         a1[11] == a2[11] && a1[12] == a2[12] && a1[13] == a2[13] &&
         a1[14] == a2[14] && a1[15] == a2[15];
}

__int64 nvidia_624770(__int64 a1, _QWORD* a2, _QWORD* a3)
{
  __int64 result;
  __int64 v7;
  __int64 v8;

  v8 = 0;
  v7 = 0;
  memcpy_plt(&v7, a1, 8);
  result = memcpy_plt(&v8, a1 + 8, 8);
  *a2 = v8;
  *a3 = v7;
  return result;
}

__int64 nvidia_624a40(__int64* a1, unsigned __int64 a2)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  _DWORD* v11;
  _DWORD* v12;
  __int64 v13;
  __int64 v14;
  int v15;
  int* v16;
  _DWORD* v17;
  int v18;

  if (a1[2] >= a2) {
    return 0;
  }
  if (a2 >> 62 != 0) {
    return 6;
  }
  v5 = NvOsAlloc_plt(4 * a2);
  if (v5 == 0) {
    return 6;
  }
  v6 = v5;
  v7 = *a1;
  v8 = a1[1];
  if (v8 != 0) {
    v9 = a1[1] & 7;
    if (v8 >= 8) {
      v11 = (_DWORD*)(v7 + 16);
      v12 = (_DWORD*)(v6 + 16);
      v13 = 0;
      v14 = -(__int64)(v8 & 0xFFFFFFFFFFFFFFF8LL);
      do {
        v13 -= 8;
        *(v12 - 4) = *(v11 - 4);
        *(v12 - 3) = *(v11 - 3);
        *(v12 - 2) = *(v11 - 2);
        *(v12 - 1) = *(v11 - 1);
        *v12 = *v11;
        v12[1] = v11[1];
        v12[2] = v11[2];
        v15 = v11[3];
        v11 += 8;
        v12[3] = v15;
        v12 += 8;
      } while (v14 != v13);
      v10 = -v13;
    }
    else {
      v10 = 0;
    }
    if (v9 != 0) {
      v16 = (int*)(v7 + 4 * v10);
      v17 = (_DWORD*)(v6 + 4 * v10);
      do {
        v18 = *v16++;
        --v9;
        *v17++ = v18;
      } while (v9 != 0);
    }
  }
  NvOsFree_plt(v7);
  *a1 = v6;
  a1[2] = a2;
  return 0;
}

__int64 nvidia_624b80(__int64* a1, unsigned __int64 a2)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  _QWORD* v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;

  if (a1[2] >= a2) {
    return 0;
  }
  if (a2 >> 60 != 0) {
    return 6;
  }
  v5 = NvOsAlloc_plt(16 * a2);
  if (v5 == 0) {
    return 6;
  }
  v6 = v5;
  if (a1[1] != 0) {
    v7 = 0;
    v8 = 0;
    do {
      v9 = (_QWORD*)(v5 + v7);
      ++v8;
      v10 = (__int64*)(*a1 + v7);
      v7 += 16;
      v12 = *v10;
      v11 = v10[1];
      *v9 = v12;
      v9[1] = v11;
    } while (v8 < a1[1]);
  }
  NvOsFree_plt(*a1);
  *a1 = v6;
  a1[2] = a2;
  return 0;
}

__int64 nvidia_625d50(char* a1, _DWORD* a2, const char* a3)
{
  const char* v5;
  const char* v6;
  const char* v7;
  const char* v8;
  const char* v9;
  const char* v10;
  const char* v11;
  const char* v12;
  const char* v13;
  char** v15;

  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  if ((unsigned int)strcmp_plt((void*)"silicon", a1, a3) != 0) {
    if ((unsigned int)strcmp_plt((void*)"quickturn", a1, v5) != 0) {
      if ((unsigned int)strcmp_plt((void*)"unit_fpga", a1, v6) != 0) {
        if ((unsigned int)strcmp_plt((void*)"vdk", a1, v7) != 0) {
          if ((unsigned int)strcmp_plt((void*)"vsp", a1, v8) != 0) {
            if ((unsigned int)strcmp_plt((void*)"system_fpga", a1, v9) != 0) {
              if ((unsigned int)strcmp_plt((void*)"asim_quickturn", a1, v10) !=
                  0) {
                if ((unsigned int)strcmp_plt((void*)"asim_linsim", a1, v11) !=
                    0) {
                  if ((unsigned int)strcmp_plt((void*)"dsim_asim_linsim", a1,
                                               v12) != 0) {
                    if ((unsigned int)strcmp_plt((void*)"simulation", a1,
                                                 v13) != 0) {
                      return 11;
                    }
                    v15 = &SdkData_e72c00;
                  }
                  else {
                    v15 = &SdkData_e72bf0;
                  }
                }
                else {
                  v15 = (char**)&SdkData_e72be0;
                }
              }
              else {
                v15 = &SdkData_e72bd0;
              }
            }
            else {
              v15 = &SdkData_e72bc0;
            }
          }
          else {
            v15 = &SdkData_e72bb0;
          }
        }
        else {
          v15 = &SdkData_e72ba0;
        }
      }
      else {
        v15 = &SdkData_e72b90;
      }
    }
    else {
      v15 = (char**)&SdkData_e72b80;
    }
  }
  else {
    v15 = &SdkData_e72b70;
  }
  *a2 = *((_DWORD*)v15 + 2);
  return 0;
}

__int64 nvidia_625ed0()
{
  if ((unsigned int)NvTegraSysDeInit_plt() != 0) {
    return 15;
  }
  else {
    return 0;
  }
}

__int64 nvidia_625f00(_DWORD* a1, _DWORD* a2)
{
  unsigned int v3;
  unsigned int v4;
  unsigned int v5;
  unsigned int v6;

  if ((signed __int32)*a1 < (signed __int32)*a2) {
    return 0xFFFFFFFFLL;
  }
  if ((signed __int32)*a1 > (signed __int32)*a2) {
    return 1;
  }
  v3 = a1[1];
  v4 = a2[1];
  if (v3 < v4) {
    return 0xFFFFFFFFLL;
  }
  if (v3 > v4) {
    return 1;
  }
  v5 = a1[2];
  v6 = a2[2];
  if (v5 >= v6) {
    return v5 > v6;
  }
  else {
    return 0xFFFFFFFFLL;
  }
}

__int64 nvidia_625f80(__int64 a1, _BYTE* a2, __int64 a3)
{
  unsigned __int64 v3;
  __int64 v7;
  unsigned __int64 i;
  __int64 v9;
  unsigned int v10;
  unsigned int v11;
  int v12;
  int v13;
  __int64 result;
  _DWORD v15[3];

  v3 = *(_QWORD*)(a1 + 40);
  if (v3 == 0) {
    return 0;
  }
  v7 = 0;
  for (i = 0; i < v3; ++i) {
    v9 = *(_QWORD*)(a1 + 32);
    if (*(_DWORD*)(v9 + v7 + 8) < 0x100u) {
      goto LABEL_3;
    }
    v10 = (unsigned __int8)*(_DWORD*)(v9 + v7 + 8);
    if (v10 <= 0x95) {
      if (v10 == 45) {
        if ((*a2 & 1) == 0) {
          goto LABEL_3;
        }
      }
      else if (v10 == 64 && (a2[3] & 1) == 0) {
        goto LABEL_3;
      }
    }
    else if (v10 == 150) {
      if (a2[4] != 1) {
        goto LABEL_3;
      }
    }
    else if (v10 == 151) {
      if ((a2[1] & 1) == 0) {
        goto LABEL_3;
      }
    }
    else if (v10 == 192 && (a2[2] & 1) == 0) {
      goto LABEL_3;
    }
    v11 = *(_DWORD*)(v9 + v7) - 1;
    if (v11 <= 0x15 && ((0x3F7DFBu >> v11) & 1) != 0) {
      v12 = SdkData_c76a38[v11];
      v15[2] = *(_DWORD*)(v9 + v7 + 8);
      v13 = *(_DWORD*)(v9 + v7 + 4);
      v15[0] = v12;
      v15[1] = v13;
      result = nvidia_6260f0_alt1(a3, v15);
      if ((_DWORD)result != 0) {
        return result;
      }
      v3 = *(_QWORD*)(a1 + 40);
    }
  LABEL_3:
    v7 += 12;
  }
  return 0;
}

__int64 nvidia_6260f0(_QWORD* a1, __int64* a2)
{
  __int64 v2;
  __int64* v3;
  _QWORD* v4;
  unsigned int v5;
  __int64 v7;
  __int64 v8;

  v2 = a1[1];
  if (a1[2] < (unsigned __int64)(v2 + 1)) {
    v3 = a2;
    v4 = a1;
    v5 = nvidia_627be0();
    if (v5 != 0) {
      return v5;
    }
    v2 = v4[1];
    a1 = v4;
    a2 = v3;
  }
  v7 = *a1 + 12 * v2;
  v8 = *a2;
  *(_DWORD*)(v7 + 8) = *((_DWORD*)a2 + 2);
  *(_QWORD*)v7 = v8;
  ++a1[1];
  return 0;
}

__int64 nvidia_6261a0(__int64 a1, _QWORD* a2, unsigned __int64* a3)
{
  unsigned __int64 v3;
  unsigned __int64 v6;
  __int64 v7;
  _DWORD* v8;
  unsigned __int64 v9;
  __int64 v10;
  int v11;
  int v12;
  __int64 v13;
  int* v14;
  int v15;
  __int64 result;
  _DWORD* v17;
  __int64 v18;
  int v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  _DWORD* v23;
  __int64 v24;
  _DWORD* v25;
  int v26;
  __int64 v27;
  int v28;
  unsigned __int64 v29;
  int* v30;
  int v31;
  int v32;
  int v33;
  int v34;
  _QWORD v35[2];
  __int64 v36;
  __int64 v37;

  v3 = a3[1];
  if (v3 != 0) {
    v6 = v3 - 1;
    if (v3 == 1) {
      v7 = 1;
    }
    else {
      v8 = (_DWORD*)*a3;
      v9 = v3 - 2;
      v10 = v6 & 3;
      v12 = *(_DWORD*)*a3;
      v11 = *(_DWORD*)(*a3 + 4);
      if (v9 >= 3) {
        v29 = v6 & 0xFFFFFFFFFFFFFFFCLL;
        v30 = v8 + 7;
        v7 = 1;
        v13 = 1;
        do {
          v31 = *(v30 - 4);
          if (v12 != v31 || (v31 = v12, v11 != *(v30 - 3))) {
            ++v7;
            v11 = *(v30 - 3);
            v12 = v31;
          }
          v32 = *(v30 - 1);
          if (v12 != v32 || (v32 = v12, v11 != *v30)) {
            ++v7;
            v11 = *v30;
            v12 = v32;
          }
          v33 = v30[2];
          if (v12 != v33 || (v33 = v12, v11 != v30[3])) {
            ++v7;
            v11 = v30[3];
            v12 = v33;
          }
          v34 = v30[5];
          if (v12 != v34 || (v34 = v12, v11 != v30[6])) {
            ++v7;
            v11 = v30[6];
            v12 = v34;
          }
          v13 += 4;
          v29 -= 4LL;
          v30 += 12;
        } while (v29 != 0);
      }
      else {
        v7 = 1;
        v13 = 1;
      }
      if (v10 != 0) {
        v14 = &v8[3 * v13 + 1];
        do {
          v15 = *(v14 - 1);
          if (v12 != v15 || (v15 = v12, v11 != *v14)) {
            ++v7;
            v11 = *v14;
            v12 = v15;
          }
          v14 += 3;
          --v10;
        } while (v10 != 0);
      }
    }
  }
  else {
    v7 = 0;
  }
  nvidia_628d40(a2, 0);
  result = nvidia_6264c0_alt1(a2, v7);
  if ((_DWORD)result == 0) {
    nvidia_623fe0(a2 + 3, 0);
    result = nvidia_624a40(a2 + 3, a3[1]);
    if ((_DWORD)result == 0) {
      if (a3[1] == 0) {
        return 0;
      }
      v17 = (_DWORD*)*a3;
      v36 = 0;
      v37 = 0;
      v35[0] = 0;
      v35[1] = 0;
      result = nvidia_626590_alt1(a2, v35);
      if ((_DWORD)result != 0) {
        return result;
      }
      v18 = *a2 + 32LL * a2[1];
      v19 = v17[1];
      *(_DWORD*)(v18 - 32) = *v17;
      v20 = v18 - 32;
      *(_DWORD*)(v18 - 28) = v19;
      *(_QWORD*)(v18 - 24) = a2[3] + 4LL * a2[4];
      *(_QWORD*)(v18 - 16) = 0;
      *(_DWORD*)(v18 - 8) = -1;
      result = nvidia_626630_alt1(a2 + 3, v17 + 2);
      if ((_DWORD)result != 0) {
        return result;
      }
      ++*(_QWORD*)(v18 - 16);
      if (a3[1] < 2) {
        return 0;
      }
      v21 = 1;
      v22 = 0;
      do {
        v23 = (_DWORD*)*a3;
        v24 = *a3 + v22 * 4;
        v26 = *(_DWORD*)(v24 + 12);
        v25 = (_DWORD*)(v24 + 12);
        if (*v17 != v26 || v17[1] != *(_DWORD*)(*a3 + v22 * 4 + 16)) {
          v36 = 0;
          v37 = 0;
          v35[0] = 0;
          v35[1] = 0;
          result = nvidia_626590_alt1(a2, v35);
          if ((_DWORD)result != 0) {
            return result;
          }
          v27 = *a2 + 32LL * a2[1];
          *(_DWORD*)(v27 - 32) = *v25;
          v20 = v27 - 32;
          v28 = v23[v22 + 4];
          *(_DWORD*)(v20 + 24) = -1;
          *(_DWORD*)(v20 + 4) = v28;
          *(_QWORD*)(v20 + 8) = a2[3] + 4LL * a2[4];
          *(_QWORD*)(v20 + 16) = 0;
        }
        result = nvidia_626630_alt1(a2 + 3, &v23[v22 + 5]);
        if ((_DWORD)result != 0) {
          break;
        }
        ++v21;
        v22 += 3;
        v17 = v25;
        ++*(_QWORD*)(v20 + 16);
      } while (v21 < a3[1]);
    }
  }
  return result;
}

__int64 nvidia_6264c0(__int64* a1, unsigned __int64 a2)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  _QWORD* v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  if (a1[2] >= a2) {
    return 0;
  }
  if (a2 >> 59 != 0) {
    return 6;
  }
  v5 = NvOsAlloc_plt(32 * a2);
  if (v5 == 0) {
    return 6;
  }
  v6 = v5;
  if (a1[1] != 0) {
    v7 = 0;
    v8 = 0;
    do {
      v9 = (_QWORD*)(v5 + v7);
      ++v8;
      v10 = (__int64*)(*a1 + v7);
      v7 += 32;
      v11 = *v10;
      v12 = v10[1];
      v14 = v10[2];
      v13 = v10[3];
      v9[2] = v14;
      v9[3] = v13;
      *v9 = v11;
      v9[1] = v12;
    } while (v8 < a1[1]);
  }
  NvOsFree_plt(*a1);
  *a1 = v6;
  a1[2] = a2;
  return 0;
}

__int64 nvidia_626590(__int64* a1, _QWORD* a2)
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
  __int64 v12;

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
    v7 = nvidia_6264c0(a1, v6);
    if (v7 != 0) {
      return v7;
    }
    v3 = v5[1];
    a1 = v5;
    a2 = v4;
  }
  v9 = a2[3];
  v10 = (_QWORD*)(*a1 + 32 * v3);
  v11 = *a2;
  v12 = a2[1];
  v10[2] = a2[2];
  v10[3] = v9;
  *v10 = v11;
  v10[1] = v12;
  ++a1[1];
  return 0;
}

__int64 nvidia_626630(__int64* a1, _DWORD* a2)
{
  unsigned __int64 v2;
  __int64 v3;
  __int64 v4;
  _DWORD* v5;
  __int64* v6;
  unsigned __int64 v7;
  unsigned int v8;
  __int64 v10;
  int v11;

  v3 = a1[1];
  v2 = a1[2];
  v4 = v3 + 1;
  if (v2 < v3 + 1) {
    v5 = a2;
    v6 = a1;
    if (v2 >= 0x10) {
      v7 = 2 * v2;
    }
    else {
      v7 = 16;
    }
    v8 = nvidia_624a40(a1, v7);
    if (v8 != 0) {
      return v8;
    }
    v3 = v6[1];
    a1 = v6;
    a2 = v5;
    v4 = v3 + 1;
  }
  v10 = *a1;
  v11 = *a2;
  a1[1] = v4;
  *(_DWORD*)(v10 + 4 * v3) = v11;
  return 0;
}

__int64 nvidia_6266c0(unsigned __int16* a1, unsigned __int16* a2)
{
  unsigned int v2;
  unsigned int v3;
  bool v4;
  _BOOL4 v5;

  v2 = *a1;
  v3 = *a2;
  v4 = v2 >= v3;
  v5 = v2 > v3;
  if (v4) {
    return v5;
  }
  else {
    return 0xFFFFFFFFLL;
  }
}

__int64 nvidia_6266e0(__int64 a1, unsigned int a2, unsigned __int16* a3,
                      unsigned int* a4, __int64 a5)
{
  const char* v8;
  unsigned int v9;
  __int64 v11;
  char v12;
  _QWORD v13[2];
  _BYTE v14[64];
  unsigned __int8 v15[128];

  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (a2 >= 2) {
    if (a2 == 2 && (unsigned int)snprintf_plt(
                       v14, 64, "PCI-%04x:%02x:%02x.%x", *a3,
                       *((unsigned __int8*)a3 + 2), *((_BYTE*)a3 + 3) & 0x1F,
                       *((unsigned __int8*)a3 + 3) >> 5) > 0x3F) {
      return 4;
    }
  }
  else {
    snprintf_plt(v14, 64, "AXI0"),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if (*(_BYTE*)(a1 + 169) != 0) {
    v8 = "iGPU";
  }
  else {
    v8 = "dGPU";
  }
  v9 = snprintf_plt(v15, 128, "NVIDIA %s %08X %s", v8, *a4, v14),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v9 > 0x7F) {
    return 4;
  }
  v13[0] = NvSpookyHashShort(v15, v9, 0, 0),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v13[1] = v11;
  memcpy_plt(a5, v13, 16),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v12 = *(_BYTE*)(a5 + 8);
  *(_BYTE*)(a5 + 6) = *(_BYTE*)(a5 + 6) & 0xF | 0x30;
  *(_BYTE*)(a5 + 8) = v12 & 0x3F | 0x80;
  return 0;
}

__int64 nvidia_626810(__int16 a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  __int64 v8;
  __int64 result;
  char v10;
  _QWORD v11[3];
  __int16 v12;
  char v13;
  _QWORD v14[3];
  _QWORD v15[2];
  int v16;
  __int64 v17;
  __int16 v18;

  v18 = a1;
  v17 = a2;
  v16 = 0;
  v15[0] = 0;
  v15[1] = 0;
  memset(v14, 0, 23);
  v11[0] = 0xBF562452A3C916C8LL;
  v11[1] = 0x5BFB03A77EAC9A9DLL;
  v12 = 21840;
  v11[2] = *(_QWORD*)"NVIDIA GPU";
  v13 = 2;
  memcpy_plt(v14, &v18, 2);
  BYTE2(v14[0]) = 8;
  memcpy_plt((char*)v14 + 3, &v17, 8);
  if (a3 != 0) {
    BYTE3(v14[1]) = 11;
    qmemcpy((char*)&v14[1] + 4, "SMC", 3);
    memcpy_plt((char*)&v14[1] + 7, a4, 4);
    memcpy_plt((char*)&v14[2] + 3, a4 + 4, 4);
    v8 = 50;
  }
  else {
    v8 = 38;
  }
  NvSha1Digest(v11, v8, v15);
  result = memcpy_plt(a5, v15, 16);
  v10 = *(_BYTE*)(a5 + 8);
  *(_BYTE*)(a5 + 6) = *(_BYTE*)(a5 + 6) & 0xF | 0x50;
  *(_BYTE*)(a5 + 8) = v10 & 0x3F | 0x80;
  return result;
}

__int64 nvidia_626a60(__int64 a1, unsigned int a2, unsigned __int16* a3,
                      __int64 a4, int a5, __int64 a6, _QWORD* a7, _QWORD* a8)
{
  __int64 v8;
  unsigned int v11;
  __int64 v13;
  __int64 result;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD v21[3];
  __int16 v22;
  char v23;
  __int64 v24;
  _QWORD v25[2];
  _QWORD v26[2];
  int v27;
  __int64 v28;
  __int16 v29;

  v8 = *(_QWORD*)(a4 + 16);
  v19 = 0;
  v20 = 0;
  v17 = 0;
  v18 = 0;
  if (v8 != 0) {
    v11 = *(_DWORD*)(a1 + 16);
    if (HIWORD(v11) != 0) {
      return 11;
    }
    nvidia_626810(v11, v8, a5, a6, (__int64)&v19);
    v13 = *(_QWORD*)(a4 + 16);
    v29 = v11;
    v27 = 0;
    v26[0] = 0;
    v26[1] = 0;
    v24 = 0;
    v25[0] = 0;
    *(_QWORD*)((char*)v25 + 7) = 0;
    v28 = v13;
    v21[0] = 0xBF562452A3C916C8LL;
    v21[1] = 0x5BFB03A77EAC9A9DLL;
    v22 = 21840;
    v21[2] = *(_QWORD*)"NVIDIA GPU";
    v23 = 2;
    memcpy_plt(&v24, &v29, 2);
    BYTE2(v24) = 8;
    memcpy_plt((char*)&v24 + 3, &v28, 8);
    NvSha1Digest(v21, 38, v26);
    memcpy_plt(&v17, v26, 16);
    BYTE6(v17) = BYTE6(v17) & 0xF | 0x50;
    LOBYTE(v18) = v18 & 0x3F | 0x80;
  }
  else {
    result = nvidia_6266e0(a1, a2, a3, (unsigned int*)a4, (__int64)&v19);
    if ((_DWORD)result != 0) {
      return result;
    }
    v17 = v19;
    v18 = v20;
  }
  v15 = v20;
  result = 0;
  *a7 = v19;
  a7[1] = v15;
  v16 = v18;
  *a8 = v17;
  a8[1] = v16;
  return result;
}

__int64 nvidia_626be0(int a1)
{
  __int64 result;
  __int64* v3;
  __int64 v4;

  v3 = (__int64*)((char*)((__int64*)0x4LL) + (_QWORD)SdkData_e89928 + 4);
  result = (__int64)*SdkData_e89928;
  if (*SdkData_e89928 != nullptr) {
    do {
      if (*(_DWORD*)(result + 16) == a1) {
        break;
      }
      v4 = *v3++;
      result = v4;
    } while (v4 != 0);
  }
  return result;
}

__int64 nvidia_626c20(__int64 result, unsigned __int8 a2, __int64 a3)
{
  __int64 v3;
  unsigned __int64 v4;
  unsigned __int8* v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  __int64 v9;

  v3 = *(_QWORD*)(result + 56);
  v4 = *(_QWORD*)(result + 64);
  if (v4 < 2) {
    v6 = 1;
  }
  else {
    v5 = (unsigned __int8*)(v3 + 11);
    v6 = 1;
    while (1) {
      v7 = *v5;
      v5 += 11;
      if (v7 > a2) {
        break;
      }
      if (v4 == ++v6) {
        v6 = *(_QWORD*)(result + 64);
        break;
      }
    }
  }
  v8 = v3 + 11 * v6;
  v9 = *(_QWORD*)(v8 - 10);
  *(_WORD*)(a3 + 8) = *(_WORD*)(v8 - 2);
  *(_QWORD*)a3 = v9;
  return result;
}

__int64 nvidia_626ca0(__int64 a1, _BYTE* a2, __int64* a3)
{
  __int64 v6;
  int* v7;
  int v8;
  __int64 result;
  unsigned __int64 v10;
  __int64 v11;
  int* v12;
  int v13;
  unsigned __int64 v14;
  __int64 v15;
  int* v16;
  int v17;
  unsigned __int64 v18;
  __int64 v19;
  int* v20;
  int v21;
  unsigned __int64 v22;
  __int64 v23;
  int* v24;
  int v25;
  unsigned __int64 v26;
  __int64 v27;
  int* v28;
  int v29;
  unsigned __int64 v30;
  __int64 v31;
  int* v32;
  int v33;
  unsigned __int64 v34;
  __int64 v35;
  int* v36;
  int v37;
  unsigned __int64 v38;
  __int64 v41;
  int* v42;
  int v43;
  unsigned __int64 v44;
  __int64 v47;
  int* v48;
  int v49;
  unsigned __int64 v50;
  __int64 v53;
  int* v54;
  int v55;
  unsigned __int64 v56;
  __int64 v59;
  int* v60;
  int v61;
  int v62;

  nvidia_623fe0(a3, 0);
  v6 = *(_QWORD*)(a1 + 40);
  if (v6 != 0) {
    v7 = (int*)(*(_QWORD*)(a1 + 32) + 8LL);
    while (1) {
      v8 = *v7;
      v7 += 3;
      v62 = v8;
      if ((unsigned __int8)v8 == 103) {
        result = nvidia_626630(a3, &v62);
        if ((_DWORD)result != 0) {
          break;
        }
      }
      if (--v6 == 0) {
        goto LABEL_7;
      }
    }
  }
  else {
  LABEL_7:
    v10 = *(_QWORD*)(a1 + 40);
    if (v10 != 0) {
      v11 = 0;
      v12 = (int*)(*(_QWORD*)(a1 + 32) + 8LL);
      while (1) {
        v13 = *v12;
        v12 += 3;
        v62 = v13;
        if ((unsigned __int8)v13 == 111) {
          result = nvidia_626630(a3, &v62);
          if ((_DWORD)result != 0) {
            break;
          }
        }
        if (++v11 >= v10) {
          goto LABEL_13;
        }
      }
    }
    else {
    LABEL_13:
      v14 = *(_QWORD*)(a1 + 40);
      if (v14 != 0) {
        v15 = 0;
        v16 = (int*)(*(_QWORD*)(a1 + 32) + 8LL);
        while (1) {
          v17 = *v16;
          v16 += 3;
          v62 = v17;
          if ((unsigned __int8)v17 == 108) {
            result = nvidia_626630(a3, &v62);
            if ((_DWORD)result != 0) {
              break;
            }
          }
          if (++v15 >= v14) {
            goto LABEL_19;
          }
        }
      }
      else {
      LABEL_19:
        v18 = *(_QWORD*)(a1 + 40);
        if (v18 != 0) {
          v19 = 0;
          v20 = (int*)(*(_QWORD*)(a1 + 32) + 8LL);
          while (1) {
            v21 = *v20;
            v20 += 3;
            v62 = v21;
            if ((unsigned __int8)v21 == 181) {
              result = nvidia_626630(a3, &v62);
              if ((_DWORD)result != 0) {
                break;
              }
            }
            if (++v19 >= v18) {
              goto LABEL_25;
            }
          }
        }
        else {
        LABEL_25:
          v22 = *(_QWORD*)(a1 + 40);
          if (v22 != 0) {
            v23 = 0;
            v24 = (int*)(*(_QWORD*)(a1 + 32) + 8LL);
            while (1) {
              v25 = *v24;
              v24 += 3;
              v62 = v25;
              if ((_BYTE)v25 == 0) {
                result = nvidia_626630(a3, &v62);
                if ((_DWORD)result != 0) {
                  break;
                }
              }
              if (++v23 >= v22) {
                goto LABEL_31;
              }
            }
          }
          else {
          LABEL_31:
            v26 = *(_QWORD*)(a1 + 40);
            if (v26 != 0) {
              v27 = 0;
              v28 = (int*)(*(_QWORD*)(a1 + 32) + 8LL);
              while (1) {
                v29 = *v28;
                v28 += 3;
                v62 = v29;
                if ((_BYTE)v29 == 0) {
                  result = nvidia_626630(a3, &v62);
                  if ((_DWORD)result != 0) {
                    break;
                  }
                }
                if (++v27 >= v26) {
                  goto LABEL_37;
                }
              }
            }
            else {
            LABEL_37:
              v30 = *(_QWORD*)(a1 + 40);
              if (v30 != 0) {
                v31 = 0;
                v32 = (int*)(*(_QWORD*)(a1 + 32) + 8LL);
                while (1) {
                  v33 = *v32;
                  v32 += 3;
                  v62 = v33;
                  if ((_BYTE)v33 == 0) {
                    result = nvidia_626630(a3, &v62);
                    if ((_DWORD)result != 0) {
                      break;
                    }
                  }
                  if (++v31 >= v30) {
                    goto LABEL_43;
                  }
                }
              }
              else {
              LABEL_43:
                result = 0;
              }
            }
          }
        }
      }
    }
  }
  if ((*a2 & 1) != 0 && (_DWORD)result == 0) {
    v34 = *(_QWORD*)(a1 + 40);
    if (v34 != 0) {
      v35 = 0;
      v36 = (int*)(*(_QWORD*)(a1 + 32) + 8LL);
      while (1) {
        v37 = *v36;
        v36 += 3;
        v62 = v37;
        if ((unsigned __int8)v37 == 45) {
          result = nvidia_626630(a3, &v62);
          if ((_DWORD)result != 0) {
            break;
          }
        }
        if (++v35 >= v34) {
          result = 0;
          break;
        }
      }
    }
  }
  v38 = *(_QWORD*)(a1 + 40);
  if (a2[1] == 1 && (_DWORD)result == 0 && v38 != 0) {
    v41 = 0;
    v42 = (int*)(*(_QWORD*)(a1 + 32) + 8LL);
    while (1) {
      v43 = *v42;
      v42 += 3;
      v62 = v43;
      if ((unsigned __int8)v43 == 151) {
        result = nvidia_626630(a3, &v62);
        if ((_DWORD)result != 0) {
          break;
        }
      }
      if (++v41 >= v38) {
        result = 0;
        break;
      }
    }
  }
  v44 = *(_QWORD*)(a1 + 40);
  if (a2[2] == 1 && (_DWORD)result == 0 && v44 != 0) {
    v47 = 0;
    v48 = (int*)(*(_QWORD*)(a1 + 32) + 8LL);
    while (1) {
      v49 = *v48;
      v48 += 3;
      v62 = v49;
      if ((unsigned __int8)v49 == 192) {
        result = nvidia_626630(a3, &v62);
        if ((_DWORD)result != 0) {
          break;
        }
      }
      if (++v47 >= v44) {
        result = 0;
        break;
      }
    }
  }
  v50 = *(_QWORD*)(a1 + 40);
  if (a2[3] == 1 && (_DWORD)result == 0 && v50 != 0) {
    v53 = 0;
    v54 = (int*)(*(_QWORD*)(a1 + 32) + 8LL);
    while (1) {
      v55 = *v54;
      v54 += 3;
      v62 = v55;
      if ((unsigned __int8)v55 == 64) {
        result = nvidia_626630(a3, &v62);
        if ((_DWORD)result != 0) {
          break;
        }
      }
      if (++v53 >= v50) {
        result = 0;
        break;
      }
    }
  }
  v56 = *(_QWORD*)(a1 + 40);
  if (a2[4] == 1 && (_DWORD)result == 0 && v56 != 0) {
    v59 = 0;
    v60 = (int*)(*(_QWORD*)(a1 + 32) + 8LL);
    while (1) {
      v61 = *v60;
      v60 += 3;
      v62 = v61;
      if ((unsigned __int8)v61 == 150) {
        result = nvidia_626630(a3, &v62);
        if ((_DWORD)result != 0) {
          break;
        }
      }
      if (++v59 >= v56) {
        return 0;
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
