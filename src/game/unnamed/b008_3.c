#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 (*GameData_1fbf780[])();

extern __int64 (*GameData_1fbf7d0[])();

extern __int64 (*GameData_1fbf9d8[])();

extern __int64 GameData_212bf68;

extern __int64* GameData_212c010[3];

extern __int64* GameData_212c018[2];

extern __int64* GameData_212d468[5];

extern __int64* GameData_212d480[2];

extern __int64 (*GameData_2167488)();

extern __int64 GameData_2198f90;

extern __int64 (*GameData_21fdd10)(_QWORD);

extern _UNKNOWN* GameData_21fdd18;

extern __int64 GameData_2265ee0;

__int64 GameRoutine_1901f0(_QWORD);

__int64 GameRoutine_190240(_QWORD);

__int64 GameRoutine_1a09b70(_QWORD);

__int64 GameRoutine_1a09b80(_QWORD);

__int64 GameRoutine_1a09c20(_QWORD);

__int64 GameRoutine_1a09c30(_QWORD);

__int64 GameRoutine_1a09c50(_QWORD);

__int64 GameRoutine_1a09c60(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1a09c70(_QWORD);

__int64 GameRoutine_1a09ca0(_QWORD, _QWORD);

__int64 GameRoutine_1a09cf0(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1a0a490(_QWORD);

__int64 GameRoutine_1a0a4e0(_QWORD);

__int64 GameRoutine_1a0b940(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1a0ba50(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_560310(_QWORD);

__int64 GameRoutine_560330(void);

__int64 GameRoutine_5603e0(_QWORD, _QWORD);

__int64 GameRoutine_5617c0(_QWORD);

__int64 GameRoutine_561b60(void);

__int64 GameRoutine_561e20(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_563490(_QWORD, _QWORD, _QWORD);

void __attribute__((noreturn)) GameRoutine_60a1d0(_QWORD, _QWORD, _QWORD,
                                                  _QWORD, _QWORD);

void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);

void __attribute__((noreturn)) GameRoutine_60a230(_QWORD);

__int64 GameRoutine_6313f0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_6544c0(_QWORD, _QWORD);

__int64 GameRoutine_66f9a0(void);

__int64 GameRoutine_80bf20(_QWORD);

__int64 GameRoutine_a201c0();

__int64 GameRoutine_a2af20(__int64, __int64, __int64, ...);

__int64 GameRoutine_a392e0(__int64, const char*, ...);

__int64 GameRoutine_a46f30(unsigned __int8*, __int64, __int64, __int64,
                           __int64);

__int64 GameRoutine_a483a0(__int64*, __int64, __int64, _QWORD*);

__int64 GameRoutine_a49810();

__int64 GameRoutine_a49830();

__int64 GameRoutine_a51900();

__int64 GameRoutine_a51f40(_QWORD);

__int64 GameRoutine_a52760();

__int64 GameRoutine_a52780();

_BYTE* GameRoutine_a535e0(__int64, __int64, __int64, _QWORD*, __int64);

__int64 GameRoutine_a539c0(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_a5b0a0(__int64 result);

void __attribute__((noreturn)) GameRoutine_a5dc30(_QWORD);

void __attribute__((noreturn)) GameRoutine_a5dc50(_QWORD);

void __attribute__((noreturn)) GameRoutine_a5dc90(_QWORD);

__int64 GameRoutine_e9030(_QWORD, _QWORD);

__int64 GameHr_a2af90()
{
  __int64* v0;
  _BYTE v2[256];

  GameRoutine_a2af20((__int64)v2, 256, (__int64)"voiceJP_%d", 0);
  v0 = GameData_212d468[0];
  GameRoutine_e9030(*GameData_212d468[0], v2);
  GameRoutine_a2af20((__int64)v2, 256, (__int64)"voiceEN_%d", 0);
  GameRoutine_e9030(*v0, v2);
  GameRoutine_a2af20((__int64)v2, 256, (__int64)"voiceJP_%d", 1);
  GameRoutine_e9030(*v0, v2);
  GameRoutine_a2af20((__int64)v2, 256, (__int64)"voiceEN_%d", 1);
  GameRoutine_e9030(*v0, v2);
  GameRoutine_a2af20((__int64)v2, 256, (__int64)"voiceJP_%d", 2);
  GameRoutine_e9030(*v0, v2);
  GameRoutine_a2af20((__int64)v2, 256, (__int64)"voiceEN_%d", 2);
  GameRoutine_e9030(*v0, v2);
  GameRoutine_a2af20((__int64)v2, 256, (__int64)"voiceJP_%d", 3);
  GameRoutine_e9030(*v0, v2);
  GameRoutine_a2af20((__int64)v2, 256, (__int64)"voiceEN_%d", 3);
  GameRoutine_e9030(*v0, v2);
  GameRoutine_a2af20((__int64)v2, 256, (__int64)"voiceJP_%d", 4);
  GameRoutine_e9030(*v0, v2);
  GameRoutine_a2af20((__int64)v2, 256, (__int64)"voiceEN_%d", 4);
  GameRoutine_e9030(*v0, v2);
  GameRoutine_a2af20((__int64)v2, 256, (__int64)"voiceJP_%d", 5);
  GameRoutine_e9030(*v0, v2);
  GameRoutine_a2af20((__int64)v2, 256, (__int64)"voiceEN_%d", 5);
  GameRoutine_e9030(*v0, v2);
  GameRoutine_a2af20((__int64)v2, 256, (__int64)"voiceJP_%d", 6);
  GameRoutine_e9030(*v0, v2);
  GameRoutine_a2af20((__int64)v2, 256, (__int64)"voiceEN_%d", 6);
  GameRoutine_e9030(*v0, v2);
  GameRoutine_a2af20((__int64)v2, 256, (__int64)"voiceJP_%d", 7);
  GameRoutine_e9030(*v0, v2);
  GameRoutine_a2af20((__int64)v2, 256, (__int64)"voiceEN_%d", 7);
  GameRoutine_e9030(*v0, v2);
  GameRoutine_a2af20((__int64)v2, 256, (__int64)"voiceJP_%d", 8);
  GameRoutine_e9030(*v0, v2);
  GameRoutine_a2af20((__int64)v2, 256, (__int64)"voiceEN_%d", 8);
  GameRoutine_e9030(*v0, v2);
  GameRoutine_a2af20((__int64)v2, 256, (__int64)"voiceJP_%d", 9);
  GameRoutine_e9030(*v0, v2);
  GameRoutine_a2af20((__int64)v2, 256, (__int64)"voiceEN_%d", 9);
  GameRoutine_e9030(*v0, v2);
  return GameRoutine_a201c0();
}

__int64 GameHr_a39390(_QWORD* a1)
{
  const char* v2;
  const char* v3;
  __int64 v4;
  __int64 v5;
  _BYTE* v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 result;
  unsigned __int8 v13;
  _BYTE v14[15];
  _BYTE* v15;
  _QWORD v16[3];
  int v17;

  GameRoutine_1901f0(&v13);
  v2 = (const char*)(*(__int64 (**)(__int64))(*(_QWORD*)GameData_2198f90 +
                                              128LL))(GameData_2198f90);
  v3 = (const char*)GameRoutine_190240(a1 + 5);
  GameRoutine_a392e0((__int64)&v13, "%s%s", v2, v3);
  v4 = GameData_2198f90;
  v5 = GameRoutine_190240(&v13);
  if (((*(__int64 (**)(__int64, __int64))(*(_QWORD*)v4 + 536LL))(v4, v5) & 1) !=
      0) {
    v6 = v15;
    v17 = 0;
    v7 = *GameData_212c018[0];
    v8 = (unsigned __int64)v13 >> 1;
    if ((v13 & 1) != 0) {
      v8 = *(_QWORD*)&v14[7];
    }
    else {
      v6 = v14;
    }
    v16[0] = v6;
    v16[1] = v8;
    v16[2] = &GameData_2167488;
    v9 = GameRoutine_6544c0(v7, v16);
    a1[9] = v9;
    v10 = v9;
    v11 = *(_QWORD*)(v9 + 8);
    GameRoutine_1a09b70(v11 + 4456);
    GameRoutine_1a09c20(v10 + 696);
    *(_DWORD*)(v10 + 656) |= 4u;
    GameRoutine_1a09c30(v10 + 696);
    GameRoutine_1a09b80(v11 + 4456);
  }
  else {
    a1[9] = 0;
  }
  result = (*(__int64 (**)(_QWORD*))(*a1 + 56LL))(a1);
  if ((v13 & 1) != 0) {
    return (*(__int64 (**)(_QWORD, _BYTE*))(**(_QWORD**)GameData_212d480[0] +
                                            24LL))(*GameData_212d480[0], v15);
  }
  return result;
}

__int64 GameHr_a49540(_QWORD* a1, _QWORD* a2, __int64 a3)
{
  __int64 v4;
  __int64 result;
  int* v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  char* v17;
  __int64 v18;
  int v19;
  int v20;
  __int64 v21;
  int v22;
  int v25;
  int v26;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  char* v34;
  __int64 v35;

  v35 = 0;
  v4 = *GameData_212c010[0];
  result = GameRoutine_a483a0(&v35, *(_QWORD*)(a1[1] + 8LL), a3, a2);
  if (result != 0) {
    v6 = (int*)result;
    v7 = (_QWORD*)GameData_212bf68;
    v8 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 7888, 16, 0);
    GameRoutine_561b60();
    a1[4] = v8;
    v9 = a1[5];
    if (v9 == 0) {
    LABEL_42:
      v29 = GameRoutine_651b90(*v7, 56, 16, 0);
      GameRoutine_560330();
      a1[2] = v29;
      GameRoutine_560310(&v32);
      v30 = a1[4];
      WORD2(v33) = 0;
      v32 = v30;
      v31 = a1[2];
      LODWORD(v33) = *(_DWORD*)(a1[1] + 16LL);
      HIBYTE(v33) = 1;
      LODWORD(v34) = 63;
      return GameRoutine_5603e0(v31, &v32);
    }
    v10 = *(_QWORD*)(a1[1] + 8LL);
    v11 = GameRoutine_1a09c70(v10);
    if (v11 >= 0xFFFFFFFFFFFFFFF7LL) {
      GameRoutine_60a1d0(v11, v12, v13, v14, v15);
    }
    v16 = v11;
    if (v11 >= 0x17) {
      if ((v11 | 7) == 0x17) {
        v18 = 26;
      }
      else {
        v18 = (v11 | 7) + 1;
      }
      v17 = (char*)GameRoutine_651b90(*v7, v18, 16, 0);
      v33 = v16;
      v34 = v17;
      v32 = v18 | 1;
    }
    else {
      LOBYTE(v32) = 2 * v11;
      v17 = (char*)&v32 + 1;
      if (v11 == 0) {
        goto LABEL_12;
      }
    }
    GameRoutine_1a0b940(v17, v10, v16);
  LABEL_12:
    v17[v16] = 0;
    v19 = GameRoutine_a46f30((unsigned __int8*)&v32, v12, v13, v14, v15);
    if ((v32 & 1) != 0 && v34 != nullptr) {
      v20 = v19;
      v21 = 128;
      if (*(_QWORD*)(*v7 + 200LL) == 0) {
        v21 = 56;
      }
      GameRoutine_1a0a4e0(*v7 + v21);
      v19 = v20;
    }
    if (v19 > 2) {
      if (v19 != 3) {
        if (v19 == 4) {
          goto LABEL_30;
        }
        goto LABEL_40;
      }
    }
    else {
      if (v19 != 1) {
        if (v19 == 2) {
          v22 = *v6;
          if (*v6 != 256 && v22 != 1717793908 && v22 != 1330926671) {
            v25 = 3;
          LABEL_41:
            GameRoutine_5617c0(v9);
            *(_QWORD*)(v9 + 24) = v6;
            *(_DWORD*)(v9 + 14872) = v25;
            *(_BYTE*)(v9 + 10264) = 0;
            *(_QWORD*)v9 = 0x40000000400LL;
            *(_QWORD*)(v9 + 8) = GameRoutine_a49810;
            *(_QWORD*)(v9 + 92832) = 0x100000;
            *(_QWORD*)(v9 + 92840) = 0x100000;
            *(_QWORD*)(v9 + 4120) = v35;
            *(_QWORD*)(v9 + 92696) = 0x100000001LL;
            GameRoutine_561e20(a1[4], v4 + 568, v9, 0, 0, 0);
            GameRoutine_563490(a1[4], GameRoutine_a49830, a1);
            goto LABEL_42;
          }
        LABEL_30:
          v25 = 1;
          goto LABEL_41;
        }
      LABEL_40:
        v25 = 2;
        goto LABEL_41;
      }
      v26 = *v6;
      if (*v6 != 256 && v26 != 1717793908 && v26 != 1330926671) {
        goto LABEL_40;
      }
    }
    v25 = 0;
    goto LABEL_41;
  }
  return result;
}

__int64 GameHr_a4b180(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  *(_QWORD*)(a1 + 14632) = 0;
  *(_QWORD*)(a1 + 14624) = 0;
  *(_QWORD*)(a1 + 14616) = 0;
  *(_QWORD*)(a1 + 14608) = 0;
  *(_QWORD*)(a1 + 14600) = 0;
  *(_QWORD*)(a1 + 14592) = 0;
  *(_DWORD*)(a1 + 14640) = 1065353216;
  *(_QWORD*)(a1 + 14648) = 0;
  *(_QWORD*)(a1 + 14656) = 0;
  *(_QWORD*)(a1 + 14664) = 0;
  *(_QWORD*)(a1 + 14672) = 0;
  *(_DWORD*)(a1 + 14680) = 1065353216;
  v2 = (_QWORD*)GameData_212bf68;
  v3 = (_QWORD*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 80, 16, 0);
  v3[1] = 0;
  v3[2] = 0;
  *(_QWORD*)(a1 + 14696) = v3;
  *v3 = GameData_1fbf780;
  v3[4] = GameData_1fbf7d0;
  v3[5] = GameRoutine_a51900;
  v3[8] = v3 + 4;
  *(_QWORD*)(a1 + 14688) = v3 + 4;
  GameRoutine_1a0ba50(a1 + 14704, 0, 472, v4, v5, v6);
  *(_QWORD*)(a1 + 15176) = a1;
  *(_WORD*)(a1 + 15184) = 0;
  v7 = GameRoutine_651b90(*v2, 64, 16, 0);
  v8 = *(_QWORD*)(a1 + 15160);
  *(_QWORD*)v7 = a1;
  *(_WORD*)(v7 + 8) = 0;
  *(_QWORD*)(v7 + 48) = 0;
  *(_QWORD*)(v7 + 55) = 0;
  *(_QWORD*)(a1 + 15160) = v7;
  *(_QWORD*)(v7 + 32) = 0x72000000000LL;
  *(_QWORD*)(v7 + 40) = 0;
  if (v8 != 0) {
    if ((*(_BYTE*)(v8 + 8) & 1) != 0 && *(_QWORD*)(v8 + 24) != 0) {
      v9 = 128;
      if (*(_QWORD*)(*v2 + 200LL) == 0) {
        v9 = 56;
      }
      GameRoutine_1a0a4e0(*v2 + v9);
    }
    v10 = 128;
    if (*(_QWORD*)(*v2 + 200LL) == 0) {
      v10 = 56;
    }
    GameRoutine_1a0a4e0(*v2 + v10);
  }
  v11 = GameRoutine_651b90(*v2, 64, 16, 0);
  v12 = *(_QWORD*)(a1 + 15168);
  *(_QWORD*)v11 = a1;
  *(_WORD*)(v11 + 8) = 0;
  *(_QWORD*)(v11 + 32) = 0x72000000000LL;
  *(_QWORD*)(v11 + 40) = 0;
  *(_QWORD*)(v11 + 48) = 0;
  *(_QWORD*)(v11 + 55) = 0;
  *(_QWORD*)(a1 + 15168) = v11;
  if (v12 != 0) {
    if ((*(_BYTE*)(v12 + 8) & 1) != 0 && *(_QWORD*)(v12 + 24) != 0) {
      v13 = 128;
      if (*(_QWORD*)(*v2 + 200LL) == 0) {
        v13 = 56;
      }
      GameRoutine_1a0a4e0(*v2 + v13);
    }
    v14 = 128;
    if (*(_QWORD*)(*v2 + 200LL) == 0) {
      v14 = 56;
    }
    GameRoutine_1a0a4e0(*v2 + v14);
  }
  GameData_21fdd10 = (__int64 (*)(_QWORD))GameRoutine_a52760;
  GameData_21fdd18 = GameRoutine_a52780;
  return GameRoutine_a51f40(a1 + 14704);
}

_BYTE* GameHr_a535e0(__int64 a1, __int64 a2, __int64 a3, _QWORD* a4, __int64 a5)
{
  __int64 v5;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  _BYTE* v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  int v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  _BYTE* v26;
  __int64 v27;
  _BYTE* v28;
  __int64 v29;
  _BYTE* v30;
  _BYTE* result;
  unsigned __int64 v32;
  _QWORD v33[2];
  int v34;

  v5 = a4[1];
  v33[0] = *a4;
  v33[1] = v5;
  if (v5 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                              memory_order_relaxed);
    v34 = 0;
    GameRoutine_6313f0(a1, a2, a3, v33, a5, &v34);
    GameRoutine_1a09c50(v5);
  }
  else {
    v34 = 0;
    GameRoutine_6313f0(a1, a2, a3, v33, a5, &v34);
  }
  *(_QWORD*)(a1 + 800) = 0;
  *(_QWORD*)a1 = GameData_1fbf9d8;
  v8 = GameRoutine_1a09c70(a3);
  if (v8 >= 0xFFFFFFFFFFFFFFF7LL) {
    GameRoutine_60a1d0(v8, v9, v10, v11, v12);
  }
  v13 = v8;
  if (v8 >= 0x17) {
    if ((v8 | 7) == 0x17) {
      v15 = 26;
    }
    else {
      v15 = (v8 | 7) + 1;
    }
    v14 = GameRoutine_651b90(GameData_2265ee0, v15, 16, 0);
    *(_QWORD*)(a1 + 824) = v14;
    *(_QWORD*)(a1 + 816) = v13;
    *(_QWORD*)(a1 + 808) = v15 | 1;
  }
  else {
    v14 = a1 + 809;
    *(_BYTE*)(a1 + 808) = 2 * v8;
    if (v8 == 0) {
      goto LABEL_13;
    }
  }
  GameRoutine_1a0b940(v14, a3, v13);
LABEL_13:
  *(_BYTE*)(v14 + v13) = 0;
  v16 = a1 + 809;
  *(_DWORD*)(a1 + 832) = 0;
  v17 = *(unsigned __int8*)(a1 + 808);
  v18 = *(_BYTE**)(a1 + 824);
  v19 = v17 >> 1;
  if ((v17 & 1) != 0) {
    v20 = *(_QWORD*)(a1 + 824);
  }
  else {
    v20 = a1 + 809;
  }
  if ((v17 & 1) != 0) {
    v19 = *(_QWORD*)(a1 + 816);
  }
  v21 = v20 - 1;
  do {
    if (v19 == 0) {
      v23 = 0;
    LABEL_26:
      GameRoutine_a539c0(a1 + 808, 0, v23);
      goto LABEL_29;
    }
    v22 = *(unsigned __int8*)(v21 + v19--);
  } while (v22 != 47);
  if (v19 != -2) {
    v23 = v19 + 1;
    goto LABEL_26;
  }
  if ((v17 & 1) != 0) {
    *(_QWORD*)(a1 + 816) = 0;
  }
  else {
    *(_BYTE*)(a1 + 808) = 0;
    v18 = (_BYTE*)(a1 + 809);
  }
  *v18 = 0;
LABEL_29:
  v24 = *(unsigned __int8*)(a1 + 808);
  v25 = *(_QWORD*)(a1 + 824);
  if ((v24 & 1) != 0) {
    v26 = *(_BYTE**)(a1 + 824);
  }
  else {
    v26 = (_BYTE*)(a1 + 809);
  }
  if ((v24 & 1) != 0) {
    v27 = *(_QWORD*)(a1 + 816);
  }
  else {
    v27 = v24 >> 1;
  }
  v28 = &v26[v27];
  if (v27 >= 1) {
    v29 = v27;
    v30 = v26;
    do {
      result = (_BYTE*)GameRoutine_1a09c60(v30, 46, v29);
      if (result == nullptr) {
        break;
      }
      if (*result == 46) {
        goto LABEL_41;
      }
      v30 = result + 1;
      v29 = v28 - v30;
    } while (v28 - v30 > 0);
  }
  result = &v26[v27];
LABEL_41:
  v32 = result - v26;
  if (result == v28) {
    v32 = -1;
  }
  if (v32 > v27) {
    GameRoutine_60a230(result);
  }
  if ((v24 & 1) != 0) {
    *(_QWORD*)(a1 + 816) = v32;
    v16 = v25;
  }
  else {
    *(_BYTE*)(a1 + 808) = 2 * v32;
  }
  *(_BYTE*)(v16 + v32) = 0;
  return result;
}

__int64 GameHr_a53b10(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  _QWORD v9[2];

  v2 = *(_QWORD*)(a1 + 16);
  v4 = *a2;
  v5 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      ***(_QWORD***)(a1 + 8) + 16LL))(**(_QWORD**)(a1 + 8), 848, 16);
  v6 = *(__int64**)(a1 + 8);
  v7 = v5;
  v9[0] = 0;
  v9[1] = 0;
  GameRoutine_a535e0(v5, v2, v4, v9, *v6);
  return v7;
}

__int64* GameHr_a542c0(_QWORD* a1, _QWORD* a2)
{
  unsigned __int64 v2;
  __int64 v4;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64** v11;
  __int64* i;
  unsigned __int64 v13;
  __int64 v14;
  __int64* v15;

  v2 = a1[1];
  if (v2 == 0 || a1[3] == 0) {
    return nullptr;
  }
  v4 = *a2;
  v6 = GameRoutine_1a09c70(*a2);
  v7 = GameRoutine_1a09ca0(v4, v6);
  v8 = v2 - 1;
  v9 = v7;
  if ((v2 & (v2 - 1)) != 0) {
    v10 = v7;
    if (v7 >= v2) {
      v10 = v7 % v2;
    }
  }
  else {
    v10 = v7 & v8;
  }
  v11 = *(__int64***)(*a1 + 8 * v10);
  if (v11 == nullptr) {
    return nullptr;
  }
  for (i = *v11; i != nullptr; i = (__int64*)*i) {
    v13 = i[1];
    if (v9 == v13) {
      v14 = *((_BYTE*)i + 16) >> 1;
      if ((i[2] & 1) != 0) {
        v14 = i[3];
      }
      if (v6 == v14) {
        if (v6 == -1) {
          GameRoutine_60a230(v7);
        }
        v15 = (i[2] & 1) != 0 ? (__int64*)i[4] : (__int64*)((char*)i + 17);
        v7 = GameRoutine_1a09cf0(v15, v4, v6);
        if ((_DWORD)v7 == 0) {
          return i;
        }
      }
    }
    else {
      if ((v2 & v8) != 0) {
        if (v13 >= v2) {
          v13 %= v2;
        }
      }
      else {
        v13 &= v8;
      }
      if (v13 != v10) {
        return nullptr;
      }
    }
  }
  return i;
}

__int64 GameHr_a5d040(__int64 result)
{
  _QWORD* v1;
  _QWORD* v2;
  __int64* v3;
  __int64* v4;
  unsigned __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  char* v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  char* v14;
  unsigned __int64 v15;
  __int64 v16;
  _QWORD* v17;
  __int64* v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  char* v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  char* v33;
  unsigned __int64 v34;
  __int64 v35;
  _QWORD* v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  char* v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  char* v45;
  __int64 v46;
  __int64 v47;

  v1 = *(_QWORD**)(result + 40);
  v2 = (_QWORD*)result;
  v3 = (__int64*)*(v1 - 3);
  v4 = (__int64*)*(v1 - 2);
  if (v3 != v4) {
    do {
      result = *v3;
      if (*v3 != 0) {
        result = GameRoutine_66f9a0();
      }
      v3 += 2;
    } while (v3 != v4);
    v1 = (_QWORD*)v2[5];
  }
  v5 = v2[6];
  v6 = (_QWORD*)GameData_212bf68;
  if ((unsigned __int64)v1 >= v5) {
    v8 = v2[4];
    v9 = (char*)v1 - v8;
    v10 = 1 - 0x5555555555555555LL * (((__int64)v1 - v8) >> 3);
    if (v10 > 0xAAAAAAAAAAAAAAALL) {
      GameRoutine_a5dc30(result);
    }
    v11 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v5 - v8) >> 3);
    if (2 * v11 > v10) {
      v10 = 2 * v11;
    }
    if (v11 >= 0x555555555555555LL) {
      v12 = 0xAAAAAAAAAAAAAAALL;
    }
    else {
      v12 = v10;
    }
    if (v12 != 0) {
      if (v12 > 0xAAAAAAAAAAAAAAALL) {
        goto LABEL_66;
      }
      v13 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 24 * v12, 16, 0);
    }
    else {
      v13 = 0;
    }
    v14 = &v9[v13];
    *((_QWORD*)v14 + 1) = 0;
    *((_QWORD*)v14 + 2) = 0;
    v15 = v13 + 24 * v12;
    *(_QWORD*)v14 = 0;
    v7 = (__int64)&v9[v13 + 24];
    result = GameRoutine_1a0b950(v13, v8, v9);
    v2[4] = v13;
    v2[5] = v7;
    v2[6] = v15;
    if (v8 != 0) {
      v16 = 128;
      if (*(_QWORD*)(*v6 + 200LL) == 0) {
        v16 = 56;
      }
      result = GameRoutine_1a0a4e0(*v6 + v16);
    }
  }
  else {
    v1[1] = 0;
    v1[2] = 0;
    v7 = (__int64)(v1 + 3);
    *v1 = 0;
  }
  v17 = (_QWORD*)v2[8];
  v2[5] = v7;
  v18 = (__int64*)*(v17 - 3);
  v19 = (__int64*)*(v17 - 2);
  if (v18 != v19) {
    do {
      v20 = *v18;
      v21 = *(_QWORD*)(*v18 + 48);
      v22 = *(_QWORD*)(*v18 + 56);
      v23 = ((v22 - v21) << 9) - 1;
      if (v22 == v21) {
        v23 = 0;
      }
      v24 = *(_QWORD*)(*v18 + 80) + *(_QWORD*)(*v18 + 72);
      if (v23 == v24) {
        result = GameRoutine_80bf20(v20 + 40);
        v21 = *(_QWORD*)(v20 + 48);
        v24 = *(_QWORD*)(v20 + 80) + *(_QWORD*)(v20 + 72);
      }
      v18 += 2;
      *(_BYTE*)(*(_QWORD*)(v21 + 8 * (v24 >> 12)) + (v24 & 0xFFF)) =
          *(_BYTE*)(v20 + 8);
      *(_BYTE*)(v20 + 8) = 0;
      ++*(_QWORD*)(v20 + 80);
    } while (v18 != v19);
    v17 = (_QWORD*)v2[8];
  }
  v25 = v2[9];
  if ((unsigned __int64)v17 >= v25) {
    v27 = v2[7];
    v28 = (char*)v17 - v27;
    v29 = 1 - 0x5555555555555555LL * (((__int64)v17 - v27) >> 3);
    if (v29 > 0xAAAAAAAAAAAAAAALL) {
      GameRoutine_a5dc50(result);
    }
    v30 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v25 - v27) >> 3);
    if (2 * v30 > v29) {
      v29 = 2 * v30;
    }
    if (v30 >= 0x555555555555555LL) {
      v31 = 0xAAAAAAAAAAAAAAALL;
    }
    else {
      v31 = v29;
    }
    if (v31 != 0) {
      if (v31 > 0xAAAAAAAAAAAAAAALL) {
        goto LABEL_66;
      }
      v32 = GameRoutine_651b90(*v6, 24 * v31, 16, 0);
    }
    else {
      v32 = 0;
    }
    v33 = &v28[v32];
    *((_QWORD*)v33 + 1) = 0;
    *((_QWORD*)v33 + 2) = 0;
    v34 = v32 + 24 * v31;
    *(_QWORD*)v33 = 0;
    v26 = (__int64)&v28[v32 + 24];
    GameRoutine_1a0b950(v32, v27, v28);
    v2[7] = v32;
    v2[8] = v26;
    v2[9] = v34;
    if (v27 != 0) {
      v35 = 128;
      if (*(_QWORD*)(*v6 + 200LL) == 0) {
        v35 = 56;
      }
      GameRoutine_1a0a4e0(*v6 + v35);
    }
  }
  else {
    v17[1] = 0;
    v17[2] = 0;
    v26 = (__int64)(v17 + 3);
    *v17 = 0;
  }
  v2[8] = v26;
  result = GameRoutine_a5b0a0((__int64)(v2 + 27));
  v36 = (_QWORD*)v2[31];
  v37 = v2[32];
  if ((unsigned __int64)v36 < v37) {
    v36[4] = 0;
    v36[5] = 0;
    v36[2] = 0;
    v36[3] = 0;
    v38 = (__int64)(v36 + 6);
    *v36 = 0;
    v36[1] = 0;
    goto LABEL_63;
  }
  v39 = v2[30];
  v40 = (char*)v36 - v39;
  v41 = 1 - 0x5555555555555555LL * (((__int64)v36 - v39) >> 4);
  if (v41 > 0x555555555555555LL) {
    GameRoutine_a5dc90(result);
  }
  v42 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v37 - v39) >> 4);
  if (2 * v42 > v41) {
    v41 = 2 * v42;
  }
  if (v42 >= 0x2AAAAAAAAAAAAAALL) {
    v43 = 0x555555555555555LL;
  }
  else {
    v43 = v41;
  }
  if (v43 != 0) {
    if (v43 <= 0x555555555555555LL) {
      v44 = GameRoutine_651b90(*v6, 48 * v43, 16, 0);
      goto LABEL_59;
    }
  LABEL_66:
    GameRoutine_60a210(result);
  }
  v44 = 0;
LABEL_59:
  v45 = &v40[v44];
  *((_QWORD*)v45 + 4) = 0;
  *((_QWORD*)v45 + 5) = 0;
  *((_QWORD*)v45 + 2) = 0;
  *((_QWORD*)v45 + 3) = 0;
  v38 = (__int64)&v40[v44 + 48];
  *(_QWORD*)v45 = 0;
  *((_QWORD*)v45 + 1) = 0;
  result = GameRoutine_1a0b950(v44, v39, v40);
  v2[30] = v44;
  v2[31] = v38;
  v2[32] = v44 + 48 * v43;
  if (v39 != 0) {
    v46 = 128;
    if (*(_QWORD*)(*v6 + 200LL) == 0) {
      v46 = 56;
    }
    result = GameRoutine_1a0a4e0(*v6 + v46);
  }
LABEL_63:
  v47 = *v6;
  v2[31] = v38;
  if (*(_QWORD*)(v47 + 760) != 0) {
    return GameRoutine_1a0a490(v47 + 688);
  }
  return result;
}

#pragma GCC visibility pop
