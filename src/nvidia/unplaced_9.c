#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_DWORD* SdkRoutine_6af020(_DWORD* result, __int64, __int64, __int64, int,
                          __int64, unsigned int, unsigned int);
__int64 NvRmGpuDeviceGetInfo_plt(_QWORD);
__int64 NvRmMemGetFd_plt(_QWORD);
__int64 NvRmMemGetSize_plt(_QWORD);
__int64 SdkRoutine_64adc0(_QWORD);
__int64 SdkRoutine_64b750(_QWORD);
__int64 SdkRoutine_64b750_alt1(__int64 result, __int64,
                               __int64) __asm__("SdkRoutine_64b750");
__int64 SdkRoutine_64be80(__int64 result, unsigned __int64, char);
__int64 SdkRoutine_64cb80(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_64cb80_alt1(__int64 result, _QWORD*,
                               unsigned int) __asm__("SdkRoutine_64cb80");
__int64 SdkRoutine_64d350(__int64 result, __int64*, __int64*, int, int, int,
                          int, int, int);
__int64 SdkRoutine_64d950(__int64);
__int64 SdkRoutine_654220(void);
__int64 SdkRoutine_6589a0(_QWORD, _QWORD);
__int64 SdkRoutine_65cf40(_QWORD, _QWORD);
__int64 SdkRoutine_65cf50(_QWORD);
__int64 SdkRoutine_65cf70(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_65d040(_QWORD, _QWORD);
__int64 SdkRoutine_65d0a0(_QWORD, _QWORD);
__int64 SdkRoutine_65d470(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_65ed60(void);
__int64 SdkRoutine_65ed60_alt1(_QWORD) __asm__("SdkRoutine_65ed60");
__int64 SdkRoutine_65f8b0();
__int64 SdkRoutine_66a6d0(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_66fcf0(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_66fe10(_QWORD);
__int64 SdkRoutine_685980(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_687900(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_688370(_QWORD);
__int64 SdkRoutine_688a40(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_6892f0(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_6aeda0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, _DWORD);
__int64 SdkRoutine_6af0c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, _DWORD);
__int64 SdkRoutine_6af3e0(__int64, unsigned int, unsigned int, unsigned int,
                          unsigned int, unsigned int);
__int64 __cxa_guard_acquire_plt(_QWORD);
__int64 __cxa_guard_release_plt(_QWORD);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 memset_plt(void* this_, void*, int, unsigned __int64);
__int64 nn_diag_detail_AbortImpl_plt_859ba0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_wsi_gl_SetNextHdrContentMetadata_plt(_QWORD, _QWORD);
__int64 nn_wsi_gl_SetNextHdrDisplayMetadata_plt(_QWORD, _QWORD);
__int64 nn_wsi_nv_OnWindowInitialize_plt_875930(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nvidia_648780_alt1(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD, _QWORD) __asm__("nvidia_648780");
__int64 nvidia_648ae0_alt1(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD, _QWORD) __asm__("nvidia_648ae0");
__int64 nvidia_648e40_alt1(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD, _QWORD) __asm__("nvidia_648e40");
__int64 nvidia_649280_alt1(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD, _QWORD) __asm__("nvidia_649280");
__int64 nvidia_649a20_alt1(_QWORD) __asm__("nvidia_649a20");
__int64 nvidia_64a520_alt1(_QWORD, _QWORD, _QWORD) __asm__("nvidia_64a520");
__int64 nvidia_64ab10_alt1(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD) __asm__("nvidia_64ab10");
__int64 nvidia_64ac60_alt1(_QWORD, _QWORD, _QWORD) __asm__("nvidia_64ac60");
__int64 nvidia_64aea0_alt1(_QWORD) __asm__("nvidia_64aea0");
__int64 nvidia_64d7a0_alt1(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD, _QWORD, _DWORD, _DWORD,
                           _DWORD) __asm__("nvidia_64d7a0");
__int64 nvidia_64ea80_alt1(_QWORD, _QWORD) __asm__("nvidia_64ea80");
__int64 nvidia_64f5d0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                      _QWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD,
                      _DWORD, _DWORD, _DWORD);
extern _DWORD SdkData_bb0370[8];
extern _DWORD SdkData_c77c7c[5];
extern _DWORD SdkData_c77c90[5];
extern _DWORD SdkData_c77ca4[5];
extern _DWORD SdkData_c77cf4[5];
extern _UNKNOWN* SdkData_1040968;
extern _UNKNOWN* SdkData_e89bd8;
extern _UNKNOWN* SdkData_e89c00;
extern _UNKNOWN SdkData_1040780;
extern _UNKNOWN SdkData_1040950;
extern _UNKNOWN SdkData_1040960;
extern _UNKNOWN SdkData_c77b2a;
extern _UNKNOWN SdkData_c77b3a;
extern _UNKNOWN* SdkData_e89ba0;
extern _UNKNOWN* SdkData_e89bb8;
extern _UNKNOWN* SdkData_e89bc8;
extern __int128 SdkData_bb2e80;
extern __int64 (*SdkData_1040798)(_QWORD);
extern __int64 (*SdkData_1042148)(__int64, unsigned __int64);
extern __int64 (*SdkData_ea63b8)();
extern __int64 (*SdkData_ea6460[])();
extern __int64 SdkData_1040958;
extern unsigned __int16 SdkData_bb2730[8];
int* SdkRoutine_6af520(int* result, int, int, int, unsigned int, unsigned int,
                       unsigned int, unsigned int, unsigned int, int, int,
                       unsigned int, __int64*);
void SdkRoutine_64b940();
__int64 nvidia_647010(__int64 a1, int a2);
__int64 nvidia_647020(__int64 a1, _DWORD* a2);
__int64 nvidia_647030(__int64 a1);
__int64 nvidia_647050(__int64 result, __int64 a2, unsigned int* a3);
__int64 nvidia_647110(__int64 result, __int64 a2, unsigned int* a3);
__int64 OpenGL(__int64 a1, __int64 a2, _DWORD** a3, unsigned __int64 a4);
__int64 nvidia_647360(int a1, int* a2);
__int64 nvidia_6474d0(__int64 result, int a2, int a3, int a4, int a5, int a6,
                      int a7, int a8, int a9, unsigned int a10, int a11);
int* nvidia_647580(int* result, char* a2);
_DWORD* nvidia_647700(_DWORD* result, __int64 a2, char* a3, int a4);
__int64 nvidia_647940(int* a1, _BYTE* a2);
int* nvidia_647a50(_DWORD* a1, int* a2, int* a3, char* a4, unsigned int a5);
__int64 nvidia_647c00(__int64 result, __int64 a2, int a3, int a4, int a5,
                      int a6, __int64 a7, _DWORD* a8, int a9);
__int64 nvidia_647ee0(__int64 result, __int64 a2, int a3, int a4, int a5,
                      int a6, __int64 a7, _DWORD* a8, int a9);
__int64 nvidia_6481c0(__int64 result, __int64 a2, int a3, int a4, int a5,
                      int a6, __int64 a7, _DWORD* a8, int a9);
__int64 nvidia_6484a0(__int64 result, __int64 a2, int a3, int a4, int a5,
                      int a6, __int64 a7, _DWORD* a8, int a9);
__int64 nvidia_648780(__int64 result, __int64 a2, __int64 a3, __int64 a4,
                      int a5, int a6, int a7, int a8);
__int64 nvidia_648ae0(__int64 result, __int64 a2, __int64 a3, __int64 a4,
                      int a5, int a6, int a7, int a8);
__int64 nvidia_648e40(__int64 result, __int64 a2, __int64 a3, __int64 a4,
                      int a5, int a6, int a7, int a8);
__int64 nvidia_649280(__int64 result, __int64 a2, __int64 a3, __int64 a4,
                      int a5, int a6, int a7, int a8);
_QWORD* nvidia_6496c0(_QWORD* result);
_QWORD* nvidia_6496d0(_QWORD* result, __int64 a2, __int64 a3, __int64 a4);
__int64 nvidia_649720(__int64 a1, _QWORD* a2);
__int64 nvidia_649780(__int64 a1);
__int64 nvidia_6497b0(__int64 a1);
__int64 nvidia_6497e0(__int64 a1);
__int64 nvidia_6497f0(__int64 a1, __int64 a2);
__int64 nvidia_649800(__int64 a1, __int64 a2);
__int64 nvidia_649850(__int64 a1, char a2, char a3);
__int64 nvidia_649a20(_QWORD* a1);
__int64 nvidia_649b10();
__int64 nvidia_649b40(__int64 a1, __int64* a2, unsigned __int64 a3,
                      unsigned __int64 a4);
__int64 nvidia_649bf0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3,
                      _QWORD* a4, unsigned int a5);
__int64 nvidia_649d70(__int64 a1, unsigned __int64 a2, unsigned __int64 a3,
                      int a4, char a5, int a6);
__int64 nvidia_64a0e0(__int64 result);
__int64 nvidia_64a190(__int64 result);
__int64 nvidia_64a1a0(_QWORD* a1);
__int64 nvidia_64a210(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      _QWORD* a5);
__int64 nvidia_64a380(_QWORD* a1);
__int64 nvidia_64a3f0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5);
__int64 nvidia_64a480(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5);
__int64 nvidia_64a4b0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      unsigned int a5, char a6);
__int64 nvidia_64a4d0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5, __int64 a6, int a7);
__int64 nvidia_64a520(__int64 a1, __int64* a2, __int64 a3);
__int64 nvidia_64a680(__int64 a1, __int64 a2, __int64 a3, __int64 a4);
__int64 nvidia_64a780(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      _QWORD* a5, _QWORD* a6);
__int64 nvidia_64a7e0(__int64 a1);
__int64 nvidia_64a850(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5, __int64 a6, __int64 a7);
__int64 nvidia_64a8a0(__int64 a1, __int64 a2, __int64 a3, char a4, __int64 a5,
                      __int64 a6, __int64 a7);
__int64 nvidia_64a930(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5);
__int64 nvidia_64aa40(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5);
__int64 nvidia_64aac0(__int64 a1, __int64* a2);
__int64 nvidia_64ab10(__int64 a1, __int64 a2, __int64 a3, __int64* a4,
                      _QWORD* a5, __int64* a6, unsigned int a7);
_QWORD* nvidia_64ac60(_QWORD* result, _QWORD* a2, unsigned int a3);
bool nvidia_64aea0(_QWORD** a1);
__int64 nvidia_64afc0(__int64 a1, __int64 a2);
__int64 nvidia_64b010(__int64 result);
__int64 nvidia_64b2a0(__int64 result, __int64 a2, __int64 a3);
__int64 nvidia_64b3a0(__int64 a1);
__int64 nvidia_64b3b0(_QWORD* a1);
__int64 nvidia_64b3c0(_QWORD* a1);
__int64 nvidia_64b3d0(__int64 a1);
__int64 nvidia_64b3f0(__int64 a1);
__int64 nvidia_64b400(__int64 a1);
long double nvidia_64b420(__int64* a1);
__int64 nvidia_64ca20(__int64 result, int a2, unsigned __int64* a3);
__int64 nvidia_64ca80(__int64 result, int a2, unsigned __int64* a3);
__int64 nvidia_64cae0(__int64 a1, __int64 a2, char a3, int a4);
__int64 nvidia_64cd60(__int64 a1, __int64 a2);
__int64 nvidia_64cdc0(__int64 a1, __int64 a2, __int64 a3, int a4);
__int64 nvidia_64ce30(__int64 a1, __int64 a2, char a3, __int16 a4, int a5,
                      __int64 a6);
long double nvidia_64cef0(__int64 a1, __int64 a2, __int64 a3, __int128* a4,
                          __int64 a5, __int64 a6, long double* a7, int a8,
                          int a9);
__int64* nvidia_64d260(__int64* result, __int64 a2, unsigned __int64 a3,
                       unsigned __int64 a4);
__int64 nvidia_64d7a0(__int64 result, __int64* a2, __int64* a3, __int64 a4,
                      unsigned int a5, int a6, int a7, int a8, int a9, int a10,
                      int a11);
__int64 nvidia_64da00(__int64 result, __int64 a2, __int64 a3, _QWORD* a4,
                      _DWORD* a5, int a6, unsigned int a7, int a8, int a9);
__int64 nvidia_64de60(__int64 result, __int64 a2, __int64 a3, __int64* a4,
                      unsigned int* a5, int a6);
__int64 nvidia_64e500(__int64 a1, __int64 a2, __int64* a3, unsigned int* a4,
                      __int64 a5, char a6);
_QWORD* nvidia_64e860(_QWORD* result, __int64 a2, unsigned __int64 a3,
                      unsigned __int64 a4);
__int64 nvidia_64ea10(__int64 a1, __int64 a2, __int64 a3, __int128* a4, int a5,
                      __int64 a6, unsigned int a7, unsigned int a8);
_QWORD* nvidia_64ea80(_QWORD* result, __int64 a2);
__int64 unplaced_9_6499c0(_QWORD* a1);

__int64 nvidia_647010(__int64 a1, int a2)
{
  *(_DWORD*)(a1 + 292) = a2;
  return 0;
}

__int64 nvidia_647020(__int64 a1, _DWORD* a2)
{
  int v2;

  v2 = *(_DWORD*)(a1 + 292);
  *a2 = v2;
  return 0;
}

__int64 nvidia_647030(__int64 a1)
{
  return *(
      unsigned int*)(*(_QWORD*)(a1 + 8LL * *(unsigned int*)(a1 + 236) + 216) +
                     100LL);
}

__int64 nvidia_647050(__int64 result, __int64 a2, unsigned int* a3)
{
  __int64 v3;
  float v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9[10];

  if (a3 != nullptr) {
    v3 = *(_QWORD*)(result + 256);
    v4 = (float)a3[1] / 50000.0;
    v9[0] = (float)*a3 / 50000.0;
    v9[1] = v4;
    v5 = (float)a3[3] / 50000.0;
    v9[2] = (float)a3[2] / 50000.0;
    v9[3] = v5;
    v6 = (float)a3[5] / 50000.0;
    v9[4] = (float)a3[4] / 50000.0;
    v9[5] = v6;
    v7 = (float)a3[7] / 50000.0;
    v9[6] = (float)a3[6] / 50000.0;
    v9[7] = v7;
    v8 = (float)a3[9] / 50000.0;
    v9[8] = (float)a3[8] / 50000.0;
    v9[9] = v8;
    return nn_wsi_gl_SetNextHdrDisplayMetadata_plt(v3, v9);
  }
  return result;
}

__int64 nvidia_647110(__int64 result, __int64 a2, unsigned int* a3)
{
  __int64 v3;
  float v4;
  float v5[2];

  if (a3 != nullptr) {
    v3 = *(_QWORD*)(result + 256);
    v4 = (float)a3[1] / 50000.0;
    v5[0] = (float)*a3 / 50000.0;
    v5[1] = v4;
    return nn_wsi_gl_SetNextHdrContentMetadata_plt(v3, v5);
  }
  return result;
}

__int64 OpenGL(__int64 a1, __int64 a2, _DWORD** a3, unsigned __int64 a4)
{
  unsigned int v5;
  int v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  int v13;
  _DWORD* v14;
  int v15;
  _DWORD* v16;
  int v17;
  int v18;
  _DWORD* v19;
  int v20;
  __int64 v21;

  v5 = a4;
  memset_plt((void*)a1, nullptr, 32, a4);
  *(_QWORD*)(a1 + 8) = 0;
  v8 = *(_DWORD*)(a2 + 4);
  *(_DWORD*)(a1 + 16) = *(_DWORD*)a2;
  *(_DWORD*)(a1 + 20) = v8;
  *(_QWORD*)a1 = *(_QWORD*)(a2 + 8);
  *(_QWORD*)(a1 + 24) = 0x100000001LL;
  if (v5 != 0) {
    v9 = v5;
    v10 = a1 + 40;
    do {
      v19 = *a3;
      v20 = (*a3)[1];
      *(_DWORD*)(v10 - 8) = **a3;
      *(_DWORD*)(v10 - 4) = v20;
      v21 = *((_QWORD*)v19 + 1);
      v11 = 56;
      if (v21 > 0x21510120FLL) {
        switch (v21) {
        case 0x215101210LL:
          v11 = 60;
          break;
        case 0x400A62120LL:
          break;
        case 0x700A66840LL:
          v11 = 41;
          break;
        default:
          goto LABEL_14;
        }
      }
      else if (v21 != 0x200A62120LL) {
        if (v21 == 0x201A22120LL) {
          v11 = 156;
          goto LABEL_4;
        }
        if (v21 != 0x214A62120LL) {
        LABEL_14:
          v11 = 0;
          goto LABEL_4;
        }
        v11 = 55;
      }
    LABEL_4:
      v12 = (unsigned int)v19[6];
      *(_DWORD*)v10 = v11;
      *(_BYTE*)(v10 + 36) = 1;
      *(_QWORD*)(v10 + 8) = 0;
      v13 = NvRmMemGetFd_plt(v12);
      v14 = *a3;
      *(_DWORD*)(v10 + 16) = v13;
      v15 = NvRmMemGetSize_plt((unsigned int)v14[6]);
      v16 = *a3++;
      --v9;
      v17 = v16[7];
      *(_DWORD*)(v10 + 20) = v15;
      *(_DWORD*)(v10 + 24) = v17;
      v18 = v16[9];
      *(_DWORD*)(v10 + 28) = v16[5] >> 6;
      *(_DWORD*)(v10 + 32) = v18;
      v10 += 48;
    } while (v9 != 0);
  }
  return nn_wsi_nv_OnWindowInitialize_plt_875930(a1, a1 + 32, v5, "OpenGL");
}

__int64 nvidia_647360(int a1, int* a2)
{
  __int64 v2;
  __int64 result;
  int v4;

  v2 = (unsigned int)(a1 - 2);
  result = 0;
  v4 = 14;
  switch (v2) {
  case 0LL:
  case 155LL:
    goto LABEL_40;
  case 1LL:
  case 56LL:
  case 79LL:
  case 80LL:
  case 164LL:
    v4 = 0x10000;
    goto LABEL_40;
  case 2LL:
  case 15LL:
  case 16LL:
  case 20LL:
  case 81LL:
  case 97LL:
  case 101LL:
  case 109LL:
  case 130LL:
  case 138LL:
  case 149LL:
  case 161LL:
  case 162LL:
    v4 = 256;
    goto LABEL_40;
  case 3LL:
  case 18LL:
  case 33LL:
  case 49LL:
  case 50LL:
  case 112LL:
  case 123LL:
  case 134LL:
  case 159LL:
    v4 = 8;
    goto LABEL_40;
  case 4LL:
  case 7LL:
  case 12LL:
  case 13LL:
  case 14LL:
  case 52LL:
  case 54LL:
  case 77LL:
  case 93LL:
  case 96LL:
  case 114LL:
  case 120LL:
  case 126LL:
  case 127LL:
  case 131LL:
  case 176LL:
    v4 = 32;
    goto LABEL_40;
  case 5LL:
  case 9LL:
  case 10LL:
  case 11LL:
  case 17LL:
  case 51LL:
  case 58LL:
  case 86LL:
  case 137LL:
  case 160LL:
  case 163LL:
    v4 = 4;
    goto LABEL_40;
  case 6LL:
  case 8LL:
  case 25LL:
  case 36LL:
  case 42LL:
  case 75LL:
  case 98LL:
  case 103LL:
  case 104LL:
  case 105LL:
  case 111LL:
  case 113LL:
  case 139LL:
    v4 = 16;
    goto LABEL_40;
  case 19LL:
  case 129LL:
    v4 = 512;
    goto LABEL_40;
  case 21LL:
    v4 = 12;
    goto LABEL_40;
  case 22LL:
    v4 = 576;
    goto LABEL_40;
  case 23LL:
  case 35LL:
  case 37LL:
  case 78LL:
  case 84LL:
  case 89LL:
  case 91LL:
  case 174LL:
    v4 = 4096;
    goto LABEL_40;
  case 24LL:
  case 61LL:
  case 82LL:
  case 90LL:
    v4 = 0x4000;
    goto LABEL_40;
  case 26LL:
  case 27LL:
  case 29LL:
    v4 = 1024;
    goto LABEL_40;
  case 28LL:
  case 122LL:
  case 144LL:
    v4 = 64;
    goto LABEL_40;
  case 30LL:
  case 125LL:
    v4 = 0x7FFFFFFF;
    goto LABEL_40;
  case 31LL:
  case 32LL:
  case 94LL:
  case 99LL:
  case 100LL:
    v4 = 0xFFFF;
    goto LABEL_40;
  case 34LL:
  case 41LL:
    v4 = 0x100000;
    goto LABEL_40;
  case 38LL:
  case 39LL:
  case 40LL:
  case 48LL:
  case 57LL:
  case 64LL:
  case 65LL:
  case 66LL:
  case 67LL:
  case 69LL:
  case 70LL:
  case 71LL:
  case 72LL:
  case 73LL:
  case 74LL:
  case 85LL:
  case 95LL:
  case 102LL:
  case 106LL:
  case 107LL:
  case 108LL:
  case 121LL:
  case 124LL:
  case 133LL:
  case 141LL:
  case 145LL:
  case 152LL:
  case 167LL:
  case 170LL:
  case 172LL:
    v4 = 1;
    goto LABEL_40;
  case 43LL:
  case 76LL:
    v4 = 2048;
    goto LABEL_40;
  case 44LL:
  case 45LL:
  case 154LL:
  case 156LL:
  case 165LL:
    v4 = 201;
    goto LABEL_40;
  case 46LL:
  case 157LL:
    v4 = 20;
    goto LABEL_40;
  case 47LL:
  case 148LL:
  case 153LL:
  case 168LL:
  case 171LL:
  case 173LL:
    v4 = 0;
    goto LABEL_40;
  case 53LL:
    v4 = 96;
    goto LABEL_40;
  case 55LL:
  case 92LL:
    v4 = 128;
    goto LABEL_40;
  case 59LL:
  case 62LL:
  case 63LL:
  case 175LL:
    v4 = 0x8000;
    goto LABEL_40;
  case 60LL:
    v4 = 0x10000000;
    goto LABEL_40;
  case 68LL:
  case 166LL:
    v4 = 5;
    goto LABEL_40;
  case 83LL:
  case 150LL:
    v4 = 0x40000;
    goto LABEL_40;
  case 87LL:
  case 151LL:
    v4 = 2;
    goto LABEL_40;
  case 115LL:
  case 142LL:
    v4 = 31;
    goto LABEL_40;
  case 116LL:
    v4 = 0x20000000;
    goto LABEL_40;
  case 117LL:
  case 118LL:
    v4 = 0x1000000;
    goto LABEL_40;
  case 119LL:
    v4 = 0x40000000;
    goto LABEL_40;
  case 128LL:
    v4 = 0x3FFFFF;
    goto LABEL_40;
  case 132LL:
    v4 = 0x3FFF;
    goto LABEL_40;
  case 146LL:
    v4 = 58368;
    goto LABEL_40;
  case 147LL:
    v4 = 24576;
    goto LABEL_40;
  case 158LL:
    v4 = 163840;
    goto LABEL_40;
  case 169LL:
    v4 = 63;
  LABEL_40:
    *a2 = v4;
    result = 1;
    break;
  default:
    return result;
  }
  return result;
}

__int64 nvidia_6474d0(__int64 result, int a2, int a3, int a4, int a5, int a6,
                      int a7, int a8, int a9, unsigned int a10, int a11)
{
  *(_DWORD*)result = a2;
  *(_DWORD*)(result + 4) = a3;
  *(_DWORD*)(result + 8) = a5;
  *(_DWORD*)(result + 12) = a8;
  *(_DWORD*)(result + 32) = a6;
  *(_DWORD*)(result + 36) = a7;
  *(_DWORD*)(result + 24) = a11;
  *(_DWORD*)(result + 28) = a4;
  *(_DWORD*)(result + 16) = a9;
  *(_DWORD*)(result + 20) = a10;
  *(_QWORD*)(result + 40) = 2;
  if (a3 > 3) {
    if (a3 != 4) {
      if (a3 == 8) {
        *(_DWORD*)(result + 24) = 6;
      }
      else if (a3 != 9) {
        return result;
      }
    }
    *(_DWORD*)(result + 44) = 1;
    return result;
  }
  if (a3 != 0) {
    if (a3 == 2) {
      *(_DWORD*)(result + 40) = 3;
    }
    else if (a3 == 3) {
      *(_DWORD*)(result + 40) = 1;
      if (a10 >= 2) {
        *(_DWORD*)(result + 24) = a10;
      }
      *(_DWORD*)(result + 20) = 1;
      *(_DWORD*)(result + 44) = 1;
    }
  }
  else {
    *(_DWORD*)(result + 40) = 1;
  }
  return result;
}

int* nvidia_647580(int* result, char* a2)
{
  int* v3;
  unsigned int v4;
  __int64 v5;
  unsigned int v6;
  unsigned int v7;
  unsigned __int64 v8;
  int v9;
  int v10;
  unsigned int v11;
  unsigned int v12;
  char v13;
  char v14;
  int* v15;
  char v16;
  struct {
    int v17;
    int v18;
    char v19;
  } v17_;

  if ((*result & 2) != 0) {
    a2[2] = 0;
    *(_WORD*)a2 = 256;
    return result;
  }
  v3 = result;
  if ((*result & 0x20) == 0 ||
      (result = nvidia_647700(result, (__int64)&v17_.v17, a2,
                              (*result & 0x800) != 0),
       v17_.v17 <= 0)) {
    v4 = v3[2];
    v5 = (unsigned int)v3[4];
    v6 = v3[5];
    if (v4 < 2) {
    LABEL_16:
      v11 = v3[8];
      if (v11 >= 2) {
        v5 = ((unsigned int)v5 + v11 - 1) / v11;
        v6 = (v6 + v3[9] - 1) / v3[9];
      }
      if (v3[1] == 2) {
        v12 = v3[6];
      }
      else {
        v12 = 1;
      }
      result = SdkRoutine_6af020(&v17_.v17, (unsigned int)v3[7], 1, 1, v3[10],
                                 v5, v6, v12);
      v13 = v17_.v18;
      v14 = v17_.v19;
      *a2 = 0;
      a2[1] = v13;
      a2[2] = v14;
      if ((*((_BYTE*)v3 + 1) & 0x22) != 0) {
        result = (int*)nvidia_647940(v3, a2);
        *(_WORD*)a2 = 0;
        a2[2] = 0;
        if ((*((_BYTE*)v3 + 1) & 2) != 0) {
          v15 = result;
          result = (int*)nvidia_647940(v3, a2);
          if (result == v15) {
            v16 = v17_.v19;
            a2[1] = v17_.v18;
            a2[2] = v16;
          }
        }
      }
      return result;
    }
    HIDWORD(v8) = v4 - 2;
    LODWORD(v8) = v4 - 2;
    v7 = v8 >> 1;
    if (v7 > 7) {
      v9 = 1;
    }
    else {
      v9 = SdkData_bb0370[v7];
    }
    v5 = (unsigned int)(v9 * v5);
    if (v4 != 4) {
      if (v4 == 16) {
        v10 = 4;
        goto LABEL_15;
      }
      if (v4 != 8) {
        v10 = 1;
        goto LABEL_15;
      }
    }
    v10 = 2;
  LABEL_15:
    v6 *= v10;
    goto LABEL_16;
  }
  return result;
}

_DWORD* nvidia_647700(_DWORD* result, __int64 a2, char* a3, int a4)
{
  unsigned int v4;
  int v5;
  bool v6;
  char v7;
  char v8;
  char v9;
  unsigned int v10;
  unsigned __int64 v11;
  bool v12;
  char v13;
  unsigned __int64 v14;
  int v15;
  int v16;
  int v17;
  unsigned int v18;
  unsigned int v19;
  unsigned int v20;
  unsigned __int64 v21;
  unsigned int v22;
  int v23;
  unsigned int v24;
  unsigned int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;

  v4 = result[1];
  v5 = result[7];
  v6 = v5 != 12 && (*result & 0x12) == 0;
  if (!v6 || ((v4 < 0xB) & (0x409u >> v4)) != 0 || (*result & 0x20) == 0) {
    *(_QWORD*)a2 = 0;
    *(_QWORD*)(a2 + 8) = 0;
    return result;
  }
  if (v4 == 2) {
    if (v5 == 16 || v5 == 8) {
      v7 = 4;
      v8 = 1;
      v9 = 2;
    }
    else if (v5 == 4) {
      v7 = 4;
      v8 = 2;
      v9 = 1;
    }
    else {
      v9 = 0;
      v7 = 5;
      v8 = 2;
    }
  }
  else {
    HIDWORD(v11) = v5 - 2;
    LODWORD(v11) = v5 - 2;
    v10 = v11 >> 1;
    v12 = v10 >= 8;
    v13 = 8 * v10;
    v14 = 0x305050503050404uLL >> v13;
    if (v12) {
      v9 = 2;
    }
    else {
      v9 = 0x402020204020303uLL >> v13;
    }
    if (v12) {
      v8 = 5;
    }
    else {
      v8 = v14;
    }
    v7 = 0;
  }
  *a3 = v9;
  a3[1] = v8;
  a3[2] = v7;
  v15 = (0x40u / result[7]) << v9;
  *(_DWORD*)(a2 + 4) = v15;
  v16 = 8 << a3[1];
  *(_DWORD*)(a2 + 8) = v16;
  v17 = 1 << a3[2];
  *(_DWORD*)(a2 + 12) = v17;
  v18 = result[2];
  v12 = v18 >= 2;
  v19 = v18 - 2;
  if (v12) {
    HIDWORD(v21) = v19;
    LODWORD(v21) = v19;
    v20 = v21 >> 1;
    if (v20 > 7) {
      v22 = 1;
    }
    else {
      v22 = SdkData_bb2730[v20];
    }
    v15 = (unsigned __int16)v15 >> __clz(__rbit32(v22));
    *(_DWORD*)(a2 + 4) = v15;
    v23 = result[2];
    if (v23 != 4) {
      if (v23 == 16) {
        v24 = 4;
        goto LABEL_34;
      }
      if (v23 != 8) {
        v24 = 1;
        goto LABEL_34;
      }
    }
    v24 = 2;
  LABEL_34:
    v16 = (unsigned int)v16 >> __clz(__rbit32(v24));
    *(_DWORD*)(a2 + 8) = v16;
  }
  v25 = result[8];
  if (v25 >= 2) {
    v15 *= v25;
    *(_DWORD*)(a2 + 4) = v15;
    v16 *= result[9];
    *(_DWORD*)(a2 + 8) = v16;
  }
  v26 = result[3];
  *(_DWORD*)a2 = v26;
  if (v26 == 0) {
    goto LABEL_47;
  }
  v28 = result[5];
  v27 = result[6];
  v29 = result[4];
  v30 = 0;
  while (v29 >= v15 && v28 >= v16 && v27 >= v17) {
    ++v30;
    v29 = a4 + ((unsigned int)(v29 - a4) >> 1);
    v28 = a4 + ((unsigned int)(v28 - a4) >> 1);
    if (result[1] == 2) {
      v27 = a4 + ((unsigned int)(v27 - a4) >> 1);
    }
    if (v26 == v30) {
      return result;
    }
  }
  *(_DWORD*)a2 = v30;
  if (v30 == 0) {
  LABEL_47:
    *(_QWORD*)(a2 + 8) = 0;
    *(_DWORD*)(a2 + 4) = 0;
  }
  return result;
}

__int64 nvidia_647940(int* a1, _BYTE* a2)
{
  __int64 v2;
  __int64 v3;
  unsigned int v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  unsigned __int64 v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  _BOOL4 v21;
  int v22;
  _DWORD v24[3];
  __int64 v25;
  __int64 v26;

  v4 = a1[2];
  v6 = (unsigned int)a1[4];
  v7 = (unsigned int)a1[5];
  if (a1[1] == 2) {
    v8 = (unsigned int)a1[6];
  }
  else {
    v8 = 1;
  }
  if (v4 < 2) {
    goto LABEL_15;
  }
  HIDWORD(v10) = v4 - 2;
  LODWORD(v10) = v4 - 2;
  v9 = v10 >> 1;
  if (v9 > 7) {
    v11 = 1;
  }
  else {
    v11 = SdkData_bb0370[v9];
  }
  v6 = (unsigned int)(v11 * v6);
  if (v4 != 4) {
    if (v4 == 16) {
      v12 = 4;
      goto LABEL_14;
    }
    if (v4 != 8) {
      v12 = 1;
      goto LABEL_14;
    }
  }
  v12 = 2;
LABEL_14:
  v7 = (unsigned int)(v12 * v7);
LABEL_15:
  v25 = v2;
  v26 = v3;
  v13 = (unsigned __int8)a2[1];
  v14 = (unsigned __int8)a2[2];
  v15 = 1 << *a2;
  v24[0] = 0;
  v24[1] = v13;
  v16 = *a1;
  v24[2] = v14;
  v17 = (unsigned int)a1[10];
  v18 = (unsigned int)a1[7];
  v19 = (unsigned int)a1[8];
  v20 = a1[3];
  v21 = (v16 & 0x800) != 0;
  v22 = a1[9];
  if (a1[11] != 0) {
    return SdkRoutine_6aeda0(v24, v6, v7, v8, v17, v18, 0, v19, v22, v20, v21,
                             v15);
  }
  else {
    return SdkRoutine_6af0c0(v24, v6, v7, v8, v17, v18, 0, v19, v22, v20, v21,
                             v15);
  }
}

int* nvidia_647a50(_DWORD* a1, int* a2, int* a3, char* a4, unsigned int a5)
{
  int v5;
  int v6;
  _BOOL4 v12;
  int v13;
  unsigned int v14;
  unsigned int v15;
  unsigned __int64 v16;
  int v17;
  int v18;
  int v19;
  char v20;
  unsigned int v21;
  unsigned int v22;
  unsigned int v23;
  unsigned int v24;
  unsigned int v25;
  int v26;
  __int64 v28;
  int v29;

  v6 = a1[4];
  v5 = a1[5];
  v12 = (*a1 & 0x800) != 0;
  if (a1[1] == 2) {
    v13 = a1[6];
  }
  else {
    v13 = 1;
  }
  v14 = a1[2];
  if (v14 >= 2) {
    HIDWORD(v16) = v14 - 2;
    LODWORD(v16) = v14 - 2;
    v15 = v16 >> 1;
    if (v15 > 7) {
      v17 = 1;
    }
    else {
      v17 = SdkData_bb0370[v15];
    }
    v6 *= v17;
    if (v14 != 4) {
      if (v14 == 16) {
        v18 = 4;
        goto LABEL_14;
      }
      if (v14 != 8) {
        v18 = 1;
        goto LABEL_14;
      }
    }
    v18 = 2;
  LABEL_14:
    v5 *= v18;
  }
  v19 = (unsigned __int8)a4[1];
  LODWORD(v28) = 0;
  HIDWORD(v28) = v19;
  v29 = (unsigned __int8)a4[2];
  v20 = *a4;
  if (*a4 != 0) {
    v21 = v12 + 1;
    if (((unsigned int)(v6 - v12) >> a5) + v12 <= v12 + 1) {
      v22 = v12 + 1;
    }
    else {
      v22 = ((unsigned int)(v6 - v12) >> a5) + v12;
    }
    if (((unsigned int)(v5 - v12) >> a5) + v12 <= v21) {
      v23 = v12 + 1;
    }
    else {
      v23 = ((unsigned int)(v5 - v12) >> a5) + v12;
    }
    if (((unsigned int)(v13 - v12) >> a5) + v12 <= v21) {
      v24 = v12 + 1;
    }
    else {
      v24 = ((unsigned int)(v13 - v12) >> a5) + v12;
    }
    v25 = a1[8];
    if (v25 >= 2) {
      v22 = (v22 + v25 - 1) / v25;
      v23 = (v23 + a1[9] - 1) / a1[9];
    }
    v26 = SdkRoutine_6af3e0((__int64)&v28, v22, v23, v24, a1[7], 1 << v20);
  }
  else {
    v26 = 1;
  }
  *a3 = v26;
  return SdkRoutine_6af520(a2, v6, v5, v13, a1[10], a1[7], a1[8], a1[9], a5, 0,
                           v12, 1 << *a4, &v28);
}

__int64 nvidia_647c00(__int64 result, __int64 a2, int a3, int a4, int a5,
                      int a6, __int64 a7, _DWORD* a8, int a9)
{
  int v9;
  int v10;
  int v11;
  int v12;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  signed int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  signed int v25;
  signed int v26;
  __int64 v27;
  unsigned int v28;
  __int64 v29;
  unsigned int v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  int v35;
  __int64 v36;
  signed int v37;
  __int64 v38;
  __int64 v39;
  int v40;
  int v41;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  int v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  signed int v51;
  __int64 v52;

  v9 = a8[1];
  v34 = result;
  v10 = 8 << v9;
  v35 = 8 << v9;
  v11 = a5 / v10 * v10;
  v12 = (a6 + v10 - 1) / v10 * v10;
  if (v11 < v12) {
    v15 = a5 + 7;
    v16 = *a8 + v9 + a8[2];
    if (a5 >= 0) {
      v15 = a5;
    }
    v17 = 512 << v16;
    v18 = a6 + 7;
    v33 = a9 * (__int64)(512 << v16);
    if (a6 < -7) {
      v18 = a6 + 14;
    }
    v38 = (int)(v15 & 0xFFFFFFF8);
    v37 = v18 & 0xFFFFFFF8;
    v19 = a3 + 63;
    if (a3 >= 0) {
      v19 = a3;
    }
    v20 = a4 + 63;
    if (a4 < -63) {
      v20 = a4 + 126;
    }
    v21 = v19 & 0xFFFFFFC0;
    v22 = (int)(v20 & 0xFFFFFFC0);
    v48 = v21;
    v23 = v11;
    v36 = v12;
    v41 = a3 - v21;
    v40 = a4 - v21;
    v32 = v21 - (__int64)a3;
    v45 = 8 * a7;
    do {
      if (v23 <= v38) {
        v24 = v38;
      }
      else {
        v24 = v23;
      }
      if ((int)v23 <= (int)v38) {
        v25 = v38;
      }
      else {
        v25 = v23;
      }
      v51 = v25;
      v26 = v37;
      v39 = v23 + v35;
      if (v37 >= (int)v23 + v35) {
        v26 = v23 + v35;
      }
      if (v25 < v26) {
        v46 = v26;
        v47 = v23;
        v50 = v32 + a7 * (v24 - a5);
        v44 = v34 + v33 * ((int)v23 / v35);
        if (v23 <= v38) {
          v27 = v38;
        }
        else {
          v27 = v23;
        }
        do {
          v49 = v27;
          if ((int)v48 < (int)v22) {
            v28 = v40;
            v29 = v48;
            v52 = v44 + (int)((((_DWORD)v27 - (_DWORD)v23 +
                                ((int)v27 - (int)v23 < 0 ? 7 : 0))
                               << 6) &
                              0xFFFFFE00);
            v30 = v41;
            v31 = v50;
            do {
              result = nvidia_648ae0_alt1(
                  v52 + v17 * (__int64)((int)v29 >> 6), a2, v31, a7, v30, v28,
                  (unsigned int)(a5 - v49), (unsigned int)(a6 - v51));
              v29 += 64;
              v30 -= 64;
              v28 -= 64;
              v31 += 64;
            } while (v29 < v22);
          }
          LODWORD(v23) = v47;
          v27 = v49 + 8;
          v51 += 8;
          v50 += v45;
        } while (v49 + 8 < v46);
      }
      v23 = v39;
    } while (v39 < v36);
  }
  return result;
}

__int64 nvidia_647ee0(__int64 result, __int64 a2, int a3, int a4, int a5,
                      int a6, __int64 a7, _DWORD* a8, int a9)
{
  int v9;
  int v10;
  int v11;
  int v12;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  signed int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  signed int v25;
  signed int v26;
  __int64 v27;
  unsigned int v28;
  __int64 v29;
  unsigned int v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  int v35;
  __int64 v36;
  signed int v37;
  __int64 v38;
  __int64 v39;
  int v40;
  int v41;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  int v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  signed int v51;
  __int64 v52;

  v9 = a8[1];
  v34 = result;
  v10 = 8 << v9;
  v35 = 8 << v9;
  v11 = a5 / v10 * v10;
  v12 = (a6 + v10 - 1) / v10 * v10;
  if (v11 < v12) {
    v15 = a5 + 7;
    v16 = *a8 + v9 + a8[2];
    if (a5 >= 0) {
      v15 = a5;
    }
    v17 = 512 << v16;
    v18 = a6 + 7;
    v33 = a9 * (__int64)(512 << v16);
    if (a6 < -7) {
      v18 = a6 + 14;
    }
    v38 = (int)(v15 & 0xFFFFFFF8);
    v37 = v18 & 0xFFFFFFF8;
    v19 = a3 + 63;
    if (a3 >= 0) {
      v19 = a3;
    }
    v20 = a4 + 63;
    if (a4 < -63) {
      v20 = a4 + 126;
    }
    v21 = v19 & 0xFFFFFFC0;
    v22 = (int)(v20 & 0xFFFFFFC0);
    v48 = v21;
    v23 = v11;
    v36 = v12;
    v41 = a3 - v21;
    v40 = a4 - v21;
    v32 = v21 - (__int64)a3;
    v45 = 8 * a7;
    do {
      if (v23 <= v38) {
        v24 = v38;
      }
      else {
        v24 = v23;
      }
      if ((int)v23 <= (int)v38) {
        v25 = v38;
      }
      else {
        v25 = v23;
      }
      v51 = v25;
      v26 = v37;
      v39 = v23 + v35;
      if (v37 >= (int)v23 + v35) {
        v26 = v23 + v35;
      }
      if (v25 < v26) {
        v46 = v26;
        v47 = v23;
        v50 = v32 + a7 * (v24 - a5);
        v44 = v34 + v33 * ((int)v23 / v35);
        if (v23 <= v38) {
          v27 = v38;
        }
        else {
          v27 = v23;
        }
        do {
          v49 = v27;
          if ((int)v48 < (int)v22) {
            v28 = v40;
            v29 = v48;
            v52 = v44 + (int)((((_DWORD)v27 - (_DWORD)v23 +
                                ((int)v27 - (int)v23 < 0 ? 7 : 0))
                               << 6) &
                              0xFFFFFE00);
            v30 = v41;
            v31 = v50;
            do {
              result = nvidia_648780_alt1(
                  v52 + v17 * (__int64)((int)v29 >> 6), a2, v31, a7, v30, v28,
                  (unsigned int)(a5 - v49), (unsigned int)(a6 - v51));
              v29 += 64;
              v30 -= 64;
              v28 -= 64;
              v31 += 64;
            } while (v29 < v22);
          }
          LODWORD(v23) = v47;
          v27 = v49 + 8;
          v51 += 8;
          v50 += v45;
        } while (v49 + 8 < v46);
      }
      v23 = v39;
    } while (v39 < v36);
  }
  return result;
}

__int64 nvidia_6481c0(__int64 result, __int64 a2, int a3, int a4, int a5,
                      int a6, __int64 a7, _DWORD* a8, int a9)
{
  int v9;
  int v10;
  int v11;
  int v12;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  signed int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  signed int v25;
  signed int v26;
  __int64 v27;
  unsigned int v28;
  __int64 v29;
  unsigned int v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  int v35;
  __int64 v36;
  signed int v37;
  __int64 v38;
  __int64 v39;
  int v40;
  int v41;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  int v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  signed int v51;
  __int64 v52;

  v9 = a8[1];
  v34 = result;
  v10 = 8 << v9;
  v35 = 8 << v9;
  v11 = a5 / v10 * v10;
  v12 = (a6 + v10 - 1) / v10 * v10;
  if (v11 < v12) {
    v15 = a5 + 7;
    v16 = *a8 + v9 + a8[2];
    if (a5 >= 0) {
      v15 = a5;
    }
    v17 = 512 << v16;
    v18 = a6 + 7;
    v33 = a9 * (__int64)(512 << v16);
    if (a6 < -7) {
      v18 = a6 + 14;
    }
    v38 = (int)(v15 & 0xFFFFFFF8);
    v37 = v18 & 0xFFFFFFF8;
    v19 = a3 + 63;
    if (a3 >= 0) {
      v19 = a3;
    }
    v20 = a4 + 63;
    if (a4 < -63) {
      v20 = a4 + 126;
    }
    v21 = v19 & 0xFFFFFFC0;
    v22 = (int)(v20 & 0xFFFFFFC0);
    v48 = v21;
    v23 = v11;
    v36 = v12;
    v41 = a3 - v21;
    v40 = a4 - v21;
    v32 = v21 - (__int64)a3;
    v45 = 8 * a7;
    do {
      if (v23 <= v38) {
        v24 = v38;
      }
      else {
        v24 = v23;
      }
      if ((int)v23 <= (int)v38) {
        v25 = v38;
      }
      else {
        v25 = v23;
      }
      v51 = v25;
      v26 = v37;
      v39 = v23 + v35;
      if (v37 >= (int)v23 + v35) {
        v26 = v23 + v35;
      }
      if (v25 < v26) {
        v46 = v26;
        v47 = v23;
        v50 = v32 + a7 * (v24 - a5);
        v44 = v34 + v33 * ((int)v23 / v35);
        if (v23 <= v38) {
          v27 = v38;
        }
        else {
          v27 = v23;
        }
        do {
          v49 = v27;
          if ((int)v48 < (int)v22) {
            v28 = v40;
            v29 = v48;
            v52 = v44 + (int)((((_DWORD)v27 - (_DWORD)v23 +
                                ((int)v27 - (int)v23 < 0 ? 7 : 0))
                               << 6) &
                              0xFFFFFE00);
            v30 = v41;
            v31 = v50;
            do {
              result = nvidia_649280_alt1(
                  v52 + v17 * (__int64)((int)v29 >> 6), a2, v31, a7, v30, v28,
                  (unsigned int)(a5 - v49), (unsigned int)(a6 - v51));
              v29 += 64;
              v30 -= 64;
              v28 -= 64;
              v31 += 64;
            } while (v29 < v22);
          }
          LODWORD(v23) = v47;
          v27 = v49 + 8;
          v51 += 8;
          v50 += v45;
        } while (v49 + 8 < v46);
      }
      v23 = v39;
    } while (v39 < v36);
  }
  return result;
}

__int64 nvidia_6484a0(__int64 result, __int64 a2, int a3, int a4, int a5,
                      int a6, __int64 a7, _DWORD* a8, int a9)
{
  int v9;
  int v10;
  int v11;
  int v12;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  signed int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  signed int v25;
  signed int v26;
  __int64 v27;
  unsigned int v28;
  __int64 v29;
  unsigned int v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  int v35;
  __int64 v36;
  signed int v37;
  __int64 v38;
  __int64 v39;
  int v40;
  int v41;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  int v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  signed int v51;
  __int64 v52;

  v9 = a8[1];
  v34 = result;
  v10 = 8 << v9;
  v35 = 8 << v9;
  v11 = a5 / v10 * v10;
  v12 = (a6 + v10 - 1) / v10 * v10;
  if (v11 < v12) {
    v15 = a5 + 7;
    v16 = *a8 + v9 + a8[2];
    if (a5 >= 0) {
      v15 = a5;
    }
    v17 = 512 << v16;
    v18 = a6 + 7;
    v33 = a9 * (__int64)(512 << v16);
    if (a6 < -7) {
      v18 = a6 + 14;
    }
    v38 = (int)(v15 & 0xFFFFFFF8);
    v37 = v18 & 0xFFFFFFF8;
    v19 = a3 + 63;
    if (a3 >= 0) {
      v19 = a3;
    }
    v20 = a4 + 63;
    if (a4 < -63) {
      v20 = a4 + 126;
    }
    v21 = v19 & 0xFFFFFFC0;
    v22 = (int)(v20 & 0xFFFFFFC0);
    v48 = v21;
    v23 = v11;
    v36 = v12;
    v41 = a3 - v21;
    v40 = a4 - v21;
    v32 = v21 - (__int64)a3;
    v45 = 8 * a7;
    do {
      if (v23 <= v38) {
        v24 = v38;
      }
      else {
        v24 = v23;
      }
      if ((int)v23 <= (int)v38) {
        v25 = v38;
      }
      else {
        v25 = v23;
      }
      v51 = v25;
      v26 = v37;
      v39 = v23 + v35;
      if (v37 >= (int)v23 + v35) {
        v26 = v23 + v35;
      }
      if (v25 < v26) {
        v46 = v26;
        v47 = v23;
        v50 = v32 + a7 * (v24 - a5);
        v44 = v34 + v33 * ((int)v23 / v35);
        if (v23 <= v38) {
          v27 = v38;
        }
        else {
          v27 = v23;
        }
        do {
          v49 = v27;
          if ((int)v48 < (int)v22) {
            v28 = v40;
            v29 = v48;
            v52 = v44 + (int)((((_DWORD)v27 - (_DWORD)v23 +
                                ((int)v27 - (int)v23 < 0 ? 7 : 0))
                               << 6) &
                              0xFFFFFE00);
            v30 = v41;
            v31 = v50;
            do {
              result = nvidia_648e40_alt1(
                  v52 + v17 * (__int64)((int)v29 >> 6), a2, v31, a7, v30, v28,
                  (unsigned int)(a5 - v49), (unsigned int)(a6 - v51));
              v29 += 64;
              v30 -= 64;
              v28 -= 64;
              v31 += 64;
            } while (v29 < v22);
          }
          LODWORD(v23) = v47;
          v27 = v49 + 8;
          v51 += 8;
          v50 += v45;
        } while (v49 + 8 < v46);
      }
      v23 = v39;
    } while (v39 < v36);
  }
  return result;
}

__int64 nvidia_648780(__int64 result, __int64 a2, __int64 a3, __int64 a4,
                      int a5, int a6, int a7, int a8)
{
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  __int64 v13;
  __int128 v14;
  __int64 v15;
  __int64 v16;
  __int16 v17;
  int v18;
  int v19;
  __int64 v20;
  __int64 v21;
  int v22;
  int v23;
  int v24;
  __int16 v25;
  __int16 v26;
  __int16 v27;
  __int16 v28;
  __int16 v29;
  __int16 v30;
  int v31;
  __int16 v32;
  __int16 v33;
  int v34;
  __int16 v35;
  int v36;
  int v37;
  __int16* v38;
  __int64 v39;
  __int64 v40;
  unsigned int v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
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

  v9 = result;
  if (a5 > 0 || a6 < 64 || a7 > 0 || a8 <= 7) {
    v15 = a7 & (unsigned int)~(a7 >> 31);
    if (a8 >= 8) {
      v16 = 8;
    }
    else {
      v16 = (unsigned int)a8;
    }
    if ((int)v15 < (int)v16) {
      v17 = a6 - 48;
      v18 = a6 - 32;
      v19 = a5 & ~(a5 >> 31);
      v20 = a2 + a3;
      v21 = v16 - v15;
      v22 = (a5 - 48) & ~((a5 - 48) >> 31);
      v23 = (a5 - 32) & ~((a5 - 32) >> 31);
      v24 = (a5 - 16) & ~((a5 - 16) >> 31);
      if (a6 - 48 >= 16) {
        v17 = 16;
      }
      if (v18 >= 16) {
        LOWORD(v18) = 16;
      }
      v25 = v22 + 48;
      v26 = v22 + 288;
      v27 = v17 - v22;
      v28 = v23 + 32;
      result = (unsigned int)(v23 + 256);
      v29 = v18 - v23;
      if (a6 >= 16) {
        v30 = 16;
      }
      else {
        v30 = a6;
      }
      v31 = v27;
      if (a6 - 16 >= 16) {
        v32 = 16;
      }
      else {
        v32 = a6 - 16;
      }
      v33 = v30 - v19;
      v34 = v29;
      v35 = v32 - v24;
      v61 = v33 & 0x7FFF;
      v62 = (__int16)(v24 + 32);
      v60 = v35 & 0x7FFF;
      v59 = (__int16)result;
      v36 = v33;
      v37 = v35;
      v58 = v29 & 0x7FFF;
      v57 = v27 & 0x7FFF;
      v55 = a4 * v15 + v28;
      v56 = a4 * v15 + v25;
      v54 = a4 * v15 + (__int16)(v24 + 16);
      v63 = (__int16)v19;
      v53 = a4 * v15 + (__int16)v19;
      v38 = (__int16*)((char*)&SdkData_c77b2a + 2 * (unsigned int)v15);
      do {
        v39 = *v38++;
        v40 = v9 + v39;
        if (v36 >= 1) {
          result = memcpy_plt(v40 + v63, v20 + v53, v61);
        }
        if (v37 >= 1) {
          result = memcpy_plt(v40 + v62, v20 + v54, v60);
        }
        if (v34 >= 1) {
          result = memcpy_plt(v40 + v59, v20 + v55, v58);
        }
        if (v31 >= 1) {
          result = memcpy_plt(v40 + v26, v20 + v56, v57);
        }
        v20 += a4;
        --v21;
      } while (v21 != 0);
    }
  }
  else {
    v10 = a2 + a3;
    v11 = 2 * a4;
    if ((((unsigned __int8)(a2 | result) | (unsigned __int8)(a3 | a4)) & 0xF) !=
        0) {
      v12 = -2;
      do {
        v13 = v10 + a4;
        v12 += 2;
        *(_OWORD*)v9 = *(_OWORD*)v10;
        *(_OWORD*)(v9 + 16) = *(_OWORD*)(v10 + a4);
        *(_OWORD*)(v9 + 32) = *(_OWORD*)(v10 + 16);
        *(_OWORD*)(v9 + 48) = *(_OWORD*)(v10 + a4 + 16);
        *(_OWORD*)(v9 + 256) = *(_OWORD*)(v10 + 32);
        *(_OWORD*)(v9 + 272) = *(_OWORD*)(v10 + a4 + 32);
        v14 = *(_OWORD*)(v10 + 48);
        v10 += v11;
        *(_OWORD*)(v9 + 288) = v14;
        *(_OWORD*)(v9 + 304) = *(_OWORD*)(v13 + 48);
        v9 += 64;
      } while (v12 < 6);
    }
    else {
      v41 = -2;
      do {
        v42 = v10 + a4;
        v43 = *(_QWORD*)(v10 + 8);
        v41 += 2;
        *(_QWORD*)v9 = *(_QWORD*)v10;
        *(_QWORD*)(v9 + 8) = v43;
        v44 = *(_QWORD*)(v10 + a4 + 8);
        *(_QWORD*)(v9 + 16) = *(_QWORD*)(v10 + a4);
        *(_QWORD*)(v9 + 24) = v44;
        v45 = *(_QWORD*)(v10 + 24);
        *(_QWORD*)(v9 + 32) = *(_QWORD*)(v10 + 16);
        *(_QWORD*)(v9 + 40) = v45;
        v46 = *(_QWORD*)(v10 + a4 + 24);
        *(_QWORD*)(v9 + 48) = *(_QWORD*)(v10 + a4 + 16);
        *(_QWORD*)(v9 + 56) = v46;
        v47 = *(_QWORD*)(v10 + 40);
        *(_QWORD*)(v9 + 256) = *(_QWORD*)(v10 + 32);
        *(_QWORD*)(v9 + 264) = v47;
        v48 = *(_QWORD*)(v10 + a4 + 40);
        *(_QWORD*)(v9 + 272) = *(_QWORD*)(v10 + a4 + 32);
        *(_QWORD*)(v9 + 280) = v48;
        v49 = *(_QWORD*)(v10 + 48);
        v50 = *(_QWORD*)(v10 + 56);
        v10 += v11;
        *(_QWORD*)(v9 + 288) = v49;
        *(_QWORD*)(v9 + 296) = v50;
        v52 = *(_QWORD*)(v42 + 48);
        v51 = *(_QWORD*)(v42 + 56);
        *(_QWORD*)(v9 + 304) = v52;
        *(_QWORD*)(v9 + 312) = v51;
        v9 += 64;
      } while (v41 < 6);
    }
  }
  return result;
}

__int64 nvidia_648ae0(__int64 result, __int64 a2, __int64 a3, __int64 a4,
                      int a5, int a6, int a7, int a8)
{
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  _OWORD* v13;
  __int128 v14;
  __int64 v15;
  __int64 v16;
  __int16 v17;
  int v18;
  int v19;
  __int64 v20;
  __int64 v21;
  int v22;
  int v23;
  int v24;
  __int16 v25;
  __int16 v26;
  __int16 v27;
  __int16 v28;
  __int16 v29;
  __int16 v30;
  int v31;
  __int16 v32;
  __int16 v33;
  int v34;
  __int16 v35;
  int v36;
  int v37;
  __int16* v38;
  __int64 v39;
  __int64 v40;
  unsigned int v41;
  _QWORD* v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;

  v9 = result;
  if (a5 > 0 || a6 < 64 || a7 > 0 || a8 <= 7) {
    v15 = a7 & (unsigned int)~(a7 >> 31);
    if (a8 >= 8) {
      v16 = 8;
    }
    else {
      v16 = (unsigned int)a8;
    }
    if ((int)v15 < (int)v16) {
      v17 = a6 - 48;
      v18 = a6 - 32;
      v19 = a5 & ~(a5 >> 31);
      v20 = a2 + a3;
      v21 = v16 - v15;
      v22 = (a5 - 48) & ~((a5 - 48) >> 31);
      v23 = (a5 - 32) & ~((a5 - 32) >> 31);
      v24 = (a5 - 16) & ~((a5 - 16) >> 31);
      if (a6 - 48 >= 16) {
        v17 = 16;
      }
      if (v18 >= 16) {
        LOWORD(v18) = 16;
      }
      v25 = v22 + 48;
      v26 = v22 + 288;
      v27 = v17 - v22;
      v28 = v23 + 32;
      result = (unsigned int)(v23 + 256);
      v29 = v18 - v23;
      if (a6 >= 16) {
        v30 = 16;
      }
      else {
        v30 = a6;
      }
      v31 = v27;
      if (a6 - 16 >= 16) {
        v32 = 16;
      }
      else {
        v32 = a6 - 16;
      }
      v33 = v30 - v19;
      v34 = v29;
      v35 = v32 - v24;
      v60 = v33 & 0x7FFF;
      v61 = (__int16)(v24 + 32);
      v59 = v35 & 0x7FFF;
      v58 = (__int16)result;
      v36 = v33;
      v37 = v35;
      v57 = v29 & 0x7FFF;
      v56 = v27 & 0x7FFF;
      v54 = a4 * v15 + v28;
      v55 = a4 * v15 + v25;
      v53 = a4 * v15 + (__int16)(v24 + 16);
      v62 = (__int16)v19;
      v52 = a4 * v15 + (__int16)v19;
      v38 = (__int16*)((char*)&SdkData_c77b2a + 2 * (unsigned int)v15);
      do {
        v39 = *v38++;
        v40 = v9 + v39;
        if (v36 >= 1) {
          result = memcpy_plt(v20 + v52, v40 + v62, v60);
        }
        if (v37 >= 1) {
          result = memcpy_plt(v20 + v53, v40 + v61, v59);
        }
        if (v34 >= 1) {
          result = memcpy_plt(v20 + v54, v40 + v58, v57);
        }
        if (v31 >= 1) {
          result = memcpy_plt(v20 + v55, v40 + v26, v56);
        }
        v20 += a4;
        --v21;
      } while (v21 != 0);
    }
  }
  else {
    v10 = a2 + a3;
    v11 = 2 * a4;
    if ((((unsigned __int8)(a2 | result) | (unsigned __int8)(a3 | a4)) & 0xF) !=
        0) {
      v12 = -2;
      do {
        v13 = (_OWORD*)(v10 + a4);
        v12 += 2;
        *(_OWORD*)v10 = *(_OWORD*)v9;
        *v13 = *(_OWORD*)(v9 + 16);
        *(_OWORD*)(v10 + 16) = *(_OWORD*)(v9 + 32);
        v13[1] = *(_OWORD*)(v9 + 48);
        *(_OWORD*)(v10 + 32) = *(_OWORD*)(v9 + 256);
        v13[2] = *(_OWORD*)(v9 + 272);
        *(_OWORD*)(v10 + 48) = *(_OWORD*)(v9 + 288);
        v10 += v11;
        v14 = *(_OWORD*)(v9 + 304);
        v9 += 64;
        v13[3] = v14;
      } while (v12 < 6);
    }
    else {
      v41 = -2;
      do {
        v42 = (_QWORD*)(v10 + a4);
        v43 = *(_QWORD*)(v9 + 8);
        v41 += 2;
        *(_QWORD*)v10 = *(_QWORD*)v9;
        *(_QWORD*)(v10 + 8) = v43;
        v44 = *(_QWORD*)(v9 + 24);
        *v42 = *(_QWORD*)(v9 + 16);
        v42[1] = v44;
        v45 = *(_QWORD*)(v9 + 40);
        *(_QWORD*)(v10 + 16) = *(_QWORD*)(v9 + 32);
        *(_QWORD*)(v10 + 24) = v45;
        v46 = *(_QWORD*)(v9 + 56);
        v42[2] = *(_QWORD*)(v9 + 48);
        v42[3] = v46;
        v47 = *(_QWORD*)(v9 + 264);
        *(_QWORD*)(v10 + 32) = *(_QWORD*)(v9 + 256);
        *(_QWORD*)(v10 + 40) = v47;
        v48 = *(_QWORD*)(v9 + 280);
        v42[4] = *(_QWORD*)(v9 + 272);
        v42[5] = v48;
        v49 = *(_QWORD*)(v9 + 296);
        *(_QWORD*)(v10 + 48) = *(_QWORD*)(v9 + 288);
        *(_QWORD*)(v10 + 56) = v49;
        v10 += v11;
        v50 = *(_QWORD*)(v9 + 304);
        v51 = *(_QWORD*)(v9 + 312);
        v9 += 64;
        v42[6] = v50;
        v42[7] = v51;
      } while (v41 < 6);
    }
  }
  return result;
}

__int64 nvidia_648e40(__int64 result, __int64 a2, __int64 a3, __int64 a4,
                      int a5, int a6, int a7, int a8)
{
  __int64 v9;
  char* v10;
  __int64 v11;
  char v12;
  char v13;
  char* v14;
  char* v15;
  __int128 v16;
  __int128 v17;
  __int64 v18;
  __int64 v19;
  __int16 v20;
  int v21;
  int v22;
  __int64 v23;
  __int64 v24;
  int v25;
  int v26;
  int v27;
  __int16 v28;
  __int16 v29;
  __int16 v30;
  __int16 v31;
  __int16 v32;
  __int16 v33;
  int v34;
  __int16 v35;
  __int16 v36;
  int v37;
  __int16 v38;
  int v39;
  int v40;
  __int16* v41;
  __int64 v42;
  __int64 v43;
  char v44;
  char v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  char* v54;
  char* v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;

  v9 = result;
  if (a5 > 0 || a6 < 64 || a7 > 0 || a8 <= 7) {
    v18 = a7 & (unsigned int)~(a7 >> 31);
    if (a8 >= 8) {
      v19 = 8;
    }
    else {
      v19 = (unsigned int)a8;
    }
    if ((int)v18 < (int)v19) {
      v20 = a6 - 48;
      v21 = a6 - 32;
      v22 = a5 & ~(a5 >> 31);
      v23 = a2 + a3;
      v24 = v19 - v18;
      v25 = (a5 - 48) & ~((a5 - 48) >> 31);
      v26 = (a5 - 32) & ~((a5 - 32) >> 31);
      v27 = (a5 - 16) & ~((a5 - 16) >> 31);
      if (a6 - 48 >= 16) {
        v20 = 16;
      }
      if (v21 >= 16) {
        LOWORD(v21) = 16;
      }
      v28 = v25 + 48;
      v29 = v25 + 320;
      v30 = v20 - v25;
      v31 = v26 + 32;
      result = (unsigned int)(v26 + 256);
      v32 = v21 - v26;
      if (a6 >= 16) {
        v33 = 16;
      }
      else {
        v33 = a6;
      }
      v34 = v30;
      if (a6 - 16 >= 16) {
        v35 = 16;
      }
      else {
        v35 = a6 - 16;
      }
      v36 = v33 - v22;
      v37 = v32;
      v38 = v35 - v27;
      v74 = v36 & 0x7FFF;
      v75 = (__int16)(v27 + 64);
      v73 = v38 & 0x7FFF;
      v72 = (__int16)result;
      v39 = v36;
      v40 = v38;
      v71 = v32 & 0x7FFF;
      v70 = v30 & 0x7FFF;
      v68 = a4 * v18 + v31;
      v69 = a4 * v18 + v28;
      v67 = a4 * v18 + (__int16)(v27 + 16);
      v76 = (__int16)v22;
      v66 = a4 * v18 + (__int16)v22;
      v41 = (__int16*)((char*)&SdkData_c77b3a + 2 * (unsigned int)v18);
      do {
        v42 = *v41++;
        v43 = v9 + v42;
        if (v39 >= 1) {
          result = memcpy_plt(v43 + v76, v23 + v66, v74);
        }
        if (v40 >= 1) {
          result = memcpy_plt(v43 + v75, v23 + v67, v73);
        }
        if (v37 >= 1) {
          result = memcpy_plt(v43 + v72, v23 + v68, v71);
        }
        if (v34 >= 1) {
          result = memcpy_plt(v43 + v29, v23 + v69, v70);
        }
        v23 += a4;
        --v24;
      } while (v24 != 0);
    }
  }
  else {
    v10 = (char*)(a2 + a3);
    v11 = 2 * a4;
    if ((((unsigned __int8)(a2 | result) | (unsigned __int8)(a3 | a4)) & 0xF) !=
        0) {
      v12 = 1;
      do {
        v13 = v12;
        v14 = &v10[3 * a4];
        *(_OWORD*)v9 = *(_OWORD*)v10;
        *(_OWORD*)(v9 + 16) = *(_OWORD*)&v10[a4];
        *(_OWORD*)(v9 + 64) = *((_OWORD*)v10 + 1);
        *(_OWORD*)(v9 + 80) = *(_OWORD*)&v10[a4 + 16];
        *(_OWORD*)(v9 + 256) = *((_OWORD*)v10 + 2);
        *(_OWORD*)(v9 + 272) = *(_OWORD*)&v10[a4 + 32];
        *(_OWORD*)(v9 + 320) = *((_OWORD*)v10 + 3);
        v15 = &v10[v11];
        *(_OWORD*)(v9 + 336) = *(_OWORD*)&v10[a4 + 48];
        v16 = *(_OWORD*)&v10[2 * a4];
        v10 += v11 + v11;
        *(_OWORD*)(v9 + 32) = v16;
        *(_OWORD*)(v9 + 48) = *(_OWORD*)v14;
        *(_OWORD*)(v9 + 96) = *((_OWORD*)v15 + 1);
        *(_OWORD*)(v9 + 112) = *((_OWORD*)v14 + 1);
        *(_OWORD*)(v9 + 288) = *((_OWORD*)v15 + 2);
        *(_OWORD*)(v9 + 304) = *((_OWORD*)v14 + 2);
        v17 = *((_OWORD*)v15 + 3);
        v12 = 0;
        *(_OWORD*)(v9 + 352) = v17;
        *(_OWORD*)(v9 + 368) = *((_OWORD*)v14 + 3);
        v9 += 128;
      } while ((v13 & 1) != 0);
    }
    else {
      v44 = 1;
      do {
        v45 = v44;
        v46 = *((_QWORD*)v10 + 1);
        *(_QWORD*)v9 = *(_QWORD*)v10;
        *(_QWORD*)(v9 + 8) = v46;
        v47 = *(_QWORD*)&v10[a4 + 8];
        *(_QWORD*)(v9 + 16) = *(_QWORD*)&v10[a4];
        *(_QWORD*)(v9 + 24) = v47;
        v48 = *((_QWORD*)v10 + 3);
        *(_QWORD*)(v9 + 64) = *((_QWORD*)v10 + 2);
        *(_QWORD*)(v9 + 72) = v48;
        v49 = *(_QWORD*)&v10[a4 + 24];
        *(_QWORD*)(v9 + 80) = *(_QWORD*)&v10[a4 + 16];
        *(_QWORD*)(v9 + 88) = v49;
        v50 = *((_QWORD*)v10 + 5);
        *(_QWORD*)(v9 + 256) = *((_QWORD*)v10 + 4);
        *(_QWORD*)(v9 + 264) = v50;
        v51 = *(_QWORD*)&v10[a4 + 40];
        *(_QWORD*)(v9 + 272) = *(_QWORD*)&v10[a4 + 32];
        *(_QWORD*)(v9 + 280) = v51;
        v52 = *((_QWORD*)v10 + 7);
        *(_QWORD*)(v9 + 320) = *((_QWORD*)v10 + 6);
        *(_QWORD*)(v9 + 328) = v52;
        v53 = *(_QWORD*)&v10[a4 + 56];
        *(_QWORD*)(v9 + 336) = *(_QWORD*)&v10[a4 + 48];
        *(_QWORD*)(v9 + 344) = v53;
        v54 = &v10[v11];
        v55 = &v10[3 * a4];
        v57 = *(_QWORD*)&v10[2 * a4];
        v56 = *(_QWORD*)&v10[v11 + 8];
        *(_QWORD*)(v9 + 32) = v57;
        *(_QWORD*)(v9 + 40) = v56;
        v58 = *((_QWORD*)v55 + 1);
        *(_QWORD*)(v9 + 48) = *(_QWORD*)v55;
        *(_QWORD*)(v9 + 56) = v58;
        v59 = *((_QWORD*)v54 + 3);
        *(_QWORD*)(v9 + 96) = *((_QWORD*)v54 + 2);
        *(_QWORD*)(v9 + 104) = v59;
        v60 = *((_QWORD*)v55 + 3);
        *(_QWORD*)(v9 + 112) = *((_QWORD*)v55 + 2);
        *(_QWORD*)(v9 + 120) = v60;
        v61 = *((_QWORD*)v54 + 5);
        *(_QWORD*)(v9 + 288) = *((_QWORD*)v54 + 4);
        *(_QWORD*)(v9 + 296) = v61;
        v62 = *((_QWORD*)v55 + 5);
        *(_QWORD*)(v9 + 304) = *((_QWORD*)v55 + 4);
        *(_QWORD*)(v9 + 312) = v62;
        v63 = *((_QWORD*)v54 + 7);
        *(_QWORD*)(v9 + 352) = *((_QWORD*)v54 + 6);
        *(_QWORD*)(v9 + 360) = v63;
        v64 = *((_QWORD*)v55 + 6);
        v65 = *((_QWORD*)v55 + 7);
        *(_QWORD*)(v9 + 368) = v64;
        *(_QWORD*)(v9 + 376) = v65;
        v9 += 128;
        v10 = &v54[v11];
        v44 = 0;
      } while ((v45 & 1) != 0);
    }
  }
  return result;
}

__int64 nvidia_649280(__int64 result, __int64 a2, __int64 a3, __int64 a4,
                      int a5, int a6, int a7, int a8)
{
  __int64 v9;
  char* v10;
  __int64 v11;
  char v12;
  char v13;
  char* v14;
  char* v15;
  char* v16;
  __int128 v17;
  __int64 v18;
  __int64 v19;
  __int16 v20;
  int v21;
  int v22;
  __int64 v23;
  __int64 v24;
  int v25;
  int v26;
  int v27;
  __int16 v28;
  __int16 v29;
  __int16 v30;
  __int16 v31;
  __int16 v32;
  __int16 v33;
  int v34;
  __int16 v35;
  __int16 v36;
  int v37;
  __int16 v38;
  int v39;
  int v40;
  __int16* v41;
  __int64 v42;
  __int64 v43;
  char v44;
  char v45;
  char* v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  char* v55;
  char* v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;

  v9 = result;
  if (a5 > 0 || a6 < 64 || a7 > 0 || a8 <= 7) {
    v18 = a7 & (unsigned int)~(a7 >> 31);
    if (a8 >= 8) {
      v19 = 8;
    }
    else {
      v19 = (unsigned int)a8;
    }
    if ((int)v18 < (int)v19) {
      v20 = a6 - 48;
      v21 = a6 - 32;
      v22 = a5 & ~(a5 >> 31);
      v23 = a2 + a3;
      v24 = v19 - v18;
      v25 = (a5 - 48) & ~((a5 - 48) >> 31);
      v26 = (a5 - 32) & ~((a5 - 32) >> 31);
      v27 = (a5 - 16) & ~((a5 - 16) >> 31);
      if (a6 - 48 >= 16) {
        v20 = 16;
      }
      if (v21 >= 16) {
        LOWORD(v21) = 16;
      }
      v28 = v25 + 48;
      v29 = v25 + 320;
      v30 = v20 - v25;
      v31 = v26 + 32;
      result = (unsigned int)(v26 + 256);
      v32 = v21 - v26;
      if (a6 >= 16) {
        v33 = 16;
      }
      else {
        v33 = a6;
      }
      v34 = v30;
      if (a6 - 16 >= 16) {
        v35 = 16;
      }
      else {
        v35 = a6 - 16;
      }
      v36 = v33 - v22;
      v37 = v32;
      v38 = v35 - v27;
      v74 = v36 & 0x7FFF;
      v75 = (__int16)(v27 + 64);
      v73 = v38 & 0x7FFF;
      v72 = (__int16)result;
      v39 = v36;
      v40 = v38;
      v71 = v32 & 0x7FFF;
      v70 = v30 & 0x7FFF;
      v68 = a4 * v18 + v31;
      v69 = a4 * v18 + v28;
      v67 = a4 * v18 + (__int16)(v27 + 16);
      v76 = (__int16)v22;
      v66 = a4 * v18 + (__int16)v22;
      v41 = (__int16*)((char*)&SdkData_c77b3a + 2 * (unsigned int)v18);
      do {
        v42 = *v41++;
        v43 = v9 + v42;
        if (v39 >= 1) {
          result = memcpy_plt(v23 + v66, v43 + v76, v74);
        }
        if (v40 >= 1) {
          result = memcpy_plt(v23 + v67, v43 + v75, v73);
        }
        if (v37 >= 1) {
          result = memcpy_plt(v23 + v68, v43 + v72, v71);
        }
        if (v34 >= 1) {
          result = memcpy_plt(v23 + v69, v43 + v29, v70);
        }
        v23 += a4;
        --v24;
      } while (v24 != 0);
    }
  }
  else {
    v10 = (char*)(a2 + a3);
    v11 = 2 * a4;
    if ((((unsigned __int8)(a2 | result) | (unsigned __int8)(a3 | a4)) & 0xF) !=
        0) {
      v12 = 1;
      do {
        v13 = v12;
        v14 = &v10[a4];
        v15 = &v10[3 * a4];
        *(_OWORD*)v10 = *(_OWORD*)v9;
        *(_OWORD*)v14 = *(_OWORD*)(v9 + 16);
        *((_OWORD*)v10 + 1) = *(_OWORD*)(v9 + 64);
        *((_OWORD*)v14 + 1) = *(_OWORD*)(v9 + 80);
        *((_OWORD*)v10 + 2) = *(_OWORD*)(v9 + 256);
        *((_OWORD*)v14 + 2) = *(_OWORD*)(v9 + 272);
        *((_OWORD*)v10 + 3) = *(_OWORD*)(v9 + 320);
        *((_OWORD*)v14 + 3) = *(_OWORD*)(v9 + 336);
        v16 = &v10[v11];
        v10 += v11 + v11;
        *(_OWORD*)v16 = *(_OWORD*)(v9 + 32);
        *(_OWORD*)v15 = *(_OWORD*)(v9 + 48);
        *((_OWORD*)v16 + 1) = *(_OWORD*)(v9 + 96);
        *((_OWORD*)v15 + 1) = *(_OWORD*)(v9 + 112);
        *((_OWORD*)v16 + 2) = *(_OWORD*)(v9 + 288);
        *((_OWORD*)v15 + 2) = *(_OWORD*)(v9 + 304);
        *((_OWORD*)v16 + 3) = *(_OWORD*)(v9 + 352);
        v12 = 0;
        v17 = *(_OWORD*)(v9 + 368);
        v9 += 128;
        *((_OWORD*)v15 + 3) = v17;
      } while ((v13 & 1) != 0);
    }
    else {
      v44 = 1;
      do {
        v45 = v44;
        v46 = &v10[a4];
        v47 = *(_QWORD*)(v9 + 8);
        *(_QWORD*)v10 = *(_QWORD*)v9;
        *((_QWORD*)v10 + 1) = v47;
        v48 = *(_QWORD*)(v9 + 24);
        *(_QWORD*)v46 = *(_QWORD*)(v9 + 16);
        *((_QWORD*)v46 + 1) = v48;
        v49 = *(_QWORD*)(v9 + 72);
        *((_QWORD*)v10 + 2) = *(_QWORD*)(v9 + 64);
        *((_QWORD*)v10 + 3) = v49;
        v50 = *(_QWORD*)(v9 + 88);
        *((_QWORD*)v46 + 2) = *(_QWORD*)(v9 + 80);
        *((_QWORD*)v46 + 3) = v50;
        v51 = *(_QWORD*)(v9 + 264);
        *((_QWORD*)v10 + 4) = *(_QWORD*)(v9 + 256);
        *((_QWORD*)v10 + 5) = v51;
        v52 = *(_QWORD*)(v9 + 280);
        *((_QWORD*)v46 + 4) = *(_QWORD*)(v9 + 272);
        *((_QWORD*)v46 + 5) = v52;
        v53 = *(_QWORD*)(v9 + 328);
        *((_QWORD*)v10 + 6) = *(_QWORD*)(v9 + 320);
        *((_QWORD*)v10 + 7) = v53;
        v54 = *(_QWORD*)(v9 + 344);
        *((_QWORD*)v46 + 6) = *(_QWORD*)(v9 + 336);
        *((_QWORD*)v46 + 7) = v54;
        v55 = &v10[v11];
        v56 = &v10[3 * a4];
        v57 = *(_QWORD*)(v9 + 40);
        *(_QWORD*)v55 = *(_QWORD*)(v9 + 32);
        *((_QWORD*)v55 + 1) = v57;
        v58 = *(_QWORD*)(v9 + 56);
        *(_QWORD*)v56 = *(_QWORD*)(v9 + 48);
        *((_QWORD*)v56 + 1) = v58;
        v59 = *(_QWORD*)(v9 + 104);
        *((_QWORD*)v55 + 2) = *(_QWORD*)(v9 + 96);
        *((_QWORD*)v55 + 3) = v59;
        v60 = *(_QWORD*)(v9 + 120);
        *((_QWORD*)v56 + 2) = *(_QWORD*)(v9 + 112);
        *((_QWORD*)v56 + 3) = v60;
        v61 = *(_QWORD*)(v9 + 296);
        *((_QWORD*)v55 + 4) = *(_QWORD*)(v9 + 288);
        *((_QWORD*)v55 + 5) = v61;
        v62 = *(_QWORD*)(v9 + 312);
        *((_QWORD*)v56 + 4) = *(_QWORD*)(v9 + 304);
        *((_QWORD*)v56 + 5) = v62;
        v63 = *(_QWORD*)(v9 + 360);
        *((_QWORD*)v55 + 6) = *(_QWORD*)(v9 + 352);
        *((_QWORD*)v55 + 7) = v63;
        v64 = *(_QWORD*)(v9 + 368);
        v65 = *(_QWORD*)(v9 + 376);
        v9 += 128;
        *((_QWORD*)v56 + 6) = v64;
        *((_QWORD*)v56 + 7) = v65;
        v10 = &v55[v11];
        v44 = 0;
      } while ((v45 & 1) != 0);
    }
  }
  return result;
}

_QWORD* nvidia_6496c0(_QWORD* result)
{
  result[2] = 0;
  result[3] = 0;
  result[4] = 0;
  return result;
}

_QWORD* nvidia_6496d0(_QWORD* result, __int64 a2, __int64 a3, __int64 a4)
{
  result[2] = a2;
  result[3] = a3;
  result[4] = a4;
  return result;
}

__int64 nvidia_649720(__int64 a1, _QWORD* a2)
{
  *(_OWORD*)(a1 + 16) = 0u;
  *(_OWORD*)(a1 + 32) = 0u;
  *(_OWORD*)a1 = 0u;
  if ((*(_BYTE*)(a2[2] + 17LL) & 1) != 0) {
    return 0;
  }
  *(_QWORD*)(a1 + 8) = a2[1];
  *(_QWORD*)(a1 + 16) = a2[2];
  *(_QWORD*)(a1 + 24) = a2[3];
  *(_QWORD*)(a1 + 32) = a2[4];
  return 1;
}

__int64 nvidia_649780(__int64 a1)
{
  __int64 v1;
  __int64 v2;

  v1 = *(_QWORD*)(a1 + 16);
  if ((*(_DWORD*)v1 != 0 || (*(_BYTE*)(v1 + 16) & 1) == 0) &&
      (v2 = *(_QWORD*)(v1 + 48)) != 0) {
    return *(_QWORD*)(a1 + 24) + v2;
  }
  else {
    return 0;
  }
}

__int64 nvidia_6497b0(__int64 a1)
{
  __int64 v1;
  __int64 v2;

  v1 = *(_QWORD*)(a1 + 16);
  if ((*(_BYTE*)(v1 + 16) & 1) != 0) {
    return 0;
  }
  v2 = *(_QWORD*)(v1 + 48);
  if (v2 == 0) {
    return 0;
  }
  else {
    return *(_QWORD*)(a1 + 24) + v2;
  }
}

__int64 nvidia_6497e0(__int64 a1)
{
  return *(_QWORD*)(a1 + 24) + *(_QWORD*)(*(_QWORD*)(a1 + 16) + 24LL);
}

__int64 nvidia_6497f0(__int64 a1, __int64 a2)
{
  return SdkRoutine_6589a0(*(_QWORD*)(a1 + 16), *(_QWORD*)(a1 + 24) + a2);
}

__int64 nvidia_649800(__int64 a1, __int64 a2)
{
  return SdkRoutine_6589a0(*(_QWORD*)(a1 + 16), *(_QWORD*)(a1 + 24) + a2);
}

__int64 nvidia_649850(__int64 a1, char a2, char a3)
{
  __int64 v7;
  __int64 v8;
  __int64 v9;

  if ((atomic_load_explicit((atomic_uchar* volatile)SdkData_e89bb8,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(&SdkData_1040950) != 0) {
    SdkRoutine_64adc0(&SdkData_1040780);
    __cxa_guard_release_plt(&SdkData_1040950);
  }
  if (SdkData_1040798 != nullptr && (unsigned int)SdkData_1040798(0) == 0) {
    if ((a2 & 1) != 0 &&
        ((v7 = *(_QWORD*)(a1 + 2528), *(_QWORD*)(a1 + 7648) = &SdkData_1040780,
          v8 = a1 + 7648, v9 = NvRmGpuDeviceGetInfo_plt(v7),
          (*(unsigned int (**)(__int64, _QWORD, _QWORD, __int64, __int64 (**)(),
                               __int64))(*(_QWORD*)(a1 + 7648) + 56LL))(
              a1 + 7656, *(_QWORD*)(v9 + 488), *(_QWORD*)(v9 + 496), a1,
              &SdkData_ea63b8, 3) != 0) ||
         (*(unsigned int (**)(_QWORD, __int64))(*(_QWORD*)(a1 + 7648) + 72LL))(
             *(_QWORD*)(a1 + 7656), a1 + 7664) != 0)) {
      if (*(_QWORD*)(a1 + 7656) != 0) {
        (*(void (**)(void*))(*(_QWORD*)v8 + 64))(*(void**)((char*)v8 + 8));
      }
      *(_QWORD*)v8 = 0;
      *(_QWORD*)(a1 + 7656) = 0;
      if (*(_QWORD*)(a1 + 7680) == 0) {
        goto LABEL_13;
      }
    }
    else {
      if ((a3 & 1) == 0 || (nvidia_649a20_alt1(a1) & 1) != 0) {
        return 1;
      }
      if (*(_QWORD*)(a1 + 7656) != 0) {
        (*(void (**)(void*))(*(_QWORD*)(a1 + 7648) + 64LL))(
            *(void**)(a1 + 7656));
      }
      *(_OWORD*)(a1 + 7648) = 0u;
      if (*(_QWORD*)(a1 + 7680) == 0) {
      LABEL_13:
        *(_OWORD*)(a1 + 7672) = 0u;
        return 0;
      }
    }
    (*(void (**)(void*))(*(_QWORD*)(a1 + 7672) + 16LL))(*(void**)(a1 + 7680));
    goto LABEL_13;
  }
  return 0;
}

__int64 unplaced_9_6499c0(_QWORD* a1)
{
  __int128 v2;
  __int64 result;

  if (a1[957] != 0) {
    (*(void (**)(void*))(a1[956] + 64LL))(*(void**)((char*)&a1[956] + 8));
  }
  v2 = (__typeof__(v2)){0};
  result = a1[960];
  *((_OWORD*)a1 + 478) = (__typeof__(*((_OWORD*)a1 + 478))){0};
  if (result != 0) {
    result = (*(__int64 (**)(void*))(a1[959] + 16LL))(
        *(void**)((char*)&a1[959] + 8));
    v2 = (__typeof__(v2)){0};
  }
  *(_OWORD*)(a1 + 959) = v2;
  return result;
}

__int64 nvidia_649a20(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  bool v5;
  __int64 result;
  _QWORD v7[3];
  _BYTE v8[32];
  __int128 v9;
  __int64 v10;

  if ((atomic_load_explicit((atomic_uchar* volatile)SdkData_e89bc8,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(&SdkData_1040960) != 0) {
    __cxa_guard_release_plt(&SdkData_1040960);
  }
  if ((nvidia_64aea0_alt1(&SdkData_1040958) & 1) == 0) {
    return 0;
  }
  v2 = a1[316];
  v10 = 0;
  a1[959] = SdkData_1040958;
  v9 = 0u;
  *(_OWORD*)&v8[16] = 0u;
  *(_OWORD*)v8 = 0u;
  v7[1] = SdkData_ea6460;
  v7[2] = a1;
  v7[0] = 0x2000100000002LL;
  v3 = NvRmGpuDeviceGetInfo_plt(v2);
  *(_DWORD*)v8 = 0;
  v4 = a1[959];
  *(_OWORD*)&v8[8] = *(_OWORD*)(v3 + 488);
  v5 = (*(unsigned int (**)(_QWORD*))(v4 + 8))(v7) != 0 ||
       *((_QWORD*)&v9 + 1) == 0;
  result = !v5;
  if (!v5) {
    a1[960] = *((_QWORD*)&v9 + 1);
  }
  return result;
}

__int64 nvidia_649b10()
{
  if ((SdkRoutine_65ed60() & 1) != 0) {
    return 5;
  }
  else {
    return 3;
  }
}

__int64 nvidia_649b40(__int64 a1, __int64* a2, unsigned __int64 a3,
                      unsigned __int64 a4)
{
  char v8;
  _DWORD* v9;
  __int64 v10;

  v8 = SdkRoutine_65ed60();
  v9 = (_DWORD*)*a2;
  if ((v8 & 1) != 0) {
    *v9 = 536948366;
    *(_DWORD*)(*a2 + 4) = a4 >> 8;
    v9 = (_DWORD*)(*a2 + 8);
    *a2 = (__int64)v9;
  }
  *v9 = 536944813;
  *(_DWORD*)(*a2 + 4) = a3 >> 8;
  v10 = *a2;
  *a2 += 8;
  *(_DWORD*)(v10 + 8) = -2147278672;
  *a2 += 4;
  return SdkRoutine_688370(a1 + 11128);
}

__int64 nvidia_649bf0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3,
                      _QWORD* a4, unsigned int a5)
{
  __int64 v5;
  int v10;
  unsigned __int64 v11;
  char v12;
  __int64 v13;
  unsigned __int64 v14;
  int v15;
  char v16;
  _DWORD* v17;
  _DWORD* v18;
  __int64 result;
  _DWORD* v20;

  v5 = a5;
  if (*(_BYTE*)(a1 + 11136) != 0) {
    v10 = 3;
  }
  else {
    v10 = 0;
  }
  v11 = ((unsigned __int64)a5 + 3) >> 2;
  v12 = ((__int64 (*)(void))SdkRoutine_65ed60_alt1)();
  v13 = *(_QWORD*)(a1 + 11240);
  v14 = *(_QWORD*)(a1 + 11248);
  if ((v12 & 1) != 0) {
    v15 = 5;
  }
  else {
    v15 = 3;
  }
  v20 = *(_DWORD**)(a1 + 11240);
  if (v13 + 4 * (unsigned __int64)(unsigned int)(v11 + v15 + v10 + 7) > v14) {
    SdkRoutine_64b750(a1 + 11240);
    v20 = *(_DWORD**)(a1 + 11240);
  }
  SdkRoutine_6892f0(a1 + 11128, &v20, a4);
  SdkRoutine_685980(&v20, *(_QWORD*)(a1 + 16) + 16LL, a3,
                    (unsigned int)(4 * v11), 0);
  memcpy_plt(v20, *a4, v5);
  v20 += v11;
  v16 = SdkRoutine_65ed60_alt1(a1);
  v17 = v20;
  if ((v16 & 1) != 0) {
    *v20 = 536948366;
    v20[1] = a3 >> 8;
    v17 = v20 + 2;
    v20 += 2;
  }
  *v17 = 536944813;
  v20[1] = a2 >> 8;
  v18 = v20;
  v20[2] = -2147278672;
  v20 = v18 + 3;
  result = SdkRoutine_688370(a1 + 11128);
  *(_QWORD*)(a1 + 11240) = v20;
  return result;
}

__int64 nvidia_649d70(__int64 a1, unsigned __int64 a2, unsigned __int64 a3,
                      int a4, char a5, int a6)
{
  int v6;
  int v10;
  _BYTE* v11;
  int v12;
  _QWORD* v13;
  int v14;
  __int64 v15;
  int v16;
  unsigned int v17;
  unsigned int v18;
  char v19;
  _DWORD* v20;
  unsigned __int64 v21;
  int v22;
  __int64 v23;
  char* v24;
  _DWORD* v25;
  int v26;
  unsigned int v27;
  __int64 v28;
  char* v29;
  char v30;
  _DWORD* v31;
  _DWORD* v32;
  __int64 result;
  _DWORD* v35;
  __int128 v36;
  __int128 v37;
  __int128 v38;
  __int128 v39;
  __int128 v40;
  __int128 v41;
  _QWORD v42[20];
  int v43;

  v6 = *(_DWORD*)(a1 + 328);
  v36 = 0u;
  v37 = 0u;
  v38 = 0u;
  v39 = 0u;
  if (v6 == 52928) {
    v10 = 2;
  }
  else {
    v10 = 0;
  }
  if (v6 == 51648) {
    v10 = 1;
  }
  v40 = 0u;
  v41 = 0u;
  v43 = v10;
  memset(v42, 0, sizeof(v42));
  if (v6 == 52928) {
    DWORD2(v38) = a4;
    LODWORD(v40) = a4;
    LODWORD(v37) = 0x1000000;
    v11 = (_BYTE*)(a1 + 11136);
    LODWORD(v42[17]) = 1;
    v12 = *(unsigned __int8*)(a1 + 11136);
    DWORD2(v39) = 5243136;
    v13 = (_QWORD*)(a1 + 16);
    if (v12 != 0) {
      v14 = 45;
    }
    else {
      v14 = 42;
    }
    v15 = a1 + 11128;
    if ((*(_DWORD*)(a1 + 356) & 0x14) != 0) {
      v16 = 720896;
    }
    else {
      v16 = 196608;
    }
    DWORD3(v40) = v16;
    if ((a5 & 1) != 0) {
      v17 = a6 & 0xFFC0FFFF | ((*(_DWORD*)(a1 + 5984) & 0x3F) << 16);
    LABEL_23:
      LODWORD(v37) = v17;
    }
  }
  else {
    v13 = (_QWORD*)(a1 + 16);
    LODWORD(v41) = 1;
    LODWORD(v37) = 64;
    DWORD2(v40) = 48;
    DWORD3(v38) = 67305472;
    v15 = a1 + 11128;
    v11 = (_BYTE*)(a1 + 11136);
    if (*(_BYTE*)(a1 + 11136) != 0) {
      v14 = 45;
    }
    else {
      v14 = 42;
    }
    if ((*(_DWORD*)(a1 + 356) & 0x14) != 0) {
      v18 = 0x80000000;
    }
    else {
      v18 = 0;
    }
    LODWORD(v40) = v18 & 0x80000000 | a4 & 0x7FFFFFFF;
    if ((a5 & 1) != 0) {
      v17 = a6 & 0xFFFFFFC0 | *(_DWORD*)(a1 + 5984) & 0x3F;
      goto LABEL_23;
    }
  }
  v19 = SdkRoutine_65ed60_alt1(a1);
  v20 = *(_DWORD**)(a1 + 11240);
  v21 = *(_QWORD*)(a1 + 11248);
  v35 = v20;
  if ((v19 & 1) != 0) {
    v22 = 5;
  }
  else {
    v22 = 3;
  }
  if ((unsigned __int64)&v20[v22 + v14] > v21) {
    SdkRoutine_64b750(a1 + 11240);
    v35 = *(_DWORD**)(a1 + 11240);
  }
  SdkRoutine_687900(v15, &v35, &v36);
  v23 = 96;
  if (v43 == 2) {
    v23 = 60;
    v24 = (char*)&v39 + 12;
  }
  else {
    v24 = (char*)v42;
  }
  SdkRoutine_685980(&v35, *v13 + 16LL, v23 + a3, 12, 0);
  v25 = v35;
  v26 = *((_DWORD*)v24 + 2);
  *(_QWORD*)v35 = *(_QWORD*)v24;
  v25[2] = v26;
  v35 = v25 + 3;
  if (*v11 == 1) {
    if (v43 == 2) {
      v27 = 0;
    }
    else {
      v27 = 2;
    }
    v28 = 60;
    if (v43 == 2) {
      v29 = (char*)&v36;
    }
    else {
      v29 = (char*)&v39 + 12;
    }
    if (v43 == 2) {
      v28 = 0;
    }
    SdkRoutine_685980(&v35, *v13 + 16LL, v28 + a3, 4 * v27, 0);
    memcpy_plt(v35, v29, 4LL * v27);
    v35 += v27;
  }
  if ((a5 & 1) != 0) {
    SdkRoutine_685980(&v35, *v13 + 16LL, a3 + 16, 4, 0);
    *v35++ = v37;
  }
  v30 = SdkRoutine_65ed60_alt1(a1);
  v31 = v35;
  if ((v30 & 1) != 0) {
    *v35 = 536948366;
    v35[1] = a3 >> 8;
    v31 = v35 + 2;
    v35 += 2;
  }
  *v31 = 536944813;
  v35[1] = a2 >> 8;
  v32 = v35;
  v35[2] = -2147278672;
  v35 = v32 + 3;
  result = SdkRoutine_688370(v15);
  *(_QWORD*)(a1 + 11240) = v35;
  return result;
}

__int64 nvidia_64a0e0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  __int64 v4;

  v1 = *(_QWORD*)result;
  v2 = result;
  *(_DWORD*)(result + 8) = 5;
  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_1040960,
                            memory_order_acquire) &
       1) == 0) {
    v4 = v1;
    result = __cxa_guard_acquire_plt(&SdkData_1040960);
    v1 = v4;
    if ((_DWORD)result != 0) {
      result = __cxa_guard_release_plt(&SdkData_1040960);
      v1 = v4;
    }
  }
  *(_DWORD*)(v2 + 12) = 131073;
  v3 = *(_QWORD**)(v2 + 24);
  if (v3 != nullptr) {
    *v3 = v1;
    result = NvRmGpuDeviceGetInfo_plt(*(_QWORD*)(v1 + 2528));
    *(_DWORD*)(*(_QWORD*)(v2 + 24) + 8LL) = 0;
    *(_OWORD*)(*(_QWORD*)(v2 + 24) + 16LL) = *(_OWORD*)(result + 488);
  }
  else {
    *(_QWORD*)(v2 + 16) = 1;
  }
  return result;
}

__int64 nvidia_64a190(__int64 result)
{
  *(_DWORD*)(result + 16) = 2;
  return result;
}

__int64 nvidia_64a1a0(_QWORD* a1)
{
  __int64 v1;
  __int64 result;

  v1 = a1[2];
  if (*((_BYTE*)a1 + 32) == 0) {
    return nvidia_64ab10_alt1(*a1, v1, a1[3], a1 + 5, 0, a1 + 6, 34);
  }
  result = nvidia_64ab10_alt1(*a1, v1 + 2048, 256, a1 + 5, 0, a1 + 6, 98);
  a1[7] = 0;
  return result;
}

__int64 nvidia_64a210(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      _QWORD* a5)
{
  __int64 result;

  result = nvidia_64ab10_alt1(a1, a2 + 2048, 256, a3, 0, a4, 98);
  *a5 = 0;
  return result;
}

__int64 nvidia_64a380(_QWORD* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;

  v1 = a1[2];
  v2 = a1[5];
  if (*(_DWORD*)v1 == 0 && (*(_BYTE*)(v1 + 16) & 1) != 0) {
    v3 = 0;
  }
  else {
    v3 = *(_QWORD*)(v1 + 48);
  }
  v4 = a1[3] - *(_QWORD*)(v1 + 24);
  memcpy_plt(v3 + v4, a1[4], a1[5]);
  return SdkRoutine_65d470(v1, v4, v2);
}

__int64 nvidia_64a3f0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5)
{
  __int64 v7;
  __int64 v8;

  if (*(_DWORD*)a2 == 0 && (*(_BYTE*)(a2 + 16) & 1) != 0) {
    v7 = 0;
  }
  else {
    v7 = *(_QWORD*)(a2 + 48);
  }
  v8 = a3 - *(_QWORD*)(a2 + 24);
  memcpy_plt(v7 + v8, a4, a5);
  return SdkRoutine_65d470(a2, v8, a5);
}

__int64 nvidia_64a480(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  SdkRoutine_688a40(a1, a2, a3, a4, a5 != 0);
  return 0;
}

__int64 nvidia_64a4b0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      unsigned int a5, char a6)
{
  return SdkRoutine_688a40(a2, a3, a4, a5, a6 != 0);
}

__int64 nvidia_64a4d0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5, __int64 a6, int a7)
{
  __int64 v8;
  _QWORD v10[4];
  int v11;
  int v12;

  v8 = *(_QWORD*)(a1 + 112);
  v10[1] = a2;
  v10[2] = a5;
  v10[3] = a6;
  v11 = a7;
  v12 = a7;
  v10[0] = 1;
  nvidia_64a520_alt1(v8, a1, v10);
  return 0;
}

__int64 nvidia_64a520(__int64 a1, __int64* a2, __int64 a3)
{
  int v3;
  unsigned __int64 v4;
  __int64 v5;
  int v9;
  __int64 result;
  int v11;
  bool v12;
  __int64 v13;
  unsigned __int64 v14;
  int v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  int v23;

  v3 = *(_DWORD*)(a1 + 20);
  v4 = *(_QWORD*)(a3 + 16);
  v5 = *(_QWORD*)(a3 + 24);
  v22 = v5;
  if (v3 == 52928) {
    v9 = 2;
  }
  else {
    v9 = 0;
  }
  if (v3 == 51648) {
    v9 = 1;
  }
  v23 = v9;
  if (v4 != 0) {
    if (*((_DWORD*)a2 + 26) != 0) {
      return nvidia_649bf0(a2[25], *(_QWORD*)(a3 + 8), v4, &v22,
                           *(_DWORD*)(a3 + 32));
    }
  }
  else {
    v4 = *(_QWORD*)(a3 + 8);
    if (*((_DWORD*)a2 + 26) != 0) {
      return nvidia_649bf0(a2[25], *(_QWORD*)(a3 + 8), v4, &v22,
                           *(_DWORD*)(a3 + 32));
    }
  }
  v11 = *(_DWORD*)(v5 + 16);
  v12 = v3 == 52928;
  v13 = 64;
  if (v12) {
    v13 = 40;
  }
  v14 = a2[1];
  v15 = *(_DWORD*)(v5 + v13);
  v16 = *(unsigned int*)(a3 + 32);
  v21 = *a2;
  v17 = (unsigned __int64)(v16 + 3) >> 2;
  if (v21 + 4 * (v17 + 7) > v14) {
    SdkRoutine_64b750(a2);
    v21 = *a2;
  }
  SdkRoutine_685980(&v21, a1 + 16, v4, (unsigned int)(4 * v17), 0);
  memcpy_plt(v21, v5, *(unsigned int*)(a3 + 32));
  v21 += 4 * v17;
  *a2 = v21;
  result = nvidia_64ac60_alt1(a2, &v20, 32);
  *(_BYTE*)v20 = 90;
  v18 = *(_QWORD*)(a3 + 8);
  v19 = v20;
  *(_QWORD*)(v20 + 16) = v4;
  *(_QWORD*)(v19 + 24) = v18;
  *(_DWORD*)(v19 + 4) = v11;
  *(_DWORD*)(v19 + 8) = v15;
  return result;
}

__int64 nvidia_64a680(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4;
  int v5;
  __int64 v6;
  int v7;
  int v8;
  __int64 v10;
  int v11;
  __int64 v12;

  v4 = *(_QWORD*)(a1 + 200);
  v10 = a4;
  v5 = *(_DWORD*)(v4 + 328);
  v6 = *(_QWORD*)(v4 + 11240);
  v12 = v6;
  if (v5 == 52928) {
    v7 = 2;
  }
  else {
    v7 = 0;
  }
  if (v5 == 51648) {
    v8 = 1;
  }
  else {
    v8 = v7;
  }
  v11 = v8;
  if (*(_BYTE*)(v4 + 11136) == 1) {
    if ((unsigned __int64)(v6 + 12) > *(_QWORD*)(v4 + 11248)) {
      SdkRoutine_64b750(v4 + 11240);
      v12 = *(_QWORD*)(v4 + 11240);
    }
    SdkRoutine_6892f0(v4 + 11128, &v12, &v10);
    *(_QWORD*)(v4 + 11240) = v12;
  }
  else {
    SdkRoutine_6892f0(v4 + 11128, &v12, &v10);
  }
  return 0;
}

__int64 nvidia_64a780(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      _QWORD* a5, _QWORD* a6)
{
  __int64 v6;

  v6 = *(_QWORD*)(a1 + 200);
  *a5 = 0;
  if (a2 == 5) {
    *a5 = SdkRoutine_66fcf0(v6, a3, a4);
  }
  if (a6 != nullptr) {
    *a6 = 0;
  }
  return 0;
}

__int64 nvidia_64a7e0(__int64 a1)
{
  SdkRoutine_66fe10(*(_QWORD*)(a1 + 200));
  return 0;
}

__int64 nvidia_64a850(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5, __int64 a6, __int64 a7)
{
  if (a2 == 5) {
    a7 = 0;
  }
  else if (a2 != 6) {
    return 1;
  }
  nvidia_64ab10_alt1(a1, a3, a4, a5, a7, a6, 34);
  return 0;
}

__int64 nvidia_64a8a0(__int64 a1, __int64 a2, __int64 a3, char a4, __int64 a5,
                      __int64 a6, __int64 a7)
{
  __int64 v11;

  if (a4 == 0) {
    v11 = 36;
  }
  else {
    v11 = 34;
  }
  return nvidia_64ab10_alt1(a1, a2, a3, a5, a6, a7, v11);
}

__int64 nvidia_64a930(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5)
{
  __int64 v7;
  __int64 v8;

  if (*(_DWORD*)a2 == 0 && (*(_BYTE*)(a2 + 16) & 1) != 0) {
    v7 = 0;
  }
  else {
    v7 = *(_QWORD*)(a2 + 48);
  }
  v8 = a3 - *(_QWORD*)(a2 + 24);
  memcpy_plt(v7 + v8, a4, a5);
  SdkRoutine_65d470(a2, v8, a5);
  return 0;
}

__int64 nvidia_64aa40(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5)
{
  __int64 v5;

  if (*(_DWORD*)a2 == 0 && (*(_BYTE*)(a2 + 16) & 1) != 0) {
    v5 = 0;
  }
  else {
    v5 = *(_QWORD*)(a2 + 48);
  }
  return memcpy_plt(v5 + a3, a4, a5);
}

__int64 nvidia_64aac0(__int64 a1, __int64* a2)
{
  __int64 result;

  result = SdkRoutine_654220();
  *a2 = result;
  return result;
}

__int64 nvidia_64ab10(__int64 a1, __int64 a2, __int64 a3, __int64* a4,
                      _QWORD* a5, __int64* a6, unsigned int a7)
{
  unsigned __int64 v13;
  __int64 result;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _BYTE v19[56];

  v13 = (a2 + a3 + 4094) & 0xFFFFFFFFFFFFF000LL;
  result = SdkData_1042148(1, v13 + 4351);
  if (result == 0) {
    goto LABEL_8;
  }
  v15 = result;
  v16 = result + 4351;
  SdkRoutine_65cf50(v19);
  SdkRoutine_65cf40(v19, a1);
  SdkRoutine_65cf70(v19, v16 & 0xFFFFFFFFFFFFF000LL, v13);
  SdkRoutine_65d040(v19, a7);
  v17 = *(_QWORD*)(a1 + 7624);
  if (v17 != 0) {
    (*(void (**)(_QWORD, _BYTE*))(v17 + 8))(*(_QWORD*)v17, v19);
  }
  result = SdkRoutine_65d0a0(v15, v19);
  if ((_BYTE)result != 0) {
    *(_DWORD*)(v15 + 16) |= 0x400000u;
    *a4 = v15;
    v18 = (a3 + *(_QWORD*)(v15 + 24) - 1) & -a3;
    *a6 = v18;
    if (a5 != nullptr) {
      *a5 = v18 - *(_QWORD*)(v15 + 24) + *(_QWORD*)(v15 + 48);
    }
    ++*(_DWORD*)(a1 + 7632);
  }
  else {
  LABEL_8:
    *a4 = 0;
    *a6 = 0;
    if (a5 != nullptr) {
      *a5 = 0;
    }
  }
  return result;
}

_QWORD* nvidia_64ac60(_QWORD* result, _QWORD* a2, unsigned int a3)
{
  __int64 v3;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  unsigned int v16;
  bool v17;
  char v18;
  __int64 v19;

  v3 = result[9];
  v6 = result;
  if (*result != v3) {
    v7 = result[7];
    v8 = result[5];
    v9 = (unsigned __int64)(*result - v3) >> 2;
    result[9] = *result;
    v10 = v3 - v7;
    v11 = result[11];
    v12 = v10 + result[12];
    if (v11 != 0 &&
        ((v13 = *(unsigned int*)(v8 - 8), v14 = *(_QWORD*)(v8 - 24) + 4 * v13,
          v15 = v13 + v9, v16 = (unsigned int)(v13 + v9) >> 21, v14 == v12)
             ? (v17 = v16 == 0)
             : (v17 = false),
         v17 && ((v18 = *(_BYTE*)(v8 - 4)) & 1) != 0)) {
      *(_DWORD*)(v8 - 8) = v15;
      *(_BYTE*)(v8 - 4) = v18 | 2;
    }
    else {
      if ((unsigned __int64)(v8 + 32) > result[6]) {
        result = (_QWORD*)((__int64 (*)(_QWORD*))SdkRoutine_64b940)(result);
        v8 = v6[5];
        v11 = v6[11];
      }
      if (v11 != 0) {
        *(_DWORD*)(v11 + 4) =
            (((unsigned __int64)*(unsigned int*)(v11 + 4) << 32) +
             0x100000000LL) >>
            32;
      }
      else {
        *(_QWORD*)(v8 + 8) = 0;
        *(_QWORD*)(v8 + 16) = 0;
        *(_QWORD*)(v8 + 24) = 0;
        *(_QWORD*)v8 = 0x100000003LL;
        v6[11] = v8;
        v8 += 8;
      }
      *(_QWORD*)v8 = v12;
      *(_QWORD*)(v8 + 8) = v3;
      *(_DWORD*)(v8 + 16) = v9;
      *(_BYTE*)(v8 + 20) = 3;
      v6[5] = v8 + 24;
    }
  }
  v19 = v6[5];
  if (v19 + 8 * (unsigned __int64)(a3 >> 3) > v6[6]) {
    result = (_QWORD*)((__int64 (*)(_QWORD*))SdkRoutine_64b940)(v6);
    v19 = v6[5];
  }
  v6[11] = 0;
  v6[5] = v19 + a3;
  *((_BYTE*)v6 + 18) = 1;
  *a2 = v19;
  return result;
}

bool nvidia_64aea0(_QWORD** a1)
{
  void* v2;
  __int64 v4;

  v2 = SdkData_1040968;
  if (SdkData_1040968 == nullptr) {
    v4 = SdkRoutine_65f8b0();
    if (v4 != 0) {
      v2 = (void*)(*(__int64 (**)(__int64, const char*))(
          (char*)((_UNKNOWN*)0xD8LL) + (_QWORD)SdkData_e89bd8))(
          v4, "cuGetExportTable");
      SdkData_1040968 = v2;
      if (v2 == nullptr) {
        return false;
      }
    }
    else {
      v2 = SdkData_1040968;
      if (SdkData_1040968 == nullptr) {
        return false;
      }
    }
  }
  if (((unsigned int (*)(_QWORD**, void*))v2)(a1, SdkData_e89c00) != 0) {
    return false;
  }
  return **a1 == 160;
}

__int64 nvidia_64afc0(__int64 a1, __int64 a2)
{
  char v2;

  *(_OWORD*)(a1 + 16) = 0u;
  *(_OWORD*)(a1 + 32) = 0u;
  *(_OWORD*)(a1 + 48) = 0u;
  *(_OWORD*)(a1 + 64) = 0u;
  *(_OWORD*)a1 = 0u;
  *(_OWORD*)(a1 + 80) = 0u;
  *(_OWORD*)(a1 + 96) = 0u;
  *(_OWORD*)(a1 + 112) = 0u;
  *(_OWORD*)(a1 + 128) = 0u;
  *(_QWORD*)(a1 + 112) = a2;
  *(_OWORD*)(a1 + 144) = 0u;
  *(_OWORD*)(a1 + 160) = 0u;
  v2 = 8 * (*(_BYTE*)(a2 + 7288) & 1);
  *(_DWORD*)(a1 + 24) = 0;
  *(_BYTE*)(a1 + 19) = v2;
  *(_WORD*)(a1 + 20) = 257;
  *(_BYTE*)(a1 + 168) = (*(_DWORD*)(a2 + 8) & 0x40000) != 0;
  return 1;
}

__int64 nvidia_64b010(__int64 result)
{
  __int64 v1;

  if (*(_QWORD*)(result + 152) != 0) {
    v1 = result;
    result =
        (*(__int64 (**)(_QWORD))(*(_QWORD*)(*(_QWORD*)(result + 112) + 7648LL) +
                                 320LL))(*(_QWORD*)(result + 152));
    *(_QWORD*)(v1 + 152) = 0;
  }
  return result;
}

__int64 nvidia_64b2a0(__int64 result, __int64 a2, __int64 a3)
{
  unsigned __int64 v3;
  unsigned __int64 v4;
  void (*v6)(void);
  __int64 v7;
  __int64 v8;
  __int64 v9;
  const char* v10;

  if (*(_QWORD*)(result + 64) == 0 || *(_BYTE*)(result + 17) == 0) {
    *(_QWORD*)(result + 80) = a2;
    goto LABEL_11;
  }
  v3 = *(_QWORD*)(result + 40);
  v4 = *(_QWORD*)(result + 48);
  *(_QWORD*)(result + 48) = v4 + 16;
  if (v3 > v4 && *(_BYTE*)(result + 21) != 0) {
    v6 = *(void (**)(void))(result + 120);
    if (v6 != nullptr) {
      v7 = a3;
      v8 = a2;
      v9 = result;
      v6();
      v3 = *(_QWORD*)(v9 + 40);
      result = v9;
      a2 = v8;
      a3 = v7;
      if ((__int64)(*(_QWORD*)(v9 + 48) - v3 + 16) > 31) {
        goto LABEL_9;
      }
      v10 = "CommandBuffer out-of-memory callback didn't add enough control "
            "memory.";
    }
    else {
      v10 = "CommandBuffer has run out of control memory with no out-of-memory "
            "callback.";
    }
    nn_diag_detail_AbortImpl_plt_859ba0(v10, 0, 0, 0);
    __udf(0);
  }
LABEL_9:
  *(_QWORD*)(result + 88) = 0;
  *(_QWORD*)(result + 40) = v3 + 16;
  *(_BYTE*)(result + 18) = 1;
  *(_QWORD*)(v3 + 8) = a2;
  *(_BYTE*)v3 = 4;
LABEL_11:
  *(_QWORD*)(result + 64) = a2;
  *(_QWORD*)(result + 88) = 0;
  *(_QWORD*)(result + 40) = a2;
  *(_QWORD*)(result + 48) = a2 + a3 - 16;
  return result;
}

__int64 nvidia_64b3a0(__int64 a1)
{
  return *(_QWORD*)(a1 + 32) - *(_QWORD*)(a1 + 56);
}

__int64 nvidia_64b3b0(_QWORD* a1) { return *a1 - a1[7]; }

__int64 nvidia_64b3c0(_QWORD* a1) { return a1[4] - *a1; }

__int64 nvidia_64b3d0(__int64 a1)
{
  return *(_QWORD*)(a1 + 48) - *(_QWORD*)(a1 + 64) + 16LL;
}

__int64 nvidia_64b3f0(__int64 a1)
{
  return *(_QWORD*)(a1 + 40) - *(_QWORD*)(a1 + 64);
}

__int64 nvidia_64b400(__int64 a1)
{
  return *(_QWORD*)(a1 + 48) - *(_QWORD*)(a1 + 40) + 16LL;
}

long double nvidia_64b420(__int64* a1)
{
  __int64 v1;
  _OWORD* v2;
  unsigned __int64 v3;
  void (*v4)(void);
  __int64* v5;
  const char* v7;

  v1 = *a1;
  v2 = (_OWORD*)a1[5];
  v3 = a1[6];
  a1[11] = 0;
  a1[9] = v1;
  a1[10] = (__int64)v2;
  *(_WORD*)((char*)a1 + 17) = 1;
  if ((unsigned __int64)(v2 + 1) > v3 && *((_BYTE*)a1 + 21) != 0) {
    v4 = (void (*)(void))a1[15];
    if (v4 != nullptr) {
      v5 = a1;
      v4();
      v2 = (_OWORD*)v5[5];
      a1 = v5;
      if (v5[6] - (__int64)v2 + 16 > 31) {
        goto LABEL_5;
      }
      v7 = "CommandBuffer out-of-memory callback didn't add enough control "
           "memory.";
    }
    else {
      v7 = "CommandBuffer has run out of control memory with no out-of-memory "
           "callback.";
    }
    nn_diag_detail_AbortImpl_plt_859ba0(v7, 0, 0, 0);
    __udf(0);
  }
LABEL_5:
  a1[10] = (__int64)v2;
  *v2 = SdkData_bb2e80;
  a1[5] = (__int64)(v2 + 1);
  return *(long double*)&SdkData_bb2e80;
}

__int64 nvidia_64ca20(__int64 result, int a2, unsigned __int64* a3)
{
  __int64 v4;
  __int64 i;
  unsigned __int64 v6;

  if (a2 >= 1) {
    v4 = result;
    for (i = (unsigned int)a2; i != 0; --i) {
      v6 = *a3++;
      result = SdkRoutine_64be80(v4, v6, 0);
    }
  }
  return result;
}

__int64 nvidia_64ca80(__int64 result, int a2, unsigned __int64* a3)
{
  __int64 v4;
  __int64 i;
  unsigned __int64 v6;

  if (a2 >= 1) {
    v4 = result;
    for (i = (unsigned int)a2; i != 0; --i) {
      v6 = *a3++;
      result = SdkRoutine_64be80(v4, v6, 1);
    }
  }
  return result;
}

__int64 nvidia_64cae0(__int64 a1, __int64 a2, char a3, int a4)
{
  __int64 result;
  int v9;
  bool v11;
  __int64 v12;

  result = SdkRoutine_64cb80(a1, &v12, 16);
  *(_BYTE*)v12 = 5;
  *(_BYTE*)(v12 + 1) = a3;
  v9 = *(_DWORD*)(a1 + 24);
  v11 = v9 == 1 || v9 == 4;
  *(_BYTE*)(v12 + 2) = v11;
  *(_BYTE*)(v12 + 3) = *(_DWORD*)(a1 + 24) == 2;
  *(_DWORD*)(v12 + 4) = a4;
  *(_QWORD*)(v12 + 8) = a2;
  return result;
}

__int64 nvidia_64cd60(__int64 a1, __int64 a2)
{
  __int64 result;
  int v5;
  bool v6;
  char v7;
  __int64 v8;

  result = SdkRoutine_64cb80_alt1(a1, &v8, 0x10u);
  v5 = *(_DWORD*)(a1 + 24);
  v6 = v5 == 1 || v5 == 4;
  v7 = 6;
  if (v6) {
    v7 = 97;
  }
  *(_BYTE*)v8 = v7;
  *(_QWORD*)(v8 + 8) = a2;
  return result;
}

__int64 nvidia_64cdc0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 result;
  __int64 v8;
  __int64 v9;

  result = SdkRoutine_64cb80_alt1(a1, &v9, 0x10u);
  *(_BYTE*)v9 = 17;
  *(_DWORD*)(v9 + 4) = a4;
  if (a2 != 0) {
    v8 = *(_QWORD*)(a2 + 24) + a3;
  }
  else {
    v8 = 0;
  }
  *(_QWORD*)(v9 + 8) = v8;
  return result;
}

__int64 nvidia_64ce30(__int64 a1, __int64 a2, char a3, __int16 a4, int a5,
                      __int64 a6)
{
  __int16 v6;
  __int64 v7;
  _BYTE* v12;
  __int64 result;
  __int64 v14;
  __int64 v15;

  v6 = a5;
  v7 = 4LL * a5;
  SdkRoutine_64cb80_alt1(a1, &v15, (v7 + 23) & 0xFFFFFFF8);
  v12 = (_BYTE*)v15;
  result = memcpy_plt(v15 + 16, a6, v7);
  *v12 = 18;
  v14 = v15;
  *(_BYTE*)(v15 + 1) = a3;
  *(_QWORD*)(v14 + 8) = a2;
  *(_WORD*)(v15 + 2) = a4;
  *(_WORD*)(v15 + 4) = v6;
  return result;
}

long double nvidia_64cef0(__int64 a1, __int64 a2, __int64 a3, __int128* a4,
                          __int64 a5, __int64 a6, long double* a7, int a8,
                          int a9)
{
  __int64 v14;
  __int128 v15;
  long double result;
  __int64 v17;

  SdkRoutine_64cb80_alt1(a1, &v17, 0x40u);
  *(_BYTE*)v17 = 110;
  v14 = v17;
  *(_QWORD*)(v17 + 8) = a2;
  v15 = *a4;
  *(_QWORD*)(v14 + 32) = a5;
  *(_OWORD*)(v14 + 16) = v15;
  result = *a7;
  *(_DWORD*)(v14 + 56) = a8;
  *(_DWORD*)(v14 + 60) = a9;
  *(long double*)(v14 + 40) = result;
  return result;
}

__int64* nvidia_64d260(__int64* result, __int64 a2, unsigned __int64 a3,
                       unsigned __int64 a4)
{
  __int64 v5;
  __int64* v8;
  unsigned __int64 v9;
  __int64 v10;

  v5 = *result;
  v8 = result;
  do {
    if (a4 >= 0x3FFFFF) {
      v10 = 0x3FFFFF;
    }
    else {
      v10 = a4;
    }
    if (v5 + 36 > (unsigned __int64)v8[1]) {
      result = (__int64*)SdkRoutine_64b750(v8);
      v5 = *v8;
    }
    *(_DWORD*)(v5 + 16) = a3;
    *(_DWORD*)(v5 + 20) = 536969478;
    *(_DWORD*)(v5 + 24) = v10;
    a4 -= v10;
    *(_QWORD*)(v5 + 28) = 0x186200180C0LL;
    *(_DWORD*)v5 = 537166080;
    *(_DWORD*)(v5 + 4) = HIDWORD(a2);
    v9 = HIDWORD(a3);
    a3 += v10;
    *(_DWORD*)(v5 + 8) = a2;
    *(_DWORD*)(v5 + 12) = v9;
    v5 += 36;
    a2 += v10;
    *v8 = v5;
  } while (a4 != 0);
  return result;
}

__int64 nvidia_64d7a0(__int64 result, __int64* a2, __int64* a3, __int64 a4,
                      unsigned int a5, int a6, int a7, int a8, int a9, int a10,
                      int a11)
{
  int v11;
  int v12;
  unsigned int v13;
  unsigned int v14;
  unsigned int v15;
  __int64* v17;
  __int64* v18;
  __int64 v19;
  unsigned int v20;
  __int64 v21;
  __int64* v22;
  __int64* v23;
  int v24;
  __int64 v25;
  __int64* v26;
  __int64* v27;
  unsigned int v28;
  unsigned int v29;
  int v30;

  v11 = a10;
  v12 = a9;
  v13 = a8;
  v14 = a7;
  v15 = a6;
  v17 = a3;
  v18 = a2;
  v19 = result;
  if ((a11 & 8) != 0) {
    if (a9 != 0) {
      v20 = a9 + a5 - 1;
      do {
        v30 = v11;
        v21 = v19;
        v22 = v18;
        v23 = v17;
        v24 = v11;
        v25 = v19;
        v26 = v18;
        v27 = v17;
        v28 = a4;
        result = nvidia_64d7a0(v21, v22, v23, a4, v20--, v15, v14++, v13, 1,
                               v30, a11 & 0xFFFFFFF7);
        --v12;
        a4 = v28;
        v17 = v27;
        v18 = v26;
        v19 = v25;
        v11 = v24;
      } while (v12 != 0);
    }
  }
  else if ((a11 & 4) != 0) {
    if (a8 != 0) {
      v29 = a8 + a4 - 1;
      do {
        result = nvidia_64d7a0(v19, v18, v17, v29--, a5, v15++, v14, 1, a9, a10,
                               a11 & 0xFFFFFFF3);
        --v13;
      } while (v13 != 0);
    }
  }
  else {
    return SdkRoutine_64d350(result, a2, a3, a4, a5, a6, a7, a8, a9);
  }
  return result;
}

__int64 nvidia_64da00(__int64 result, __int64 a2, __int64 a3, _QWORD* a4,
                      _DWORD* a5, int a6, unsigned int a7, int a8, int a9)
{
  __int64 v9;
  int v12;
  __int64 v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  unsigned int v24;
  int v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int128 v29;
  int v30;
  unsigned int v31;
  int v32;
  __int64 v33;
  int v34;
  __int64 v35;
  _QWORD* v36;
  _QWORD* v37;
  int v38;
  int v39;
  __int64 v40;
  __int64 v41;
  unsigned int v42;
  int v43;
  __int64 v44;
  unsigned int v45;
  unsigned int v46;
  int v47;
  unsigned int v48;
  unsigned int v49;
  int v50;
  unsigned int v51;
  int v52;
  unsigned int v53;
  __int64 v54;
  unsigned int v55;
  unsigned int v56;
  unsigned int v57;
  __int64 v58;
  __int64 v59;
  int v60;
  int v61;
  __int64 v62;
  unsigned int v63;
  unsigned int v64;
  unsigned int v65;
  __int64 v66;
  int v67;
  int v68;
  unsigned int v69;
  _DWORD* v70;
  __int64 v71[11];
  __int64 v72;
  __int128 v73;
  __int128 v74;
  __int128 v75;
  __int128 v76;
  __int128 v77;
  __int64 v78[12];
  _QWORD v79[4];

  v9 = *(_QWORD*)(result + 11464);
  v12 = a6;
  v16 = result;
  if (v9 != 0) {
    v17 = a9;
    if ((a6 & 4) == 0) {
    LABEL_3:
      v18 = *a5;
      v19 = a5[1];
      v20 = a5[4];
      v21 = a5[5];
      result = a3;
      v79[1] = 0;
      v68 = v18;
      if ((*(_QWORD*)(a3 + 40) & 0xFE000000LL) == 0x6000000) {
        v22 = 1;
      }
      else {
        v22 = v20;
      }
      v65 = v22;
      v23 = a5[2];
      v24 = a5[3];
      if ((*(_QWORD*)(a3 + 40) & 0xFE000000LL) == 0x6000000) {
        LOWORD(v23) = v19;
        v19 = 0;
      }
      v69 = a5[3];
      v67 = v19;
      if ((*(_QWORD*)(a3 + 40) & 0xFE000000LL) == 0x6000000) {
        v25 = v20;
      }
      else {
        v25 = v21;
      }
      v60 = v25;
      v26 = 0x300000000000000LL;
      if (a4 != nullptr) {
        if ((*a4 & 0x100000000000000LL) != 0) {
          v26 = *a4 & 0xFF00000000LL | 0x300000000000000LL;
        }
        v27 = *a4;
        if ((*a4 & 0x200000000000000LL) == 0) {
          LOWORD(v27) = 0;
        }
      }
      else {
        LOWORD(v27) = 0;
      }
      v78[0] = a2;
      v40 = v26 | 0x10000010000LL | (unsigned __int16)(v27 + v23);
      v41 = *(_QWORD*)(v9 + 24);
      v79[0] = v40;
      memset(&v78[1], 0, 80);
      v77 = 0u;
      v76 = 0u;
      v75 = 0u;
      v42 = 2 * v24;
      LODWORD(v78[9]) = 8;
      LODWORD(v78[1]) = a7;
      LODWORD(v78[3]) = 1;
      v72 = v41;
      LODWORD(v77) = 2;
      v73 = 0u;
      v74 = 0u;
      LODWORD(v74) = 1;
      LODWORD(v73) = 2 * v24;
      if ((v12 & 0x18) != 0) {
        if ((v12 & 8) != 0) {
          a2 += (v65 - 1) * a7;
          v78[0] = a2;
          LODWORD(v78[1]) = -a7;
        }
        v43 = v17;
        if ((v12 & 0x10) != 0) {
          v44 = (unsigned int)((v60 - 1) * a8);
          a8 = -a8;
          a2 += v44;
          v78[0] = a2;
        }
      }
      else {
        v43 = v17;
      }
      v45 = *(_DWORD*)(v9 + 56);
      v46 = v65;
      v47 = v45 / v42;
      if (v45 / v42 >= v65) {
        v47 = v65;
      }
      if (v42 <= v45) {
        v48 = v47;
      }
      else {
        v48 = 1;
      }
      if (v42 <= v45) {
        v49 = v24;
      }
      else {
        v49 = v45 >> 1;
      }
      if (v60 != 0) {
        v50 = 0;
        v63 = v48;
        v64 = a7;
        v58 = a8;
        v59 = a3;
        do {
          v62 = a2;
          v61 = v50;
          SdkRoutine_66a6d0(result, v71, v79);
          if (v46 != 0) {
            v51 = 0;
            v66 = v62;
            do {
              if (v46 - v51 >= v48) {
                v52 = v48;
              }
              else {
                v52 = v46 - v51;
              }
              if (v69 != 0) {
                v53 = v69;
                v54 = v66;
                v55 = 0;
                do {
                  v56 = v53 - v49;
                  if (v53 >= v49) {
                    v57 = v49;
                  }
                  else {
                    v57 = v53;
                  }
                  if (v43 == 40) {
                    SdkRoutine_64d350(v16 + 11240, v78, &v72, 0, 0, 0, 0, v57,
                                      v52);
                    SdkRoutine_64d350(v16 + 11240, &v72, v71, 0, 0, v68 + v55,
                                      v51 + v67, v57, v52);
                  }
                  else {
                    SdkRoutine_64d350(v16 + 11240, v71, &v72, v68 + v55,
                                      v51 + v67, 0, 0, v57, v52);
                    SdkRoutine_64d350(v16 + 11240, &v72, v78, 0, 0, 0, 0, v57,
                                      v52);
                  }
                  v54 += v57;
                  v55 += v49;
                  v53 = v56;
                  v78[0] = v54;
                } while (v55 < v69);
              }
              v48 = v63;
              v46 = v65;
              v51 += v63;
              v66 += v52 * v64;
              v78[0] = v66;
            } while (v51 < v65);
          }
          result = v59;
          a2 = v62 + v58;
          v78[0] = v62 + v58;
          ++LOWORD(v79[0]);
          v50 = v61 + 1;
        } while (v61 + 1 != v60);
      }
      return result;
    }
  }
  else {
    v28 = a2;
    result = SdkRoutine_64d950(result);
    if ((result & 1) == 0) {
      return result;
    }
    v9 = *(_QWORD*)(v16 + 11464);
    a2 = v28;
    v17 = a9;
    if ((v12 & 4) == 0) {
      goto LABEL_3;
    }
  }
  v29 = *(_OWORD*)a5;
  v30 = a5[3];
  v78[2] = *((_QWORD*)a5 + 2);
  *(_OWORD*)v78 = v29;
  HIDWORD(v78[1]) = 1;
  LODWORD(v78[0]) = v30 + v29 - 1;
  if (v30 >= 1) {
    v31 = a8;
    v32 = v30 + v29 - 2;
    v33 = a2;
    v34 = 0;
    v70 = a5;
    do {
      v35 = v12 & 0xFFFFFFFB;
      v36 = a4;
      v37 = a4;
      v38 = v12;
      v39 = v17;
      result = nvidia_64da00(v16, v33, a3, v36, v78, v35, a7, v31, v17);
      v17 = v39;
      v12 = v38;
      a4 = v37;
      v33 += 8;
      LODWORD(v78[0]) = v32;
      ++v34;
      --v32;
    } while (v34 < v70[3]);
  }
  return result;
}

__int64 nvidia_64de60(__int64 result, __int64 a2, __int64 a3, __int64* a4,
                      unsigned int* a5, int a6)
{
  char v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  unsigned int v13;
  char* v14;
  unsigned int v15;
  unsigned int v16;
  int v17;
  unsigned int v18;
  unsigned int v19;
  unsigned int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  _DWORD* v28;
  int v29;
  __int64 v30;
  unsigned int v31;
  unsigned int v32;
  int v33;
  int v34;
  __int64 v35;
  int v36;
  unsigned int v37;
  int v38;
  unsigned int v39;
  unsigned int v40;
  unsigned int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  unsigned int v55;
  __int64 v56;
  unsigned int v57;
  int v58;
  __int64 v59;
  int v60;
  __int64 v61;
  unsigned int v62;
  unsigned int v63;
  __int64 v64;
  __int64 v65;
  _DWORD** v66;
  __int64 v67;
  __int64 v68;
  int v69;
  int v70;
  int v71;
  unsigned int v72;
  __int64 v73;
  int v74;
  unsigned int v75;
  unsigned int v76;
  unsigned int v77;
  int v78;
  unsigned int v79;
  unsigned int v80;
  int v81;
  char* v82;
  _BYTE v84[12];
  unsigned int v85;
  unsigned int v86;
  unsigned int v87;
  unsigned int v88;
  int v89;
  int v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int128 v94;
  __int128 v95;
  __int128 v96;
  __int128 v97;
  __int128 v98;

  v6 = a6;
  v7 = result;
  v8 = *(_QWORD*)(a3 + 40) << 39;
  if (v8 >> 55 == 51 || (a6 & 2) == 0 || v8 >> 55 == 53) {
    v9 = a5[2];
    if (a4 != nullptr && (*((_BYTE*)a4 + 7) & 4) != 0) {
      LODWORD(v10) = *((_DWORD*)a4 + 2);
    }
    else {
      v10 = v8 >> 55;
    }
    v12 = *a5;
    v13 = a5[3];
    v14 = (char*)SdkData_e89ba0 + 48 * (int)v10;
    v15 = (unsigned __int8)v14[8];
    v82 = v14;
    v16 = (unsigned __int8)v14[9];
    v17 = *(unsigned __int8*)(a3 + 84);
    if ((*(_QWORD*)(a3 + 40) & 0xFE000000LL) == 0x6000000) {
      LOWORD(v9) = a5[1];
      v18 = 1;
    }
    else {
      v18 = a5[4];
    }
    if ((*(_QWORD*)(a3 + 40) & 0xFE000000LL) == 0x6000000) {
      v19 = a5[4];
    }
    else {
      v19 = a5[5];
    }
    if ((*(_QWORD*)(a3 + 40) & 0xFE000000LL) == 0x6000000) {
      v20 = 0;
    }
    else {
      v20 = a5[1];
    }
    if (v15 >= 2) {
      v12 = (v12 + v15 - 1) / v15;
      v20 = (v16 - 1 + v20) / v16;
      v18 = (v16 - 1 + v18) / v16;
      v13 = (v13 + v15 - 1) / v15;
    }
    v21 = *(_DWORD*)(result + 144);
    v22 = *(_DWORD*)(result + 148);
    v23 = v13 * v17;
    v92 = 0;
    if (v21 != 0) {
      v23 = v21;
    }
    if (v22 != 0) {
      v24 = v22;
    }
    else {
      v24 = v23 * v18;
    }
    v25 = 0x300000000000000LL;
    if (a4 != nullptr) {
      if ((*a4 & 0x100000000000000LL) != 0) {
        v25 = *a4 & 0xFF00000000LL | 0x300000000000000LL;
      }
      v26 = *a4;
      if ((*a4 & 0x200000000000000LL) == 0) {
        LOWORD(v26) = 0;
      }
    }
    else {
      LOWORD(v26) = 0;
    }
    v93 = a2;
    v91 = v25 | 0x10000010000LL | (unsigned __int16)(v26 + v9);
    v98 = 0u;
    v95 = 0u;
    v97 = 0u;
    v96 = 0u;
    v94 = 0u;
    LODWORD(v98) = v17;
    LODWORD(v94) = v23;
    LODWORD(v95) = 1;
    if ((a6 & 0x18) != 0) {
      if ((a6 & 8) != 0) {
        a2 += v23 * (v18 - 1);
        v93 = a2;
        LODWORD(v94) = -v23;
      }
      if ((a6 & 0x10) != 0) {
        v27 = v24 * (v19 - 1);
        v24 = -v24;
        v93 = a2 + v27;
      }
    }
    v28 = *(_DWORD**)result;
    if ((unsigned __int64)(*(_QWORD*)result + 4LL) > *(_QWORD*)(result + 8)) {
      v29 = v24;
      result = SdkRoutine_64b750_alt1(
          result, (__int64)v28,
          4LL * (unsigned int)(*(_DWORD*)(result + 104) + 1));
      v28 = *(_DWORD**)v7;
      v24 = v29;
    }
    v30 = *(unsigned int*)(v7 + 24);
    if ((unsigned int)v30 <= 4) {
      *v28++ = SdkData_c77c7c[v30];
    }
    *(_QWORD*)v7 = v28;
    if (v19 != 0) {
      v31 = v18;
      v79 = v16;
      v80 = v15;
      v32 = v15 - 1;
      v33 = v16 - 1;
      v34 = v6 & 4;
      v35 = v24;
      do {
        SdkRoutine_66a6d0(a3, v84, &v91);
        v36 = v89;
        if ((unsigned int)(v89 - 1) >= 2) {
          if (((v90 - 51) & 0xFFFFFFFD) != 0) {
            v36 = 0;
          }
          else {
            v36 = 3;
          }
        }
        if ((unsigned __int8)v82[8] >= 2u) {
          v85 = (v32 + v85) / v80;
          v86 = (v33 + v86) / v79;
          v87 = (v32 + v87) / v80;
          v88 = (v33 + v88) / v79;
        }
        result = nvidia_64d7a0_alt1(v7, &v93, v84, 0, 0, v12, v20, v13, v31,
                                    v36, v34);
        --v19;
        v93 += v35;
        LOWORD(v91) = v91 + 1;
      } while (v19 != 0);
      v28 = *(_DWORD**)v7;
    }
  }
  else {
    if (a4 != nullptr && (*((_BYTE*)a4 + 7) & 4) != 0) {
      LODWORD(v11) = *((_DWORD*)a4 + 2);
    }
    else {
      v11 = v8 >> 55;
    }
    v76 = v11;
    v37 = a5[3];
    v38 = a5[4];
    v77 = a5[1];
    v39 = *(unsigned __int8*)(a3 + 84);
    if ((*(_QWORD*)(a3 + 40) & 0xFE000000LL) == 0x6000000) {
      LOWORD(v40) = a5[1];
      v41 = a5[4];
      v38 = 1;
      v77 = 0;
    }
    else {
      v40 = a5[2];
      v41 = a5[5];
    }
    v42 = *(_DWORD*)(result + 144);
    v43 = *(_DWORD*)(result + 148);
    v44 = 1;
    DWORD2(v94) = v38;
    v74 = v38;
    v95 = 0u;
    v97 = 0u;
    v96 = 0u;
    if (v42 == 0) {
      v42 = v39 * v37;
    }
    LODWORD(v94) = v42;
    if (v43 != 0) {
      v45 = v43;
    }
    else {
      v45 = v42 * v38;
    }
    v46 = *(_DWORD*)(*(_QWORD*)(result + 112) + 76LL);
    v98 = 0u;
    LODWORD(v98) = v39;
    DWORD3(v94) = v41;
    LODWORD(v95) = 1;
    DWORD2(v98) = v76;
    v72 = *a5;
    if ((a6 & 0x1C) != 0) {
      v47 = v37 & (a6 << 29 >> 31);
      if ((a6 & 4) != 0) {
        v48 = -1;
      }
      else {
        v48 = 1;
      }
      v49 = v38 & (a6 << 28 >> 31);
      if ((a6 & 8) != 0) {
        v50 = -1;
      }
      else {
        v50 = 1;
      }
      v44 = v48;
      v51 = v45 * (v41 - 1);
      if ((a6 & 0x10) != 0) {
        v45 = -v45;
      }
      v52 = a2 + v51;
      if ((a6 & 0x10) != 0) {
        a2 = v52;
      }
    }
    else {
      v47 = 0;
      v49 = 0;
      v50 = 1;
    }
    v53 = (unsigned int)(v46 - 1);
    v54 = 0x300010000010000LL;
    v55 = ((unsigned int)v53 & (unsigned int)a2) / v39;
    v92 = 0;
    v93 = a2 & ~v53;
    v73 = v93;
    DWORD1(v94) = v55 + v37;
    if (a4 == nullptr) {
      goto LABEL_79;
    }
    v56 = *a4;
    if ((*a4 & 0x100000000000000LL) != 0) {
      v54 = *a4 & 0xFF00000000LL | 0x300010000010000LL;
    }
    if ((v56 & 0x200000000000000LL) == 0) {
    LABEL_79:
      LOWORD(v56) = 0;
    }
    v75 = v37;
    v91 = v54 | (unsigned __int16)(v56 + v40);
    v28 = *(_DWORD**)result;
    if ((unsigned __int64)(*(_QWORD*)result + 4LL) > *(_QWORD*)(result + 8)) {
      v57 = v41;
      v58 = v45;
      result = SdkRoutine_64b750_alt1(
          result, (__int64)v28,
          4LL * (unsigned int)(*(_DWORD*)(result + 104) + 1));
      v28 = *(_DWORD**)v7;
      v45 = v58;
      v41 = v57;
    }
    v59 = *(unsigned int*)(v7 + 24);
    if ((unsigned int)v59 <= 4) {
      *v28++ = SdkData_c77c7c[v59];
    }
    *(_QWORD*)v7 = v28;
    if (v41 != 0) {
      v60 = 16 * v49;
      v61 = v45;
      v62 = v41;
      SdkRoutine_66a6d0(a3, v84, &v91);
      v81 = v44 << 15;
      v78 = v44;
      result =
          nvidia_64f5d0(v7, &v93, v76, v84, v76, 16 * (v55 + v47) + 8 * v44,
                        (unsigned int)(v60 + 8 * v50), v72, v77, v75, v74,
                        v44 << 15, v50 << 15, 15, 1, 0, 1);
      v63 = v62 - 1;
      v64 = v61;
      LOWORD(v91) = v91 + 1;
      v65 = v73 + v61;
      v66 = (_DWORD**)v7;
      v93 = v65;
      if (v63 != 0) {
        v67 = v73 + 2 * v64;
        do {
          SdkRoutine_66a6d0(a3, v84, &v91);
          LOBYTE(v71) = 0;
          LOBYTE(v70) = 0;
          LOBYTE(v69) = 1;
          result = nvidia_64f5d0(v66, &v93, v76, v84, v76,
                                 16 * (v55 + v47) + 8 * v78,
                                 (unsigned int)(v60 + 8 * v50), v72, v77, v75,
                                 v74, v81, v50 << 15, 15, v69, v70, v71);
          v93 = v67;
          --v63;
          v67 += v64;
          LOWORD(v91) = v91 + 1;
        } while (v63 != 0);
      }
      v28 = *v66;
      v7 = (__int64)v66;
    }
  }
  if ((unsigned __int64)(v28 + 1) > *(_QWORD*)(v7 + 8)) {
    result = SdkRoutine_64b750_alt1(
        v7, (__int64)v28, 4LL * (unsigned int)(*(_DWORD*)(v7 + 104) + 1));
    v28 = *(_DWORD**)v7;
  }
  v68 = *(unsigned int*)(v7 + 24);
  if ((unsigned int)v68 <= 4) {
    *v28++ = SdkData_c77cf4[v68];
  }
  *(_QWORD*)v7 = v28;
  return result;
}

__int64 nvidia_64e500(__int64 a1, __int64 a2, __int64* a3, unsigned int* a4,
                      __int64 a5, char a6)
{
  unsigned int v6;
  __int64 v7;
  __int64 v9;
  __int64 v10;
  unsigned int v11;
  unsigned int v12;
  char* v13;
  __int64 result;
  unsigned int v15;
  bool v16;
  int v17;
  unsigned int v18;
  unsigned int v19;
  unsigned int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  _DWORD* v28;
  __int64 v29;
  __int64 v30;
  int v31;
  __int64 v32;
  int v33;
  __int64 v34;
  int v35;
  int v36;
  __int64 v37;
  __int64 v38;
  unsigned int v39;
  unsigned int v40;
  int v41;
  char* v42;
  __int64 v43;
  unsigned int v44;
  unsigned int v45;
  unsigned int v46;
  unsigned int v47;
  __int64 v48;
  __int128 v49;
  __int128 v50;
  __int128 v51;
  __int128 v52;
  __int128 v53;
  _QWORD v54[3];

  v6 = a4[2];
  v7 = a2;
  if (a3 != nullptr && (*((_BYTE*)a3 + 7) & 4) != 0) {
    LODWORD(v10) = *((_DWORD*)a3 + 2);
    v9 = *(_QWORD*)(a2 + 40);
  }
  else {
    v9 = *(_QWORD*)(a2 + 40);
    v10 = v9 << 39 >> 55;
  }
  v11 = *a4;
  v12 = a4[3];
  v13 = (char*)SdkData_e89ba0 + 48 * (int)v10;
  result = (unsigned __int8)v13[8];
  v42 = v13;
  v15 = (unsigned __int8)v13[9];
  v16 = (v9 & 0xFE000000) == 100663296;
  v17 = *(unsigned __int8*)(a2 + 84);
  if (v16) {
    v18 = 1;
  }
  else {
    v18 = a4[4];
  }
  if (v16) {
    v19 = a4[4];
  }
  else {
    v19 = a4[5];
  }
  if (v16) {
    LOWORD(v6) = a4[1];
  }
  if (v16) {
    v20 = 0;
  }
  else {
    v20 = a4[1];
  }
  if ((unsigned int)result >= 2) {
    v11 = (v11 + (unsigned int)result - 1) / (unsigned int)result;
    v20 = (v15 - 1 + v20) / v15;
    v18 = (v15 - 1 + v18) / v15;
    v12 = (v12 + (unsigned int)result - 1) / (unsigned int)result;
  }
  v21 = *(_DWORD*)(a1 + 144);
  v22 = *(_DWORD*)(a1 + 148);
  v23 = v12 * v17;
  v54[1] = 0;
  if (v21 != 0) {
    v23 = v21;
  }
  if (v22 != 0) {
    v24 = v22;
  }
  else {
    v24 = v23 * v18;
  }
  v25 = 0x300000000000000LL;
  if (a3 != nullptr) {
    if ((*a3 & 0x100000000000000LL) != 0) {
      v25 = *a3 & 0xFF00000000LL | 0x300000000000000LL;
    }
    v26 = *a3;
    if ((*a3 & 0x200000000000000LL) == 0) {
      LOWORD(v26) = 0;
    }
  }
  else {
    LOWORD(v26) = 0;
  }
  v48 = a5;
  v54[0] = v25 | 0x10000010000LL | (unsigned __int16)(v26 + v6);
  v53 = 0u;
  v49 = 0u;
  v50 = 0u;
  v52 = 0u;
  v51 = 0u;
  LODWORD(v49) = v23;
  LODWORD(v53) = v17;
  LODWORD(v50) = 1;
  if ((a6 & 0x18) != 0) {
    if ((a6 & 8) != 0) {
      a5 += v23 * (v18 - 1);
      v48 = a5;
      LODWORD(v49) = -v23;
    }
    if ((a6 & 0x10) != 0) {
      v27 = v24 * (v19 - 1);
      v24 = -v24;
      a5 += v27;
      v48 = a5;
    }
  }
  v28 = *(_DWORD**)a1;
  v40 = result;
  if ((unsigned __int64)(*(_QWORD*)a1 + 4LL) > *(_QWORD*)(a1 + 8)) {
    v29 = v7;
    v30 = a5;
    v31 = v24;
    SdkRoutine_64b750_alt1(a1, (__int64)v28,
                           4LL * (unsigned int)(*(_DWORD*)(a1 + 104) + 1));
    result = v40;
    v28 = *(_DWORD**)a1;
    v24 = v31;
    a5 = v30;
    v7 = v29;
  }
  v32 = *(unsigned int*)(a1 + 24);
  if ((unsigned int)v32 <= 4) {
    *v28++ = SdkData_c77c90[v32];
  }
  *(_QWORD*)a1 = v28;
  if (v19 != 0) {
    v39 = v15;
    v33 = v15 - 1;
    v34 = v24;
    v41 = v20;
    v35 = v18;
    v36 = result - 1;
    v37 = a5 + v24;
    do {
      SdkRoutine_66a6d0(v7, &v43, v54);
      if ((unsigned __int8)v42[8] >= 2u) {
        v44 = (v36 + v44) / v40;
        v45 = (v33 + v45) / v39;
        v46 = (v36 + v46) / v40;
        v47 = (v33 + v47) / v39;
      }
      result = SdkRoutine_64d350(a1, &v43, &v48, v11, v41, 0, 0, v12, v35);
      v48 = v37;
      --v19;
      v37 += v34;
      ++LOWORD(v54[0]);
    } while (v19 != 0);
    v28 = *(_DWORD**)a1;
  }
  if ((unsigned __int64)(v28 + 1) > *(_QWORD*)(a1 + 8)) {
    result = SdkRoutine_64b750_alt1(
        a1, (__int64)v28, 4LL * (unsigned int)(*(_DWORD*)(a1 + 104) + 1));
    v28 = *(_DWORD**)a1;
  }
  v38 = *(unsigned int*)(a1 + 24);
  if ((unsigned int)v38 <= 4) {
    *v28++ = SdkData_c77cf4[v38];
  }
  *(_QWORD*)a1 = v28;
  return result;
}

_QWORD* nvidia_64e860(_QWORD* result, __int64 a2, unsigned __int64 a3,
                      unsigned __int64 a4)
{
  unsigned int v4;
  _QWORD* v8;
  __int64 v10;
  _DWORD* v11;
  _DWORD* v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  v4 = *((_DWORD*)result + 6);
  v8 = result;
  if (v4 == 4 || v4 == 1) {
    result = nvidia_64ac60(result, &v16, 0x20u);
    *(_BYTE*)v16 = 92;
    v10 = v16;
    *(_QWORD*)(v16 + 8) = a2;
    *(_QWORD*)(v10 + 16) = a3;
    *(_QWORD*)(v10 + 24) = a4;
  }
  else {
    v11 = (_DWORD*)*result;
    if ((unsigned __int64)(*result + 4LL) > result[1]) {
      result = (_QWORD*)SdkRoutine_64b750(result);
      v11 = (_DWORD*)*v8;
      v4 = *((_DWORD*)v8 + 6);
    }
    if (v4 <= 4) {
      *v11++ = SdkData_c77ca4[v4];
    }
    *v8 = v11;
    do {
      if (a4 >= 0x3FFFFF) {
        v14 = 0x3FFFFF;
      }
      else {
        v14 = a4;
      }
      if ((unsigned __int64)(v11 + 9) > v8[1]) {
        result = (_QWORD*)SdkRoutine_64b750(v8);
        v12 = (_DWORD*)*v8;
      }
      else {
        v12 = v11;
      }
      v12[4] = a3;
      v12[5] = 536969478;
      v11 = v12 + 9;
      a4 -= v14;
      v12[6] = v14;
      *(_QWORD*)(v12 + 7) = 0x186200180C0LL;
      *v12 = 537166080;
      v12[1] = HIDWORD(a2);
      v13 = HIDWORD(a3);
      a3 += v14;
      v12[2] = a2;
      v12[3] = v13;
      a2 += v14;
      *v8 = v12 + 9;
    } while (a4 != 0);
    if ((unsigned __int64)(v12 + 10) > v8[1]) {
      result = (_QWORD*)SdkRoutine_64b750(v8);
      v11 = (_DWORD*)*v8;
    }
    v15 = *((unsigned int*)v8 + 6);
    if ((unsigned int)v15 <= 4) {
      *v11++ = SdkData_c77cf4[v15];
    }
    *v8 = v11;
  }
  return result;
}

__int64 nvidia_64ea10(__int64 a1, __int64 a2, __int64 a3, __int128* a4, int a5,
                      __int64 a6, unsigned int a7, unsigned int a8)
{
  __int64 v8;
  __int128 v9;
  _QWORD v11[4];
  __int64 v12;
  __int128 v13;
  __int128 v14;
  __int128 v15;
  __int128 v16;
  __int128 v17;

  v8 = *((_QWORD*)a4 + 2);
  v11[0] = a2;
  v11[1] = a3;
  v13 = 0u;
  v14 = 0u;
  v16 = 0u;
  v17 = 0u;
  v15 = 0u;
  v9 = *a4;
  v12 = v8;
  LODWORD(v13) = a5;
  *((_QWORD*)&v13 + 1) = a6;
  *(_QWORD*)&v14 = __PAIR64__(a8, a7);
  DWORD1(v17) = 0;
  DWORD3(v16) = -2147483647;
  *(_OWORD*)&v11[2] = v9;
  *(_QWORD*)((char*)&v16 + 4) = 0x1000000010LL;
  return nvidia_64ea80_alt1(a1, v11);
}

_QWORD* nvidia_64ea80(_QWORD* result, __int64 a2)
{
  __int64 v3;
  unsigned int v4;
  unsigned int v5;
  unsigned int v6;
  int v7;
  int v8;
  int v9;
  __int64 v10;
  char* v11;
  int v12;
  int v13;
  __int64 v14;
  int v15;
  int v16;
  __int64 v17;

  if ((*(_QWORD*)(*(_QWORD*)a2 + 40LL) & 0x1FF0000LL) == 0x310000) {
    return result;
  }
  result = nvidia_64ac60(result, &v17, 0x88u);
  *(_BYTE*)v17 = 91;
  v3 = v17;
  *(_DWORD*)(v17 + 68) = *(_DWORD*)(a2 + 40);
  *(_QWORD*)(v3 + 8) = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(v3 + 16) = *(_DWORD*)(a2 + 16);
  *(_DWORD*)(v3 + 20) = *(_DWORD*)(a2 + 20);
  *(_DWORD*)(v3 + 48) = *(_DWORD*)(a2 + 24);
  *(_DWORD*)(v3 + 24) = *(_DWORD*)(a2 + 28);
  *(_DWORD*)(v3 + 28) = *(_DWORD*)(a2 + 32);
  v4 = *(_DWORD*)(a2 + 56);
  if (v4 == 0) {
    v5 = *(_DWORD*)(a2 + 92);
    if ((*(_BYTE*)(a2 + 100) & 1) != 0) {
      v5 *= 8;
    }
    v4 = (*(_DWORD*)(a2 + 28) + v5 - 1) / v5;
  }
  *(_DWORD*)(v3 + 40) = v4;
  if (*(int*)(a2 + 36) < 2) {
    v7 = 1;
    *(_DWORD*)(v3 + 44) = 0;
  }
  else {
    v6 = *(_DWORD*)(a2 + 60);
    if (v6 == 0) {
      v6 = v4 * ((unsigned int)(*(_DWORD*)(a2 + 32) + *(_DWORD*)(a2 + 96) - 1) /
                 *(_DWORD*)(a2 + 96));
    }
    *(_DWORD*)(v3 + 44) = v6;
    v7 = *(_DWORD*)(a2 + 36);
  }
  *(_DWORD*)(v3 + 52) = v7;
  *(_QWORD*)(v3 + 32) = *(_QWORD*)(a2 + 48);
  *(_DWORD*)(v3 + 56) = *(unsigned __int8*)(*(_QWORD*)a2 + 84LL);
  *(_DWORD*)(v3 + 60) = (*(_DWORD*)(*(_QWORD*)a2 + 84LL) >> 15) & 7;
  *(_DWORD*)(v3 + 64) = (*(_DWORD*)(*(_QWORD*)a2 + 84LL) >> 18) & 7;
  *(_QWORD*)(v3 + 72) = *(_QWORD*)(a2 + 64);
  *(_QWORD*)(v3 + 88) = *(_QWORD*)(a2 + 80);
  *(_QWORD*)(v3 + 80) = *(_QWORD*)(a2 + 72);
  v8 = *(_DWORD*)(a2 + 44);
  *(_DWORD*)(v3 + 96) = v8;
  if ((*(_DWORD*)(a2 + 100) & 1) != 0) {
    v8 = 0;
  }
  *(_DWORD*)(v3 + 96) = v8;
  *(_DWORD*)(v3 + 100) = *(_DWORD*)(a2 + 88);
  *(_DWORD*)(v3 + 108) = *(_DWORD*)(a2 + 92);
  *(_DWORD*)(v3 + 112) = *(_DWORD*)(a2 + 96);
  v9 = *(_DWORD*)(a2 + 100);
  *(_DWORD*)(v3 + 104) = v9;
  *(_DWORD*)(v3 + 116) = *(_QWORD*)(*(_QWORD*)a2 + 32LL);
  *(_DWORD*)(v3 + 120) = *(unsigned __int16*)(*(_QWORD*)a2 + 36LL);
  v10 = *(_QWORD*)(*(_QWORD*)a2 + 40LL);
  v11 = (char*)SdkData_e89ba0 + 48 * ((int)((_DWORD)v10 << 7) >> 23);
  if (v11[14] != 0 || v11[15] != 0) {
    v12 = *(_DWORD*)(a2 + 108);
    v13 = *(unsigned __int16*)(a2 + 104);
    v9 |= 0x20000000u;
    *(_DWORD*)(v3 + 104) = v9;
    *(_DWORD*)(v3 + 68) = v13 | (v12 << 16);
    v10 = *(_QWORD*)(*(_QWORD*)a2 + 40LL);
  }
  v14 = v10 << 39 >> 55;
  if (v14 == 51) {
    v15 = 8;
    goto LABEL_20;
  }
  if (v14 == 54) {
    v15 = 0x40000000;
  LABEL_20:
    *(_DWORD*)(v3 + 104) = v9 | v15;
  }
  if ((*(_BYTE*)(a2 + 100) & 4) != 0) {
    *(_WORD*)(v3 + 124) = (*(_DWORD*)(*(_QWORD*)a2 + 84LL) >> 15) & 7;
    *(_WORD*)(v3 + 126) = (*(_DWORD*)(*(_QWORD*)a2 + 84LL) >> 15) & 7;
    *(_WORD*)(v3 + 128) = (*(_DWORD*)(*(_QWORD*)a2 + 84LL) >> 18) & 7;
    v16 = (*(_DWORD*)(*(_QWORD*)a2 + 84LL) >> 18) & 7;
  }
  else {
    *(_WORD*)(v3 + 124) = ((*(_DWORD*)(*(_QWORD*)a2 + 84LL) >> 15) & 7) *
                          *(unsigned __int8*)(a2 + 112);
    *(_WORD*)(v3 + 126) = ((*(_DWORD*)(*(_QWORD*)a2 + 84LL) >> 15) & 7) *
                          *(unsigned __int8*)(a2 + 113);
    *(_WORD*)(v3 + 128) = ((*(_DWORD*)(*(_QWORD*)a2 + 84LL) >> 18) & 7) *
                          *(unsigned __int8*)(a2 + 114);
    v16 = ((*(_DWORD*)(*(_QWORD*)a2 + 84LL) >> 18) & 7) *
          *(unsigned __int8*)(a2 + 115);
  }
  *(_WORD*)(v3 + 130) = v16;
  return result;
}

#pragma GCC visibility pop
