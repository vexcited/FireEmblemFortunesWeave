#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_868c50(_QWORD);
__int64 SdkRoutine_869080(_QWORD, _QWORD);
__int64 err_context_api_409fc0_alt1(_QWORD, _QWORD, _QWORD,
                                    _QWORD) __asm__("err_context_api_409fc0");
__int64 nn_err_40a180(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_err_MakeResultWithContextDescriptor_plt(_QWORD, _QWORD);
__int64 nn_err_detail_ContextRegistrarClient_AddContext_plt(_QWORD, _QWORD,
                                                            _QWORD);
__int64 nn_err_detail_ContextRegistrarClient_Complete_plt(_QWORD, _QWORD);
__int64 nn_err_detail_ContextRegistrarClient_Initialize_plt(_QWORD, _QWORD,
                                                            _QWORD, _QWORD);
__int64 nn_err_detail_ContextWriterClientImpl_AddContext_plt(_QWORD, _QWORD,
                                                             _QWORD, _QWORD);
__int64 nn_err_detail_ContextWriterClientImpl_UpdateResult_plt(_QWORD, _QWORD,
                                                               _QWORD, _QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
extern _UNKNOWN SdkData_f2e1c0;
__int64
nn_err_detail_ContextApiImpl_RegisterContext_nn_err_context_IWriterForSystem(
    __int64 a1, __int64 a2, __int64 a3, unsigned int a4);
__int64 err_context_api_409fc0(__int64* a1, __int64* a2, _BYTE* a3, __int64 a4);
__int64
nn_err_detail_ContextApiImpl_RegisterContext_nn_err_context_IWriterForApplication(
    __int64 a1, __int64 a2, __int64 a3, unsigned int a4);
__int64
nn_err_detail_ContextApiImpl_UpdateResultWithContext_nn_err_context_IWriterForSystem(
    __int64 a1, _QWORD* a2, unsigned int a3, unsigned int a4, _BYTE* a5,
    unsigned __int8* a6);
__int64
nn_err_detail_ContextApiImpl_UpdateResultWithContext_nn_err_context_IWriterForApplication(
    __int64 a1, _QWORD* a2, unsigned int a3, unsigned int a4, _BYTE* a5,
    unsigned __int8* a6);
__int64

nn_err_detail_ContextApiImpl_RegisterContext_nn_err_context_IWriterForSystem(
    __int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  return err_context_api_409fc0_alt1(a1, a2, a3, a4);
}

__int64 err_context_api_409fc0(__int64* a1, __int64* a2, _BYTE* a3, __int64 a4)
{
  __int64 v4;
  __int64 v5;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  _BOOL4 v15;
  __int64 v16;
  __int64 v18;
  unsigned int v19;
  _QWORD v20[4];
  __int64 v21;
  _QWORD v22[3];
  _QWORD v23[4];
  __int64 v24;
  _QWORD v25[3];
  _QWORD v26[3];

  if (*a3 != 1) {
    return 0xFFFFFFFFLL;
  }
  v26[1] = v4;
  v26[2] = v5;
  v19 = 0;
  nn_os_SdkMutexType_Lock_plt(&SdkData_f2e1c0);
  v10 = *a1;
  v21 = 0;
  memset(v22, 0, sizeof(v22));
  v11 = *a2;
  v12 = a2[2];
  memset(v20, 0, sizeof(v20));
  v26[0] = 0;
  v23[0] = v26;
  v13 = (*(__int64 (**)(__int64*, _QWORD*))(v10 + 32))(a1, v23);
  if (v13 == 0) {
    v24 = 0;
    memset(v25, 0, sizeof(v25));
    memset(v23, 0, sizeof(v23));
    nn_err_detail_ContextRegistrarClient_Initialize_plt(v23, v26, v11, v12);
    SdkRoutine_869080(v20, v23);
    v14 = v24;
    v24 = 0;
    if (v14 != 0) {
      SdkRoutine_868c50(v25);
    }
    if (v23[0] != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v23[0] + 8LL))(v23[0]);
    }
  }
  if (v26[0] != 0) {
    (*(void (**)(_QWORD))(*(_QWORD*)v26[0] + 8LL))(v26[0]);
  }
  if (v13 == 0) {
    nn_err_detail_ContextRegistrarClient_AddContext_plt(v20, a3 + 8, a4);
    v15 = nn_err_detail_ContextRegistrarClient_Complete_plt(v20, &v19) == 0;
    v18 = v21;
    v21 = 0;
    if (v18 == 0) {
      goto LABEL_12;
    }
    goto LABEL_11;
  }
  v15 = false;
  v16 = v21;
  v21 = 0;
  if (v16 != 0) {
  LABEL_11:
    SdkRoutine_868c50(v22);
  }
LABEL_12:
  if (v20[0] != 0) {
    (*(void (**)(_QWORD))(*(_QWORD*)v20[0] + 8LL))(v20[0]);
  }
  nn_os_SdkMutexType_Unlock_plt(&SdkData_f2e1c0);
  if (v15) {
    return v19;
  }
  else {
    return 0xFFFFFFFFLL;
  }
}

__int64

nn_err_detail_ContextApiImpl_RegisterContext_nn_err_context_IWriterForApplication(
    __int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  return nn_err_40a180(a1, a2, a3, a4);
}

__int64

nn_err_detail_ContextApiImpl_UpdateResultWithContext_nn_err_context_IWriterForSystem(
    __int64 a1, _QWORD* a2, unsigned int a3, unsigned int a4, _BYTE* a5,
    unsigned __int8* a6)
{
  int v6;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  _QWORD* v12;

  v6 = *a6;
  if (v6 == 1) {
    v7 = *((_DWORD*)a6 + 1);
  }
  else {
    v7 = 0;
  }
  v8 = a3;
  if (*a6 != 0) {
    v9 = v7;
  }
  else {
    v9 = a4;
  }
  if (a3 != 0xFFFFFFFFLL) {
    v11 = a4;
    if (*a5 != 0) {
      v12 = a2;
      nn_err_detail_ContextWriterClientImpl_AddContext_plt(*a2, a3, a4, a5 + 8);
      a2 = v12;
      if ((v6 & 1) == 0) {
        return nn_err_MakeResultWithContextDescriptor_plt(v9, v8);
      }
    }
    else if (*a6 == 0) {
      return nn_err_MakeResultWithContextDescriptor_plt(v9, v8);
    }
    nn_err_detail_ContextWriterClientImpl_UpdateResult_plt(*a2, v8, v11, v7);
    return nn_err_MakeResultWithContextDescriptor_plt(v9, v8);
  }
  if (*a5 == 0) {
    return (unsigned int)v9;
  }
  v10 = err_context_api_409fc0_alt1(a1, a2, a5, v9);
  if (v10 == -1) {
    return (unsigned int)v9;
  }
  else {
    return nn_err_MakeResultWithContextDescriptor_plt(v9, v10);
  }
}

__int64

nn_err_detail_ContextApiImpl_UpdateResultWithContext_nn_err_context_IWriterForApplication(
    __int64 a1, _QWORD* a2, unsigned int a3, unsigned int a4, _BYTE* a5,
    unsigned __int8* a6)
{
  int v6;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  _QWORD* v12;

  v6 = *a6;
  if (v6 == 1) {
    v7 = *((_DWORD*)a6 + 1);
  }
  else {
    v7 = 0;
  }
  v8 = a3;
  if (*a6 != 0) {
    v9 = v7;
  }
  else {
    v9 = a4;
  }
  if (a3 != 0xFFFFFFFFLL) {
    v11 = a4;
    if (*a5 != 0) {
      v12 = a2;
      nn_err_detail_ContextWriterClientImpl_AddContext_plt(*a2, a3, a4, a5 + 8);
      a2 = v12;
      if ((v6 & 1) == 0) {
        return nn_err_MakeResultWithContextDescriptor_plt(v9, v8);
      }
    }
    else if (*a6 == 0) {
      return nn_err_MakeResultWithContextDescriptor_plt(v9, v8);
    }
    nn_err_detail_ContextWriterClientImpl_UpdateResult_plt(*a2, v8, v11, v7);
    return nn_err_MakeResultWithContextDescriptor_plt(v9, v8);
  }
  if (*a5 == 0) {
    return (unsigned int)v9;
  }
  v10 = nn_err_40a180(a1, a2, a5, v9);
  if (v10 == -1) {
    return (unsigned int)v9;
  }
  else {
    return nn_err_MakeResultWithContextDescriptor_plt(v9, v10);
  }
}

#pragma GCC visibility pop
