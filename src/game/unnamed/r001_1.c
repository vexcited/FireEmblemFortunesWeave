#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)

extern _DWORD GameData_1b36664[7];
extern _UNKNOWN GameData_1f8ec40;
extern __int64 GameData_212bf68;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c880[5];
extern __int64* GameData_212cea0;
extern __int64* GameData_212cfc0[10];
extern __int64* GameData_212cfd0[8];
extern __int64* GameData_212cff0[4];
extern _UNKNOWN* GameData_212d208;
extern __int64 GameData_212d220[5];
extern __int64 (*GameData_2177cb8)(_QWORD, char*);
extern __int64 GameData_21a60d0;
extern __int64 GameData_21ca2f8;
extern __int64 GameData_21ca300;
extern __int64 GameData_21cd0e8;
extern __int64 GameData_21cd128;
extern __int64 GameData_22030f8;
extern __int64 GameData_2265ee0;
__int64 GameRoutine_19f3aa0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a09c50(_QWORD);
__int64 GameRoutine_1a0a200(_QWORD);
__int64 GameRoutine_1a0a4e0(_QWORD, _QWORD);
__int64 GameRoutine_1a0b940(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);
_QWORD* GameRoutine_539f0(_QWORD* __return_ptr, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a1d0(_QWORD, _QWORD, _QWORD,
                                                  _QWORD, _QWORD, _QWORD,
                                                  _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
__int64 GameRoutine_6380e0(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_64a810(_QWORD);
__int64 GameRoutine_64be60();
__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6c51e0(__int64 result);
__int64 GameRoutine_6c6da0(_QWORD);
__int64 GameRoutine_6c6ec0(__int64);
__int64 GameRoutine_6c90c0(_QWORD);
__int64 GameRoutine_6c9ef0(_QWORD);
__int64 GameRoutine_6c9ff0(_QWORD, _QWORD);
__int64 GameRoutine_6cb490(_QWORD);
__int64 GameRoutine_6cbdc0(_QWORD*, _DWORD*, unsigned __int16*, int);
__int64 GameRoutine_6dd190(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6e8bc0(_QWORD, _QWORD);
bool GameRoutine_6e8e50(unsigned __int16*, __int64);
__int64 GameRoutine_6ea8c0(_QWORD, long double);
__int64 GameRoutine_6fc510(_QWORD);
__int64 GameRoutine_6fc7a0(_QWORD, _QWORD);
__int64 GameRoutine_710ea0(_QWORD);
__int64 GameRoutine_74d660(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_7545a0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD);
__int64 GameRoutine_779940(_QWORD, _QWORD);
__int64 GameRoutine_77a2e0(_QWORD);
__int64 GameRoutine_78e5d0(_QWORD);
__int64 GameRoutine_825040(_QWORD, _QWORD);
__int64 GameRoutine_825790(void);
__int64 GameRoutine_84edc0(_QWORD, _QWORD);
__int64 GameRoutine_a867a0(_QWORD);

__int64 GameHr_6478c0(__int64 a1)
{
  __int64 v1;
  int v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  _QWORD* v7;
  __int64 v8;
  __int64 result;
  _QWORD* v10;
  unsigned int v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  char* v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  char* v23;
  unsigned __int64 v24;
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
  unsigned __int64 v35;
  _BYTE* v36;
  char* v37;
  __int64 v38;
  _BYTE* v39;
  __int64 v40;
  char* v41;
  __int64 v42;
  _QWORD v43[2];
  char* v44;
  __int64 v45;
  int v46;
  int v47;
  __int64 v48;
  __int64 v49;
  _QWORD v50[4];
  _QWORD v51[2];
  unsigned __int64 v52;
  __int64 (*v53)();
  __int64 v54;
  _BYTE v55[256];
  _BYTE* v56;
  _QWORD v57[4];
  char v58[8];
  char v59;
  _QWORD v60[2];
  int v61;
  __int64 v62;
  __int64 v63;

  v1 = *(unsigned int*)(a1 + 13240);
  if ((unsigned int)v1 > 6) {
    v3 = 0;
  }
  else {
    v3 = GameData_1b36664[v1];
  }
  v45 = GameData_22030f8;
  v46 = v3;
  v47 = 2;
  v4 = *(_QWORD*)(a1 + 360);
  v48 = GameData_21a60d0;
  v49 = v4;
  GameRoutine_539f0(v51, &v45, 0);
  v5 = v51[0];
  v6 = (__int64*)GameData_212bf68;
  if (v51[0] != 0) {
    v7 = (_QWORD*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 32, 16, 0);
    v7[2] = 0;
    v7[3] = v5;
    *v7 = &GameData_1f8ec40;
    v7[1] = 0;
  }
  else {
    v7 = nullptr;
  }
  v8 = *(_QWORD*)(a1 + 400);
  v51[0] = 0;
  *(_QWORD*)(a1 + 392) = v5;
  *(_QWORD*)(a1 + 400) = v7;
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    GameRoutine_1a09c50(v8);
  }
  result = v51[0];
  v51[0] = 0;
  if (result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  v10 = *(_QWORD**)(a1 + 392);
  *(_QWORD*)(a1 + 416) = *(_QWORD*)(a1 + 408);
  if (v10[82] != v10[81]) {
    v11 = 1;
    v12 = 0;
    while (1) {
      v14 = *(_QWORD**)(a1 + 416);
      v13 = *(_QWORD*)(a1 + 424);
      if ((unsigned __int64)v14 >= v13) {
        v16 = *(_QWORD*)(a1 + 408);
        v17 = (char*)v14 - v16;
        v18 = ((__int64)v14 - v16) >> 4;
        v19 = v18 + 1;
        if ((unsigned __int64)(v18 + 1) >> 60 != 0) {
          GameRoutine_64a810(result);
        }
        v20 = v13 - v16;
        if (v20 >> 3 > v19) {
          v19 = v20 >> 3;
        }
        v21 = (unsigned __int64)v20 >= 0x7FFFFFFFFFFFFFF0LL
                  ? 0xFFFFFFFFFFFFFFFLL
                  : v19;
        if (v21 != 0) {
          if (v21 >> 60 != 0) {
            GameRoutine_60a210(result);
          }
          v22 = GameRoutine_651b90(*v6, 16 * v21, 16, 0);
        }
        else {
          v22 = 0;
        }
        v23 = &v17[v22];
        v24 = v22 + 16 * v21;
        v25 = (__int64)&v17[v22 + -16 * v18];
        *(_QWORD*)v23 = 0;
        *((_QWORD*)v23 + 1) = 0;
        v15 = (__int64)&v17[v22 + 16];
        GameRoutine_1a0b950(v25, v16, v17);
        *(_QWORD*)(a1 + 408) = v25;
        *(_QWORD*)(a1 + 416) = v15;
        *(_QWORD*)(a1 + 424) = v24;
        v6 = &GameData_2265ee0;
        if (v16 != 0) {
          v26 = 128;
          if (*(_QWORD*)(GameData_2265ee0 + 200) == 0) {
            v26 = 56;
          }
          GameRoutine_1a0a4e0(GameData_2265ee0 + v26, v16);
        }
      }
      else {
        *v14 = 0;
        v14[1] = 0;
        v15 = (__int64)(v14 + 2);
      }
      *(_QWORD*)(a1 + 416) = v15;
      *(_QWORD*)(v15 - 16) = *(_QWORD*)(v10[81] + 8 * v12);
      *(_QWORD*)(*(_QWORD*)(a1 + 416) - 8LL) = v10[84] + 16 * v12;
      v54 = 0;
      v56 = v55;
      v61 = 0;
      v58[0] = 0;
      v59 = 0;
      v50[0] = v11 - 1;
      v50[1] = 0;
      v50[2] = 6;
      v51[0] = v55;
      v51[1] = 256;
      v52 = 0;
      v53 = GameRoutine_64be60;
      v60[0] = "BackBuffers[{}]";
      v60[1] = "";
      v62 = 0;
      v63 = 1;
      v57[1] = 1;
      v57[2] = v50;
      v57[3] = 6;
      v57[0] = v51;
      v27 = GameRoutine_6380e0(v60, v57);
      if (v59 == 1) {
        v27 = GameRoutine_1a0a200(v58);
      }
      v35 = v52;
      if (v52 >= 0xFFFFFFFFFFFFFFF7LL) {
        GameRoutine_60a1d0(v27, v28, v29, v30, v31, v32, v33, v34);
      }
      v36 = v56;
      if (v52 >= 0x17) {
        break;
      }
      v37 = (char*)v43 + 1;
      LOBYTE(v43[0]) = 2 * v52;
      if (v52 != 0) {
        goto LABEL_41;
      }
    LABEL_42:
      v39 = v56;
      v37[v35] = 0;
      if (v39 != v55 && v39 != nullptr) {
        v40 = 128;
        if (*(_QWORD*)(*v6 + 200) == 0) {
          v40 = 56;
        }
        GameRoutine_1a0a4e0(*v6 + v40, v39);
      }
      if ((v43[0] & 1) != 0) {
        v41 = v44;
      }
      else {
        v41 = (char*)v43 + 1;
      }
      result = GameData_2177cb8(*(_QWORD*)(*(_QWORD*)(a1 + 416) - 16LL), v41);
      if ((v43[0] & 1) != 0 && v44 != nullptr) {
        v42 = 128;
        if (*(_QWORD*)(*v6 + 200) == 0) {
          v42 = 56;
        }
        result = GameRoutine_1a0a4e0(*v6 + v42, v44);
      }
      v12 = v11++;
      if (v12 >= (__int64)(v10[82] - v10[81]) >> 3) {
        return result;
      }
    }
    if ((v52 | 7) == 0x17) {
      v38 = 26;
    }
    else {
      v38 = (v52 | 7) + 1;
    }
    v37 = (char*)GameRoutine_651b90(*v6, v38, 16, 0);
    v43[1] = v35;
    v44 = v37;
    v43[0] = v38 | 1;
  LABEL_41:
    GameRoutine_1a0b940(v37, v36, v35);
    goto LABEL_42;
  }
  return result;
}

__int64 GameHr_6d00c0(__int64 a1)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  unsigned int* v7;
  unsigned int* v8;
  __int64* v9;
  unsigned int v10;
  int v11;
  __int64 v12;
  char* v13;
  char* v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  char* v19;
  __int64 v20;
  __int64 v21;
  int v22;
  char* v23;
  int v24;
  int v25;
  int v27;
  int v28;
  __int64 result;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  bool v35;
  int v36;
  __int64 v37;
  int v38;
  char v39[4];
  char v40[4];

  GameRoutine_6c9ff0(a1, 0);
  v2 = *(unsigned __int8*)(a1 + 500);
  if (*(_BYTE*)(a1 + 500) != 0) {
    v3 = GameRoutine_6c9ef0(a1);
    *(_BYTE*)(a1 + 500) = v3 & (v3 >> 31);
    if (v2 != (unsigned __int8)(v3 & (v3 >> 31))) {
      v4 = *(unsigned __int16*)(a1 + 492);
      v39[0] = 0;
      v5 = GameRoutine_6dd190(a1, v39, 1);
      if (*(_WORD*)(a1 + 494) != 0 && v4 != *(unsigned __int16*)(a1 + 494)) {
        *(_WORD*)(a1 + 494) = 0;
      }
      if (v5 >= (__int16)v4) {
        v6 = (__int16)v4;
      }
      else {
        v6 = v5;
      }
      if ((v4 & 0x8000u) != 0) {
        v6 = 0;
      }
      if (v6 != *(__int16*)(a1 + 492)) {
        *(_WORD*)(a1 + 492) = v6;
      }
    }
  }
  GameRoutine_6cb490(a1);
  v7 = *(unsigned int**)(a1 + 1488);
  v8 = *(unsigned int**)(a1 + 1496);
  v9 = GameData_212c880[0];
  while (v7 != v8) {
    v10 = *v7;
    if ((*v7 & 0x7F000) != 0 &&
        *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v9 + 64) + 8LL * (v10 & 0xFFF)) +
                  104LL) != 9) {
      *v7 = v10 & 0xFFF80FFF;
    }
    ++v7;
  }
  GameRoutine_710ea0(a1 + 828);
  v11 = *(_DWORD*)(a1 + 1872);
  v12 = v11 & 0xFFF;
  if ((v11 & 0xFFF) == 0) {
    goto LABEL_53;
  }
  v13 = *(char**)(a1 + 608);
  v14 = *(char**)(a1 + 600);
  v15 = v13 - v14;
  if ((int)((unsigned __int64)(v13 - v14) >> 2) < 1) {
    v18 = 0;
    goto LABEL_48;
  }
  v16 = (v15 >> 2) & 7;
  if (((v15 >> 2) & 0x7FFFFFFF) - 1 < 7) {
    v17 = 0;
    v18 = 255;
    if (v16 == 0) {
      goto LABEL_48;
    }
    goto LABEL_44;
  }
  v19 = v14 + 18;
  v20 = 0;
  v21 = -8LL * ((v15 >> 5) & 0xFFFFFFF);
  v18 = 255;
  do {
    v20 -= 8;
    if (v18 >= *(v19 - 16)) {
      v18 = *(v19 - 16);
    }
    if (v18 >= *(v19 - 12)) {
      v18 = *(v19 - 12);
    }
    if (v18 >= *(v19 - 8)) {
      v18 = *(v19 - 8);
    }
    if (v18 >= *(v19 - 4)) {
      v18 = *(v19 - 4);
    }
    if (v18 >= *v19) {
      v18 = *v19;
    }
    if (v18 >= v19[4]) {
      v18 = v19[4];
    }
    if (v18 >= v19[8]) {
      v18 = v19[8];
    }
    v22 = v19[12];
    v19 += 32;
    if (v18 >= v22) {
      v18 = v22;
    }
  } while (v21 != v20);
  v17 = -v20;
  if (v16 != 0) {
  LABEL_44:
    v23 = &v14[4 * v17 + 2];
    do {
      v25 = *v23;
      v23 += 4;
      v24 = v25;
      if (v18 >= v25) {
        v18 = v24;
      }
      --v16;
    } while (v16 != 0);
  }
LABEL_48:
  if (v18 < *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v9 + 64) + 8 * v12) +
                                273LL) &&
      v14 != v13) {
    do {
      if ((*(_DWORD*)(a1 + 1872) & 0xFFF) == 0) {
        goto LABEL_69;
      }
      v32 = *v14;
      v33 = v14[1];
      if ((v33 | v32) < 0 ||
          ((v34 = *(_DWORD*)(a1 + 592)) > v32 ? (v35 = v34 <= v33)
                                              : (v35 = true),
           v35)) {
        LOBYTE(v36) =
            *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v9 + 64) +
                                 8LL * (*(_DWORD*)(a1 + 1872) & 0xFFF)) +
                      273LL);
        if ((_BYTE)v36 == 0) {
          goto LABEL_68;
        }
        v37 = -1;
      }
      else {
        LODWORD(v37) = v32 + v34 * v33;
        if ((v37 & 0x80000000) != 0) {
          v38 = 0;
        }
        else {
          v38 = *(char*)(*(_QWORD*)(a1 + 600) + 4LL * (unsigned int)v37 + 2);
        }
        v36 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v9 + 64) +
                                             8LL * (*(_DWORD*)(a1 + 1872) &
                                                    0xFFF)) +
                                  273LL);
        if (v38 >= v36) {
          goto LABEL_68;
        }
        v37 = (int)v37;
      }
      *(_BYTE*)(*(_QWORD*)(a1 + 600) + 4 * v37 + 2) = v36;
    LABEL_68:
      *(_BYTE*)(a1 + 805) = 0;
    LABEL_69:
      v14 += 4;
    } while (v14 != v13);
  }
LABEL_53:
  v27 = *(__int16*)(a1 + 492);
  v40[0] = 0;
  if (v27 <= 1) {
    v28 = 1;
  }
  else {
    v28 = v27;
  }
  result = GameRoutine_6dd190(a1, v40, 1);
  if (*(_WORD*)(a1 + 494) != 0 &&
      *(unsigned __int16*)(a1 + 494) != (unsigned __int16)v28) {
    *(_WORD*)(a1 + 494) = 0;
  }
  if ((int)result >= v28) {
    v30 = v28;
  }
  else {
    v30 = result;
  }
  if (v30 != *(__int16*)(a1 + 492)) {
    *(_WORD*)(a1 + 492) = v30;
  }
  v31 = *(_DWORD*)(a1 + 416);
  if ((v31 & 0x10000000) == 0) {
    *(_DWORD*)(a1 + 416) = v31 | 0x10000000;
    GameRoutine_6c51e0(a1);
    GameRoutine_6c6da0(a1);
    result = GameRoutine_6c6ec0(a1);
    *(_DWORD*)(a1 + 416) &= ~0x10000000u;
  }
  return result;
}

__int64 GameHr_74ae00(__int64 result, __int64 a2, unsigned __int16* a3,
                      __int64* a4, __int64* a5, int* a6, int* a7)
{
  __int64 v13;
  __int64* v14;
  unsigned __int8* v15;
  int v16;
  unsigned int v17;
  __int64 v20;
  __int64 v21;
  _BYTE* v22;
  int v24;
  __int64 v25;
  __int64 v26;
  unsigned __int8* v27;
  unsigned __int8* v28;
  __int64 v29;
  unsigned __int8* v30;
  int v31;
  __int64 v32;
  unsigned int v33;
  int v34;
  bool v36;
  bool v37;
  int v38;
  bool v39;
  bool v40;
  int v42;
  int v44;
  unsigned int v45;
  __int64 v46;
  int j;
  __int64 v48;
  int v49;
  int v50;
  __int64 v51;
  char v52;
  __int64 v53;
  int v54;
  unsigned int v55;
  __int64 v56;
  int i;
  __int64 v58;
  int v59;
  int v60;
  __int64 v61;
  char v62;
  __int64 v63;

  if (*a3 == 0) {
    return result;
  }
  v13 = result;
  v14 = GameData_212c878[0];
  v15 = *(unsigned __int8**)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *a3);
  v16 = v15[73];
  v17 = v15[72];
  if (v17 > 7 || ((1LL << v16) & 0x7DC) == 0) {
    if (v17 > 7 || v16 != 1) {
      return result;
    }
    if (v17 - 5 > 1) {
      if ((*((_BYTE*)a3 + 3) & 0x20) != 0) {
        return result;
      }
    }
    else {
      if ((*((_DWORD*)a3 + 1) & 0xF) * (unsigned int)v15[87] - 1 <
          *((unsigned __int8*)a3 + 2)) {
        return result;
      }
      if ((*((_BYTE*)a3 + 3) & 0x20) != 0) {
        return result;
      }
      result = GameRoutine_6c90c0(a2);
      if ((result & 1) == 0) {
        return result;
      }
    }
    result = GameRoutine_6e8bc0(a3, a2);
    if ((result & 1) == 0) {
      return result;
    }
  }
  else {
    result = GameRoutine_6e8e50(a3, a2);
    if ((result & 1) == 0) {
      return result;
    }
  }
  v20 = *a3;
  if (*a3 == 0) {
    v25 = 0;
    v24 = 0;
    goto LABEL_46;
  }
  v21 = *(_QWORD*)(*(_QWORD*)(*v14 + 64) + 8 * v20);
  v22 = *(_BYTE**)(v21 + 192);
  if (v22 == nullptr || *(unsigned __int8*)(v21 + 72) > 7u) {
    v24 = *(unsigned __int8*)(v21 + 92);
  }
  else {
    if (v22[105] != 0) {
      if (v22[104] == 2) {
        v26 = 0;
      }
      else {
        v26 = *(_QWORD*)(v21 + 192);
      }
    }
    else {
      v26 = 0;
    }
    if (v26 != 0) {
      v27 = (unsigned __int8*)(v26 + 278);
    }
    else {
      v27 = (unsigned __int8*)(v21 + 92);
    }
    v24 = *v27;
    if (v22[105] != 0) {
      if (v22[104] == 2) {
        v22 = nullptr;
      }
      goto LABEL_42;
    }
  }
  v22 = nullptr;
LABEL_42:
  v28 = (unsigned __int8*)(v21 + 93);
  v29 = *(_QWORD*)(v21 + 24);
  if (v22 != nullptr) {
    v30 = v22 + 279;
  }
  else {
    v30 = v28;
  }
  v31 = *v30;
  result = GameRoutine_84edc0(a2 + 1744, v29 + 8);
  v25 = *a3;
  LODWORD(v20) = result + v31;
LABEL_46:
  v32 = *(_QWORD*)(*(_QWORD*)(*v14 + 64) + 8 * v25);
  if (v32 != 0) {
    v33 = *(unsigned __int8*)(v32 + 72);
    v34 = *(unsigned __int8*)(v32 + 73);
    if (v33 <= 7 && v34 == 1) {
      if ((*(_BYTE*)(*(_QWORD*)(v13 + 8) + 2LL) & 0x10) != 0) {
        v54 = *a6;
        if ((int)v20 > *a6) {
          v54 = v20;
        }
        *a6 = v54;
        if ((_DWORD)v20 != 255) {
          v55 = v20 - v24;
          if ((int)v20 >= v24) {
            v56 = *a4;
            for (i = ((_BYTE)v55 + 1) & 7; i != 0; v56 |= v58) {
              v58 = 1LL << v24++;
              --i;
            }
            if (v55 >= 7) {
              v59 = -(int)v20;
              v60 = v24 + 7;
              do {
                v61 = (1LL << ((unsigned __int8)v60 - 2)) |
                      (1LL << ((unsigned __int8)v60 - 3)) |
                      (1LL << ((unsigned __int8)v60 - 4)) |
                      (1LL << ((unsigned __int8)v60 - 5)) |
                      (1LL << ((unsigned __int8)v60 - 6)) |
                      (1LL << ((unsigned __int8)v60 - 7)) | v56;
                v62 = v60 - 1;
                v63 = 1LL << v60;
                v60 += 8;
                v56 = v63 | (1LL << v62) | v61;
              } while (v59 + v60 != 8);
            }
            *a4 = v56;
          }
        }
      }
    }
    else {
      v36 = v33 <= 7 && v34 == 7;
      if (v36 || (v33 <= 7 ? (v37 = ((1LL << v34) & 0x7DC) == 0) : (v37 = true),
                  !v37)) {
        v38 = **(_DWORD**)(v13 + 8);
        if ((v38 & 0x200000) != 0 ||
            (v34 == 2 ? (v39 = (v38 & 0x800000) == 0) : (v39 = true),
             !v39 || (v34 == 7 ? (v40 = (v38 & 0x1000000) == 0) : (v40 = true),
                      !v40))) {
          if (v34 != 7 || (v38 & 0x20000000) == 0) {
            v42 = v38 & 0x40000000;
            if (v34 == 7 || v42 == 0) {
              v44 = *a7;
              if ((int)v20 > *a7) {
                v44 = v20;
              }
              *a7 = v44;
              if ((_DWORD)v20 != 255) {
                v45 = v20 - v24;
                if ((int)v20 >= v24) {
                  v46 = *a5;
                  for (j = ((_BYTE)v45 + 1) & 7; j != 0; v46 |= v48) {
                    v48 = 1LL << v24++;
                    --j;
                  }
                  if (v45 >= 7) {
                    v49 = -(int)v20;
                    v50 = v24 + 7;
                    do {
                      v51 = (1LL << ((unsigned __int8)v50 - 2)) |
                            (1LL << ((unsigned __int8)v50 - 3)) |
                            (1LL << ((unsigned __int8)v50 - 4)) |
                            (1LL << ((unsigned __int8)v50 - 5)) |
                            (1LL << ((unsigned __int8)v50 - 6)) |
                            (1LL << ((unsigned __int8)v50 - 7)) | v46;
                      v52 = v50 - 1;
                      v53 = 1LL << v50;
                      v50 += 8;
                      v46 = v53 | (1LL << v52) | v51;
                    } while (v49 + v50 != 8);
                  }
                  *a5 = v46;
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}

__int64 GameHr_74cc20(__int64 result, _DWORD* a2)
{
  __int64 v2;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  int v8;
  int v9;
  int v10;
  __int64 v11;
  int v12;

  v2 = *(_QWORD*)(result + 16);
  if (v2 != 0 && (*a2 & 0xFFF) != 0) {
    v4 = *(_QWORD*)(result + 8);
    v5 = GameData_212c880[0];
    v6 =
        *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a2 & 0xFFF));
    result = GameRoutine_6fc510(v6);
    if ((result & 1) == 0) {
      if (*(_BYTE*)(v6 + 273) == 0 ||
          ((v7 = *(_QWORD*)(*(_QWORD*)(*v5 + 64) + 8 * (*a2 & 0xFFFLL)),
            v8 = *(unsigned __int8*)(v7 + 104),
            v9 = *(unsigned __int8*)(v7 + 273), (unsigned int)(v8 - 5) >= 2)
               ? (v10 = 0)
               : (v10 = (*a2 >> 19) & 0x1F),
           v10 - ((*a2 >> 12) & 0x7F) + v9 >= 1)) {
        result = GameRoutine_6fc7a0(v6, v2 + 1744);
        if ((result & 1) != 0) {
          v11 = *(_QWORD*)(*(_QWORD*)(*v5 + 64) + 8LL * (*a2 & 0xFFF));
          if (*(_WORD*)(v11 + 256) != 0) {
            v12 = **(__int16**)(v11 + 264);
          }
          else {
            v12 = 0;
          }
          *(_DWORD*)(v4 + 16) += v12;
        }
      }
    }
  }
  return result;
}

__int64 GameHr_757f60(__int64 result, _DWORD* a2, unsigned int a3,
                      unsigned int a4, __int64 a5)
{
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v13;
  unsigned int v14;
  unsigned int v15;
  unsigned int v16;
  unsigned int v17;
  int v19;
  unsigned int v20;
  unsigned int v21;
  unsigned int v22;
  __int64 v23;
  int v24;
  int v25;
  __int64 v26;
  __int64 v27;
  char* v28;
  char* v29;
  char* i;
  int v31;
  int v32;
  __int64 v33;
  char v34;
  unsigned int v35;
  unsigned int v36;
  unsigned int v37;
  char v38;
  unsigned int v39;
  __int64 v40;
  unsigned __int8 v42;
  unsigned int v43;
  int v44;
  int v45;
  __int64 v46;
  int v47;
  __int64 v48;
  int v49;
  __int64 v50;
  unsigned int v51;
  int v52;
  __int64 v53;
  unsigned int v54;
  int v55;
  __int64 v56;
  unsigned int v57;
  __int64 v58;
  __int64 v59;
  unsigned int v61;
  __int64 v62;
  char v63;
  __int64 v64;
  __int64 v65;
  int v66;
  int v67;
  int v68;
  int v69;
  int v70;
  _QWORD v71[16];
  int v72;
  char* v73;
  char* v74;
  __int64 v75;

  if (result == 0) {
    return result;
  }
  v6 = GameData_212c880[0];
  v7 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a2 & 0xFFF));
  if (v7 == 0) {
    return result;
  }
  if (*(_BYTE*)(v7 + 250) != 28) {
    return result;
  }
  v8 = *(_QWORD*)(v7 + 680);
  if (v8 == 0) {
    return result;
  }
  v9 = *(_QWORD*)(v8 + 64);
  if (v9 == 0) {
    return result;
  }
  v59 = *(_QWORD*)(v7 + 680);
  v10 = *(_QWORD*)(result + 440);
  v13 = result;
  memset(v71, 0, sizeof(v71));
  if (v10 != 0) {
    v61 = *(unsigned __int8*)(v10 + 16);
    if (*(_BYTE*)(v10 + 16) != 0) {
      goto LABEL_18;
    }
    if (GameData_21ca300 != 0 && (*(_BYTE*)(GameData_21ca2f8 + 21) & 2) != 0) {
      v14 = *(unsigned __int8*)(GameData_21ca300 + 29);
      v15 = *(unsigned __int8*)(GameData_21ca300 + 31);
      v16 = *(unsigned __int8*)(GameData_21ca300 + 28);
      v17 = *(unsigned __int8*)(GameData_21ca300 + 30);
      if (v14 <= v15 && v16 <= v17) {
        v34 = *(_BYTE*)(GameData_21ca300 + 16);
        v35 = *(unsigned __int8*)(GameData_21ca300 + 18);
        v36 = v17 + 1;
        v37 = v17 - v16;
        v38 = *(_BYTE*)(GameData_21ca300 + 17);
        v39 = *(unsigned __int8*)(GameData_21ca300 + 19);
        result = ((_BYTE)v36 - (_BYTE)v16) & 3;
        v40 = *(_QWORD*)(GameData_21ca300 + 160) + 8LL;
        while (1) {
          v42 = v14 - v38;
          v43 = v16;
          if ((((_BYTE)v36 - (_BYTE)v16) & 3) != 0) {
            v44 = ((_BYTE)v36 - (_BYTE)v16) & 3;
            v43 = v16;
            do {
              if (v35 <= (unsigned __int8)(v43 - v34) || v39 <= v42) {
                v45 = 1 << v43;
                v46 = (v14 + (v43 >> 5)) & 0x7FFFFFF;
              }
              else {
                v45 = 1 << v43;
                v46 = (v14 + (v43 >> 5)) & 0x7FFFFFF;
                if ((*(_DWORD*)(v40 + 4LL * (unsigned int)v46) & (1 << v43)) !=
                    0) {
                  goto LABEL_38;
                }
              }
              *((_DWORD*)v71 + v46) |= v45;
            LABEL_38:
              ++v43;
              --v44;
            } while (v44 != 0);
          }
          if (v37 >= 3) {
            break;
          }
        LABEL_33:
          if (v14++ == v15) {
            goto LABEL_15;
          }
        }
        while (v35 > (unsigned __int8)(v43 - v34) && v39 > v42) {
          v49 = 1 << v43;
          v50 = (v14 + (v43 >> 5)) & 0x7FFFFFF;
          if ((*(_DWORD*)(v40 + 4LL * (unsigned int)v50) & (1 << v43)) == 0) {
            goto LABEL_53;
          }
        LABEL_54:
          v51 = v43 + 1;
          if (v35 <= (unsigned __int8)(v43 + 1 - v34) || v39 <= v42) {
            v52 = 1 << v51;
            v53 = (v14 + (v51 >> 5)) & 0x7FFFFFF;
          LABEL_59:
            *((_DWORD*)v71 + v53) |= v52;
            goto LABEL_60;
          }
          v52 = 1 << v51;
          v53 = (v14 + (v51 >> 5)) & 0x7FFFFFF;
          if ((*(_DWORD*)(v40 + 4LL * (unsigned int)v53) & (1 << v51)) == 0) {
            goto LABEL_59;
          }
        LABEL_60:
          v54 = v43 + 2;
          if (v35 <= (unsigned __int8)(v43 + 2 - v34) || v39 <= v42) {
            v55 = 1 << v54;
            v56 = (v14 + (v54 >> 5)) & 0x7FFFFFF;
          LABEL_65:
            *((_DWORD*)v71 + v56) |= v55;
            goto LABEL_66;
          }
          v55 = 1 << v54;
          v56 = (v14 + (v54 >> 5)) & 0x7FFFFFF;
          if ((*(_DWORD*)(v40 + 4LL * (unsigned int)v56) & (1 << v54)) == 0) {
            goto LABEL_65;
          }
        LABEL_66:
          v57 = v43 + 3;
          if (v35 <= (unsigned __int8)(v43 + 3 - v34) || v39 <= v42) {
            v47 = 1 << v57;
            v48 = (v14 + (v57 >> 5)) & 0x7FFFFFF;
          }
          else {
            v47 = 1 << v57;
            v48 = (v14 + (v57 >> 5)) & 0x7FFFFFF;
            if ((*(_DWORD*)(v40 + 4LL * (unsigned int)v48) & (1 << v57)) != 0) {
              goto LABEL_47;
            }
          }
          *((_DWORD*)v71 + v48) |= v47;
        LABEL_47:
          v43 += 4;
          if (v36 == v43) {
            goto LABEL_33;
          }
        }
        v49 = 1 << v43;
        v50 = (v14 + (v43 >> 5)) & 0x7FFFFFF;
      LABEL_53:
        *((_DWORD*)v71 + v50) |= v49;
        goto LABEL_54;
      }
    }
  LABEL_15:
    v19 = 3;
  }
  else {
    v19 = 9;
  }
  v61 = v19;
LABEL_18:
  if (*(_BYTE*)(v7 + 688) != 0) {
    v20 = 0;
    v58 = v9;
    do {
      result = GameRoutine_7545a0(&v70, &v69, v61, v9, a3, a4, v71);
      if ((result & 1) != 0) {
        v21 = a3;
        v22 = a4;
        v23 = v13;
        v62 = v13;
        v24 = v69;
        v25 = v70;
        v63 = v61;
        v66 = v70;
        v67 = v69;
        v64 = v59;
        v65 = v9;
        v68 = *(unsigned __int8*)(v9 + 417);
        v26 = *(_QWORD*)(a5 + 32);
        if (v26 == 0) {
          GameRoutine_60a310(0);
        }
        result = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v26 + 48LL))(
            v26, &v62);
        v27 = *(unsigned __int8*)(v9 + 417);
        if ((unsigned int)v27 < 2) {
          *((_DWORD*)v71 + ((v25 + 32 * v24) >> 5)) |= 1 << v25;
        }
        else {
          v72 = 0;
          v73 = nullptr;
          v74 = nullptr;
          v75 = 0;
          result = GameRoutine_74d660(&v72, v27, 0, 0);
          v28 = v73;
          v29 = v74;
          for (i = v73; i != v29;
               *((_DWORD*)v71 + ((v25 + v31 + 32 * (v24 + v32)) >> 5)) |=
               1 << (v25 + v31)) {
            v31 = *i;
            v32 = i[1];
            i += 4;
          }
          if (v28 != nullptr) {
            v74 = v28;
            v33 = 128;
            if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
              v33 = 56;
            }
            result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v33, v28);
          }
        }
        a4 = v22;
        a3 = v21;
        v13 = v23;
        v6 = GameData_212c880[0];
        v9 = v58;
      }
      ++v20;
    } while (v20 < *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v6 + 64) +
                                                  8LL * (*a2 & 0xFFF)) +
                                       688LL));
  }
  return result;
}

__int64 GameHr_771bd0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
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
  __int64 v15;
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
  _QWORD* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 result;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  _QWORD* v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;

  v3 = a1 + 24;
  v50 = v1;
  v51 = v2;
  v4 = *(_QWORD*)(v3 + 736);
  v5 = v3;
  v6 = GameData_212bf68;
  if (v4 != 0) {
    v7 = *(_QWORD*)GameData_212bf68;
    *(_QWORD*)(v3 + 744) = v4;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    GameRoutine_1a0a4e0(v7 + v8, v4);
  }
  v9 = *(_QWORD*)(v5 + 728);
  *(_QWORD*)(v5 + 728) = 0;
  if (v9 != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
      v10 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)v6 + v10, v9);
  }
  if ((*(_BYTE*)(v5 + 696) & 1) != 0) {
    v11 = *(_QWORD*)(v5 + 712);
    if (v11 != 0) {
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
        v12 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)v6 + v12, v11);
    }
  }
  v13 = *(_QWORD*)(v5 + 672);
  if (v13 != 0) {
    v14 = *(_QWORD*)v6;
    *(_QWORD*)(v5 + 680) = v13;
    v15 = 128;
    if (*(_QWORD*)(v14 + 200) == 0) {
      v15 = 56;
    }
    GameRoutine_1a0a4e0(v14 + v15, v13);
  }
  v16 = *(_QWORD*)(v5 + 648);
  if (v16 != 0) {
    v17 = *(_QWORD*)v6;
    *(_QWORD*)(v5 + 656) = v16;
    v18 = 128;
    if (*(_QWORD*)(v17 + 200) == 0) {
      v18 = 56;
    }
    GameRoutine_1a0a4e0(v17 + v18, v16);
  }
  v19 = *(_QWORD*)(v5 + 624);
  if (v19 != 0) {
    v20 = *(_QWORD*)v6;
    *(_QWORD*)(v5 + 632) = v19;
    v21 = 128;
    if (*(_QWORD*)(v20 + 200) == 0) {
      v21 = 56;
    }
    GameRoutine_1a0a4e0(v20 + v21, v19);
  }
  v22 = *(_QWORD*)(v5 + 600);
  if (v22 != 0) {
    v23 = *(_QWORD*)v6;
    *(_QWORD*)(v5 + 608) = v22;
    v24 = 128;
    if (*(_QWORD*)(v23 + 200) == 0) {
      v24 = 56;
    }
    GameRoutine_1a0a4e0(v23 + v24, v22);
  }
  if (*(_BYTE*)(v5 + 536) == 1) {
    if (*(_QWORD*)(v5 + 528) == 0) {
      goto LABEL_37;
    }
    v49 = *(_QWORD*)(v5 + 528);
    GameRoutine_a867a0(&v49);
    *(_QWORD*)(v5 + 528) = 0;
    *(_BYTE*)(v5 + 536) = 0;
  }
  v22 = *(_QWORD*)(v5 + 552);
  if (v22 != 0) {
    v25 = 128;
    if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
      v25 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)v6 + v25, v22);
    *(_QWORD*)(v5 + 552) = 0;
  }
LABEL_37:
  if (*(_BYTE*)(v5 + 440) == 1) {
    if (*(_QWORD*)(v5 + 432) == 0) {
      goto LABEL_44;
    }
    v49 = *(_QWORD*)(v5 + 432);
    GameRoutine_a867a0(&v49);
    *(_QWORD*)(v5 + 432) = 0;
    *(_BYTE*)(v5 + 440) = 0;
  }
  v22 = *(_QWORD*)(v5 + 456);
  if (v22 != 0) {
    v26 = 128;
    if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
      v26 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)v6 + v26, v22);
    *(_QWORD*)(v5 + 456) = 0;
  }
LABEL_44:
  if (*(_BYTE*)(v5 + 344) == 1) {
    if (*(_QWORD*)(v5 + 336) == 0) {
      goto LABEL_51;
    }
    v49 = *(_QWORD*)(v5 + 336);
    GameRoutine_a867a0(&v49);
    *(_QWORD*)(v5 + 336) = 0;
    *(_BYTE*)(v5 + 344) = 0;
  }
  v22 = *(_QWORD*)(v5 + 360);
  if (v22 != 0) {
    v27 = 128;
    if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
      v27 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)v6 + v27, v22);
    *(_QWORD*)(v5 + 360) = 0;
  }
LABEL_51:
  if (*(_BYTE*)(v5 + 248) == 1) {
    if (*(_QWORD*)(v5 + 240) == 0) {
      goto LABEL_58;
    }
    v49 = *(_QWORD*)(v5 + 240);
    GameRoutine_a867a0(&v49);
    *(_QWORD*)(v5 + 240) = 0;
    *(_BYTE*)(v5 + 248) = 0;
  }
  v22 = *(_QWORD*)(v5 + 264);
  if (v22 != 0) {
    v28 = 128;
    if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
      v28 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)v6 + v28, v22);
    *(_QWORD*)(v5 + 264) = 0;
  }
LABEL_58:
  v29 = *(_QWORD*)(v5 + 80);
  if (v29 == 0) {
    goto LABEL_73;
  }
  v30 = *(_QWORD*)(v5 + 88);
  if (v29 == v30) {
  LABEL_70:
    v35 = 128;
    if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
      v35 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)v6 + v35, v29);
    goto LABEL_73;
  }
  do {
    v31 = *(_QWORD**)(v30 - 16);
    if ((_QWORD*)(v30 - 48) == v31) {
      v32 = 32;
    }
    else {
      if (v31 == nullptr) {
        goto LABEL_67;
      }
      v32 = 40;
    }
    (*(void (**)(void))(*v31 + v32))();
  LABEL_67:
    v33 = *(_QWORD*)(v30 - 64);
    if (v33 != 0) {
      GameRoutine_1a09c50(v33);
    }
    v30 -= 80;
  } while (v30 != v29);
  v34 = *(_QWORD*)(v5 + 80);
  *(_QWORD*)(v5 + 88) = v29;
  v29 = v34;
  if (v34 != 0) {
    goto LABEL_70;
  }
LABEL_73:
  result = v5;
  v49 = v51;
  v37 = *(_QWORD*)(v5 + 32);
  v38 = GameData_212bf68;
  if (v37 != 0) {
    v39 = *(_QWORD*)(v5 + 40);
    if (v37 == v39) {
      goto LABEL_83;
    }
    do {
      v22 = *(_QWORD*)(v39 - 72);
      if (v22 != 0) {
        *(_QWORD*)(v39 - 64) = v22;
        if (*(_QWORD*)(*(_QWORD*)v38 + 200LL) != 0) {
          v40 = 128;
        }
        else {
          v40 = 56;
        }
        result = GameRoutine_1a0a4e0(*(_QWORD*)v38 + v40, v22);
      }
      v39 -= 144;
    } while (v39 != v37);
    v41 = *(_QWORD*)(v5 + 32);
    *(_QWORD*)(v5 + 40) = v37;
    v37 = v41;
    if (v41 != 0) {
    LABEL_83:
      v42 = 128;
      if (*(_QWORD*)(*(_QWORD*)v38 + 200LL) == 0) {
        v42 = 56;
      }
      result = GameRoutine_1a0a4e0(*(_QWORD*)v38 + v42, v37);
    }
  }
  v43 = *(_QWORD*)v5;
  if (*(_QWORD*)v5 == 0) {
    return result;
  }
  v44 = *(_QWORD*)(v5 + 8);
  if (v43 == v44) {
  LABEL_98:
    v48 = 128;
    if (*(_QWORD*)(*(_QWORD*)v38 + 200LL) == 0) {
      v48 = 56;
    }
    return GameRoutine_1a0a4e0(*(_QWORD*)v38 + v48, v43);
  }
  while (2) {
    v45 = *(_QWORD**)(v44 - 16);
    if ((_QWORD*)(v44 - 48) == v45) {
      v46 = 32;
    LABEL_94:
      (*(void (**)(_QWORD*, __int64))(*v45 + v46))(v45, v22);
    }
    else if (v45 != nullptr) {
      v46 = 40;
      goto LABEL_94;
    }
    result = *(_QWORD*)(v44 - 64);
    if (result != 0) {
      result = GameRoutine_1a09c50(result);
    }
    v44 -= 80;
    if (v44 != v43) {
      continue;
    }
    break;
  }
  v47 = *(_QWORD*)v5;
  *(_QWORD*)(v5 + 8) = v43;
  v43 = v47;
  if (v47 != 0) {
    goto LABEL_98;
  }
  return result;
}

_QWORD* GameHr_773300(__int64 a1, long double a2)
{
  __int64 v3;
  int v4;
  _QWORD* result;
  __int64 v6;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  __int64 v10;
  unsigned int v11;
  bool v12;
  int v13;

  v4 = *(unsigned __int8*)(a1 + 8);
  v3 = a1 + 8;
  if (v4 == 0) {
    return nullptr;
  }
  result = (_QWORD*)GameRoutine_6ea8c0(v3, a2);
  if (result == nullptr) {
    return result;
  }
  if ((*(_DWORD*)(a1 + 40) & 0xFFF) != 0) {
    v6 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                    8LL * (*(_DWORD*)(a1 + 40) & 0xFFF));
    if (v6 != 0) {
    LABEL_5:
      v13 = *(_WORD*)(v6 + 16) & 0xFFF;
      return (_QWORD*)GameRoutine_6cbdc0(
          result, &v13, (unsigned __int16*)GameData_212cea0, 0);
    }
    v7 = *(unsigned __int16*)(a1 + 32);
    v8 = *(unsigned __int16*)GameData_212cea0;
  }
  else {
    v7 = *(unsigned __int16*)(a1 + 32);
    v8 = *(unsigned __int16*)GameData_212cea0;
    if (*(_WORD*)(a1 + 32) != 0) {
      v9 = *(unsigned __int16*)(a1 + 32);
    }
    else {
      v9 = *(unsigned __int16*)GameData_212cea0;
    }
    v10 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * v9);
    v6 = *(_QWORD*)(v10 + 192);
    v11 = *(unsigned __int8*)(v10 + 72);
    v12 = v6 == 0 || v11 > 7;
    if (!v12 && *(_BYTE*)(v6 + 105) != 0 && *(_BYTE*)(v6 + 104) != 2) {
      goto LABEL_5;
    }
  }
  if (v7 == 0) {
    v7 = v8;
  }
  if (v7 != 0) {
    return (_QWORD*)*(
        unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                     8LL * v7) +
                          90LL);
  }
  else {
    return nullptr;
  }
}

__int64 GameHr_789ce0()
{
  __int64 result;
  __int64 v1;

  result = GameData_21cd128;
  if (GameData_21cd128 != 0) {
    if (*(_BYTE*)(GameData_21cd0e8 + 32) == 10) {
      v1 = 6;
    }
    else {
      v1 = 5;
    }
    return GameRoutine_825040(GameData_21cd128, v1);
  }
  return result;
}

__int64 GameHr_789d20(__int64 a1, long double a2)
{
  __int64* v3;
  int v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  long double v9;
  __int64 v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  unsigned __int64 v17;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned int v22;
  __int64 v23;
  __int64 v24;
  unsigned int v25;
  __int64 v27;
  int v28;
  int v29;
  int v30;
  void* v31;
  __int64 v32;
  __int64 v33;
  unsigned int v34;
  __int64 v35;
  __int64 v36;
  unsigned int v37;
  bool v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64*** v43;
  __int64** v44;
  unsigned __int64 v45;
  __int64* v46;

  v3 = GameData_212cff0[0];
  v4 = *(_DWORD*)(a1 + 272);
  v5 = *GameData_212cff0[0];
  v6 = GameData_212cfd0[0];
  if (*(_DWORD*)(*GameData_212cff0[0] + 12356) <= v4) {
    *(_DWORD*)(a1 + 272) = -1;
  }
  else if ((v4 & 0x80000000) == 0) {
    if ((*(_DWORD*)(a1 + 276) & 0x80000000) == 0) {
      goto LABEL_4;
    }
    goto LABEL_34;
  }
  if ((*(_DWORD*)(v5 + 48) & 0xFFF) != 0) {
    v15 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                     8LL * (*(_DWORD*)(v5 + 48) & 0xFFF));
    if (v15 == 0) {
      goto LABEL_28;
    }
    v16 = *(unsigned __int8*)(v15 + 105);
  }
  else {
    v22 = *(unsigned __int16*)(v5 + 40);
    if (*(_WORD*)(v5 + 40) == 0) {
      v22 = *(unsigned __int16*)GameData_212cea0;
    }
    v23 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * v22);
    v24 = *(_QWORD*)(v23 + 192);
    v25 = *(unsigned __int8*)(v23 + 72);
    if (v24 == 0 || v25 > 7) {
      goto LABEL_28;
    }
    v16 = *(unsigned __int8*)(v24 + 105);
    if (*(_BYTE*)(v24 + 105) == 0 || *(_BYTE*)(v24 + 104) == 2) {
      goto LABEL_28;
    }
  }
  if ((unsigned int)(v16 - 2) <= 2) {
    v17 = *(_QWORD*)(v5 + 12368);
    if (v17 == 0 || *(_QWORD*)(v5 + 12384) == 0) {
      goto LABEL_70;
    }
    v19 = v17 - 1;
    v20 =
        (unsigned __int16)(*(_DWORD*)(*(_QWORD*)(*GameData_212cfc0[0] + 48) +
                                      8LL) |
                           ((unsigned __int16)*(
                                _DWORD*)(*(_QWORD*)(*GameData_212cfc0[0] + 48) +
                                         12LL)
                            << 8));
    if ((v17 & (v17 - 1)) != 0) {
      v21 =
          (unsigned __int16)(*(_DWORD*)(*(_QWORD*)(*GameData_212cfc0[0] + 48) +
                                        8LL) |
                             ((unsigned __int16)*(
                                  _DWORD*)(*(_QWORD*)(*GameData_212cfc0[0] +
                                                      48) +
                                           12LL)
                              << 8));
      if (v17 <= v20) {
        v21 = (unsigned int)v20 % (unsigned int)v17;
      }
    }
    else {
      v21 = ((_DWORD)v17 - 1) & (unsigned int)v20;
    }
    v43 = *(__int64****)(*(_QWORD*)(v5 + 12360) + 8 * v21);
    if (v43 == nullptr || (v44 = *v43) == nullptr) {
    LABEL_70:
      v28 = -1;
      goto LABEL_33;
    }
    v28 = -1;
    if ((v17 & v19) == 0) {
      while (1) {
        v46 = v44[1];
        if (v46 == (__int64*)v20) {
          if (*((unsigned __int16*)v44 + 8) == (_DWORD)v20) {
            goto LABEL_71;
          }
        }
        else if (((unsigned __int64)v46 & v19) != v21) {
          goto LABEL_70;
        }
        v44 = (__int64**)*v44;
        if (v44 == nullptr) {
          goto LABEL_33;
        }
      }
    }
    while (1) {
      v45 = (unsigned __int64)v44[1];
      if (v45 == v20) {
        if (*((unsigned __int16*)v44 + 8) == (_DWORD)v20) {
        LABEL_71:
          v28 = *((unsigned __int16*)v44 + 9);
          goto LABEL_33;
        }
      }
      else {
        if (v45 >= v17) {
          v45 %= v17;
        }
        if (v45 != v21) {
          goto LABEL_70;
        }
      }
      v44 = (__int64**)*v44;
      if (v44 == nullptr) {
        goto LABEL_33;
      }
    }
  }
LABEL_28:
  if (*(_BYTE*)(*v6 + 8) != 0) {
    v27 = GameRoutine_6ea8c0(*v6 + 8, a2);
  }
  else {
    v27 = 0;
  }
  v28 = GameRoutine_779940(v5 + 8, v27);
  v5 = *v3;
LABEL_33:
  *(_DWORD*)(a1 + 272) = v28;
  if ((*(_DWORD*)(a1 + 276) & 0x80000000) != 0) {
  LABEL_34:
    v29 = GameRoutine_77a2e0(v5 + 8);
    v5 = *v3;
    *(_DWORD*)(a1 + 276) = v29;
  }
LABEL_4:
  v7 = *(int*)(v5 + 36);
  if ((_DWORD)v7 != -1) {
    if (*(_BYTE*)(*v6 + 8) != 0) {
      v8 = GameRoutine_6ea8c0(*v6 + 8, a2);
      v5 = *v3;
      v10 = *v6;
      v11 = *(unsigned __int8*)(*v6 + 8);
      v12 = v8 + 8LL * *(int*)(*v3 + 36) + 828;
      if (v11 != 0) {
        v13 = GameRoutine_6ea8c0(v10 + 8, v9);
        v5 = *v3;
        v14 = v13;
      }
      else {
        v14 = 0;
      }
    }
    else {
      v14 = 0;
      v12 = 8 * v7 + 828;
    }
    v30 = *(_DWORD*)(a1 + 272);
    if (v30 <= -1) {
      v31 = GameData_212d208;
    }
    else {
      v31 = (void*)(v5 + 12LL * (unsigned int)v30 + 68);
    }
    v32 = *(_DWORD*)(v5 + 48) & 0xFFFLL;
    if ((_DWORD)v32 != 0) {
      v33 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8 * v32);
    }
    else {
      v34 = *(unsigned __int16*)(v5 + 40);
      if (*(_WORD*)(v5 + 40) == 0) {
        v34 = *(unsigned __int16*)GameData_212cea0;
      }
      v35 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * v34);
      v36 = *(_QWORD*)(v35 + 192);
      v37 = *(unsigned __int8*)(v35 + 72);
      v38 = v36 == 0 || v37 > 7;
      if (v38 || *(_BYTE*)(v36 + 105) == 0) {
        v33 = 0;
      }
      else if (*(_BYTE*)(v36 + 104) == 2) {
        v33 = 0;
      }
      else {
        v33 = v36;
      }
    }
    GameRoutine_19f3aa0(a1 + 22920, v14, v31, v12, v33);
    v39 = *(_QWORD*)(a1 + 23000);
    v40 = *(_QWORD*)(a1 + 23008);
    v41 = *(_QWORD*)GameData_212d220[0];
    *(_QWORD*)(v41 + 176) = v39;
    *(_QWORD*)(v41 + 184) = v40;
    *(_BYTE*)(v41 + 192) = 0;
    *(_QWORD*)(v41 + 160) = v39;
    *(_QWORD*)(v41 + 168) = v40;
  }
  *(_BYTE*)(a1 + 23272) =
      *(_QWORD*)(a1 + 22936) - *(_QWORD*)(a1 + 22928) < 0x11u;
  return GameRoutine_78e5d0(a1);
}

__int64 GameHr_78c0d0()
{
  __int64 result;

  result = GameData_21cd128;
  if (GameData_21cd128 != 0) {
    return GameRoutine_825790();
  }
  return result;
}

#pragma GCC visibility pop
