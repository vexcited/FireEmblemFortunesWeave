#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 HeartRateCaptureState_HeartRateCaptureState_plt(_QWORD);
__int64 HeartRateDriver_GetCaptureState_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 HeartRateDriver_HeartRateDriver_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 HeartRateDriver_StartCapture_plt(_QWORD);
__int64 __cxa_guard_acquire_plt(_QWORD);
__int64 __cxa_guard_release_plt(_QWORD);
__int64 fw_rtld_RegisterCrtDestructor();
__int64 irsensor_ir_camera_api_73cec0(__int64, __int64, signed int,
                                      unsigned int);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 memset_plt(void* this_, void*, int);
__int64 memset_plt_alt1(void* this_, void*, int,
                        unsigned __int64) __asm__("memset_plt");
__int64 nerd_gillette_internal_otete_jaimev2_DecodeImageROK_plt(_QWORD, _QWORD,
                                                                _QWORD, _QWORD,
                                                                _QWORD);
__int64 nerd_gillette_internal_otete_jaimev2_DecodeIntensityROK_plt(_QWORD,
                                                                    _QWORD,
                                                                    _QWORD,
                                                                    _QWORD);
__int64 nerd_gillette_internal_otete_jaimev2_DecodePacketModeROK_plt(_QWORD,
                                                                     _QWORD,
                                                                     _QWORD,
                                                                     _QWORD);
__int64 nerd_gillette_internal_otete_plato_DecodePacketROK_plt(_QWORD, _QWORD,
                                                               _QWORD, _QWORD);
__int64 nn_detail_UnexpectedDefaultImpl_plt_857150(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_irsensor_GetTeraPluginProcessorStates_plt(_QWORD);
__int64 nn_irsensor_RunHandAnalysis_plt(_QWORD, _QWORD);
__int64 nn_irsensor_RunTeraPluginProcessor_plt(_QWORD, _QWORD);
__int64 nn_irsensor_detail_CheckInternalStatus_plt(_QWORD);
__int64 nn_irsensor_detail_CheckStatus_plt(_QWORD, _QWORD);
__int64 nn_irsensor_detail_GetAppletResourceUserId_plt(void);
__int64 nn_irsensor_detail_GetIrCameraHandlePlayerNumber_plt(_QWORD);
__int64 nn_irsensor_detail_GetPointingProcessorStates_plt(_QWORD, _QWORD,
                                                          _QWORD, _QWORD);
__int64 nn_irsensor_detail_GetSessionManager_plt(void);
__int64
nn_irsensor_detail_IrSensorSession_AttachSharedMemoryIfNotMapped_plt(void);
__int64 nn_irsensor_detail_IrSensorSession_GetMomentLifo_plt(_QWORD, _QWORD);
__int64 nn_irsensor_detail_IrSensorSession_IsAppletForeground_plt(_QWORD);
__int64 nn_irsensor_detail_SessionManager_GetSession_plt(_QWORD, _QWORD);
__int64 nn_lmem_AllocateFromExpHeap_plt_859a90(_QWORD, _QWORD);
__int64 nn_lmem_CreateExpHeap_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_os_InitializeMutex_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_os_LockMutex_plt(_QWORD);
__int64 nn_os_UnlockMutex_plt(_QWORD);
__int64 nn_sf_hipc_ConnectToHipcService_plt(_QWORD, _QWORD);
__int64 nn_sf_hipc_FinalizeHipcServiceResolution_plt(void);
__int64 nn_sf_hipc_InitializeHipcServiceResolution_plt(_QWORD);
extern _QWORD SdkData_10492f0[9];
extern _UNKNOWN SdkData_10513b0;
extern _UNKNOWN SdkData_ca6ac4;
extern _UNKNOWN SdkData_ea8de8;
extern _UNKNOWN SdkData_ea8e08;
extern __int64 SdkData_10513a8;
extern __int64 SdkData_e89208;
extern __int64 SdkData_e89218;
extern char SdkData_1049338;
extern char SdkData_10513a0;
extern char SdkData_10513a4;
extern void (*SdkData_e89200[20])();
extern void (*SdkData_e89210[18])();
__int64 nn_irsensor_detail_GetIrLedProcessorState(__int64 a1);
_QWORD* nn_irsensor_RunAdaptiveClusteringProcessor(__int64 a1, int* a2);
__int64 nn_irsensor_GetAdaptiveClusteringProcessorStates(__int64 a1, int* a2,
                                                         int a3);
__int64 nn_irsensor_GetPointingProcessorStates(__int64 a1, int* a2,
                                               unsigned int a3,
                                               unsigned __int64 a4);
__int64 nn_irsensor_GetHandAnalysisImageState(__int64 a1, int* a2, int a3);
__int64 nn_irsensor_RunPulseRateProcessor(__int64 a1, _QWORD* a2, _QWORD* a3);
__int64 nn_irsensor_GetPulseRateProcessorState(__int64 a1, __int64 a2);
__int64 nn_irsensor_ResetPulseRateProcessorState(__int64 a1);
__int64 nn_irsensor_detail_CreateIrSensorServerProxy(__int64 a1);
__int64 nn_irsensor_detail_CreateIrSensorSystemServerProxy(__int64* a1);

__int64 nn_irsensor_detail_GetIrLedProcessorState(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64 v7;
  int v8;
  unsigned __int16 v9;
  _QWORD v10[75];

  v2 = nn_irsensor_detail_GetSessionManager_plt();
  v10[0] = nn_irsensor_detail_GetAppletResourceUserId_plt();
  v3 = nn_irsensor_detail_SessionManager_GetSession_plt(v2, v10);
  if (v3 == 0) {
    v9 = -26419;
    return v9 | 0x10000u;
  }
  v4 = v3;
  nn_irsensor_detail_IrSensorSession_AttachSharedMemoryIfNotMapped_plt();
  if ((nn_irsensor_detail_IrSensorSession_IsAppletForeground_plt(v4) & 1) ==
      0) {
    v9 = 16589;
    return v9 | 0x10000u;
  }
  result = nn_irsensor_detail_CheckInternalStatus_plt(a1);
  if ((_DWORD)result == 0) {
    v7 = nn_irsensor_detail_IrSensorSession_GetMomentLifo_plt(v4, a1);
    result = 82125;
    if (v7 != 0) {
      memset_plt((void*)v10, nullptr, 600);
      v8 = irsensor_ir_camera_api_73cec0(v7, (__int64)v10, 1, 0);
      result = 0;
      if (v8 == 0) {
        return nn_irsensor_detail_CheckStatus_plt(82125, a1);
      }
    }
  }
  return result;
}

_QWORD* nn_irsensor_RunAdaptiveClusteringProcessor(__int64 a1, int* a2)
{
  int v2;
  int v3;
  char v4;
  unsigned __int8 v5;
  _QWORD* result;
  int v7;
  int v8;

  v2 = *a2;
  v3 = a2[1];
  v8 = 0;
  if (v2 == 1) {
    v4 = 16;
  }
  else {
    v4 = 15;
  }
  LOBYTE(v8) = v4;
  if (v3 != 0) {
    if (v3 == 1) {
      v5 = 3;
    }
    else {
      if (v3 != 2) {
      LABEL_13:
        result = (_QWORD*)nn_detail_UnexpectedDefaultImpl_plt_857150(a1);
        *result = 0;
        return result;
      }
      v5 = 8;
    }
    HIWORD(v8) = v5;
    BYTE1(v8) = 1;
    result = (_QWORD*)nn_irsensor_RunTeraPluginProcessor_plt(a1, &v8);
    v7 = (int)result;
    if ((_DWORD)result == 0) {
      return result;
    }
  LABEL_12:
    a1 = nn_diag_detail_AbortImpl_plt_858db0(&v7);
    goto LABEL_13;
  }
  BYTE1(v8) = 0;
  result = (_QWORD*)nn_irsensor_RunTeraPluginProcessor_plt(a1, &v8);
  v7 = (int)result;
  if ((_DWORD)result != 0) {
    goto LABEL_12;
  }
  return result;
}

__int64 nn_irsensor_GetAdaptiveClusteringProcessorStates(__int64 a1, int* a2,
                                                         int a3)
{

#pragma clang fp contract(off)
  __int64 v5;
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 i;
  __int64 v10;
  unsigned int v12;
  int v13;
  unsigned int v14;
  bool v15;
  int v16;
  char v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  int v23;
  int v24;
  float v25;
  char v26;
  int v27;
  int v28;
  char v29;
  int v30;
  int v31;
  char v32;
  float v33;
  char v34;
  float v35;
  char v36;
  char v37;
  int v38;
  int v39;
  char v40;
  float v41;
  int v42;
  int v43;
  int v44;
  int v45;
  float v46;
  __int64 v47;
  __int64 v48;
  _BYTE* v49;
  __int64 v50;
  _BYTE* v51;
  __int64 v52;
  int v53;
  int v54;
  struct {
    __int64 v55;
    char gap24_[8];
    int v56;
  } v55_;
  int v57;
  __int64 v58;
  struct {
    _BYTE v59[3];
    unsigned __int8 v60;
    int v61;
    int v62;
  } v59_;
  __int64 v63;

  if (a3 >= 5) {
    a3 = 5;
  }
  v5 = a1 + 544 * a3 - 320 * a3;
  result = nn_irsensor_GetTeraPluginProcessorStates_plt(v5);
  if ((_DWORD)result == 0) {
    if (*a2 < 1) {
      return 0;
    }
    v7 = a1 + 80;
    v8 = 0;
    for (i = a1;; i += 544) {
      memcpy_plt(&v55_.v55, v5 + 320 * v8, 320);
      v10 = a1 + 544 * v8;
      v58 = 0;
      memset_plt((void*)v59_.v59, nullptr, 764);
      *(_QWORD*)v10 = v55_.v55;
      *(_DWORD*)(v10 + 16) = v55_.v56;
      if ((nerd_gillette_internal_otete_plato_DecodePacketROK_plt(
               v59_.v59, &v57, 300, &v58) &
           1) == 0) {
        return 82125;
      }
      v12 = v59_.v59[1] - 1;
      if (v12 > 2) {
        return 82125;
      }
      v13 = v59_.v61;
      v14 = v59_.v60;
      v15 = v59_.v60 >= 0x20u;
      *(_BYTE*)(v10 + 25) = v59_.v59[2];
      v16 = v59_.v62;
      *(_DWORD*)(v10 + 20) = (unsigned __int8)v12;
      if (v15) {
        v17 = 32;
      }
      else {
        v17 = v14;
      }
      *(_BYTE*)(v10 + 24) = v17;
      *(_QWORD*)(v10 + 8) = 1000LL * (unsigned int)(100 * v16 * v13);
      if (v14 != 0) {
        if (v14 >= 8) {
          v20 = &v63;
          v21 = 0;
          v22 = v7;
          do {
            v23 = *((_DWORD*)v20 - 14);
            v24 = *((_DWORD*)v20 - 13);
            v25 = *((float*)v20 - 12);
            v21 -= 8;
            *(_BYTE*)(v22 - 36) = *((_BYTE*)v20 - 44);
            v26 = *((_BYTE*)v20 - 28);
            *(_DWORD*)(v22 - 48) = v23;
            *(_DWORD*)(v22 - 44) = v24;
            v27 = *((_DWORD*)v20 - 10);
            v28 = *((_DWORD*)v20 - 9);
            *(_BYTE*)(v22 - 20) = v26;
            v29 = *((_BYTE*)v20 - 12);
            *(_DWORD*)(v22 - 32) = v27;
            *(_DWORD*)(v22 - 28) = v28;
            v30 = *((_DWORD*)v20 - 6);
            v31 = *((_DWORD*)v20 - 5);
            *(_BYTE*)(v22 - 4) = v29;
            v32 = *((_BYTE*)v20 + 4);
            *(_DWORD*)(v22 - 16) = v30;
            *(_DWORD*)(v22 - 12) = v31;
            v33 = *((float*)v20 - 8);
            *(_BYTE*)(v22 + 12) = v32;
            v34 = *((_BYTE*)v20 + 20);
            *(float*)(v22 - 40) = v25 * v25;
            v35 = *((float*)v20 - 4);
            *(_BYTE*)(v22 + 28) = v34;
            v36 = *((_BYTE*)v20 + 36);
            *(float*)(v22 - 24) = v33 * v33;
            *(_BYTE*)(v22 + 44) = v36;
            v37 = *((_BYTE*)v20 + 52);
            *(float*)(v22 - 8) = v35 * v35;
            v38 = *((_DWORD*)v20 - 2);
            v39 = *((_DWORD*)v20 - 1);
            *(_BYTE*)(v22 + 60) = v37;
            v40 = *((_BYTE*)v20 + 68);
            *(_DWORD*)v22 = v38;
            *(_DWORD*)(v22 + 4) = v39;
            v41 = *(float*)v20;
            *(_BYTE*)(v22 + 76) = v40;
            *(float*)(v22 + 8) = v41 * v41;
            v42 = *((_DWORD*)v20 + 3);
            *(_DWORD*)(v22 + 16) = *((_DWORD*)v20 + 2);
            *(_DWORD*)(v22 + 20) = v42;
            *(float*)(v22 + 24) = *((float*)v20 + 4) * *((float*)v20 + 4);
            v43 = *((_DWORD*)v20 + 7);
            *(_DWORD*)(v22 + 32) = *((_DWORD*)v20 + 6);
            *(_DWORD*)(v22 + 36) = v43;
            *(float*)(v22 + 40) = *((float*)v20 + 8) * *((float*)v20 + 8);
            v44 = *((_DWORD*)v20 + 11);
            *(_DWORD*)(v22 + 48) = *((_DWORD*)v20 + 10);
            *(_DWORD*)(v22 + 52) = v44;
            *(float*)(v22 + 56) = *((float*)v20 + 12) * *((float*)v20 + 12);
            v45 = *((_DWORD*)v20 + 15);
            *(_DWORD*)(v22 + 64) = *((_DWORD*)v20 + 14);
            *(_DWORD*)(v22 + 68) = v45;
            v46 = *((float*)v20 + 16);
            v20 += 16;
            *(float*)(v22 + 72) = v46 * v46;
            v22 += 128;
          } while (-(__int64)((unsigned __int8)v17 & 0xF8) != v21);
          v18 = -v21;
          v19 = v17 & 7;
          if ((v17 & 7) == 0) {
            goto LABEL_6;
          }
        LABEL_19:
          v47 = 16 * v19;
          v48 = 0;
          v49 = &v59_.v59[16 * v18];
          v50 = i + 16 * v18;
          do {
            v51 = &v49[v48];
            v52 = v50 + v48;
            v48 += 16;
            v53 = *((_DWORD*)v51 + 3);
            v54 = *((_DWORD*)v51 + 4);
            *(_BYTE*)(v52 + 44) = v51[24];
            *(_DWORD*)(v52 + 32) = v53;
            *(_DWORD*)(v52 + 36) = v54;
            *(float*)(v52 + 40) = *((float*)v51 + 5) * *((float*)v51 + 5);
          } while (v47 != v48);
          goto LABEL_6;
        }
        v18 = 0;
        v19 = v17 & 7;
        if ((v17 & 7) != 0) {
          goto LABEL_19;
        }
      }
    LABEL_6:
      ++v8;
      v7 += 544;
      if (v8 >= *a2) {
        return 0;
      }
    }
  }
  return result;
}

__int64 nn_irsensor_GetPointingProcessorStates(__int64 a1, int* a2,
                                               unsigned int a3,
                                               unsigned __int64 a4)
{

#pragma clang fp contract(off)
  __int64 result;
  float* v9;
  float* v10;
  __int64 v11;
  float v12;
  float v13;
  unsigned int v14;
  int v15;
  float v16;
  float v17;
  __int64 v18;
  _BYTE v19[48];
  __int64 v20;

  *a2 = 0;
  memset_plt_alt1((void*)v19, nullptr, 672, a4);
  result = nn_irsensor_detail_GetPointingProcessorStates_plt(v19, a2, a3, a4);
  if (*a2 >= 1) {
    v9 = (float*)&v20;
    v10 = (float*)(a1 + 24);
    v11 = 0;
    while (1) {
      v18 = *((_QWORD*)v9 - 5);
      *((_QWORD*)v10 - 3) = *((_QWORD*)v9 - 6);
      *((_QWORD*)v10 - 2) = v18;
      v14 = *((unsigned __int8*)v9 - 32);
      if (v14 == 1) {
        break;
      }
      v14 = 0;
      v16 = 0x0.0p+0f;
      v17 = 0x0.0p+0f;
      if (*(_BYTE*)v9 == 1) {
        goto LABEL_10;
      }
    LABEL_11:
      if (*((_BYTE*)v9 + 32) == 1) {
        v12 = v9[11];
        v13 = v9[12];
        if (v14 < 2) {
          v15 = 1;
        }
        else {
          v14 = 2;
          v15 = 0;
        }
        ++v14;
        *((_DWORD*)v10 - 2) = v15;
        v16 = v16 + v12;
        v17 = v17 + v13;
        goto LABEL_7;
      }
      *((_DWORD*)v10 - 2) = 1;
      if (v14 != 0) {
      LABEL_7:
        *(v10 - 1) =
            (float)((float)(v16 / (float)v14) / -0x1.4000000000000p+7f) +
            0x1.0000000000000p+0f;
        *v10 = (float)((float)(v17 / (float)v14) / 0x1.e000000000000p+6f) +
               -0x1.0000000000000p+0f;
        ++v11;
        v9 += 28;
        v10 += 8;
        if (v11 >= *a2) {
          return result;
        }
      }
      else {
        *(_QWORD*)(v10 - 1) = 0;
        ++v11;
        v9 += 28;
        v10 += 8;
        if (v11 >= *a2) {
          return result;
        }
      }
    }
    v16 = *(v9 - 5) + 0x0.0p+0f;
    v17 = *(v9 - 4) + 0x0.0p+0f;
    if (*(_BYTE*)v9 != 1) {
      goto LABEL_11;
    }
  LABEL_10:
    ++v14;
    v16 = v16 + v9[3];
    v17 = v17 + v9[4];
    goto LABEL_11;
  }
  return result;
}

__int64 nn_irsensor_GetHandAnalysisImageState(__int64 a1, int* a2, int a3)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 result;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  struct {
    _QWORD v15[2];
    int v16;
  } v15_;
  _BYTE v17[300];
  __int64 v18;
  __int64 v19;

  v5 = 320 * a3;
  v6 = 2416 * a3;
  v7 = a1 + v6 - v5;
  result = nn_irsensor_GetTeraPluginProcessorStates_plt(v7);
  if ((_DWORD)result == 0) {
    v9 = *a2 - 1;
    if (*a2 >= 1) {
      if (*a2 != 1) {
        v11 = v6 - v5;
        v12 = 0;
        while (1) {
          v13 = a1 + v11;
          v14 = a1 + v12;
          v15_.v15[0] = 0;
          LODWORD(v18) = 0;
          HIDWORD(v19) = 0;
          *(_QWORD*)v14 = *(_QWORD*)(a1 + v11);
          *(_DWORD*)(v14 + 8) = *(_DWORD*)(a1 + v11 + 16);
          if ((nerd_gillette_internal_otete_jaimev2_DecodePacketModeROK_plt(
                   &v18, a1 + v11 + 20, 300, v15_.v15) &
               1) == 0 ||
              (nerd_gillette_internal_otete_jaimev2_DecodeIntensityROK_plt(
                   (char*)&v19 + 4, v13 + 20, 300, v15_.v15) &
               1) == 0) {
            goto LABEL_13;
          }
          if ((_DWORD)v18 != 2) {
            return 563917;
          }
          if ((nerd_gillette_internal_otete_jaimev2_DecodeImageROK_plt(
                   a1 + v12 + 12, v13 + 20, 300, v15_.v15, (char*)&v19 + 4) &
               1) == 0) {
          LABEL_13:
            *a2 = 0;
          }
          v12 += 2416;
          v11 += 320;
          if (2416LL * v9 == v12) {
            goto LABEL_6;
          }
        }
      }
      v9 = 0;
    LABEL_6:
      memcpy_plt(v15_.v15, v7 + 320LL * v9, 320);
      v18 = 0;
      v19 = 0;
      v10 = a1 + 2416LL * v9;
      *(_QWORD*)v10 = v15_.v15[0];
      *(_DWORD*)(v10 + 8) = v15_.v16;
      if ((nerd_gillette_internal_otete_jaimev2_DecodePacketModeROK_plt(
               (char*)&v19 + 4, v17, 300, &v18) &
           1) == 0 ||
          (nerd_gillette_internal_otete_jaimev2_DecodeIntensityROK_plt(
               &v19, v17, 300, &v18) &
           1) == 0) {
        goto LABEL_10;
      }
      if (HIDWORD(v19) != 2) {
        return 563917;
      }
      if ((nerd_gillette_internal_otete_jaimev2_DecodeImageROK_plt(
               v10 + 12, v17, 300, &v18, &v19) &
           1) == 0) {
      LABEL_10:
        *a2 = 0;
      }
    }
    return 0;
  }
  return result;
}

__int64 nn_irsensor_RunPulseRateProcessor(__int64 a1, _QWORD* a2, _QWORD* a3)
{
  __int64 v6;
  int v8;
  _DWORD v9[2];

  SdkData_10492f0[(int)nn_irsensor_detail_GetIrCameraHandlePlayerNumber_plt(
      a1)] = a3;
  v6 = a2[1];
  v9[0] = *a2 / 1000000LL;
  v9[1] =
      v6 / 0xF4240uLL +
      ((unsigned __int64)((unsigned __int128)(v6 *
                                              (__int128)0x431BDE82D7B634DBLL) >>
                          64) >>
       63);
  HeartRateDriver_HeartRateDriver_plt(a3 + 1, a3 + 58, 4716, v9);
  *a3 = a3 + 1;
  v8 = 1;
  HeartRateDriver_StartCapture_plt(a3 + 1);
  return nn_irsensor_RunHandAnalysis_plt(a1, &v8);
}

__int64 nn_irsensor_GetPulseRateProcessorState(__int64 a1, __int64 a2)
{
  unsigned int v3;
  _QWORD* v4;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  int* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  char* v20;
  _QWORD* v21;
  int v22;
  int v23;
  int v24;
  __int64 v25;
  __int64 v26;
  int v27;
  struct {
    __int64 v29;
    __int64 v30;
    __int64 v31;
    __int64 v32;
    __int64 v33;
  } v29_;
  _QWORD v34[23];
  __int64 v35;
  _QWORD v36[282];
  struct {
    int v37;
    char gap2688_[2860];
    int v38;
  } v37_;

  v3 = 82125;
  v37_.v38 = 0;
  v4 = (_QWORD*)SdkData_10492f0[(
      int)nn_irsensor_detail_GetIrCameraHandlePlayerNumber_plt(a2)];
  memset_plt((void*)v36, nullptr, 5120);
  nn_irsensor_GetTeraPluginProcessorStates_plt(v36);
  v7 = v37_.v38;
  if (v37_.v38 == 0) {
    return v3;
  }
  memset_plt((void*)v34, nullptr, 384);
  if ((unsigned int)v7 < 8) {
    v9 = 0;
    if ((v7 & 7) == 0) {
      goto LABEL_10;
    }
    goto LABEL_8;
  }
  v10 = &v35;
  v11 = 0;
  v12 = &v37_.v37;
  do {
    *(v10 - 1) = (__int64)v12;
    *v10 = 300;
    v13 = *(_QWORD*)(v12 - 565);
    v14 = *(_QWORD*)(v12 - 485);
    *(v10 - 19) = (__int64)(v12 - 480);
    *(v10 - 18) = 300;
    v11 -= 8;
    *(v10 - 23) = v13;
    *(v10 - 22) = (__int64)(v12 - 560);
    *(v10 - 21) = 300;
    *(v10 - 20) = v14;
    v15 = *(_QWORD*)(v12 - 405);
    *(v10 - 13) = (__int64)(v12 - 320);
    *(v10 - 12) = 300;
    *(v10 - 17) = v15;
    *(v10 - 16) = (__int64)(v12 - 400);
    v16 = *(_QWORD*)(v12 - 325);
    v17 = *(_QWORD*)(v12 - 245);
    *(v10 - 15) = 300;
    *(v10 - 14) = v16;
    *(v10 - 11) = v17;
    *(v10 - 10) = (__int64)(v12 - 240);
    v18 = *(_QWORD*)(v12 - 165);
    *(v10 - 9) = 300;
    *(v10 - 8) = v18;
    *(v10 - 7) = (__int64)(v12 - 160);
    *(v10 - 6) = 300;
    *(v10 - 5) = *(_QWORD*)(v12 - 85);
    *(v10 - 4) = (__int64)(v12 - 80);
    v8 = *(_QWORD*)(v12 - 5);
    v12 += 640;
    *(v10 - 3) = 300;
    *(v10 - 2) = v8;
    v10 += 24;
  } while (-(__int64)(v7 & 0xFFFFFFFFFFFFFFF8LL) != v11);
  v9 = -v11;
  if ((v7 & 7) != 0) {
  LABEL_8:
    v19 = v7 & 7;
    v20 = (char*)&v36[40 * v9 + 2] + 4;
    v21 = &v34[3 * v9 + 1];
    do {
      v8 = *(_QWORD*)(v20 - 20);
      v21[1] = 300;
      --v19;
      *(v21 - 1) = v8;
      *v21 = v20;
      v20 += 320;
      v21 += 3;
    } while (v19 != 0);
  }
LABEL_10:
  *(_QWORD*)(a1 + 8) = v8;
  v29_.v32 = 0;
  v29_.v33 = 0;
  v29_.v30 = 0;
  v29_.v31 = 0;
  v29_.v29 = 0;
  HeartRateCaptureState_HeartRateCaptureState_plt(&v29_.v29);
  if ((HeartRateDriver_GetCaptureState_plt(*v4, &v29_.v29, v34, v37_.v38) &
       1) != 0) {
    v22 = v29_.v32;
    v3 = 0;
    *(_QWORD*)(a1 + 28) = v29_.v31;
    v24 = v29_.v29;
    v23 = HIDWORD(v29_.v29);
    *(_DWORD*)(a1 + 36) = v22;
    v25 = v29_.v30;
    *(_DWORD*)(a1 + 16) = v23;
    v26 = v29_.v33;
    *(_QWORD*)(a1 + 20) = v25;
    *(_QWORD*)(a1 + 48) = v26;
    *(_DWORD*)(a1 + 40) = HIDWORD(v29_.v32);
    if ((unsigned int)(v24 - 1) >= 5) {
      v27 = 0;
    }
    else {
      v27 = v24;
    }
    *(_DWORD*)a1 = v27;
  }
  return v3;
}

__int64 nn_irsensor_ResetPulseRateProcessorState(__int64 a1)
{
  int v1;

  v1 = nn_irsensor_detail_GetIrCameraHandlePlayerNumber_plt(a1);
  return HeartRateDriver_StartCapture_plt(*(_QWORD*)SdkData_10492f0[v1]);
}

__int64 nn_irsensor_detail_CreateIrSensorServerProxy(__int64 a1)
{
  __int64* v1;
  unsigned __int8 v2;
  unsigned __int8 v3;
  void(__attribute__((noreturn)) * v4)();
  unsigned int v5;
  int v6;
  void(__attribute__((noreturn)) * v7)();
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v12;

  v1 = (__int64*)a1;
  v2 = atomic_load((unsigned __int8*)&SdkData_1049338);
  if ((v2 & 1) == 0) {
    nn_os_LockMutex_plt(&SdkData_ea8de8);
    v3 = atomic_load((unsigned __int8*)&SdkData_1049338);
    if ((v3 & 1) == 0) {
      v4 = SdkData_e89200[0];
      *(_QWORD*)v4 =
          nn_lmem_CreateExpHeap_plt((char*)SdkData_e89200[0] + 48, 0x4000, 0);
      nn_os_InitializeMutex_plt((char*)((__int64*)0x4LL) + (_QWORD)v4 + 4, 0,
                                0);
      atomic_store(1u, (unsigned __int8*)&SdkData_1049338);
    }
    a1 = nn_os_UnlockMutex_plt(&SdkData_ea8de8);
  }
  v12 = 0;
  nn_sf_hipc_InitializeHipcServiceResolution_plt(a1);
  v5 = nn_sf_hipc_ConnectToHipcService_plt(&v12, &SdkData_ca6ac4);
  nn_sf_hipc_FinalizeHipcServiceResolution_plt();
  if (v5 == 0) {
    v6 = v12;
    v7 = SdkData_e89200[0];
    nn_os_LockMutex_plt((char*)SdkData_e89200[0] + 8);
    v8 = nn_lmem_AllocateFromExpHeap_plt_859a90(*(_QWORD*)v7, 32);
    nn_os_UnlockMutex_plt((char*)v7 + 8);
    if (v8 != 0) {
      *(_DWORD*)(v8 + 12) = v6;
      *(_DWORD*)(v8 + 24) = 1;
      *(_WORD*)(v8 + 8) = 1;
      v9 = SdkData_e89208 + 216;
      *(_QWORD*)v8 = SdkData_e89208 + 16;
      *(_QWORD*)(v8 + 16) = v9;
    }
    v10 = *v1;
    *v1 = v8;
    if (v10 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v10 + 8LL))(v10);
    }
  }
  return v5;
}

__int64 nn_irsensor_detail_CreateIrSensorSystemServerProxy(__int64* a1)
{
  unsigned __int8 v2;
  unsigned __int8 v3;
  void(__attribute__((noreturn)) * v4)();
  unsigned __int8 v5;
  __int64 v6;
  unsigned __int8 v7;
  unsigned int v8;
  __int64 result;
  int v10;
  void(__attribute__((noreturn)) * v11)();
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;

  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_10513b0,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(&SdkData_10513b0) != 0) {
    fw_rtld_RegisterCrtDestructor();
    __cxa_guard_release_plt(&SdkData_10513b0);
  }
  v2 = atomic_load((unsigned __int8*)&SdkData_10513a0);
  if ((v2 & 1) == 0) {
    nn_os_LockMutex_plt(&SdkData_ea8e08);
    v3 = atomic_load((unsigned __int8*)&SdkData_10513a0);
    if ((v3 & 1) == 0) {
      v4 = SdkData_e89210[0];
      *(_QWORD*)v4 =
          nn_lmem_CreateExpHeap_plt((char*)SdkData_e89210[0] + 48, 0x4000, 0);
      nn_os_InitializeMutex_plt((char*)((__int64*)0x4LL) + (_QWORD)v4 + 4, 0,
                                0);
      atomic_store(1u, (unsigned __int8*)&SdkData_10513a0);
    }
    nn_os_UnlockMutex_plt(&SdkData_ea8e08);
  }
  v5 = atomic_load((unsigned __int8*)&SdkData_10513a4);
  if ((v5 & 1) == 0) {
    v6 = nn_os_LockMutex_plt(&SdkData_ea8e08);
    v7 = atomic_load((unsigned __int8*)&SdkData_10513a4);
    if ((v7 & 1) == 0) {
      v16 = 0;
      nn_sf_hipc_InitializeHipcServiceResolution_plt(v6);
      v8 = nn_sf_hipc_ConnectToHipcService_plt(&v16, "irs:sys");
      nn_sf_hipc_FinalizeHipcServiceResolution_plt();
      if (v8 != 0) {
        nn_os_UnlockMutex_plt(&SdkData_ea8e08);
        return v8;
      }
      v10 = v16;
      v11 = SdkData_e89210[0];
      nn_os_LockMutex_plt((char*)SdkData_e89210[0] + 8);
      v12 = nn_lmem_AllocateFromExpHeap_plt_859a90(*(_QWORD*)v11, 32);
      nn_os_UnlockMutex_plt((char*)v11 + 8);
      if (v12 != 0) {
        *(_DWORD*)(v12 + 12) = v10;
        *(_DWORD*)(v12 + 24) = 1;
        *(_WORD*)(v12 + 8) = 1;
        v13 = SdkData_e89218 + 104;
        *(_QWORD*)v12 = SdkData_e89218 + 16;
        *(_QWORD*)(v12 + 16) = v13;
      }
      v14 = SdkData_10513a8;
      SdkData_10513a8 = v12;
      if (v14 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v14 + 8LL))(v14);
      }
      atomic_store(1u, (unsigned __int8*)&SdkData_10513a4);
    }
    nn_os_UnlockMutex_plt(&SdkData_ea8e08);
  }
  v15 = SdkData_10513a8;
  if (SdkData_10513a8 != 0) {
    (**(void (***)(__int64))SdkData_10513a8)(SdkData_10513a8);
  }
  result = *a1;
  *a1 = v15;
  if (result != 0) {
    (*(void (**)(__int64))(*(_QWORD*)result + 8LL))(result);
    return 0;
  }
  return result;
}

#pragma GCC visibility pop
