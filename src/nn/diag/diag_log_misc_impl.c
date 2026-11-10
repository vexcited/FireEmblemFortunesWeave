#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* nn_diag_bbbf0(_QWORD* result);
__int64 SdkRoutine_bd990(_QWORD);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 memmove_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_diag_detail_Backtrace_GetReturnAddress_plt(_QWORD);
__int64 nn_diag_detail_Backtrace_Initialize_plt_859f80(_QWORD, _QWORD, _QWORD,
                                                       _QWORD);
__int64 nn_diag_detail_Backtrace_SetStackInfo_plt(void);
__int64 nn_diag_detail_Backtrace_Step_plt(_QWORD);
__int64 nn_diag_detail_CallAllLogObserver_plt(_QWORD, _QWORD);
__int64 nn_diag_detail_GetValidSizeAsUtf8String_plt(void);
__int64 nn_os_GetCurrentFiber_plt(_QWORD);
__int64 nn_os_GetCurrentStackInfo_plt(_QWORD, _QWORD);
__int64 nn_os_GetCurrentThread_plt(_QWORD);
__int64 nn_os_GetThreadStackInfo_plt(_QWORD, _QWORD, _QWORD);
void SdkRoutine_1a5380(__int64, _DWORD*);
__int64* diag_log_misc_b94a0(__int64* result, __int64 a2, int a3);
__int64 diag_log_misc_b9550(__int64* a1, char a2);
__int64 diag_log_misc_bbb00(__int64 a1);
__int64 diag_log_misc_bd050(__int64 a1);
__int64 nn_diag_detail_Backtrace_Initialize(void* this_);
__int64 diag_log_misc_bd400(_QWORD* a1);
__int64 diag_log_misc_bd4e0(unsigned __int64* a1, unsigned __int64 a2);
__int64 diag_log_misc_bd5e0(__int64 a1);
bool diag_log_misc_bd660(unsigned __int64 a1, unsigned __int64* a2);
__int64 diag_log_misc_bd880(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4);

__int64* diag_log_misc_b94a0(__int64* result, __int64 a2, int a3)
{
  __int64* v3;
  int v4;
  int v6;
  int v7;
  bool v8;
  unsigned __int64 v9;

  if (a3 >= 1) {
    v3 = result;
    result = (__int64*)result[2];
    v4 = a3;
    do {
      v9 = v3[1];
      if ((unsigned __int64)result >= v9) {
        diag_log_misc_b9550(v3, 0);
        v9 = v3[1];
        result = (__int64*)v3[2];
      }
      v6 = v9 - (_DWORD)result;
      if (v4 >= v6) {
        v7 = v6;
      }
      else {
        v7 = v4;
      }
      memcpy_plt(result, a2, v7);
      a2 += v7;
      v8 = __OFSUB__(v4, v7);
      v4 -= v7;
      result = (__int64*)(v3[2] + v7);
      v3[2] = (__int64)result;
    } while (!((v4 < 0) ^ v8 | (v4 == 0)));
  }
  return result;
}

__int64 diag_log_misc_b9550(__int64* a1, char a2)
{
  __int64 v4;
  unsigned int v5;
  bool v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  char v10;
  __int64 v11;
  char v12;
  __int64 result;
  __int64 v14;
  __int64 v15;
  unsigned __int8 v16;
  int v17;
  struct {
    __int64 v18;
    __int64 v19;
    __int64 v20;
  } v18_;

  if ((a2 & 1) != 0 || (*(_BYTE*)(a1[4] + 40) & 1) != 0 ||
      (v4 = a1[2] - *a1, ((v5 = nn_diag_detail_GetValidSizeAsUtf8String_plt()) &
                          0x80000000) != 0) ||
      (v6 = __OFSUB__((_DWORD)v4, v5),
       ((int)(v7 = (unsigned int)v4 - v5) < 0) ^ v6 | ((_DWORD)v7 == 0))) {
    *(_BYTE*)a1[2] = 0;
    v15 = a1[4];
    v16 = *((_BYTE*)a1 + 40);
    v17 = *((_DWORD*)a1 + 4) - *a1;
    v18_.v18 = *a1;
    v18_.v19 = v17;
    v18_.v20 = v16;
    *(_DWORD*)((char*)&v18_.v20 + 1) = a2 & 1;
    result = nn_diag_detail_CallAllLogObserver_plt(v15, &v18_.v18);
    v14 = *a1;
  }
  else {
    v8 = *a1;
    v9 = v5;
    v10 = *(_BYTE*)(*a1 + v5);
    *(_BYTE*)(*a1 + v5) = 0;
    v18_.v19 = v5;
    v18_.v20 = 0;
    v11 = a1[4];
    v12 = *((_BYTE*)a1 + 40);
    v18_.v18 = *a1;
    LOBYTE(v18_.v20) = v12;
    nn_diag_detail_CallAllLogObserver_plt(v11, &v18_.v18);
    *(_BYTE*)(v8 + v9) = v10;
    result = memmove_plt(*a1, v8 + v9, v7);
    v14 = *a1 + v7;
  }
  a1[2] = v14;
  *((_BYTE*)a1 + 40) = 0;
  return result;
}

__int64 diag_log_misc_bbb00(__int64 a1)
{
  return nn_diag_detail_Backtrace_Step_plt(a1) & 1;
}

__int64 diag_log_misc_bd050(__int64 a1)
{
  return nn_diag_detail_Backtrace_GetReturnAddress_plt(a1);
}

__int64 nn_diag_detail_Backtrace_Initialize(void* this_)
{
  _QWORD v2[4];
  __int64 vars0;

  v2[3] = this_;
  v2[0] = this_;
  v2[2] = &vars0;
  v2[1] = v2;
  nn_diag_detail_Backtrace_SetStackInfo_plt();
  return nn_diag_detail_Backtrace_Step_plt(v2[0]);
}

__int64 diag_log_misc_bd400(_QWORD* a1)
{
  __int64 result;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;

  v8 = a1;
  result = nn_os_GetCurrentFiber_plt(a1);
  v7 = result;
  if (result != 0) {
    v2 = v8;
    v3 = *(_QWORD*)(v7 + 64);
    v8[1] = v3 + *(_QWORD*)(v7 + 72);
  }
  else {
    v6 = 0;
    v5 = 0;
    v4 = nn_os_GetCurrentThread_plt(0);
    result = nn_os_GetThreadStackInfo_plt(&v6, &v5, v4);
    v2 = v8;
    v3 = v6;
    v8[1] = v6 + v5;
  }
  *v2 = v3;
  return result;
}

__int64 diag_log_misc_bd4e0(unsigned __int64* a1, unsigned __int64 a2)
{
  __int64 v2;
  __int64 v3;
  unsigned __int64* v4;
  unsigned __int64 v5;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64* v13;

  v13 = a1;
  v12 = a2;
  v11 = 0;
  v10 = 0;
  v2 = nn_os_GetCurrentStackInfo_plt(&v11, &v10);
  v9 = 0;
  v8 = 0;
  v3 = nn_os_GetCurrentThread_plt(v2);
  nn_os_GetThreadStackInfo_plt(&v9, &v8, v3);
  if (v11 == v9) {
    return 0;
  }
  else {
    v7 = v11 + v10;
    if (v11 > v12 || v12 >= v7) {
      return 0;
    }
    else {
      v4 = v13;
      v5 = v11;
      v13[1] = v7;
      *v4 = v5;
      return 1;
    }
  }
}

__int64 diag_log_misc_bd5e0(__int64 a1)
{
  if (a1 == 0) {
    return 0;
  }
  if ((a1 & 7) != 0) {
    return 0;
  }
  return *(_QWORD*)a1;
}

bool diag_log_misc_bd660(unsigned __int64 a1, unsigned __int64* a2)
{
  int v2;
  int v4;
  int v5;
  unsigned __int64* v6;
  unsigned __int64 v7;

  v7 = a1;
  v6 = a2;
  if ((*a2 > a1 || v7 >= *v6 + v6[1]) &&
      (v5 = 0, SdkRoutine_1a5380((__int64)v6, &v5), v4 = v2,
       (SdkRoutine_bd990(&v4) & 1) != 0)) {
    return false;
  }
  else {
    return v7 != 0 && (v7 & 3) == 0 && (v6[3] & 4) != 0;
  }
}

__int64 diag_log_misc_bd880(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4)
{
  nn_diag_bbbf0(a1);
  return nn_diag_detail_Backtrace_Initialize_plt_859f80(a1, a2, a3, a4);
}

#pragma GCC visibility pop
