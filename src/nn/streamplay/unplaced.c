#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void
    nn_streamplay_detail_GetUserService_plt(PSEUDO_X8);
__int64 nn_hid_VibrationMixer_VibrationMixer_plt(long double);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 nn_streamplay_767c00_alt1(long double) __asm__("nn_streamplay_767c00");
extern _UNKNOWN SdkData_10556ec;
extern __int64 SdkData_10556d8;
extern __int64 SdkData_10556e0;
extern __int64 SdkData_e89278;
extern char SdkData_cac960[26];
extern char SdkData_caca60[14];
extern char SdkData_cacb60[20];
long double nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_streamplay_767ae0(__int64 result, float a2);
__int64 nn_streamplay_767c00(char a1);

__int64 nn_streamplay_767ae0(__int64 result, float a2)
{
  __int64 v2;
  int v3;
  int v4;
  bool v5;
  __int64 v6;
  int v7;
  int v8;
  __int64 v10;
  int v11;
  int v12;
  long double v14;
  __int64 v15;
  int v16;

  v2 = 0;
  do {
    v3 = *(unsigned __int8*)(result + v2);
    v4 = (unsigned __int8)SdkData_cac960[v2];
    v5 = *(_BYTE*)(result + v2) != 0 && v3 == v4;
    if (!v5) {
      break;
    }
    v5 = (_DWORD)v2++ == 255;
  } while (!v5);
  if (v3 == v4) {
    *((float*)&SdkData_10556d8 + 1) = a2;
    goto LABEL_31;
  }
  v6 = 0;
  do {
    v7 = *(unsigned __int8*)(result + v6);
    v8 = (unsigned __int8)SdkData_caca60[v6];
    if (*(_BYTE*)(result + v6) == 0 || v7 != v8) {
      break;
    }
    v5 = (_DWORD)v6++ == 255;
  } while (!v5);
  if (v7 == v8) {
    *(float*)&SdkData_10556e0 = a2;
    goto LABEL_31;
  }
  v10 = 0;
  do {
    v11 = *(unsigned __int8*)(result + v10);
    v12 = (unsigned __int8)SdkData_cacb60[v10];
    if (*(_BYTE*)(result + v10) == 0 || v11 != v12) {
      break;
    }
    v5 = (_DWORD)v10++ == 255;
  } while (!v5);
  if (v11 == v12) {
    *((float*)&SdkData_10556e0 + 1) = a2;
  LABEL_31:
    nn_streamplay_detail_GetUserService_plt((void*)&v15);
    v16 = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v15 + 400LL))(
        v15, &SdkData_10556d8);
    if (v16 != 0) {
      v14 = nn_diag_detail_AbortImpl_plt_858db0(&v16);
      return nn_streamplay_767c00_alt1(v14);
    }
    else {
      result = v15;
      if (v15 != 0) {
        return (*(__int64 (**)(__int64))(*(_QWORD*)v15 + 8LL))(v15);
      }
    }
  }
  return result;
}

__int64 nn_streamplay_767c00(char a1)
{
  __int64 result;
  long double v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;

  LOBYTE(SdkData_10556d8) = a1;
  nn_streamplay_detail_GetUserService_plt((void*)&v6);
  v7 = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v6 + 400LL))(
      v6, &SdkData_10556d8);
  if (v7 != 0) {
    v2 = nn_diag_detail_AbortImpl_plt_858db0(&v7);
    v4 = v3;
    nn_hid_VibrationMixer_VibrationMixer_plt(v2);
    v5 = SdkData_e89278;
    *(_BYTE*)(v4 + 72) = 0;
    *(_QWORD*)v4 = v5 + 16;
    nn_os_SdkMutexType_Lock_plt(&SdkData_10556ec);
    *(_QWORD*)(v4 + 80) = 0;
    return nn_os_SdkMutexType_Unlock_plt(&SdkData_10556ec);
  }
  else {
    result = v6;
    if (v6 != 0) {
      return (*(__int64 (**)(__int64))(*(_QWORD*)v6 + 8LL))(v6);
    }
  }
  return result;
}

#pragma GCC visibility pop
