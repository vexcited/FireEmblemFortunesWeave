#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_rtld_RegisterCrtDestructor();
__int64 nn_audio_common_NodeIdManager_GetBase_plt(_QWORD);
__int64 nn_audio_common_NodeIdManager_GetType_plt(_QWORD);
__int64 nn_audio_dsp_WaitForUnmap_plt(_QWORD);
__int64 nn_audio_server_238e20_alt1(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                    _QWORD) __asm__("nn_audio_server_238e20");
__int64 nn_audio_server_239220_alt1(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                    _QWORD) __asm__("nn_audio_server_239220");
__int64 nn_audio_server_23b5a0_alt1(_QWORD) __asm__("nn_audio_server_23b5a0");
__int64 nn_audio_server_AddressInfo_GetCpuAddr_plt(_QWORD);
__int64 nn_audio_server_AddressInfo_GetSize_plt(_QWORD);
__int64 nn_audio_server_AudioRenderSystemManager_GetInstance_plt(_QWORD);
__int64 nn_audio_server_AudioRenderSystemManager_Remove_plt(_QWORD, _QWORD);
__int64 nn_audio_server_AudioRenderSystem_Finalize_plt(_QWORD);
__int64 nn_audio_server_AudioRenderSystem_GetSessionId_plt(_QWORD);
__int64 nn_audio_server_AudioRenderSystem_QuerySystemEvent_plt(_QWORD, _QWORD);
__int64 nn_audio_server_AudioRenderSystem_SetRenderingTimeLimit_plt(_QWORD);
__int64 nn_audio_server_AudioRenderSystem_SetVoiceDropParameter_plt(_QWORD);
__int64 nn_audio_server_AudioRenderSystem_Stop_plt(_QWORD);
__int64 nn_audio_server_AudioRenderSystem_Update_plt(_QWORD, _QWORD, _QWORD,
                                                     _QWORD, _QWORD, _QWORD,
                                                     _QWORD);
__int64
    nn_audio_server_AudioRendererManagerImpl_AudioDeviceImpl_Destroy_AudioDeviceImpl_plt(
        _QWORD);
__int64 nn_audio_server_BehaviorInfo_AppendError_plt(_QWORD, _QWORD);
__int64 nn_audio_server_BehaviorInfo_IsBiquadFilterParameterFloatSupported_plt(
    _QWORD);
__int64
    nn_audio_server_BehaviorInfo_IsFlushVoiceWaveBuffersSupported_plt(_QWORD);
__int64 nn_audio_server_BehaviorInfo_IsSplitterSupported_plt(_QWORD);
__int64
    nn_audio_server_BehaviorInfo_IsVoiceBiquadFilterCrossFadeCurveEnabled_plt(
        _QWORD);
__int64
    nn_audio_server_BehaviorInfo_IsVoicePitchAndSrcSkippedSupported_plt(_QWORD);
__int64
    nn_audio_server_BehaviorInfo_IsVoicePlayedSampleCountResetAtLoopPointSupported_plt(
        _QWORD);
__int64 nn_audio_server_PoolMapper_PoolMapper_plt_863000(_QWORD, _QWORD, _QWORD,
                                                         _QWORD);
__int64 nn_audio_server_PoolMapper_TryAttachBuffer_plt(_QWORD, _QWORD, _QWORD,
                                                       _QWORD, _QWORD);
__int64 nn_audio_server_VoiceContext_GetCount_plt(_QWORD);
__int64 nn_audio_server_VoiceContext_GetInfo_plt(_QWORD, _QWORD);
__int64 nn_audio_server_VoiceContext_GetState_plt(_QWORD, _QWORD);
__int64 nn_audio_server_VoiceInfo_Initialize_plt(_QWORD);
__int64 nn_audio_server_VoiceInfo_UpdatePlayState_plt(void);
__int64 nn_audio_server_VoiceInfo_UpdateWaveBuffer_plt(_QWORD, _QWORD, _QWORD,
                                                       _QWORD, _QWORD, _QWORD,
                                                       _QWORD, _QWORD);
__int64 nn_audio_server_WaveBuffer_Initialize_plt(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_lmem_AllocateFromExpHeap_plt_859a90(_QWORD, _QWORD);
__int64 nn_lmem_FreeToExpHeap_plt(_QWORD, _QWORD);
__int64 nn_os_ClearSystemEvent_plt(_QWORD);
__int64 nn_os_CloseNativeHandle_plt(_QWORD);
__int64 nn_os_CreateSystemEvent_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_os_DestroySystemEvent_plt(_QWORD);
__int64 nn_os_DestroyTransferMemory_plt(_QWORD);
__int64 nn_os_FinalizeEvent_plt(_QWORD);
__int64 nn_os_LockMutex_plt(_QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 nn_os_UnlockMutex_plt(_QWORD);
__int64 nn_os_UnmapTransferMemory_plt(_QWORD);
__int64 nn_sf_impl_detail_ServiceObjectImplBase2_AddReferenceImpl_plt(_QWORD);
__int64 nn_sf_impl_detail_ServiceObjectImplBase2_ReleaseImpl_plt(_QWORD);
extern _UNKNOWN* SdkData_f1f028;
extern _UNKNOWN* SdkData_f1f068;
extern _UNKNOWN SdkData_f1f038;
extern _UNKNOWN SdkData_f1f078;
extern _UNKNOWN* SdkData_f1f018;
extern __int64 SdkData_e87530;
extern __int64 SdkData_e87538;
extern __int64 SdkData_f1f020;
extern __int64 SdkData_f1f030;
extern __int64 SdkData_f1f070;
extern int SdkData_f1f010;
__int64 nn_audio_server_238b20(_QWORD* a1);
__int64 nn_audio_server_238ca0(_QWORD* a1);
__int64 nn_audio_server_238e20(__int64 result, __int64 a2, __int64 a3,
                               __int64 a4, __int64 a5, __int64 a6);
__int64 nn_audio_server_239220(__int64 result, __int64 a2, __int64 a3,
                               __int64 a4, __int64 a5, __int64 a6);
__int64 nn_audio_server_239620(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                               __int64 a5);
__int64 nn_audio_server_239900(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                               _QWORD* a5, __int64 a6, __int64 a7);
__int64 nn_audio_server_239b20(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                               __int64 a5);
__int64 nn_audio_server_239e60(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                               _QWORD* a5, __int64 a6, __int64 a7);
__int64 nn_audio_server_23a0a0(__int64 a1, __int64 a2, unsigned int a3,
                               unsigned int a4);
__int64 nn_audio_server_23a7f0(__int64 result);
__int64 nn_audio_server_23b2b0(_QWORD* a1, void (****a2)(_QWORD));
__int64 nn_audio_server_23b3c0(__int64 a1);
__int64 nn_audio_server_23b420(__int64 a1, _DWORD* a2);
__int64 nn_audio_server_23b430(__int64 a1, _DWORD* a2);
__int64 nn_audio_server_23b440(__int64 a1, _DWORD* a2);
__int64 nn_audio_server_23b450(__int64 a1, int* a2);
__int64 nn_audio_server_23b470(__int64 a1, _QWORD* a2, _QWORD* a3, _QWORD* a4);
__int64 nn_audio_server_23b4a0(__int64 a1);
__int64 nn_audio_server_23b4c0(__int64 a1, unsigned int* a2);
__int64 nn_audio_server_23b530(__int64 a1);
__int64 nn_audio_server_23b550(__int64 a1, _DWORD* a2);
__int64 nn_audio_server_23b570(__int64 a1);
__int64 nn_audio_server_23b590(__int64 a1, _DWORD* a2);
__int64 nn_audio_server_23b5a0(__int64 a1);
__int64 nn_audio_server_23b730(__int64 a1);
__int64 nn_audio_server_23b8e0();

__int64 nn_audio_server_238b20(_QWORD* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v5;
  unsigned int* v6;
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
  int v19;
  _QWORD v20[3];

  v1 = *((unsigned int*)a1 + 16);
  v3 = a1[6];
  v2 = a1[7];
  memset(v20, 0, sizeof(v20));
  nn_audio_server_PoolMapper_PoolMapper_plt_863000(v20, v2, v1, v3);
  v5 = a1[14];
  v6 = (unsigned int*)a1[9];
  if ((int)nn_audio_server_VoiceContext_GetCount_plt(*a1) >= 1) {
    v7 = 0;
    do {
      v9 = *a1;
      if ((*((_BYTE*)v6 + 9) & 1) != 0) {
        v10 = nn_audio_server_VoiceContext_GetInfo_plt(v9, *v6);
        v11 = a1[6];
        v12 = *a1;
        v13 = v10;
        if ((nn_audio_server_BehaviorInfo_IsBiquadFilterParameterFloatSupported_plt(
                 v11) &
             1) != 0) {
          nn_audio_server_238e20_alt1(v13, v5, v6, v20, v11, v12);
        }
        else {
          nn_audio_server_239220_alt1(v13, v5, v6, v20, v11, v12);
        }
      }
      else {
        v8 = nn_audio_server_VoiceContext_GetInfo_plt(v9, (unsigned int)v7);
        *(_WORD*)(v8 + 36) &= ~1u;
      }
      ++v7;
      v5 += 16;
      v6 += 98;
    } while (v7 < (int)nn_audio_server_VoiceContext_GetCount_plt(*a1));
  }
  v14 = 392LL * (int)nn_audio_server_VoiceContext_GetCount_plt(*a1);
  if (v14 != *(_DWORD*)(a1[12] + 12LL)) {
    return 21145;
  }
  v15 = nn_audio_server_VoiceContext_GetCount_plt(*a1);
  v16 = a1[13];
  v17 = 16LL * v15;
  v19 = *(_DWORD*)(v16 + 60);
  *(_DWORD*)(v16 + 12) = v17;
  *(_DWORD*)(v16 + 60) = v19 + v17;
  a1[9] += v14;
  a1[14] += v17;
  return 0;
}

__int64 nn_audio_server_238ca0(_QWORD* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v5;
  unsigned int* v6;
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
  int v19;
  _QWORD v20[3];

  v1 = *((unsigned int*)a1 + 16);
  v3 = a1[6];
  v2 = a1[7];
  memset(v20, 0, sizeof(v20));
  nn_audio_server_PoolMapper_PoolMapper_plt_863000(v20, v2, v1, v3);
  v5 = a1[14];
  v6 = (unsigned int*)a1[9];
  if ((int)nn_audio_server_VoiceContext_GetCount_plt(*a1) >= 1) {
    v7 = 0;
    do {
      v9 = *a1;
      if ((*((_BYTE*)v6 + 9) & 1) != 0) {
        v10 = nn_audio_server_VoiceContext_GetInfo_plt(v9, *v6);
        v11 = a1[6];
        v12 = *a1;
        v13 = v10;
        if ((nn_audio_server_BehaviorInfo_IsBiquadFilterParameterFloatSupported_plt(
                 v11) &
             1) != 0) {
          nn_audio_server_238e20_alt1(v13, v5, v6, v20, v11, v12);
        }
        else {
          nn_audio_server_239220_alt1(v13, v5, v6, v20, v11, v12);
        }
      }
      else {
        v8 = nn_audio_server_VoiceContext_GetInfo_plt(v9, (unsigned int)v7);
        *(_WORD*)(v8 + 36) &= ~1u;
      }
      ++v7;
      v5 += 16;
      v6 += 92;
    } while (v7 < (int)nn_audio_server_VoiceContext_GetCount_plt(*a1));
  }
  v14 = 368LL * (int)nn_audio_server_VoiceContext_GetCount_plt(*a1);
  if (v14 != *(_DWORD*)(a1[12] + 12LL)) {
    return 21145;
  }
  v15 = nn_audio_server_VoiceContext_GetCount_plt(*a1);
  v16 = a1[13];
  v17 = 16LL * v15;
  v19 = *(_DWORD*)(v16 + 60);
  *(_DWORD*)(v16 + 12) = v17;
  *(_DWORD*)(v16 + 60) = v19 + v17;
  a1[9] += v14;
  a1[14] += v17;
  return 0;
}

__int64 nn_audio_server_238e20(__int64 result, __int64 a2, __int64 a3,
                               __int64 a4, __int64 a5, __int64 a6)
{
  int v6;
  __int64 v11;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  _QWORD* v17;
  _QWORD* v18;
  _QWORD* v19;
  _QWORD* v20;
  _QWORD* v21;
  _QWORD* v22;
  __int16 v23;
  _QWORD* v24;
  _QWORD v25[2];
  _QWORD v26[2];
  _QWORD v27[2];
  _QWORD v28[2];
  _QWORD v29[2];
  _QWORD v30[2];
  _QWORD v31[2];
  _QWORD v32[2];
  _QWORD v33[2];
  struct {
    __int64 v34;
    _QWORD* v35;
    _QWORD* v36;
    _QWORD* v37;
    _QWORD* v38;
    _QWORD* v39;
  } v34_;

  v6 = *(unsigned __int8*)(a3 + 9);
  v34_.v38 = nullptr;
  v34_.v39 = nullptr;
  v34_.v36 = nullptr;
  v34_.v37 = nullptr;
  v34_.v34 = 0;
  v34_.v35 = nullptr;
  if (v6 != 0) {
    v11 = result;
    if (*(int*)(a3 + 24) >= 1) {
      v13 = 0;
      do {
        v14 = nn_audio_server_VoiceContext_GetState_plt(
            a6, *(unsigned int*)(a3 + 344 + 4 * v13));
        v15 = *(int*)(a3 + 24);
        *(&v34_.v34 + v13++) = v14;
      } while (v13 < v15);
    }
    if ((*(_BYTE*)(a3 + 8) & 1) != 0) {
      result = nn_audio_server_VoiceInfo_Initialize_plt(v11);
      v16 = *(_DWORD*)(a3 + 24);
      if ((unsigned int)(v16 - 1) > 5) {
        return result;
      }
      v17 = (_QWORD*)v34_.v34;
      *(_QWORD*)(v34_.v34 + 48) = 0;
      v17[7] = 0;
      v17[8] = 0;
      v17[9] = 0;
      v17[10] = 0;
      v17[11] = 0;
      v17[12] = 0;
      v17[13] = 0;
      v17[14] = 0;
      v17[15] = 0;
      v17[16] = 0;
      v17[17] = 0;
      v17[18] = 0;
      v17[19] = 0;
      v17[20] = 0;
      v17[21] = 0;
      v17[22] = 0;
      v17[23] = 0;
      v17[24] = 0;
      v17[25] = 0;
      v17[26] = 0;
      v17[27] = 0;
      v17[28] = 0;
      v17[29] = 0;
      v17[30] = 0;
      v17[31] = 0;
      v17[4] = 0;
      v17[5] = 0;
      v17[2] = 0;
      v17[3] = 0;
      *v17 = 0;
      v17[1] = 0;
      if (v16 != 1) {
        v18 = v34_.v35;
        v34_.v35[6] = 0;
        v18[7] = 0;
        v18[8] = 0;
        v18[9] = 0;
        v18[10] = 0;
        v18[11] = 0;
        v18[12] = 0;
        v18[13] = 0;
        v18[14] = 0;
        v18[15] = 0;
        v18[16] = 0;
        v18[17] = 0;
        v18[18] = 0;
        v18[19] = 0;
        v18[20] = 0;
        v18[21] = 0;
        v18[22] = 0;
        v18[23] = 0;
        v18[24] = 0;
        v18[25] = 0;
        v18[26] = 0;
        v18[27] = 0;
        v18[28] = 0;
        v18[29] = 0;
        v18[30] = 0;
        v18[31] = 0;
        v18[4] = 0;
        v18[5] = 0;
        v18[2] = 0;
        v18[3] = 0;
        *v18 = 0;
        v18[1] = 0;
        if (v16 != 2) {
          v19 = v34_.v36;
          v34_.v36[6] = 0;
          v19[7] = 0;
          v19[8] = 0;
          v19[9] = 0;
          v19[10] = 0;
          v19[11] = 0;
          v19[12] = 0;
          v19[13] = 0;
          v19[14] = 0;
          v19[15] = 0;
          v19[16] = 0;
          v19[17] = 0;
          v19[18] = 0;
          v19[19] = 0;
          v19[20] = 0;
          v19[21] = 0;
          v19[22] = 0;
          v19[23] = 0;
          v19[24] = 0;
          v19[25] = 0;
          v19[26] = 0;
          v19[27] = 0;
          v19[28] = 0;
          v19[29] = 0;
          v19[30] = 0;
          v19[31] = 0;
          v19[4] = 0;
          v19[5] = 0;
          v19[2] = 0;
          v19[3] = 0;
          *v19 = 0;
          v19[1] = 0;
          if (v16 != 3) {
            v20 = v34_.v37;
            v34_.v37[6] = 0;
            v20[7] = 0;
            v20[8] = 0;
            v20[9] = 0;
            v20[10] = 0;
            v20[11] = 0;
            v20[12] = 0;
            v20[13] = 0;
            v20[14] = 0;
            v20[15] = 0;
            v20[16] = 0;
            v20[17] = 0;
            v20[18] = 0;
            v20[19] = 0;
            v20[20] = 0;
            v20[21] = 0;
            v20[22] = 0;
            v20[23] = 0;
            v20[24] = 0;
            v20[25] = 0;
            v20[26] = 0;
            v20[27] = 0;
            v20[28] = 0;
            v20[29] = 0;
            v20[30] = 0;
            v20[31] = 0;
            v20[4] = 0;
            v20[5] = 0;
            v20[2] = 0;
            v20[3] = 0;
            *v20 = 0;
            v20[1] = 0;
            if (v16 != 4) {
              v21 = v34_.v38;
              v34_.v38[6] = 0;
              v21[7] = 0;
              v21[8] = 0;
              v21[9] = 0;
              v21[10] = 0;
              v21[11] = 0;
              v21[12] = 0;
              v21[13] = 0;
              v21[14] = 0;
              v21[15] = 0;
              v21[16] = 0;
              v21[17] = 0;
              v21[18] = 0;
              v21[19] = 0;
              v21[20] = 0;
              v21[21] = 0;
              v21[22] = 0;
              v21[23] = 0;
              v21[24] = 0;
              v21[25] = 0;
              v21[26] = 0;
              v21[27] = 0;
              v21[28] = 0;
              v21[29] = 0;
              v21[30] = 0;
              v21[31] = 0;
              v21[4] = 0;
              v21[5] = 0;
              v21[2] = 0;
              v21[3] = 0;
              *v21 = 0;
              v21[1] = 0;
              if (v16 != 5) {
                v22 = v34_.v39;
                v34_.v39[6] = 0;
                v22[7] = 0;
                v22[8] = 0;
                v22[9] = 0;
                v22[10] = 0;
                v22[11] = 0;
                v22[12] = 0;
                v22[13] = 0;
                v22[14] = 0;
                v22[15] = 0;
                v22[16] = 0;
                v22[17] = 0;
                v22[18] = 0;
                v22[19] = 0;
                v22[20] = 0;
                v22[21] = 0;
                v22[22] = 0;
                v22[23] = 0;
                v22[24] = 0;
                v22[25] = 0;
                v22[26] = 0;
                v22[27] = 0;
                v22[28] = 0;
                v22[29] = 0;
                v22[30] = 0;
                v22[31] = 0;
                v22[4] = 0;
                v22[5] = 0;
                v22[2] = 0;
                v22[3] = 0;
                *v22 = 0;
                v22[1] = 0;
              }
            }
          }
        }
      }
    }
    v33[0] = 0;
    v33[1] = 0;
    nn_audio_server_239620(v11, (__int64)v33, a3, a4, a5);
    if (LODWORD(v33[0]) != 0) {
      nn_audio_server_BehaviorInfo_AppendError_plt(a5, v33);
    }
    v32[0] = 0;
    v32[1] = 0;
    v31[0] = 0;
    v31[1] = 0;
    v30[0] = 0;
    v30[1] = 0;
    v29[0] = 0;
    v29[1] = 0;
    v28[0] = 0;
    v28[1] = 0;
    v27[0] = 0;
    v27[1] = 0;
    v26[0] = 0;
    v26[1] = 0;
    v25[0] = 0;
    v25[1] = 0;
    result =
        nn_audio_server_239900(v11, (__int64)v25, 8, a3, &v34_.v34, a4, a5);
    if (LODWORD(v25[0]) != 0) {
      result = nn_audio_server_BehaviorInfo_AppendError_plt(a5, v25);
    }
    if (LODWORD(v26[0]) != 0) {
      result = nn_audio_server_BehaviorInfo_AppendError_plt(a5, v26);
    }
    if (LODWORD(v27[0]) != 0) {
      result = nn_audio_server_BehaviorInfo_AppendError_plt(a5, v27);
    }
    if (LODWORD(v28[0]) != 0) {
      result = nn_audio_server_BehaviorInfo_AppendError_plt(a5, v28);
    }
    if (LODWORD(v29[0]) != 0) {
      result = nn_audio_server_BehaviorInfo_AppendError_plt(a5, v29);
    }
    if (LODWORD(v30[0]) != 0) {
      result = nn_audio_server_BehaviorInfo_AppendError_plt(a5, v30);
    }
    if (LODWORD(v31[0]) != 0) {
      result = nn_audio_server_BehaviorInfo_AppendError_plt(a5, v31);
    }
    if (LODWORD(v32[0]) != 0) {
      result = nn_audio_server_BehaviorInfo_AppendError_plt(a5, v32);
    }
    v23 = *(_WORD*)(v11 + 36);
    if ((*(_BYTE*)(a3 + 8) & 1) != 0) {
      *(_WORD*)(v11 + 36) = v23 | 2;
    }
    else if ((v23 & 2) == 0) {
      v24 = (_QWORD*)v34_.v34;
      *(_DWORD*)(a2 + 8) = *(_DWORD*)(v34_.v34 + 56);
      *(_QWORD*)a2 = *v24;
      *(_BYTE*)(a2 + 12) = (*(_BYTE*)(v11 + 36) & 8) != 0;
      return result;
    }
    *(_DWORD*)(a2 + 8) = 0;
    *(_QWORD*)a2 = 0;
    *(_BYTE*)(a2 + 12) = 0;
  }
  return result;
}

__int64 nn_audio_server_239220(__int64 result, __int64 a2, __int64 a3,
                               __int64 a4, __int64 a5, __int64 a6)
{
  int v6;
  __int64 v11;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  _QWORD* v17;
  _QWORD* v18;
  _QWORD* v19;
  _QWORD* v20;
  _QWORD* v21;
  _QWORD* v22;
  __int16 v23;
  _QWORD* v24;
  _QWORD v25[2];
  _QWORD v26[2];
  _QWORD v27[2];
  _QWORD v28[2];
  _QWORD v29[2];
  _QWORD v30[2];
  _QWORD v31[2];
  _QWORD v32[2];
  _QWORD v33[2];
  struct {
    __int64 v34;
    _QWORD* v35;
    _QWORD* v36;
    _QWORD* v37;
    _QWORD* v38;
    _QWORD* v39;
  } v34_;

  v6 = *(unsigned __int8*)(a3 + 9);
  v34_.v38 = nullptr;
  v34_.v39 = nullptr;
  v34_.v36 = nullptr;
  v34_.v37 = nullptr;
  v34_.v34 = 0;
  v34_.v35 = nullptr;
  if (v6 != 0) {
    v11 = result;
    if (*(int*)(a3 + 24) >= 1) {
      v13 = 0;
      do {
        v14 = nn_audio_server_VoiceContext_GetState_plt(
            a6, *(unsigned int*)(a3 + 320 + 4 * v13));
        v15 = *(int*)(a3 + 24);
        *(&v34_.v34 + v13++) = v14;
      } while (v13 < v15);
    }
    if ((*(_BYTE*)(a3 + 8) & 1) != 0) {
      result = nn_audio_server_VoiceInfo_Initialize_plt(v11);
      v16 = *(_DWORD*)(a3 + 24);
      if ((unsigned int)(v16 - 1) > 5) {
        return result;
      }
      v17 = (_QWORD*)v34_.v34;
      *(_QWORD*)(v34_.v34 + 48) = 0;
      v17[7] = 0;
      v17[8] = 0;
      v17[9] = 0;
      v17[10] = 0;
      v17[11] = 0;
      v17[12] = 0;
      v17[13] = 0;
      v17[14] = 0;
      v17[15] = 0;
      v17[16] = 0;
      v17[17] = 0;
      v17[18] = 0;
      v17[19] = 0;
      v17[20] = 0;
      v17[21] = 0;
      v17[22] = 0;
      v17[23] = 0;
      v17[24] = 0;
      v17[25] = 0;
      v17[26] = 0;
      v17[27] = 0;
      v17[28] = 0;
      v17[29] = 0;
      v17[30] = 0;
      v17[31] = 0;
      v17[4] = 0;
      v17[5] = 0;
      v17[2] = 0;
      v17[3] = 0;
      *v17 = 0;
      v17[1] = 0;
      if (v16 != 1) {
        v18 = v34_.v35;
        v34_.v35[6] = 0;
        v18[7] = 0;
        v18[8] = 0;
        v18[9] = 0;
        v18[10] = 0;
        v18[11] = 0;
        v18[12] = 0;
        v18[13] = 0;
        v18[14] = 0;
        v18[15] = 0;
        v18[16] = 0;
        v18[17] = 0;
        v18[18] = 0;
        v18[19] = 0;
        v18[20] = 0;
        v18[21] = 0;
        v18[22] = 0;
        v18[23] = 0;
        v18[24] = 0;
        v18[25] = 0;
        v18[26] = 0;
        v18[27] = 0;
        v18[28] = 0;
        v18[29] = 0;
        v18[30] = 0;
        v18[31] = 0;
        v18[4] = 0;
        v18[5] = 0;
        v18[2] = 0;
        v18[3] = 0;
        *v18 = 0;
        v18[1] = 0;
        if (v16 != 2) {
          v19 = v34_.v36;
          v34_.v36[6] = 0;
          v19[7] = 0;
          v19[8] = 0;
          v19[9] = 0;
          v19[10] = 0;
          v19[11] = 0;
          v19[12] = 0;
          v19[13] = 0;
          v19[14] = 0;
          v19[15] = 0;
          v19[16] = 0;
          v19[17] = 0;
          v19[18] = 0;
          v19[19] = 0;
          v19[20] = 0;
          v19[21] = 0;
          v19[22] = 0;
          v19[23] = 0;
          v19[24] = 0;
          v19[25] = 0;
          v19[26] = 0;
          v19[27] = 0;
          v19[28] = 0;
          v19[29] = 0;
          v19[30] = 0;
          v19[31] = 0;
          v19[4] = 0;
          v19[5] = 0;
          v19[2] = 0;
          v19[3] = 0;
          *v19 = 0;
          v19[1] = 0;
          if (v16 != 3) {
            v20 = v34_.v37;
            v34_.v37[6] = 0;
            v20[7] = 0;
            v20[8] = 0;
            v20[9] = 0;
            v20[10] = 0;
            v20[11] = 0;
            v20[12] = 0;
            v20[13] = 0;
            v20[14] = 0;
            v20[15] = 0;
            v20[16] = 0;
            v20[17] = 0;
            v20[18] = 0;
            v20[19] = 0;
            v20[20] = 0;
            v20[21] = 0;
            v20[22] = 0;
            v20[23] = 0;
            v20[24] = 0;
            v20[25] = 0;
            v20[26] = 0;
            v20[27] = 0;
            v20[28] = 0;
            v20[29] = 0;
            v20[30] = 0;
            v20[31] = 0;
            v20[4] = 0;
            v20[5] = 0;
            v20[2] = 0;
            v20[3] = 0;
            *v20 = 0;
            v20[1] = 0;
            if (v16 != 4) {
              v21 = v34_.v38;
              v34_.v38[6] = 0;
              v21[7] = 0;
              v21[8] = 0;
              v21[9] = 0;
              v21[10] = 0;
              v21[11] = 0;
              v21[12] = 0;
              v21[13] = 0;
              v21[14] = 0;
              v21[15] = 0;
              v21[16] = 0;
              v21[17] = 0;
              v21[18] = 0;
              v21[19] = 0;
              v21[20] = 0;
              v21[21] = 0;
              v21[22] = 0;
              v21[23] = 0;
              v21[24] = 0;
              v21[25] = 0;
              v21[26] = 0;
              v21[27] = 0;
              v21[28] = 0;
              v21[29] = 0;
              v21[30] = 0;
              v21[31] = 0;
              v21[4] = 0;
              v21[5] = 0;
              v21[2] = 0;
              v21[3] = 0;
              *v21 = 0;
              v21[1] = 0;
              if (v16 != 5) {
                v22 = v34_.v39;
                v34_.v39[6] = 0;
                v22[7] = 0;
                v22[8] = 0;
                v22[9] = 0;
                v22[10] = 0;
                v22[11] = 0;
                v22[12] = 0;
                v22[13] = 0;
                v22[14] = 0;
                v22[15] = 0;
                v22[16] = 0;
                v22[17] = 0;
                v22[18] = 0;
                v22[19] = 0;
                v22[20] = 0;
                v22[21] = 0;
                v22[22] = 0;
                v22[23] = 0;
                v22[24] = 0;
                v22[25] = 0;
                v22[26] = 0;
                v22[27] = 0;
                v22[28] = 0;
                v22[29] = 0;
                v22[30] = 0;
                v22[31] = 0;
                v22[4] = 0;
                v22[5] = 0;
                v22[2] = 0;
                v22[3] = 0;
                *v22 = 0;
                v22[1] = 0;
              }
            }
          }
        }
      }
    }
    v33[0] = 0;
    v33[1] = 0;
    nn_audio_server_239b20(v11, (__int64)v33, a3, a4, a5);
    if (LODWORD(v33[0]) != 0) {
      nn_audio_server_BehaviorInfo_AppendError_plt(a5, v33);
    }
    v32[0] = 0;
    v32[1] = 0;
    v31[0] = 0;
    v31[1] = 0;
    v30[0] = 0;
    v30[1] = 0;
    v29[0] = 0;
    v29[1] = 0;
    v28[0] = 0;
    v28[1] = 0;
    v27[0] = 0;
    v27[1] = 0;
    v26[0] = 0;
    v26[1] = 0;
    v25[0] = 0;
    v25[1] = 0;
    result =
        nn_audio_server_239e60(v11, (__int64)v25, 8, a3, &v34_.v34, a4, a5);
    if (LODWORD(v25[0]) != 0) {
      result = nn_audio_server_BehaviorInfo_AppendError_plt(a5, v25);
    }
    if (LODWORD(v26[0]) != 0) {
      result = nn_audio_server_BehaviorInfo_AppendError_plt(a5, v26);
    }
    if (LODWORD(v27[0]) != 0) {
      result = nn_audio_server_BehaviorInfo_AppendError_plt(a5, v27);
    }
    if (LODWORD(v28[0]) != 0) {
      result = nn_audio_server_BehaviorInfo_AppendError_plt(a5, v28);
    }
    if (LODWORD(v29[0]) != 0) {
      result = nn_audio_server_BehaviorInfo_AppendError_plt(a5, v29);
    }
    if (LODWORD(v30[0]) != 0) {
      result = nn_audio_server_BehaviorInfo_AppendError_plt(a5, v30);
    }
    if (LODWORD(v31[0]) != 0) {
      result = nn_audio_server_BehaviorInfo_AppendError_plt(a5, v31);
    }
    if (LODWORD(v32[0]) != 0) {
      result = nn_audio_server_BehaviorInfo_AppendError_plt(a5, v32);
    }
    v23 = *(_WORD*)(v11 + 36);
    if ((*(_BYTE*)(a3 + 8) & 1) != 0) {
      *(_WORD*)(v11 + 36) = v23 | 2;
    }
    else if ((v23 & 2) == 0) {
      v24 = (_QWORD*)v34_.v34;
      *(_DWORD*)(a2 + 8) = *(_DWORD*)(v34_.v34 + 56);
      *(_QWORD*)a2 = *v24;
      *(_BYTE*)(a2 + 12) = (*(_BYTE*)(v11 + 36) & 8) != 0;
      return result;
    }
    *(_DWORD*)(a2 + 8) = 0;
    *(_QWORD*)a2 = 0;
    *(_BYTE*)(a2 + 12) = 0;
  }
  return result;
}

__int64 nn_audio_server_239620(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                               __int64 a5)
{
  __int16 v10;
  __int16 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  __int64 v22;
  char v23;
  char v24;
  int v25;
  __int64 v26;
  __int64 v27;
  __int16 v28;
  __int16 v29;
  __int16 v30;
  __int64 v31;
  __int64 v32;
  __int64 result;
  __int64 v34;
  __int16 v35;

  *(_WORD*)(a1 + 36) =
      *(_WORD*)(a1 + 36) & 0xFFFE | *(unsigned __int8*)(a3 + 9);
  *(_DWORD*)(a1 + 8) = *(_DWORD*)a3;
  *(_DWORD*)(a1 + 12) = *(_DWORD*)(a3 + 4);
  nn_audio_server_VoiceInfo_UpdatePlayState_plt();
  v10 = *(_WORD*)(a1 + 36);
  *(_BYTE*)(a1 + 5) = *(_BYTE*)(a3 + 374);
  *(_DWORD*)(a1 + 28) = *(_DWORD*)(a3 + 16);
  *(_DWORD*)(a1 + 32) = *(_DWORD*)(a3 + 20);
  *(_DWORD*)a1 = *(_DWORD*)(a3 + 12);
  *(_BYTE*)(a1 + 38) = *(_BYTE*)(a3 + 11);
  *(_BYTE*)(a1 + 4) = *(_DWORD*)(a3 + 24);
  *(_DWORD*)(a1 + 44) = *(_DWORD*)(a3 + 28);
  *(_DWORD*)(a1 + 48) = *(_DWORD*)(a3 + 32);
  v11 = *(_WORD*)(a3 + 372);
  *(_WORD*)(a1 + 36) = v10 & 0xFBFF | (v11 << 8) & 0x400;
  if ((v11 & 4) != 0) {
    *(_QWORD*)(a1 + 120) = *(_QWORD*)(a1 + 76);
    *(_DWORD*)(a1 + 128) = *(_DWORD*)(a1 + 84);
    *(_QWORD*)(a1 + 132) = *(_QWORD*)(a1 + 88);
    v15 = *(_QWORD*)(a3 + 40);
    v16 = *(_QWORD*)(a3 + 48);
    v17 = *(_DWORD*)(a3 + 56);
    *(_BYTE*)(a1 + 72) = *(_BYTE*)(a3 + 36);
    v18 = *(_DWORD*)(a1 + 108);
    *(_QWORD*)(a1 + 76) = v15;
    *(_QWORD*)(a1 + 84) = v16;
    *(_DWORD*)(a1 + 92) = v17;
    *(_DWORD*)(a1 + 148) = v18;
    *(_QWORD*)(a1 + 140) = *(_QWORD*)(a1 + 100);
    *(_QWORD*)(a1 + 152) = *(_QWORD*)(a1 + 112);
  }
  else {
    v12 = *(_DWORD*)(a3 + 56);
    v13 = *(_QWORD*)(a3 + 40);
    v14 = *(_QWORD*)(a3 + 48);
    *(_BYTE*)(a1 + 72) = *(_BYTE*)(a3 + 36);
    *(_QWORD*)(a1 + 76) = v13;
    *(_QWORD*)(a1 + 84) = v14;
    *(_DWORD*)(a1 + 92) = v12;
  }
  v19 = *(_DWORD*)(a3 + 72);
  v20 = *(_DWORD*)(a3 + 76);
  v21 = *(_DWORD*)(a3 + 80);
  v22 = *(_QWORD*)(a3 + 64);
  *(_BYTE*)(a1 + 96) = *(_BYTE*)(a3 + 60);
  *(_QWORD*)(a1 + 100) = v22;
  *(_DWORD*)(a1 + 108) = v19;
  *(_DWORD*)(a1 + 112) = v20;
  *(_DWORD*)(a1 + 116) = v21;
  if ((nn_audio_server_BehaviorInfo_IsVoiceBiquadFilterCrossFadeCurveEnabled_plt(
           a5) &
       1) != 0) {
    v23 = *(_BYTE*)(a3 + 375);
  }
  else {
    v23 = 2;
  }
  *(_BYTE*)(a1 + 70) = v23;
  *(_DWORD*)(a1 + 40) = *(_DWORD*)(a3 + 84);
  *(_BYTE*)(a1 + 6) = *(_BYTE*)(a3 + 88);
  if ((nn_audio_server_BehaviorInfo_IsFlushVoiceWaveBuffersSupported_plt(a5) &
       1) != 0) {
    v24 = *(_BYTE*)(a3 + 369);
  }
  else {
    v24 = 0;
  }
  *(_BYTE*)(a1 + 39) += v24;
  *(_DWORD*)(a1 + 16) = *(_DWORD*)(a3 + 112);
  if ((nn_audio_server_BehaviorInfo_IsSplitterSupported_plt(a5) & 1) != 0) {
    v25 = *(_DWORD*)(a3 + 116);
  }
  else {
    v25 = -1;
  }
  *(_DWORD*)(a1 + 64) = v25;
  v26 = *(_QWORD*)(a3 + 344);
  v27 = *(_QWORD*)(a3 + 352);
  *(_QWORD*)(a1 + 560) = *(_QWORD*)(a3 + 360);
  *(_QWORD*)(a1 + 552) = v27;
  *(_QWORD*)(a1 + 544) = v26;
  if ((nn_audio_server_BehaviorInfo_IsVoicePlayedSampleCountResetAtLoopPointSupported_plt(
           a5) &
       1) != 0) {
    v28 = (*(_WORD*)(a3 + 372) & 1) << 8;
    if ((nn_audio_server_BehaviorInfo_IsVoicePitchAndSrcSkippedSupported_plt(
             a5) &
         1) == 0) {
    LABEL_15:
      v29 = 0;
      goto LABEL_18;
    }
  }
  else {
    v28 = 0;
    if ((nn_audio_server_BehaviorInfo_IsVoicePitchAndSrcSkippedSupported_plt(
             a5) &
         1) == 0) {
      goto LABEL_15;
    }
  }
  v29 = (*(_WORD*)(a3 + 372) << 8) & 0x200;
LABEL_18:
  v30 = v29 | v28 | *(_WORD*)(a1 + 36) & 0xFCFF;
  *(_WORD*)(a1 + 36) = v30;
  if (*(_BYTE*)(a3 + 368) == 1) {
    *(_WORD*)(a1 + 36) = v30 & 0xFFF7;
  }
  v31 = nn_audio_server_AddressInfo_GetCpuAddr_plt(a1 + 160);
  v32 = *(_QWORD*)(a3 + 96);
  if (v31 == v32) {
    result = nn_audio_server_AddressInfo_GetSize_plt(a1 + 160);
    v34 = *(_QWORD*)(a3 + 104);
    if (result == v34 && (*(_WORD*)(a1 + 36) & 0x10) == 0) {
      *(_DWORD*)a2 = 0;
      *(_QWORD*)(a2 + 8) = 0;
      return result;
    }
    v32 = *(_QWORD*)(a3 + 96);
  }
  else {
    v34 = *(_QWORD*)(a3 + 104);
  }
  result = nn_audio_server_PoolMapper_TryAttachBuffer_plt(a4, a2, a1 + 160, v32,
                                                          v34);
  if ((result & 1) != 0) {
    v35 = 0;
  }
  else {
    v35 = 16;
  }
  *(_WORD*)(a1 + 36) = *(_WORD*)(a1 + 36) & 0xFFEF | v35;
  return result;
}

__int64 nn_audio_server_239900(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                               _QWORD* a5, __int64 a6, __int64 a7)
{
  int v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  __int64 v20;

  if (*(_BYTE*)(a4 + 8) == 1) {
    v13 = *(_DWORD*)(a4 + 24);
    nn_audio_server_WaveBuffer_Initialize_plt(a1 + 192);
    nn_audio_server_WaveBuffer_Initialize_plt(a1 + 280);
    nn_audio_server_WaveBuffer_Initialize_plt(a1 + 368);
    nn_audio_server_WaveBuffer_Initialize_plt(a1 + 456);
    if (v13 >= 1) {
      v14 = v13 & 3;
      if ((unsigned int)v13 < 4) {
        v15 = 0;
        if ((v13 & 3) == 0) {
          goto LABEL_11;
        }
        goto LABEL_9;
      }
      v16 = a5 + 2;
      v17 = 0;
      do {
        v17 -= 4;
        *(_BYTE*)(*(v16 - 2) + 52LL) = 0;
        *(_BYTE*)(*(v16 - 2) + 53LL) = 0;
        *(_BYTE*)(*(v16 - 2) + 54LL) = 0;
        *(_BYTE*)(*(v16 - 2) + 55LL) = 0;
        *(_BYTE*)(*(v16 - 1) + 52LL) = 0;
        *(_BYTE*)(*(v16 - 1) + 53LL) = 0;
        *(_BYTE*)(*(v16 - 1) + 54LL) = 0;
        *(_BYTE*)(*(v16 - 1) + 55LL) = 0;
        *(_BYTE*)(*v16 + 52LL) = 0;
        *(_BYTE*)(*v16 + 53LL) = 0;
        *(_BYTE*)(*v16 + 54LL) = 0;
        *(_BYTE*)(*v16 + 55LL) = 0;
        *(_BYTE*)(v16[1] + 52LL) = 0;
        *(_BYTE*)(v16[1] + 53LL) = 0;
        *(_BYTE*)(v16[1] + 54LL) = 0;
        v18 = v16[1];
        v16 += 4;
        *(_BYTE*)(v18 + 55) = 0;
      } while (-(__int64)(v13 & 0x7FFFFFFC) != v17);
      v15 = -v17;
      if ((v13 & 3) != 0) {
      LABEL_9:
        v19 = &a5[v15];
        do {
          --v14;
          *(_BYTE*)(*v19 + 52) = 0;
          *(_BYTE*)(*v19 + 53) = 0;
          *(_BYTE*)(*v19 + 54) = 0;
          v20 = *v19++;
          *(_BYTE*)(v20 + 55) = 0;
        } while (v14 != 0);
      }
    }
  }
LABEL_11:
  nn_audio_server_VoiceInfo_UpdateWaveBuffer_plt(
      a1, a2, a1 + 192, a4 + 120, *(unsigned __int8*)(a4 + 11),
      *(unsigned __int8*)(*a5 + 52LL), a6, a7);
  nn_audio_server_VoiceInfo_UpdateWaveBuffer_plt(
      a1, a2 + 32, a1 + 280, a4 + 176, *(unsigned __int8*)(a4 + 11),
      *(unsigned __int8*)(*a5 + 53LL), a6, a7);
  nn_audio_server_VoiceInfo_UpdateWaveBuffer_plt(
      a1, a2 + 64, a1 + 368, a4 + 232, *(unsigned __int8*)(a4 + 11),
      *(unsigned __int8*)(*a5 + 54LL), a6, a7);
  return nn_audio_server_VoiceInfo_UpdateWaveBuffer_plt(
      a1, a2 + 96, a1 + 456, a4 + 288, *(unsigned __int8*)(a4 + 11),
      *(unsigned __int8*)(*a5 + 55LL), a6, a7);
}

__int64 nn_audio_server_239b20(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                               __int64 a5)
{
  __int16 v10;
  __int16 v11;
  float v12;
  float v13;
  float v14;
  float v15;
  unsigned int v16;
  float v17;
  float v18;
  float v19;
  float v20;
  unsigned int v21;
  __int64 v22;
  unsigned int v23;
  char v24;
  float v25;
  float v26;
  __int16 v27;
  char v28;
  char v29;
  int v30;
  __int64 v31;
  __int64 v32;
  __int16 v33;
  __int16 v34;
  __int16 v35;
  __int64 v36;
  __int64 v37;
  __int64 result;
  __int64 v39;
  __int16 v40;

  *(_WORD*)(a1 + 36) =
      *(_WORD*)(a1 + 36) & 0xFFFE | *(unsigned __int8*)(a3 + 9);
  *(_DWORD*)(a1 + 8) = *(_DWORD*)a3;
  *(_DWORD*)(a1 + 12) = *(_DWORD*)(a3 + 4);
  nn_audio_server_VoiceInfo_UpdatePlayState_plt();
  v10 = *(_WORD*)(a1 + 36);
  *(_BYTE*)(a1 + 5) = *(_BYTE*)(a3 + 350);
  *(_DWORD*)(a1 + 28) = *(_DWORD*)(a3 + 16);
  *(_DWORD*)(a1 + 32) = *(_DWORD*)(a3 + 20);
  *(_DWORD*)a1 = *(_DWORD*)(a3 + 12);
  *(_BYTE*)(a1 + 38) = *(_BYTE*)(a3 + 11);
  *(_BYTE*)(a1 + 4) = *(_DWORD*)(a3 + 24);
  *(_DWORD*)(a1 + 44) = *(_DWORD*)(a3 + 28);
  *(_DWORD*)(a1 + 48) = *(_DWORD*)(a3 + 32);
  v11 = *(_WORD*)(a3 + 348);
  *(_WORD*)(a1 + 36) = v10 & 0xFBFF | (v11 << 8) & 0x400;
  if ((v11 & 4) != 0) {
    *(_QWORD*)(a1 + 120) = *(_QWORD*)(a1 + 76);
    *(_DWORD*)(a1 + 128) = *(_DWORD*)(a1 + 84);
    *(_QWORD*)(a1 + 132) = *(_QWORD*)(a1 + 88);
    v17 = vcvts_n_f32_s32(*(__int16*)(a3 + 38), 0xEu);
    v18 = vcvts_n_f32_s32(*(__int16*)(a3 + 40), 0xEu);
    v19 = vcvts_n_f32_s32(*(__int16*)(a3 + 42), 0xEu);
    v20 = vcvts_n_f32_s32(*(__int16*)(a3 + 44), 0xEu);
    v21 = *(__int16*)(a3 + 46);
    *(_BYTE*)(a1 + 72) = *(_BYTE*)(a3 + 36);
    v22 = *(_QWORD*)(a1 + 100);
    *(float*)(a1 + 76) = v17;
    *(float*)(a1 + 80) = v18;
    *(float*)(a1 + 84) = v19;
    *(float*)(a1 + 88) = v20;
    *(_QWORD*)(a1 + 140) = v22;
    LODWORD(v22) = *(_DWORD*)(a1 + 108);
    *(float*)(a1 + 92) = vcvts_n_f32_s32(v21, 0xEu);
    *(_DWORD*)(a1 + 148) = v22;
    *(_QWORD*)(a1 + 152) = *(_QWORD*)(a1 + 112);
  }
  else {
    v12 = vcvts_n_f32_s32(*(__int16*)(a3 + 38), 0xEu);
    v13 = vcvts_n_f32_s32(*(__int16*)(a3 + 40), 0xEu);
    v14 = vcvts_n_f32_s32(*(__int16*)(a3 + 42), 0xEu);
    v15 = vcvts_n_f32_s32(*(__int16*)(a3 + 44), 0xEu);
    v16 = *(__int16*)(a3 + 46);
    *(_BYTE*)(a1 + 72) = *(_BYTE*)(a3 + 36);
    *(float*)(a1 + 76) = v12;
    *(float*)(a1 + 80) = v13;
    *(float*)(a1 + 84) = v14;
    *(float*)(a1 + 88) = v15;
    *(float*)(a1 + 92) = vcvts_n_f32_s32(v16, 0xEu);
  }
  v23 = *(__int16*)(a3 + 56);
  v24 = *(_BYTE*)(a3 + 48);
  v25 = vcvts_n_f32_s32(*(__int16*)(a3 + 52), 0xEu);
  v26 = vcvts_n_f32_s32(*(__int16*)(a3 + 54), 0xEu);
  v27 = *(_WORD*)(a3 + 58);
  *(float*)(a1 + 100) = vcvts_n_f32_s32(*(__int16*)(a3 + 50), 0xEu);
  *(float*)(a1 + 104) = v25;
  *(_BYTE*)(a1 + 96) = v24;
  *(float*)(a1 + 108) = v26;
  *(float*)(a1 + 112) = vcvts_n_f32_s32(v23, 0xEu);
  *(float*)(a1 + 116) = vcvts_n_f32_s32(v27, 0xEu);
  if ((nn_audio_server_BehaviorInfo_IsVoiceBiquadFilterCrossFadeCurveEnabled_plt(
           a5) &
       1) != 0) {
    v28 = *(_BYTE*)(a3 + 351);
  }
  else {
    v28 = 2;
  }
  *(_BYTE*)(a1 + 70) = v28;
  *(_DWORD*)(a1 + 40) = *(_DWORD*)(a3 + 60);
  *(_BYTE*)(a1 + 6) = *(_BYTE*)(a3 + 64);
  if ((nn_audio_server_BehaviorInfo_IsFlushVoiceWaveBuffersSupported_plt(a5) &
       1) != 0) {
    v29 = *(_BYTE*)(a3 + 345);
  }
  else {
    v29 = 0;
  }
  *(_BYTE*)(a1 + 39) += v29;
  *(_DWORD*)(a1 + 16) = *(_DWORD*)(a3 + 88);
  if ((nn_audio_server_BehaviorInfo_IsSplitterSupported_plt(a5) & 1) != 0) {
    v30 = *(_DWORD*)(a3 + 92);
  }
  else {
    v30 = -1;
  }
  *(_DWORD*)(a1 + 64) = v30;
  v31 = *(_QWORD*)(a3 + 320);
  v32 = *(_QWORD*)(a3 + 328);
  *(_QWORD*)(a1 + 560) = *(_QWORD*)(a3 + 336);
  *(_QWORD*)(a1 + 552) = v32;
  *(_QWORD*)(a1 + 544) = v31;
  if ((nn_audio_server_BehaviorInfo_IsVoicePlayedSampleCountResetAtLoopPointSupported_plt(
           a5) &
       1) != 0) {
    v33 = (*(_WORD*)(a3 + 348) & 1) << 8;
    if ((nn_audio_server_BehaviorInfo_IsVoicePitchAndSrcSkippedSupported_plt(
             a5) &
         1) == 0) {
    LABEL_15:
      v34 = 0;
      goto LABEL_18;
    }
  }
  else {
    v33 = 0;
    if ((nn_audio_server_BehaviorInfo_IsVoicePitchAndSrcSkippedSupported_plt(
             a5) &
         1) == 0) {
      goto LABEL_15;
    }
  }
  v34 = (*(_WORD*)(a3 + 348) << 8) & 0x200;
LABEL_18:
  v35 = v34 | v33 | *(_WORD*)(a1 + 36) & 0xFCFF;
  *(_WORD*)(a1 + 36) = v35;
  if (*(_BYTE*)(a3 + 344) == 1) {
    *(_WORD*)(a1 + 36) = v35 & 0xFFF7;
  }
  v36 = nn_audio_server_AddressInfo_GetCpuAddr_plt(a1 + 160);
  v37 = *(_QWORD*)(a3 + 72);
  if (v36 == v37) {
    result = nn_audio_server_AddressInfo_GetSize_plt(a1 + 160);
    v39 = *(_QWORD*)(a3 + 80);
    if (result == v39 && (*(_WORD*)(a1 + 36) & 0x10) == 0) {
      *(_DWORD*)a2 = 0;
      *(_QWORD*)(a2 + 8) = 0;
      return result;
    }
    v37 = *(_QWORD*)(a3 + 72);
  }
  else {
    v39 = *(_QWORD*)(a3 + 80);
  }
  result = nn_audio_server_PoolMapper_TryAttachBuffer_plt(a4, a2, a1 + 160, v37,
                                                          v39);
  if ((result & 1) != 0) {
    v40 = 0;
  }
  else {
    v40 = 16;
  }
  *(_WORD*)(a1 + 36) = *(_WORD*)(a1 + 36) & 0xFFEF | v40;
  return result;
}

__int64 nn_audio_server_239e60(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                               _QWORD* a5, __int64 a6, __int64 a7)
{
  int v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  __int64 v20;

  if (*(_BYTE*)(a4 + 8) == 1) {
    v13 = *(_DWORD*)(a4 + 24);
    nn_audio_server_WaveBuffer_Initialize_plt(a1 + 192);
    nn_audio_server_WaveBuffer_Initialize_plt(a1 + 280);
    nn_audio_server_WaveBuffer_Initialize_plt(a1 + 368);
    nn_audio_server_WaveBuffer_Initialize_plt(a1 + 456);
    if (v13 >= 1) {
      v14 = v13 & 3;
      if ((unsigned int)v13 < 4) {
        v15 = 0;
        if ((v13 & 3) == 0) {
          goto LABEL_11;
        }
        goto LABEL_9;
      }
      v16 = a5 + 2;
      v17 = 0;
      do {
        v17 -= 4;
        *(_BYTE*)(*(v16 - 2) + 52LL) = 0;
        *(_BYTE*)(*(v16 - 2) + 53LL) = 0;
        *(_BYTE*)(*(v16 - 2) + 54LL) = 0;
        *(_BYTE*)(*(v16 - 2) + 55LL) = 0;
        *(_BYTE*)(*(v16 - 1) + 52LL) = 0;
        *(_BYTE*)(*(v16 - 1) + 53LL) = 0;
        *(_BYTE*)(*(v16 - 1) + 54LL) = 0;
        *(_BYTE*)(*(v16 - 1) + 55LL) = 0;
        *(_BYTE*)(*v16 + 52LL) = 0;
        *(_BYTE*)(*v16 + 53LL) = 0;
        *(_BYTE*)(*v16 + 54LL) = 0;
        *(_BYTE*)(*v16 + 55LL) = 0;
        *(_BYTE*)(v16[1] + 52LL) = 0;
        *(_BYTE*)(v16[1] + 53LL) = 0;
        *(_BYTE*)(v16[1] + 54LL) = 0;
        v18 = v16[1];
        v16 += 4;
        *(_BYTE*)(v18 + 55) = 0;
      } while (-(__int64)(v13 & 0x7FFFFFFC) != v17);
      v15 = -v17;
      if ((v13 & 3) != 0) {
      LABEL_9:
        v19 = &a5[v15];
        do {
          --v14;
          *(_BYTE*)(*v19 + 52) = 0;
          *(_BYTE*)(*v19 + 53) = 0;
          *(_BYTE*)(*v19 + 54) = 0;
          v20 = *v19++;
          *(_BYTE*)(v20 + 55) = 0;
        } while (v14 != 0);
      }
    }
  }
LABEL_11:
  nn_audio_server_VoiceInfo_UpdateWaveBuffer_plt(
      a1, a2, a1 + 192, a4 + 96, *(unsigned __int8*)(a4 + 11),
      *(unsigned __int8*)(*a5 + 52LL), a6, a7);
  nn_audio_server_VoiceInfo_UpdateWaveBuffer_plt(
      a1, a2 + 32, a1 + 280, a4 + 152, *(unsigned __int8*)(a4 + 11),
      *(unsigned __int8*)(*a5 + 53LL), a6, a7);
  nn_audio_server_VoiceInfo_UpdateWaveBuffer_plt(
      a1, a2 + 64, a1 + 368, a4 + 208, *(unsigned __int8*)(a4 + 11),
      *(unsigned __int8*)(*a5 + 54LL), a6, a7);
  return nn_audio_server_VoiceInfo_UpdateWaveBuffer_plt(
      a1, a2 + 96, a1 + 456, a4 + 264, *(unsigned __int8*)(a4 + 11),
      *(unsigned __int8*)(*a5 + 55LL), a6, a7);
}

__int64 nn_audio_server_23a0a0(__int64 a1, __int64 a2, unsigned int a3,
                               unsigned int a4)
{
  int v4;
  __int64 v8;
  int v9;
  unsigned int v10;
  bool v11;
  int v12;
  unsigned int v14;
  unsigned int v15;
  char v16;
  unsigned int v17;
  unsigned int v18;
  __int64 v19;
  char v20;
  int v21;
  char v22;

  v4 = *(_DWORD*)(a2 + 32);
  v8 = *(_QWORD*)(a2 + 8) + 32LL;
  if (v4 < 1) {
    v9 = 0;
  }
  else {
    v9 = 0;
    while (1) {
      v10 = *(unsigned __int8*)(v8 + 1);
      v11 = v10 > 0x18;
      v12 = (1 << v10) & 0x100007E;
      if (!v11 && v12 != 0) {
        break;
      }
      ++v9;
      v8 += *(__int16*)(v8 + 2);
      if (v4 == v9) {
        return 0;
      }
    }
  }
  if (v9 >= v4) {
    return 0;
  }
  else {
    v14 = 0;
    do {
      v15 = *(_DWORD*)(v8 + 8);
      v16 = nn_audio_common_NodeIdManager_GetType_plt(v15);
      v17 = nn_audio_common_NodeIdManager_GetBase_plt(v15);
      if (a3 <= a4) {
        break;
      }
      if (v16 != 1) {
        break;
      }
      v18 = v17;
      if (*(_DWORD*)(nn_audio_server_VoiceContext_GetInfo_plt(
                         *(_QWORD*)(a1 + 16), v17) +
                     28) == 0) {
        break;
      }
      v19 = nn_audio_server_VoiceContext_GetInfo_plt(*(_QWORD*)(a1 + 16), v18);
      *(_WORD*)(v19 + 36) |= 8u;
      if (v9 < v4) {
        while (*(_DWORD*)(v8 + 8) == v15) {
          v21 = *(unsigned __int8*)(v8 + 1);
          v22 = *(_BYTE*)v8;
          if (v21 == 14) {
            v20 = v22 | 1;
          }
          else {
            if (v21 == 24 || (v22 & 1) == 0) {
              goto LABEL_22;
            }
            v20 = v22 & 0xFE;
            a3 -= *(_DWORD*)(v8 + 4);
          }
          *(_BYTE*)v8 = v20;
        LABEL_22:
          ++v9;
          v8 += *(__int16*)(v8 + 2);
          if (v4 == v9) {
            v9 = v4;
            break;
          }
        }
      }
      ++v14;
      ++v9;
    } while (v9 < v4);
  }
  return v14;
}

__int64 nn_audio_server_23a7f0(__int64 result)
{
  __int64 v1;

  v1 = result;
  if (*(_BYTE*)(result + 144) != 0) {
    result = nn_os_DestroySystemEvent_plt(result + 104);
  }
  if (*(_BYTE*)(v1 + 80) != 0) {
    return nn_os_DestroySystemEvent_plt(v1 + 40);
  }
  return result;
}

__int64 nn_audio_server_23b2b0(_QWORD* a1, void (****a2)(_QWORD))
{
  __int64 v4;
  void (***v5)(_QWORD);
  __int64 v6;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v12;

  nn_os_LockMutex_plt(a1 + 1);
  v4 = nn_lmem_AllocateFromExpHeap_plt_859a90(*a1, 1680);
  nn_os_UnlockMutex_plt(a1 + 1);
  if (v4 == 0) {
    return v4;
  }
  *(_DWORD*)(v4 + 1664) = 1;
  *(_QWORD*)v4 = SdkData_e87530 + 16;
  v5 = *a2;
  *(_QWORD*)(v4 + 16) = *a2;
  if (v5 != nullptr) {
    (**v5)(v5);
  }
  *(_BYTE*)(v4 + 24) = 0;
  *(_WORD*)(v4 + 88) = 0;
  v6 = nn_os_SdkMutexType_Lock_plt(&SdkData_f1f010);
  v7 = (__int64*)SdkData_f1f020;
  if ((_UNKNOWN**)SdkData_f1f020 != &SdkData_f1f018) {
    v8 = *(__int64**)(SdkData_f1f020 + 8);
    v9 = *v8;
    *(_QWORD*)(*(_QWORD*)SdkData_f1f020 + 8LL) = v8;
    *v8 = *v7;
    *(_QWORD*)(v9 + 8) = v7;
    *v7 = v9;
    nn_os_ClearSystemEvent_plt(v7 + 2);
    nn_os_SdkMutexType_Unlock_plt(&SdkData_f1f010);
    *(_QWORD*)(v4 + 96) = v7;
    *(_BYTE*)(v4 + 112) = 0;
    *(_BYTE*)(v4 + 1648) = 0;
    v10 = SdkData_e87538;
    *(_QWORD*)(v4 + 1672) = a1;
    *(_QWORD*)v4 = v10 + 16;
    return v4;
  }
  v12 = nn_diag_detail_AbortImpl_plt_856170(v6);
  return nn_sf_impl_detail_ServiceObjectImplBase2_AddReferenceImpl_plt(v12 +
                                                                       1664);
}

__int64 nn_audio_server_23b3c0(__int64 a1)
{
  __int64 result;
  _QWORD* v3;

  result = nn_sf_impl_detail_ServiceObjectImplBase2_ReleaseImpl_plt(a1 + 1664);
  if ((result & 1) != 0) {
    v3 = *(_QWORD**)(a1 + 1672);
    nn_audio_server_23b5a0_alt1(a1 + 16);
    nn_os_LockMutex_plt(v3 + 1);
    nn_lmem_FreeToExpHeap_plt(*v3, a1);
    return nn_os_UnlockMutex_plt(v3 + 1);
  }
  return result;
}

__int64 nn_audio_server_23b420(__int64 a1, _DWORD* a2)
{
  int v2;

  v2 = *(_DWORD*)(a1 + 176);
  *a2 = v2;
  return 0;
}

__int64 nn_audio_server_23b430(__int64 a1, _DWORD* a2)
{
  int v2;

  v2 = *(_DWORD*)(a1 + 172);
  *a2 = v2;
  return 0;
}

__int64 nn_audio_server_23b440(__int64 a1, _DWORD* a2)
{
  int v2;

  v2 = *(_DWORD*)(a1 + 168);
  *a2 = v2;
  return 0;
}

__int64 nn_audio_server_23b450(__int64 a1, int* a2)
{
  int v2;

  v2 = *(unsigned __int8*)(a1 + 129);
  *a2 = v2 ^ 1;
  return 0;
}

__int64 nn_audio_server_23b470(__int64 a1, _QWORD* a2, _QWORD* a3, _QWORD* a4)
{
  return nn_audio_server_AudioRenderSystem_Update_plt(a1 + 112, *a2, a2[1], *a3,
                                                      a3[1], *a4, a4[1]);
}

__int64 nn_audio_server_23b4a0(__int64 a1)
{
  nn_audio_server_AudioRenderSystem_Stop_plt(a1 + 112);
  return 0;
}

__int64 nn_audio_server_23b4c0(__int64 a1, unsigned int* a2)
{
  __int64 result;
  unsigned int v4;
  int v5;
  unsigned int v6;

  v6 = 0;
  result =
      nn_audio_server_AudioRenderSystem_QuerySystemEvent_plt(a1 + 112, &v6);
  if ((_DWORD)result == 0) {
    v4 = *a2;
    *a2 = v6;
    v5 = *((unsigned __int8*)a2 + 4);
    *((_BYTE*)a2 + 4) = 0;
    if (v5 == 1) {
      nn_os_CloseNativeHandle_plt(v4);
      return 0;
    }
  }
  return result;
}

__int64 nn_audio_server_23b530(__int64 a1)
{
  nn_audio_server_AudioRenderSystem_SetRenderingTimeLimit_plt(a1 + 112);
  return 0;
}

__int64 nn_audio_server_23b550(__int64 a1, _DWORD* a2)
{
  int v2;

  v2 = *(_DWORD*)(a1 + 244);
  *a2 = v2;
  return 0;
}

__int64 nn_audio_server_23b570(__int64 a1)
{
  nn_audio_server_AudioRenderSystem_SetVoiceDropParameter_plt(a1 + 112);
  return 0;
}

__int64 nn_audio_server_23b590(__int64 a1, _DWORD* a2)
{
  int v2;

  v2 = *(_DWORD*)(a1 + 248);
  *a2 = v2;
  return 0;
}

__int64 nn_audio_server_23b5a0(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 result;

  if (*(_BYTE*)(a1 + 1632) == 1) {
    nn_audio_server_AudioRenderSystem_Finalize_plt(a1 + 96);
  }
  v2 = *(__int64**)(a1 + 80);
  nn_os_SdkMutexType_Lock_plt(&SdkData_f1f010);
  v3 = *v2;
  *v2 = (__int64)SdkData_f1f018;
  *(_QWORD*)(v3 + 8) = &SdkData_f1f018;
  *((_QWORD*)SdkData_f1f018 + 1) = v2;
  SdkData_f1f018 = (_UNKNOWN*)v3;
  v4 = nn_os_SdkMutexType_Unlock_plt(&SdkData_f1f010);
  v5 = nn_audio_dsp_WaitForUnmap_plt(v4);
  if (*(_BYTE*)(a1 + 73) == 1) {
    v6 = nn_audio_server_AudioRenderSystemManager_GetInstance_plt(v5);
    nn_audio_server_AudioRenderSystemManager_Remove_plt(v6, a1 + 96);
  }
  v7 = nn_audio_server_AudioRenderSystem_GetSessionId_plt(a1 + 96);
  v8 = *(_QWORD*)a1;
  v9 = v7;
  nn_os_SdkMutexType_Lock_plt(*(_QWORD*)a1 + 6212LL);
  v10 = *(int*)(v8 + 6208) - 1LL;
  *(_DWORD*)(v8 + 6208) = v10;
  *(_DWORD*)(v8 + 4 * v10 + 6200) = v9;
  nn_os_SdkMutexType_Unlock_plt(v8 + 6212);
  if (*(_BYTE*)(a1 + 1632) == 1) {
    if (*(_BYTE*)(a1 + 1020) == 1) {
      *(_BYTE*)(a1 + 1020) = 0;
    }
    if (*(_BYTE*)(a1 + 1032) == 1) {
      *(_BYTE*)(a1 + 1032) = 0;
    }
    nn_os_FinalizeEvent_plt(a1 + 784);
    *(_BYTE*)(a1 + 1632) = 0;
  }
  if (*(_BYTE*)(a1 + 72) == 1) {
    nn_os_UnmapTransferMemory_plt(a1 + 8);
    if (*(_BYTE*)(a1 + 1632) == 1) {
      if (*(_BYTE*)(a1 + 1020) == 1) {
        *(_BYTE*)(a1 + 1020) = 0;
      }
      if (*(_BYTE*)(a1 + 1032) == 1) {
        *(_BYTE*)(a1 + 1032) = 0;
      }
      nn_os_FinalizeEvent_plt(a1 + 784);
    }
  }
  if (*(_BYTE*)(a1 + 8) != 0) {
    nn_os_DestroyTransferMemory_plt(a1 + 8);
  }
  result = *(_QWORD*)a1;
  if (*(_QWORD*)a1 != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  return result;
}

__int64 nn_audio_server_23b730(__int64 a1)
{
  __int64 result;
  _QWORD* v3;

  result = nn_sf_impl_detail_ServiceObjectImplBase2_ReleaseImpl_plt(a1 + 32);
  if ((result & 1) != 0) {
    v3 = *(_QWORD**)(a1 + 40);
    nn_audio_server_AudioRendererManagerImpl_AudioDeviceImpl_Destroy_AudioDeviceImpl_plt(
        a1 + 8);
    nn_os_LockMutex_plt(v3 + 1);
    nn_lmem_FreeToExpHeap_plt(*v3, a1);
    return nn_os_UnlockMutex_plt(v3 + 1);
  }
  return result;
}

__int64 nn_audio_server_23b8e0()
{
  _QWORD* v0;
  _QWORD* v1;
  int v3;

  SdkData_f1f010 = 0;
  SdkData_f1f018 = &SdkData_f1f018;
  SdkData_f1f020 = (__int64)&SdkData_f1f018;
  SdkData_f1f028 = &SdkData_f1f028;
  SdkData_f1f030 = (__int64)&SdkData_f1f028;
  v3 = nn_os_CreateSystemEvent_plt(&SdkData_f1f038, 1, 0);
  if (v3 != 0 ||
      (SdkData_f1f068 = &SdkData_f1f068,
       SdkData_f1f070 = (__int64)&SdkData_f1f068,
       (v3 = nn_os_CreateSystemEvent_plt(&SdkData_f1f078, 1, 0)) != 0)) {
    nn_diag_detail_AbortImpl_plt_858db0(&v3);
  }
  v0 = SdkData_f1f028;
  SdkData_f1f028 = SdkData_f1f018;
  v0[1] = &SdkData_f1f018;
  *((_QWORD*)SdkData_f1f018 + 1) = &SdkData_f1f028;
  SdkData_f1f018 = v0;
  v1 = SdkData_f1f068;
  SdkData_f1f068 = v0;
  v1[1] = &SdkData_f1f018;
  *((_QWORD*)SdkData_f1f018 + 1) = &SdkData_f1f068;
  SdkData_f1f018 = v1;
  return fw_rtld_RegisterCrtDestructor();
}

#pragma GCC visibility pop
