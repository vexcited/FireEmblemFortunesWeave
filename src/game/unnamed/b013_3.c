#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern char* GameData_1ff1ad8;

extern __int64 GameData_212bf68;

extern __int64* GameData_212c878[6];

extern int GameData_2167768;

extern __int64 GameData_2265ee0;

__int64 GameRoutine_177b500(_QWORD, _QWORD);

__int64 GameRoutine_1a09c70(_QWORD);

__int64 GameRoutine_1a09cc0(_QWORD, const char*, ...);

__int64 GameRoutine_1a0a4e0(_QWORD, _QWORD);

__int64 GameRoutine_1a0b940(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_609260(_QWORD, _QWORD, _QWORD);

void __attribute__((noreturn)) GameRoutine_60a1d0(_QWORD);

__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_844950(_QWORD, _QWORD);

__int64 GameRoutine_8450e0(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_91c600(_QWORD);

bool GameRoutine_f23ea0(__int64);

__int64 GameRoutine_f25050(__int64);

__int64 GameRoutine_f6bb90(__int64, __int64*, int, char, char);

__int64 GameHr_f0e0b0(__int64 a1, unsigned int a2)
{
  char* v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  char* v7;
  __int64 v8;
  char v9;
  char* v10;
  char* v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  char* v14;
  __int64 v15;
  unsigned __int64 v16;
  char* v17;
  __int64 v18;
  __int64 v19;
  char* v20;
  __int64 v21;
  __int128 v22;
  char* v23;
  __int64 v24;
  char* v25;
  __int64 result;
  __int128 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  char* v33;
  __int64 v34;
  unsigned __int64 v35;
  char* v36;
  __int64 v37;
  unsigned __int64 v38;
  char* v39;
  unsigned int v40;
  unsigned int v41;
  unsigned int v42;
  unsigned int v43;

  v4 = (&GameData_1ff1ad8)[2 * a2];
  v5 = GameRoutine_1a09c70(v4);
  if (v5 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_59;
  }
  v6 = v5;
  if (v5 >= 0x17) {
    if ((v5 | 7) == 0x17) {
      v8 = 26;
    }
    else {
      v8 = (v5 | 7) + 1;
    }
    v7 = (char*)GameRoutine_651b90(GameData_2265ee0, v8, 16, 0);
    v38 = v6;
    v39 = v7;
    v37 = v8 | 1;
  }
  else {
    LOBYTE(v37) = 2 * v5;
    v7 = (char*)&v37 + 1;
    if (v5 == 0) {
      goto LABEL_10;
    }
  }
  v5 = GameRoutine_1a0b940(v7, v4, v6);
LABEL_10:
  v7[v6] = 0;
  v9 = v37;
  v10 = v39;
  if ((v37 & 1) != 0) {
    v11 = v39;
  }
  else {
    v11 = (char*)&v37 + 1;
  }
  if ((v37 & 1) != 0) {
    v12 = v38;
  }
  else {
    v12 = (unsigned __int64)(unsigned __int8)v37 >> 1;
  }
  v13 = v12 + 6;
  if (v12 + 6 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_59;
  }
  if (v13 >= 0x17) {
    v15 = (v13 | 7) == 0x17 ? 26LL : (v13 | 7) + 1;
    v14 = (char*)GameRoutine_651b90(GameData_2265ee0, v15, 16, 0);
    v35 = v12 + 6;
    v36 = v14;
    v34 = v15 | 1;
  }
  else {
    v35 = 0;
    v36 = nullptr;
    v34 = (unsigned __int8)(2 * v13);
    if (v12 == 0) {
      v31 = 8;
      v32 = 0;
      v33 = nullptr;
      *(_WORD*)((char*)&v34 + 5) = 24936;
      *(_DWORD*)((char*)&v34 + 1) = 1886142815;
      v17 = (char*)&v31 + 1;
      goto LABEL_32;
    }
    v14 = (char*)&v34 + 1;
  }
  v5 = GameRoutine_1a0b940(v14, v11, v12);
  v16 = v12 + 4;
  strcpy(&v14[v12], "_Alpha");
  if (v12 + 4 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_59:
    GameRoutine_60a1d0(v5);
  }
  if (v16 > 0x16) {
    if ((v16 | 7) == 0x17) {
      v18 = 26;
    }
    else {
      v18 = (v16 | 7) + 1;
    }
    v17 = (char*)GameRoutine_651b90(GameData_2265ee0, v18, 16, 0);
    v32 = v12 + 4;
    v33 = v17;
    v31 = v18 | 1;
  }
  else {
    v32 = 0;
    v33 = nullptr;
    v31 = (unsigned __int8)(2 * v16);
    v17 = (char*)&v31 + 1;
  }
  GameRoutine_1a0b940(v17, v11, v12);
LABEL_32:
  v19 = a1 + 32LL * a2;
  strcpy(&v17[v12], "_Add");
  if ((v34 & 1) != 0) {
    v20 = v36;
  }
  else {
    v20 = (char*)&v34 + 1;
  }
  v21 = *(_QWORD*)(GameRoutine_609260(*(_QWORD*)(a1 + 8) + 800LL, v20, 1) + 24);
  v22 = 0u;
  if (v21 != 0) {
    GameRoutine_1a09cc0(v21, "%f,%f,%f,%f", &v43, &v42, &v41, &v40);
    *(_QWORD*)&v22 = __PAIR64__(v42, v43);
    *((_QWORD*)&v22 + 1) = __PAIR64__(v40, v41);
  }
  v23 = v33;
  v24 = *(_QWORD*)(a1 + 8) + 800LL;
  *(_OWORD*)(v19 + 16) = v22;
  if ((v31 & 1) != 0) {
    v25 = v23;
  }
  else {
    v25 = (char*)&v31 + 1;
  }
  result = *(_QWORD*)(GameRoutine_609260(v24, v25, 1) + 24);
  v27 = 0u;
  if (result != 0) {
    result = GameRoutine_1a09cc0(result, "%f,%f,%f,%f", &v43, &v42, &v41, &v40);
    *(_QWORD*)&v27 = __PAIR64__(v42, v43);
    *((_QWORD*)&v27 + 1) = __PAIR64__(v40, v41);
  }
  *(_OWORD*)(v19 + 32) = v27;
  if ((v31 & 1) != 0 && v33 != nullptr) {
    v28 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v28 = 56;
    }
    result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v28, v33);
  }
  if ((v34 & 1) != 0 && v36 != nullptr) {
    v29 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v29 = 56;
    }
    result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v29, v36);
  }
  if ((v9 & 1) != 0 && v10 != nullptr) {
    v30 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v30 = 56;
    }
    return GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v30, v10);
  }
  return result;
}

__int64 GameHr_f25920(__int64 a1, int a2, int a3, unsigned int a4, __int16 a5)
{
  int v10;
  __int64 v11;
  unsigned int v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v17;
  int v18;

  v10 = GameRoutine_f25050(a1);
  if (v10 != 4) {
    if (a4 == v10) {
      v13 = (__int64)(a2 + 32 * a3) >> 5;
      if ((a5 & 0x100) != 0) {
        v17 = a1 + 13256LL * a4 + 4 * v13;
        if ((_BYTE)a5 != 0) {
          v18 = *(_DWORD*)(v17 + 13136);
        }
        else {
          v18 = *(_DWORD*)(v17 + 13008);
        }
        v15 = (v18 & (1 << a2)) != 0;
        goto LABEL_12;
      }
      v14 = a1 + 13256LL * a4 + 4 * v13;
      v12 = *(_DWORD*)(v14 + 13136) | *(_DWORD*)(v14 + 13008);
      goto LABEL_11;
    }
    goto LABEL_9;
  }
  v11 = a1 + 13256LL * (int)a4;
  if (a4 == 2 || a4 == 1) {
    v12 = *(_DWORD*)(*(_QWORD*)(v11 + 16) + 4LL * ((a2 + 32 * a3) >> 5) + 2248);
    goto LABEL_11;
  }
  if (a4 != 0) {
  LABEL_9:
    v15 = 0;
    goto LABEL_12;
  }
  v12 = *(_DWORD*)(*(_QWORD*)(v11 + 16) + 4LL * ((a2 + 32 * a3) >> 5) + 2120);
LABEL_11:
  v15 = (v12 >> a2) & 1;
LABEL_12:
  if (!GameRoutine_f23ea0(a1)) {
    v15 |= *(_DWORD*)(a1 + 13256LL * (int)a4 + 4LL * ((a2 + 32 * a3) >> 5) +
                      12880) >>
           a2;
  }
  return v15 & 1;
}

__int64 GameHr_f29950(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v4;

  v2 = *(_QWORD*)(a1 + 8);
  *(_DWORD*)(v2 + 114808) |= *(_DWORD*)(a2 + 8);
  v4 = GameRoutine_8450e0(v2 + 102472, (unsigned int)*(char*)(a2 + 1),
                          (unsigned int)*(char*)(a2 + 2));
  return GameRoutine_844950(v4, a2);
}

__int64 GameHr_f29d00(__int64 result, __int64 a2)
{
  __int64 v2;
  int v3;
  unsigned int v4;
  __int64 v6;

  v2 = *(_QWORD*)(result + 8);
  v3 = **(_DWORD**)(result + 16);
  v4 = *(_DWORD*)(a2 + 8);
  if (v3 < 0 || ((v4 >> v3) & 1) != 0) {
    *(_DWORD*)(v2 + 127152) |= v4;
    v6 = GameRoutine_8450e0(v2 + 114816, (unsigned int)*(char*)(a2 + 1),
                            (unsigned int)*(char*)(a2 + 2));
    return GameRoutine_844950(v6, a2);
  }
  return result;
}

__int64 GameHr_f29e60(__int64 result, __int64 a2)
{
  __int64 v2;
  int v3;
  unsigned int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _BYTE* v11;
  unsigned int v12;
  bool v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _BYTE* v17;
  unsigned int v18;
  bool v19;
  __int64 v21;

  v2 = *(_QWORD*)(result + 8);
  v3 = **(_DWORD**)(result + 16);
  v4 = *(_DWORD*)(a2 + 8);
  if (v3 < 0 || ((v4 >> v3) & 1) != 0) {
    v5 = 836;
    v6 = 0;
    v7 = *GameData_212c878[0];
    while (1) {
      if (((v4 >> v6) & 1) != 0) {
        v8 = *(_QWORD*)(v2 + 127192);
        if (v8 != 0) {
          v9 = *(unsigned __int16*)(v8 + v5 - 8);
          if (v9 == 0) {
            break;
          }
          v10 = *(_QWORD*)(*(_QWORD*)(v7 + 64) + 8 * v9);
          v11 = *(_BYTE**)(v10 + 192);
          v12 = *(unsigned __int8*)(v10 + 72);
          v13 = v11 == nullptr || v12 > 7;
          if (v13 || v11[105] == 0 || v11[104] == 2 || v11[250] != 28) {
            break;
          }
        }
      }
      if (((v4 >> (v6 | 1)) & 1) != 0) {
        v14 = *(_QWORD*)(v2 + 127192);
        if (v14 != 0) {
          v15 = *(unsigned __int16*)(v14 + v5);
          if (v15 == 0) {
            break;
          }
          v16 = *(_QWORD*)(*(_QWORD*)(v7 + 64) + 8 * v15);
          v17 = *(_BYTE**)(v16 + 192);
          v18 = *(unsigned __int8*)(v16 + 72);
          v19 = v17 == nullptr || v18 > 7;
          if (v19 || v17[105] == 0 || v17[104] == 2 || v17[250] != 28) {
            break;
          }
        }
      }
      v6 += 2;
      v5 += 16;
      if (v6 == 30) {
        return result;
      }
    }
    *(_DWORD*)(v2 + 127152) |= v4;
    v21 = GameRoutine_8450e0(v2 + 114816, (unsigned int)*(char*)(a2 + 1),
                             (unsigned int)*(char*)(a2 + 2));
    return GameRoutine_844950(v21, a2);
  }
  return result;
}

__int64 GameHr_f6e830(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  if (GameData_2167768 == 1) {
    v1 = *(_QWORD*)(result + 208);
    v2 = result;
    v3 = v1;
    result = GameRoutine_91c600(&v3);
    if (result != 0) {
      return GameRoutine_177b500(v2, v1);
    }
  }
  else if (GameData_2167768 == 0) {
    return GameRoutine_f6bb90(result, (__int64*)(result + 208), 0, 0, 0);
  }
  return result;
}

#pragma GCC visibility pop
