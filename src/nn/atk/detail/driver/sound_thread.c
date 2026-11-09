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
