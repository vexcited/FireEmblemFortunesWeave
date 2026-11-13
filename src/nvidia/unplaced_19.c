#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_QWORD* unplaced_4_62b500(_QWORD**);
__int64 NvOsFree_plt(_QWORD);
__int64 NvOsGetConfigString_plt(__int64, __int64, __int64);
__int64 NvRmMemMgrInit_plt();
__int64 SdkRoutine_65cf40(_QWORD, _QWORD);
__int64 SdkRoutine_65cf50(__int64 result);
__int64 SdkRoutine_65cf70(__int64 result, __int64, __int64);
__int64 SdkRoutine_65d040(_QWORD, _QWORD);
__int64 SdkRoutine_65d380(__int64);
__int64 nn_65d0a0(_OWORD*, __int64);
__int64 nn_os_detail_GetUserWaitNativeHandle();
__int64 nvidia_625d00();
__int64 nvidia_63fd60();
__int64 nvidia_644660(unsigned int);
double pow_plt(double, double);
extern _BYTE* SdkData_e89b40;
extern _UNKNOWN* SdkData_e89bd8;
extern __int64* SdkData_e89b90;
extern char* SdkData_e89b80[4];
extern char* SdkData_e89b88[3];
extern int* SdkData_e89b20[4];
extern int* SdkData_e89b28[3];
extern int* SdkData_e89b30[2];
extern int* SdkData_e89b38;
extern void (*SdkData_e86b68[37])();
int fprintf_plt(__int64, const char*, ...);
void nvidia_62cfb0();
bool nvidia_5fb0d0(void* this_);
__int64 nvidia_61cd70(__int64 a1, unsigned __int16 a2, double a3, double a4);
__int64 nvidia_644780();
__int64 nvidia_64a8d0(__int64 a1, __int64 a2);
__int64 nvidia_64a9e0(__int64 a1, __int64 a2);
__int64 nvidia_64d950(__int64 a1);

bool nvidia_5fb0d0(void* this_)
{
  int v1;
  _BOOL8 result;
  __int16 v4;

  v4 = 0;
  v1 = NvOsGetConfigString_plt((__int64)"nvn_no_vsync_capability", (__int64)&v4,
                               2);
  result = false;
  if (v1 == 0) {
    return (unsigned __int8)v4 == 49 || (unsigned __int8)v4 == 1;
  }
  return result;
}

__int64 nvidia_61cd70(__int64 a1, unsigned __int16 a2, double a3, double a4)
{
  double v5;
  double v6;
  double v7;
  double v8;
  double v9;
  double v10;
  double v11;
  double v12;
  double v13;
  double v14;

  {

    __typeof__(a4) z_ = (__typeof__(a4)){0};

    LOWORD(z_) = *(_WORD*)(a1 + 88);

    a4 = z_;
  }
  {
    v5 = (double)a2 / (double)*(unsigned __int64*)&a4;
    __asm__ volatile("" ::"w"(v5));
  }
  if (v5 > 0x1.0000000000000p+0) {
    v5 = 0x1.0000000000000p+0;
  }
  {
    v6 = *(double*)(a1 + 80) * v5;
    __asm__ volatile("" ::"w"(v6));
  }
  if (v6 >= 0x1.26e978d4fdf3bp-6) {
    v7 = pow_plt(v6, 0x1.ccccccccccccdp-2) * 0x1.195810624dd2fp+0 +
         -0x1.95810624dd2f2p-4;
  }
  else {
    v7 = v6 * 0x1.2000000000000p+2;
  }
  v8 = pow_plt(v7, 0x1.3333333333333p+1);
  {
    v9 = *(double*)(a1 + 48);
    __asm__ volatile("" ::"w"(v9));
  }
  {
    v10 = v8 * *(double*)(a1 + 56) / *(double*)(a1 + 64);
    __asm__ volatile("" ::"w"(v10));
  }
  if (v10 < 0x0.0p+0) {
    v10 = 0x0.0p+0;
  }
  if (v10 <= 0x1.0000000000000p+0) {
    v11 = v10;
  }
  else {
    v11 = 0x1.0000000000000p+0;
  }
  {
    __typeof__(v10) z_ = (__typeof__(v10)){0};
    LOWORD(z_) = *(_WORD*)(a1 + 88);
    v10 = z_;
  }
  {
    v12 = *(double*)(a1 + 24);
    __asm__ volatile("" ::"w"(v12));
  }
  {
    v13 = (double)(unsigned int)(int)(v11 * (double)*(unsigned __int64*)&v10 +
                                      0x1.0000000000000p-1) /
          *(double*)a1 / v12;
    __asm__ volatile("" ::"w"(v13));
  }
  if (v13 >= v9) {
    v14 = (v13 - v9) / (0x1.0000000000000p+0 - v9);
    v13 = PSEUDO_UNFUSED((0x1.0000000000000p+0 - v9) *
                         (v14 - (PSEUDO_UNFUSED(v14 * (v14 + v14)) -
                                 PSEUDO_UNFUSED(v14 * v14) * v14))) +
          (0x1.0000000000000p+0 -
           (PSEUDO_UNFUSED(v14 * (PSEUDO_UNFUSED(v14 * 0x1.8000000000000p+1))) -
            PSEUDO_UNFUSED(v14 * (v14 + v14)) * v14)) *
              v9 +
          (PSEUDO_UNFUSED(v14 * (PSEUDO_UNFUSED(v14 * 0x1.8000000000000p+1))) +
           PSEUDO_UNFUSED(v14 * (v14 * -0x1.0000000000000p+1)) * v14) *
              *(double*)(a1 + 40);
  }
  return (unsigned int)(int)(v12 *
                                 (v13 + PSEUDO_UNFUSED(
                                            (0x1.0000000000000p+0 - v13) *
                                            ((0x1.0000000000000p+0 - v13) *
                                             (*(double*)(a1 + 32) *
                                              (0x1.0000000000000p+0 - v13)))) *
                                            (0x1.0000000000000p+0 - v13)) *
                                 *(double*)a1 +
                             0x1.0000000000000p-1);
}

__int64 nvidia_644780()
{
  char* v0;
  int v1;
  int v2;
  int v3;
  char v4;
  __int64 result;
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;
  _QWORD* v9;

  {
    v0 = SdkData_e89b88[0];
    __asm__ volatile("" ::"r"(v0));
  }
  *(_DWORD*)&SdkData_e89b88[0][(unsigned __int64)((__int64*)0x4LL)] = 1;
  *v0 = 0;
  *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v0 + 4) = 0;
  *(_DWORD*)((char*)((__int64*)0xCLL) + (_QWORD)v0) = 0;
  *((_BYTE*)((__int64*)0xCLL) + (_QWORD)v0 + 4) = 0;
  *(int*)((char*)((int*)0x14LL) + (_QWORD)v0) = 0;
  *((_BYTE*)(*(void*(*)[1])0x18LL) + (_QWORD)v0) = 0;
  (*(_BYTE(*)[4])0x20LL)[(_QWORD)v0] = 0;
  *(_DWORD*)((char*)(*(void*(*)[1])0x18LL) + (_QWORD)v0 + 4) = -1;
  *(int*)((char*)((int*)0x24LL) + (_QWORD)v0) = 2;
  nvidia_63fd60();
  if (*SdkData_e89b30[0] != 0) {
    {
      v1 = *SdkData_e89b30[0] - 1;
      __asm__ volatile("" ::"r"(v1));
    }
    if (v1 <= 2) {
      *(_DWORD*)((char*)((__int64*)0x4LL) + (_QWORD)v0) = v1;
      *v0 = 1;
    }
  }
  v2 = (unsigned __int8)*v0;
  if (*SdkData_e89b28[0] != 0) {
    {
      v3 = *SdkData_e89b28[0] - 1;
      __asm__ volatile("" ::"r"(v3));
    }
    if (v3 <= 2 && (v2 & 1) == 0) {
      *(_DWORD*)((char*)((__int64*)0xCLL) + (_QWORD)v0) = v3;
      v2 = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v0 + 4) = 1;
    }
  }
  if (*SdkData_e89b38 != 0 && (v2 & 1) == 0) {
    *(int*)((char*)((int*)0x14LL) + (_QWORD)v0) = *SdkData_e89b38;
    *((_BYTE*)((__int64*)0xCLL) + (_QWORD)v0 + 4) = 1;
  }
  if (((v2 | *((unsigned __int8*)((__int64*)0x4LL) + (_QWORD)v0 + 4)) & 1) !=
      0) {
    v4 = 1;
  }
  else {
    v4 = *((_BYTE*)((__int64*)0xCLL) + (_QWORD)v0 + 4);
    __asm__ volatile("" ::"r"(v4));
  }
  *((_BYTE*)(*(void*(*)[1])0x18LL) + (_QWORD)v0) = v4 & 1;
  if (*SdkData_e89b20[0] >= 1) {
    *(_DWORD*)((char*)(*(void*(*)[1])0x18LL) + (_QWORD)v0 + 4) =
        *SdkData_e89b20[0];
  }
  (*(_BYTE(*)[4])0x20LL)[(_QWORD)v0] = *SdkData_e89b40;
  result = nn_os_detail_GetUserWaitNativeHandle();
  if ((_DWORD)result == 0) {
    result = NvRmMemMgrInit_plt();
    if ((_DWORD)result == 0) {
      v6 = nvidia_644660(0);
      if (v6 != 0) {
        v7 = v6;
        fprintf_plt(*(_QWORD*)SdkData_e86b68[0],
                    "libnvrm_gpu.so: SHA-1 self test failed!\n");
        return v7;
      }
      else {
        result = nvidia_625d00();
        if ((_DWORD)result != 0) {
          *SdkData_e89b80[0] = 0;
        }
        else {
          v9 = nullptr;
          *SdkData_e89b80[0] = 1;
          *(int*)((char*)((int*)0x24LL) + (_QWORD)v0) = 2;
          result = (__int64)unplaced_4_62b500(&v9);
          if ((_DWORD)result != 0) {
            if (v9 != nullptr) {
              v8 = result;
              (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))*v9)(
                  (void*)v9, v9);
              NvOsFree_plt(v9);
              return v8;
            }
          }
          else {
            *SdkData_e89b90 = (__int64)v9;
            nvidia_62cfb0();
            return 0;
          }
        }
      }
    }
  }
  return result;
}

__int64 nvidia_64a8d0(__int64 a1, __int64 a2)
{
  __int64 result;

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if (a2 != 0) {
    --*(_DWORD*)(*(_QWORD*)(a2 + 8) + 7632LL);
    SdkRoutine_65d380(a2),
        result = COERCE_AS(__typeof__(result),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    return (*(__int64 (**)(__int64))((char*)(*(void*(*)[1])0x18LL) +
                                     (_QWORD)SdkData_e89bd8))(a2);
  }
  return result;
}

__int64 nvidia_64a9e0(__int64 a1, __int64 a2)
{
  __int64 result;

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if (a2 != 0) {
    --*(_DWORD*)(*(_QWORD*)(a2 + 8) + 7632LL);
    SdkRoutine_65d380(a2),
        result = COERCE_AS(__typeof__(result),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    return (*(__int64 (**)(__int64))((char*)(*(void*(*)[1])0x18LL) +
                                     (_QWORD)SdkData_e89bd8))(a2);
  }
  return result;
}

__int64 nvidia_64d950(__int64 a1)
{
  void* v2;
  __int64 result;
  _OWORD* v4;
  int v5;
  _BYTE v6[56];

  v2 = SdkData_e89bd8;
  result = (*(__int64 (**)(__int64))SdkData_e89bd8)(256);
  if (result != 0) {
    v4 = (_OWORD*)result;
    SdkRoutine_65cf50((__int64)v6);
    SdkRoutine_65cf40(v6, *(_QWORD*)(a1 + 16));
    SdkRoutine_65cf70((__int64)v6, 0, 0x20000);
    SdkRoutine_65d040(v6, 33);
    v5 = (unsigned __int8)nn_65d0a0(v4, (__int64)v6);
    result = v5 != 0;
    if (v5 != 0) {
      *(_QWORD*)(a1 + 11464) = v4;
    }
    else {
      (*(void (**)(_OWORD*))((char*)(*(void*(*)[1])0x18LL) + (_QWORD)v2))(v4);
      return 0;
    }
  }
  return result;
}

#pragma GCC visibility pop
