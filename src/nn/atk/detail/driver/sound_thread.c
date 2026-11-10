#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_289fa0(__int64);
__int64 GameRoutine_2b4940(_QWORD);
__int64 GameRoutine_2b4a10(_QWORD);
__int64 GameRoutine_2b4a20(_QWORD);
__int64 SoundVoiceNX_14e360(_QWORD, _QWORD);
__int64 nn_os_FinalizeMessageQueue(_QWORD);
__int64 nn_os_FinalizeMutex(_QWORD);
__int64 nn_os_FinalizeReaderWriterLock(_QWORD);
__int64 nn_os_GetSystemTick(_QWORD);
__int64 nn_os_JamMessageQueue(_QWORD, _QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
extern __int64 GameData_2135418[3];
void GameRoutine_651250(void*, unsigned __int64);
__int64 SoundThread_Destructor(_QWORD* a1);
__int64 SoundThread_2a1da0(__int64* a1);
__int64 SoundThread_2a1de0(__int64 result);
__int64 SoundThread_2a1ee0(__int64 a1, _QWORD* a2);
__int64 SoundThread_2a1f40(__int64 a1, __int64 a2);
__int64 SoundThread_2a1fa0(__int64 result, __int64 a2);
__int64 SoundThread_2a1fd0(__int64 result, __int64 a2);
void SoundThread_DeletingDestructor(_QWORD* a1);
__int64 nn_audio_ExecuteAudioRendererRendering(_QWORD, _QWORD);
__int64 nn_diag_detail_AbortImpl_1a0a080(_QWORD);
__int64 SoundThread_289fa0(__int64 a1);
__int64 BaseNx_28b1a0(_QWORD);
__int64 BaseNx_2a1860(void);
__int64 BaseNx_2a18e0(_QWORD);
__int64 GameRoutine_289fe0(_QWORD);
__int64 GameRoutine_28b220(_QWORD, _QWORD);
__int64 GameRoutine_2a0ec0(_QWORD);
__int64 GameRoutine_2a2020(__int64, int);
__int64 GameRoutine_2ab960(_QWORD, _QWORD);
__int64 SoundArchivePlayer_289d60(_QWORD);
__int64 SoundVoiceNX_14e360_alt1(_QWORD) __asm__("SoundVoiceNX_14e360");
__int64 SoundVoiceNx_2abaa0(_QWORD, _QWORD);
__int64 nn_os_AcquireReadLock(_QWORD);
__int64 nn_os_ReleaseReadLock(_QWORD);
__int64 nn_os_SleepThread(_QWORD);
__int64 nn_os_TryReceiveMessageQueue(_QWORD, _QWORD);
__int64 SoundThread_Unknown2(__int64 LockEPNS0_20ReaderWriterLockTypeE);
__int64 BaseNx_28b440(__int64, int);
__int64 GameRoutine_289a60(__int64, __int64);
__int64 GameRoutine_2b4910(__int64 result);
__int64 GameRoutine_2b4950(__int64, __int64);
__int64 GameRoutine_2b8cb0(__int64, __int64);
__int64 memset(_QWORD, _QWORD, _QWORD);
__int64 nn_audio_GetSinkNodeId_1a0c520(_QWORD);
__int64 nn_audio_GetSinkNodeId_1a0c530(_QWORD);
__int64 nn_audio_GetSubMixNodeId(_QWORD);
__int64 nn_audio_PerformanceInfo_GetEntries(_QWORD, _QWORD);
__int64 nn_audio_PerformanceInfo_GetFrameIndex(_QWORD);
__int64 nn_audio_PerformanceInfo_GetTotalProcessingTime(_QWORD);
__int64 nn_audio_PerformanceInfo_GetVoiceDropCount(_QWORD);
__int64 nn_audio_PerformanceInfo_IsRenderingTimeLimitExceeded(_QWORD);
__int64 nn_os_ConvertToTick(_QWORD);
__int64 nn_os_SendMessageQueue(_QWORD, _QWORD);
void* SoundVoiceNX_14e360_alt2() __asm__("SoundVoiceNX_14e360");
void GameRoutine_28b540();
void SoundVoiceNx_289a90(_BYTE*, __int64);
__int64 SoundThread_2a0ec0(__int64 a1);
__int64 SoundThread_2a1c90(__int64 a1, int a2, __int64 a3, __int64 a4,
                           unsigned int a5, unsigned int a6);
__int64 SoundThread_2a2320(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                           int a5);
__int64 BaseNx_28b1a0_alt1(__int64 result) __asm__("BaseNx_28b1a0");
__int64 GameRoutine_2ab960_alt1(__int64 result) __asm__("GameRoutine_2ab960");
__int64
SoundArchivePlayer_289d60_alt1(__int64) __asm__("SoundArchivePlayer_289d60");
__int64 SoundVoiceNx_2abaa0_alt1(__int64 result,
                                 unsigned int) __asm__("SoundVoiceNx_2abaa0");
__int64 nn_diag_detail_AbortImpl_1a0a080_alt1(__int64) __asm__(
    "nn_diag_detail_AbortImpl_1a0a080");
__int64 nn_os_AcquireReadLock_alt1(__int64) __asm__("nn_os_AcquireReadLock");
__int64 nn_os_GetSystemTick_alt1() __asm__("nn_os_GetSystemTick");
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_ReleaseReadLock_alt1(__int64) __asm__("nn_os_ReleaseReadLock");
__int64 nn_os_TryReceiveMessageQueue_alt1(__int64, __int64) __asm__(
    "nn_os_TryReceiveMessageQueue");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
void* BaseNx_2a1860_alt1() __asm__("BaseNx_2a1860");
void* BaseNx_2a18e0_alt1() __asm__("BaseNx_2a18e0");

__int64 SoundThread_289fa0(__int64 a1)
{
  __int64 result;
  int v2;

  result = nn_audio_ExecuteAudioRendererRendering(*(_QWORD*)(a1 + 8),
                                                  *(_QWORD*)(a1 + 16));
  v2 = result;
  if ((_DWORD)result != 0) {
    nn_diag_detail_AbortImpl_1a0a080(&v2);
    __udf(0);
  }
  return result;
}

__int64 SoundThread_2a0ec0(__int64 a1)
{
  char v2;
  __int64 v3;
  __int64 v5;

  v5 = 0;
  v2 = nn_os_TryReceiveMessageQueue(&v5, a1 + 24);
  if ((v2 & 1) != 0) {
    atomic_fetch_add((atomic_uint* volatile)(a1 + 216), 0xFFFFFFFF);
    v3 = v5;
    if (*(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + v5) != -1) {
      (*(void (**)(__int64))(a1 + 8))(v5);
      v3 = v5;
    }
    nn_os_SendMessageQueue(a1 + 112, v3);
  }
  return v2 & 1;
}

__int64 SoundThread_Destructor(_QWORD* a1)
{
  *a1 = GameData_2135418[0] + 16;
  nn_os_FinalizeMutex(a1 + 174);
  nn_os_FinalizeMutex(a1 + 152);
  nn_os_FinalizeReaderWriterLock(a1 + 144);
  nn_os_FinalizeReaderWriterLock(a1 + 125);
  nn_os_FinalizeMutex(a1 + 109);
  nn_os_FinalizeMutex(a1 + 105);
  nn_os_FinalizeMessageQueue(a1 + 63);
  return GameRoutine_2b4940(a1 + 1);
}

__int64 SoundThread_2a1c90(__int64 a1, int a2, __int64 a3, __int64 a4,
                           unsigned int a5, unsigned int a6)
{
  __int64 result;
  struct {
    const char* v13;
    __int64 v14;
    __int64 v15;
    unsigned __int64 v16;
    __int64 v17;
    __int64 v18;
    __int64 v19;
  } v13_;

  *(_DWORD*)(a1 + 1048) = a6;
  v13_.v18 = 0;
  v13_.v19 = 0;
  v13_.v16 = 0;
  v13_.v17 = 0;
  v13_.v14 = 0;
  v13_.v15 = 0;
  v13_.v13 = nullptr;
  GameRoutine_2b4910((__int64)&v13_.v13);
  v13_.v15 = a4;
  v13_.v16 = __PAIR64__(a6, a5);
  LODWORD(v13_.v17) = a2;
  v13_.v18 = 0;
  v13_.v19 = a1;
  v13_.v13 = "nn::atk::detail::driver::SoundThread";
  v13_.v14 = a3;
  result = GameRoutine_2b4950(a1 + 8, (__int64)&v13_.v13) & 1;
  *(_BYTE*)(a1 + 1052) = result;
  return result;
}

__int64 SoundThread_2a1da0(__int64* a1)
{
  __int64 result;

  result = nn_os_GetSystemTick(a1);
  *a1 = result;
  return result;
}

__int64 SoundThread_2a1de0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;

  if (*(_BYTE*)(result + 1052) == 1) {
    v1 = result;
    v2 = nn_os_JamMessageQueue(result + 504, 0x20000000);
    if (*(_BYTE*)(v1 + 1120) == 1) {
      v4 = SoundVoiceNX_14e360(v2, v3);
      GameRoutine_289fa0(v4);
    }
    GameRoutine_2b4a10(v1 + 8);
    result = GameRoutine_2b4a20(v1 + 8);
    *(_DWORD*)(v1 + 1048) = 0;
    *(_BYTE*)(v1 + 1052) = 0;
  }
  return result;
}

__int64 SoundThread_2a1ee0(__int64 a1, _QWORD* a2)
{
  __int64 v4;

  nn_os_LockMutex(a1 + 840);
  v4 = a2[1];
  *++a2 = *(_QWORD*)(a1 + 904);
  *(_QWORD*)(v4 + 8) = a1 + 904;
  *(_QWORD*)(*(_QWORD*)(a1 + 904) + 8LL) = a2;
  *(_QWORD*)(a1 + 904) = v4;
  return nn_os_UnlockMutex(a1 + 840);
}

__int64 SoundThread_2a1f40(__int64 a1, __int64 a2)
{
  __int64* v4;
  __int64 v5;

  nn_os_LockMutex(a1 + 840);
  if (a2 + 8 != a1 + 904) {
    v4 = *(__int64**)(a2 + 16);
    v5 = *v4;
    *(_QWORD*)(*(_QWORD*)(a2 + 8) + 8LL) = v4;
    *v4 = *(_QWORD*)(a2 + 8);
    *(_QWORD*)(v5 + 8) = a2 + 8;
    *(_QWORD*)(a2 + 8) = v5;
  }
  return nn_os_UnlockMutex(a1 + 840);
}

__int64 SoundThread_2a1fa0(__int64 result, __int64 a2)
{
  __int64 v2;
  _QWORD* v3;

  v2 = *(_QWORD*)(a2 + 8);
  v3 = (_QWORD*)(a2 + 8);
  *v3 = *(_QWORD*)(result + 920);
  *(_QWORD*)(v2 + 8) = result + 920;
  *(_QWORD*)(*(_QWORD*)(result + 920) + 8LL) = v3;
  *(_QWORD*)(result + 920) = v2;
  return result;
}

__int64 SoundThread_2a1fd0(__int64 result, __int64 a2)
{
  __int64* v2;
  __int64 v3;

  if (a2 + 8 != result + 920) {
    v2 = *(__int64**)(a2 + 16);
    v3 = *v2;
    *(_QWORD*)(*(_QWORD*)(a2 + 8) + 8LL) = v2;
    *v2 = *(_QWORD*)(a2 + 8);
    *(_QWORD*)(v3 + 8) = a2 + 8;
    *(_QWORD*)(a2 + 8) = v3;
  }
  return result;
}

__int64 SoundThread_2a2320(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                           int a5)
{
  __int64 v10;
  __int64 v11;
  __int64 result;
  __int64 EntriesEPi;
  int TotalProcessingTimeEv;
  __int64 v18;
  int v19;
  int v20;
  __int64 v21;
  __int64 v22;
  unsigned int v23;
  __int64 v24;
  unsigned __int8* v25;
  int v26;
  __int64 v27;
  __int64 v28;
  int SubMixNodeIdEPKNS0_10SubMixTypeE;
  int v30;
  __int64 v31;
  _BYTE* v32;
  _BYTE* v33;
  __int64* v34;
  int v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 i;
  __int64 v40;
  __int64 v41;
  int v42;
  __int64 v43;
  int v44;
  struct {
    int FrameIndexEv;
    char gap68_[4];
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
    __int64 v56;
    __int64 v57;
    __int64 v58;
    __int64 v59;
    int v60;
    int v61;
    int v62;
    int VoiceDropCountEv;
    char v64;
    char gap201_[7];
    __int64 v65;
    __int64 v66;
    __int64 v67;
  } FrameIndexEv_;
  _QWORD v68[480];

  v35 = COERCE_AS(__typeof__(v35),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  nn_os_AcquireReadLock(a1 + 1152),
      v35 = COERCE_AS(__typeof__(v35),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v10 = *(_QWORD*)(a1 + 1136);
  v11 = a1 + 1128;
  v43 = a1;
  result = nn_os_ReleaseReadLock(a1 + 1152),
  v35 = COERCE_AS(__typeof__(v35),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if (v10 != a1 + 1128) {
    v42 = a5;
    memset(&FrameIndexEv_.FrameIndexEv, 0, 4008),
        v35 = COERCE_AS(__typeof__(v35),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    FrameIndexEv_.FrameIndexEv = nn_audio_PerformanceInfo_GetFrameIndex(a2),
    v35 = COERCE_AS(__typeof__(v35),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v44 = 0;
    FrameIndexEv_.v64 =
        nn_audio_PerformanceInfo_IsRenderingTimeLimitExceeded(a2) & 1,
    v35 = COERCE_AS(__typeof__(v35),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    EntriesEPi = nn_audio_PerformanceInfo_GetEntries(a2, &v44),
    v35 = COERCE_AS(__typeof__(v35),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    FrameIndexEv_.v58 = 0;
    TotalProcessingTimeEv = nn_audio_PerformanceInfo_GetTotalProcessingTime(a2),
    v35 = COERCE_AS(__typeof__(v35),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    FrameIndexEv_.v59 = nn_os_ConvertToTick(1000LL * TotalProcessingTimeEv),
    v35 = COERCE_AS(__typeof__(v35),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    FrameIndexEv_.v52 = 0;
    if (v44 >= 1) {
      v40 = a2;
      v41 = a4;
      v18 = 0;
      v19 = 0;
      v20 = 0;
      while (1) {
        v21 = nn_os_ConvertToTick(1000LL * *(int*)(EntriesEPi + 4)),
        v35 = COERCE_AS(__typeof__(v35),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        v22 = nn_os_ConvertToTick(1000 * (*(int*)(EntriesEPi + 8) +
                                          (__int64)*(int*)(EntriesEPi + 4))),
        v35 = COERCE_AS(__typeof__(v35),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        v23 = *(unsigned __int8*)(EntriesEPi + 12);
        if (v23 > 2) {
          if (v23 == 3) {
            FrameIndexEv_.v50 = v21;
            FrameIndexEv_.v51 = v22;
          }
          else if (v23 == 4) {
            v31 = v22;
            v32 = SoundVoiceNX_14e360_alt2(),
            v35 = COERCE_AS(__typeof__(v35),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
            v33 = v32;
            if ((*(_BYTE*)(v43 + 1120) & 1) != 0 ||
                (unsigned int)nn_audio_GetSinkNodeId_1a0c520(v32 + 1608) !=
                    *(_DWORD*)EntriesEPi) {
              SoundVoiceNx_289a90(v33, 0),
                  v35 = COERCE_AS(
                      __typeof__(v35),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
              if (v35 != 0) {
                v36 = GameRoutine_289a60((__int64)v33, 0),
                v35 =
                    COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                if ((unsigned int)nn_audio_GetSinkNodeId_1a0c530(v36) ==
                    *(_DWORD*)EntriesEPi) {
                  FrameIndexEv_.v56 = v21;
                  FrameIndexEv_.v57 = v31;
                }
              }
            }
            else {
              FrameIndexEv_.v54 = v21;
              FrameIndexEv_.v55 = v31;
            }
          }
          goto LABEL_5;
        }
        if (v23 == 1) {
          v20 += *(_DWORD*)(EntriesEPi + 8);
          *((_DWORD*)&v68[384] + v19) = *(_DWORD*)EntriesEPi;
          v34 = &v68[2 * v19++];
          *v34 = v21;
          v34[1] = v22;
        }
        else if (v23 == 2) {
          v24 = v22;
          v25 = (unsigned __int8*)SoundVoiceNX_14e360_alt2(),
          v35 = COERCE_AS(__typeof__(v35),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          v26 = v25[1697];
          v27 = (__int64)v25;
          v28 = BaseNx_28b440((__int64)v25, 0),
          v35 = COERCE_AS(__typeof__(v35),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          SubMixNodeIdEPKNS0_10SubMixTypeE = nn_audio_GetSubMixNodeId(v28 + 88),
          v35 = COERCE_AS(__typeof__(v35),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          v30 = *(_DWORD*)EntriesEPi;
          if (v26 == 1) {
            if (SubMixNodeIdEPKNS0_10SubMixTypeE == v30) {
              goto LABEL_23;
            }
            if (*(_BYTE*)(v27 + 1698) == 1) {
              goto LABEL_25;
            }
          }
          else {
            if (SubMixNodeIdEPKNS0_10SubMixTypeE == v30) {
            LABEL_23:
              FrameIndexEv_.v48 = v21;
              FrameIndexEv_.v49 = v24;
              goto LABEL_5;
            }
            if ((int)((__int64 (*)(__int64))GameRoutine_28b540)(v27) >= 2) {
            LABEL_25:
              v37 = BaseNx_28b440(v27, 1),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
              if ((unsigned int)nn_audio_GetSubMixNodeId(v37 + 88) ==
                  *(_DWORD*)EntriesEPi) {
                FrameIndexEv_.v66 = v21;
                FrameIndexEv_.v67 = v24;
              }
            }
          }
        }
      LABEL_5:
        EntriesEPi += 24;
        if (++v18 >= v44) {
          a4 = v41;
          a2 = v40;
          v38 = 1000LL * v20;
          goto LABEL_29;
        }
      }
    }
    v38 = 0;
    v19 = 0;
  LABEL_29:
    FrameIndexEv_.v46 = a3;
    FrameIndexEv_.v47 = a4;
    FrameIndexEv_.v53 = nn_os_ConvertToTick(v38),
    v35 = COERCE_AS(__typeof__(v35),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    FrameIndexEv_.v61 = v19;
    FrameIndexEv_.v62 = v42;
    FrameIndexEv_.v60 = v19 + v42;
    FrameIndexEv_.VoiceDropCountEv =
        nn_audio_PerformanceInfo_GetVoiceDropCount(a2),
    v35 = COERCE_AS(__typeof__(v35),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    FrameIndexEv_.v65 = a4 - a3;
    nn_os_AcquireReadLock(v43 + 1152),
        v35 = COERCE_AS(__typeof__(v35),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    for (i = *(_QWORD*)(v43 + 1136); i != v11; i = *(_QWORD*)(i + 8)) {
      GameRoutine_2b8cb0(i, (__int64)&FrameIndexEv_.FrameIndexEv),
          v35 = COERCE_AS(__typeof__(v35),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    }
    return nn_os_ReleaseReadLock(v43 + 1152);
  }
  return result;
}

__int64 SoundThread_Unknown2(__int64 a1)
{
  __int64* v1;
  __int64 v2;
  int v4;
  void (*v5)(_QWORD);
  char v6;
  int v7;
  void* v8;
  __int64 v9;
  void (*v10)(__int64);
  void* v11;
  unsigned int v12;
  void* v13;
  void* v14;
  void* v15;
  void* v16;
  void* v17;
  int v18;
  void (*v19)(_QWORD);
  void* v20;
  char v21;
  atomic_uint* v22;
  int v23;
  __int64 i;
  signed int v25;
  __int64 v26;
  __int64* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  int v41;
  __int64 v42;

  v1 = (__int64*)(a1 + 1248);
  v2 = a1 + 1376;
  while (1) {
    while (*(_BYTE*)(a1 + 1053) == 1) {
      nn_os_SleepThread(5000000);
    }
    v4 = atomic_load((unsigned __int8*)(a1 + 968));
    if (v4 == 1) {
      nn_os_AcquireReadLock_alt1(a1 + 1000);
      v5 = *(void (**)(_QWORD))(a1 + 952);
      if (v5 != nullptr) {
        v5(*(_QWORD*)(a1 + 960));
      }
      nn_os_ReleaseReadLock_alt1(a1 + 1000);
    }
    *v1 = nn_os_GetSystemTick_alt1();
    v42 = 0;
    v6 = nn_os_TryReceiveMessageQueue_alt1((__int64)&v42, a1 + 504);
    v7 = v42 & 0xF0000000;
    if ((v6 & 1) == 0) {
      v7 = 0;
    }
    if (v7 != 805306368) {
      break;
    }
    do {
      v15 = BaseNx_2a1860_alt1();
    } while ((SoundThread_2a0ec0((__int64)v15) & 1) != 0);
    do {
      v16 = BaseNx_2a18e0_alt1();
    } while ((SoundThread_2a0ec0((__int64)v16) & 1) != 0);
  LABEL_15:
    (*(void (**)(__int64))(a1 + 1112))(a1 + 1312);
    v17 = SoundVoiceNX_14e360_alt2();
    v41 = SoundArchivePlayer_289d60_alt1((__int64)v17);
    if (v41 != 0) {
      nn_diag_detail_AbortImpl_1a0a080_alt1((__int64)&v41);
      __udf(0);
    }
    (*(void (**)(__int64))(a1 + 1112))(a1 + 1320);
    *(_QWORD*)(a1 + 1256) = nn_os_GetSystemTick_alt1();
    v18 = atomic_load((unsigned __int8*)(a1 + 992));
    if (v18 == 1) {
      nn_os_AcquireReadLock_alt1(a1 + 1000);
      v19 = *(void (**)(_QWORD))(a1 + 976);
      if (v19 != nullptr) {
        v19(*(_QWORD*)(a1 + 984));
      }
      nn_os_ReleaseReadLock_alt1(a1 + 1000);
    }
    (*(void (**)(__int64))(a1 + 1112))(a1 + 1328);
    while (1) {
      v20 = SoundVoiceNX_14e360_alt2();
      v21 = GameRoutine_28b220(v20, 100000000);
      v22 = (atomic_uint*)(a1 + 1424);
      if ((v21 & 1) != 0) {
        break;
      }
      atomic_fetch_add(v22, 0x64u);
      v23 = atomic_load((unsigned int*)v22);
      if (v23 >= 5000) {
        atomic_load((unsigned int*)v22);
      }
    }
    atomic_store(0, (unsigned int*)v22);
    (*(void (**)(__int64))(a1 + 1112))(a1 + 1336);
    if (*(_QWORD*)(a1 + 1384) != v2) {
      nn_os_LockMutex_alt1(a1 + 1392);
      for (i = *(_QWORD*)(a1 + 1384); i != v2; i = *(_QWORD*)(i + 8)) {
        v25 = atomic_load((unsigned int*)(i + 44));
        if (v25 < (signed __int32)*(_DWORD*)(i + 32)) {
          v26 = *(int*)(i + 36);
          v27 = (__int64*)(*(_QWORD*)(i + 24) + (v26 << 7));
          *(_DWORD*)(i + 36) = v26 + 1;
          v28 = v1[8];
          v29 = v1[9];
          v30 = v1[11];
          v27[10] = v1[10];
          v27[11] = v30;
          v27[8] = v28;
          v27[9] = v29;
          v31 = v1[4];
          v32 = v1[5];
          v33 = v1[7];
          v27[6] = v1[6];
          v27[7] = v33;
          v27[4] = v31;
          v27[5] = v32;
          v34 = *v1;
          v35 = v1[1];
          v36 = v1[3];
          v27[2] = v1[2];
          v27[3] = v36;
          *v27 = v34;
          v27[1] = v35;
          v37 = v1[12];
          v38 = v1[13];
          v39 = v1[15];
          v27[14] = v1[14];
          v27[15] = v39;
          v27[12] = v37;
          v27[13] = v38;
          if (*(_DWORD*)(i + 36) == *(_DWORD*)(i + 32)) {
            *(_DWORD*)(i + 36) = 0;
          }
          atomic_fetch_add((atomic_uint* volatile)(i + 44), 1u);
        }
      }
      nn_os_UnlockMutex_alt1(a1 + 1392);
    }
  }
  if (v7 != 0x20000000) {
    (*(void (**)(__int64))(a1 + 1112))(a1 + 1264);
    *(_QWORD*)(a1 + 1432) = *(_QWORD*)(a1 + 1440);
    v8 = SoundVoiceNX_14e360_alt2();
    v9 = GameRoutine_289fe0(v8);
    v10 = *(void (**)(__int64))(a1 + 1112);
    *(_QWORD*)(a1 + 1440) = v9;
    v10(a1 + 1272);
    (*(void (**)(__int64))(a1 + 1112))(a1 + 1280);
    SoundVoiceNX_14e360_alt2();
    v11 = SoundVoiceNX_14e360_alt2();
    GameRoutine_2ab960_alt1((__int64)v11 + 1328);
    (*(void (**)(__int64))(a1 + 1112))(a1 + 1288);
    (*(void (**)(__int64))(a1 + 1112))(a1 + 1360);
    GameRoutine_2a2020(a1, 0);
    (*(void (**)(__int64))(a1 + 1112))(a1 + 1368);
    (*(void (**)(__int64))(a1 + 1112))(a1 + 1296);
    v12 = *((_DWORD*)SoundVoiceNX_14e360_alt2() + 56);
    v13 = SoundVoiceNX_14e360_alt2();
    SoundVoiceNx_2abaa0_alt1((__int64)v13 + 1328, v12);
    (*(void (**)(__int64))(a1 + 1112))(a1 + 1304);
    (*(void (**)(__int64))(a1 + 1112))(a1 + 1344);
    v14 = SoundVoiceNX_14e360_alt2();
    BaseNx_28b1a0_alt1((__int64)v14);
    (*(void (**)(__int64))(a1 + 1112))(a1 + 1352);
    goto LABEL_15;
  }
  return 0;
}

void SoundThread_DeletingDestructor(_QWORD* a1)
{
  *a1 = GameData_2135418[0] + 16;
  nn_os_FinalizeMutex(a1 + 174);
  nn_os_FinalizeMutex(a1 + 152);
  nn_os_FinalizeReaderWriterLock(a1 + 144);
  nn_os_FinalizeReaderWriterLock(a1 + 125);
  nn_os_FinalizeMutex(a1 + 109);
  nn_os_FinalizeMutex(a1 + 105);
  nn_os_FinalizeMessageQueue(a1 + 63);
  GameRoutine_2b4940(a1 + 1);
  GameRoutine_651250(a1, 0x5A8u);
}

#pragma GCC visibility pop
