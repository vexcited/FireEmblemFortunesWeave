#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 (*SdkData_ea8dd0)();
extern __int64 (*nerd_gyro_pointing_6ff850_ptr_alt1)(
    void*, const char*, __int64, const char*,
    _QWORD*) __asm__("nerd_gyro_pointing_6ff850_ptr");
extern void (*nerd_gyro_pointing_6ff850_ptr)();
void nn_diag_detail_AbortImpl_plt_856170();
__int64 (*nerd_gyro_pointing_6ff6c0(void* this_))();
__int64 nerd_gyro_pointing_6ff6d0(void* this_, bool* a2, char* a3, __int64 a4,
                                  char* a5, char* a6, __int64 a7, __int64 a8,
                                  char a9);
void(__attribute__((noreturn)) * nerd_gyro_pointing_6ff7c0(void* this_))();
void __attribute__((noreturn))
nerd_gyro_pointing_6ff7d0(void* this_, char* a2, __int64 a3, char* a4, char* a5,
                          __int64 a6, __int64 a7, __int64 a8, char a9);
__int64 (*nerd_gyro_pointing_6ff6c0(void* this_))() { return SdkData_ea8dd0; }

__int64 nerd_gyro_pointing_6ff6d0(void* this_, bool* a2, char* a3, __int64 a4,
                                  char* a5, char* a6, __int64 a7, __int64 a8,
                                  char a9)
{
  __int64 (*v9)();
  _QWORD v11[4];
  _QWORD v12[8];

  v11[1] = a6;
  v11[2] = a7;
  v11[3] = a8;
  if (this_ != nullptr) {
    if ((*(_BYTE*)this_ & 1) != 0) {
      return 0;
    }
    v9 = SdkData_ea8dd0;
    if (SdkData_ea8dd0 == nullptr) {
      return 0;
    }
    goto LABEL_6;
  }
  v9 = SdkData_ea8dd0;
  if (SdkData_ea8dd0 != nullptr) {
  LABEL_6:
    v12[4] = &a9;
    v12[5] = v12;
    v12[6] = v11;
    v12[7] = 0xFFFFFF80FFFFFFE8LL;
    v12[2] = v11;
    v12[3] = 0xFFFFFF80FFFFFFE8LL;
    v12[0] = &a9;
    v12[1] = v12;
    return ((__int64 (*)(bool*, _QWORD, __int64, const char*, _QWORD*))v9)(
               a2, (unsigned int)a3, a4, a5, v12) &
           1;
  }
  return 0;
}

void(__attribute__((noreturn)) * nerd_gyro_pointing_6ff7c0(void* this_))()
{
  return nerd_gyro_pointing_6ff850_ptr;
}

void __attribute__((noreturn))

nerd_gyro_pointing_6ff7d0(void* this_, char* a2, __int64 a3, char* a4, char* a5,
                          __int64 a6, __int64 a7, __int64 a8, char a9)
{
  _QWORD v9[4];
  _QWORD v10[8];

  v9[0] = a5;
  v9[1] = a6;
  v9[2] = a7;
  v9[3] = a8;
  if (nerd_gyro_pointing_6ff850_ptr_alt1 != nullptr) {
    v10[4] = &a9;
    v10[5] = v10;
    v10[6] = v9;
    v10[7] = 0xFFFFFF80FFFFFFE0LL;
    v10[2] = v9;
    v10[3] = 0xFFFFFF80FFFFFFE0LL;
    v10[0] = &a9;
    v10[1] = v10;
    nerd_gyro_pointing_6ff850_ptr_alt1(this_, a2, a3, a4, v10);
  }
  nn_diag_detail_AbortImpl_plt_856170();
}

#pragma GCC visibility pop
