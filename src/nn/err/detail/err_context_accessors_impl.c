#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void
    nn_err_detail_RawContext_Deserialize_plt(PSEUDO_X8, _QWORD, _QWORD);
__int64 SdkRoutine_868c50(_QWORD);
__int64 nn_err_detail_ContextSeriesEntry_GetRawContext_plt(_QWORD);
__int64 nn_err_detail_ContextSeriesEntry_Next_plt(_QWORD);
__int64 nn_err_detail_ContextSeries_CBegin_plt(_QWORD);
__int64 nn_err_detail_ContextSeries_CEnd_plt(_QWORD);
__int64 nn_err_detail_ContextSeries_GetSerializationSize_plt(_QWORD);
__int64 nn_err_detail_ContextSeries_IsEmpty_plt(_QWORD);
__int64 nn_err_detail_RawContext_GetSerializationSize_plt(_QWORD);
__int64 nn_err_detail_RawContext_IsDeserializable_plt(_QWORD, _QWORD);
__int64 nn_err_detail_RawContext_Serialize_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_err_detail_SerializedContextSeries_Initialize_407060(__int64 a1,
                                                                __int64 a2,
                                                                __int64 a3);
__int64
nn_err_detail_SerializedContextSeries_Initialize_407240(__int64 a1, __int64* a2,
                                                        unsigned __int64 a3);

__int64 nn_err_detail_SerializedContextSeries_Initialize_407060(__int64 a1,
                                                                __int64 a2,
                                                                __int64 a3)
{
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;

  if ((nn_err_detail_ContextSeries_IsEmpty_plt(a2) & 1) != 0) {
    *(_BYTE*)a1 = 1;
    return 0;
  }
  v7 = nn_err_detail_ContextSeries_GetSerializationSize_plt(a2);
  v8 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)a3 + 16LL))(a3, v7,
                                                                         16);
  v9 = v8;
  if (v8 != 0) {
    v10 = v8;
    goto LABEL_8;
  }
  v11 = nn_err_detail_ContextSeries_CBegin_plt(a2);
  if (v11 == nn_err_detail_ContextSeries_CEnd_plt(a2)) {
    return 16110;
  }
  v12 = nn_err_detail_ContextSeriesEntry_GetRawContext_plt(v11);
  v7 = nn_err_detail_RawContext_GetSerializationSize_plt(v12);
  v13 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)a3 + 16LL))(
      a3, v7, 16);
  if (v13 != 0) {
    v10 = v13;
  LABEL_8:
    v14 = nn_err_detail_ContextSeries_CBegin_plt(a2);
    if (v14 == nn_err_detail_ContextSeries_CEnd_plt(a2)) {
      v15 = 0;
      v16 = *(_QWORD*)(a1 + 8);
      *(_QWORD*)(a1 + 8) = v10;
      *(_BYTE*)a1 = 1;
      if (v16 == 0) {
        goto LABEL_16;
      }
    }
    else if (v9 != 0) {
      v15 = 0;
      v17 = 0;
      do {
        v18 = nn_err_detail_ContextSeriesEntry_GetRawContext_plt(v14);
        ++v15;
        v17 += nn_err_detail_RawContext_Serialize_plt(v18, v10 + v17, v7 - v17);
        v14 = nn_err_detail_ContextSeriesEntry_Next_plt(v14);
      } while (v14 != nn_err_detail_ContextSeries_CEnd_plt(a2));
      v19 = *(_QWORD*)(a1 + 8);
      *(_QWORD*)(a1 + 8) = v10;
      *(_BYTE*)a1 = 1;
      if (v19 == 0) {
        goto LABEL_16;
      }
    }
    else {
      v20 = nn_err_detail_ContextSeriesEntry_GetRawContext_plt(v14);
      nn_err_detail_RawContext_Serialize_plt(v20, v10, v7);
      v15 = 1;
      v21 = *(_QWORD*)(a1 + 8);
      *(_QWORD*)(a1 + 8) = v10;
      *(_BYTE*)a1 = 1;
      if (v21 == 0) {
        goto LABEL_16;
      }
    }
    SdkRoutine_868c50(a1 + 16);
  LABEL_16:
    *(_QWORD*)(a1 + 16) = a3;
    *(_QWORD*)(a1 + 24) = v7;
    *(_QWORD*)(a1 + 32) = v7;
    *(_DWORD*)(a1 + 40) = v15;
    return 0;
  }
  return 6382;
}

__int64

nn_err_detail_SerializedContextSeries_Initialize_407240(__int64 a1, __int64* a2,
                                                        unsigned __int64 a3)
{
  __int64 v6;
  unsigned __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 result;
  struct {
    __int64 v17;
    __int64 v18;
  } v17_;
  _QWORD v19[2];

  if (a3 != 0) {
    v6 = *a2;
    v7 = 0;
    v8 = 0;
    while ((nn_err_detail_RawContext_IsDeserializable_plt(v6 + v7, a3 - v7) &
            1) != 0) {
      v19[0] = 0;
      v19[1] = 0;
      v17_.v17 = 0;
      v17_.v18 = 0;
      nn_err_detail_RawContext_Deserialize_plt((void*)(&v17_.v17), v6 + v7,
                                               a3 - v7);
      v9 = nn_err_detail_RawContext_GetSerializationSize_plt(&v17_.v17);
      v10 = v17_.v18;
      v11 = v9;
      v17_.v18 = 0;
      if (v10 != 0) {
        SdkRoutine_868c50(v19);
      }
      v7 += v11;
      ++v8;
      if (v7 >= a3) {
        goto LABEL_8;
      }
    }
    return 26350;
  }
  else {
    v8 = 0;
  LABEL_8:
    *(_BYTE*)a1 = 1;
    v12 = *a2;
    *a2 = 0;
    v13 = *(_QWORD*)(a1 + 8);
    *(_QWORD*)(a1 + 8) = v12;
    if (v13 != 0) {
      SdkRoutine_868c50(a1 + 16);
    }
    v14 = a2[1];
    v15 = a2[2];
    result = 0;
    *(_QWORD*)(a1 + 32) = a3;
    *(_DWORD*)(a1 + 40) = v8;
    *(_QWORD*)(a1 + 16) = v14;
    *(_QWORD*)(a1 + 24) = v15;
  }
  return result;
}

#pragma GCC visibility pop
