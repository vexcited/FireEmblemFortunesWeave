#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_2afd90(__int64, __int64);
__int64 SoundVoiceNX_14e360(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_audio_GetRequiredBufferSizeForReverb(_QWORD, _QWORD);
__int64 nn_audio_SetReverbInputOutput(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_detail_UnexpectedDefaultImpl(_QWORD, _QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
extern _QWORD GameData_1b01548[4];
extern unsigned int GameData_1a83730[4];
__int64 EffectReverb_Unknown2(__int64 a1, __int64 a2);
__int64 EffectReverb_Unknown4(__int64 a1, __int64 a2);
__int64 EffectReverb_2b2580(__int64 a1, __int64 a2);
__int64 EffectReverb_Unknown8(__int64 result, __int64 a2);
__int64 EffectReverb_2b2ca0(__int64 result);

__int64 EffectReverb_Unknown2(__int64 a1, __int64 a2)
{
  __int64 v2;
  int v3;
  __int64 v4;

  v2 = *(unsigned int*)(a1 + 120);
  if ((unsigned int)v2 < 4) {
    a2 = GameData_1a83730[v2];
    v3 = *(_DWORD*)(a1 + 28);
    if (v3 == 0) {
      v4 = 32000;
      return nn_audio_GetRequiredBufferSizeForReverb(v4, a2);
    }
    if (v3 == 1) {
      v4 = 48000;
      return nn_audio_GetRequiredBufferSizeForReverb(v4, a2);
    }
  }
  nn_detail_UnexpectedDefaultImpl(a1, a2);
  __udf(0);
}

__int64 EffectReverb_Unknown4(__int64 a1, __int64 a2)
{
  __int64 v2;
  unsigned int v4;
  __int64 v5;
  __int64 v6;
  unsigned int* v7;
  __int64 v8;
  char* v9;
  char v10;
  char v11;
  __int64 v12;
  unsigned int v13;
  char* v14;
  unsigned int* v15;
  unsigned int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v21;
  __int16 v22;

  v2 = *(unsigned int*)(a1 + 120);
  if ((unsigned int)v2 >= 4) {
    nn_detail_UnexpectedDefaultImpl(a1, a2);
    __udf(0);
  }
  v22 = 0;
  v21 = 0;
  v4 = GameData_1a83730[v2];
  v5 = v4 & 7;
  if (v4 - 1 < 7) {
    v6 = 0;
    if ((v4 & 7) == 0) {
      goto LABEL_10;
    }
    goto LABEL_8;
  }
  v7 = (unsigned int*)(a1 + 152);
  v8 = 0;
  v9 = (char*)&v21 + 3;
  do {
    v8 -= 8;
    v10 = *(_BYTE*)(a2 + *(v7 - 6));
    *(v9 - 3) = *(_BYTE*)(a2 + *(v7 - 7));
    *(v9 - 2) = v10;
    v11 = *(_BYTE*)(a2 + *(v7 - 4));
    *(v9 - 1) = *(_BYTE*)(a2 + *(v7 - 5));
    *v9 = v11;
    v12 = *(v7 - 2);
    v9[1] = *(_BYTE*)(a2 + *(v7 - 3));
    v9[2] = *(_BYTE*)(a2 + v12);
    v9[3] = *(_BYTE*)(a2 + *(v7 - 1));
    v13 = *v7;
    v7 += 8;
    v9[4] = *(_BYTE*)(a2 + v13);
    v9 += 8;
  } while (-(__int64)(v4 & 0x7FFFFFF8) != v8);
  v6 = -v8;
  if ((v4 & 7) != 0) {
  LABEL_8:
    v14 = (char*)&v21 + v6;
    v15 = (unsigned int*)(a1 + 4 * v6 + 124);
    do {
      v16 = *v15++;
      --v5;
      *v14++ = *(_BYTE*)(a2 + v16);
    } while (v5 != 0);
  }

LABEL_10:
  v17 = SoundVoiceNX_14e360(a1);
  nn_os_LockMutex(v17 + 1720);
  v18 = nn_audio_SetReverbInputOutput(a1 + 112, &v21, &v21, v4);
  v19 = SoundVoiceNX_14e360(v18);
  return nn_os_UnlockMutex(v19 + 1720);
}

__int64 EffectReverb_2b2580(__int64 a1, __int64 a2)
{
  unsigned int v2;
  int v4;
  _QWORD v6[3];

  v2 = a2;
  v6[0] = 0x100000000LL;
  v6[1] = 0x300000002LL;
  v6[2] = 0x500000004LL;
  if ((_DWORD)a2 == 3) {
    HIDWORD(v6[2]) = 3;
    LODWORD(v6[1]) = 4;
    *(_QWORD*)((char*)&v6[1] + 4) = 0x200000005LL;
    v4 = GameRoutine_2afd90(3, a2);
    if ((*(_BYTE*)(a1 + 24) & 1) != 0) {
      return 0;
    }
    *(_DWORD*)(a1 + 120) = 3;
    if (v4 >= 1) {
      goto LABEL_9;
    }
  }
  else {
    v4 = GameRoutine_2afd90((unsigned int)a2, a2);
    if (v2 > 3 || (*(_BYTE*)(a1 + 24) & 1) != 0) {
      return 0;
    }
    *(_DWORD*)(a1 + 120) = v2;
    if (v4 > 0) {
    LABEL_9:
      memcpy(a1 + 124, v6, 4LL * (unsigned int)v4);
    }
  }
  return 1;
}

__int64 EffectReverb_Unknown8(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int* v6;
  _DWORD* v7;
  __int64 v8;
  __int64 v9;
  int v10;
  _DWORD* v11;
  int* v12;
  int v13;

  v2 = *(unsigned int*)(result + 120);
  if ((unsigned int)v2 >= 4) {
    nn_detail_UnexpectedDefaultImpl(result, a2);
    __udf(0);
  }
  v3 = GameData_1b01548[v2];
  v4 = v3 & 7;
  if ((unsigned __int64)(v3 - 1) >= 7) {
    v6 = (int*)(result + 152);
    v7 = (_DWORD*)(a2 + 16);
    v8 = 0;
    v9 = -(__int64)(v3 & 0xFFFFFFFFFFFFFFF8LL);
    do {
      v8 -= 8;
      *(v7 - 4) = *(v6 - 7);
      *(v7 - 3) = *(v6 - 6);
      *(v7 - 2) = *(v6 - 5);
      *(v7 - 1) = *(v6 - 4);
      *v7 = *(v6 - 3);
      v7[1] = *(v6 - 2);
      v7[2] = *(v6 - 1);
      v10 = *v6;
      v6 += 8;
      v7[3] = v10;
      v7 += 8;
    } while (v9 != v8);
    v5 = -v8;
  }
  else {
    v5 = 0;
  }
  v11 = (_DWORD*)(a2 + 4 * v5);
  v12 = (int*)(result + 4 * v5 + 124);
  do {
    v13 = *v12++;
    --v4;
    *v11++ = v13;
  } while (v4 != 0);
  return result;
}

__int64 EffectReverb_2b2ca0(__int64 result)
{
  *(_QWORD*)result = 0x3F33333300000000LL;
  *(_QWORD*)(result + 8) = 15000000;
  *(_QWORD*)(result + 16) = 0x3F33333300000000LL;
  *(_QWORD*)(result + 24) = 1500000000;
  *(_QWORD*)(result + 32) = 0x3F3333333F4CCCCDLL;
  *(_QWORD*)(result + 40) = 0x3F8000003E4CCCCDLL;
  strcpy((char*)(result + 48), "333?");
  return result;
}

#pragma GCC visibility pop
