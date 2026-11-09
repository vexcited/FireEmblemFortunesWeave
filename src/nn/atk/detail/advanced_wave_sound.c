#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 AdvancedWaveSoundPlayer_Destructor(_QWORD);
__int64 BasicSound_Unknown4(_QWORD, _QWORD);
__int64 GameRoutine_280260(void);
__int64 GameRoutine_2a0820(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2a0e80(_QWORD, _QWORD);
__int64 GameRoutine_2a1860(_QWORD, _QWORD);
extern __int64 (*nn_atk_detail_BasicSound_vtable[])(void);
extern __int64* GameData_2135238[4];
__int64 AdvancedWaveSound_DeletingDestructor(__int64 a1);
__int64 AdvancedWaveSound_Unknown3(__int64 a1);
__int64 AdvancedWaveSound_Unknown4(__int64 result, __int64 a2);
__int64 AdvancedWaveSound_27f1d0(__int64 a1, _QWORD* a2);
__int64 AdvancedWaveSound_Unknown9(__int64 result);
__int64 AdvancedWaveSound_Unknown5(__int64 a1);

__int64 AdvancedWaveSound_DeletingDestructor(__int64 a1)
{
  __int64 result;

  *(_QWORD*)a1 = GameData_2135238[0] + 2;
  result = AdvancedWaveSoundPlayer_Destructor(a1 + 576);
  *(_QWORD*)a1 = nn_atk_detail_BasicSound_vtable;
  *(_DWORD*)(a1 + 260) = 3;
  return result;
}

__int64 AdvancedWaveSound_Unknown3(__int64 a1)
{
  char v2;

  v2 = GameRoutine_280260();
  if ((v2 & 1) != 0) {
    *(_QWORD*)(a1 + 560) = 0;
    *(_BYTE*)(a1 + 2496) = 1;
  }
  return v2 & 1;
}

__int64 AdvancedWaveSound_Unknown4(__int64 result, __int64 a2)
{
  _QWORD* v2;
  __int64 v3;
  _QWORD* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  if (*(_BYTE*)(result + 2496) == 1) {
    v2 = (_QWORD*)result;
    *(_BYTE*)(result + 2496) = 0;
    *(_QWORD*)(result + 560) = 0;
    BasicSound_Unknown4(result, a2);
    v3 = v2[71];
    v4 = v2 + 68;
    if (v2 + 68 != (_QWORD*)(v3 + 32)) {
      v5 = (__int64*)v2[69];
      v6 = *v5;
      *(_QWORD*)(v2[68] + 8LL) = v5;
      *v5 = v2[68];
      *(_QWORD*)(v6 + 8) = v4;
      v2[68] = v6;
    }
    result = (*(__int64 (**)(_QWORD*))(*v2 + 32LL))(v2);
    v7 = v2[68];
    v9 = *(_QWORD*)(v3 + 48);
    v8 = v3 + 48;
    v2[68] = v9;
    *(_QWORD*)(v7 + 8) = v8;
    *(_QWORD*)(*(_QWORD*)v8 + 8LL) = v4;
    *(_QWORD*)v8 = v7;
  }
  return result;
}

__int64 AdvancedWaveSound_27f1d0(__int64 a1, _QWORD* a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v4 = GameRoutine_2a1860(a1, a2);
  v5 = GameRoutine_2a0820(v4, 56, 8, 1);
  *(_DWORD*)(v5 + 8) = 50;
  *(_QWORD*)(v5 + 24) = a1 + 576;
  v7 = a2[1];
  v6 = a2[2];
  *(_QWORD*)(v5 + 32) = *a2;
  *(_QWORD*)(v5 + 40) = v7;
  *(_QWORD*)(v5 + 48) = v6;
  return GameRoutine_2a0e80(v4, v5);
}

__int64 AdvancedWaveSound_Unknown9(__int64 result)
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

__int64 AdvancedWaveSound_Unknown5(__int64 a1)
{
  return *(_BYTE*)(a1 + 248) & *(_BYTE*)(a1 + 2488) & 1;
}

#pragma GCC visibility pop
