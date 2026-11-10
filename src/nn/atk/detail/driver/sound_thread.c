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

__int64 SoundThread_Unknown2(__int64 LockEPNS0_20ReaderWriterLockTypeE)
{
  __int64* v1;
  __int64 v2;
  __int64 v3;
  int v4;
  void (*v5)(_QWORD);
  char v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  void (*v11)(__int64);
  __int64 v12;
  __int64 v13;
  unsigned int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;
  void (*v29)(_QWORD);
  __int64 v30;
  __int64 v31;
  atomic_uint* v32;
  int v33;
  __int64 i;
  signed int v35;
  __int64 v36;
  _QWORD* v37;
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
  int v51;
  __int64 v52;

  v1 = (__int64*)(LockEPNS0_20ReaderWriterLockTypeE + 1248);
  v2 = LockEPNS0_20ReaderWriterLockTypeE + 1376;
  v3 = LockEPNS0_20ReaderWriterLockTypeE;
  while (1) {
    while (*(_BYTE*)(v3 + 1053) == 1) {
      LockEPNS0_20ReaderWriterLockTypeE = nn_os_SleepThread(5000000);
    }
    v4 = atomic_load((unsigned __int8*)(v3 + 968));
    if (v4 == 1) {
      nn_os_AcquireReadLock(v3 + 1000);
      v5 = *(void (**)(_QWORD))(v3 + 952);
      if (v5 != nullptr) {
        v5(*(_QWORD*)(v3 + 960));
      }
      LockEPNS0_20ReaderWriterLockTypeE = nn_os_ReleaseReadLock(v3 + 1000);
    }
    *v1 = nn_os_GetSystemTick(LockEPNS0_20ReaderWriterLockTypeE);
    v52 = 0;
    v6 = nn_os_TryReceiveMessageQueue(&v52, v3 + 504);
    v7 = v52 & 0xF0000000;
    if ((v6 & 1) == 0) {
      v7 = 0;
    }
    if (v7 != 805306368) {
      break;
    }
    do {
      v22 = BaseNx_2a1860();
      v23 = GameRoutine_2a0ec0(v22);
    } while ((v23 & 1) != 0);
    do {
      v24 = BaseNx_2a18e0(v23);
      v23 = GameRoutine_2a0ec0(v24);
    } while ((v23 & 1) != 0);
  LABEL_15:
    v25 = (*(__int64 (**)(__int64))(v3 + 1112))(v3 + 1312);
    v26 = SoundVoiceNX_14e360_alt1(v25);
    v51 = SoundArchivePlayer_289d60(v26);
    if (v51 != 0) {
      nn_diag_detail_AbortImpl_1a0a080(&v51);
      __udf(0);
    }
    v27 = (*(__int64 (**)(__int64))(v3 + 1112))(v3 + 1320);
    *(_QWORD*)(v3 + 1256) = nn_os_GetSystemTick(v27);
    v28 = atomic_load((unsigned __int8*)(v3 + 992));
    if (v28 == 1) {
      nn_os_AcquireReadLock(v3 + 1000);
      v29 = *(void (**)(_QWORD))(v3 + 976);
      if (v29 != nullptr) {
        v29(*(_QWORD*)(v3 + 984));
      }
      nn_os_ReleaseReadLock(v3 + 1000);
    }
    v30 = (*(__int64 (**)(__int64))(v3 + 1112))(v3 + 1328);
    while (1) {
      v31 = SoundVoiceNX_14e360_alt1(v30);
      v30 = GameRoutine_28b220(v31, 100000000);
      v32 = (atomic_uint*)(v3 + 1424);
      if ((v30 & 1) != 0) {
        break;
      }
      atomic_fetch_add(v32, 0x64u);
      v33 = atomic_load((unsigned int*)v32);
      if (v33 >= 5000) {
        atomic_load((unsigned int*)v32);
      }
    }
    atomic_store(0, (unsigned int*)v32);
    LockEPNS0_20ReaderWriterLockTypeE =
        (*(__int64 (**)(__int64))(v3 + 1112))(v3 + 1336);
    if (*(_QWORD*)(v3 + 1384) != v2) {
      nn_os_LockMutex(v3 + 1392);
      for (i = *(_QWORD*)(v3 + 1384); i != v2; i = *(_QWORD*)(i + 8)) {
        v35 = atomic_load((unsigned int*)(i + 44));
        if (v35 < *(_DWORD*)(i + 32)) {
          v36 = *(int*)(i + 36);
          v37 = (_QWORD*)(*(_QWORD*)(i + 24) + (v36 << 7));
          *(_DWORD*)(i + 36) = v36 + 1;
          v38 = v1[8];
          v39 = v1[9];
          v40 = v1[11];
          v37[10] = v1[10];
          v37[11] = v40;
          v37[8] = v38;
          v37[9] = v39;
          v41 = v1[4];
          v42 = v1[5];
          v43 = v1[7];
          v37[6] = v1[6];
          v37[7] = v43;
          v37[4] = v41;
          v37[5] = v42;
          v44 = *v1;
          v45 = v1[1];
          v46 = v1[3];
          v37[2] = v1[2];
          v37[3] = v46;
          *v37 = v44;
          v37[1] = v45;
          v47 = v1[12];
          v48 = v1[13];
          v49 = v1[15];
          v37[14] = v1[14];
          v37[15] = v49;
          v37[12] = v47;
          v37[13] = v48;
          if (*(_DWORD*)(i + 36) == *(_DWORD*)(i + 32)) {
            *(_DWORD*)(i + 36) = 0;
          }
          atomic_fetch_add((atomic_uint* volatile)(i + 44), 1u);
        }
      }
      LockEPNS0_20ReaderWriterLockTypeE = nn_os_UnlockMutex(v3 + 1392);
    }
  }
  if (v7 != 0x20000000) {
    v8 = (*(__int64 (**)(__int64))(v3 + 1112))(v3 + 1264);
    *(_QWORD*)(v3 + 1432) = *(_QWORD*)(v3 + 1440);
    v9 = SoundVoiceNX_14e360_alt1(v8);
    v10 = GameRoutine_289fe0(v9);
    v11 = *(void (**)(__int64))(v3 + 1112);
    *(_QWORD*)(v3 + 1440) = v10;
    v11(v3 + 1272);
    v12 = (*(__int64 (**)(__int64))(v3 + 1112))(v3 + 1280);
    v13 = SoundVoiceNX_14e360_alt1(v12);
    v14 = *(_DWORD*)(v13 + 224);
    v15 = SoundVoiceNX_14e360_alt1(v13);
    GameRoutine_2ab960(v15 + 1328, v14);
    (*(void (**)(__int64))(v3 + 1112))(v3 + 1288);
    (*(void (**)(__int64))(v3 + 1112))(v3 + 1360);
    GameRoutine_2a2020(v3, 0);
    (*(void (**)(__int64))(v3 + 1112))(v3 + 1368);
    v16 = (*(__int64 (**)(__int64))(v3 + 1112))(v3 + 1296);
    v17 = SoundVoiceNX_14e360_alt1(v16);
    v18 = *(_DWORD*)(v17 + 224);
    v19 = SoundVoiceNX_14e360_alt1(v17);
    SoundVoiceNx_2abaa0(v19 + 1328, v18);
    (*(void (**)(__int64))(v3 + 1112))(v3 + 1304);
    v20 = (*(__int64 (**)(__int64))(v3 + 1112))(v3 + 1344);
    v21 = SoundVoiceNX_14e360_alt1(v20);
    BaseNx_28b1a0(v21);
    (*(void (**)(__int64))(v3 + 1112))(v3 + 1352);
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
