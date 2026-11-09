#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BasicSound_Unknown4(__int64 result);
__int64 GameRoutine_280260(__int64, unsigned __int64, __int64, __int64, __int64,
                           __int64);
__int64 GameRoutine_2a0820(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2a0e80(_QWORD, _QWORD);
__int64 GameRoutine_2a1860(_QWORD, _QWORD);
__int64 SequenceSoundPlayer_Destructor(_QWORD);
extern __int64 (*nn_atk_detail_BasicSound_vtable[])(void);
extern __int64* GameData_2135320[3];
void GameRoutine_651250(void*, unsigned __int64);
__int64 SequenceSound_Unknown3(__int64 a1, unsigned __int64 a2, __int64 a3,
                               __int64 a4, __int64 a5, __int64 a6);
__int64 SequenceSound_Unknown4(__int64 result);
__int64 SequenceSound_28d5b0(__int64 a1, __int64 a2, int a3, __int64 a4,
                             char a5, char a6, __int64 a7, __int64 a8);
__int64 SequenceSound_28d660(__int64 a1, __int64* a2, int* a3);
__int64 SequenceSound_28d790(__int64 a1, __int64 a2);
__int64 SequenceSound_Unknown9(__int64 result);
__int64 SequenceSound_28d8e0(__int64 a1, _QWORD* a2, _QWORD* a3);
__int64 SequenceSound_DeletingDestructor(__int64 a1);
void SequenceSound_Unknown2(_QWORD* a1);
bool SequenceSound_Unknown5(_BYTE* a1);
__int64 SequenceSound_Unknown3(__int64 a1, unsigned __int64 a2, __int64 a3,
                               __int64 a4, __int64 a5, __int64 a6)
{
  char v7;

  v7 = GameRoutine_280260(a1, a2, a3, a4, a5, a6);
  if ((v7 & 1) != 0) {
    *(_QWORD*)(a1 + 560) = 0;
    *(_BYTE*)(a1 + 578) = 0;
    *(_BYTE*)(a1 + 576) = 1;
  }
  return v7 & 1;
}

__int64 SequenceSound_Unknown4(__int64 result)
{
  _QWORD* v1;
  __int64 v2;
  _QWORD* v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  if (*(_BYTE*)(result + 576) == 1) {
    v1 = (_QWORD*)result;
    *(_BYTE*)(result + 576) = 0;
    *(_BYTE*)(result + 578) = 0;
    BasicSound_Unknown4(result);
    v2 = v1[71];
    v3 = v1 + 68;
    if (v1 + 68 != (_QWORD*)(v2 + 32)) {
      v4 = (__int64*)v1[69];
      v5 = *v4;
      *(_QWORD*)(v1[68] + 8LL) = v4;
      *v4 = v1[68];
      *(_QWORD*)(v5 + 8) = v3;
      v1[68] = v5;
    }
    result = (*(__int64 (**)(_QWORD*))(*v1 + 32LL))(v1);
    v6 = v1[68];
    v8 = *(_QWORD*)(v2 + 48);
    v7 = v2 + 48;
    v1[68] = v8;
    *(_QWORD*)(v6 + 8) = v7;
    *(_QWORD*)(*(_QWORD*)v7 + 8LL) = v3;
    *(_QWORD*)v7 = v6;
  }
  return result;
}

__int64 SequenceSound_28d5b0(__int64 a1, __int64 a2, int a3, __int64 a4,
                             char a5, char a6, __int64 a7, __int64 a8)
{
  __int64 v16;
  __int64 v17;

  v16 = GameRoutine_2a1860(a1, a2);
  v17 = GameRoutine_2a0820(v16, 80, 8, 1);
  *(_DWORD*)(v17 + 40) = a3;
  *(_DWORD*)(v17 + 44) = 0;
  *(_QWORD*)(v17 + 48) = a4;
  *(_BYTE*)(v17 + 56) = a5;
  *(_BYTE*)(v17 + 57) = a6;
  *(_QWORD*)(v17 + 64) = a7;
  *(_QWORD*)(v17 + 72) = a8;
  *(_DWORD*)(v17 + 8) = 20;
  *(_QWORD*)(v17 + 24) = a1 + 584;
  *(_QWORD*)(v17 + 32) = a2;
  return GameRoutine_2a0e80(v16, v17);
}

__int64 SequenceSound_28d660(__int64 a1, __int64* a2, int* a3)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  int v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 result;
  __int64 v15;
  int v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;

  v6 = GameRoutine_2a1860(a1, a2);
  v7 = GameRoutine_2a0820(v6, 128, 8, 1);
  *(_DWORD*)(v7 + 8) = 22;
  *(_QWORD*)(v7 + 24) = a1 + 584;
  v8 = *a2;
  v20 = a2[5];
  v21 = a2[6];
  v24 = a2[3];
  v25 = a2[4];
  v9 = *a3;
  v10 = a3[5];
  v11 = a2[1];
  v12 = a2[2];
  v22 = a2[7];
  v23 = a2[8];
  v13 = *((_DWORD*)a2 + 18);
  *(_QWORD*)(v7 + 112) = *(_QWORD*)(a3 + 3);
  *(_DWORD*)(v7 + 120) = v10;
  *(_QWORD*)(v7 + 32) = v8;
  *(_QWORD*)(v7 + 40) = v11;
  *(_DWORD*)(v7 + 104) = v13;
  *(_DWORD*)(v7 + 108) = v9;
  *(_QWORD*)(v7 + 48) = v12;
  *(_QWORD*)(v7 + 56) = v24;
  *(_QWORD*)(v7 + 64) = v25;
  *(_QWORD*)(v7 + 72) = v20;
  *(_QWORD*)(v7 + 80) = v21;
  *(_QWORD*)(v7 + 88) = v22;
  *(_QWORD*)(v7 + 96) = v23;
  result = GameRoutine_2a0e80(v6, v7);
  v16 = a3[2];
  if (v16 >= 1) {
    v17 = a3[1];
    v18 = GameRoutine_2a1860(result, v15);
    v19 = GameRoutine_2a0820(v18, 40, 8, 1);
    *(_QWORD*)(v19 + 24) = a1 + 584;
    *(_DWORD*)(v19 + 32) = v17;
    *(_DWORD*)(v19 + 36) = v16;
    *(_DWORD*)(v19 + 8) = 23;
    result = GameRoutine_2a0e80(v18, v19);
  }
  *(_BYTE*)(a1 + 578) = 1;
  return result;
}

__int64 SequenceSound_28d790(__int64 a1, __int64 a2)
{
  char v2;
  __int64 v4;
  __int64 v5;

  v2 = a2;
  v4 = GameRoutine_2a1860(a1, a2);
  v5 = GameRoutine_2a0820(v4, 40, 8, 1);
  *(_BYTE*)(v5 + 32) = v2;
  *(_DWORD*)(v5 + 8) = 25;
  *(_QWORD*)(v5 + 24) = a1 + 584;
  return GameRoutine_2a0e80(v4, v5);
}

__int64 SequenceSound_Unknown9(__int64 result)
{
  __int64 v1;
  int v2;
  int v3;
  __int64* v4;
  _QWORD* v5;
  __int64* v6;
  __int64 v7;
  _QWORD* v8;
  unsigned int v9;
  int v10;
  __int64 v11;

  v1 = *(_QWORD*)(result + 568);
  v2 = *(unsigned __int8*)(result + 256);
  v3 = *(_DWORD*)(result + 124);
  v4 = (__int64*)(result + 544);
  v5 = (_QWORD*)(v1 + 32);
  if (result + 544 != v1 + 32) {
    v6 = *(__int64**)(result + 552);
    v7 = *v6;
    *(_QWORD*)(*(_QWORD*)(result + 544) + 8LL) = v6;
    *v6 = *(_QWORD*)(result + 544);
    *(_QWORD*)(v7 + 8) = v4;
    *(_QWORD*)(result + 544) = v7;
  }
  v8 = *(_QWORD**)(v1 + 40);
  if (v8 != v5) {
    v9 = (v3 + v2) & ~((v3 + v2) >> 31);
    do {
      v10 = (*((_DWORD*)v8 - 105) + *((unsigned __int8*)v8 - 288)) &
            ~((*((_DWORD*)v8 - 105) + *((unsigned __int8*)v8 - 288)) >> 31);
      if (v10 >= 127) {
        v10 = 127;
      }
      if (v9 < v10) {
        break;
      }
      v8 = (_QWORD*)v8[1];
    } while (v8 != v5);
  }
  v11 = *v4;
  *v4 = *v8;
  *(_QWORD*)(v11 + 8) = v8;
  *(_QWORD*)(*v8 + 8LL) = v4;
  *v8 = v11;
  return result;
}

__int64 SequenceSound_28d8e0(__int64 a1, _QWORD* a2, _QWORD* a3)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;

  v6 = GameRoutine_2a1860(a1, a2);
  v7 = GameRoutine_2a0820(v6, 160, 8, 1);
  *(_DWORD*)(v7 + 8) = 21;
  *(_QWORD*)(v7 + 24) = a1 + 584;
  v9 = a3[1];
  v8 = a3[2];
  *(_QWORD*)(v7 + 32) = *a3;
  *(_QWORD*)(v7 + 40) = v9;
  *(_QWORD*)(v7 + 48) = v8;
  *(_QWORD*)(v7 + 56) = *a2;
  *(_QWORD*)(v7 + 64) = a2[1];
  *(_QWORD*)(v7 + 72) = a2[7];
  v10 = *(_QWORD*)(a2[2] + 8LL);
  *(_QWORD*)(v7 + 80) = *(_QWORD*)a2[2];
  *(_QWORD*)(v7 + 88) = v10;
  v11 = *(_QWORD*)(a2[3] + 8LL);
  *(_QWORD*)(v7 + 96) = *(_QWORD*)a2[3];
  *(_QWORD*)(v7 + 104) = v11;
  v12 = *(_QWORD*)(a2[4] + 8LL);
  *(_QWORD*)(v7 + 112) = *(_QWORD*)a2[4];
  *(_QWORD*)(v7 + 120) = v12;
  v13 = *(_QWORD*)(a2[5] + 8LL);
  *(_QWORD*)(v7 + 128) = *(_QWORD*)a2[5];
  *(_QWORD*)(v7 + 136) = v13;
  v14 = (_QWORD*)a2[6];
  v15 = v14[1];
  *(_QWORD*)(v7 + 144) = *v14;
  *(_QWORD*)(v7 + 152) = v15;
  return GameRoutine_2a0e80(v6, v7);
}

__int64 SequenceSound_DeletingDestructor(__int64 a1)
{
  __int64 result;

  *(_QWORD*)a1 = GameData_2135320[0] + 2;
  result = SequenceSoundPlayer_Destructor(a1 + 584);
  *(_QWORD*)a1 = nn_atk_detail_BasicSound_vtable;
  *(_DWORD*)(a1 + 260) = 3;
  return result;
}

void SequenceSound_Unknown2(_QWORD* a1)
{
  *a1 = GameData_2135320[0] + 2;
  SequenceSoundPlayer_Destructor(a1 + 73);
  GameRoutine_651250(a1, 0x5F8u);
}

bool SequenceSound_Unknown5(_BYTE* a1)
{
  if ((a1[578] & 1) != 0) {
    return true;
  }
  if (a1[248] == 1) {
    return (unsigned __int8)a1[1368] > 2u;
  }
  return false;
}

#pragma GCC visibility pop
