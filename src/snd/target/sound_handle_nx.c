#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_2769e0(_QWORD, _QWORD);
__int64 GameRoutine_276ac0(_QWORD);
__int64 GameRoutine_278890(_QWORD, _QWORD);
__int64 GameRoutine_27e060(_QWORD, _QWORD);
__int64 GameRoutine_27e140(_QWORD);
__int64 GameRoutine_27e180(_QWORD, _QWORD);
__int64 GameRoutine_27e260(_QWORD);
__int64 GameRoutine_2a1b90(_QWORD);
__int64 SequenceSound_28d790(_QWORD, _QWORD);
__int64 StreamSound_2964c0(_QWORD, _QWORD);
__int64 WaveSound_2ac390(_QWORD, _QWORD);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 strlen(_QWORD);
__n128 nn_os_UnlockMutex(_QWORD);
extern __int64 snd_target_s_platform;
void __attribute__((noreturn)) GameRoutine_a36650(_QWORD, _QWORD);
__int64 SoundHandleNX_Unknown11(__int64 a1);
__n128 SoundHandleNX_Unknown19(__int64 a1, unsigned int a2);

__int64 SoundHandleNX_Unknown11(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _DWORD v6[12];
  __int64 v7;

  v2 = ((__int64 (*)(void))GameRoutine_2a1b90)();
  nn_os_LockMutex(v2 + 840);
  GameRoutine_27e060(&v7, a1 + 32);
  if (v7 != 0) {
    StreamSound_2964c0(v7, v6);
    LODWORD(a1) = v6[1];
  }
  v3 = GameRoutine_27e140(&v7);
  v4 = GameRoutine_2a1b90(v3);
  nn_os_UnlockMutex(v4 + 840);
  return (unsigned int)a1;
}

__n128 SoundHandleNX_Unknown19(__int64 a1, unsigned int a2)
{
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
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
  __int64 v28;

  v4 = GameRoutine_2a1b90(a1);
  nn_os_LockMutex(v4 + 840);
  v5 = *(_DWORD*)(a1 + 8);
  v6 = *(_QWORD*)(a1 + 16);
  v7 = snd_target_s_platform;
  if (v6 == 0 ||
      (v8 = snd_target_s_platform + 4088LL * v5, v9 = *(__int64**)(v8 + 4056),
       v10 = *(__int64**)(v8 + 4048), v9 == v10)) {
  LABEL_19:
    v24 = 32;
    if (*(_BYTE*)(v7 + 4088LL * v5 + 4136) != 0) {
      v24 = 1584;
    }
    v19 = v7 + 4088LL * v5 + 56 + v24;
    v25 = *(_QWORD*)(a1 + 32);
    v21 = a1 + 32;
    v20 = v25;
    if (v25 == 0) {
      goto LABEL_15;
    }
  LABEL_22:
    v23 = GameRoutine_278890(v19, *(unsigned int*)(v20 + 280));
    if ((_DWORD)v23 == 1) {
      goto LABEL_16;
    }
    goto LABEL_23;
  }
  v11 = v9 - v10;
  while (1) {
    v13 = *v10++;
    v12 = v13;
    if (*(_BYTE*)(v13 + 1440) == 1) {
      v14 = strlen(v6);
      v16 = *(_BYTE*)v12 >> 1;
      if ((*(_BYTE*)v12 & 1) != 0) {
        v16 = *(_QWORD*)(v12 + 8);
      }
      if (v14 == v16) {
        v17 = v14;
        if (v14 == -1) {
          GameRoutine_a36650(-1, v15);
        }
        v18 = (*(_BYTE*)v12 & 1) != 0 ? *(_QWORD*)(v12 + 16) : v12 + 1;
        if ((unsigned int)memcmp(v18, v6, v17) == 0) {
          break;
        }
      }
    }
    if (--v11 == 0) {
      goto LABEL_19;
    }
  }
  v19 = v12 + 32;
  v22 = *(_QWORD*)(a1 + 32);
  v21 = a1 + 32;
  v20 = v22;
  if (v22 != 0) {
    goto LABEL_22;
  }

LABEL_15:
  v23 = GameRoutine_278890(v19, 0xFFFFFFFFLL);
  if ((_DWORD)v23 == 1) {
  LABEL_16:
    GameRoutine_2769e0(&v28, v21);
    if (v28 != 0) {
      SequenceSound_28d790(v28, a2);
    }
    v23 = GameRoutine_276ac0(&v28);
    goto LABEL_27;
  }

LABEL_23:
  if ((_DWORD)v23 == 3) {
    GameRoutine_27e180(&v28, v21);
    if (v28 != 0) {
      WaveSound_2ac390(v28, a2);
    }
    v23 = GameRoutine_27e260(&v28);
  }

LABEL_27:
  v26 = GameRoutine_2a1b90(v23);
  return nn_os_UnlockMutex(v26 + 840);
}

#pragma GCC visibility pop
