#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void
    nn_codec_hwacod_shim_GetClientHipcSession_plt(PSEUDO_X8, _QWORD);
__attribute__((swiftcall)) void
    nn_codec_hwacod_shim_WorkBufferSizeCalculator_GetSharedMemoryParameter_plt(
        PSEUDO_X8, _QWORD);
__int64 memset_plt(void* this_, void*, int);
__int64 nn_audio_driver_FlushDataCache_plt(_QWORD, _QWORD);
__int64 nn_codec_hwacod_shim_InstanceAccessor_GetWorkBufferSize_plt(_QWORD);
__int64 nn_codec_hwacod_shim_InstanceAccessor_Initialize_plt(_QWORD, _QWORD,
                                                             _QWORD, _QWORD);
__int64 nn_codec_hwacod_shim_IoBufferManager_GetWorkBufferSize_plt(_QWORD);
__int64 nn_codec_hwacod_shim_IoBufferManager_Initialize_plt(_QWORD, _QWORD,
                                                            _QWORD, _QWORD,
                                                            _QWORD);
__int64 nn_codec_hwacod_shim_TaskProducer_GetWorkBufferSize_plt(_QWORD);
__int64 nn_codec_hwacod_shim_TaskProducer_Initialize_plt(_QWORD, _QWORD, _QWORD,
                                                         _QWORD, _QWORD);
__int64 nn_codec_util_detail_FixedQueueImpl_FixedQueueImpl_plt(_QWORD, _QWORD,
                                                               _QWORD);
__int64 nn_codec_util_detail_FixedQueueImpl_Push_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_diag_detail_NotNullImpl_plt(_QWORD);
__int64 nn_os_AttachReadableHandleToSystemEvent_plt(_QWORD, _QWORD, _QWORD,
                                                    _QWORD);
__int64 nn_os_CloseNativeHandle_plt(_QWORD);
__int64 nn_os_CreateTransferMemory_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_os_DestroyTransferMemory_plt(_QWORD);
__int64 nn_os_DetachTransferMemory_plt(_QWORD);
__int64 nn_os_FlushDataCache_plt(void* this_, const void*);
__int64 nn_os_GetCurrentProcessHandle_plt(_QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 nn_codec_hwacod_shim_HardwareAudioCodecManager_Initialize(
    __int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5,
    unsigned int a6);

__int64 nn_codec_hwacod_shim_HardwareAudioCodecManager_Initialize(
    __int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5,
    unsigned int a6)
{
  __int64 v11;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  int v16;
  __int64 v17;
  void* v18;
  void* v19;
  int v22;
  __int64 v24;
  __int64 v25;
  int v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  int v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  unsigned int v45;
  unsigned int v46;
  unsigned int v47;
  __int64 v48;
  unsigned __int64 v49;
  char* v50;
  unsigned int v51;
  __int64 v52;
  struct {
    unsigned int v55;
    char v56;
  } v55_;
  struct {
    unsigned int v57;
    char v58;
  } v57_;
  struct {
    __int64 v59;
    unsigned int v60;
  } v59_;
  __int64 v61;
  __int64 v62;
  _QWORD v63[2];

  v11 = nn_os_SdkMutexType_Lock_plt(a1 + 1152);
  if (a4 < *(_QWORD*)(a5 + 296)) {
    nn_diag_detail_AbortImpl_plt_856170(v11);
  }
  v13 = *(unsigned int*)(a5 + 304);
  v14 = (a3 + 4095) & 0xFFFFFFFFFFFFF000LL;
  v15 = *(unsigned int*)(a5 + 312);
  v16 = *(_DWORD*)(a5 + 320);
  v17 = *(unsigned int*)(a5 + 324);
  v18 = (void*)(v14 + *(unsigned int*)(a5 + 316));
  v19 = (void*)(v14 + *(unsigned int*)(a5 + 308));
  if (*(_BYTE*)(a1 + 96) == 1) {
    *(_BYTE*)(a1 + 96) = 0;
  }
  *(_QWORD*)(a1 + 80) = v19;
  *(_QWORD*)(a1 + 88) = v13;
  memset_plt(v19, nullptr, v13);
  nn_os_FlushDataCache_plt(*(void**)(a1 + 80), *(const void**)(a1 + 88));
  v22 = *(unsigned __int8*)(a1 + 120);
  *(_BYTE*)(a1 + 96) = 1;
  if (v22 == 1) {
    *(_BYTE*)(a1 + 120) = 0;
  }
  *(_QWORD*)(a1 + 104) = v18;
  *(_QWORD*)(a1 + 112) = v15;
  memset_plt(v18, nullptr, v15);
  nn_os_FlushDataCache_plt(*(void**)(a1 + 104), *(const void**)(a1 + 112));
  v24 = *(_QWORD*)(a1 + 80);
  v25 = *(_QWORD*)(a1 + 88);
  v26 = *(unsigned __int8*)(a1 + 64);
  *(_BYTE*)(a1 + 120) = 1;
  if (v26 == 1) {
    if (*(_BYTE*)a1 != 0) {
      v27 = v24;
      v28 = v25;
      nn_os_DestroyTransferMemory_plt(a1);
      v25 = v28;
      v24 = v27;
    }
    *(_BYTE*)(a1 + 64) = 0;
  }
  LODWORD(v59_.v59) = nn_os_CreateTransferMemory_plt(a1, v24, v25, 3);
  if ((_DWORD)v59_.v59 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v59_.v59);
  }
  v29 = *(_QWORD*)(a1 + 104);
  v30 = *(unsigned __int8*)(a1 + 408);
  *(_BYTE*)(a1 + 64) = 1;
  v31 = v29 + *(unsigned int*)(a5 + 368);
  v32 = *(int*)(a5 + 292);
  if (v30 == 1) {
    *(_BYTE*)(a1 + 408) = 0;
  }
  *(_QWORD*)(a1 + 384) = v31;
  *(_QWORD*)(a1 + 392) = v31 + 128;
  *(_QWORD*)(a1 + 400) = v32 + 1;
  *(_QWORD*)(v31 + 64) = 1;
  v33 = nn_audio_driver_FlushDataCache_plt(*(_QWORD*)(a1 + 384) + 64LL, 64);
  *(_BYTE*)(a1 + 408) = 1;
  v62 = 0;
  nn_codec_hwacod_shim_GetClientHipcSession_plt((void*)(&v62), v33);
  v34 = v62;
  v61 = 0;
  nn_codec_hwacod_shim_WorkBufferSizeCalculator_GetSharedMemoryParameter_plt(
      (void*)(&v59_.v59), a5);
  v35 = nn_os_DetachTransferMemory_plt(a1);
  v57_.v57 = v35;
  v57_.v58 = 1;
  v55_.v55 = nn_os_GetCurrentProcessHandle_plt(v35);
  v55_.v56 = 0;
  v36 = *(unsigned int*)(a1 + 88);
  v37 = *(_QWORD*)(a1 + 104);
  v63[0] = a1 + 72;
  LODWORD(v63[0]) =
      (*(__int64 (**)(__int64, _QWORD*, __int64*, __int64, __int64*,
                      unsigned int*, unsigned int*, __int64, __int64, _QWORD,
                      _QWORD, int, _QWORD))(*(_QWORD*)v34 + 72LL))(
          v34, v63, &v61, a1 + 1168, &v59_.v59, &v57_.v57, &v55_.v55, v36, v37,
          *(unsigned int*)(a1 + 112), a6, 1, 0);
  if (LODWORD(v63[0]) != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(v63);
  }
  if (v55_.v56 == 1) {
    nn_os_CloseNativeHandle_plt(v55_.v55);
    if (v57_.v58 != 1) {
    LABEL_16:
      v38 = *(int*)(a5 + 288);
      v39 = v14 + v17;
      if (*(_BYTE*)(a1 + 320) != 1) {
        goto LABEL_18;
      }
      goto LABEL_17;
    }
  }
  else if (v57_.v58 != 1) {
    goto LABEL_16;
  }
  nn_os_CloseNativeHandle_plt(v57_.v57);
  v38 = *(int*)(a5 + 288);
  v39 = v14 + v17;
  if (*(_BYTE*)(a1 + 320) == 1) {
  LABEL_17:
    *(_BYTE*)(a1 + 320) = 0;
  }
LABEL_18:
  v40 = (4 * v38) | 1;
  nn_codec_util_detail_FixedQueueImpl_FixedQueueImpl_plt(a1 + 128, v39, v40);
  v41 = nn_diag_detail_NotNullImpl_plt(v39);
  if ((v41 & 1) == 0) {
    nn_diag_detail_AbortImpl_plt_856170(v41);
  }
  if ((int)v38 <= 0) {
    nn_diag_detail_AbortImpl_plt_856170(v41);
  }
  v42 = v17 - (unsigned int)(v17 + v16);
  if (v42 <= 4 * v38) {
    nn_diag_detail_AbortImpl_plt_856170(v41);
  }
  LODWORD(v59_.v59) = 0;
  *(_BYTE*)(a1 + 320) = 1;
  do {
    nn_codec_util_detail_FixedQueueImpl_Push_plt(a1 + 128, &v59_.v59, 4);
    LODWORD(v59_.v59) = v59_.v59 + 1;
  } while ((int)v59_.v59 < (int)v38);
  v43 = v39 + v40;
  v44 = v42 + v40;
  v45 = nn_codec_hwacod_shim_InstanceAccessor_Initialize_plt(a1 + 416, v43, v44,
                                                             (unsigned int)v38);
  if (v45 == 0) {
    v46 = nn_codec_hwacod_shim_InstanceAccessor_GetWorkBufferSize_plt(
        (unsigned int)v38);
    v47 = *(_DWORD*)(a5 + 392);
    v48 = v43 + v46;
    v49 = v44 + v46;
    v50 = (char*)v18 + *(unsigned int*)(a5 + 360);
    v59_.v59 = *(_QWORD*)(a5 + 384);
    v59_.v60 = v47;
    v45 = nn_codec_hwacod_shim_IoBufferManager_Initialize_plt(
        a1 + 448, v48, v49, &v59_.v59, v50);
    if (v45 == 0) {
      v51 =
          nn_codec_hwacod_shim_IoBufferManager_GetWorkBufferSize_plt(v59_.v60);
      nn_codec_hwacod_shim_TaskProducer_Initialize_plt(
          a1 + 832, v48 + v51, v49 + v51, v59_.v60,
          *(unsigned int*)(a1 + 1168));
      nn_codec_hwacod_shim_TaskProducer_GetWorkBufferSize_plt(v59_.v60);
      nn_os_AttachReadableHandleToSystemEvent_plt(a2, (unsigned int)v61,
                                                  BYTE4(v61), 1);
      if (BYTE4(v61) == 1) {
        BYTE4(v61) = 0;
        LODWORD(v61) = 0;
      }
      v52 = *(unsigned int*)(a5 + 376);
      *(_BYTE*)(a1 + 1172) = 1;
      *(_QWORD*)(a1 + 1160) = v52;
    }
  }
  if (BYTE4(v61) == 1) {
    nn_os_CloseNativeHandle_plt((unsigned int)v61);
  }
  if (v62 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v62 + 8LL))(v62);
  }
  nn_os_SdkMutexType_Unlock_plt(a1 + 1152);
  return v45;
}

#pragma GCC visibility pop
