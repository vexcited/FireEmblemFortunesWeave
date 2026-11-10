#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_40ec40(_QWORD);
__int64 SdkRoutine_868c50(_QWORD);
__int64 SdkRoutine_868e50(_QWORD, _QWORD);
__int64 SdkRoutine_869080(_QWORD, _QWORD);
__int64 nn_err_detail_ContextRegistrarClient_AddContext_plt(_QWORD, _QWORD,
                                                            _QWORD);
__int64 nn_err_detail_ContextRegistrarClient_Complete_plt(_QWORD, _QWORD);
__int64 nn_err_detail_ContextRegistrarClient_Initialize_plt(_QWORD, _QWORD,
                                                            _QWORD, _QWORD);
__int64 nn_err_detail_ContextSeriesArray_Destroy_ContextSeriesArray_plt(_QWORD);
__int64 nn_err_detail_ExpHeapBase_Destroy_ExpHeapBase_plt_868cb0(_QWORD);
__int64
    nn_err_detail_SerializedContextSeries_SerializedContextSeries_plt(_QWORD,
                                                                      _QWORD);
__int64 nn_err_detail_UnitHeapBase_Destroy_UnitHeapBase_plt_868c80(_QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 nn_sf_hipc_SetHipcErrorHandlerOnClient_plt(_QWORD);
extern _UNKNOWN* SdkData_f383d0;
extern _UNKNOWN SdkData_f2e1c4;
extern _UNKNOWN SdkData_f2e1c8;
extern _UNKNOWN SdkData_f383a4;
extern _UNKNOWN SdkData_f383c8;
extern __int64 SdkData_f383a8;
extern __int64 SdkData_f383b0;
extern __int64 SdkData_f383c0;
extern __int64 SdkData_f383d8;
extern char nn_err_detail_WriterState;
extern int SdkData_f383cc;
_BYTE* nn_err_408050(_BYTE* result, __int64 a2);
__int64 nn_err_40a180(__int64* a1, __int64* a2, _BYTE* a3, __int64 a4);
__int64 nn_err_FinalizeContextWriterApiForDebug(void* this_);
__int64 nn_err_40c120(__int64 a1);

_BYTE* nn_err_408050(_BYTE* result, __int64 a2)
{
  _BYTE* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD v9[4];

  v3 = result;
  if (*result == 1) {
    if (*(_BYTE*)a2 != 0) {
      memset(v9, 0, sizeof(v9));
      v7 = 0;
      v8 = 0;
      nn_err_detail_SerializedContextSeries_SerializedContextSeries_plt(
          &v7, result + 8);
      SdkRoutine_868e50(v3 + 8, a2 + 8);
      result = (_BYTE*)SdkRoutine_868e50(a2 + 8, &v7);
      v4 = v8;
      v8 = 0;
      if (v4 != 0) {
        return (_BYTE*)SdkRoutine_868c50(v9);
      }
    }
    else {
      result = (_BYTE*)
          nn_err_detail_SerializedContextSeries_SerializedContextSeries_plt(
              a2 + 8, result + 8);
      *(_BYTE*)a2 = 1;
      if (*v3 == 1) {
        v6 = *((_QWORD*)v3 + 2);
        *((_QWORD*)v3 + 2) = 0;
        if (v6 != 0) {
          result = (_BYTE*)SdkRoutine_868c50(v3 + 24);
        }
      }
      *v3 = 0;
    }
  }
  else if (*(_BYTE*)a2 != 0) {
    result = (_BYTE*)
        nn_err_detail_SerializedContextSeries_SerializedContextSeries_plt(
            result + 8, a2 + 8);
    *v3 = 1;
    if (*(_BYTE*)a2 == 1) {
      v5 = *(_QWORD*)(a2 + 16);
      *(_QWORD*)(a2 + 16) = 0;
      if (v5 != 0) {
        result = (_BYTE*)SdkRoutine_868c50(a2 + 24);
      }
    }
    *(_BYTE*)a2 = 0;
  }
  return result;
}

__int64 nn_err_40a180(__int64* a1, __int64* a2, _BYTE* a3, __int64 a4)
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
  nn_os_SdkMutexType_Lock_plt(&SdkData_f2e1c4);
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
  nn_os_SdkMutexType_Unlock_plt(&SdkData_f2e1c4);
  if (v15) {
    return v19;
  }
  else {
    return 0xFFFFFFFFLL;
  }
}

__int64 nn_err_FinalizeContextWriterApiForDebug(void* this_)
{
  int v1;

  nn_os_SdkMutexType_Lock_plt(&SdkData_f383a4);
  v1 = atomic_load((unsigned __int8*)&nn_err_detail_WriterState);
  if (v1 == 1) {
    atomic_store(0, (unsigned __int8*)&nn_err_detail_WriterState);
    nn_sf_hipc_SetHipcErrorHandlerOnClient_plt(0);
    nn_os_SdkMutexType_Lock_plt(&SdkData_f383c8);
    if (--SdkData_f383cc == 0) {
      (*(void (**)(__int64))(*(_QWORD*)SdkData_f383c0 + 8LL))(SdkData_f383c0);
      SdkData_f383c0 = 0;
      if (SdkData_f383d0 != nullptr) {
        ((void (*)(__int64))SdkData_f383d0)(SdkData_f383d8);
      }
      SdkData_f383d0 = nullptr;
      SdkData_f383d8 = 0;
    }
    nn_os_SdkMutexType_Unlock_plt(&SdkData_f383c8);
    *(_OWORD*)&SdkData_f383b0 = (__typeof__(*(_OWORD*)&SdkData_f383b0)){0};
    SdkData_f383a8 = 0;
    nn_err_40c120((__int64)&SdkData_f2e1c8);
  }
  return nn_os_SdkMutexType_Unlock_plt(&SdkData_f383a4);
}

__int64 nn_err_40c120(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 result;

  SdkRoutine_40ec40(*(_QWORD*)(a1 + 8));
  v2 = -3584;
  v3 = *(_QWORD*)(a1 + 16) + 3568LL;
  do {
    v4 = *(_QWORD*)(v3 - 8);
    *(_QWORD*)(v3 - 8) = 0;
    if (v4 != 0) {
      SdkRoutine_868c50(v3);
    }
    v3 -= 56;
    v2 += 56;
  } while (v2 != 0);
  nn_err_detail_ContextSeriesArray_Destroy_ContextSeriesArray_plt(
      *(_QWORD*)(a1 + 24));
  nn_err_detail_UnitHeapBase_Destroy_UnitHeapBase_plt_868c80(
      *(_QWORD*)(a1 + 32));
  nn_err_detail_ExpHeapBase_Destroy_ExpHeapBase_plt_868cb0(*(_QWORD*)(a1 + 40));
  nn_err_detail_ExpHeapBase_Destroy_ExpHeapBase_plt_868cb0(*(_QWORD*)(a1 + 56));
  result = nn_err_detail_ContextSeriesArray_Destroy_ContextSeriesArray_plt(
      *(_QWORD*)(a1 + 24));
  *(_BYTE*)a1 = 0;
  return result;
}

#pragma GCC visibility pop
