#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_4bd660(__int64*, _QWORD**);
__int64 SdkRoutine_4bf2f0();
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
extern _UNKNOWN* SdkData_f44130;
extern _UNKNOWN SdkData_f44128;
extern _UNKNOWN SdkData_f44140;
extern __int64 SdkData_f44120;
extern __int64 SdkData_f44138;
extern int SdkData_f4412c;
__int64 nn_mii_detail_ServiceProviderClient_Initialize(void* this_);
__int64
nn_mii_detail_ServiceProviderClient_GetDatabaseServiceSharedPointer(__int64 a1,
                                                                    __int64 a2);
__int64 nn_mii_detail_ServiceProviderClient_Finalize(void* this_);

__int64 nn_mii_detail_ServiceProviderClient_Initialize(void* this_)
{
  _QWORD* v1;
  _QWORD* v2;
  int v5;
  unsigned int v6;
  unsigned int v7;
  struct {
    __int64 v8[2];
    __int64 v9;
  } v8_;
  _QWORD* v10[3];

  if ((*(_BYTE*)this_ & 1) != 0) {
    return 0;
  }
  v10[1] = v1;
  v10[2] = v2;
  v8_.v9 = 0;
  v8_.v8[0] = (__int64)&SdkData_f44140;
  v8_.v8[1] = (__int64)"mii:e";
  nn_os_SdkMutexType_Lock_plt(&SdkData_f44128);
  v5 = SdkData_f4412c;
  if (SdkData_f4412c != 0) {
    goto LABEL_4;
  }
  v10[0] = nullptr;
  if ((unsigned int)SdkRoutine_4bd660(v8_.v8, v10) != 0) {
    if (v10[0] != nullptr) {
      (*(void (**)(_QWORD*))(*v10[0] + 8LL))(v10[0]);
    }
    nn_os_SdkMutexType_Unlock_plt(&SdkData_f44128);
    v8_.v9 = 0;
    v8_.v8[0] = (__int64)&SdkData_f44140;
    v8_.v8[1] = (__int64)"mii:u";
    nn_os_SdkMutexType_Lock_plt(&SdkData_f44128);
    v5 = SdkData_f4412c;
    if (SdkData_f4412c != 0) {
    LABEL_4:
      if (SdkData_f44130 == nullptr) {
        SdkData_f44130 = SdkRoutine_4bf2f0;
        SdkData_f44138 = (__int64)&SdkData_f44140;
      }
      SdkData_f4412c = v5 + 1;
      goto LABEL_7;
    }
    v10[0] = nullptr;
    v6 = SdkRoutine_4bd660(v8_.v8, v10);
    if (v6 != 0) {
      v7 = v6;
      if (v10[0] != nullptr) {
        (*(void (**)(_QWORD*))(*v10[0] + 8LL))(v10[0]);
      }
      nn_os_SdkMutexType_Unlock_plt(&SdkData_f44128);
      return v7;
    }
  }
  SdkData_f4412c = 1;
  SdkData_f44120 = (__int64)v10[0];
  SdkData_f44130 = SdkRoutine_4bf2f0;
  SdkData_f44138 = (__int64)&SdkData_f44140;
LABEL_7:
  nn_os_SdkMutexType_Unlock_plt(&SdkData_f44128);
  *(_BYTE*)this_ = 1;
  return 0;
}

__int64

nn_mii_detail_ServiceProviderClient_GetDatabaseServiceSharedPointer(__int64 a1,
                                                                    __int64 a2)
{
  __int64 v3;
  unsigned int v4;
  __int64 v6;

  v3 = SdkData_f44120;
  if (SdkData_f44120 != 0) {
    (**(void (***)(__int64))SdkData_f44120)(SdkData_f44120);
  }
  v6 = a2;
  v4 = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v3 + 32LL))(v3, &v6);
  (*(void (**)(__int64))(*(_QWORD*)v3 + 8LL))(v3);
  return v4;
}

__int64 nn_mii_detail_ServiceProviderClient_Finalize(void* this_)
{
  nn_os_SdkMutexType_Lock_plt(&SdkData_f44128);
  if (--SdkData_f4412c != 0) {
    return nn_os_SdkMutexType_Unlock_plt(&SdkData_f44128);
  }
  else {
    (*(void (**)(__int64))(*(_QWORD*)SdkData_f44120 + 8LL))(SdkData_f44120);
    SdkData_f44120 = 0;
    if (SdkData_f44130 != nullptr) {
      ((void (*)(__int64))SdkData_f44130)(SdkData_f44138);
    }
    SdkData_f44130 = nullptr;
    SdkData_f44138 = 0;
    return nn_os_SdkMutexType_Unlock_plt(&SdkData_f44128);
  }
}

#pragma GCC visibility pop
