#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_5959a0(_QWORD, _QWORD);
__int64 SdkRoutine_5964b0();
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
extern _UNKNOWN SdkData_f655a8;
extern _UNKNOWN SdkData_f655c0;
extern __int64 SdkData_f655a0;
extern __int64 SdkData_f655b0;
extern __int64 SdkData_f655b8;
extern int SdkData_f655ac;
__int64 nn_nsd_detail_GetServiceObjectByHipc(__int64* a1, int a2);

__int64 nn_nsd_detail_GetServiceObjectByHipc(__int64* a1, int a2)
{
  const char* v3;
  void (***v4)(_QWORD);
  __int64 result;
  unsigned int v6;
  unsigned int v7;
  _QWORD v8[3];
  __int64 v9;

  if (a2 == 1) {
    v3 = "nsd:a";
  }
  else {
    if (a2 != 0) {
      return 4237;
    }
    v3 = "nsd:u";
  }
  v8[0] = &SdkData_f655c0;
  v8[1] = v3;
  v8[2] = 0;
  nn_os_SdkMutexType_Lock_plt(&SdkData_f655a8);
  if (SdkData_f655ac != 0) {
    if (SdkData_f655b0 == 0) {
      SdkData_f655b0 = (__int64)SdkRoutine_5964b0;
      SdkData_f655b8 = (__int64)&SdkData_f655c0;
    }
    ++SdkData_f655ac;
    nn_os_SdkMutexType_Unlock_plt(&SdkData_f655a8);
    v4 = (void (***)(_QWORD))SdkData_f655a0;
    if (SdkData_f655a0 == 0) {
      goto LABEL_10;
    }
    goto LABEL_9;
  }
  v9 = 0;
  v6 = SdkRoutine_5959a0(v8, &v9);
  if (v6 == 0) {
    SdkData_f655ac = 1;
    SdkData_f655a0 = v9;
    SdkData_f655b0 = (__int64)SdkRoutine_5964b0;
    SdkData_f655b8 = (__int64)&SdkData_f655c0;
    nn_os_SdkMutexType_Unlock_plt(&SdkData_f655a8);
    v4 = (void (***)(_QWORD))SdkData_f655a0;
    if (SdkData_f655a0 == 0) {
    LABEL_10:
      result = *a1;
      *a1 = (__int64)v4;
      if (result != 0) {
        (*(void (**)(__int64))(*(_QWORD*)result + 8LL))(result);
        return 0;
      }
      return result;
    }
  LABEL_9:
    (**v4)(v4);
    goto LABEL_10;
  }
  v7 = v6;
  if (v9 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 8LL))(v9);
  }
  nn_os_SdkMutexType_Unlock_plt(&SdkData_f655a8);
  return v7;
}

#pragma GCC visibility pop
