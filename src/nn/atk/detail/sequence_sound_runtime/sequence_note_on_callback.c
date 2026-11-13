#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BasicSound_2827d0(_QWORD*, __int64*);
__int64 GameRoutine_278690(__int64);
__int64 GameRoutine_278700(_QWORD, _QWORD);
__int64 GameRoutine_278d70(__int64, __int64, unsigned int);
__int64 GameRoutine_27ba20(_QWORD, _QWORD);
__int64 GameRoutine_280680(_QWORD, _QWORD);
__int64 GameRoutine_282480(_QWORD*, __int64, __int64);
__int64 GameRoutine_2832c0(unsigned int*, char);
__int64 GameRoutine_283380(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2860e0(_QWORD*);
__int64 GameRoutine_28d460(__int64, __int64);
__int64 GameRoutine_291440(__int64);
__int64 GameRoutine_293880(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_293ae0(_QWORD);
__int64 GameRoutine_293bb0(_QWORD);
__int64 GameRoutine_293bc0(_QWORD);
__int64 GameRoutine_293bd0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2a2a60(_QWORD);
__int64 GameRoutine_2a5520(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
extern _UNKNOWN* GameData_2135058;
extern __int64 (
    *nn_atk_detail_driver_SequenceSoundLoader_FreePlayerHeapTask_vtable[])();
extern __int64 GameData_2135380[5];
extern char* GameData_2135288[3];
extern char* GameData_2135290[2];
unsigned __int64 GameRoutine_27dc10();
unsigned __int64 SequenceNoteOnCallback_291fa0(__int64 a1, __int64 a2,
                                               unsigned __int64 a3,
                                               unsigned int* a4);
__int64 SequenceNoteOnCallback_292160(_QWORD* a1, __int64 a2,
                                      unsigned __int64 a3);
__int64 SequenceNoteOnCallback_2923e0(unsigned int* a1);
__int64 SequenceNoteOnCallback_292500(__int64 a1, int a2, _QWORD* a3,
                                      __int64 a4);
__int64 SequenceNoteOnCallback_292580(__int64 result, __int64* a2, __int64 a3);
__int64 SequenceNoteOnCallback_2925c0(int* a1, int a2);
__int64 SequenceNoteOnCallback_292660(__int64 a1, int a2);
__int64 SequenceNoteOnCallback_292680(__int64 result, __int64 a2, __int64 a3,
                                      __int64 a4, __int64 a5, __int64 a6);
_QWORD* SequenceNoteOnCallback_292900(__int64 a1, unsigned int a2,
                                      unsigned int a3, unsigned int a4,
                                      __int64* a5, __int64 a6, __int64 a7);
__int64 SequenceNoteOnCallback_292d90(__int64 a1, __int64 a2, __int64 a3,
                                      unsigned int* a4, __int64* a5,
                                      unsigned int* a6);
_QWORD* SequenceNoteOnCallback_Unknown2(__int64 a1, __int64 a2,
                                        unsigned __int8 a3, __int64 a4);
__int64 SequenceNoteOnCallback_2933d0(__int64 a1, __int64 a2, __int64 a3,
                                      __int64 a4);
__int64 BaseNx_2832c0(unsigned int*, char);
unsigned __int64 SoundArchivePlayer_27dc10();
unsigned __int128
SoundArchivePlayer_27dc10_pair() __asm__("SoundArchivePlayer_27dc10");

unsigned __int64 SequenceNoteOnCallback_291fa0(__int64 a1, __int64 a2,
                                               unsigned __int64 a3,
                                               unsigned int* a4)
{
  __int64 v7;
  unsigned __int64 v8;
  int v9;
  __int64* v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v21;

  v7 = GameRoutine_2832c0(a4, 1);
  v19 = a3;
  v8 = v7 + GameRoutine_2832c0(a4, 0) + 1624;
  if (v7 == 0) {
    v8 = 1528;
  }
  v21 = a3 / v8;
  if ((int)(a3 / v8) >= 1) {
    v9 = 0;
    v10 = (__int64*)(a2 + 544);
    v11 = (_QWORD*)(a2 + 1528 * (v21 & 0x7FFFFFFF));
    do {
      GameRoutine_28d460((__int64)(v10 - 68), a1);
      v12 = *v10;
      *v10 = *(_QWORD*)(a1 + 48);
      *(_QWORD*)(v12 + 8) = a1 + 48;
      *(_QWORD*)(*(_QWORD*)(a1 + 48) + 8LL) = v10;
      *(_QWORD*)(a1 + 48) = v12;
      v13 = GameRoutine_2832c0(a4, 1);
      if (v13 != 0) {
        v14 = v13;
        v15 = GameRoutine_2832c0(a4, 0);
        *v11 = 0;
        v11[1] = 0;
        v11[2] = 0;
        v11[3] = 0;
        v11[4] = 0;
        v11[5] = 0;
        GameRoutine_283380(v11, v11 + 6, v14, a4, 1);
        v16 = (_QWORD*)((char*)v11 + v14 + 48);
        v16[4] = 0;
        v16[5] = 0;
        v16[2] = 0;
        v16[3] = 0;
        *v16 = 0;
        v16[1] = 0;
        GameRoutine_283380(v16, v16 + 6, v15, a4, 0);
        GameRoutine_282480(v10 - 68, (__int64)v11, (__int64)v16);
        v11 = (_QWORD*)((char*)v16 + v15 + 48);
      }
      ++v9;
      v10 += 191;
    } while (v9 < (int)v21);
  }
  *(_QWORD*)a1 = a2;
  *(_QWORD*)(a1 + 8) = v19;
  v18 = *(_QWORD*)a4;
  *(_DWORD*)(a1 + 24) = a4[2];
  *(_QWORD*)(a1 + 16) = v18;
  return v21;
}

__int64 SequenceNoteOnCallback_292160(_QWORD* a1, __int64 a2,
                                      unsigned __int64 a3)
{
  unsigned __int64 v6;
  __int64* v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  v6 = a3 / 0x4B0;
  if ((int)(a3 / 0x4B0) >= 1) {
    v7 = a1 + 5;
    v8 = a3 / 0x4B0;
    v9 = a2;
    v10 = GameData_2135380[0] + 16;
    do {
      GameRoutine_2a2a60(v9);
      *(_QWORD*)v9 = v10;
      *(_QWORD*)(v9 + 72) = 0;
      *(_QWORD*)(v9 + 80) = 0;
      *(_QWORD*)(v9 + 88) = 0;
      *(_DWORD*)(v9 + 96) = -1;
      *(_QWORD*)(v9 + 104) = 0;
      *(_DWORD*)(v9 + 112) = -1;
      *(_QWORD*)(v9 + 120) = 0;
      *(_DWORD*)(v9 + 128) = -1;
      *(_QWORD*)(v9 + 136) = 0;
      *(_DWORD*)(v9 + 144) = -1;
      *(_QWORD*)(v9 + 152) = 0;
      *(_DWORD*)(v9 + 160) = -1;
      *(_QWORD*)(v9 + 168) = 0;
      *(_QWORD*)(v9 + 176) = 0;
      *(_QWORD*)(v9 + 184) = 0;
      *(_QWORD*)(v9 + 192) = 0;
      *(_QWORD*)(v9 + 200) = 0;
      *(_QWORD*)(v9 + 208) = 0;
      *(_QWORD*)(v9 + 216) = 0;
      *(_QWORD*)(v9 + 224) = 0;
      *(_QWORD*)(v9 + 232) = 0;
      *(_QWORD*)(v9 + 240) = 0;
      *(_DWORD*)(v9 + 248) = 0;
      GameRoutine_2a2a60(v9 + 280);
      *(_QWORD*)(v9 + 280) =
          nn_atk_detail_driver_SequenceSoundLoader_FreePlayerHeapTask_vtable;
      *(_QWORD*)(v9 + 352) = 0;
      *(_QWORD*)(v9 + 360) = 0;
      *(_QWORD*)(v9 + 368) = 0;
      *(_DWORD*)(v9 + 376) = -1;
      *(_QWORD*)(v9 + 384) = 0;
      *(_DWORD*)(v9 + 392) = -1;
      *(_QWORD*)(v9 + 400) = 0;
      *(_DWORD*)(v9 + 408) = -1;
      *(_QWORD*)(v9 + 416) = 0;
      *(_DWORD*)(v9 + 424) = -1;
      *(_QWORD*)(v9 + 432) = 0;
      *(_DWORD*)(v9 + 440) = -1;
      *(_QWORD*)(v9 + 448) = 0;
      GameRoutine_291440(v9 + 472);
      v11 = v9 + 1184;
      --v8;
      *(_QWORD*)(v9 + 1184) = v9 + 1184;
      *(_QWORD*)(v9 + 1192) = v9 + 1184;
      v12 = *v7;
      *(_QWORD*)(v9 + 1192) = v7;
      *(_QWORD*)(v9 + 1184) = v12;
      v9 += 1200;
      *(_QWORD*)(*v7 + 8) = v11;
      *v7 = v11;
    } while (v8 != 0);
  }
  a1[3] = a2;
  a1[4] = a3;
  return (unsigned int)v6;
}

__int64 SequenceNoteOnCallback_2923e0(unsigned int* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 result;
  unsigned __int64 v5;
  unsigned __int64 v6;
  int v7;
  __int64* i;
  __int64* v9;
  __int64 v10;
  __int64* j;
  __int64* v12;
  __int64 v13;

  v2 = *(_QWORD*)a1;
  v3 = GameRoutine_2832c0(a1 + 4, 1);
  result = GameRoutine_2832c0(a1 + 4, 0);
  v5 = v3 + result + 1624;
  if (v3 == 0) {
    v5 = 1528;
  }
  v6 = *((_QWORD*)a1 + 1) / v5;
  if ((int)v6 >= 1) {
    v7 = 0;
    do {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
      v2 += 1528;
      ++v7;
    } while (v7 < (int)v6);
  }
  for (i = *((__int64**)a1 + 7); i != (__int64*)(a1 + 12);
       i = *((__int64**)a1 + 7)) {
    v9 = (__int64*)i[1];
    v10 = *v9;
    *(_QWORD*)(*i + 8) = v9;
    *v9 = *i;
    *(_QWORD*)(v10 + 8) = i;
    *i = v10;
  }
  for (j = *((__int64**)a1 + 5); j != (__int64*)(a1 + 8);
       j = *((__int64**)a1 + 5)) {
    v12 = (__int64*)j[1];
    v13 = *v12;
    *(_QWORD*)(*j + 8) = v12;
    *v12 = *j;
    *(_QWORD*)(v13 + 8) = j;
    *j = v13;
  }
  return result;
}

__int64 SequenceNoteOnCallback_292500(__int64 a1, int a2, _QWORD* a3,
                                      __int64 a4)
{
  unsigned __int64 v5;

  if ((*a3 & 0x3FLL) != 0) {
    return 0;
  }
  v5 = *a3 + ((624LL * a2 + 63) & 0xFFFFFFFFFFFFFFC0LL);
  if ((__int64)(v5 - a4) > 0) {
    return 0;
  }
  GameRoutine_293ae0(a1 + 144);
  *a3 = v5;
  return 1;
}

__int64 SequenceNoteOnCallback_292580(__int64 result, __int64* a2, __int64 a3)
{
  __int64 v3;
  __int64 i;

  v3 = *a2;
  for (i = *(_QWORD*)(result + 56); i != result + 48; v3 += a3) {
    *(_QWORD*)(i - 72) = v3;
    *(_QWORD*)(i - 64) = a3;
    i = *(_QWORD*)(i + 8);
  }
  *a2 = v3;
  return result;
}

__int64 SequenceNoteOnCallback_2925c0(int* a1, int a2)
{
  __int64 v2;
  int v5;
  __int64 v6;
  __int64 v7;
  struct {
    unsigned __int64 v9;
    int v10;
  } v9_;

  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v2 = *a1;
  v9_.v9 = ({
    unsigned __int128 r_ = SoundArchivePlayer_27dc10_pair();
    v5 = COERCE_AS(__typeof__(v5), (unsigned long long)(r_ >> 64));
    (unsigned __int64)(unsigned long long)r_;
  });
  v9_.v10 = v5;
  v6 = BaseNx_2832c0((unsigned int*)&v9_.v9, 1),
  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v7 = v6 + BaseNx_2832c0((unsigned int*)&v9_.v9, 0) + 1624,
  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v6 == 0) {
    v7 = 1528;
  }
  return ((a2 - 1LL + 1200LL * *a1) & -(__int64)a2) +
         ((a2 - 1LL + v7 * v2) & -(__int64)a2);
}

__int64 SequenceNoteOnCallback_292660(__int64 a1, int a2)
{
  return (a2 + 624LL * *(int*)(a1 + 4) - 1) & -(__int64)a2;
}

__int64 SequenceNoteOnCallback_292680(__int64 result, __int64 a2, __int64 a3,
                                      __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64* v9;
  int v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  _QWORD* v14;
  __int64* v15;
  __int64 v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64* j;
  __int64* v22;
  __int64 v23;
  __int64* v24;
  __int64* i;
  __int64* v26;
  __int64 v27;
  _QWORD v28[256];
  __int64 v29;
  __int64 v30;

  v29 = v6;
  v30 = v7;
  v8 = *(__int64**)(result + 40);
  v9 = (__int64*)(result + 32);
  if (v8 != (__int64*)(result + 32)) {
    v10 = 1;
    v11 = result;
    v12 = *(__int64**)(result + 40);
    do {
      v12 = (__int64*)v12[1];
      --v10;
    } while (v12 != v9);
    if (v10 != 0) {
      result = memset(v28, 0, 2048, a4, a5, a6);
      v13 = 0;
      do {
        v14 = &v28[v13];
        v13 += 32;
        *v14 = v14;
        v14[1] = v14;
        v14[2] = v14 + 2;
        v14[3] = v14 + 2;
        v14[4] = v14 + 4;
        v14[5] = v14 + 4;
        v14[6] = v14 + 6;
        v14[7] = v14 + 6;
        v14[8] = v14 + 8;
        v14[9] = v14 + 8;
        v14[10] = v14 + 10;
        v14[11] = v14 + 10;
        v14[12] = v14 + 12;
        v14[13] = v14 + 12;
        v14[14] = v14 + 14;
        v14[15] = v14 + 14;
        v14[16] = v14 + 16;
        v14[17] = v14 + 16;
        v14[18] = v14 + 18;
        v14[19] = v14 + 18;
        v14[20] = v14 + 20;
        v14[21] = v14 + 20;
        v14[22] = v14 + 22;
        v14[23] = v14 + 22;
        v14[24] = v14 + 24;
        v14[25] = v14 + 24;
        v14[26] = v14 + 26;
        v14[27] = v14 + 26;
        v14[28] = v14 + 28;
        v14[29] = v14 + 28;
        v14[30] = v14 + 30;
        v14[31] = v14 + 30;
      } while (v13 != 256);
      do {
        v15 = (__int64*)v8[1];
        v16 = *v15;
        *(_QWORD*)(*v8 + 8) = v15;
        *v15 = *v8;
        *(_QWORD*)(v16 + 8) = v8;
        *v8 = v16;
        v17 = (*((_DWORD*)v8 - 105) + *((unsigned __int8*)v8 - 288)) &
              ~((*((_DWORD*)v8 - 105) + *((unsigned __int8*)v8 - 288)) >> 31);
        if (v17 >= 127) {
          v17 = 127;
        }
        v18 = 2LL * (unsigned int)v17;
        *v8 = v28[v18];
        *(_QWORD*)(v16 + 8) = &v28[v18];
        *(_QWORD*)(v28[v18] + 8LL) = v8;
        v28[v18] = v16;
        v8 = *(__int64**)(v11 + 40);
      } while (v8 != v9);
      v19 = 0;
      v20 = v28;
      j = (__int64*)v28[1];
      if ((_QWORD*)v28[1] != v28) {
        goto LABEL_14;
      }
      while (1) {
        v24 = v20 + 2;
        for (i = (__int64*)v20[3]; i != v24; i = (__int64*)v24[1]) {
          v26 = (__int64*)i[1];
          v27 = *v26;
          *(_QWORD*)(*i + 8) = v26;
          *v26 = *i;
          *(_QWORD*)(v27 + 8) = i;
          *i = v27;
          *i = *v9;
          *(_QWORD*)(v27 + 8) = v9;
          *(_QWORD*)(*v9 + 8) = i;
          *v9 = v27;
        }
        v19 += 2;
        if (v19 == 128) {
          break;
        }
        v20 = &v28[2 * v19];
        for (j = (__int64*)v20[1]; j != v20; j = (__int64*)v20[1]) {
        LABEL_14:
          v22 = (__int64*)j[1];
          v23 = *v22;
          *(_QWORD*)(*j + 8) = v22;
          *v22 = *j;
          *(_QWORD*)(v23 + 8) = j;
          *j = v23;
          *j = *v9;
          *(_QWORD*)(v23 + 8) = v9;
          *(_QWORD*)(*v9 + 8) = j;
          *v9 = v23;
        }
      }
    }
  }
  return result;
}

_QWORD* SequenceNoteOnCallback_292900(__int64 a1, unsigned int a2,
                                      unsigned int a3, unsigned int a4,
                                      __int64* a5, __int64 a6, __int64 a7)
{
  __int64 v9;
  _QWORD* v10;

  v9 = GameRoutine_293880(a1, a3, a4, a6, a7);
  v10 = (_QWORD*)v9;
  if (v9 != 0) {
    GameRoutine_280680(v9, a2);
    if (a5 != nullptr) {
      BasicSound_2827d0(v10, a5);
    }
  }
  return v10;
}

__int64 SequenceNoteOnCallback_292d90(__int64 a1, __int64 a2, __int64 a3,
                                      unsigned int* a4, __int64* a5,
                                      unsigned int* a6)
{
  __int64* v10;
  __int64* v11;
  unsigned int* v12;
  __int64 v13;
  __int64 v14;
  unsigned int v15;
  __int64 v16;
  unsigned int v17;
  __int64 v18;
  unsigned int v19;
  __int64 result;
  unsigned int* v21;
  unsigned int* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned int v26;
  __int64 v27;
  unsigned int v28;
  unsigned int* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned int v33;
  __int64 v34;
  unsigned int v35;
  unsigned int* v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  unsigned int v40;
  __int64 v41;
  unsigned int v42;
  _BYTE* v43;
  _BYTE* v44;
  _BOOL4 v45;
  unsigned int v47;

  if (*(_QWORD*)(a1 + 232) != 0) {
    v10 = a5 + 2;
    SequenceNoteOnCallback_2933d0(a1, a2, a3, a5[2]);
    v11 = a5 + 3;
    v45 = a6 == nullptr;
    v43 = (_BYTE*)(a2 + 165);
    v44 = (_BYTE*)(a2 + 164);
    if (*(_QWORD*)(a1 + 232) != 0 && *(_QWORD*)(a2 + 40) != 0 &&
        *(_QWORD*)(a2 + 104) != 0) {
      goto LABEL_26;
    }
  }
  else {
    v10 = a5 + 2;
    v11 = a5 + 3;
    v45 = a6 == nullptr;
    v43 = (_BYTE*)(a2 + 165);
    v44 = (_BYTE*)(a2 + 164);
  }
  v12 = a6 + 4;
  v13 = *v10;
  v14 = *v11;
  if (v45) {
    v12 = a4 + 1;
  }
  v15 = *v12;
  if (*v12 != -1 &&
      ((*(__int64 (**)(__int64))(*(_QWORD*)v13 + 48LL))(*v10) & 1) != 0) {
    v16 = GameRoutine_278690(v13);
    v17 = GameRoutine_278700(*a5, v16);
    if (v17 != -1) {
      v13 = *a5;
      v14 = a5[1];
      v15 = v17;
    }
  }
  v47 = -1;
  if ((GameRoutine_278d70(v13, (__int64)&v47, v15) & 1) != 0) {
    v18 = GameRoutine_27ba20(v14, v47);
    *(_QWORD*)(a2 + 40) = v18;
    if (v18 != 0) {
      v19 = GameRoutine_2a5520(a2 + 96, a2 + 160, v18, v13, v14 + 24);
      result = 255;
      if ((v19 & 0x80000000) != 0) {
        if (v19 == -2) {
          return 7;
        }
        if (v19 != -1) {
          return result;
        }
        if (*v44 != 1) {
          return 9;
        }
      }
      else {
        if (v19 < 2) {
          goto LABEL_26;
        }
        if (v19 != 2) {
          return result;
        }
        if ((*v44 & 1) == 0) {
          goto LABEL_26;
        }
      }
      *v43 = 1;
      goto LABEL_26;
    }
    if (*v44 != 0) {
      v21 = (unsigned int*)(a2 + 32);
      goto LABEL_88;
    }
  }

LABEL_26:
  if (*(_QWORD*)(a1 + 232) == 0 || *(_QWORD*)(a2 + 56) == 0 ||
      *(_QWORD*)(a2 + 120) == 0) {
    v22 = a6 + 5;
    v23 = *v10;
    v24 = *v11;
    if (v45) {
      v22 = a4 + 2;
    }
    v15 = *v22;
    if (*v22 != -1 &&
        ((*(__int64 (**)(__int64))(*(_QWORD*)v23 + 48LL))(*v10) & 1) != 0) {
      v25 = GameRoutine_278690(v23);
      v26 = GameRoutine_278700(*a5, v25);
      if (v26 != -1) {
        v23 = *a5;
        v24 = a5[1];
        v15 = v26;
      }
    }
    v47 = -1;
    if ((GameRoutine_278d70(v23, (__int64)&v47, v15) & 1) != 0) {
      v27 = GameRoutine_27ba20(v24, v47);
      *(_QWORD*)(a2 + 56) = v27;
      if (v27 == 0) {
        if ((*(_BYTE*)(a2 + 164) & 1) != 0) {
          v21 = (unsigned int*)(a2 + 48);
          goto LABEL_88;
        }
        goto LABEL_48;
      }
      v28 = GameRoutine_2a5520(a2 + 112, a2 + 161, v27, v23, v24 + 24);
      result = 255;
      if ((v28 & 0x80000000) != 0) {
        if (v28 == -2) {
          return 7;
        }
        if (v28 != -1) {
          return result;
        }
        if ((*v44 & 1) == 0) {
          return 9;
        }
      }
      else {
        if (v28 < 2) {
          goto LABEL_48;
        }
        if (v28 != 2) {
          return result;
        }
        if (*v44 != 1) {
          goto LABEL_48;
        }
      }
      *v43 = 1;
    }
  }

LABEL_48:
  if (*(_QWORD*)(a1 + 232) != 0 && *(_QWORD*)(a2 + 72) != 0 &&
      *(_QWORD*)(a2 + 136) != 0) {
    goto LABEL_70;
  }
  v29 = a6 + 6;
  v30 = *v10;
  v31 = *v11;
  if (v45) {
    v29 = a4 + 3;
  }
  v15 = *v29;
  if (*v29 != -1 &&
      ((*(__int64 (**)(__int64))(*(_QWORD*)v30 + 48LL))(*v10) & 1) != 0) {
    v32 = GameRoutine_278690(v30);
    v33 = GameRoutine_278700(*a5, v32);
    if (v33 != -1) {
      v30 = *a5;
      v31 = a5[1];
      v15 = v33;
    }
  }
  v47 = -1;
  if ((GameRoutine_278d70(v30, (__int64)&v47, v15) & 1) == 0) {
    goto LABEL_70;
  }
  v34 = GameRoutine_27ba20(v31, v47);
  *(_QWORD*)(a2 + 72) = v34;
  if (v34 == 0) {
    if ((*(_BYTE*)(a2 + 164) & 1) != 0) {
      v21 = (unsigned int*)(a2 + 64);
      goto LABEL_88;
    }
    goto LABEL_70;
  }
  v35 = GameRoutine_2a5520(a2 + 128, a2 + 162, v34, v30, v31 + 24);
  result = 255;
  if ((v35 & 0x80000000) == 0) {
    if (v35 < 2) {
      goto LABEL_70;
    }
    if (v35 != 2) {
      return result;
    }
    if (*v44 != 1) {
    LABEL_70:
      if (*(_QWORD*)(a1 + 232) != 0 && *(_QWORD*)(a2 + 88) != 0 &&
          *(_QWORD*)(a2 + 152) != 0) {
        return 0;
      }
      v36 = a6 + 7;
      v37 = *v10;
      v38 = *v11;
      if (v45) {
        v36 = a4 + 4;
      }
      v15 = *v36;
      if (*v36 != -1 &&
          ((*(__int64 (**)(__int64))(*(_QWORD*)v37 + 48LL))(v37) & 1) != 0) {
        v39 = GameRoutine_278690(v37);
        v40 = GameRoutine_278700(*a5, v39);
        if (v40 != -1) {
          v37 = *a5;
          v38 = a5[1];
          v15 = v40;
        }
      }
      v47 = -1;
      if ((GameRoutine_278d70(v37, (__int64)&v47, v15) & 1) == 0) {
        return 0;
      }
      v41 = GameRoutine_27ba20(v38, v47);
      *(_QWORD*)(a2 + 88) = v41;
      if (v41 != 0) {
        v42 = GameRoutine_2a5520(a2 + 144, a2 + 163, v41, v37, v38 + 24);
        result = 255;
        if ((v42 & 0x80000000) == 0) {
          if (v42 >= 2) {
            if (v42 != 2) {
              return result;
            }
            if (*v44 == 1) {
              goto LABEL_94;
            }
          }
          return 0;
        }
        if (v42 != -2) {
          if (v42 != -1) {
            return result;
          }
          if ((*v44 & 1) != 0) {
          LABEL_94:
            result = 0;
            goto LABEL_89;
          }
          return 9;
        }
        return 7;
      }
      if (*(_BYTE*)(a2 + 164) == 0) {
        return 0;
      }
      v21 = (unsigned int*)(a2 + 80);
    LABEL_88:
      result = 0;
      *v21 = v15;
    LABEL_89:
      *v43 = 1;
      return result;
    }
  LABEL_69:
    *v43 = 1;
    goto LABEL_70;
  }
  if (v35 == -2) {
    return 7;
  }
  if (v35 != -1) {
    return result;
  }
  if ((*v44 & 1) != 0) {
    goto LABEL_69;
  }
  return 9;
}

_QWORD* SequenceNoteOnCallback_Unknown2(__int64 a1, __int64 a2,
                                        unsigned __int8 a3, __int64 a4)
{
  _QWORD* result;
  __int64 v8;
  _BYTE v9[4];

  result = *(_QWORD**)(*(_QWORD*)(a1 + 8) + 224LL);
  if (result != nullptr) {
    if ((GameRoutine_2860e0(result) & 1) != 0) {
      v9[0] = 0;
      GameRoutine_293bb0(v9);
      v8 = GameRoutine_293bd0(v9, a2 + 24LL * a3 + 688, a2 + 32LL * a3 + 560,
                              a4);
      GameRoutine_293bc0(v9);
      return (_QWORD*)v8;
    }
    else {
      return nullptr;
    }
  }
  return result;
}

__int64 SequenceNoteOnCallback_2933d0(__int64 a1, __int64 a2, __int64 a3,
                                      __int64 a4)
{
  __int64 result;
  __int64 v8;
  _BYTE* v9;
  char v10;
  __int64 v11;
  _BYTE* v12;
  __int64 v13;
  _BYTE* v14;
  char v15;
  __int64 v16;
  _BYTE* v17;
  __int64 v18;
  _BYTE* v19;
  char v20;
  __int64 v21;
  _BYTE* v22;
  __int64 v23;
  _BYTE* v24;
  char v25;
  __int64 v26;
  _BYTE* v27;

  result = GameRoutine_278690(a4);
  if (result == 0) {
    return result;
  }
  v8 = result;
  v9 = *(_BYTE**)(a1 + 232);
  v10 = v9[8];
  if ((v10 & 1) != 0 || (*(_BYTE*)(*(_QWORD*)(a4 + 16) + 8LL) = 1,
                         *(_BYTE*)(*(_QWORD*)(a1 + 232) + 8LL) = 1,
                         (v9 = *(_BYTE**)(a1 + 232))[8] == 1)) {
    v11 = (*(__int64 (**)(_BYTE*, __int64, void*, char*, _QWORD))(
        *(_QWORD*)v9 + 48LL))(v9, v8, GameData_2135058, GameData_2135288[0], 0);
    v12 = *(_BYTE**)(a1 + 232);
    if (v12[8] == 1) {
      v13 = (*(__int64 (**)(_BYTE*, __int64, void*, char*, _QWORD))(
          *(_QWORD*)v12 + 48LL))(v12, v8, GameData_2135058, GameData_2135290[0],
                                 0);
      if ((v10 & 1) != 0) {
        goto LABEL_11;
      }
    }
    else {
      v13 = 0;
      if ((v10 & 1) != 0) {
        goto LABEL_11;
      }
    }
  }
  else {
    v13 = 0;
    v11 = 0;
  }
  *(_BYTE*)(*(_QWORD*)(a4 + 16) + 8LL) = 0;
  *(_BYTE*)(*(_QWORD*)(a1 + 232) + 8LL) = 0;

LABEL_11:
  if (v11 != 0 && v13 != 0) {
    *(_QWORD*)(a2 + 40) = v11;
    *(_QWORD*)(a2 + 104) = v13;
    *(_BYTE*)(a2 + 160) = 0;
    v14 = *(_BYTE**)(a1 + 232);
    v15 = v14[8];
    if ((v15 & 1) != 0) {
      goto LABEL_17;
    }
  }
  else {
    *(_QWORD*)(a2 + 40) = 0;
    *(_QWORD*)(a2 + 104) = 0;
    v14 = *(_BYTE**)(a1 + 232);
    v15 = v14[8];
    if ((v15 & 1) != 0) {
      goto LABEL_17;
    }
  }
  *(_BYTE*)(*(_QWORD*)(a4 + 16) + 8LL) = 1;
  *(_BYTE*)(*(_QWORD*)(a1 + 232) + 8LL) = 1;
  v14 = *(_BYTE**)(a1 + 232);
  if (v14[8] != 1) {
    v18 = 0;
    v16 = 0;
    goto LABEL_23;
  }

LABEL_17:
  v16 = (*(__int64 (**)(_BYTE*, __int64, void*, char*, __int64))(
      *(_QWORD*)v14 + 48LL))(v14, v8, GameData_2135058, GameData_2135288[0], 1);
  v17 = *(_BYTE**)(a1 + 232);
  if (v17[8] == 1) {
    v18 = (*(__int64 (**)(_BYTE*, __int64, void*, char*, __int64))(
        *(_QWORD*)v17 + 48LL))(v17, v8, GameData_2135058, GameData_2135290[0],
                               1);
    if ((v15 & 1) != 0) {
      goto LABEL_24;
    }
  }
  else {
    v18 = 0;
    if ((v15 & 1) != 0) {
      goto LABEL_24;
    }
  }

LABEL_23:
  *(_BYTE*)(*(_QWORD*)(a4 + 16) + 8LL) = 0;
  *(_BYTE*)(*(_QWORD*)(a1 + 232) + 8LL) = 0;

LABEL_24:
  if (v16 != 0 && v18 != 0) {
    *(_QWORD*)(a2 + 56) = v16;
    *(_QWORD*)(a2 + 120) = v18;
    *(_BYTE*)(a2 + 161) = 0;
    v19 = *(_BYTE**)(a1 + 232);
    v20 = v19[8];
    if ((v20 & 1) != 0) {
      goto LABEL_30;
    }
  }
  else {
    *(_QWORD*)(a2 + 56) = 0;
    *(_QWORD*)(a2 + 120) = 0;
    v19 = *(_BYTE**)(a1 + 232);
    v20 = v19[8];
    if ((v20 & 1) != 0) {
      goto LABEL_30;
    }
  }
  *(_BYTE*)(*(_QWORD*)(a4 + 16) + 8LL) = 1;
  *(_BYTE*)(*(_QWORD*)(a1 + 232) + 8LL) = 1;
  v19 = *(_BYTE**)(a1 + 232);
  if (v19[8] != 1) {
    v23 = 0;
    v21 = 0;
    goto LABEL_36;
  }

LABEL_30:
  v21 = (*(__int64 (**)(_BYTE*, __int64, void*, char*, __int64))(
      *(_QWORD*)v19 + 48LL))(v19, v8, GameData_2135058, GameData_2135288[0], 2);
  v22 = *(_BYTE**)(a1 + 232);
  if (v22[8] == 1) {
    v23 = (*(__int64 (**)(_BYTE*, __int64, void*, char*, __int64))(
        *(_QWORD*)v22 + 48LL))(v22, v8, GameData_2135058, GameData_2135290[0],
                               2);
    if ((v20 & 1) != 0) {
      goto LABEL_37;
    }
  }
  else {
    v23 = 0;
    if ((v20 & 1) != 0) {
      goto LABEL_37;
    }
  }

LABEL_36:
  *(_BYTE*)(*(_QWORD*)(a4 + 16) + 8LL) = 0;
  *(_BYTE*)(*(_QWORD*)(a1 + 232) + 8LL) = 0;

LABEL_37:
  if (v21 != 0 && v23 != 0) {
    *(_QWORD*)(a2 + 72) = v21;
    *(_QWORD*)(a2 + 136) = v23;
    *(_BYTE*)(a2 + 162) = 0;
    v24 = *(_BYTE**)(a1 + 232);
    v25 = v24[8];
    if ((v25 & 1) != 0) {
      goto LABEL_43;
    }
  }
  else {
    *(_QWORD*)(a2 + 72) = 0;
    *(_QWORD*)(a2 + 136) = 0;
    v24 = *(_BYTE**)(a1 + 232);
    v25 = v24[8];
    if ((v25 & 1) != 0) {
      goto LABEL_43;
    }
  }
  *(_BYTE*)(*(_QWORD*)(a4 + 16) + 8LL) = 1;
  *(_BYTE*)(*(_QWORD*)(a1 + 232) + 8LL) = 1;
  v24 = *(_BYTE**)(a1 + 232);
  if (v24[8] != 1) {
    result = 0;
    v26 = 0;
    goto LABEL_49;
  }

LABEL_43:
  v26 = (*(__int64 (**)(_BYTE*, __int64, void*, char*, __int64))(
      *(_QWORD*)v24 + 48LL))(v24, v8, GameData_2135058, GameData_2135288[0], 3);
  v27 = *(_BYTE**)(a1 + 232);
  if (v27[8] == 1) {
    result = (*(__int64 (**)(_BYTE*, __int64, void*, char*, __int64))(
        *(_QWORD*)v27 + 48LL))(v27, v8, GameData_2135058, GameData_2135290[0],
                               3);
    if ((v25 & 1) != 0) {
      goto LABEL_50;
    }
  }
  else {
    result = 0;
    if ((v25 & 1) != 0) {
      goto LABEL_50;
    }
  }

LABEL_49:
  *(_BYTE*)(*(_QWORD*)(a4 + 16) + 8LL) = 0;
  *(_BYTE*)(*(_QWORD*)(a1 + 232) + 8LL) = 0;

LABEL_50:
  if (v26 != 0 && result != 0) {
    *(_QWORD*)(a2 + 88) = v26;
    *(_QWORD*)(a2 + 152) = result;
    *(_BYTE*)(a2 + 163) = 0;
  }
  else {
    *(_QWORD*)(a2 + 88) = 0;
    *(_QWORD*)(a2 + 152) = 0;
  }
  return result;
}

#pragma GCC visibility pop
