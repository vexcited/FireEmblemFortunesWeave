#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_868c50(_QWORD);
__int64 nn_err_detail_ContextSeriesArray_CreateContextSeries_plt(_QWORD, _QWORD,
                                                                 _QWORD);
__int64 nn_err_detail_RawContext_GetSerializationSize_plt(_QWORD);
__int64 nn_err_detail_RawContext_Serialize_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_err_detail_ContextRegistrarClient_Complete(__int64* a1,
                                                      unsigned int* a2);

__int64 nn_err_detail_ContextRegistrarClient_Complete(__int64* a1,
                                                      unsigned int* a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  _QWORD v12[2];
  __int64 v13;
  _QWORD v14[2];
  unsigned int v15;

  v4 = nn_err_detail_RawContext_GetSerializationSize_plt(a1 + 3);
  v5 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)a1[2] + 16LL))(
      a1[2], v4, 16);
  if (v5 != 0) {
    v6 = a1[2];
    v7 = v5;
    v14[1] = v4;
    v13 = 0;
    v14[0] = v6;
    nn_err_detail_RawContext_Serialize_plt(a1 + 3, v5, v4);
    v8 = *a1;
    v12[0] = v7;
    v12[1] = v4;
    v9 = *((unsigned int*)a1 + 14);
    v15 = 0;
    v10 = (*(__int64 (**)(__int64, unsigned int*, _QWORD*, __int64))(
        *(_QWORD*)v8 + 32LL))(v8, &v15, v12, v9);
    if (v10 == 0) {
      nn_err_detail_ContextSeriesArray_CreateContextSeries_plt(
          a1[1], v15, *((unsigned int*)a1 + 14));
      *a2 = v15;
    }
    v13 = 0;
    SdkRoutine_868c50(v14);
  }
  else {
    return 6382;
  }
  return v10;
}

#pragma GCC visibility pop
