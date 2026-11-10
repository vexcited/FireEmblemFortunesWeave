#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_4c0000();
__int64 nn_mii_4bf4e0(_QWORD, _QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
extern _UNKNOWN SdkData_f44748;
extern _UNKNOWN SdkData_f44760;
extern __int64 SdkData_f44740;
extern __int64 SdkData_f44750;
extern __int64 SdkData_f44758;
extern int SdkData_f4474c;
__int64
nn_mii_detail_ImageServiceProviderClient_GetImageDatabaseServiceSharedPointer(
    __int64 a1, __int64* a2);
__int64

nn_mii_detail_ImageServiceProviderClient_GetImageDatabaseServiceSharedPointer(
    __int64 a1, __int64* a2)
{
  void (***v3)(_QWORD);
  __int64 result;
  unsigned int v5;
  unsigned int v6;
  _QWORD v7[3];
  __int64 v8;

  v7[2] = 0;
  v7[0] = &SdkData_f44760;
  v7[1] = "miiimg";
  nn_os_SdkMutexType_Lock_plt(&SdkData_f44748);
  if (SdkData_f4474c != 0) {
    if (SdkData_f44750 == 0) {
      SdkData_f44750 = (__int64)SdkRoutine_4c0000;
      SdkData_f44758 = (__int64)&SdkData_f44760;
    }
    ++SdkData_f4474c;
    nn_os_SdkMutexType_Unlock_plt(&SdkData_f44748);
    v3 = (void (***)(_QWORD))SdkData_f44740;
    if (SdkData_f44740 == 0) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v8 = 0;
  v5 = nn_mii_4bf4e0(v7, &v8);
  if (v5 == 0) {
    SdkData_f4474c = 1;
    SdkData_f44740 = v8;
    SdkData_f44750 = (__int64)SdkRoutine_4c0000;
    SdkData_f44758 = (__int64)&SdkData_f44760;
    nn_os_SdkMutexType_Unlock_plt(&SdkData_f44748);
    v3 = (void (***)(_QWORD))SdkData_f44740;
    if (SdkData_f44740 == 0) {
    LABEL_6:
      result = *a2;
      *a2 = (__int64)v3;
      if (result != 0) {
        (*(void (**)(__int64))(*(_QWORD*)result + 8LL))(result);
        return 0;
      }
      return result;
    }
  LABEL_5:
    (**v3)(v3);
    goto LABEL_6;
  }
  v6 = v5;
  if (v8 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 8LL))(v8);
  }
  nn_os_SdkMutexType_Unlock_plt(&SdkData_f44748);
  return v6;
}

#pragma GCC visibility pop
