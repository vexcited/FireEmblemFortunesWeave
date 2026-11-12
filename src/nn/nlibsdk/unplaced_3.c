#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_nlibsdk_detail_JoinAndFreePosixThread(__int64, _QWORD*);
__int64 nn_os_GetThreadAvailableCoreMask_plt(_QWORD, _QWORD);
__int64 nn_os_SdkConditionVariableType_Wait_plt(_QWORD, _QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
extern _UNKNOWN SdkData_eb7e78;
extern _UNKNOWN SdkData_eb7e94;
extern _UNKNOWN SdkData_eb7e98;
extern __int64 SdkData_eb7ea8;
extern __int64 SdkData_eb7eb0;
extern int nn_init_detail_PthreadDefaults[];
__int64 nn_nlibsdk_173360(_QWORD* a1);
__int64 nn_nlibsdk_1733f0(__int64* a1, __int64 a2);
void __attribute__((noreturn)) nn_nlibsdk_173980();

__int64 nn_nlibsdk_173360(_QWORD* a1)
{
  int v1;
  int* v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  do {
    v1 = nn_init_detail_PthreadDefaults[0];
    v2 = &nn_init_detail_PthreadDefaults[14 *
                                         (nn_init_detail_PthreadDefaults[0] &
                                          1)];
    v8 = *((_QWORD*)v2 + 5);
    v9 = *((_QWORD*)v2 + 6);
    v10 = *((_QWORD*)v2 + 7);
    v4 = *((_QWORD*)v2 + 1);
    v5 = *((_QWORD*)v2 + 2);
    v6 = *((_QWORD*)v2 + 3);
    v7 = *((_QWORD*)v2 + 4);
    __builtin_arm_dmb(9u);
  } while (v1 != nn_init_detail_PthreadDefaults[0]);
  a1[4] = v8;
  a1[5] = v9;
  a1[6] = v10;
  *a1 = v4;
  a1[1] = v5;
  a1[2] = v6;
  a1[3] = v7;
  return 0;
}

__int64 nn_nlibsdk_1733f0(__int64* a1, __int64 a2)
{
  unsigned int v2;
  __int64 v5;
  __int64 v7;
  int v8;
  int* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  if (a1[2] != 0) {
    return 22;
  }
  v2 = *((_DWORD*)a1 + 7);
  if (v2 > 1 || v2 == 1 && (*((_DWORD*)a1 + 8) > 1u ||
                            (unsigned int)(*((_DWORD*)a1 + 9) - 5) > 0x1F)) {
    return 22;
  }
  if ((unsigned __int64)*a1 < 0x1000 || (*a1 & 0xFFF) != 0) {
    return 22;
  }
  v5 = a1[5];
  if (v5 != 0 && (nn_os_GetThreadAvailableCoreMask_plt(a1, a2) & v5) == 0) {
    return 22;
  }
  nn_os_SdkMutexType_Lock_plt(&SdkData_eb7e78);
  v7 = a1[2];
  v8 = nn_init_detail_PthreadDefaults[0] + 1;
  v9 = &nn_init_detail_PthreadDefaults
           [14 * ((nn_init_detail_PthreadDefaults[0] + 1) & 1)];
  v10 = *a1;
  *((_QWORD*)v9 + 2) = a1[1];
  *((_QWORD*)v9 + 3) = v7;
  *((_QWORD*)v9 + 1) = v10;
  v11 = a1[3];
  v12 = a1[4];
  v13 = a1[6];
  *((_QWORD*)v9 + 6) = a1[5];
  *((_QWORD*)v9 + 7) = v13;
  *((_QWORD*)v9 + 4) = v11;
  *((_QWORD*)v9 + 5) = v12;
  __builtin_arm_dmb(0xAu);
  nn_init_detail_PthreadDefaults[0] = v8;
  nn_os_SdkMutexType_Unlock_plt(&SdkData_eb7e78);
  return 0;
}

void __attribute__((noreturn)) nn_nlibsdk_173980()
{
  __int64* v0;
  __int64 v1;
  __int64 v2;

  nn_os_SdkMutexType_Lock_plt(&SdkData_eb7e94);
  while (1) {
    nn_os_SdkConditionVariableType_Wait_plt(&SdkData_eb7e98, &SdkData_eb7e94);
    v0 = (__int64*)SdkData_eb7ea8;
    v1 = SdkData_eb7eb0;
    if (SdkData_eb7ea8 != SdkData_eb7eb0) {
      do {
        v2 = *v0++;
        nn_nlibsdk_detail_JoinAndFreePosixThread(v2, nullptr);
      } while (v0 != (__int64*)v1);
      v0 = (__int64*)SdkData_eb7ea8;
    }
    SdkData_eb7eb0 = (__int64)v0;
  }
}

#pragma GCC visibility pop
