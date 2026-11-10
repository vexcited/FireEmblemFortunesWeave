#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_277cf0(_QWORD, float);
__int64 GameRoutine_277d00(_QWORD, float);
__int64 GameRoutine_277d10(_QWORD, float);
__int64 GameRoutine_277d20(_QWORD, float);
__int64 GameRoutine_277d30(_QWORD, float);
__int64 GameRoutine_2a1b90(_QWORD);
__int64 nn_os_LockMutex(_QWORD);
__n128 nn_os_UnlockMutex(_QWORD);
extern __int64 snd_g_memory;
extern __int64 snd_target_s_platform;
extern __int64* GameData_21347e8[10];
void Sound3DListenerNX_Destructor(__int64 a1);
__n128 Sound3DListenerNX_Unknown2(__int64 a1, float a2);
__n128 Sound3DListenerNX_Unknown3(__int64 a1, float a2);
__n128 Sound3DListenerNX_Unknown4(__int64 a1, float a2);
__n128 Sound3DListenerNX_Unknown5(__int64 a1, float a2);
__n128 Sound3DListenerNX_Unknown6(__int64 a1, float a2);
_QWORD* Sound3DListenerNX_Unknown7(__int64 a1);
float Sound3DListenerNX_Unknown8(__int64 a1);
float Sound3DListenerNX_Unknown9(__int64 a1);
float Sound3DListenerNX_Unknown10(__int64 a1);

void Sound3DListenerNX_Destructor(__int64 a1)
{
  int v2;
  int v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  long double v11;
  __int64 v12;

  v3 = *(_DWORD*)(a1 + 8);
  v2 = *(_DWORD*)(a1 + 12);
  *(_QWORD*)a1 = GameData_21347e8[0] + 2;
  v4 = *(_QWORD*)(a1 + 16);
  if (v4 + 136 != snd_target_s_platform + 4088LL * v2 + 96LL * v3 + 3824) {
    v5 = *(__int64**)(v4 + 144);
    v6 = *v5;
    *(_QWORD*)(*(_QWORD*)(v4 + 136) + 8LL) = v5;
    *v5 = *(_QWORD*)(v4 + 136);
    *(_QWORD*)(v6 + 8) = v4 + 136;
    *(_QWORD*)(v4 + 136) = v6;
  }
  v7 = GameRoutine_2a1b90(a1);
  v8 = nn_os_LockMutex(v7 + 840);
  v9 = *(_QWORD*)(a1 + 16);
  *(_QWORD*)(a1 + 16) = 0;
  if (v9 != 0) {
    v8 =
        (*(__int64 (**)(__int64))(*(_QWORD*)snd_g_memory + 24LL))(snd_g_memory);
  }
  v10 = GameRoutine_2a1b90(v8);
  *(__n128*)&v11 = nn_os_UnlockMutex(v10 + 840);
  v12 = *(_QWORD*)(a1 + 16);
  *(_QWORD*)(a1 + 16) = 0;
  if (v12 != 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)snd_g_memory + 24LL))(
        snd_g_memory, v11);
  }
}

__n128 Sound3DListenerNX_Unknown2(__int64 a1, float a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v4 = GameRoutine_2a1b90(a1);
  nn_os_LockMutex(v4 + 840);
  v5 = GameRoutine_277d20(*(_QWORD*)(a1 + 16), a2);
  v6 = GameRoutine_2a1b90(v5);
  return nn_os_UnlockMutex(v6 + 840);
}

__n128 Sound3DListenerNX_Unknown3(__int64 a1, float a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v4 = GameRoutine_2a1b90(a1);
  nn_os_LockMutex(v4 + 840);
  v5 = GameRoutine_277d30(*(_QWORD*)(a1 + 16), a2);
  v6 = GameRoutine_2a1b90(v5);
  return nn_os_UnlockMutex(v6 + 840);
}

__n128 Sound3DListenerNX_Unknown4(__int64 a1, float a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v4 = GameRoutine_2a1b90(a1);
  nn_os_LockMutex(v4 + 840);
  v5 = GameRoutine_277cf0(*(_QWORD*)(a1 + 16), a2);
  v6 = GameRoutine_2a1b90(v5);
  return nn_os_UnlockMutex(v6 + 840);
}

__n128 Sound3DListenerNX_Unknown5(__int64 a1, float a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v4 = GameRoutine_2a1b90(a1);
  nn_os_LockMutex(v4 + 840);
  v5 = GameRoutine_277d00(*(_QWORD*)(a1 + 16), a2);
  v6 = GameRoutine_2a1b90(v5);
  return nn_os_UnlockMutex(v6 + 840);
}

__n128 Sound3DListenerNX_Unknown6(__int64 a1, float a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v4 = GameRoutine_2a1b90(a1);
  nn_os_LockMutex(v4 + 840);
  v5 = GameRoutine_277d10(*(_QWORD*)(a1 + 16), a2);
  v6 = GameRoutine_2a1b90(v5);
  return nn_os_UnlockMutex(v6 + 840);
}

_QWORD* Sound3DListenerNX_Unknown7(__int64 a1)
{
  return X8CALL_X0(_QWORD*,
                   (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64,
                                                           _QWORD, _QWORD))(
                       *(_QWORD*)snd_target_s_platform + 560LL))(
                       (void*)snd_target_s_platform, snd_target_s_platform,
                       *(unsigned int*)(a1 + 12), *(unsigned int*)(a1 + 8)));
}

float Sound3DListenerNX_Unknown8(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  float v4;
  __int64 v5;

  v2 = GameRoutine_2a1b90(a1);
  v3 = nn_os_LockMutex(v2 + 840);
  v4 = *(float*)(*(_QWORD*)(a1 + 16) + 100LL);
  v5 = GameRoutine_2a1b90(v3);
  nn_os_UnlockMutex(v5 + 840);
  return v4;
}

float Sound3DListenerNX_Unknown9(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  float v4;
  __int64 v5;

  v2 = GameRoutine_2a1b90(a1);
  v3 = nn_os_LockMutex(v2 + 840);
  v4 = *(float*)(*(_QWORD*)(a1 + 16) + 96LL);
  v5 = GameRoutine_2a1b90(v3);
  nn_os_UnlockMutex(v5 + 840);
  return v4;
}

float Sound3DListenerNX_Unknown10(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  float v4;
  __int64 v5;

  v2 = GameRoutine_2a1b90(a1);
  v3 = nn_os_LockMutex(v2 + 840);
  v4 = *(float*)(*(_QWORD*)(a1 + 16) + 104LL);
  v5 = GameRoutine_2a1b90(v3);
  nn_os_UnlockMutex(v5 + 840);
  return v4;
}

#pragma GCC visibility pop
