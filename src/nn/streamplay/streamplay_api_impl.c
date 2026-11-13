#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void
    nn_streamplay_detail_CreateWorkBufferPerGuest_plt(PSEUDO_X8, _QWORD, _QWORD,
                                                      _QWORD, _QWORD);
__attribute__((swiftcall)) void
    nn_streamplay_detail_GetUserService_plt(PSEUDO_X8, _QWORD);
__int64 nn_audio_SetCallbackFuncForSetAudioDeviceOutputVolume_plt(_QWORD,
                                                                  _QWORD);
__int64 nn_audio_SetCallbackFuncForSetDeviceOutputVolumeAutoTuneModeEnabled_plt(
    _QWORD, _QWORD);
__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_diag_detail_NotNullImpl_plt(_QWORD);
__int64 nn_os_CloseNativeHandle_plt(_QWORD);
__int64 nn_os_DestroySystemEvent_plt(_QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 nn_pctl_EndFreeCommunicationForStreamPlay_plt(_QWORD);
__int64 nn_pctl_TryBeginFreeCommunicationForStreamPlay_plt(_QWORD);
__int64 nn_streamplay_detail_CalculateGuestCountFromMemorySize_plt(_QWORD,
                                                                   _QWORD,
                                                                   _QWORD);
__int64 nn_streamplay_detail_CalculateRequiredWorkBufferSizePerInterface_plt(
    _QWORD, _QWORD);
__int64 nn_streamplay_detail_CreateWorkBufferInProcessGlobal_plt(_QWORD, _QWORD,
                                                                 _QWORD,
                                                                 _QWORD);
unsigned __int128 nn_streamplay_detail_CreateWorkBufferInProcessGlobal_plt_pair(
    _QWORD, _QWORD, _QWORD,
    _QWORD) __asm__("nn_streamplay_detail_CreateWorkBufferInProcessGlobal_plt");
__int64 nn_streamplay_detail_IsAbortNeeded_plt(_QWORD);
__int64 nn_streamplay_detail_ShowMatchmakeSupportCore_plt(_QWORD, _QWORD,
                                                          _QWORD);
extern __int64 SdkData_e89230;
extern char SdkData_10556e8;
extern void (*SdkData_e89238[13])();
extern void (*SdkData_e89240[12])();
extern void (*SdkData_e89248[11])();
extern void (*SdkData_e89250[10])();
extern void (*SdkData_e89258[9])();
extern void (*SdkData_e89260[8])();
extern void (*SdkData_e89268[7])();
extern void (*SdkData_e89270[6])();
__int64 nn_streamplay_Finalize(void* this_);
__int64 nn_streamplay_StartStreaming(void* this_);
__int64 nn_streamplay_WriteGuestAudioStream(unsigned int a1, __int64 a2,
                                            unsigned int a3);
__int64 nn_streamplay_OpenSessionWithMatchmakeSupport_767140(_DWORD* a1,
                                                             char* a2, char a3);

__int64 nn_streamplay_Finalize(void* this_)
{
  __int64 v1;
  void(__attribute__((noreturn)) * v2)();
  void(__attribute__((noreturn)) * v3)();
  void(__attribute__((noreturn)) * v4)();
  int v6;

  v1 = nn_os_SdkMutexType_Lock_plt(SdkData_e89230);
  if ((*(_BYTE*)SdkData_e89238[0] & 1) == 0) {
    nn_diag_detail_AbortImpl_plt_856170(v1);
  }
  *(_BYTE*)SdkData_e89238[0] = 0;
  v2 = SdkData_e89258[0];
  if (*(_BYTE*)SdkData_e89258[0] == 1) {
    nn_pctl_EndFreeCommunicationForStreamPlay_plt(v1);
    *(_BYTE*)v2 = 0;
  }
  nn_audio_SetCallbackFuncForSetAudioDeviceOutputVolume_plt(0, 0);
  nn_audio_SetCallbackFuncForSetDeviceOutputVolumeAutoTuneModeEnabled_plt(0, 0);
  if (SdkData_10556e8 == 1) {
    SdkData_10556e8 = 0;
  }
  v6 = (*(__int64 (**)(_QWORD))(**(_QWORD**)SdkData_e89260[0] + 48LL))(
      *(_QWORD*)SdkData_e89260[0]);
  if (v6 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v6);
  }
  v3 = SdkData_e89248[0];
  *(_QWORD*)SdkData_e89240[0] = 0;
  *(_QWORD*)v3 = 0;
  *(_QWORD*)SdkData_e89268[0] = 0;
  *(_BYTE*)SdkData_e89270[0] = 0;
  v4 = SdkData_e89250[0];
  if (*((_BYTE*)SdkData_e89250[0] + (unsigned __int64)((__int64*)0x30LL)) ==
      1) {
    if (*((_BYTE*)SdkData_e89250[0] + (unsigned __int64)((__int64*)0x28LL)) !=
        0) {
      nn_os_DestroySystemEvent_plt(SdkData_e89250[0]);
    }
    *((_BYTE*)((__int64*)0x30LL) + (_QWORD)v4) = 0;
  }
  return nn_os_SdkMutexType_Unlock_plt(SdkData_e89230);
}

__int64 nn_streamplay_StartStreaming(void* this_)
{
  __int64 v1;
  void(__attribute__((noreturn)) * v2)();
  unsigned int v3;
  unsigned int v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  void(__attribute__((noreturn)) * v12)();
  void(__attribute__((noreturn)) * v13)();
  __int64 v14;
  __int64 v15;
  unsigned int v16;
  struct {
    unsigned int v18;
    char v19;
  } v18_;
  struct {
    unsigned int v20;
    char v21;
  } v20_;
  struct {
    unsigned int v22;
    char v23;
  } v22_;
  int v24;
  struct {
    __int64 v25;
    __int64 v26;
    __int64 v27;
    __int64 v28;
    __int64 v29;
    __int64 v30;
  } v25_;
  unsigned int v31;
  _BYTE v32[4];
  _BYTE v33[4];

  v1 = nn_os_SdkMutexType_Lock_plt(SdkData_e89230);
  if ((*(_BYTE*)SdkData_e89238[0] & 1) == 0) {
    nn_diag_detail_AbortImpl_plt_856170(v1);
  }
  if ((*(_BYTE*)SdkData_e89270[0] & 1) == 0) {
    v33[0] = 0;
    v32[0] = 0;
    v2 = SdkData_e89260[0];
    LODWORD(v25_.v25) = (*(__int64 (**)(_QWORD, _BYTE*))(
        **(_QWORD**)SdkData_e89260[0] + 336LL))(*(_QWORD*)SdkData_e89260[0],
                                                v33);
    if ((_DWORD)v25_.v25 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v25_.v25);
    }
    LODWORD(v25_.v25) =
        (*(__int64 (**)(_QWORD, _BYTE*))(**(_QWORD**)v2 + 344LL))(*(_QWORD*)v2,
                                                                  v32);
    if ((_DWORD)v25_.v25 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v25_.v25);
    }
    v3 = v33[0];
    v4 = nn_streamplay_detail_CalculateGuestCountFromMemorySize_plt(
        *(unsigned int*)SdkData_e89248[0], v33[0], v32[0]);
    v5 = *(_QWORD*)v2;
    v31 = 0;
    v6 = (*(__int64 (**)(__int64, unsigned int*))(*(_QWORD*)v5 + 328LL))(v5,
                                                                         &v31);
    if ((nn_streamplay_detail_IsAbortNeeded_plt(v6) & 1) != 0) {
      LODWORD(v25_.v25) = v6;
      if (v6 != 0) {
        nn_diag_detail_AbortImpl_plt_858db0(&v25_.v25);
      }
    }
    if ((int)v4 >= (int)v31) {
      v7 = v31;
    }
    else {
      v7 = v4;
    }
    v8 = nn_streamplay_detail_CalculateRequiredWorkBufferSizePerInterface_plt(
        v3, v32[0]);
    if ((int)v7 >= 1) {
      v9 = v8;
      v10 = 0;
      v11 = 0;
      v12 = SdkData_e89240[0];
      v13 = SdkData_e89268[0];
      do {
        if (v33[0] != 1) {
          goto LABEL_19;
        }
        v14 = *(_QWORD*)v13 + *(_QWORD*)v12;
        v25_.v29 = 0;
        v25_.v30 = 0;
        v25_.v27 = 0;
        v25_.v28 = 0;
        v25_.v25 = 0;
        v25_.v26 = 0;
        nn_streamplay_detail_CreateWorkBufferPerGuest_plt(
            (void*)(&v25_.v25), v3, v32[0], v10 + v14, v9);
        v15 = *(_QWORD*)v2;
        v22_.v23 = 1;
        v20_.v21 = 1;
        v18_.v19 = 1;
        v22_.v22 = v25_.v29;
        v20_.v20 = v25_.v25;
        v18_.v18 = v25_.v27;
        v24 = (*(__int64 (**)(__int64, _QWORD, unsigned int*, __int64,
                              unsigned int*, __int64, unsigned int*, __int64))(
            *(_QWORD*)v15 + 368LL))(v15, (unsigned int)v11, &v22_.v22, v25_.v30,
                                    &v20_.v20, v25_.v26, &v18_.v18, v25_.v28);
        if (v24 != 0) {
          nn_diag_detail_AbortImpl_plt_858db0(&v24);
        }
        if (v18_.v19 == 1) {
          nn_os_CloseNativeHandle_plt(v18_.v18);
          if (v20_.v21 != 1) {
          LABEL_17:
            if (v22_.v23 != 1) {
              goto LABEL_19;
            }
          LABEL_18:
            nn_os_CloseNativeHandle_plt(v22_.v22);
            goto LABEL_19;
          }
        }
        else if (v20_.v21 != 1) {
          goto LABEL_17;
        }
        nn_os_CloseNativeHandle_plt(v20_.v20);
        if (v22_.v23 == 1) {
          goto LABEL_18;
        }
      LABEL_19:
        v16 = (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)v2 + 56LL))(
            *(_QWORD*)v2, (unsigned int)v11);
        if ((nn_streamplay_detail_IsAbortNeeded_plt(v16) & 1) != 0) {
          LODWORD(v25_.v25) = v16;
          if (v16 != 0) {
            nn_diag_detail_AbortImpl_plt_858db0(&v25_.v25);
          }
        }
        ++v11;
        v10 += v9;
      } while (v7 != v11);
    }
    LODWORD(v25_.v25) =
        (*(__int64 (**)(_QWORD))(**(_QWORD**)v2 + 320LL))(*(_QWORD*)v2);
    if ((_DWORD)v25_.v25 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v25_.v25);
    }
    *(_BYTE*)SdkData_e89270[0] = 1;
  }
  return nn_os_SdkMutexType_Unlock_plt(SdkData_e89230);
}

__int64 nn_streamplay_WriteGuestAudioStream(unsigned int a1, __int64 a2,
                                            unsigned int a3)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  __int64 v11;
  int v12;
  _QWORD v13[2];
  _BYTE v14[4];
  unsigned int v15;

  v6 = nn_diag_detail_NotNullImpl_plt(a2);
  if ((v6 & 1) == 0) {
    nn_diag_detail_AbortImpl_plt_856170(v6);
  }
  if ((a3 & 0x80000000) != 0) {
    nn_diag_detail_AbortImpl_plt_856170(v6);
  }
  v7 = nn_os_SdkMutexType_Lock_plt(SdkData_e89230);
  if (*(_BYTE*)SdkData_e89238[0] == 1) {
    v15 = 0;
    v14[0] = 0;
    nn_streamplay_detail_GetUserService_plt((void*)(v13), v7);
    LODWORD(v11) = (*(__int64 (**)(_QWORD, _BYTE*))(*(_QWORD*)v13[0] + 336LL))(
        v13[0], v14);
    if ((_DWORD)v11 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v11);
    }
    v8 = v13[0];
    if (v13[0] != 0) {
      v8 = (*(__int64 (**)(_QWORD))(*(_QWORD*)v13[0] + 8LL))(v13[0]);
    }
    v13[0] = a2;
    v13[1] = 4LL * a3;
    nn_streamplay_detail_GetUserService_plt((void*)(&v11), v8);
    v12 = (*(__int64 (**)(__int64, unsigned int*, _QWORD, _QWORD*, _QWORD))(
        *(_QWORD*)v11 + 136LL))(v11, &v15, a1, v13, a3);
    if (v12 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v12);
    }
    if (v11 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 8LL))(v11);
    }
    v9 = v15;
  }
  else {
    v9 = 0;
  }
  nn_os_SdkMutexType_Unlock_plt(SdkData_e89230);
  return v9;
}

__int64 nn_streamplay_OpenSessionWithMatchmakeSupport_767140(_DWORD* a1,
                                                             char* a2, char a3)
{
  __int64 v6;
  int v7;
  int v8;
  unsigned int v9;
  unsigned int v10;
  __int64 v11;
  void(__attribute__((noreturn)) * v12)();
  int v13;
  __int64 v14;
  void(__attribute__((noreturn)) * v15)();
  int v16;
  __int64 v17;
  __int64 v18;
  void(__attribute__((noreturn)) * v19)();
  _QWORD* v20;
  void(__attribute__((noreturn)) * v21)();
  int v22;
  _QWORD* v23;
  __int64 v24;
  __int64 i;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned int v29;
  unsigned int v30;
  __int64 v31;
  __int64 v33;
  _BYTE v34[9];
  __int64 v35;
  _BYTE v36[15];
  struct {
    __int64 v37;
    __int64 v38;
    __int64 v39;
    __int64 v40;
    __int64 v41;
    __int64 v42;
    __int64 v43;
    __int64 v44;
    __int64 v45;
    __int64 v46;
    __int64 v47;
    __int64 v48;
    __int64 v49;
    __int64 v50;
    __int64 v51;
    __int64 v52;
  } v37_;
  struct {
    unsigned int v53;
    char v54;
  } v53_;
  struct {
    unsigned int v55;
    char v56;
  } v55_;
  int v57;
  _BYTE v58[4];
  _BYTE v59[4];
  _QWORD v60[23];

  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v6 = nn_diag_detail_NotNullImpl_plt(a1),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((v6 & 1) == 0) {
    nn_diag_detail_AbortImpl_plt_856170(v6),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v7 = *a2;
  if (v7 <= 0) {
    nn_diag_detail_AbortImpl_plt_856170(v6),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if (v7 > a2[1]) {
    nn_diag_detail_AbortImpl_plt_856170(v6),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if ((unsigned __int8)a2[1] >= 4u) {
    nn_diag_detail_AbortImpl_plt_856170(v6),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v8 = a2[2];
  if (v8 <= 0) {
    nn_diag_detail_AbortImpl_plt_856170(v6),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if (v8 > a2[3]) {
    nn_diag_detail_AbortImpl_plt_856170(v6),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if ((unsigned __int8)a2[3] >= 3u) {
    nn_diag_detail_AbortImpl_plt_856170(v6),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v9 = *((_DWORD*)a2 + 2);
  if ((~v9 & 0x18) == 0) {
    nn_diag_detail_AbortImpl_plt_856170(v6),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if (v9 >= 0x40) {
    nn_diag_detail_AbortImpl_plt_856170(v6),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if (*((unsigned __int16*)a2 + 6) >= 0x20u) {
    nn_diag_detail_AbortImpl_plt_856170(v6),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v10 = *((unsigned __int16*)a2 + 7);
  if (v10 >= 8) {
    nn_diag_detail_AbortImpl_plt_856170(v6),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if (v10 >= 2 && v10 != 3) {
    nn_diag_detail_AbortImpl_plt_856170(v6),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v11 = nn_os_SdkMutexType_Lock_plt(SdkData_e89230),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((*(_BYTE*)SdkData_e89238[0] & 1) == 0) {
    nn_diag_detail_AbortImpl_plt_856170(v11),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v12 = SdkData_e89258[0];
  v13 = *((_DWORD*)a2 + 2);
  *(_BYTE*)SdkData_e89258[0] = 0;
  if ((v13 & 0x18) != 0) {
    v11 = nn_pctl_TryBeginFreeCommunicationForStreamPlay_plt((v13 & 8) != 0),
    v17 = COERCE_AS(__typeof__(v17),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if ((v11 & 1) == 0) {
      v30 = 31007;
      goto LABEL_58;
    }
    *(_BYTE*)v12 = 1;
  }
  memset(v60, 0, 176);
  v59[0] = 0;
  nn_streamplay_detail_GetUserService_plt((void*)(&v37_.v37), v11),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_DWORD*)v34 = (*(__int64 (**)(__int64, _BYTE*))(*(_QWORD*)v37_.v37 +
                                                    336LL))(v37_.v37, v59),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (*(_DWORD*)v34 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(v34),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v14 = v37_.v37;
  if (v37_.v37 != 0) {
    v14 = (*(__int64 (**)(__int64))(*(_QWORD*)v37_.v37 + 8LL))(v37_.v37),
    v17 = COERCE_AS(__typeof__(v17),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v58[0] = 0;
  nn_streamplay_detail_GetUserService_plt((void*)(&v37_.v37), v14),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_DWORD*)v34 = (*(__int64 (**)(__int64, _BYTE*))(*(_QWORD*)v37_.v37 +
                                                    344LL))(v37_.v37, v58),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (*(_DWORD*)v34 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(v34),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if (v37_.v37 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v37_.v37 + 8LL))(v37_.v37),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v15 = SdkData_e89240[0];
  v16 = ({
    unsigned __int128 r_ =
        nn_streamplay_detail_CreateWorkBufferInProcessGlobal_plt_pair(
            v59[0], v58[0], *(_QWORD*)SdkData_e89240[0],
            *(_QWORD*)SdkData_e89248[0]);
    v17 = COERCE_AS(__typeof__(v17), (unsigned long long)(r_ >> 64));
    (__int64)(unsigned long long)r_;
  });
  v18 = v17;
  v19 = SdkData_e89260[0];
  LODWORD(v37_.v37) = v16;
  BYTE4(v37_.v37) = 1;
  v20 = X8CALL_X0(_QWORD*, (*(__attribute__((swiftcall)) void (**)(
                               PSEUDO_X8, _QWORD, __int64*, __int64))(
                               **(_QWORD**)SdkData_e89260[0] + 360LL))(
                               (void*)*(_QWORD**)SdkData_e89260[0],
                               *(_QWORD*)SdkData_e89260[0], &v37_.v37, v17)),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_DWORD*)v34 = (_DWORD)v20;
  if ((_DWORD)v20 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(v34),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if (BYTE4(v37_.v37) == 1) {
    v20 = (_QWORD*)nn_os_CloseNativeHandle_plt((unsigned int)v37_.v37),
    v17 = COERCE_AS(__typeof__(v17),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v21 = SdkData_e89268[0];
  v22 = v59[0];
  *(_QWORD*)SdkData_e89268[0] = v18;
  if (v22 != 0) {
    goto LABEL_40;
  }
  v20 = (_QWORD*)
      nn_streamplay_detail_CalculateRequiredWorkBufferSizePerInterface_plt(
          0, v58[0]),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (a2[1] >= 1) {
    v23 = v20;
    v24 = 0;
    for (i = 0; i < a2[1]; ++i) {
      v26 = *(_QWORD*)v21 + *(_QWORD*)v15;
      v37_.v41 = 0;
      v37_.v42 = 0;
      v37_.v39 = 0;
      v37_.v40 = 0;
      v37_.v37 = 0;
      v37_.v38 = 0;
      nn_streamplay_detail_CreateWorkBufferPerGuest_plt(
          (void*)(&v37_.v37), v59[0], v58[0], v24 + v26, v23),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v27 = *(_QWORD*)v19;
      v34[4] = 1;
      v55_.v56 = 1;
      v53_.v54 = 1;
      *(_DWORD*)v34 = v37_.v41;
      v55_.v55 = v37_.v37;
      v53_.v53 = v37_.v39;
      v20 = (_QWORD*)(*(__int64 (**)(__int64, _QWORD, _BYTE*, __int64,
                                     unsigned int*, __int64, unsigned int*,
                                     __int64))(*(_QWORD*)v27 + 368LL))(
          v27, (unsigned int)i, v34, v37_.v42, &v55_.v55, v37_.v38, &v53_.v53,
          v37_.v40),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v57 = (int)v20;
      if ((_DWORD)v20 != 0) {
        nn_diag_detail_AbortImpl_plt_858db0(&v57),
            v17 = COERCE_AS(__typeof__(v17),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      if (v53_.v54 == 1) {
        v20 = (_QWORD*)nn_os_CloseNativeHandle_plt(v53_.v53),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (v55_.v56 != 1) {
          goto LABEL_34;
        }
      }
      else if (v55_.v56 != 1) {
      LABEL_34:
        if (v34[4] == 1) {
          goto LABEL_38;
        }
        goto LABEL_30;
      }
      v20 = (_QWORD*)nn_os_CloseNativeHandle_plt(v55_.v55),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v34[4] == 1) {
      LABEL_38:
        v20 = (_QWORD*)nn_os_CloseNativeHandle_plt(*(unsigned int*)v34),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    LABEL_30:
      v24 += (__int64)v23;
    }
  }
  v22 = v59[0];
  v12 = SdkData_e89258[0];
  if (v59[0] != 0) {
  LABEL_40:
    if (v22 != 1) {
      nn_diag_detail_AbortImpl_plt_856170(v20),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    if (a3 != 0) {
      nn_diag_detail_AbortImpl_plt_856170(v20),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  v28 = *(_QWORD*)v19;
  v37_.v51 = 0;
  v37_.v52 = 0;
  v37_.v49 = 0;
  v37_.v50 = 0;
  v37_.v47 = 0;
  v37_.v48 = 0;
  v37_.v45 = 0;
  v37_.v46 = 0;
  v37_.v43 = 0;
  v37_.v44 = 0;
  v37_.v41 = 0;
  v37_.v42 = 0;
  v37_.v39 = 0;
  v37_.v40 = 0;
  v37_.v37 = 0;
  v37_.v38 = 0;
  memset(v36, 0, sizeof(v36));
  v35 = 0;
  *(_QWORD*)&v34[1] = 0;
  v34[0] = a3;
  v29 = (*(__int64 (**)(__int64, __int64*, char*, _BYTE*))(
      *(_QWORD*)v28 + 408LL))(v28, &v37_.v37, a2, v34),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v29 != 0) {
    v30 = v29;
    v33 = *(_QWORD*)&v29 & 0x3FFFFFLL;
    v31 = nn_streamplay_detail_IsAbortNeeded_plt(v29),
    v17 = COERCE_AS(__typeof__(v17),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v33 > 3125534) {
      if (v33 <= 3277598) {
        if (v33 == 3125535) {
          if ((v31 & 1) != 0) {
            *(_DWORD*)v34 = v30;
            nn_diag_detail_AbortImpl_plt_858db0(v34),
                v17 =
                    COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          goto LABEL_56;
        }
        if (v33 == 3126047) {
          if ((v31 & 1) != 0) {
            *(_DWORD*)v34 = v30;
            nn_diag_detail_AbortImpl_plt_858db0(v34),
                v17 =
                    COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          goto LABEL_56;
        }
      }
      else {
        switch (v33) {
        case 3277599LL:
          if ((v31 & 1) != 0) {
            *(_DWORD*)v34 = v30;
            nn_diag_detail_AbortImpl_plt_858db0(v34),
                v17 =
                    COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          goto LABEL_56;
        case 3281183LL:
          if ((v31 & 1) != 0) {
            *(_DWORD*)v34 = v30;
            nn_diag_detail_AbortImpl_plt_858db0(v34),
                v17 =
                    COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          goto LABEL_56;
        case 3379999LL:
          if ((v31 & 1) != 0) {
            *(_DWORD*)v34 = v30;
            nn_diag_detail_AbortImpl_plt_858db0(v34),
                v17 =
                    COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          goto LABEL_56;
        default:
          break;
        }
      }
    }
    else if (v33 <= 3123998) {
      if (v33 == 3078431) {
        if ((v31 & 1) != 0) {
          *(_DWORD*)v34 = v30;
          nn_diag_detail_AbortImpl_plt_858db0(v34),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        goto LABEL_56;
      }
      if (v33 == 3079967) {
        if ((v31 & 1) != 0) {
          *(_DWORD*)v34 = v30;
          nn_diag_detail_AbortImpl_plt_858db0(v34),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        goto LABEL_56;
      }
    }
    else {
      switch (v33) {
      case 3123999LL:
        if ((v31 & 1) != 0) {
          *(_DWORD*)v34 = v30;
          nn_diag_detail_AbortImpl_plt_858db0(v34),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        goto LABEL_56;
      case 3124511LL:
        if ((v31 & 1) != 0) {
          *(_DWORD*)v34 = v30;
          nn_diag_detail_AbortImpl_plt_858db0(v34),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        goto LABEL_56;
      case 3125023LL:
        if ((v31 & 1) != 0) {
          *(_DWORD*)v34 = v30;
          nn_diag_detail_AbortImpl_plt_858db0(v34),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        goto LABEL_56;
      default:
        break;
      }
    }
    if ((v31 & 1) != 0) {
      *(_DWORD*)v34 = v30;
      nn_diag_detail_AbortImpl_plt_858db0(v34),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    goto LABEL_56;
  }
  v30 =
      nn_streamplay_detail_ShowMatchmakeSupportCore_plt(v60, v59[0], &v37_.v37),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v31 = nn_streamplay_detail_IsAbortNeeded_plt(v30),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((v31 & 1) != 0) {
    *(_DWORD*)v34 = v30;
    if (v30 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(v34),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  else if (v30 != 0) {
    goto LABEL_56;
  }
  if ((signed __int64)v60[0] > 0LL) {
    v30 = 0;
    *a1 = v60[0];
    goto LABEL_58;
  }
  if (v59[0] == 0) {
    v30 = (*(__int64 (**)(_QWORD))(**(_QWORD**)v19 + 392LL))(*(_QWORD*)v19),
    v17 = COERCE_AS(__typeof__(v17),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v31 = nn_streamplay_detail_IsAbortNeeded_plt(v30),
    v17 = COERCE_AS(__typeof__(v17),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if ((v31 & 1) != 0) {
      *(_DWORD*)v34 = v30;
      if (v30 != 0) {
        nn_diag_detail_AbortImpl_plt_858db0(v34),
            v17 = COERCE_AS(__typeof__(v17),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
    else if (v30 != 0) {
      goto LABEL_56;
    }
    v31 = (*(__int64 (**)(_QWORD))(**(_QWORD**)v19 + 376LL))(*(_QWORD*)v19),
    v17 = COERCE_AS(__typeof__(v17),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if ((_DWORD)v31 != 0) {
      v30 = v31;
      if ((v31 & 0x3FC1FF) != 0xCB) {
        *(_DWORD*)v34 = v31;
        nn_diag_detail_AbortImpl_plt_858db0(v34),
            v17 = COERCE_AS(__typeof__(v17),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      goto LABEL_56;
    }
  }
  v30 = 15647;
LABEL_56:
  if (*(_BYTE*)v12 == 1) {
    nn_pctl_EndFreeCommunicationForStreamPlay_plt(v31),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    *(_BYTE*)v12 = 0;
  }
LABEL_58:
  nn_os_SdkMutexType_Unlock_plt(SdkData_e89230),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  return v30;
}

#pragma GCC visibility pop
