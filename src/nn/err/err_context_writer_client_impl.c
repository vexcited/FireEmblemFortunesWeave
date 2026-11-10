#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_868c50(_QWORD);
__int64 nn_err_detail_ContextSeriesArray_FindSeriesHolder_plt(_QWORD, _QWORD,
                                                              _QWORD);
__int64 nn_err_detail_ContextSeriesArray_ReleaseSeries_plt(_QWORD, _QWORD,
                                                           _QWORD);
__int64
nn_err_detail_ContextSeriesArray_SeriesHolder_GetContextSeries_plt(void);
__int64
    nn_err_detail_ContextSeriesArray_SeriesHolder_GetInitialOriginalResult_plt(
        _QWORD);
__int64 nn_err_detail_ContextSeriesArray_lock_plt(_QWORD);
__int64 nn_err_detail_ContextSeriesArray_unlock_plt(_QWORD);
__int64 nn_err_detail_SerializedContextSeries_GetData_plt(_QWORD);
__int64 nn_err_detail_SerializedContextSeries_GetSize_plt(_QWORD);
__int64 nn_err_detail_SerializedContextSeries_Initialize_plt_868e30(_QWORD,
                                                                    _QWORD,
                                                                    _QWORD);
__int64
nn_err_detail_ContextWriterClientImpl_CommitContext_nn_err_context_IWriterForSystem(
    __int64* a1, __int64 a2, unsigned int a3, unsigned int a4, __int64 a5);
__int64
nn_err_detail_ContextWriterClientImpl_CommitContext_nn_err_context_IWriterForApplication(
    __int64* a1, __int64 a2, unsigned int a3, unsigned int a4, __int64 a5);
__int64

nn_err_detail_ContextWriterClientImpl_CommitContext_nn_err_context_IWriterForSystem(
    __int64* a1, __int64 a2, unsigned int a3, unsigned int a4, __int64 a5)
{
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned int v13;
  unsigned int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD v20[2];
  __int64 v21;
  __int64 v22;
  _QWORD v23[4];

  v8 = a3;
  v9 = a4;
  nn_err_detail_ContextSeriesArray_lock_plt(a2);
  v10 = nn_err_detail_ContextSeriesArray_FindSeriesHolder_plt(a2, v8, v9);
  if (v10 != 0) {
    v11 = v10;
    memset(v23, 0, sizeof(v23));
    v21 = 0;
    v22 = 0;
    v12 = nn_err_detail_ContextSeriesArray_SeriesHolder_GetContextSeries_plt();
    v13 = nn_err_detail_SerializedContextSeries_Initialize_plt_868e30(&v21, v12,
                                                                      a5);
    if (v13 == 0) {
      v14 =
          nn_err_detail_ContextSeriesArray_SeriesHolder_GetInitialOriginalResult_plt(
              v11);
      v15 = nn_err_detail_SerializedContextSeries_GetData_plt(&v21);
      v16 = nn_err_detail_SerializedContextSeries_GetSize_plt(&v21);
      v17 = *a1;
      v20[0] = v15;
      v20[1] = v16;
      v13 = (*(__int64 (**)(__int64*, __int64, _QWORD, _QWORD*, __int64))(
          v17 + 40))(a1, v8, v14, v20, v9);
    }
    v18 = v22;
    v22 = 0;
    if (v18 != 0) {
      SdkRoutine_868c50(v23);
    }
    nn_err_detail_ContextSeriesArray_ReleaseSeries_plt(a2, v8, v9);
  }
  else {
    v13 = 16110;
  }
  nn_err_detail_ContextSeriesArray_unlock_plt(a2);
  return v13;
}

__int64

nn_err_detail_ContextWriterClientImpl_CommitContext_nn_err_context_IWriterForApplication(
    __int64* a1, __int64 a2, unsigned int a3, unsigned int a4, __int64 a5)
{
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned int v13;
  unsigned int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD v20[2];
  __int64 v21;
  __int64 v22;
  _QWORD v23[4];

  v8 = a3;
  v9 = a4;
  nn_err_detail_ContextSeriesArray_lock_plt(a2);
  v10 = nn_err_detail_ContextSeriesArray_FindSeriesHolder_plt(a2, v8, v9);
  if (v10 != 0) {
    v11 = v10;
    memset(v23, 0, sizeof(v23));
    v21 = 0;
    v22 = 0;
    v12 = nn_err_detail_ContextSeriesArray_SeriesHolder_GetContextSeries_plt();
    v13 = nn_err_detail_SerializedContextSeries_Initialize_plt_868e30(&v21, v12,
                                                                      a5);
    if (v13 == 0) {
      v14 =
          nn_err_detail_ContextSeriesArray_SeriesHolder_GetInitialOriginalResult_plt(
              v11);
      v15 = nn_err_detail_SerializedContextSeries_GetData_plt(&v21);
      v16 = nn_err_detail_SerializedContextSeries_GetSize_plt(&v21);
      v17 = *a1;
      v20[0] = v15;
      v20[1] = v16;
      v13 = (*(__int64 (**)(__int64*, __int64, _QWORD, _QWORD*, __int64))(
          v17 + 40))(a1, v8, v14, v20, v9);
    }
    v18 = v22;
    v22 = 0;
    if (v18 != 0) {
      SdkRoutine_868c50(v23);
    }
    nn_err_detail_ContextSeriesArray_ReleaseSeries_plt(a2, v8, v9);
  }
  else {
    v13 = 16110;
  }
  nn_err_detail_ContextSeriesArray_unlock_plt(a2);
  return v13;
}

#pragma GCC visibility pop
