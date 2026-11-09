#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)

extern __int128 GameData_1a837f0;
extern char GameData_1a9f09e;
extern _UNKNOWN GameData_1aa2459;
extern const char GameData_1aa9f0a[];
extern _UNKNOWN GameData_1ac4924;
extern _UNKNOWN* GameData_1afe67f;
extern __int64 (*GameData_2049620[])();
extern __int64 GameData_212bf68;
extern _UNKNOWN* GameData_212c540;
extern __int64 GameData_212c638;
extern __int64* GameData_212c780;
extern __int64* GameData_212c790;
extern __int64* GameData_212caf0[105];
extern __int64 GameData_212cf60;
extern __int64* GameData_212d728[2];
extern __int64* GameData_212de58[3];
extern __int64 GameData_2130f48;
extern __int64* GameData_21316e0[15];
extern __int128 GameData_21c9610;
extern __int128 GameData_21c9630;
extern __int64 GameData_21c96e8;
extern __int64 GameData_21c9700;
extern __int64 GameData_21c9718;
extern __int64 GameData_21c9ec0;
extern __int64 GameData_21ca310;
extern __int64 GameData_21caab0;
extern __int64 GameData_21ee260;
extern __int64 GameData_21f1648;
extern __int64 GameData_21f49b8;
extern __int64 GameData_2241720;
extern __int64 GameData_224b698;
extern __int64 GameData_224b6a0;
extern __int64 GameData_224b6a8;
extern __int64 GameData_2265ef8;
__int64 GameRoutine_125d3e0(_QWORD);
__int64 GameRoutine_13261c0(_QWORD);
__int64 GameRoutine_1328d60(_QWORD);
__int64 GameRoutine_13300a0(_QWORD);
__int64 GameRoutine_13305c0(_QWORD, _QWORD);
__int64 GameRoutine_1334160(_QWORD, _QWORD);
__int64 GameRoutine_133dba0(_QWORD, _QWORD);
__int64 GameRoutine_1347b30(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1347cc0(_QWORD, _QWORD);
__int64 GameRoutine_13485a0(void);
__int64 GameRoutine_14a10d0(_QWORD*, __int64, __int64, __int64);
__int64 GameRoutine_14a1cc0(__int64*, float);
__int64 GameRoutine_14a36c0(_QWORD*, __int64*, int*);
__int64 GameRoutine_14b8500(_QWORD);
__int64 GameRoutine_14cd5c0();
__int64 GameRoutine_14d2d00(__int64);
__int64 GameRoutine_14d4a20(__int64, __int64);
__int64 GameRoutine_1515ac0(_QWORD);
__int64 GameRoutine_15317a0(_QWORD);
__int64 GameRoutine_1536e70(_QWORD);
__int64 GameRoutine_175b880(_QWORD);
__int64 GameRoutine_17cc7d0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a09c50();
__int64 GameRoutine_1a0a4e0(_QWORD, _QWORD);
__int64 GameRoutine_1a0a690(_QWORD, _QWORD);
__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 GameRoutine_64dde0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_65c580(_QWORD, _QWORD);
__int64 GameRoutine_682780(_QWORD);
void __attribute__((noreturn)) GameRoutine_6c1f60(_QWORD);
__int64 GameRoutine_6c47b0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6d8390(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6ead60(_QWORD, _QWORD);
__int64 GameRoutine_70d7a0(_QWORD);
__int64 GameRoutine_70ea50(_QWORD, _QWORD);
__int64 GameRoutine_716d80(_QWORD, _QWORD);
__int64 GameRoutine_7a7dc0(const char*, ...);
__int64 GameRoutine_7a86e0(_QWORD);
__int64 GameRoutine_828800(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a2d080(_QWORD);
__int64 GameRoutine_a6c440(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_bc6460(_QWORD, _QWORD, _QWORD);

__int64 GameHr_149e3e0(_QWORD* a1, __int64* a2, int* a3)
{
  int v3;
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64* i;
  __int64* v13;
  __int64* v14;
  __int64* v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  char* v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64* v23;
  __int64 v24;
  __int64 v25;
  char* v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  char* v35;
  __int64 v36;
  __int64 v37;
  int v38;
  __int64* v39;

  if (a2 != nullptr) {
    v3 = *a3;
    v39 = a2;
    v38 = v3 | 0x100;
    result = GameRoutine_6ead60(&v39, &v38);
    if (result != 0) {
      return result;
    }
    LOBYTE(v39) = 8;
    v7 = *(_QWORD*)(GameData_21ca310 + 56);
    v8 = *(_QWORD*)(v7 + 556216);
    if (v8 != 0) {
      GameRoutine_6c47b0(*(_QWORD*)(v7 + 556216), &v39, 1, 0);
      v9 = v8;
      GameRoutine_6d8390(v8, a2, 0);
      v10 = (__int64*)GameRoutine_682780(9);
      if (a2 == v10) {
        v10 = (__int64*)GameRoutine_682780(9);
        v11 = v8;
        if (v10 == nullptr) {
          goto LABEL_16;
        }
        for (i = v10; i != nullptr; i = (__int64*)i[78]) {
          v13 = i;
        }
        if (*((_BYTE*)v13 + 441) != 3) {
          goto LABEL_16;
        }
        v14 = (__int64*)v10[78];
        if (v14 == nullptr) {
          v14 = v10;
        }
        v39 = v14;
        v38 = 241;
        v10 = (__int64*)GameRoutine_6ead60(&v39, &v38);
        if (v10 != nullptr) {
          v15 = v10 + 263;
          v11 = v8;
          goto LABEL_17;
        }
        v16 = *(_QWORD*)(GameData_21caab0 + 176);
        v11 = v8;
        if (*(_BYTE*)(v16 + 144) != 0) {
          v15 = (__int64*)(v16 + 112);
        }
        else {
        LABEL_16:
          v15 = &GameData_21f49b8;
        }
      LABEL_17:
        if (*((_BYTE*)v15 + 32) == 0) {
          if ((*(_BYTE*)(v11 + 2112) & 1) != 0) {
            **(_BYTE**)(v11 + 2128) = 0;
            *(_QWORD*)(v11 + 2120) = 0;
          }
          else {
            *(_WORD*)(v11 + 2112) = 0;
          }
          *(_BYTE*)(v11 + 2136) = 1;
          *(_DWORD*)(v11 + 2137) = 0;
          goto LABEL_36;
        }
        if ((__int64*)(v11 + 2104) == v15) {
          goto LABEL_35;
        }
        v10 = (__int64*)(v11 + 2112);
        v17 = *((unsigned __int8*)v15 + 8);
        if ((*(_BYTE*)(v11 + 2112) & 1) != 0) {
          if ((v17 & 1) != 0) {
            v20 = (char*)v15[3];
          }
          else {
            v20 = (char*)v15 + 9;
          }
          if ((v17 & 1) != 0) {
            v21 = v15[2];
          }
          else {
            v21 = v17 >> 1;
          }
          v10 = (__int64*)GameRoutine_64dde0(v10, v20, v21);
        }
        else {
          if ((v17 & 1) == 0) {
            v18 = v15[1];
            v19 = v15[3];
            *(_QWORD*)(v11 + 2120) = v15[2];
            *(_QWORD*)(v11 + 2128) = v19;
            *v10 = v18;
          LABEL_35:
            *(_BYTE*)(v11 + 2136) = *((_BYTE*)v15 + 32);
            *(_BYTE*)(v11 + 2137) = *((_BYTE*)v15 + 33);
            *(_BYTE*)(v11 + 2138) = *((_BYTE*)v15 + 34);
            *(_BYTE*)(v11 + 2139) = *((_BYTE*)v15 + 35);
            *(_BYTE*)(v11 + 2140) = *((_BYTE*)v15 + 36);
            goto LABEL_36;
          }
          v10 = (__int64*)GameRoutine_64df20(v10, v15[3], v15[2]);
        }
        v11 = v8;
        goto LABEL_35;
      }
    LABEL_36:
      v23 = (__int64*)a1[2];
      v22 = a1[3];
      if ((unsigned __int64)v23 >= v22) {
        v25 = a1[1];
        v26 = (char*)v23 - v25;
        v27 = ((__int64)v23 - v25) >> 3;
        v28 = v27 + 1;
        if ((unsigned __int64)(v27 + 1) >> 61 != 0) {
          GameRoutine_6c1f60(v10);
        }
        v29 = v22 - v25;
        v30 = GameData_212bf68;
        if (v29 >> 2 > v28) {
          v28 = v29 >> 2;
        }
        if ((unsigned __int64)v29 >= 0x7FFFFFFFFFFFFFF8LL) {
          v31 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v31 = v28;
        }
        if (v31 != 0) {
          if (v31 >> 61 != 0) {
            GameRoutine_60a210(v10);
          }
          v32 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 8 * v31, 16, 0);
          v33 = v9;
        }
        else {
          v33 = v9;
          v32 = 0;
        }
        v34 = v32 + 8 * v31;
        v35 = (char*)v23 - v25;
        v36 = (__int64)&v26[v32 + -8 * v27];
        *(_QWORD*)&v26[v32] = v33;
        v24 = (__int64)&v26[v32 + 8];
        GameRoutine_1a0b950(v36, v25, v35);
        a1[1] = v36;
        a1[2] = v24;
        a1[3] = v34;
        if (v25 != 0) {
          v37 = 128;
          if (*(_QWORD*)(*(_QWORD*)v30 + 200LL) == 0) {
            v37 = 56;
          }
          GameRoutine_1a0a4e0(*(_QWORD*)v30 + v37, v25);
        }
        result = v9;
      }
      else {
        result = v8;
        *v23 = v8;
        v24 = (__int64)(v23 + 1);
      }
      a1[2] = v24;
      return result;
    }
  }
  return 0;
}

__int64 GameHr_14a3a60(__int64 a1, unsigned __int8* a2)
{
  unsigned __int64 v3;
  __int64 v5;
  __int64 v6;
  bool v7;
  unsigned __int64 v8;
  unsigned __int8* v9;
  unsigned __int64 v10;
  _QWORD* v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  bool v15;
  unsigned __int64 v16;
  unsigned __int8* v17;
  unsigned __int64 v18;
  _QWORD* v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  bool v23;
  unsigned __int64 v24;
  unsigned __int8* v25;
  unsigned __int64 v26;
  _QWORD* v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  bool v31;
  unsigned __int64 v32;
  unsigned __int8* v33;
  unsigned __int64 v34;
  _QWORD* v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  bool v39;
  unsigned __int64 v40;
  unsigned __int8* v41;
  unsigned __int64 v42;

  if ((unsigned __int8*)a1 != a2) {
    v3 = *a2;
    if ((*(_BYTE*)a1 & 1) != 0) {
      v7 = (v3 & 1) == 0;
      v8 = v3 >> 1;
      if (v7) {
        v9 = a2 + 1;
      }
      else {
        v9 = *((unsigned __int8**)a2 + 2);
      }
      if (v7) {
        v10 = v8;
      }
      else {
        v10 = *((_QWORD*)a2 + 1);
      }
      GameRoutine_64dde0(a1, v9, v10);
    }
    else if ((v3 & 1) != 0) {
      GameRoutine_64df20(a1, *((_QWORD*)a2 + 2), *((_QWORD*)a2 + 1));
    }
    else {
      v5 = *(_QWORD*)a2;
      v6 = *((_QWORD*)a2 + 2);
      *(_QWORD*)(a1 + 8) = *((_QWORD*)a2 + 1);
      *(_QWORD*)(a1 + 16) = v6;
      *(_QWORD*)a1 = v5;
    }
    v11 = (_QWORD*)(a1 + 24);
    v12 = a2[24];
    if ((*(_BYTE*)(a1 + 24) & 1) != 0) {
      v15 = (v12 & 1) == 0;
      v16 = v12 >> 1;
      if (v15) {
        v17 = a2 + 25;
      }
      else {
        v17 = *((unsigned __int8**)a2 + 5);
      }
      if (v15) {
        v18 = v16;
      }
      else {
        v18 = *((_QWORD*)a2 + 4);
      }
      GameRoutine_64dde0(v11, v17, v18);
    }
    else if ((v12 & 1) != 0) {
      GameRoutine_64df20(v11, *((_QWORD*)a2 + 5), *((_QWORD*)a2 + 4));
    }
    else {
      v13 = *((_QWORD*)a2 + 3);
      v14 = *((_QWORD*)a2 + 5);
      *(_QWORD*)(a1 + 32) = *((_QWORD*)a2 + 4);
      *(_QWORD*)(a1 + 40) = v14;
      *v11 = v13;
    }
    v19 = (_QWORD*)(a1 + 48);
    v20 = a2[48];
    if ((*(_BYTE*)(a1 + 48) & 1) != 0) {
      v23 = (v20 & 1) == 0;
      v24 = v20 >> 1;
      if (v23) {
        v25 = a2 + 49;
      }
      else {
        v25 = *((unsigned __int8**)a2 + 8);
      }
      if (v23) {
        v26 = v24;
      }
      else {
        v26 = *((_QWORD*)a2 + 7);
      }
      GameRoutine_64dde0(v19, v25, v26);
    }
    else if ((v20 & 1) != 0) {
      GameRoutine_64df20(v19, *((_QWORD*)a2 + 8), *((_QWORD*)a2 + 7));
    }
    else {
      v21 = *((_QWORD*)a2 + 6);
      v22 = *((_QWORD*)a2 + 8);
      *(_QWORD*)(a1 + 56) = *((_QWORD*)a2 + 7);
      *(_QWORD*)(a1 + 64) = v22;
      *v19 = v21;
    }
    v27 = (_QWORD*)(a1 + 72);
    v28 = a2[72];
    if ((*(_BYTE*)(a1 + 72) & 1) != 0) {
      v31 = (v28 & 1) == 0;
      v32 = v28 >> 1;
      if (v31) {
        v33 = a2 + 73;
      }
      else {
        v33 = *((unsigned __int8**)a2 + 11);
      }
      if (v31) {
        v34 = v32;
      }
      else {
        v34 = *((_QWORD*)a2 + 10);
      }
      GameRoutine_64dde0(v27, v33, v34);
    }
    else if ((v28 & 1) != 0) {
      GameRoutine_64df20(v27, *((_QWORD*)a2 + 11), *((_QWORD*)a2 + 10));
    }
    else {
      v29 = *((_QWORD*)a2 + 9);
      v30 = *((_QWORD*)a2 + 11);
      *(_QWORD*)(a1 + 80) = *((_QWORD*)a2 + 10);
      *(_QWORD*)(a1 + 88) = v30;
      *v27 = v29;
    }
    v35 = (_QWORD*)(a1 + 96);
    v36 = a2[96];
    if ((*(_BYTE*)(a1 + 96) & 1) != 0) {
      v39 = (v36 & 1) == 0;
      v40 = v36 >> 1;
      if (v39) {
        v41 = a2 + 97;
      }
      else {
        v41 = *((unsigned __int8**)a2 + 14);
      }
      if (v39) {
        v42 = v40;
      }
      else {
        v42 = *((_QWORD*)a2 + 13);
      }
      GameRoutine_64dde0(v35, v41, v42);
    }
    else if ((v36 & 1) != 0) {
      GameRoutine_64df20(v35, *((_QWORD*)a2 + 14), *((_QWORD*)a2 + 13));
    }
    else {
      v37 = *((_QWORD*)a2 + 12);
      v38 = *((_QWORD*)a2 + 14);
      *(_QWORD*)(a1 + 104) = *((_QWORD*)a2 + 13);
      *(_QWORD*)(a1 + 112) = v38;
      *v35 = v37;
    }
  }
  return a1;
}

__int64 GameHr_14b7200(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64** v6;
  __int64** v7;
  __int64* v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  int v14;
  int v15;
  __int64 v16;
  int v17;
  __int64 v18;
  __int64 v19;
  _UNKNOWN** v20;

  result = GameRoutine_1536e70(5);
  if ((result & 1) == 0) {
    return result;
  }
  if (*(_QWORD*)(a1 + 16) != 0) {
    v4 = *(_QWORD*)(GameData_21c96e8 + 8);
    v5 = *(_DWORD*)(v4 + 56);
    v6 = *(__int64***)(v4 + 8);
    v7 = *(__int64***)(v4 + 16);
    if (v5 < 0) {
      for (; v6 != v7; ++v6) {
        v8 = *v6;
        if ((*v6)[12] == 0 && v8[69] == 0) {
          goto LABEL_13;
        }
      }
    }
    else if (v6 != v7) {
      while (1) {
        v9 = *v6++;
        v8 = v9;
        if (*((_DWORD*)v9 + 21) == v5) {
          break;
        }
        if (v6 == v7) {
          goto LABEL_9;
        }
      }
    LABEL_13:
      result = *v8;
      goto LABEL_14;
    }
  LABEL_9:
    result = GameRoutine_13305c0(result, v3);
  LABEL_14:
    if (result == *(_QWORD*)a1) {
      return result;
    }
    GameRoutine_14b8500(a1);
  }
  v20 = (_UNKNOWN**)&GameData_1ac4924;
  v19 = GameRoutine_7a86e0(&GameData_1ac4924);
  if (GameData_21caab0 == 0 ||
      (v10 = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48), &v19)) ==
          0 ||
      *(_DWORD*)(v10 + 32) == 0) {
    v20 = (_UNKNOWN**)&GameData_1aa2459;
    v11 = GameRoutine_7a86e0(&GameData_1aa2459);
    v12 = GameData_21caab0;
    v19 = v11;
    if (GameData_21caab0 != 0) {
      v13 = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48), &v19);
      if (v13 != 0) {
        v12 = *(_DWORD*)(v13 + 32);
      }
      else {
        v12 = 0;
      }
    }
    v14 = *(_DWORD*)(a1 + 36);
    v20 = &GameData_1afe67f;
    v15 = v14 + v12;
    v16 = GameRoutine_7a86e0(&GameData_1afe67f);
    v17 = GameData_21caab0;
    v19 = v16;
    if (GameData_21caab0 != 0) {
      v18 = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48), &v19);
      if (v18 != 0) {
        v17 = *(_DWORD*)(v18 + 32);
      }
      else {
        v17 = 0;
      }
    }
    if (v17 >= v15) {
      v17 = v15;
    }
    *(_DWORD*)(a1 + 36) = v17;
    if (v14 < v17 && GameData_2241720 != 0) {
      GameRoutine_17cc7d0(GameData_2241720, "MID_Sys_InfoTelop_Recover_Blade",
                          0, 0, 0, 0);
    }
  }
  v20 = (_UNKNOWN**)&GameData_1ac4924;
  v19 = GameRoutine_7a86e0(&GameData_1ac4924);
  return GameRoutine_716d80(&v19, 1);
}

__int64 GameHr_14b7d00(__int64 result)
{
  __int64 v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  bool v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;

  v1 = *(_QWORD*)(*(_QWORD*)(*GameData_212caf0[0] + 64) +
                  8LL * *(int*)(result + 32));
  if (v1 != 0) {
    *(_QWORD*)(result + 16) = v1;
    v2 = (__int64*)result;
    v3 = GameRoutine_13300a0(*(_QWORD*)(v1 + 40));
    *v2 = v3;
    v4 = v3;
    v5 = GameData_212c790;
    v6 = *(_BYTE*)(v3 + 176) == 3 && *(_BYTE*)(v3 + 112) == 0;
    if (v6 || (GameRoutine_1334160(*(_QWORD*)(GameData_21c9700 + 8), v3),
               v4 = *v2, *v2 != 0)) {
      v7 = *(_QWORD*)(*v5 + 8);
      v8 = *(_QWORD*)(v7 + 8);
      v9 = *(_QWORD*)(v7 + 16);
      while (v8 != v9) {
        if (**(_QWORD**)v8 == v4) {
          v10 = *(_QWORD*)(*(_QWORD*)v8 + 96LL);
          if (v10 != 0 && *(_BYTE*)(v10 + 32) == 1) {
            GameRoutine_13485a0();
            break;
          }
        }
        v8 += 8;
      }
    }
    v11 = *(_QWORD*)(v1 + 56);
    if (*v5 != 0) {
      GameRoutine_1347b30(*(_QWORD*)(*v5 + 8), *v2, v11);
      v11 = *(_QWORD*)(v1 + 56);
    }
    if (v11 == 0 || (v12 = *(_QWORD*)(*v5 + 8), v13 = *(__int64**)(v12 + 8),
                     v14 = *(__int64**)(v12 + 16), v13 == v14)) {
    LABEL_20:
      v2[1] = 0;
    }
    else {
      while (1) {
        v16 = *v13++;
        v15 = v16;
        if (*(_QWORD*)(v16 + 96) == v11) {
          break;
        }
        if (v13 == v14) {
          goto LABEL_20;
        }
      }
      v2[1] = v15;
      GameRoutine_133dba0(v15, 5);
    }
    return GameRoutine_14b8500(v2);
  }
  return result;
}

__int64 GameHr_14b8ca0(__int64 a1)
{
  char v2;
  __int64* v3;
  long double v4;
  long double v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v13;
  int v14;

  v2 = (**(__int64 (***)(__int64))a1)(a1);
  if ((v2 & 1) != 0) {
    v3 = *(__int64**)(a1 + 56);
    v14 = 1106247680;
    GameRoutine_14a1cc0(v3, 1.0);
    v6 = (_QWORD*)GameData_224b6a0;
    if (GameData_224b6a0 >= (unsigned __int64)GameData_224b6a8) {
      v9 = GameRoutine_14a36c0(&GameData_224b698, (__int64*)(a1 + 56), &v14);
    }
    else {
      v7 = *(_QWORD*)(a1 + 56);
      v8 = *(_QWORD*)(a1 + 64);
      if (v8 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                                  memory_order_relaxed);
        *v6 = v7;
        v6[1] = v8;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                                  memory_order_relaxed);
        v6[2] = 0x41F0000000000000LL;
        if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
          GameRoutine_1a09c50();
        }
        v9 = (__int64)(v6 + 3);
      }
      else {
        *(_QWORD*)GameData_224b6a0 = v7;
        v6[1] = 0;
        v9 = (__int64)(v6 + 3);
        v6[2] = 0x41F0000000000000LL;
      }
    }
    v13 = 0;
    GameData_224b6a0 = v9;
    if (*(_BYTE*)(a1 + 32) == 1) {
      v10 = *(_QWORD*)(a1 + 8);
      v11 = a1 + 8;
      *(_QWORD*)&v4 = 0;
    }
    else {
      if (*(float*)(a1 + 16) <= 0.0) {
        if (((*(__int64 (**)(__int64, int*, __int64))(
                 *(_QWORD*)(a1 + 8) + 8LL))(a1 + 8, &v13, a1 + 40) &
             1) != 0) {
          (*(void (**)(__int64))(*(_QWORD*)(a1 + 8) + 16LL))(a1 + 8);
          v10 = *(_QWORD*)(a1 + 8);
          LODWORD(v5) = v13;
          v11 = a1 + 8;
        LABEL_14:
          (*(void (**)(__int64, long double, long double))(v10 + 24))(v11, v4,
                                                                      v5);
          *(_QWORD*)(a1 + 16) = 0;
          *(_WORD*)(a1 + 32) = 256;
        }
        *(_DWORD*)(a1 + 52) = 0;
        return v2 & 1;
      }
      (*(void (**)(__int64))(*(_QWORD*)(a1 + 8) + 16LL))(a1 + 8);
      v10 = *(_QWORD*)(a1 + 8);
      v11 = a1 + 8;
    }
    *(_QWORD*)&v5 = 0;
    goto LABEL_14;
  }
  return v2 & 1;
}

__int64 GameHr_14cd7c0(__int64 a1)
{
  __int64 v1;
  __int64* v2;
  __int64* v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int128 v10;
  __int128 v11;
  __int128 v12;
  __int128 v13;
  __int128 v14;
  __int128 v15;
  __int128 v16;
  const char* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned int v23;
  __int64 v24;
  __int128 v26;
  _QWORD v27[8];
  long double v28;
  __int128 v29;
  __int128 v30;
  __int128 v31;
  __int64 v32;
  __int64 v33;

  *(_DWORD*)(a1 + 152) = 0;
  v1 = *(_QWORD*)(*GameData_212c780 + 8);
  v2 = *(__int64**)(v1 + 48);
  v3 = *(__int64**)(v1 + 56);
  if (v2 != v3) {
    v4 = GameData_212c638;
    v5 = (__int64*)GameData_212c540;
    do {
      v6 = *v2;
      if (*(_BYTE*)(*v2 + 176) == 1 && *(float*)(v6 + 288) != 0.0 &&
          *(_BYTE*)(v6 + 115) == 1) {
        v7 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v4 + 32LL) - 8LL);
        v9 = *(_QWORD*)(v7 + 24);
        v8 = *(_QWORD*)(v7 + 32);
        if (v8 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                                    memory_order_relaxed);
        }
        v28 = ((long double (*)(__int64)) * (_QWORD*)(*(_QWORD*)v9 + 16LL))(v9);
        v29 = v10;
        v30 = v11;
        v31 = v12;
        *(_OWORD*)v27 =
            ((long double (*)(__int64)) * (_QWORD*)(*(_QWORD*)v9 + 24LL))(v9);
        *(_OWORD*)&v27[2] = v13;
        *(_OWORD*)&v27[4] = v14;
        *(_OWORD*)&v27[6] = v15;
        GameRoutine_a6c440(v6 + 32, &v28, v27);
        if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
          v26 = v16;
          (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
          GameRoutine_1a09c50();
          v16 = v26;
        }
        if (*((float*)&v16 + 2) <= 0.0 && *(float*)&v16 >= 0.0 &&
            *(float*)&v16 <= 1920.0 && *((float*)&v16 + 1) >= 0.0 &&
            *((float*)&v16 + 1) <= 1080.0) {
          v18 = "Gmap_Spot_Crash_Sand";
          if (*(_BYTE*)(v6 + 114) != 0) {
            v18 = "Gmap_Spot_Crash_Splash";
          }
          *(_OWORD*)&v28 = 0u;
          *(_QWORD*)&v29 = v18;
          v19 = *GameData_212de58[0];
          DWORD2(v29) = 5;
          *(_QWORD*)&v30 = *(_QWORD*)(v6 + 32);
          v20 = *(_QWORD*)(v6 + 40);
          v31 = GameData_1a837f0;
          *((_QWORD*)&v30 + 1) = v20;
          v21 = v5[1];
          v32 = *v5;
          v33 = v21;
          v22 = GameRoutine_bc6460(v19, &v28, 1);
          GameRoutine_14a10d0(&v28, v22, v23, (__int64)&GameData_1a9f09e);
          v24 = *((_QWORD*)&v28 + 1);
          if (*((_QWORD*)&v28 + 1) != 0 &&
              atomic_fetch_add(
                  (atomic_ullong* volatile)(*((_QWORD*)&v28 + 1) + 8LL),
                  0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
            GameRoutine_1a09c50();
          }
        }
      }
      ++v2;
    } while (v2 != v3);
  }
  return GameRoutine_14cd5c0();
}

float GameHr_14d3890(__int64 a1)
{
  __int64 v1;
  char v3;
  __int128 v4;
  __int64 v5;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int128* v12;
  float result;

  v1 = *(_QWORD*)(a1 + 32);
  v3 = GameRoutine_13261c0(v1);
  v5 = *(_QWORD*)(v1 + 152);
  if (v3 == 6 && v5 != 0) {
    *(_DWORD*)(v5 + 64) = 1;
    v7 = *(__int64**)(v5 + 8);
    v8 = *v7;
    *(_QWORD*)(v5 + 72) = *v7;
    v9 = *(_QWORD*)(a1 + 32);
    v10 = GameRoutine_14d2d00(v8);
    v11 = GameRoutine_1347cc0(v9, v10);
    if (v11 != 0) {
      *(_QWORD*)(a1 + 48) = v11;
      v12 = &GameData_21c9630;
      if (GameData_21caab0 != 0 && *(_DWORD*)(GameData_21caab0 + 60) == 3) {
        v12 = &GameData_21c9610;
      }
      *(_DWORD*)(v11 + 64) = *(_DWORD*)v12;
      *(_DWORD*)(v11 + 68) = *((_DWORD*)v12 + 1);
      v4 = *(_OWORD*)(v11 + 64);
      *((_QWORD*)&v4 + 1) = *((unsigned int*)v12 + 2);
      *(_OWORD*)(v11 + 64) = v4;
    }
  }
  LODWORD(result) = v4;
  return result;
}

__int64 GameHr_15154c0()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64** v7;
  __int64** v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;

  v0 = *(_QWORD*)(GameData_21f1648 + 8);
  GameRoutine_a2d080(GameData_2265ef8);
  v1 = GameData_21f1648;
  *(_BYTE*)(*(_QWORD*)(GameData_21f1648 + 8) + 40LL) = 1;
  GameRoutine_15317a0(*(_QWORD*)(v1 + 8) + 40LL);
  *(_BYTE*)(v0 + 56) = 0;
  if (GameData_21caab0 != 0) {
    *(_DWORD*)(GameData_21caab0 + 92) &= 0xFFFFFBE3;
  }
  GameRoutine_125d3e0(GameData_21c9718);
  v2 = *GameData_212d728[0];
  *(_BYTE*)(*(_QWORD*)(*GameData_212d728[0] + 8) + 5835LL) = 1;
  v3 = GameRoutine_175b880(*(_QWORD*)(v2 + 8) + 5800LL);
  v5 = *(_QWORD*)(GameData_21c96e8 + 8);
  v6 = *(_DWORD*)(v5 + 56);
  v7 = *(__int64***)(v5 + 8);
  v8 = *(__int64***)(v5 + 16);
  if (v6 < 0) {
    for (; v7 != v8; ++v7) {
      v9 = *v7;
      if ((*v7)[12] == 0 && v9[69] == 0) {
        goto LABEL_13;
      }
    }
  }
  else if (v7 != v8) {
    while (1) {
      v10 = *v7++;
      v9 = v10;
      if (*((_DWORD*)v10 + 21) == v6) {
        break;
      }
      if (v7 == v8) {
        goto LABEL_9;
      }
    }
  LABEL_13:
    v11 = *v9;
    return GameRoutine_1328d60(v11);
  }
LABEL_9:
  v11 = GameRoutine_13305c0(v3, v4);
  return GameRoutine_1328d60(v11);
}

__int64 GameHr_1515810(__int64* a1, __int64 a2, __int64 a3)
{
  __int64* v6;
  _QWORD* v7;
  __int64 v8;
  int v9;
  __int64 v10;
  int v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 result;
  unsigned int v16;
  __int16 v17;
  __int16 v18;
  int v19;
  __int16 v20;
  int v21;

  v6 = GameData_21316e0[0];
  a1[1] = 0;
  v7 = a1 + 1;
  *((_DWORD*)a1 + 4) = 0;
  *a1 = (__int64)(v6 + 2);
  if (GameData_21ee260 != 0) {
    v8 = GameData_21ee260 + 8;
  }
  else {
    v8 = GameData_212cf60;
  }
  v18 = *(_WORD*)v8;
  v9 = *(_DWORD*)(v8 + 2);
  v21 = 0;
  v19 = v9;
  v20 = *(_WORD*)(v8 + 6) + 6;
  GameRoutine_70d7a0(&v18);
  v10 = GameRoutine_70ea50(v8, &v18);
  a1[4] = a2;
  *((_BYTE*)a1 + 42) = 0;
  *(__int64*)((char*)a1 + 44) = 0;
  a1[7] = 0;
  a1[8] = 0;
  a1[9] = 0;
  a1[10] = 0;
  *((_BYTE*)a1 + 88) = 0;
  *((_WORD*)a1 + 20) = 256;
  *a1 = (__int64)GameData_2049620;
  v11 = *(unsigned __int8*)(GameRoutine_1515ac0(v10) + 48);
  v12 = *((_DWORD*)a1 + 7);
  *v7 = *(__int64*)((char*)a1 + 20);
  v13 = *a1;
  *((_DWORD*)a1 + 4) = v12;
  v14 = 40;
  if (v11 == 0) {
    v14 = 16;
  }
  result = (*(__int64 (**)(__int64*))(v13 + v14))(a1);
  if ((_DWORD)result != 0) {
    if ((int)result < 1) {
      v17 = *((_WORD*)a1 + 7);
      v16 = -(int)result / 0x18u;
      *((_WORD*)a1 + 6) -= v16;
      LOWORD(v16) = v17 + result + 24 * v16;
    }
    else {
      *((_WORD*)a1 + 6) += (unsigned int)result / 0x18;
      v16 = *((unsigned __int16*)a1 + 7) + (unsigned int)result % 0x18;
    }
    *((_WORD*)a1 + 7) = v16;
    *((_DWORD*)a1 + 4) = 0;
    result = GameRoutine_70d7a0(v7);
  }
  *((_BYTE*)a1 + 41) = v11 == 0;
  *(_QWORD*)(*(_QWORD*)(a1[4] + 160) + 8LL) = a3;
  return result;
}

__int64 GameHr_1516440(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  _QWORD* v7;
  int v8;
  __int64 v9;
  unsigned int v10;
  __int16 v11;
  __int64 v12;
  __int64 v13;

  v1 = result;
  if (*(_QWORD*)GameData_2130f48 != 0) {
    *(_BYTE*)(*(_QWORD*)GameData_2130f48 + 1688LL) = 1;
  }
  if (*(_BYTE*)(result + 88) == 1) {
    v2 = **(_QWORD**)(*(_QWORD*)(result + 32) + 160LL);
    v3 = *(_QWORD*)(v2 + 8);
    if (v3 != 0) {
      v4 = GameRoutine_1a0a690(*(_QWORD*)(v2 + 8), 95);
      if (v4 != 0) {
        v3 = v4 + 1;
      }
    }
    v13 = GameRoutine_7a7dc0(GameData_1aa9f0a, v3);
    result = GameRoutine_7a86e0(v13);
    v12 = result;
    if (GameData_21caab0 != 0) {
      result = GameRoutine_828800(GameData_21caab0 + 40, &v12, 1);
    }
  }
  if ((*(_BYTE*)(v1 + 40) & 1) == 0) {
    *(_QWORD*)(v1 + 64) = *(_QWORD*)(v1 + 56);
    if (GameData_21ee260 != 0) {
      v5 = (__int64*)(GameData_21ee260 + 8);
    }
    else {
      v5 = (__int64*)GameData_212cf60;
    }
    v6 = *v5;
    *(_DWORD*)(v1 + 28) = 0;
    *(_QWORD*)(v1 + 20) = v6;
    *(_WORD*)(v1 + 26) += 6;
    v7 = (_QWORD*)GameRoutine_70d7a0(v1 + 20);
    v8 = *(_DWORD*)(v1 + 28);
    *(_QWORD*)(v1 + 8) = *v7;
    v9 = *(_QWORD*)v1;
    *(_DWORD*)(v1 + 16) = v8;
    result = (*(__int64 (**)(__int64))(v9 + 16))(v1);
    if ((_DWORD)result != 0) {
      if ((int)result < 1) {
        v11 = *(_WORD*)(v1 + 14);
        v10 = -(int)result / 0x18u;
        *(_WORD*)(v1 + 12) -= v10;
        LOWORD(v10) = v11 + result + 24 * v10;
      }
      else {
        *(_WORD*)(v1 + 12) += (unsigned int)result / 0x18;
        v10 = *(unsigned __int16*)(v1 + 14) + (unsigned int)result % 0x18;
      }
      *(_WORD*)(v1 + 14) = v10;
      *(_DWORD*)(v1 + 16) = 0;
      result = GameRoutine_70d7a0(v1 + 8);
    }
    *(_BYTE*)(v1 + 42) = 0;
    *(_BYTE*)(v1 + 88) = 0;
  }
  return result;
}

bool GameHr_1516610(__int64 a1)
{
  _BOOL8 result;
  __int64 v3;

  if ((GameRoutine_1536e70(1) & 1) == 0) {
    return false;
  }
  result = false;
  if (*(_BYTE*)(a1 + 176) == 3 && (*(_BYTE*)(a1 + 112) & 1) == 0) {
    v3 = *(_QWORD*)(a1 + 280);
    return (v3 == 0 ||
            (*(unsigned __int8 (**)(__int64))(*(_QWORD*)v3 + 24LL))(v3) == 1 &&
                ((*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 280) + 112LL))(
                     *(_QWORD*)(a1 + 280)) &
                 1) != 0 ||
            *(_QWORD*)(a1 + 280) == 0 ||
            (unsigned __int8)GameRoutine_13261c0(a1) == 14) &&
           ((unsigned __int8)GameRoutine_13261c0(a1) == 10 ||
            (unsigned __int8)GameRoutine_13261c0(a1) == 14);
  }
  return result;
}

__int64 GameHr_1516de0(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  _QWORD* v7;
  unsigned __int64 v9;
  unsigned __int64 v10;
  _QWORD* v11;
  unsigned __int64 v12;
  __int64 v13;

  if (a2 == 0) {
    return 0;
  }
  v2 = *(_QWORD*)(a2 + 8);
  if (v2 != 0) {
    v3 = GameRoutine_1a0a690(v2, 95);
    if (v3 != 0) {
      v2 = v3 + 1;
    }
  }
  v4 = GameRoutine_7a86e0(v2);
  if (v4 == 0) {
    goto LABEL_11;
  }
  v5 = *(_QWORD*)(GameData_21c9ec0 + 96);
  if (v5 == 0 || *(_QWORD*)(GameData_21c9ec0 + 112) == 0) {
    goto LABEL_11;
  }
  v9 = v5 - 1;
  if ((v5 & (v5 - 1)) != 0) {
    v10 = v4;
    if (v4 >= v5) {
      v10 = v4 % v5;
    }
  }
  else {
    v10 = v9 & v4;
  }
  v7 = *(_QWORD**)(*(_QWORD*)(GameData_21c9ec0 + 88) + 8 * v10);
  if (v7 != nullptr) {
    v11 = (_QWORD*)*v7;
    if (*v7 != 0) {
      if ((v5 & v9) == 0) {
        while (1) {
          v13 = v11[1];
          if (v13 == v4) {
            if (v11[2] == v4) {
              goto LABEL_34;
            }
          }
          else if ((v13 & v9) != v10) {
            goto LABEL_11;
          }
          v11 = (_QWORD*)*v11;
          LODWORD(v7) = 0;
          if (v11 == nullptr) {
            return (unsigned int)v7;
          }
        }
      }
      while (1) {
        v12 = v11[1];
        if (v12 == v4) {
          if (v11[2] == v4) {
          LABEL_34:
            LODWORD(v7) = v11[3] != 0;
            return (unsigned int)v7;
          }
        }
        else {
          if (v12 >= v5) {
            v12 %= v5;
          }
          if (v12 != v10) {
            break;
          }
        }
        v11 = (_QWORD*)*v11;
        LODWORD(v7) = 0;
        if (v11 == nullptr) {
          return (unsigned int)v7;
        }
      }
    }
  LABEL_11:
    LODWORD(v7) = 0;
  }
  return (unsigned int)v7;
}

unsigned __int64 GameHr_1516f40(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v5;
  unsigned __int64 result;
  unsigned __int64 v7;
  unsigned __int64 v9;
  unsigned __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  unsigned __int64 v13;
  __int64 v14;

  v2 = *(_QWORD*)(a2 + 8);
  if (v2 != 0) {
    v5 = GameRoutine_1a0a690(v2, 95);
    if (v5 != 0) {
      v2 = v5 + 1;
    }
  }
  result = GameRoutine_7a86e0(v2);
  if (result != 0) {
    v7 = *(_QWORD*)(GameData_21c9ec0 + 96);
    if (v7 != 0 && *(_QWORD*)(GameData_21c9ec0 + 112) != 0) {
      v9 = v7 - 1;
      if ((v7 & (v7 - 1)) != 0) {
        v10 = result;
        if (result >= v7) {
          v10 = result % v7;
        }
      }
      else {
        v10 = v9 & result;
      }
      v11 = *(_QWORD**)(*(_QWORD*)(GameData_21c9ec0 + 88) + 8 * v10);
      if (v11 != nullptr) {
        v12 = (_QWORD*)*v11;
        if (v12 != nullptr) {
          if ((v7 & v9) == 0) {
            while (1) {
              v14 = v12[1];
              if (v14 == result) {
                if (v12[2] == result) {
                  goto LABEL_29;
                }
              }
              else if ((v14 & v9) != v10) {
                return result;
              }
              v12 = (_QWORD*)*v12;
              if (v12 == nullptr) {
                return result;
              }
            }
          }
          do {
            v13 = v12[1];
            if (v13 == result) {
              if (v12[2] == result) {
              LABEL_29:
                if (v12[3] != 0) {
                  *(_QWORD*)(a1 + 80) = a2;
                }
                return result;
              }
            }
            else {
              if (v13 >= v7) {
                v13 %= v7;
              }
              if (v13 != v10) {
                return result;
              }
            }
            v12 = (_QWORD*)*v12;
          } while (v12 != nullptr);
        }
      }
    }
  }
  return result;
}

__int64 GameHr_15170c0(__int64 a1, __int64 a2)
{
  __int64 result;
  __int64 v5;
  char v6;
  __int64 v7;
  unsigned int v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  result = GameRoutine_14d4a20(a1, a2);
  v5 = *(int*)(a2 + 20);
  v6 = *(_DWORD*)(a1 + 44);
  *(_DWORD*)(a2 + 20) = v5 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v5) = v6;
  v7 = *(int*)(a2 + 20);
  v8 = (unsigned int)(*(_DWORD*)(a1 + 64) - *(_DWORD*)(a1 + 56)) >> 3;
  *(_DWORD*)(a2 + 20) = v7 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v7) = v8;
  v9 = *(int*)(a2 + 20);
  LOBYTE(v8) = *(_BYTE*)(a1 + 88);
  *(_DWORD*)(a2 + 20) = v9 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v9) = v8;
  v10 = *(_QWORD**)(a1 + 80);
  if (v10 != nullptr) {
    v10 = (_QWORD*)*v10;
  }
  v11 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v11 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v11) = (_BYTE)v10;
  v12 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v12 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v12) = BYTE1(v10);
  v13 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v13 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v13) = BYTE2(v10);
  v14 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v14 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v14) = BYTE3(v10);
  v15 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v15 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v15) = BYTE4(v10);
  v16 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v16 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v16) = BYTE5(v10);
  v17 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v17 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v17) = BYTE6(v10);
  v18 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v18 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v18) = HIBYTE(v10);
  return result;
}

#pragma GCC visibility pop
