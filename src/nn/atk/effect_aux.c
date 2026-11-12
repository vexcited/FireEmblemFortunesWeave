#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SoundVoiceNX_14e360(_QWORD);
__int64 nn_audio_AddAux_1a0c630(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_audio_AddAux_1a0c650(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_audio_GetRequiredBufferSizeForAuxSendReturnBuffer(_QWORD, _QWORD,
                                                             _QWORD);
__int64 nn_audio_RemoveAux_1a0c670(_QWORD, _QWORD, _QWORD);
__int64 nn_audio_RemoveAux_1a0c680(_QWORD, _QWORD, _QWORD);
__int64 nn_audio_SetAuxEnabled(_QWORD, _QWORD);
__int64 nn_audio_SetAuxInputOutput(_QWORD, _QWORD, _QWORD);
__int64 nn_detail_UnexpectedDefaultImpl(void);
__int64 EffectAux_2af400(__int64 a1, __int64 a2, __int64 a3,
                         __int64 (***a4)(_QWORD));
__int64 EffectAux_2af520(__int64 a1, __int64 a2);
__int64 EffectAux_2af630(__int64 result, __int64 a2, __int64 (***a3)(_QWORD));
__int64 EffectAux_2af6c0(__int64 a1, int a2);
__int64 EffectAux_2af740(__int64 a1, int a2);

__int64 EffectAux_2af400(__int64 a1, __int64 a2, __int64 a3,
                         __int64 (***a4)(_QWORD))
{
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  int v11;

  if ((*(_BYTE*)(a1 + 48) & 1) == 0) {
    v7 = nn_audio_GetRequiredBufferSizeForAuxSendReturnBuffer(
        a3, *(unsigned int*)(a1 + 40), *(unsigned int*)(a1 + 44));
    v8 = (*(_QWORD*)(a1 + 56) + 63LL) & 0xFFFFFFFFFFFFFFC0LL;
    v9 = (v8 + v7 + 63) & 0xFFFFFFFFFFFFFFC0LL;
    *(_QWORD*)(a1 + 72) = (v9 + v7 + 63) & 0xFFFFFFFFFFFFFFC0LL;
    v10 = atomic_load((unsigned __int64*)(SoundVoiceNX_14e360(v7) + 200));
    atomic_store(v10, (unsigned __int64*)(a1 + 32));
    v11 = (**a4)(a4);
    if (v11 == 1) {
      if ((unsigned int)nn_audio_AddAux_1a0c650(a2, a1 + 24, a4 + 9, v8, v9,
                                                v7) == 0) {
      LABEL_5:
        nn_audio_SetAuxEnabled(a1 + 24, *(unsigned __int8*)(a1 + 49));
        *(_BYTE*)(a1 + 48) = 1;
        return 1;
      }
    }
    else {
      if (v11 != 0) {
        nn_detail_UnexpectedDefaultImpl();
        __udf(0);
      }
      if ((unsigned int)nn_audio_AddAux_1a0c630(a2, a1 + 24, a4 + 11, v8, v9,
                                                v7) == 0) {
        goto LABEL_5;
      }
    }
  }
  return 0;
}

__int64 EffectAux_2af520(__int64 a1, __int64 a2)
{
  int v2;
  __int64 v3;
  __int64 v4;
  unsigned int* v5;
  __int64 v6;
  char* v7;
  char v8;
  char v9;
  __int64 v10;
  unsigned int v11;
  char* v12;
  unsigned int* v13;
  unsigned int v14;
  struct {
    int v16;
    __int16 v17;
  } v16_;

  v2 = *(_DWORD*)(a1 + 44);
  v16_.v17 = 0;
  v16_.v16 = 0;
  if (v2 >= 1) {
    v3 = v2 & 7;
    if ((unsigned int)v2 < 8) {
      v4 = 0;
      if ((v2 & 7) == 0) {
        return nn_audio_SetAuxInputOutput(a1 + 24, &v16_.v16, &v16_.v16);
      }
      goto LABEL_8;
    }
    v5 = (unsigned int*)(a1 + 108);
    v6 = 0;
    v7 = (char*)&v16_.v16 + 3;
    do {
      v6 -= 8;
      v8 = *(_BYTE*)(a2 + *(v5 - 6));
      *(v7 - 3) = *(_BYTE*)(a2 + *(v5 - 7));
      *(v7 - 2) = v8;
      v9 = *(_BYTE*)(a2 + *(v5 - 4));
      *(v7 - 1) = *(_BYTE*)(a2 + *(v5 - 5));
      *v7 = v9;
      v10 = *(v5 - 2);
      v7[1] = *(_BYTE*)(a2 + *(v5 - 3));
      v7[2] = *(_BYTE*)(a2 + v10);
      v7[3] = *(_BYTE*)(a2 + *(v5 - 1));
      v11 = *v5;
      v5 += 8;
      v7[4] = *(_BYTE*)(a2 + v11);
      v7 += 8;
    } while (-(__int64)(v2 & 0x7FFFFFF8) != v6);
    v4 = -v6;
    if ((v2 & 7) != 0) {
    LABEL_8:
      v12 = (char*)&v16_.v16 + v4;
      v13 = (unsigned int*)(a1 + 4 * v4 + 80);
      do {
        v14 = *v13++;
        --v3;
        *v12++ = *(_BYTE*)(a2 + v14);
      } while (v3 != 0);
    }
  }
  return nn_audio_SetAuxInputOutput(a1 + 24, &v16_.v16, &v16_.v16);
}

__int64 EffectAux_2af630(__int64 result, __int64 a2, __int64 (***a3)(_QWORD))
{
  __int64 v5;
  int v6;

  if (*(_BYTE*)(result + 48) == 1) {
    v5 = result;
    v6 = (**a3)(a3);
    if (v6 == 1) {
      result = nn_audio_RemoveAux_1a0c680(a2, v5 + 24, a3 + 9);
    }
    else {
      if (v6 != 0) {
        nn_detail_UnexpectedDefaultImpl();
        __udf(0);
      }
      result = nn_audio_RemoveAux_1a0c670(a2, v5 + 24, a3 + 11);
    }
    *(_BYTE*)(v5 + 48) = 0;
  }
  return result;
}

__int64 EffectAux_2af6c0(__int64 a1, int a2)
{
  int v2;

  *(_QWORD*)(a1 + 80) = 0x100000000LL;
  *(_QWORD*)(a1 + 88) = 0x300000002LL;
  *(_QWORD*)(a1 + 96) = 0x500000004LL;
  v2 = *(unsigned __int8*)(a1 + 48);
  if ((v2 & 1) == 0) {
    *(_DWORD*)(a1 + 44) = a2;
  }
  return v2 ^ 1u;
}

__int64 EffectAux_2af740(__int64 a1, int a2)
{
  int v2;

  v2 = *(unsigned __int8*)(a1 + 48);
  if ((v2 & 1) == 0) {
    *(_DWORD*)(a1 + 40) = a2;
  }
  return v2 ^ 1u;
}

#pragma GCC visibility pop
