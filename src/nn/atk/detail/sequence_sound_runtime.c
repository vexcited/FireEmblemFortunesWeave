#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* SequenceSoundPlayer_291220(_QWORD* result, __int64);
__int64 BaseNx_278690(__int64);
__int64 BaseNx_2832c0(unsigned int*, char);
__int64 BaseNx_2a1b90(_QWORD);
__int64 GameRoutine_27ba20(_QWORD, _QWORD);
__int64 GameRoutine_28d400(__int64, unsigned int, unsigned int*);
__int64 GameRoutine_290a80(_QWORD);
__int64 GameRoutine_2912d0(_QWORD);
__int64 GameRoutine_2912e0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2a4d20(_QWORD);
__int64 SequenceNoteOnCallback_291fa0(_QWORD);
__int64 SequenceNoteOnCallback_292160(_QWORD, _QWORD);
__int64 SequenceNoteOnCallback_2923e0(void);
__int64 SoundThread_2a1ee0(_QWORD, _QWORD);
__int64 SoundThread_2a1f40(_QWORD, _QWORD);
__int64 nn_os_SleepThread(_QWORD);
extern _UNKNOWN* GameData_2135058;
extern char* GameData_2135060;
unsigned __int64 SoundArchivePlayer_27dc10();
__int64 SequenceSoundRuntime_291e40(__int64 a1, int a2, int a3, _BYTE* a4,
                                    __int64 a5);
__int64 SequenceSoundRuntime_2922e0(_QWORD* a1);
__int64 SequenceSoundRuntime_292c10(__int64 a1, __int64 a2, __int64 a3,
                                    __int64 a4, __int64 a5, unsigned int* a6,
                                    __int64* a7);

__int64 SequenceSoundRuntime_291e40(__int64 a1, int a2, int a3, _BYTE* a4,
                                    __int64 a5)
{
  __int64 v5;
  __int64 v6;
  int v13;
  __int64 v14;
  __int64 v15;
  bool v16;
  int v17;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 i;
  __int64 v23;
  unsigned __int64 v24;
  int v25;
  __int64 v26;
  __int64 v27;

  if ((*a4 & 0x3F) != 0) {
    return 0;
  }
  v26 = v5;
  v27 = v6;
  v24 = SoundArchivePlayer_27dc10();
  v25 = v13;
  v14 = BaseNx_2832c0((unsigned int*)&v24, 1);
  v15 = v14 + BaseNx_2832c0((unsigned int*)&v24, 0);
  v16 = v14 == 0;
  v17 = a2;
  v18 = v15 + 1624;
  if (v16) {
    v18 = 1528;
  }
  v19 = *(_QWORD*)a4 + ((v18 * a2 + 63) & 0xFFFFFFFFFFFFFFC0LL);
  if ((__int64)(v19 - a5) >= 1) {
    return 0;
  }
  SequenceNoteOnCallback_291fa0(a1);
  *(_QWORD*)a4 = v19;
  v20 = v19 + ((1200LL * v17 + 63) & 0xFFFFFFFFFFFFFFC0LL);
  if ((__int64)(v20 - a5) > 0) {
    return 0;
  }
  v21 = SequenceNoteOnCallback_292160(a1 + 64, v19);
  *(_QWORD*)a4 = v20;
  for (i = *(_QWORD*)(a1 + 56); i != a1 + 48; i = *(_QWORD*)(i + 8)) {
    *(_QWORD*)(i + 856) = a1 + 64;
    *(_DWORD*)(i + 300) = a3;
  }
  v23 = BaseNx_2a1b90(v21);
  SoundThread_2a1ee0(v23, a1 + 64);
  *(_QWORD*)(a1 + 136) = a1 + 144;
  return 1;
}

__int64 SequenceSoundRuntime_2922e0(_QWORD* a1)
{
  __int64 i;
  unsigned __int64 v3;
  __int64 v4;
  __int64* j;
  __int64* v6;
  __int64 v7;
  __int64 v8;

  a1[17] = 0;
  for (i = SequenceNoteOnCallback_2923e0(); (_QWORD*)a1[16] != a1 + 15;
       i = nn_os_SleepThread(5000000))
    ;
  v3 = a1[12] / 0x4B0uLL;
  if ((int)v3 >= 1) {
    v4 = a1[11];
    do {
      i = GameRoutine_290a80(v4);
      v4 += 1200;
      LODWORD(v3) = v3 - 1;
    } while ((_DWORD)v3 != 0);
  }
  for (j = (__int64*)a1[14]; j != a1 + 13; j = (__int64*)a1[14]) {
    v6 = (__int64*)j[1];
    v7 = *v6;
    *(_QWORD*)(*j + 8) = v6;
    *v6 = *j;
    *(_QWORD*)(v7 + 8) = j;
    *j = v7;
  }
  v8 = BaseNx_2a1b90(i);
  SoundThread_2a1f40(v8, a1 + 8);
  return GameRoutine_2a4d20(a1 + 20);
}

__int64 SequenceSoundRuntime_292c10(__int64 a1, __int64 a2, __int64 a3,
                                    __int64 a4, __int64 a5, unsigned int* a6,
                                    __int64* a7)
{
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  int v23;
  _QWORD v24[3];

  if (*(_QWORD*)(a1 + 232) == 0) {
    v16 = *(_QWORD*)a2;
    if (*(_QWORD*)a2 == 0) {
      goto LABEL_9;
    }
  LABEL_7:
    v17 = *(_DWORD*)(a3 + 280);
    *(_QWORD*)(a2 + 24) = v16;
    *(_DWORD*)(a2 + 16) = v17;
    return 0;
  }
  v13 = BaseNx_278690(a4);
  if (v13 == 0 ||
      (v14 = v13, *(_BYTE*)((v15 = *(_QWORD*)(a1 + 232)) + 8) != 1)) {
    *(_QWORD*)a2 = 0;
    goto LABEL_9;
  }
  v16 = (*(__int64 (**)(__int64, __int64, void*, char*, _QWORD))(
      *(_QWORD*)v15 + 48LL))(v15, v14, GameData_2135058, GameData_2135060, 0);
  *(_QWORD*)a2 = v16;
  if (v16 != 0) {
    goto LABEL_7;
  }
LABEL_9:
  v19 = GameRoutine_27ba20(a5, *a6);
  *(_QWORD*)a2 = v19;
  if (a7 != nullptr) {
    v20 = *a7;
    if (*a7 != 0) {
      *(_QWORD*)a2 = v20;
      v19 = v20;
    }
    memset(v24, 0, sizeof(v24));
    SequenceSoundPlayer_291220(v24, v19);
    v21 = a7[1];
    if (v21 != 0) {
      if ((GameRoutine_2912e0(v24, v21, a2 + 8) & 1) == 0) {
        return 16;
      }
      v22 = GameRoutine_2912d0(v24);
      *(_DWORD*)(a2 + 8) =
          GameRoutine_28d400(v22, *(_DWORD*)(a2 + 8), (unsigned int*)(a2 + 12));
    }
    v19 = *(_QWORD*)a2;
  }
  v23 = *(_DWORD*)(a3 + 280);
  *(_QWORD*)(a2 + 24) = v19;
  *(_DWORD*)(a2 + 16) = v23;
  if (v19 != 0) {
    return 0;
  }
  if (*(_BYTE*)(a2 + 164) != 1) {
    return 6;
  }
  *(_BYTE*)(a2 + 165) = 1;
  return 0;
}

#pragma GCC visibility pop
