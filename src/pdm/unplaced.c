#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_am_GetApplicationFunctions_plt(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_fs_detail_IsEnabledAccessLog_plt_85a3e0(void);
__int64 nn_fs_detail_IsEnabledAccessLog_plt_85a3e0_alt1(_QWORD, _QWORD) __asm__(
    "nn_fs_detail_IsEnabledAccessLog_plt_85a3e0");
__int64 nn_fs_detail_IsEnabledHandleAccessLog_plt_85a9a0(_QWORD);
__int64 nn_fs_detail_OutputAccessLog_plt_85a860(_QWORD, _QWORD, _QWORD, _QWORD,
                                                _QWORD, _QWORD);
__int64 nn_fs_detail_OutputAccessLog_plt_85a860_alt1(
    _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, const char*,
    ...) __asm__("nn_fs_detail_OutputAccessLog_plt_85a860");
__int64 nn_os_GetSystemTick_plt(_QWORD);
extern char SdkData_bbbd5c;
__int64 nn_pdm_QueryApplicationPlayStatistics_5a1920(__int64 a1, __int64 a2,
                                                     unsigned int a3);
__int64 nn_pdm_QueryApplicationPlayStatistics_5a1a10(__int64 a1, __int64 a2,
                                                     __int64 a3, int a4);

__int64 nn_pdm_QueryApplicationPlayStatistics_5a1920(__int64 a1, __int64 a2,
                                                     unsigned int a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  __int64 v14;
  __int64 v15;
  int v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned int v27;
  __int64 v28;
  unsigned int v29;
  __int64 v30;
  _QWORD v31[2];
  _QWORD v32[4];
  unsigned int v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  unsigned int v38;
  _QWORD v39[2];
  _QWORD v40[2];
  __int64 vars0;

  v4 = a3;
  v38 = 0;
  v7 = nn_fs_detail_IsEnabledAccessLog_plt_85a3e0();
  if ((v7 & 1) != 0 &&
      ((v7 = nn_fs_detail_IsEnabledHandleAccessLog_plt_85a9a0(0)) & 1) != 0) {
    v3 = nn_os_GetSystemTick_plt(v7);
    v8 = nn_am_GetApplicationFunctions_plt(v3);
    v40[0] = a1;
    v40[1] = (int)v4;
    v39[0] = a2;
    v39[1] = (int)v4;
    v9 = (*(__int64 (**)(__int64, unsigned int*, _QWORD*, _QWORD*))(
        *(_QWORD*)v8 + 344LL))(v8, &v38, v40, v39);
    a2 = (unsigned int)v9;
    v10 = nn_os_GetSystemTick_plt(v9);
    nn_fs_detail_OutputAccessLog_plt_85a860((unsigned int)a2, v3, v10,
                                            "QueryApplicationPlayStatistics", 0,
                                            &SdkData_bbbd5c);
    v11 = a2;
  }
  else {
    v12 = nn_am_GetApplicationFunctions_plt(v7);
    v40[0] = a1;
    v40[1] = (int)v4;
    v39[0] = a2;
    v39[1] = (int)v4;
    v11 = (*(__int64 (**)(__int64, unsigned int*, _QWORD*, _QWORD*))(
        *(_QWORD*)v12 + 344LL))(v12, &v38, v40, v39);
  }
  LODWORD(v40[0]) = v11;
  if (v11 == 0) {
    return v38;
  }
  v14 = nn_diag_detail_AbortImpl_plt_858db0(v40);
  v32[2] = &vars0;
  v32[3] = v15;
  v34 = v3;
  v35 = v4;
  v36 = a1;
  v37 = a2;
  v17 = v16;
  v19 = v18;
  v21 = v20;
  v22 = v14;
  v33 = 0;
  v23 = nn_fs_detail_IsEnabledAccessLog_plt_85a3e0();
  if ((v23 & 1) != 0 &&
      ((v23 = nn_fs_detail_IsEnabledHandleAccessLog_plt_85a9a0(0)) & 1) != 0) {
    v24 = nn_os_GetSystemTick_plt(v23);
    v25 = nn_am_GetApplicationFunctions_plt(v24);
    v32[0] = v22;
    v32[1] = v17;
    v31[0] = v19;
    v31[1] = v17;
    v26 = (*(__int64 (**)(__int64, unsigned int*, _QWORD*, __int64, _QWORD*))(
        *(_QWORD*)v25 + 352LL))(v25, &v33, v32, v21, v31);
    v27 = v26;
    v28 = nn_os_GetSystemTick_plt(v26);
    nn_fs_detail_OutputAccessLog_plt_85a860(
        v27, v24, v28, "QueryApplicationPlayStatistics", 0, &SdkData_bbbd5c);
    v29 = v27;
  }
  else {
    v30 = nn_am_GetApplicationFunctions_plt(v23);
    v32[0] = v22;
    v32[1] = v17;
    v31[0] = v19;
    v31[1] = v17;
    v29 = (*(__int64 (**)(__int64, unsigned int*, _QWORD*, __int64, _QWORD*))(
        *(_QWORD*)v30 + 352LL))(v30, &v33, v32, v21, v31);
  }
  LODWORD(v32[0]) = v29;
  if (v29 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(v32);
    __udf(0);
  }
  return v33;
}

__int64 nn_pdm_QueryApplicationPlayStatistics_5a1a10(__int64 a1, __int64 a2,
                                                     __int64 a3, int a4)
{
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  __int64 v13;
  unsigned int v14;
  __int64 v15;
  _QWORD v17[2];
  _QWORD v18[2];
  unsigned int v19;

  v19 = 0;
  v8 = nn_fs_detail_IsEnabledAccessLog_plt_85a3e0_alt1(a1, a2);
  if ((v8 & 1) != 0 &&
      ((v8 = nn_fs_detail_IsEnabledHandleAccessLog_plt_85a9a0(0)) & 1) != 0) {
    v9 = nn_os_GetSystemTick_plt(v8);
    v10 = nn_am_GetApplicationFunctions_plt(v9);
    v18[0] = a1;
    v18[1] = a4;
    v17[0] = a3;
    v17[1] = a4;
    v11 = (*(__int64 (**)(__int64, unsigned int*, _QWORD*, __int64, _QWORD*))(
        *(_QWORD*)v10 + 352LL))(v10, &v19, v18, a2, v17);
    v12 = v11;
    v13 = nn_os_GetSystemTick_plt(v11);
    nn_fs_detail_OutputAccessLog_plt_85a860_alt1(
        v12, v9, v13, "QueryApplicationPlayStatistics", 0, &SdkData_bbbd5c);
    v14 = v12;
  }
  else {
    v15 = nn_am_GetApplicationFunctions_plt(v8);
    v18[0] = a1;
    v18[1] = a4;
    v17[0] = a3;
    v17[1] = a4;
    v14 = (*(__int64 (**)(__int64, unsigned int*, _QWORD*, __int64, _QWORD*))(
        *(_QWORD*)v15 + 352LL))(v15, &v19, v18, a2, v17);
  }
  LODWORD(v18[0]) = v14;
  if (v14 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(v18);
  }
  return v19;
}

#pragma GCC visibility pop
