#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 _Unwind_Resume_plt(_QWORD);
__int64 free_plt(_QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
extern _UNKNOWN SdkData_10616b0;
extern _UNKNOWN SdkData_10616c0;
extern _UNKNOWN SdkData_10618c0;
extern __int64 SdkData_10616b8;
extern int SdkData_10616cc;
void __attribute__((noreturn)) SdkRoutine_84c1f0(const char*, ...);
int* anonymous_fallback_malloc(__int64 a1);
void __attribute__((noreturn)) fallback_malloc_84c3fc(__int64 a1);
__int64 __cxxabiv1___aligned_free_with_fallback(unsigned __int64 a1);

int* anonymous_fallback_malloc(__int64 a1)
{
  int* v2;
  int* v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  int* v6;
  int* v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int16* v12;
  __int64 v13;

  nn_os_SdkMutexType_Lock_plt(&SdkData_10616b0);
  v2 = (int*)SdkData_10616b8;
  if (SdkData_10616b8 != 0) {
    if ((_UNKNOWN*)SdkData_10616b8 == &SdkData_10618c0) {
    LABEL_12:
      v6 = nullptr;
      goto LABEL_18;
    }
  }
  else {
    SdkData_10616cc = 8192128;
    v2 = &SdkData_10616cc;
    SdkData_10616b8 = (__int64)&SdkData_10616cc;
  }
  v3 = nullptr;
  v4 = (unsigned __int64)(a1 + 3) >> 2;
  v5 = v4 + 1;
  while (1) {
    v6 = v2 + 1;
    if (((unsigned __int64)(v2 + 1) & 0xF) != 0) {
      SdkRoutine_84c1f0("libc++abi: ");
    }
    v7 = v2;
    v8 = *((unsigned __int16*)v2 + 1);
    v9 = ((_BYTE)v8 - (_BYTE)v5) & 3;
    if (v5 >= v8) {
      v9 = 0;
    }
    v10 = v9 + v5;
    if (v10 < v8) {
      break;
    }
    if (v4 < v8) {
      v13 = *(unsigned __int16*)v7;
      if (v3 != nullptr) {
        *(_WORD*)v3 = v13;
        *(_WORD*)v7 = 0;
      }
      else {
        *(_WORD*)v7 = 0;
        SdkData_10616b8 = (__int64)&SdkData_10616b0 + 4 * v13 + 16;
      }
      goto LABEL_18;
    }
    v11 = *(unsigned __int16*)v7;
    v2 = (int*)((char*)&SdkData_10616b0 + 4 * v11 + 16);
    v3 = v7;
    if (v11 == 128) {
      goto LABEL_12;
    }
  }
  *((_WORD*)v7 + 1) = v8 - v10;
  v12 = (unsigned __int16*)&v7[(unsigned __int16)(v8 - v10)];
  v6 = (int*)(v12 + 2);
  *v12 = 0;
  v12[1] = v10;
  if (((unsigned __int64)(v12 + 2) & 0xF) != 0) {
    SdkRoutine_84c1f0("libc++abi: ");
  }
LABEL_18:
  nn_os_SdkMutexType_Unlock_plt(&SdkData_10616b0);
  return v6;
}

void __attribute__((noreturn)) fallback_malloc_84c3fc(__int64 a1)
{
  __int64 v2;

  nn_os_SdkMutexType_Unlock_plt(&SdkData_10616b0);
  v2 = _Unwind_Resume_plt(a1);
  nn_os_SdkMutexType_Unlock_plt(&SdkData_10616b0);
  _Unwind_Resume_plt(v2);
  __udf(0);
}

__int64 __cxxabiv1___aligned_free_with_fallback(unsigned __int64 a1)
{
  unsigned __int16* v3;
  int v5;
  unsigned __int16* v7;
  unsigned __int16* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned int v12;

  if (a1 < (unsigned __int64)&SdkData_10616c0 ||
      a1 >= (unsigned __int64)&SdkData_10618c0) {
    return free_plt(a1);
  }
  v3 = (unsigned __int16*)(a1 - 4);
  nn_os_SdkMutexType_Lock_plt(&SdkData_10616b0);
  v5 = SdkData_10616b8;
  if (SdkData_10616b8 == 0 || SdkData_10616b8 == (_QWORD)&SdkData_10618c0) {
  LABEL_15:
    SdkData_10616b8 = (__int64)v3;
    v12 = (v5 - (unsigned int)&SdkData_10616b0 - 16) >> 2;
  }
  else {
    v7 = nullptr;
    v8 = (unsigned __int16*)SdkData_10616b8;
    while (1) {
      v9 = v8[1];
      if (&v8[2 * v9] == v3) {
        v8[1] = *(_WORD*)(a1 - 2) + v9;
        return nn_os_SdkMutexType_Unlock_plt(&SdkData_10616b0);
      }
      v10 = *(unsigned __int16*)(a1 - 2);
      if (&v3[2 * v10] == v8) {
        break;
      }
      v11 = *v8;
      v7 = v8;
      v8 = (unsigned __int16*)((char*)&SdkData_10616b0 + 4 * v11 + 16);
      if (v11 == 128) {
        goto LABEL_15;
      }
    }
    *(_WORD*)(a1 - 2) = v10 + v9;
    if (v7 != nullptr) {
      *v7 = ((unsigned int)v3 - (unsigned int)&SdkData_10616b0 - 16) >> 2;
      return nn_os_SdkMutexType_Unlock_plt(&SdkData_10616b0);
    }
    SdkData_10616b8 = (__int64)v3;
    LOWORD(v12) = *v8;
  }
  *v3 = v12;
  return nn_os_SdkMutexType_Unlock_plt(&SdkData_10616b0);
}

#pragma GCC visibility pop
