#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_2892d0(_QWORD);
__int64 GameRoutine_2b0();
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
extern _UNKNOWN* GameData_21346d8;
extern _UNKNOWN* GameData_21346e0;
extern __int64 snd_target_s_platform;
void* SoundVoiceNX_14e360();
__int64 SoundVoiceNX_Unknown6(__int64 a1, unsigned int a2);
__int64 SoundVoiceNX_Unknown7();
__int64 BaseNx_28b3a0(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_audio_AcquireVoiceSlot(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                  _QWORD, _QWORD, _QWORD);
__int64 nn_audio_AppendWaveBuffer(_QWORD, _QWORD);
__int64 nn_audio_IsVoiceValid(_QWORD);
__int64 nn_audio_ReleaseVoiceSlot(_QWORD, _QWORD);
__int64 nn_audio_SetVoiceDestination_1a0bc20(_QWORD, _QWORD, _QWORD);
__int64 nn_audio_SetVoicePitch(_QWORD, float);
__int64 nn_audio_SetVoicePriority(_QWORD, _QWORD);
__int64 nn_audio_SetVoiceVolume(_QWORD, float);
__int64 nn_os_LockMutex(_QWORD);
__n128 nn_os_UnlockMutex(_QWORD);
extern _DWORD GameData_1b0a2d0[3];
extern _UNKNOWN GameData_1b0a2c4;
extern __int64 (*snd_target_SoundVoice_vtable[])();
extern __int64* GameData_2134808[6];
void SoundVoiceNX_Destructor(__int64 a1);
void SoundVoiceNX_Unknown2(__int64 a1, __int64 a2, int a3);
__int64 SoundVoiceNX_Unknown8(__int64 a1, __int64* a2);

void SoundVoiceNX_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  *(_QWORD*)a1 = GameData_2134808[0] + 2;
  if (*(_BYTE*)(a1 + 48) == 1) {
    v2 = ((__int64 (*)(void))SoundVoiceNX_14e360)();
    v3 = nn_os_LockMutex(v2 + 1720);
    v4 = SoundVoiceNX_14e360(v3);
    v5 = nn_audio_ReleaseVoiceSlot(v4 + 24, a1 + 56);
    v6 = SoundVoiceNX_14e360(v5);
    nn_os_UnlockMutex(v6 + 1720);
    *(_BYTE*)(a1 + 48) = 0;
  }
  *(_QWORD*)a1 = snd_target_SoundVoice_vtable;
}

void SoundVoiceNX_Unknown2(__int64 a1, __int64 a2, int a3)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int* v8;
  unsigned int v9;
  int v10;
  unsigned int v11;
  int v12;
  unsigned int v13;
  __int64 v14;
  __int64 v15;
  char v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;

  if ((*(_BYTE*)(a1 + 48) & 1) == 0) {
    v5 = SoundVoiceNX_14e360(a1);
    v6 = *(unsigned int*)(a1 + 16);
    v7 = v5;
    if ((unsigned int)v6 >= 3) {
      v9 = 0;
      v8 = (int*)(a1 + 24);
    }
    else {
      v8 = (int*)((char*)&GameData_1b0a2c4 + 4 * v6);
      v9 = GameData_1b0a2d0[v6];
    }
    v10 = *v8;
    v11 = *(_DWORD*)(a1 + 20);
    *(_DWORD*)(a1 + 12) = a3;
    v12 = v10 * a3;
    if (v11 == -1) {
      v13 = 0;
    }
    else {
      v13 = v11;
    }
    *(_DWORD*)(a1 + 24) = v12;
    v14 = SoundVoiceNX_14e360(v5);
    nn_os_LockMutex(v14 + 1720);
    v15 = nn_audio_AcquireVoiceSlot(v7 + 24, a1 + 56, *(unsigned int*)(a1 + 8),
                                    *(unsigned int*)(a1 + 12), v9, v13, 0, 0);
    v16 = v15;
    v17 = SoundVoiceNX_14e360(v15);
    nn_os_UnlockMutex(v17 + 1720);
    if ((v16 & 1) != 0) {
      v19 = SoundVoiceNX_14e360(v18);
      v20 = nn_os_LockMutex(v19 + 1720);
      v21 = SoundVoiceNX_14e360(v20);
      v22 = BaseNx_28b3a0(v21, 0);
      v23 = nn_audio_SetVoiceDestination_1a0bc20(v7 + 24, a1 + 56, v22 + 88);
      v24 = SoundVoiceNX_14e360(v23);
      nn_os_UnlockMutex(v24 + 1720);
      v26 = SoundVoiceNX_14e360(v25);
      nn_os_LockMutex(v26 + 1720);
      nn_audio_SetVoicePriority(a1 + 56, v13);
      nn_audio_SetVoicePitch(a1 + 56, 1.0);
      v27 = nn_audio_SetVoiceVolume(a1 + 56, 1.0);
      v28 = SoundVoiceNX_14e360(v27);
      nn_os_UnlockMutex(v28 + 1720);
      (*(void (**)(__int64, double))(*(_QWORD*)a1 + 104LL))(a1, 0.0);
      *(_BYTE*)(a1 + 48) = 1;
    }
  }
}

void* SoundVoiceNX_14e360()
{
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_21346d8,
                            memory_order_acquire) &
       1) != 0) {
    return GameData_21346e0;
  }
  if ((unsigned int)__cxa_guard_acquire(GameData_21346d8) != 0) {
    GameRoutine_2892d0(GameData_21346e0);
    GameRoutine_2b0();
    __cxa_guard_release(GameData_21346d8);
  }
  return GameData_21346e0;
}

__int64 SoundVoiceNX_Unknown6(__int64 a1, unsigned int a2)
{
  return (*(__int64 (**)(__int64, _QWORD, __int64))(
      *(_QWORD*)snd_target_s_platform + 344LL))(snd_target_s_platform, a2,
                                                4096);
}

__int64 SoundVoiceNX_Unknown7()
{
  return (*(__int64 (**)(__int64))(*(_QWORD*)snd_target_s_platform + 360LL))(
      snd_target_s_platform);
}

__int64 SoundVoiceNX_Unknown8(__int64 a1, __int64* a2)
{
  __int64 v4;
  __int64 IsVoiceValidEPKNS0_9VoiceTypeE;
  char v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v16;
  __int64 v17;
  unsigned int v18;
  __int64 v19;
  __int64 v20;
  char v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned int v25;
  __int64 v26;
  __int64 appended;
  char v28;
  __int64 v29;

  if (*(_BYTE*)(a1 + 48) != 1) {
    return 0;
  }
  v4 = SoundVoiceNX_14e360(a1);
  nn_os_LockMutex(v4 + 1720);
  IsVoiceValidEPKNS0_9VoiceTypeE = nn_audio_IsVoiceValid(a1 + 56);
  v6 = IsVoiceValidEPKNS0_9VoiceTypeE;
  v7 = SoundVoiceNX_14e360(IsVoiceValidEPKNS0_9VoiceTypeE);
  nn_os_UnlockMutex(v7 + 1720);
  if ((v6 & 1) == 0) {
    return 0;
  }
  v10 = a1 + 64;
  v9 = *(_QWORD*)(a1 + 64);
  v11 = *a2;
  if (v9 == *a2) {
    goto LABEL_19;
  }
  v12 = *(_QWORD*)(a1 + 1104);
  if (v12 == v11) {
    v10 = a1 + 1104;
  LABEL_19:
    *(_QWORD*)(v10 + 12) = v11;
    v23 = v10 + 12;
    v24 = *((unsigned int*)a2 + 2);
    *(_DWORD*)(v23 + 16) = 0;
    *(_QWORD*)(v23 + 8) = v24;
    LODWORD(v24) = *((_DWORD*)a2 + 2);
    v25 = *(_DWORD*)(a1 + 24);
    *(_BYTE*)(v23 + 25) = 0;
    *(_QWORD*)(v23 + 32) = 0;
    *(_QWORD*)(v23 + 40) = 0;
    *(_DWORD*)(v23 + 20) = (unsigned int)v24 / v25;
    v26 = SoundVoiceNX_14e360(v8);
    nn_os_LockMutex(v26 + 1720);
    appended = nn_audio_AppendWaveBuffer(a1 + 56, v23);
    v28 = appended;
    v29 = SoundVoiceNX_14e360(appended);
    nn_os_UnlockMutex(v29 + 1720);
    return v28 & 1;
  }
  v13 = *(_QWORD*)(a1 + 2144);
  if (v13 == v11) {
    v10 = a1 + 2144;
    goto LABEL_19;
  }
  v14 = *(_QWORD*)(a1 + 3184);
  if (v14 == v11) {
    v10 = a1 + 3184;
    goto LABEL_19;
  }
  if (v9 != 0) {
    v10 = a1 + 1104;
    if (v12 != 0) {
      v10 = a1 + 2144;
      if (v13 != 0) {
        v10 = a1 + 3184;
        if (v14 != 0) {
          return 0;
        }
      }
    }
  }
  v16 = memcpy(v10, a2, 1036);
  *(_QWORD*)(v10 + 12) = 0;
  *(_QWORD*)(v10 + 20) = 0;
  *(_QWORD*)(v10 + 28) = 0;
  *(_QWORD*)(v10 + 36) = 0;
  *(_QWORD*)(v10 + 44) = 0;
  *(_QWORD*)(v10 + 52) = 0;
  *(_QWORD*)(v10 + 60) = 0;
  *(_QWORD*)(v10 + 68) = 0;
  *(_QWORD*)(v10 + 76) = 0;
  *(_QWORD*)(v10 + 12) = *a2;
  v17 = *((unsigned int*)a2 + 2);
  *(_DWORD*)(v10 + 28) = 0;
  *(_QWORD*)(v10 + 20) = v17;
  LODWORD(v17) = *((_DWORD*)a2 + 2);
  v18 = *(_DWORD*)(a1 + 24);
  *(_BYTE*)(v10 + 37) = 0;
  *(_QWORD*)(v10 + 44) = 0;
  *(_QWORD*)(v10 + 52) = 0;
  *(_DWORD*)(v10 + 32) = (unsigned int)v17 / v18;
  v19 = SoundVoiceNX_14e360(v16);
  nn_os_LockMutex(v19 + 1720);
  v20 = nn_audio_AppendWaveBuffer(a1 + 56, v10 + 12);
  v21 = v20;
  v22 = SoundVoiceNX_14e360(v20);
  nn_os_UnlockMutex(v22 + 1720);
  if ((v21 & 1) != 0) {
    return 1;
  }
  *(_QWORD*)v10 = 0;
  return 0;
}

#pragma GCC visibility pop
