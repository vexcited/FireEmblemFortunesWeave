#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BasicSound_Unknown4(_QWORD, _QWORD);
__int64 GameRoutine_280260(void);
__int64 GameRoutine_288cb0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_288da0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2a0820(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2a0e80(_QWORD, _QWORD);
__int64 GameRoutine_2a1860(void);
__int64 GameRoutine_2a1b90(_QWORD);
__int64 GameRoutine_2a2000(_QWORD);
__int64 GameRoutine_2a2010(_QWORD);
__int64 GameRoutine_2acf30(_QWORD);
__int64 GameRoutine_2ad6b0(_QWORD, _QWORD);
extern __int64 (*nn_atk_detail_BasicSound_vtable[])();
extern __int64 GameData_2135490[4];
void GameRoutine_651250(void*, unsigned __int64);
__int64 WaveSound_Unknown3(__int64 a1);
__int64 WaveSound_Unknown4(__int64 result, __int64 a2);
__int64 WaveSound_2ac1a0_alt1(__int64 a1, __int64 a2, __int64 a3, __int64* a4,
                              unsigned int a5) __asm__("WaveSound_2ac1a0");
__int64 WaveSound_2ac2d0(__int64 a1, _QWORD* a2, __int64 a3);
__int64 WaveSound_2ac390(__int64 a1, char a2);
__int64 WaveSound_2ac400(__int64 a1, char a2, char a3);
__int64 WaveSound_Unknown9(__int64 result);
__int64 WaveSound_2ac560(__int64 a1, __int64 a2);
__int64 WaveSound_2ac660(__int64 a1, char a2);
__int64 WaveSound_DeletingDestructor(__int64 a1);
void WaveSound_Unknown2(_QWORD* a1);
bool WaveSound_Unknown5(_BYTE* a1);
__int64 GameRoutine_2ad0f0(void);
__int64 nn_os_FinalizeEvent(_QWORD);
extern __int64 GameData_21354a8;
extern __int64* GameData_2135250;
__int64 WaveSound_2acf30(_QWORD* a1);
_DWORD* BaseNx_288cb0(__int64, __int64, char);
__int64 BaseNx_288da0(_QWORD*, __int64);
__int64 BaseNx_2a0820(__int64, __int64, __int64);
__int64 BaseNx_2a0e80(__int64, _QWORD*);
void* BaseNx_2a1860();
__int64 WaveSound_2ac1a0(__int64 a1, __int64 a2, __int64 a3, __int64* a4,
                         char a5);

__int64 WaveSound_Unknown3(__int64 a1)
{
  char v2;

  v2 = GameRoutine_280260();
  if ((v2 & 1) != 0) {
    *(_QWORD*)(a1 + 560) = 0;
    *(_QWORD*)(a1 + 576) = 0;
    *(_BYTE*)(a1 + 586) = 0;
    *(_DWORD*)(a1 + 588) = 0;
    *(_WORD*)(a1 + 584) = 511;
  }
  return v2 & 1;
}

__int64 WaveSound_Unknown4(__int64 result, __int64 a2)
{
  _QWORD* v2;
  __int64 v3;
  _QWORD* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  if (*(_BYTE*)(result + 585) == 1) {
    v2 = (_QWORD*)result;
    *(_DWORD*)(result + 588) = 0;
    *(_WORD*)(result + 585) = 0;
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

__int64 WaveSound_2ac1a0(__int64 a1, __int64 a2, __int64 a3, __int64* a4,
                         char a5)
{
  void* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  __int64 result;
  int v19;
  struct {
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
    __int64 v30;
    __int64 v31;
    __int64 v32;
    __int64 v33;
    __int64 v34;
    __int64 v35;
    __int64 v36;
    __int64 v37;
    __int64 v38;
    __int64 v39;
  } v20_;
  _QWORD v40[5];

  v10 = BaseNx_2a1860();
  v11 = BaseNx_2a0820((__int64)v10, 112, 8);
  *(_DWORD*)(v11 + 8) = 46;
  *(_QWORD*)(v11 + 24) = a1 + 592;
  v12 = *a4;
  v13 = a4[2];
  *(_QWORD*)(v11 + 40) = a4[1];
  *(_QWORD*)(v11 + 48) = v13;
  *(_QWORD*)(v11 + 32) = v12;
  v14 = a4[3];
  v15 = a4[4];
  v16 = a4[5];
  v17 = *((_DWORD*)a4 + 12);
  *(_QWORD*)(v11 + 88) = a2;
  *(_QWORD*)(v11 + 96) = a3;
  *(_BYTE*)(v11 + 104) = a5;
  *(_DWORD*)(v11 + 80) = v17;
  *(_QWORD*)(v11 + 64) = v15;
  *(_QWORD*)(v11 + 72) = v16;
  *(_QWORD*)(v11 + 56) = v14;
  BaseNx_2a0e80((__int64)v10, (_QWORD*)v11);
  *(_BYTE*)(a1 + 584) = a5;
  *(_QWORD*)(a1 + 576) = a3;
  *(_BYTE*)(a1 + 586) = 1;
  memset(v40, 0, sizeof(v40));
  BaseNx_288cb0((__int64)v40, a3, a5);
  v20_.v38 = 0;
  v20_.v39 = 0;
  v20_.v36 = 0;
  v20_.v37 = 0;
  v20_.v34 = 0;
  v20_.v35 = 0;
  v20_.v32 = 0;
  v20_.v33 = 0;
  v20_.v30 = 0;
  v20_.v31 = 0;
  v20_.v28 = 0;
  v20_.v29 = 0;
  v20_.v26 = 0;
  v20_.v27 = 0;
  v20_.v24 = 0;
  v20_.v25 = 0;
  v20_.v22 = 0;
  v20_.v23 = 0;
  v20_.v20 = 0;
  v20_.v21 = 0;
  result = BaseNx_288da0(v40, (__int64)&v20_.v20);
  if ((result & 1) != 0) {
    v19 = v20_.v21;
    if ((int)v20_.v21 >= 2) {
      v19 = 2;
    }
    *(_DWORD*)(a1 + 588) = v19;
  }
  return result;
}

__int64 WaveSound_2ac2d0(__int64 a1, _QWORD* a2, __int64 a3)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  v6 = GameRoutine_2a1860();
  v7 = GameRoutine_2a0820(v6, 136, 8, 1);
  *(_DWORD*)(v7 + 8) = 47;
  *(_QWORD*)(v7 + 24) = a1 + 592;
  v9 = *(_QWORD*)(a3 + 8);
  v8 = *(_QWORD*)(a3 + 16);
  *(_QWORD*)(v7 + 32) = *(_QWORD*)a3;
  *(_QWORD*)(v7 + 40) = v9;
  *(_QWORD*)(v7 + 48) = v8;
  v11 = *(_QWORD*)(a3 + 32);
  v10 = *(_QWORD*)(a3 + 40);
  v12 = *(_QWORD*)(a3 + 24);
  *(_DWORD*)(v7 + 80) = *(_DWORD*)(a3 + 48);
  *(_QWORD*)(v7 + 64) = v11;
  *(_QWORD*)(v7 + 72) = v10;
  *(_QWORD*)(v7 + 56) = v12;
  *(_QWORD*)(v7 + 96) = a2[1];
  *(_QWORD*)(v7 + 88) = *a2;
  *(_QWORD*)(v7 + 104) = a2[3];
  v13 = *(_QWORD*)(a2[2] + 8LL);
  *(_QWORD*)(v7 + 112) = *(_QWORD*)a2[2];
  *(_QWORD*)(v7 + 120) = v13;
  *(_DWORD*)(v7 + 128) = *(_DWORD*)a3;
  return GameRoutine_2a0e80(v6, v7);
}

__int64 WaveSound_2ac390(__int64 a1, char a2)
{
  __int64 v4;
  __int64 v5;

  v4 = GameRoutine_2a1860();
  v5 = GameRoutine_2a0820(v4, 40, 8, 1);
  *(_BYTE*)(v5 + 32) = a2;
  *(_DWORD*)(v5 + 8) = 48;
  *(_QWORD*)(v5 + 24) = a1 + 592;
  return GameRoutine_2a0e80(v4, v5);
}

__int64 WaveSound_2ac400(__int64 a1, char a2, char a3)
{
  __int64 v6;
  __int64 v7;

  v6 = GameRoutine_2a1860();
  v7 = GameRoutine_2a0820(v6, 40, 8, 1);
  *(_BYTE*)(v7 + 32) = a2;
  *(_BYTE*)(v7 + 33) = a3;
  *(_DWORD*)(v7 + 8) = 49;
  *(_QWORD*)(v7 + 24) = a1 + 592;
  return GameRoutine_2a0e80(v6, v7);
}

__int64 WaveSound_Unknown9(__int64 result)
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

__int64 WaveSound_2ac560(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64 v8;
  char v9;
  __int64 v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  struct {
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
    __int64 v27;
    __int64 v28;
    __int64 v29;
    __int64 v30;
    __int64 v31;
    __int64 v32;
    __int64 v33;
    __int64 v34;
    __int64 v35;
  } v16_;
  _QWORD v36[7];

  v5 = *(_QWORD*)(a1 + 576);
  if (v5 == 0) {
    if (*(_BYTE*)(a1 + 248) == 1 && *(_QWORD*)(a1 + 856) != 0 &&
        *(_BYTE*)(a1 + 584) == 0) {
      goto LABEL_10;
    }
    return 0;
  }
  if (*(_BYTE*)(a1 + 584) != 0) {
    return 0;
  }
LABEL_10:
  v36[5] = v2;
  v36[6] = v3;
  v8 = a2;
  memset(v36, 0, 40);
  BaseNx_288cb0((__int64)v36, v5, 0);
  v16_.v34 = 0;
  v16_.v35 = 0;
  v16_.v32 = 0;
  v16_.v33 = 0;
  v16_.v30 = 0;
  v16_.v31 = 0;
  v16_.v28 = 0;
  v16_.v29 = 0;
  v16_.v26 = 0;
  v16_.v27 = 0;
  v16_.v24 = 0;
  v16_.v25 = 0;
  v16_.v22 = 0;
  v16_.v23 = 0;
  v16_.v20 = 0;
  v16_.v21 = 0;
  v16_.v18 = 0;
  v16_.v19 = 0;
  v16_.v16 = 0;
  v16_.v17 = 0;
  v9 = BaseNx_288da0(v36, (__int64)&v16_.v16);
  if ((v9 & 1) != 0) {
    v10 = v16_.v18;
    *(_BYTE*)v8 = BYTE4(v16_.v16);
    v11 = v16_.v17;
    *(_DWORD*)(v8 + 4) = HIDWORD(v16_.v17);
    v13 = v16_.v19;
    v12 = v16_.v20;
    v14 = v16_.v19 + v16_.v20;
    *(_QWORD*)(v8 + 24) = v10;
    *(_QWORD*)(v8 + 32) = v13;
    *(_QWORD*)(v8 + 8) = v12;
    *(_QWORD*)(v8 + 16) = v14 - v10;
    if (v11 >= 2) {
      v15 = 2;
    }
    else {
      v15 = v11;
    }
    *(_DWORD*)(v8 + 40) = v15;
  }
  return v9 & 1;
}

__int64 WaveSound_2ac660(__int64 a1, char a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;

  if (*(_BYTE*)(a1 + 248) != 1) {
    return 0;
  }
  v4 = GameRoutine_2a1b90(a1);
  GameRoutine_2a2000(v4);
  v5 = GameRoutine_2ad6b0(a1 + 592, a2 & 1);
  v6 = GameRoutine_2a1b90(v5);
  GameRoutine_2a2010(v6);
  return v5;
}

__int64 WaveSound_DeletingDestructor(__int64 a1)
{
  __int64 result;

  *(_QWORD*)a1 = GameData_2135490[0] + 16;
  result = GameRoutine_2acf30(a1 + 592);
  *(_QWORD*)a1 = nn_atk_detail_BasicSound_vtable;
  *(_DWORD*)(a1 + 260) = 3;
  return result;
}

void WaveSound_Unknown2(_QWORD* a1)
{
  *a1 = GameData_2135490[0] + 16;
  GameRoutine_2acf30(a1 + 74);
  GameRoutine_651250(a1, 0x408u);
}

bool WaveSound_Unknown5(_BYTE* a1)
{
  if ((a1[586] & 1) != 0) {
    return true;
  }
  if (a1[248] == 1) {
    return (unsigned __int8)a1[964] > 2u;
  }
  return false;
}

__int64 WaveSound_2acf30(_QWORD* a1)
{
  __int64 v2;

  v2 = GameData_21354a8;
  *a1 = GameData_21354a8 + 16;
  a1[25] = v2 + 128;
  a1[28] = v2 + 168;
  GameRoutine_2ad0f0();
  *a1 = GameData_2135250 + 2;
  return nn_os_FinalizeEvent(a1 + 1);
}

#pragma GCC visibility pop
