#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SoundVoiceNX_14e360(_QWORD);
__int64 nn_audio_AddDelay_1a0c7d0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                  _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_audio_AddDelay_1a0c850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                  _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_audio_GetRequiredBufferSizeForDelay(_QWORD, _QWORD, _QWORD);
__int64 nn_audio_SetDelayChannelSpread(_QWORD, float);
__int64 nn_audio_SetDelayDryGain(_QWORD, float);
__int64 nn_audio_SetDelayEnabled(_QWORD, _QWORD);
__int64 nn_audio_SetDelayFeedbackGain(_QWORD, float);
__int64 nn_audio_SetDelayInGain(_QWORD, float);
__int64 nn_audio_SetDelayInputOutput(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_audio_SetDelayLowPassAmount(_QWORD, float);
__int64 nn_audio_SetDelayTime(_QWORD, _QWORD);
__int64 nn_detail_UnexpectedDefaultImpl(_QWORD, _QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
extern unsigned int GameData_1a83730[4];
__int64 EffectDelay_Unknown2(__int64 a1, __int64 a2);

__int64 EffectDelay_Unknown2(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v10;
  __int64 v11;
  __int64 (***v12)(_QWORD);
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 (***v16)(_QWORD);
  __int64 v17;
  unsigned int v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned int v30;
  __int64 v31;
  __int64 v32;
  unsigned int* v33;
  __int64 v34;
  char* v35;
  char v36;
  char v37;
  __int64 v38;
  unsigned int v39;
  char* v40;
  unsigned int* v41;
  unsigned int v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  int v46;
  __int16 v47;
  __int64** v48;
  __int64 v49;
  __int64 v50;
  __int64* v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 vars0;

  v4 = *(unsigned int*)(a1 + 104);
  if ((unsigned int)v4 < 4) {
    v5 = GameData_1a83730[v4];
    v6 = *(_DWORD*)(a1 + 28);
    if (v6 == 0) {
      v7 = 32000;
      v8 = *(_QWORD*)(a1 + 48);
      return nn_audio_GetRequiredBufferSizeForDelay(v8, v7, v5);
    }
    if (v6 == 1) {
      v7 = 48000;
      v8 = *(_QWORD*)(a1 + 48);
      return nn_audio_GetRequiredBufferSizeForDelay(v8, v7, v5);
    }
  }
  v10 = nn_detail_UnexpectedDefaultImpl(a1, a2);
  v51 = &vars0;
  v52 = v13;
  v53 = v3;
  v54 = v2;
  if ((*(_BYTE*)(v10 + 24) & 1) != 0) {
    return 0;
  }
  v14 = *(unsigned int*)(v10 + 104);
  v15 = v10;
  if ((unsigned int)v14 < 4 && *(_DWORD*)(v10 + 28) < 2u) {
    v16 = v12;
    v17 = v11;
    v18 = GameData_1a83730[v14];
    v19 = atomic_load((unsigned __int64*)(SoundVoiceNX_14e360(v10) + 200));
    atomic_store(v19, (unsigned __int64*)(v15 + 88));
    v10 = (**v16)(v16);
    if ((_DWORD)v10 == 1) {
      v21 = nn_audio_AddDelay_1a0c850(v17, v15 + 96, *(_QWORD*)(v15 + 32),
                                      *(_QWORD*)(v15 + 40), v16 + 9,
                                      *(_QWORD*)(v15 + 48), v18, v20, v51, v52);
      if ((_DWORD)v21 == 0) {
        goto LABEL_14;
      }
      return 0;
    }
    if ((_DWORD)v10 == 0) {
      v21 = nn_audio_AddDelay_1a0c7d0(v17, v15 + 96, *(_QWORD*)(v15 + 32),
                                      *(_QWORD*)(v15 + 40), v16 + 11,
                                      *(_QWORD*)(v15 + 48), v18, v20, v51, v52);
      if ((_DWORD)v21 == 0) {
      LABEL_14:
        *(_BYTE*)(v15 + 24) = 1;
        v22 = SoundVoiceNX_14e360(v21);
        nn_os_LockMutex(v22 + 1720);
        nn_audio_SetDelayTime(v15 + 96, *(_QWORD*)(v15 + 56));
        nn_audio_SetDelayInGain(v15 + 96, *(float*)(v15 + 64));
        nn_audio_SetDelayFeedbackGain(v15 + 96, *(float*)(v15 + 68));
        nn_audio_SetDelayDryGain(v15 + 96, *(float*)(v15 + 72));
        nn_audio_SetDelayLowPassAmount(v15 + 96, *(float*)(v15 + 76));
        nn_audio_SetDelayChannelSpread(v15 + 96, *(float*)(v15 + 80));
        v23 = nn_audio_SetDelayEnabled(v15 + 96, *(unsigned __int8*)(v15 + 84));
        v24 = SoundVoiceNX_14e360(v23);
        nn_os_UnlockMutex(v24 + 1720);
        return 1;
      }
      return 0;
    }
  }
  v25 = nn_detail_UnexpectedDefaultImpl(v10, v11);
  v48 = &v51;
  v49 = v27;
  v50 = v15;
  v28 = *(unsigned int*)(v25 + 104);
  if ((unsigned int)v28 >= 4) {
    nn_detail_UnexpectedDefaultImpl(v25, v26);
    __udf(0);
  }
  v29 = v25;
  v47 = 0;
  v46 = 0;
  v30 = GameData_1a83730[v28];
  v31 = v30 & 7;
  if (v30 - 1 >= 7) {
    v33 = (unsigned int*)(v25 + 136);
    v34 = 0;
    v35 = (char*)&v46 + 3;
    do {
      v34 -= 8;
      v36 = *(_BYTE*)(v26 + *(v33 - 6));
      *(v35 - 3) = *(_BYTE*)(v26 + *(v33 - 7));
      *(v35 - 2) = v36;
      v37 = *(_BYTE*)(v26 + *(v33 - 4));
      *(v35 - 1) = *(_BYTE*)(v26 + *(v33 - 5));
      *v35 = v37;
      v38 = *(v33 - 2);
      v35[1] = *(_BYTE*)(v26 + *(v33 - 3));
      v35[2] = *(_BYTE*)(v26 + v38);
      v35[3] = *(_BYTE*)(v26 + *(v33 - 1));
      v39 = *v33;
      v33 += 8;
      v35[4] = *(_BYTE*)(v26 + v39);
      v35 += 8;
    } while (-(__int64)(v30 & 0x7FFFFFF8) != v34);
    v32 = -v34;
    if ((v30 & 7) == 0) {
      goto LABEL_26;
    }
    goto LABEL_24;
  }
  v32 = 0;
  if ((v30 & 7) != 0) {
  LABEL_24:
    v40 = (char*)&v46 + v32;
    v41 = (unsigned int*)(v25 + 4 * v32 + 108);
    do {
      v42 = *v41++;
      --v31;
      *v40++ = *(_BYTE*)(v26 + v42);
    } while (v31 != 0);
  }

LABEL_26:
  v43 = SoundVoiceNX_14e360(v25);
  nn_os_LockMutex(v43 + 1720);
  v44 = nn_audio_SetDelayInputOutput(v29 + 96, &v46, &v46, v30);
  v45 = SoundVoiceNX_14e360(v44);
  return nn_os_UnlockMutex(v45 + 1720);
}

#pragma GCC visibility pop
