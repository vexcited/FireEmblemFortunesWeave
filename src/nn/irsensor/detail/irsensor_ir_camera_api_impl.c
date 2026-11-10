#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 irsensor_ir_camera_api_73d400_alt1(
    _QWORD, _QWORD, _QWORD, _QWORD) __asm__("irsensor_ir_camera_api_73d400");
__int64 irsensor_ir_camera_api_73db40_alt1(
    _QWORD, _QWORD, _QWORD, _QWORD) __asm__("irsensor_ir_camera_api_73db40");
__int64 irsensor_ir_camera_api_73e140_alt1(
    _QWORD, _QWORD, _QWORD, _QWORD) __asm__("irsensor_ir_camera_api_73e140");
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_irsensor_detail_CheckInternalStatus_plt(_QWORD);
__int64 nn_irsensor_detail_CheckStatus_plt(_QWORD, _QWORD);
__int64 nn_irsensor_detail_GetAppletResourceUserId_plt(void);
__int64 nn_irsensor_detail_GetClusteringProcessorStates_plt(_QWORD, _QWORD,
                                                            _QWORD, _QWORD);
__int64 nn_irsensor_detail_GetMomentProcessorStates_plt(_QWORD, _QWORD, _QWORD,
                                                        _QWORD);
__int64 nn_irsensor_detail_GetSessionManager_plt(_QWORD);
__int64 nn_irsensor_detail_GetSessionManager_plt_alt1(void) __asm__(
    "nn_irsensor_detail_GetSessionManager_plt");
__int64
nn_irsensor_detail_IrSensorSession_AttachSharedMemoryIfNotMapped_plt(void);
__int64 nn_irsensor_detail_IrSensorSession_GetClusteringLifo_plt(_QWORD,
                                                                 _QWORD);
__int64
    nn_irsensor_detail_IrSensorSession_GetClusteringProcessorStateDefault_plt(
        _QWORD, _QWORD, _QWORD);
__int64
    nn_irsensor_detail_IrSensorSession_GetImageTransferProcessorStateDefault_plt(
        _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_irsensor_detail_IrSensorSession_GetImageTransferState_plt(
    _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_irsensor_detail_IrSensorSession_GetMomentProcessorStateDefault_plt(
    _QWORD, _QWORD, _QWORD);
__int64 nn_irsensor_detail_IrSensorSession_GetPointingLifo_plt(_QWORD, _QWORD);
__int64 nn_irsensor_detail_IrSensorSession_GetPointingProcessorStateDefault_plt(
    _QWORD, _QWORD, _QWORD);
__int64 nn_irsensor_detail_IrSensorSession_GetTeraPluginLifo_plt(_QWORD,
                                                                 _QWORD);
__int64
    nn_irsensor_detail_IrSensorSession_GetTeraPluginProcessorStateDefault_plt(
        _QWORD, _QWORD, _QWORD);
__int64 nn_irsensor_detail_IrSensorSession_IsAppletForeground_plt(_QWORD);
__int64 nn_irsensor_detail_IrSensorSession_RunPointingProcessor_plt(_QWORD,
                                                                    _QWORD,
                                                                    _QWORD);
__int64 nn_irsensor_detail_SessionManager_GetSession_plt(_QWORD, _QWORD);
extern __int64 (*nn_os_detail_RemoveNativeWaitHolder_ptr[])();
void __attribute__((noreturn)) nn_sf_cmif_client_2b2f80(void);
__int64 nn_irsensor_detail_GetMomentProcessorState(__int64 a1, __int64 a2);
__int64 irsensor_ir_camera_api_73cec0(__int64 a1, __int64 a2, signed int a3,
                                      unsigned int a4);
__int64 nn_irsensor_detail_GetClusteringProcessorState(__int64 a1, __int64 a2);
__int64 nn_irsensor_detail_GetClusteringProcessorStates(__int64 a1, _DWORD* a2,
                                                        int a3, __int64 a4);
__int64 irsensor_ir_camera_api_73d400(__int64 a1, __int64 a2, signed int a3,
                                      unsigned int a4);
__int64 nn_irsensor_detail_GetImageTransferProcessorState(__int64 a1,
                                                          __int64 a2,
                                                          __int64 a3,
                                                          __int64 a4);
__int64 nn_irsensor_detail_GetPointingProcessorStates(__int64 a1, _DWORD* a2,
                                                      int a3, __int64 a4);
__int64 irsensor_ir_camera_api_73db40(__int64 a1, _QWORD* a2, signed int a3,
                                      unsigned int a4);
__int64 nn_irsensor_detail_GetTeraPluginProcessorStates(__int64 a1, int* a2,
                                                        int a3, __int64 a4,
                                                        int a5, int a6,
                                                        __int64 a7);
__int64 irsensor_ir_camera_api_73e140(__int64 a1, __int64 a2, int a3,
                                      __int64 a4, unsigned int a5);

__int64 nn_irsensor_detail_GetMomentProcessorState(__int64 a1, __int64 a2)
{
  unsigned int v4;
  __int64 result;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;

  v10 = 0;
  v4 = nn_irsensor_detail_GetMomentProcessorStates_plt(a1, &v10, 1, a2);
  result = 0;
  if (v4 != 0) {
    v6 = v4;
    v7 = nn_irsensor_detail_GetSessionManager_plt(0);
    v9 = nn_irsensor_detail_GetAppletResourceUserId_plt();
    v8 = nn_irsensor_detail_SessionManager_GetSession_plt(v7, &v9);
    if (v8 != 0) {
      nn_irsensor_detail_IrSensorSession_GetMomentProcessorStateDefault_plt(
          v8, a1, a2);
      return v6;
    }
    else {
      return 104653;
    }
  }
  return result;
}

__int64 irsensor_ir_camera_api_73cec0(__int64 a1, __int64 a2, signed int a3,
                                      unsigned int a4)
{
  __int64 v4;
  __int64 v6;
  unsigned __int64 v8;
  unsigned __int64 v9;
  signed int v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned int v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  unsigned int v28;
  bool v29;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;

  v4 = a4 - 5LL;
  v6 = a3;
  v34 = a2 + 1200;
  v35 = a2 + 600;
  v32 = a2 + 2400;
  v33 = a2 + 1800;
  v31 = a2 + 3000;
  v36 = v4;
  v37 = a1 - 584;
  do {
    v8 = atomic_load((unsigned __int64*)a1);
    v9 = atomic_load((unsigned __int64*)a1);
    v10 = atomic_load((unsigned int*)(a1 + 8));
    v11 = v4 + v9;
    v12 = v8 - v6;
    v13 = v9 - v10;
    if ((__int64)(v13 - (v4 + v9)) > 0) {
      v11 = v13;
    }
    if ((int)v12 - (int)v11 <= 0) {
      v14 = v11;
    }
    else {
      v14 = v12;
    }
    if (a3 >= (int)((v9 - v14) & ~(unsigned int)((__int64)(v9 - v14) >> 63))) {
      v15 = (v9 - v14) & ~(unsigned int)((__int64)(v9 - v14) >> 63);
    }
    else {
      v15 = a3;
    }
    if (v15 == 0) {
      break;
    }
    v16 = v14 + (int)v15;
    v17 = v14 % 6;
    v18 = (v16 - 1) / 6;
    v19 = (v16 - 1) % 6;
    if (v19 >= v14 % 6) {
      v24 = v16 - 6 * v18;
      v25 = a2;
      v26 = v37 + 600 * v16 - 3600 * v18;
      do {
        memcpy_plt(v25, v26, 600);
        --v24;
        v26 -= 600;
        v25 += 600;
      } while (v24 > v17);
    }
    else if (v19 + 1 < v17) {
      v20 = v6;
      if ((((_BYTE)v14 + (_BYTE)v15 - 6 * (_BYTE)v18) & 7) != 0) {
        v21 = -(__int64)(((_BYTE)v14 + (_BYTE)v15 - 6 * (_BYTE)v18) & 7);
        v22 = a2;
        v23 = v37 + 600 * (v14 + (int)v15) - 3600 * v18;
        do {
          memcpy_plt(v22, v23, 600);
          v23 -= 600;
          v22 += 600;
          v29 = __CFADD__(v21++, 1);
        } while (!v29);
      }
      memcpy_plt(v35 + 600 * v19, a1 + 3016, 600);
      v6 = v20;
      v4 = v36;
      if (v17 <= 4) {
        memcpy_plt(v34 + 600 * v19, a1 + 2416, 600);
        if (v17 != 4) {
          memcpy_plt(v33 + 600 * v19, a1 + 1816, 600);
          if (v17 <= 2) {
            memcpy_plt(v32 + 600 * v19, a1 + 1216, 600);
            if (v17 != 2) {
              memcpy_plt(v31 + 600 * v19, a1 + 616, 600);
            }
          }
        }
      }
    }
    v27 = atomic_load((unsigned __int64*)a1);
    v28 = atomic_load((unsigned int*)(a1 + 8));
    v29 = (__int64)(v27 - v14) >= 1 && v28 >= v15;
  } while (!v29 || (__int64)(v14 - v27 + 6) < 1);
  return v15;
}

__int64 nn_irsensor_detail_GetClusteringProcessorState(__int64 a1, __int64 a2)
{
  __int64 result;
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _BYTE v9[4];

  result = nn_irsensor_detail_GetClusteringProcessorStates_plt(a1, v9, 1, a2);
  if ((_DWORD)result != 0) {
    v5 = result;
    v6 = nn_irsensor_detail_GetSessionManager_plt_alt1();
    v8 = nn_irsensor_detail_GetAppletResourceUserId_plt();
    v7 = nn_irsensor_detail_SessionManager_GetSession_plt(v6, &v8);
    if (v7 != 0) {
      nn_irsensor_detail_IrSensorSession_GetClusteringProcessorStateDefault_plt(
          v7, a1, a2);
      return v5;
    }
    else {
      return 104653;
    }
  }
  return result;
}

__int64 nn_irsensor_detail_GetClusteringProcessorStates(__int64 a1, _DWORD* a2,
                                                        int a3, __int64 a4)
{
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 result;
  __int64 v12;
  __int64 v13;
  int v14;
  unsigned __int16 v15;
  __int64 v16;

  v8 = nn_irsensor_detail_GetSessionManager_plt(a1);
  v16 = nn_irsensor_detail_GetAppletResourceUserId_plt();
  v9 = nn_irsensor_detail_SessionManager_GetSession_plt(v8, &v16);
  if (v9 == 0) {
    v15 = -26419;
    return v15 | 0x10000u;
  }
  v10 = v9;
  nn_irsensor_detail_IrSensorSession_AttachSharedMemoryIfNotMapped_plt();
  *a2 = 0;
  nn_irsensor_detail_IrSensorSession_GetClusteringProcessorStateDefault_plt(
      v10, a1, a4);
  if ((nn_irsensor_detail_IrSensorSession_IsAppletForeground_plt(v10) & 1) ==
      0) {
    v15 = 16589;
    return v15 | 0x10000u;
  }
  result = nn_irsensor_detail_CheckInternalStatus_plt(a4);
  if ((_DWORD)result == 0) {
    v12 = nn_irsensor_detail_IrSensorSession_GetClusteringLifo_plt(v10, a4);
    result = 82125;
    if (v12 != 0) {
      if (a3 >= 5) {
        v13 = 5;
      }
      else {
        v13 = (unsigned int)a3;
      }
      v14 = irsensor_ir_camera_api_73d400_alt1(v12, a1, v13, 0);
      result = 0;
      *a2 = v14;
      if (v14 == 0) {
        return nn_irsensor_detail_CheckStatus_plt(82125, a4);
      }
    }
  }
  return result;
}

__int64 irsensor_ir_camera_api_73d400(__int64 a1, __int64 a2, signed int a3,
                                      unsigned int a4)
{
  __int64 v4;
  __int64 v6;
  unsigned __int64 v8;
  unsigned __int64 v9;
  signed int v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned int v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  unsigned int v28;
  bool v29;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;

  v4 = a4 - 5LL;
  v6 = a3;
  v34 = a2 + 816;
  v35 = a2 + 408;
  v32 = a2 + 1632;
  v33 = a2 + 1224;
  v31 = a2 + 2040;
  v36 = v4;
  v37 = a1 - 392;
  do {
    v8 = atomic_load((unsigned __int64*)a1);
    v9 = atomic_load((unsigned __int64*)a1);
    v10 = atomic_load((unsigned int*)(a1 + 8));
    v11 = v4 + v9;
    v12 = v8 - v6;
    v13 = v9 - v10;
    if ((__int64)(v13 - (v4 + v9)) > 0) {
      v11 = v13;
    }
    if ((int)v12 - (int)v11 <= 0) {
      v14 = v11;
    }
    else {
      v14 = v12;
    }
    if (a3 >= (int)((v9 - v14) & ~(unsigned int)((__int64)(v9 - v14) >> 63))) {
      v15 = (v9 - v14) & ~(unsigned int)((__int64)(v9 - v14) >> 63);
    }
    else {
      v15 = a3;
    }
    if (v15 == 0) {
      break;
    }
    v16 = v14 + (int)v15;
    v17 = v14 % 6;
    v18 = (v16 - 1) / 6;
    v19 = (v16 - 1) % 6;
    if (v19 >= v14 % 6) {
      v24 = v16 - 6 * v18;
      v25 = a2;
      v26 = v37 + 408 * v16 - 2448 * v18;
      do {
        memcpy_plt(v25, v26, 408);
        --v24;
        v26 -= 408;
        v25 += 408;
      } while (v24 > v17);
    }
    else if (v19 + 1 < v17) {
      v20 = v6;
      if ((((_BYTE)v14 + (_BYTE)v15 - 6 * (_BYTE)v18) & 7) != 0) {
        v21 = -(__int64)(((_BYTE)v14 + (_BYTE)v15 - 6 * (_BYTE)v18) & 7);
        v22 = a2;
        v23 = v37 + 408 * (v14 + (int)v15) - 2448 * v18;
        do {
          memcpy_plt(v22, v23, 408);
          v23 -= 408;
          v22 += 408;
          v29 = __CFADD__(v21++, 1);
        } while (!v29);
      }
      memcpy_plt(v35 + 408 * v19, a1 + 2056, 408);
      v6 = v20;
      v4 = v36;
      if (v17 <= 4) {
        memcpy_plt(v34 + 408 * v19, a1 + 1648, 408);
        if (v17 != 4) {
          memcpy_plt(v33 + 408 * v19, a1 + 1240, 408);
          if (v17 <= 2) {
            memcpy_plt(v32 + 408 * v19, a1 + 832, 408);
            if (v17 != 2) {
              memcpy_plt(v31 + 408 * v19, a1 + 424, 408);
            }
          }
        }
      }
    }
    v27 = atomic_load((unsigned __int64*)a1);
    v28 = atomic_load((unsigned int*)(a1 + 8));
    v29 = (__int64)(v27 - v14) >= 1 && v28 >= v15;
  } while (!v29 || (__int64)(v14 - v27 + 6) < 1);
  return v15;
}

__int64 nn_irsensor_detail_GetImageTransferProcessorState(__int64 a1,
                                                          __int64 a2,
                                                          __int64 a3,
                                                          __int64 a4)
{
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned int v11;
  unsigned int v12;
  unsigned int v13;
  unsigned int v14;
  _BOOL4 v16;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  int v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned int v30;
  __int64 v31;
  __int64 vars0;

  v8 = nn_irsensor_detail_GetSessionManager_plt(a1);
  v31 = nn_irsensor_detail_GetAppletResourceUserId_plt();
  v9 = nn_irsensor_detail_SessionManager_GetSession_plt(v8, &v31);
  if (v9 == 0) {
    return 104653;
  }
  v10 = v9;
  v11 = 82125;
  nn_irsensor_detail_IrSensorSession_AttachSharedMemoryIfNotMapped_plt();
  if ((nn_irsensor_detail_IrSensorSession_IsAppletForeground_plt(v10) & 1) ==
      0) {
    return v11;
  }
  v12 = nn_irsensor_detail_CheckInternalStatus_plt(a4);
  if (v12 == 0) {
    v13 = nn_irsensor_detail_IrSensorSession_GetImageTransferState_plt(
        v10, a4, a1, a2, a3);
    if (v13 == 0) {
      return 0;
    }
    v14 = v13;
    v12 = nn_irsensor_detail_CheckStatus_plt(82125, a4);
    if (v12 == 0) {
      v16 = (v14 & 0x1FF) == 0xCD && ((v14 >> 9) & 0x1FFE) - 110 < 0xA;
      if ((v14 & 0x3FFFFF) == 0xF0CD || v16) {
        nn_irsensor_detail_IrSensorSession_GetImageTransferProcessorStateDefault_plt(
            v10, a1, a2, a3, a4);
        if ((v14 & 0x3FFECD) == 0xF0CD) {
          return 82125;
        }
        else {
          return v14;
        }
      }
      v30 = v14;
      v18 = nn_diag_detail_AbortImpl_plt_858db0(&v30);
      v26 = &vars0;
      v27 = v19;
      v28 = a4;
      v29 = 82125;
      v20 = v18;
      v24 = 0xF0014000000000LL;
      v25 = 1769480;
      v21 = nn_irsensor_detail_GetSessionManager_plt(v18);
      v23 = nn_irsensor_detail_GetAppletResourceUserId_plt();
      v22 = nn_irsensor_detail_SessionManager_GetSession_plt(v21, &v23);
      if (v22 != 0) {
        return nn_irsensor_detail_IrSensorSession_RunPointingProcessor_plt(
            v22, v20, &v24);
      }
      else {
        return 104653;
      }
    }
  }
  return v12;
}

__int64 nn_irsensor_detail_GetPointingProcessorStates(__int64 a1, _DWORD* a2,
                                                      int a3, __int64 a4)
{
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 result;
  __int64 v12;
  __int64 v13;
  int v14;
  unsigned __int16 v15;
  __int64 v16;

  v8 = nn_irsensor_detail_GetSessionManager_plt_alt1();
  v16 = nn_irsensor_detail_GetAppletResourceUserId_plt();
  v9 = nn_irsensor_detail_SessionManager_GetSession_plt(v8, &v16);
  if (v9 == 0) {
    v15 = -26419;
    return v15 | 0x10000u;
  }
  v10 = v9;
  nn_irsensor_detail_IrSensorSession_AttachSharedMemoryIfNotMapped_plt();
  *a2 = 0;
  nn_irsensor_detail_IrSensorSession_GetPointingProcessorStateDefault_plt(
      v10, a1, a4);
  if ((nn_irsensor_detail_IrSensorSession_IsAppletForeground_plt(v10) & 1) ==
      0) {
    v15 = 16589;
    return v15 | 0x10000u;
  }
  result = nn_irsensor_detail_CheckInternalStatus_plt(a4);
  if ((_DWORD)result == 0) {
    v12 = nn_irsensor_detail_IrSensorSession_GetPointingLifo_plt(v10, a4);
    result = 82125;
    if (v12 != 0) {
      if (a3 >= 6) {
        v13 = 6;
      }
      else {
        v13 = (unsigned int)a3;
      }
      v14 = irsensor_ir_camera_api_73db40_alt1(v12, a1, v13, 0);
      result = 0;
      *a2 = v14;
      if (v14 == 0) {
        return nn_irsensor_detail_CheckStatus_plt(82125, a4);
      }
    }
  }
  return result;
}

__int64 irsensor_ir_camera_api_73db40(__int64 a1, _QWORD* a2, signed int a3,
                                      unsigned int a4)
{
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  signed int v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  signed int v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  _QWORD* v19;
  _QWORD* v20;
  __int64 v21;
  bool v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  _QWORD* v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  _QWORD* v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  _QWORD* v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  _QWORD* v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  _QWORD* v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  _QWORD* v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  unsigned __int64 v99;
  _QWORD* v100;
  _QWORD* v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  unsigned __int64 v113;
  unsigned int v114;

  v4 = a4 - 6LL;
  v5 = a1 - 96;
  do {
    v6 = atomic_load((unsigned __int64*)a1);
    v7 = atomic_load((unsigned __int64*)a1);
    v8 = atomic_load((unsigned int*)(a1 + 8));
    v9 = v4 + v7;
    v10 = v6 - a3;
    v11 = v7 - v8;
    if ((__int64)(v11 - (v4 + v7)) > 0) {
      v9 = v11;
    }
    if ((int)v10 - (int)v9 > 0) {
      v9 = v10;
    }
    v12 = (v7 - v9) & ~(unsigned int)((__int64)(v7 - v9) >> 63);
    if (a3 < v12) {
      v12 = a3;
    }
    if (v12 == 0) {
      break;
    }
    v13 = v9 + v12;
    v14 = ((v13 - 1) * (unsigned __int128)0x2492492492492493uLL) >> 64;
    v15 = v9 % 7;
    v16 = (v14 + ((v13 - 1 - v14) >> 1)) >> 2;
    v17 = v13 - 1 - 7 * v16;
    if (v17 >= v9 % 7) {
      v99 = v13 - 7 * v16;
      v100 = a2;
      v101 = (_QWORD*)(v5 + 112 * v13 - 784 * v16);
      do {
        v102 = v101[1];
        --v99;
        *v100 = *v101;
        v100[1] = v102;
        v103 = v101[2];
        v104 = v101[3];
        v105 = v101[5];
        v100[4] = v101[4];
        v100[5] = v105;
        v100[2] = v103;
        v100[3] = v104;
        v106 = v101[6];
        v107 = v101[7];
        v108 = v101[9];
        v100[8] = v101[8];
        v100[9] = v108;
        v100[6] = v106;
        v100[7] = v107;
        v109 = v101[10];
        v110 = v101[11];
        v111 = v101[12];
        v112 = v101[13];
        v101 -= 14;
        v100[12] = v111;
        v100[13] = v112;
        v100[10] = v109;
        v100[11] = v110;
        v100 += 14;
      } while (v99 > v15);
    }
    else if (v13 - 7 * v16 < v15) {
      if ((((_BYTE)v9 + (_BYTE)v12 - 7 * (_BYTE)v16) & 7) != 0) {
        v18 = -(__int64)(((_BYTE)v9 + (_BYTE)v12 - 7 * (_BYTE)v16) & 7);
        v19 = a2;
        v20 = (_QWORD*)(v5 + 112 * (v9 + v12) - 784 * v16);
        do {
          v21 = v20[1];
          v22 = __CFADD__(v18++, 1);
          *v19 = *v20;
          v19[1] = v21;
          v23 = v20[2];
          v24 = v20[3];
          v25 = v20[5];
          v19[4] = v20[4];
          v19[5] = v25;
          v19[2] = v23;
          v19[3] = v24;
          v26 = v20[6];
          v27 = v20[7];
          v28 = v20[9];
          v19[8] = v20[8];
          v19[9] = v28;
          v19[6] = v26;
          v19[7] = v27;
          v29 = v20[10];
          v30 = v20[11];
          v31 = v20[12];
          v32 = v20[13];
          v20 -= 14;
          v19[12] = v31;
          v19[13] = v32;
          v19[10] = v29;
          v19[11] = v30;
          v19 += 14;
        } while (!v22);
      }
      v33 = *(_QWORD*)(a1 + 696);
      v34 = &a2[14 * v17 + 14];
      *v34 = *(_QWORD*)(a1 + 688);
      v34[1] = v33;
      v35 = *(_QWORD*)(a1 + 704);
      v36 = *(_QWORD*)(a1 + 712);
      v37 = *(_QWORD*)(a1 + 728);
      v34[4] = *(_QWORD*)(a1 + 720);
      v34[5] = v37;
      v34[2] = v35;
      v34[3] = v36;
      v38 = *(_QWORD*)(a1 + 736);
      v39 = *(_QWORD*)(a1 + 744);
      v40 = *(_QWORD*)(a1 + 760);
      v34[8] = *(_QWORD*)(a1 + 752);
      v34[9] = v40;
      v34[6] = v38;
      v34[7] = v39;
      v41 = *(_QWORD*)(a1 + 768);
      v42 = *(_QWORD*)(a1 + 776);
      v43 = *(_QWORD*)(a1 + 792);
      v34[12] = *(_QWORD*)(a1 + 784);
      v34[13] = v43;
      v34[10] = v41;
      v34[11] = v42;
      if (v15 <= 5) {
        v44 = *(_QWORD*)(a1 + 584);
        v45 = &a2[14 * v17 + 28];
        *v45 = *(_QWORD*)(a1 + 576);
        v45[1] = v44;
        v46 = *(_QWORD*)(a1 + 592);
        v47 = *(_QWORD*)(a1 + 600);
        v48 = *(_QWORD*)(a1 + 616);
        v45[4] = *(_QWORD*)(a1 + 608);
        v45[5] = v48;
        v45[2] = v46;
        v45[3] = v47;
        v49 = *(_QWORD*)(a1 + 624);
        v50 = *(_QWORD*)(a1 + 632);
        v51 = *(_QWORD*)(a1 + 648);
        v45[8] = *(_QWORD*)(a1 + 640);
        v45[9] = v51;
        v45[6] = v49;
        v45[7] = v50;
        v52 = *(_QWORD*)(a1 + 656);
        v53 = *(_QWORD*)(a1 + 664);
        v54 = *(_QWORD*)(a1 + 680);
        v45[12] = *(_QWORD*)(a1 + 672);
        v45[13] = v54;
        v45[10] = v52;
        v45[11] = v53;
        if (v15 != 5) {
          v55 = *(_QWORD*)(a1 + 472);
          v56 = &a2[14 * v17 + 42];
          *v56 = *(_QWORD*)(a1 + 464);
          v56[1] = v55;
          v57 = *(_QWORD*)(a1 + 480);
          v58 = *(_QWORD*)(a1 + 488);
          v59 = *(_QWORD*)(a1 + 504);
          v56[4] = *(_QWORD*)(a1 + 496);
          v56[5] = v59;
          v56[2] = v57;
          v56[3] = v58;
          v60 = *(_QWORD*)(a1 + 512);
          v61 = *(_QWORD*)(a1 + 520);
          v62 = *(_QWORD*)(a1 + 536);
          v56[8] = *(_QWORD*)(a1 + 528);
          v56[9] = v62;
          v56[6] = v60;
          v56[7] = v61;
          v63 = *(_QWORD*)(a1 + 544);
          v64 = *(_QWORD*)(a1 + 552);
          v65 = *(_QWORD*)(a1 + 568);
          v56[12] = *(_QWORD*)(a1 + 560);
          v56[13] = v65;
          v56[10] = v63;
          v56[11] = v64;
          if (v15 <= 3) {
            v66 = *(_QWORD*)(a1 + 360);
            v67 = &a2[14 * v17 + 56];
            *v67 = *(_QWORD*)(a1 + 352);
            v67[1] = v66;
            v68 = *(_QWORD*)(a1 + 368);
            v69 = *(_QWORD*)(a1 + 376);
            v70 = *(_QWORD*)(a1 + 392);
            v67[4] = *(_QWORD*)(a1 + 384);
            v67[5] = v70;
            v67[2] = v68;
            v67[3] = v69;
            v71 = *(_QWORD*)(a1 + 400);
            v72 = *(_QWORD*)(a1 + 408);
            v73 = *(_QWORD*)(a1 + 424);
            v67[8] = *(_QWORD*)(a1 + 416);
            v67[9] = v73;
            v67[6] = v71;
            v67[7] = v72;
            v74 = *(_QWORD*)(a1 + 432);
            v75 = *(_QWORD*)(a1 + 440);
            v76 = *(_QWORD*)(a1 + 456);
            v67[12] = *(_QWORD*)(a1 + 448);
            v67[13] = v76;
            v67[10] = v74;
            v67[11] = v75;
            if (v15 != 3) {
              v77 = *(_QWORD*)(a1 + 248);
              v78 = &a2[14 * v17 + 70];
              *v78 = *(_QWORD*)(a1 + 240);
              v78[1] = v77;
              v79 = *(_QWORD*)(a1 + 256);
              v80 = *(_QWORD*)(a1 + 264);
              v81 = *(_QWORD*)(a1 + 280);
              v78[4] = *(_QWORD*)(a1 + 272);
              v78[5] = v81;
              v78[2] = v79;
              v78[3] = v80;
              v82 = *(_QWORD*)(a1 + 288);
              v83 = *(_QWORD*)(a1 + 296);
              v84 = *(_QWORD*)(a1 + 312);
              v78[8] = *(_QWORD*)(a1 + 304);
              v78[9] = v84;
              v78[6] = v82;
              v78[7] = v83;
              v85 = *(_QWORD*)(a1 + 320);
              v86 = *(_QWORD*)(a1 + 328);
              v87 = *(_QWORD*)(a1 + 344);
              v78[12] = *(_QWORD*)(a1 + 336);
              v78[13] = v87;
              v78[10] = v85;
              v78[11] = v86;
              if (v15 <= 1) {
                v88 = *(_QWORD*)(a1 + 136);
                v89 = &a2[14 * v17 + 84];
                *v89 = *(_QWORD*)(a1 + 128);
                v89[1] = v88;
                v90 = *(_QWORD*)(a1 + 144);
                v91 = *(_QWORD*)(a1 + 152);
                v92 = *(_QWORD*)(a1 + 168);
                v89[4] = *(_QWORD*)(a1 + 160);
                v89[5] = v92;
                v89[2] = v90;
                v89[3] = v91;
                v93 = *(_QWORD*)(a1 + 176);
                v94 = *(_QWORD*)(a1 + 184);
                v95 = *(_QWORD*)(a1 + 200);
                v89[8] = *(_QWORD*)(a1 + 192);
                v89[9] = v95;
                v89[6] = v93;
                v89[7] = v94;
                v96 = *(_QWORD*)(a1 + 208);
                v97 = *(_QWORD*)(a1 + 216);
                v98 = *(_QWORD*)(a1 + 232);
                v89[12] = *(_QWORD*)(a1 + 224);
                v89[13] = v98;
                v89[10] = v96;
                v89[11] = v97;
              }
            }
          }
        }
      }
    }
    v113 = atomic_load((unsigned __int64*)a1);
    v114 = atomic_load((unsigned int*)(a1 + 8));
  } while ((__int64)(v113 - v9) < 1 || v114 < v12 ||
           (__int64)(v9 - v113 + 7) < 1);
  return (unsigned int)v12;
}

__int64 nn_irsensor_detail_GetTeraPluginProcessorStates(__int64 a1, int* a2,
                                                        int a3, __int64 a4,
                                                        int a5, int a6,
                                                        __int64 a7)
{
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned int v14;
  __int64 v15;
  __int64 v16;
  int v17;
  __int64 v18;
  _QWORD v20[4];
  _QWORD* v21;
  __int64 v22;
  int v23;
  int v24;
  __int64 v25;

  v25 = a4;
  v23 = a6;
  v24 = a5;
  v11 = nn_irsensor_detail_GetSessionManager_plt_alt1();
  v22 = nn_irsensor_detail_GetAppletResourceUserId_plt();
  v12 = nn_irsensor_detail_SessionManager_GetSession_plt(v11, &v22);
  if (v12 == 0) {
    return 104653;
  }
  v13 = v12;
  nn_irsensor_detail_IrSensorSession_AttachSharedMemoryIfNotMapped_plt();
  *a2 = 0;
  nn_irsensor_detail_IrSensorSession_GetTeraPluginProcessorStateDefault_plt(
      v13, a1, a7);
  if ((nn_irsensor_detail_IrSensorSession_IsAppletForeground_plt(v13) & 1) ==
      0) {
    return 82125;
  }
  v14 = nn_irsensor_detail_CheckInternalStatus_plt(a7);
  if (v14 == 0) {
    v15 = nn_irsensor_detail_IrSensorSession_GetTeraPluginLifo_plt(v13, a7);
    v14 = 82125;
    if (v15 != 0) {
      if (a3 >= 5) {
        v16 = 5;
      }
      else {
        v16 = (unsigned int)a3;
      }
      v20[0] = nn_os_detail_RemoveNativeWaitHolder_ptr;
      v20[1] = &v25;
      v21 = v20;
      v20[2] = &v24;
      v20[3] = &v23;
      v17 = irsensor_ir_camera_api_73e140_alt1(v15, a1, v16, v20);
      *a2 = v17;
      if (v21 == v20) {
        v18 = 32;
      }
      else {
        if (v21 == nullptr) {
          goto LABEL_13;
        }
        v18 = 40;
      }
      (*(void (**)(__int64))(*v21 + v18))((__int64)v21);
      v17 = *a2;
    LABEL_13:
      if (v17 != 0) {
        return 0;
      }
      else {
        return (unsigned int)nn_irsensor_detail_CheckStatus_plt(82125, a7);
      }
    }
  }
  return v14;
}

__int64 irsensor_ir_camera_api_73e140(__int64 a1, __int64 a2, int a3,
                                      __int64 a4, unsigned int a5)
{
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  signed int v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  int v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned int v21;
  __int64 v22;
  __int64 v23;
  __int64 v26;
  unsigned __int64 v27;
  unsigned int v28;
  bool v29;
  unsigned __int64 v30;
  unsigned int v31;
  bool v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  signed int v37;
  unsigned __int64 v38;
  unsigned int v39;
  __int64 v41;
  _BYTE v44[328];

  v41 = a5 - 5LL;
  if (a3 <= 0) {
    do {
      v33 = atomic_load((unsigned __int64*)a1);
      v34 = atomic_load((unsigned __int64*)a1);
      v35 = v33 - 6;
      v36 = v41 + v34;
      v37 = atomic_load((unsigned int*)(a1 + 8));
      v38 = v34 - v37;
      if ((__int64)(v38 - (v41 + v34)) > 0) {
        v36 = v38;
      }
      if ((int)v35 - (int)v36 <= 0) {
        v35 = v36;
      }
      v39 = (v34 - v35) & ~(unsigned int)((__int64)(v34 - v35) >> 63);
      if (v39 == 0) {
        break;
      }
      v30 = atomic_load((unsigned __int64*)a1);
      v31 = atomic_load((unsigned int*)(a1 + 8));
      v32 = (__int64)(v30 - v35) >= 1 && v31 >= v39;
    } while (!v32 || (__int64)(v35 - v30 + 6) <= 0);
  }
  else {
    while (1) {
      v7 = atomic_load((unsigned __int64*)a1);
      v8 = atomic_load((unsigned __int64*)a1);
      v9 = v41 + v8;
      v10 = atomic_load((unsigned int*)(a1 + 8));
      v11 = v7 - 6;
      v12 = v8 - v10;
      if ((__int64)(v12 - (v41 + v8)) > 0) {
        v9 = v12;
      }
      v13 = (int)v11 - (int)v9 <= 0 ? v9 : v11;
      v14 = (v8 - v13) & ~((__int64)(v8 - v13) >> 63);
      if ((_DWORD)v14 == 0) {
        break;
      }
      v15 = 0;
      if ((int)v14 - 1LL >= 0) {
        v16 = (int)v14 - 1LL + v13;
        v17 = (int)v14 - 2LL;
        v18 = 320 * (v13 + (int)v14) - 304;
        do {
          v19 = v18 - 1920 * (v16 / 6);
          memcpy_plt(v44, a1 + v19, 320);
          v20 = atomic_load((unsigned __int64*)a1);
          v21 = atomic_load((unsigned int*)(a1 + 8));
          v22 = v20 - v13;
          v23 = v13 + 6 - v20;
          if (v22 < 1 || v21 < (unsigned int)v14 || v23 < 1) {
            break;
          }
          v26 = *(_QWORD*)(a4 + 32);
          if (v26 == 0) {
            nn_sf_cmif_client_2b2f80();
          }
          if (((*(__int64 (**)(__int64, _BYTE*))(*(_QWORD*)v26 + 48LL))(v26,
                                                                        v44) &
               1) != 0) {
            memcpy_plt(a2 + 320LL * v15++, a1 + v19, 320);
          }
          if (v17 < 0) {
            break;
          }
          --v16;
          --v17;
          v18 -= 320;
        } while (v15 < a3);
      }
      v27 = atomic_load((unsigned __int64*)a1);
      v28 = atomic_load((unsigned int*)(a1 + 8));
      v29 = (__int64)(v27 - v13) >= 1 && v28 >= (unsigned int)v14;
      if (v29 && (__int64)(v13 - v27 + 6) >= 1) {
        return (unsigned int)v15;
      }
    }
  }
  return 0;
}

#pragma GCC visibility pop
