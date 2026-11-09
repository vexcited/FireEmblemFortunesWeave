#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _UNKNOWN GameData_1a919f8;

extern _UNKNOWN GameData_1a99732;

extern __int64 (*GameData_1fdc888[])();

extern __int64 GameData_212bf68;

extern __int64* GameData_212c330[2];

extern __int64* GameData_212c370;

extern __int64 GameData_212dbc0[8];

extern __int64 GameData_21a6070;

extern __int64 GameData_21c6978;

extern __int64 GameData_21c9608;

extern __int64 GameData_21caab0;

extern __int64 GameData_21ec7c0;

extern __int64 GameData_21f3cb8;

extern __int64 GameData_21f3ce8;

extern __int64 GameData_21f3d10;

extern __int64 GameData_220b6e0;

extern __int64 GameData_220d618;

extern __int64 GameData_2212270;

extern _UNKNOWN GameData_2216780;

extern __int64 GameData_2216828;

extern __int64 GameData_2216830;

extern char GameData_2216850;

extern char GameData_2216858;

extern __int64 GameData_2263c30;

extern __int64 GameData_2264c50;

extern __int64 GameData_2265ee0;

extern __int64 GameData_2265ef8;

__int64 GameRoutine_120ef00(_QWORD);

__int64 GameRoutine_1562680(_QWORD, _QWORD, float);

__int64 GameRoutine_1563030(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_17b8bd0(void);

__int64 GameRoutine_1a09c50(_QWORD);

__int64 GameRoutine_1a09c70(_QWORD);

__int64 GameRoutine_1a0a4e0(_QWORD, _QWORD);

__int64 GameRoutine_1a0b940(_QWORD, _QWORD, _QWORD);

void __attribute__((noreturn)) GameRoutine_60a1d0(void);

__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_654050(_QWORD, _QWORD);

__int64 GameRoutine_667c80(_QWORD);

__int64 GameRoutine_716d80(_QWORD, _QWORD);

__int64 GameRoutine_7a86e0(_QWORD);

__int64 GameRoutine_828dc0(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_a32880(_QWORD);

_BYTE* GameRoutine_d52950(_BYTE* result, char);

__int64 GameRoutine_d58590(_QWORD, _QWORD);

__int64 GameRoutine_d58e20(__int64 result, int, __int64*, int);

__int64 GameRoutine_d6e4d0(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_d799f0(__int64);

__int64 GameRoutine_d8ce40(_QWORD);

__int64 GameRoutine_d8cf60(__int64 result);

__int64 GameRoutine_d9edf0(void);

__int64 GameRoutine_d9f4e0(_QWORD);

__int64 GameRoutine_da4bc0(__int64 result, long double);

__int64 GameRoutine_da51e0(__int64, long double);

__int64 GameRoutine_e803d0(__int64, __int64);

__int64 GameRoutine_e80e80(_QWORD, _QWORD);

__int64 GameRoutine_ee0900(_QWORD);

__int64 GameRoutine_f60b80(_QWORD);

__int64 GameRoutine_fa05c0(_QWORD);

_BYTE* GameHr_d54a60(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 i;
  __int64 v18;
  __int64 v19;
  _QWORD v21[4];
  _QWORD* v22;
  _QWORD v23[2];

  GameRoutine_d9edf0();
  v2 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c6978 + 32) - 8LL) + 40LL);
  if (v2 != 0) {
    v3 = *(_QWORD*)(v2 + 168);
    *(_BYTE*)(v2 + 225) = 1;
    *(_BYTE*)(v2 + 228) = 1;
    *(_BYTE*)(v3 + 540) = 1;
    *(_BYTE*)(*(_QWORD*)(v2 + 360) + 112LL) = 1;
    *(_BYTE*)(*(_QWORD*)(v2 + 184) + 1666LL) = 0;
    v4 = *(_QWORD*)(v2 + 184);
    *(_BYTE*)(v4 + 1664) = 1;
    *(_DWORD*)(v4 + 1676) = 3;
  }
  if (*(_BYTE*)(a1 + 240) == 1) {
    v5 = *(unsigned int*)(a1 + 236);
    v22 = v21;
    v6 = *(_QWORD*)GameData_212dbc0[0];
    v21[0] = GameData_1fdc888;
    v21[1] = a1;
    GameRoutine_d6e4d0(v6, v5, v21);
    if (v22 == v21) {
      v7 = 32;
    }
    else {
      if (v22 == nullptr) {
        goto LABEL_20;
      }
      v7 = 40;
    }
    (*(void (**)(void))(*v22 + v7))();
  LABEL_20:
    if (*(_BYTE*)(a1 + 240) == 1) {
      *(_BYTE*)(a1 + 240) = 0;
    }
    goto LABEL_22;
  }
  if (GameData_2264c50 != 0) {
    GameRoutine_17b8bd0();
  }
  v8 = GameRoutine_d9f4e0(GameData_21f3ce8);
  if (*(_DWORD*)(a1 + 136) == 0) {
    v9 = *(_QWORD*)(GameData_21c9608 + 328);
    if ((v9 & 8) != 0) {
      *(_QWORD*)(GameData_21c9608 + 328) = v9 & 0xFFFFFFFFFFFFFFF7LL;
      GameRoutine_120ef00(v8);
    }
    v23[1] = &GameData_1a919f8;
    v23[0] = GameRoutine_7a86e0(&GameData_1a919f8);
    GameRoutine_716d80(v23, 0);
  }
  v10 = *(_QWORD*)(a1 + 216);
  v11 = *(_DWORD*)(v10 + 232);
  if (v11 <= 2) {
    v11 = 2;
  }
  *(_DWORD*)(v10 + 232) = v11;
  v12 = *(_QWORD*)(a1 + 200);
  if (v12 != 0) {
    GameRoutine_fa05c0(*(_QWORD*)(v12 + 24));
    GameRoutine_f60b80(*(_QWORD*)(v12 + 8));
  }
  GameRoutine_a32880(GameData_2265ef8);
LABEL_22:
  *(_BYTE*)(a1 + 768) = 0;
  v13 = *(_QWORD*)(GameData_21ec7c0 + 24);
  v14 = *(_QWORD*)(GameData_21ec7c0 + 32);
  while (v13 != v14) {
    v15 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v13 + 24LL) + 32LL);
    if (v15 != 0) {
      v16 = *(_QWORD*)(v15 + 400);
      for (i = *(_QWORD*)(v15 + 408); i != v16; i -= 32) {
        v18 = *(_QWORD*)(i - 8);
        if (v18 != 0) {
          GameRoutine_1a09c50(v18);
        }
        v19 = *(_QWORD*)(i - 24);
        if (v19 != 0) {
          GameRoutine_1a09c50(v19);
        }
      }
      *(_QWORD*)(v15 + 408) = v16;
    }
    v13 += 16;
  }
  return GameRoutine_d52950((_BYTE*)a1, 1);
}

_QWORD* GameHr_d626e0(__int64 a1, unsigned __int8* a2, __int64 a3)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* result;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  unsigned __int64 v14;
  bool v15;
  unsigned __int64 v16;
  unsigned __int8* v17;
  unsigned __int64 v18;
  int v19;
  int v20;
  __int64 v21;
  int* v22;
  int v23;
  int v24;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  char* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32[2];
  char* v33;

  v6 = *GameData_212c370;
  v7 = *(
      _QWORD*)(v6 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)GameData_21a6070 +
                                                    72LL))(GameData_21a6070) +
               4384);
  if (v7 != 0) {
    v8 = (*(__int64 (**)(__int64))(*(_QWORD*)v7 + 472LL))(v7);
  }
  else {
    v8 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v8 + 24) + 448LL))(
      *(_QWORD*)(v8 + 24), 1);
  result = *(_QWORD**)(v8 + 2240);
  *(_QWORD*)(v8 + 2240) = 0;
  if (result == (_QWORD*)(v8 + 2208)) {
    v10 = 32;
    goto LABEL_8;
  }
  if (result != nullptr) {
    v10 = 40;
  LABEL_8:
    result = (_QWORD*)(*(__int64 (**)(void))(*result + v10))();
  }
  v11 = *(unsigned int*)(a1 + 16);
  if ((_DWORD)v11 == 0x4000) {
    return result;
  }
  v12 = (_QWORD*)(GameData_212c330[0][*(unsigned int*)(a1 + 20)] + 16 * v11);
  v13 = v12[1];
  if (v13 == 0 || *v12 != *(_QWORD*)(a1 + 8)) {
    return result;
  }
  v14 = *a2;
  v15 = (v14 & 1) == 0;
  v16 = v14 >> 1;
  if (v15) {
    v17 = a2 + 1;
  }
  else {
    v17 = *((unsigned __int8**)a2 + 2);
  }
  if (v15) {
    v18 = v16;
  }
  else {
    v18 = *((_QWORD*)a2 + 1);
  }
  v19 = GameRoutine_d58590(v17, v18);
  v20 = v19;
  v21 = *(_BYTE*)a3 >> 1;
  if ((*(_BYTE*)a3 & 1) != 0) {
    v21 = *(_QWORD*)(a3 + 8);
  }
  if (v21 == 6) {
    v22 = (*(_BYTE*)a3 & 1) != 0 ? *(int**)(a3 + 16) : (int*)(a3 + 1);
    v23 = *v22;
    v24 = *((unsigned __int16*)v22 + 2);
    if (v23 == -375290649 && v24 == 45983) {
      LOWORD(v32[0]) = 0;
      return (_QWORD*)GameRoutine_d58e20(v13, v19, v32, 2);
    }
  }
  if ((*(_BYTE*)a3 & 1) != 0) {
    v26 = *(_QWORD*)(a3 + 16);
  }
  else {
    v26 = a3 + 1;
  }
  v27 = GameRoutine_1a09c70(v26);
  if (v27 >= 0xFFFFFFFFFFFFFFF7LL) {
    GameRoutine_60a1d0();
  }
  v28 = v27;
  if (v27 >= 0x17) {
    if ((v27 | 7) == 0x17) {
      v30 = 26;
    }
    else {
      v30 = (v27 | 7) + 1;
    }
    v29 = (char*)GameRoutine_651b90(GameData_2265ee0, v30, 16, 0);
    v32[1] = v28;
    v33 = v29;
    v32[0] = v30 | 1;
  }
  else {
    LOBYTE(v32[0]) = 2 * v27;
    v29 = (char*)v32 + 1;
    if (v27 == 0) {
      goto LABEL_40;
    }
  }
  GameRoutine_1a0b940(v29, v26, v28);
LABEL_40:
  v29[v28] = 0;
  result = (_QWORD*)GameRoutine_d58e20(v13, v20, v32, 2);
  if ((v32[0] & 1) != 0 && v33 != nullptr) {
    v31 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v31 = 56;
    }
    return (_QWORD*)GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v31, v33);
  }
  return result;
}

__int64 GameHr_da4a70()
{
  __int64 result;
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  _QWORD v6[2];

  v6[1] = &GameData_1a99732;
  v6[0] = GameRoutine_7a86e0(&GameData_1a99732);
  if (GameData_21caab0 != 0) {
    GameRoutine_828dc0(*(_QWORD*)(GameData_21caab0 + 48), v6, 1);
  }
  result = GameRoutine_d8cf60(GameData_21f3cb8);
  if (*(_DWORD*)(GameData_21f3d10 + 140) != 0) {
    *(_DWORD*)(GameData_21f3d10 + 140) = 0;
  }
  if (GameData_2212270 != 0) {
    *(_DWORD*)(GameData_2212270 + 152) = 2;
  }
  v1 = GameData_21c9608;
  v2 = *(_QWORD*)(GameData_21c9608 + 904);
  v3 = (_QWORD*)(GameData_21c9608 + 904);
  *(_QWORD*)(GameData_21c9608 + 896) = 0;
  if (v2 != 0) {
    *(_QWORD*)(v1 + 912) = v2;
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v4 = 56;
    }
    result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v4, v2);
  }
  v3[1] = 0;
  v3[2] = 0;
  *v3 = 0;
  if (GameData_2216858 == 1) {
    if (GameData_2216850 == 1 && GameData_2216828 != 0) {
      GameData_2216830 = GameData_2216828;
      v5 = 128;
      if (*(_QWORD*)(GameData_2265ee0 + 200) == 0) {
        v5 = 56;
      }
      GameRoutine_1a0a4e0(GameData_2265ee0 + v5, GameData_2216828);
    }
    result = GameRoutine_667c80(&GameData_2216780);
    GameData_2216858 = 0;
  }
  return result;
}

__int64 GameHr_da6270()
{
  long double v0;
  __int64 v1;
  long double v2;

  GameRoutine_d8ce40(GameData_21f3cb8);
  if (*(_DWORD*)(GameData_21f3d10 + 140) != 1) {
    *(_DWORD*)(GameData_21f3d10 + 140) = 1;
  }
  v1 = GameRoutine_da4bc0(1, v0);
  return GameRoutine_da51e0(v1, v2);
}

__int64 GameHr_e1d7a0()
{
  __int64 v0;
  int v1;
  __int64 result;
  __int64 v3;
  int v4;

  GameRoutine_ee0900(GameData_220d618);
  v0 = GameData_220b6e0;
  v1 = *(_DWORD*)(GameData_220b6e0 + 176);
  *(_DWORD*)(GameData_220b6e0 + 176) = v1 + 1;
  if (v1 == 0) {
    (**(void (***)(__int64))(v0 + 168))(v0 + 168);
  }
  result = GameRoutine_d799f0(v0);
  v3 = GameData_2263c30;
  if (GameData_2263c30 != 0) {
    v4 = *(_DWORD*)(GameData_2263c30 + 832);
    if (v4 != 0 && v4 != 3) {
      if (v4 == 1) {
        GameRoutine_1563030(GameData_2263c30 + 168, "In", 0);
      }
      *(_DWORD*)(v3 + 864) = 0;
      *(_DWORD*)(v3 + 832) = 3;
      return GameRoutine_1562680(v3 + 168, "Out", 1.0);
    }
  }
  return result;
}

__int64 GameHr_e1dc20()
{
  __int64 v0;
  int v1;
  __int64 result;
  int v3;

  v0 = GameData_220b6e0;
  if ((*(_BYTE*)(GameData_220b6e0 + 161) & 1) == 0) {
    *(_BYTE*)(GameData_220b6e0 + 161) = 1;
    v1 = *(_DWORD*)(v0 + 176);
    *(_DWORD*)(v0 + 176) = v1 + 1;
    if (v1 == 0) {
      (**(void (***)(__int64))(v0 + 168))(v0 + 168);
    }
    result = GameRoutine_d799f0(v0);
  }
  if ((*(_BYTE*)(v0 + 162) & 1) == 0) {
    *(_BYTE*)(v0 + 162) = 1;
    v3 = *(_DWORD*)(v0 + 192);
    *(_DWORD*)(v0 + 192) = v3 + 1;
    if (v3 == 0) {
      (**(void (***)(__int64))(v0 + 184))(v0 + 184);
    }
    return GameRoutine_d799f0(v0);
  }
  return result;
}

__int64 GameHr_e1dd50()
{
  __int64 v0;
  int v1;

  v0 = GameData_220b6e0;
  v1 = *(_DWORD*)(GameData_220b6e0 + 176) - 1;
  *(_DWORD*)(GameData_220b6e0 + 176) = v1;
  if (v1 == 0) {
    (*(void (**)(__int64))(*(_QWORD*)(v0 + 168) + 8LL))(v0 + 168);
  }
  return GameRoutine_d799f0(v0);
}

__int64 GameHr_e81140(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _DWORD v12[4];
  _BYTE v13[32];
  _BYTE* v14;
  _BYTE v15[32];
  _BYTE* v16;

  result = GameRoutine_e80e80(a1, a2);
  if (a3 == 0) {
    return result;
  }
  v8 = *(_DWORD*)(a2 + 52);
  v9 = *(_QWORD*)(a4 + 32);
  v14 = nullptr;
  v12[0] = v8;
  if (v9 != 0) {
    if (v9 == a4) {
      v16 = v15;
      (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v9 + 24LL))(v9, v15);
    }
    else {
      v16 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    }
  }
  else {
    v16 = nullptr;
  }
  GameRoutine_654050(v15, v13);
  if (v16 == v15) {
    v10 = 32;
    goto LABEL_11;
  }
  if (v16 != nullptr) {
    v10 = 40;
  LABEL_11:
    (*(void (**)(_BYTE*))(*(_QWORD*)v16 + v10))(v16);
  }
  GameRoutine_e803d0(a3, (__int64)v12);
  result = (__int64)v14;
  if (v14 == v13) {
    v11 = 32;
  }
  else {
    if (v14 == nullptr) {
      return result;
    }
    v11 = 40;
  }
  return (*(__int64 (**)(_BYTE*))(*(_QWORD*)v14 + v11))(v14);
}

#pragma GCC visibility pop
