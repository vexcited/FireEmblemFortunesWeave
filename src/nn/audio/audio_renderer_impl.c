#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_audio_BehaviorManager_CheckErrors_plt(_QWORD);
__int64 nn_audio_BehaviorManager_GetRevision_plt(_QWORD);
__int64 nn_audio_BehaviorManager_UpdateInParameter_plt(_QWORD, _QWORD);
__int64 nn_audio_BehaviorManager_UpdateOutStatus_plt(_QWORD, _QWORD);
__int64 nn_audio_EffectManager_UpdateEffectOutStatus_plt(_QWORD, _QWORD);
__int64 nn_audio_EffectManager_UpdateEffectsInParameter_plt(_QWORD, _QWORD);
__int64 nn_audio_MemoryPoolManager_UpdateInParameter_plt(_QWORD, _QWORD);
__int64 nn_audio_MemoryPoolManager_UpdateOutStatus_plt(_QWORD, _QWORD);
__int64 nn_audio_MixManager_UpdateMixInParameter_plt(_QWORD, _QWORD);
__int64 nn_audio_PerformanceBufferManager_GetBufferBase_plt(_QWORD);
__int64 nn_audio_PerformanceBufferManager_GetBufferSize_plt(_QWORD);
__int64 nn_audio_PerformanceBufferManager_UpdateInParameter_plt(_QWORD, _QWORD);
__int64 nn_audio_PerformanceBufferManager_UpdateOutStatus_plt(_QWORD, _QWORD);
__int64 nn_audio_SinkManager_UpdateSinkInParameter_plt(_QWORD, _QWORD);
__int64 nn_audio_SinkManager_UpdateSinkOutStatus_plt(_QWORD, _QWORD);
__int64 nn_audio_SplitterInfoManager_UpdateInParameter_plt(_QWORD, _QWORD);
__int64 nn_audio_VoiceInfoManager_UpdateVoiceOutStatus_plt(_QWORD, _QWORD);
__int64 nn_audio_VoiceInfoManager_UpdateVoiceRelatedParameters_plt(_QWORD,
                                                                   _QWORD,
                                                                   _QWORD,
                                                                   _QWORD);
__int64 nn_audio_detail_FindResourceExclusionCheckerFromInternalHandleImpl_plt(
    _QWORD);
__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_result_detail_ConvertInvalidImpl_plt(_QWORD);
extern void (*SdkData_e873b8[128])();
__int64 nn_audio_RequestUpdateAudioRenderer(__int64 a1, __int64 a2,
                                            __int64* a3);

__int64 nn_audio_RequestUpdateAudioRenderer(__int64 a1, __int64 a2, __int64* a3)
{
  int v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  unsigned int v13;
  __int64 v14;
  unsigned int v15;
  __int64 v16;
  unsigned int v17;
  __int64 v18;
  unsigned int v19;
  __int64 v20;
  unsigned int v21;
  __int64 v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  unsigned int v38;
  _DWORD* v39;
  __int64 v40;
  char* v41;
  __int64 v42;
  char* v43;
  __int64 v44;
  char* v45;
  __int64 v46;
  char* v47;
  __int64 v48;
  char* v49;
  __int64 v50;
  unsigned int v52;
  _QWORD v53[2];
  _QWORD v54[2];
  _QWORD v55[2];

  v5 = atomic_load((unsigned __int8*)SdkData_e873b8[0]);
  if (v5 == 1) {
    nn_audio_detail_FindResourceExclusionCheckerFromInternalHandleImpl_plt(a1);
  }
  v6 = a3[9];
  *(_DWORD*)v6 = nn_audio_BehaviorManager_GetRevision_plt(a3[6]);
  *(_QWORD*)(v6 + 4) = 0;
  *(_QWORD*)(v6 + 12) = 0;
  *(_QWORD*)(v6 + 20) = 0;
  *(_QWORD*)(v6 + 28) = 0;
  *(_QWORD*)(v6 + 36) = 0;
  *(_QWORD*)(v6 + 44) = 0;
  *(_QWORD*)(v6 + 52) = 0;
  *(_DWORD*)(v6 + 60) = 0;
  v7 = nn_audio_BehaviorManager_UpdateInParameter_plt(a3[6], v6 + 64);
  *(_DWORD*)(v6 + 4) = v7;
  v8 = v6 + 64 + v7;
  v9 = nn_audio_MemoryPoolManager_UpdateInParameter_plt(a3[5], v8);
  *(_DWORD*)(v6 + 8) = v9;
  v10 = v8 + v9;
  v55[0] = 0;
  v11 = *a3;
  v54[0] = 0;
  nn_audio_VoiceInfoManager_UpdateVoiceRelatedParameters_plt(v11, v10, v55,
                                                             v54);
  v12 = v55[0];
  v13 = v54[0];
  *(_DWORD*)(v6 + 12) = v55[0];
  *(_DWORD*)(v6 + 16) = v13;
  v14 = v10 + v12 + v13;
  v15 = nn_audio_EffectManager_UpdateEffectsInParameter_plt(a3[2], v14);
  *(_DWORD*)(v6 + 20) = v15;
  v16 = v14 + v15;
  v17 = nn_audio_SplitterInfoManager_UpdateInParameter_plt(a3[7], v16);
  *(_DWORD*)(v6 + 36) = v17;
  v18 = v16 + v17;
  v19 = nn_audio_MixManager_UpdateMixInParameter_plt(a3[1], v18);
  *(_DWORD*)(v6 + 24) = v19;
  v20 = v18 + v19;
  v21 = nn_audio_SinkManager_UpdateSinkInParameter_plt(a3[3], v20);
  *(_DWORD*)(v6 + 28) = v21;
  v22 =
      nn_audio_PerformanceBufferManager_UpdateInParameter_plt(a3[4], v20 + v21);
  v23 = *(_DWORD*)(v6 + 8);
  v24 = *(_DWORD*)(v6 + 24);
  v25 = *(_DWORD*)(v6 + 4) + *(_DWORD*)(v6 + 20);
  v27 = *(_DWORD*)(v6 + 36);
  v26 = *(_DWORD*)(v6 + 40);
  v28 = *(_DWORD*)(v6 + 28);
  v29 = *(_DWORD*)(v6 + 12);
  v30 = *(_DWORD*)(v6 + 16);
  *(_DWORD*)(v6 + 32) = v22;
  v31 =
      (unsigned int)(v22 + v25 + v23 + v24 + v26 + v28 + v27 + v29 + v30 + 64);
  *(_DWORD*)(v6 + 60) = v31;
  if (a3[10] < v31) {
    nn_diag_detail_AbortImpl_plt_856170(v22);
  }
  v32 = a3[4];
  v33 = a3[11];
  v34 = a3[12];
  v35 = nn_audio_PerformanceBufferManager_GetBufferBase_plt(v32);
  v36 = nn_audio_PerformanceBufferManager_GetBufferSize_plt(v32);
  v37 = a3[9];
  v55[0] = v33;
  v55[1] = v34;
  v54[0] = v35;
  v54[1] = v36;
  v53[0] = v37;
  v53[1] = v31;
  v38 = (*(__int64 (**)(__int64, _QWORD*, _QWORD*, _QWORD*))(
      *(_QWORD*)a1 + 64LL))(a1, v55, v54, v53);
  if (v38 == 0) {
    v39 = (_DWORD*)a3[11];
    v40 = nn_audio_MemoryPoolManager_UpdateOutStatus_plt(a3[5], v39 + 16);
    if (v40 != v39[2]) {
      goto LABEL_15;
    }
    v41 = (char*)v39 + v40 + 64;
    v42 = nn_audio_VoiceInfoManager_UpdateVoiceOutStatus_plt(*a3, v41);
    if (v42 != v39[3]) {
      goto LABEL_15;
    }
    v43 = &v41[v42];
    v44 = nn_audio_EffectManager_UpdateEffectOutStatus_plt(a3[2], v43);
    if (v44 != v39[5]) {
      goto LABEL_15;
    }
    v45 = &v43[v44];
    v46 = nn_audio_SinkManager_UpdateSinkOutStatus_plt(a3[3], v45);
    if (v46 == v39[7] &&
        (v47 = &v45[v46],
         (v48 = nn_audio_PerformanceBufferManager_UpdateOutStatus_plt(
              a3[4], v47)) == v39[8]) &&
        (v49 = &v47[v48], (v50 = nn_audio_BehaviorManager_UpdateOutStatus_plt(
                               a3[6], v49)) == v39[1]) &&
        (*(_QWORD*)a3[8] = *(_QWORD*)&v49[v50], v39[10] == 16)) {
      if (v39[15] == a3[12]) {
        return nn_audio_BehaviorManager_CheckErrors_plt(a3[6]);
      }
    }
    else {
    LABEL_15:
      v50 = nn_result_detail_ConvertInvalidImpl_plt(21145);
      if (a3[12] == 0) {
        return nn_audio_BehaviorManager_CheckErrors_plt(a3[6]);
      }
    }
    nn_diag_detail_AbortImpl_plt_856170(v50);
  }
  v52 = v38;
  if ((v38 & 0x3FFFFFLL) != 0x5299 && (v38 & 0x3FFDFF) != 0x5499) {
    LODWORD(v55[0]) = v38;
    nn_diag_detail_AbortImpl_plt_858db0(v55);
  }
  nn_audio_BehaviorManager_CheckErrors_plt(a3[6]);
  return v52;
}

#pragma GCC visibility pop
