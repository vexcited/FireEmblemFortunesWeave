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
void SoundVoiceNX_Unknown2_alt1(__int64 a1, __int64 a2,
                                int a3) __asm__("SoundVoiceNX_Unknown2");
__int64
SoundVoiceNX_Unknown8_alt1(__int64 a1,
                           __int64* a2) __asm__("SoundVoiceNX_Unknown8");
__int64 GameHr_28b3a0(__int64, int);
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
__int64 SoundVoiceNX_Unknown2(__int64 result, __int64 a2, int a3);
__int64 SoundVoiceNX_Unknown8(__int64 a1, __int64 a2);

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

__int64 SoundVoiceNX_Unknown2(__int64 result, __int64 a2, int a3)
{

#pragma clang fp contract(off)
  __int64 v4;
  char* v5;
  __int64 v6;
  char* v7;
  int* v8;
  unsigned int v9;
  int v10;
  unsigned int v11;
  int v12;
  unsigned int v13;
  void* v14;
  char v15;
  void* v16;
  void* v17;
  void* v18;
  __int64 v19;
  void* v20;
  void* v21;
  void* v22;

  if ((*(_BYTE*)(result + 48) & 1) == 0) {
    v4 = result;
    v5 = (char*)SoundVoiceNX_14e360();
    v6 = *(unsigned int*)(v4 + 16);
    v7 = v5;
    if ((unsigned int)v6 >= 3) {
      v9 = 0;
      v8 = (int*)(v4 + 24);
    }
    else {
      v8 = (int*)((char*)&GameData_1b0a2c4 + 4 * v6);
      v9 = GameData_1b0a2d0[v6];
    }
    v10 = *v8;
    v11 = *(_DWORD*)(v4 + 20);
    *(_DWORD*)(v4 + 12) = a3;
    v12 = v10 * a3;
    if (v11 == -1) {
      v13 = 0;
    }
    else {
      v13 = v11;
    }
    *(_DWORD*)(v4 + 24) = v12;
    v14 = SoundVoiceNX_14e360();
    nn_os_LockMutex_alt1((__int64)v14 + 1720);
    v15 = nn_audio_AcquireVoiceSlot(v7 + 24, v4 + 56, *(unsigned int*)(v4 + 8),
                                    *(unsigned int*)(v4 + 12), v9, v13, 0, 0);
    v16 = SoundVoiceNX_14e360();
    result = nn_os_UnlockMutex_alt1((__int64)v16 + 1720);
    if ((v15 & 1) != 0) {
      v17 = SoundVoiceNX_14e360();
      nn_os_LockMutex_alt1((__int64)v17 + 1720);
      v18 = SoundVoiceNX_14e360();
      v19 = GameHr_28b3a0((__int64)v18, 0);
      nn_audio_SetVoiceDestination_1a0bc20(v7 + 24, v4 + 56, v19 + 88);
      v20 = SoundVoiceNX_14e360();
      nn_os_UnlockMutex_alt1((__int64)v20 + 1720);
      v21 = SoundVoiceNX_14e360();
      nn_os_LockMutex_alt1((__int64)v21 + 1720);
      nn_audio_SetVoicePriority(v4 + 56, v13);
      nn_audio_SetVoicePitch(v4 + 56, 0x1.0000000000000p+0f);
      nn_audio_SetVoiceVolume(v4 + 56, 0x1.0000000000000p+0f);
      v22 = SoundVoiceNX_14e360();
      nn_os_UnlockMutex_alt1((__int64)v22 + 1720);
      result = (*(__int64 (**)(__int64, double))(*(_QWORD*)v4 + 104LL))(
          v4, 0x0.0p+0);
      *(_BYTE*)(v4 + 48) = 1;
    }
  }
  return result;
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

__int64 SoundVoiceNX_Unknown8(__int64 a1, __int64 a2)
{
  void* v4;
  char IsVoiceValidEPKNS0_9VoiceTypeE;
  void* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v14;
  unsigned int v15;
  void* v16;
  char v17;
  void* v18;
  __int64 v19;
  __int64 v20;
  unsigned int v21;
  void* v22;
  char appended;
  void* v24;

  if (*(_BYTE*)(a1 + 48) != 1) {
    return 0;
  }
  v4 = SoundVoiceNX_14e360();
  nn_os_LockMutex_alt1((__int64)v4 + 1720);
  IsVoiceValidEPKNS0_9VoiceTypeE = nn_audio_IsVoiceValid(a1 + 56);
  v6 = SoundVoiceNX_14e360();
  nn_os_UnlockMutex_alt1((__int64)v6 + 1720);
  if ((IsVoiceValidEPKNS0_9VoiceTypeE & 1) == 0) {
    return 0;
  }
  v8 = a1 + 64;
  v7 = *(_QWORD*)(a1 + 64);
  v9 = *(_QWORD*)a2;
  if (v7 == *(_QWORD*)a2) {
    goto LABEL_19;
  }
  v10 = *(_QWORD*)(a1 + 1104);
  if (v10 == v9) {
    v8 = a1 + 1104;
  LABEL_19:
    *(_QWORD*)(v8 + 12) = v9;
    v19 = v8 + 12;
    v20 = *(unsigned int*)(a2 + 8);
    *(_DWORD*)(v19 + 16) = 0;
    *(_QWORD*)(v19 + 8) = v20;
    LODWORD(v20) = *(_DWORD*)(a2 + 8);
    v21 = *(_DWORD*)(a1 + 24);
    *(_BYTE*)(v19 + 25) = 0;
    *(_QWORD*)(v19 + 32) = 0;
    *(_QWORD*)(v19 + 40) = 0;
    *(_DWORD*)(v19 + 20) = (unsigned int)v20 / v21;
    v22 = SoundVoiceNX_14e360();
    nn_os_LockMutex_alt1((__int64)v22 + 1720);
    appended = nn_audio_AppendWaveBuffer(a1 + 56, v19);
    v24 = SoundVoiceNX_14e360();
    nn_os_UnlockMutex_alt1((__int64)v24 + 1720);
    return appended & 1;
  }
  v11 = *(_QWORD*)(a1 + 2144);
  if (v11 == v9) {
    v8 = a1 + 2144;
    goto LABEL_19;
  }
  v12 = *(_QWORD*)(a1 + 3184);
  if (v12 == v9) {
    v8 = a1 + 3184;
    goto LABEL_19;
  }
  if (v7 != 0) {
    v8 = a1 + 1104;
    if (v10 != 0) {
      v8 = a1 + 2144;
      if (v11 != 0) {
        v8 = a1 + 3184;
        if (v12 != 0) {
          return 0;
        }
      }
    }
  }
  memcpy_alt1(v8, a2, 0x40Cu);
  *(_QWORD*)(v8 + 12) = 0;
  *(_QWORD*)(v8 + 20) = 0;
  *(_QWORD*)(v8 + 28) = 0;
  *(_QWORD*)(v8 + 36) = 0;
  *(_QWORD*)(v8 + 44) = 0;
  *(_QWORD*)(v8 + 52) = 0;
  *(_QWORD*)(v8 + 60) = 0;
  *(_QWORD*)(v8 + 68) = 0;
  *(_QWORD*)(v8 + 76) = 0;
  *(_QWORD*)(v8 + 12) = *(_QWORD*)a2;
  v14 = *(unsigned int*)(a2 + 8);
  *(_DWORD*)(v8 + 28) = 0;
  *(_QWORD*)(v8 + 20) = v14;
  LODWORD(v14) = *(_DWORD*)(a2 + 8);
  v15 = *(_DWORD*)(a1 + 24);
  *(_BYTE*)(v8 + 37) = 0;
  *(_QWORD*)(v8 + 44) = 0;
  *(_QWORD*)(v8 + 52) = 0;
  *(_DWORD*)(v8 + 32) = (unsigned int)v14 / v15;
  v16 = SoundVoiceNX_14e360();
  nn_os_LockMutex_alt1((__int64)v16 + 1720);
  v17 = nn_audio_AppendWaveBuffer(a1 + 56, v8 + 12);
  v18 = SoundVoiceNX_14e360();
  nn_os_UnlockMutex_alt1((__int64)v18 + 1720);
  if ((v17 & 1) != 0) {
    return 1;
  }
  *(_QWORD*)v8 = 0;
  return 0;
}

#pragma GCC visibility pop
