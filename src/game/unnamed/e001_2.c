#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)
struct PseudoSret {
  _QWORD words[3];
};

extern __int64 (*GameData_1f8fb68[])();
extern __int64 (*GameData_1f8fbe8[])();
extern __int64 (*GameData_1f8fc68[])();
extern __int64 (*GameData_1f8fce8[])();
extern __int64 (*GameData_1f914e8[])();
extern __int64 (*GameData_1f955a0[])();
extern __int64 (*GameData_1f95620[])();
extern __int64 (*GameData_1f97f00[])();
extern __int64 (*GameData_1f98190[])();
extern __int64 (*GameData_1f989f8[])();
extern __int64 (*GameData_1f9fc40[])();
extern __int64 (*GameData_1f9fcc0[])();
extern __int64 GameData_212bf68;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c880[5];
extern _UNKNOWN* GameData_212ce38;
extern __int64* GameData_212cfd0[8];
extern __int64 GameData_21ca300;
extern __int64 GameData_21caab0;
extern __int64 GameData_21cf840;
extern _UNKNOWN GameData_21d40b8;
extern _UNKNOWN GameData_21d41b0;
extern __int64 GameData_22400f8;
extern __int64 GameData_2240160;
__n128 GameRoutine_10c830(_QWORD, float);
__int64 GameRoutine_10cff0(_QWORD);
__int64 GameRoutine_1307480(_QWORD);
__int64 GameRoutine_1829280(void);
__int64 GameRoutine_1a09fd0(_QWORD);
__int64 GameRoutine_1a09fe0(_QWORD);
__int64 GameRoutine_1a0a4e0(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
__int64 GameRoutine_6b6860(__int64);
__int64 GameRoutine_6b6ee0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6c51e0(__int64 result);
__int64 GameRoutine_6c6da0(_QWORD);
__int64 GameRoutine_6c6ec0(__int64);
__int64 GameRoutine_6c9ef0(_QWORD);
__int64 GameRoutine_6c9ff0(_QWORD, _QWORD);
__int64 GameRoutine_6cb490(_QWORD);
__int64 GameRoutine_6ce1c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6d8f40(_QWORD, _QWORD);
__int64 GameRoutine_6dd190(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6de250(_QWORD, _QWORD);
__int64 GameRoutine_6ea8c0(_QWORD, long double);
__int64 GameRoutine_711270(_QWORD);
__int64 GameRoutine_712ba0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_716420(void);
__int64 GameRoutine_71e5c0(_QWORD);
__int64 GameRoutine_72a260(_QWORD);
__int64 GameRoutine_72b4a0(_QWORD);
__int64 GameRoutine_72b6c0(_QWORD);
__int64 GameRoutine_738de0(void);
__int64 GameRoutine_756f00(__int64 result, unsigned int, unsigned int, __int64);
__int64 GameRoutine_757f60(__int64 result, _DWORD*, unsigned int, unsigned int,
                           __int64);
__int64 GameRoutine_775580(__int64 (**)(), __int64, _QWORD*, long double);
__int64 GameRoutine_77b1a0(_QWORD);
__int64 GameRoutine_799290(_QWORD);
bool GameRoutine_79d430(__int64);
__int64 GameRoutine_7a8520(_QWORD);
__int64 GameRoutine_7c6120(_QWORD);
__int64 GameRoutine_828a00(_QWORD, _QWORD);
__int64 GameRoutine_829bb0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_845bc0(_QWORD, _QWORD);
__int64 GameRoutine_84ec80(_QWORD, _QWORD);
__int64 GameRoutine_876070(_QWORD, _QWORD);
struct PseudoSret GameRoutine_88d260(_QWORD);
__int64 GameRoutine_88d500(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_9bcfa0(_QWORD, _QWORD);
__int64 GameRoutine_9bd480(_QWORD);
struct PseudoSret GameRoutine_ff2d0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                    _QWORD, double, float);

__int64 GameHr_665680(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64* i;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD v14[3];
  _QWORD v15[4];
  _QWORD* v16;

  result = GameData_21caab0;
  if (GameData_21caab0 == 0) {
    return result;
  }
  v3 = *(_QWORD*)(GameData_21caab0 + 24);
  if (v3 == 0) {
    return result;
  }
  result = GameRoutine_716420();
  if (*(_BYTE*)(v3 + 33) != 6) {
    if (*(_BYTE*)(v3 + 32) == 0) {
      return GameRoutine_88d500(v3, a1, 0);
    }
    return result;
  }
  result = GameRoutine_9bd480(a1);
  if (result == 0) {
    return result;
  }
  v4 = result;
  v15[0] = GameData_1f8fb68;
  v16 = v15;
  GameRoutine_9bcfa0(result, v15);
  if (v16 == v15) {
    v5 = 32;
    goto LABEL_11;
  }
  if (v16 != nullptr) {
    v5 = 40;
  LABEL_11:
    (*(void (**)(__int64))(*v16 + v5))((__int64)v16);
  }
  *(struct PseudoSret*)(v14) = GameRoutine_88d260(v3);
  v6 = v14[0];
  v7 = (__int64*)v14[1];
  if (v14[0] != v14[1]) {
    for (i = (__int64*)v14[0]; i != v7; ++i) {
      v10 = *i;
      v16 = v15;
      v15[0] = GameData_1f8fbe8;
      v15[1] = v10;
      GameRoutine_9bcfa0(v4, v15);
      if (v16 == v15) {
        v11 = 32;
      }
      else {
        if (v16 == nullptr) {
          goto LABEL_22;
        }
        v11 = 40;
      }
      (*(void (**)(__int64))(*v16 + v11))((__int64)v16);
    LABEL_22:
      v15[0] = GameData_1f8fc68;
      v15[1] = v10;
      v16 = v15;
      GameRoutine_9bcfa0(v4, v15);
      if (v16 == v15) {
        v9 = 32;
      }
      else {
        if (v16 == nullptr) {
          continue;
        }
        v9 = 40;
      }
      (*(void (**)(__int64))(*v16 + v9))((__int64)v16);
    }
  }
  if (v6 != 0) {
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v12 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v12, v6);
  }
  v15[0] = GameData_1f8fce8;
  v16 = v15;
  GameRoutine_9bcfa0(v4, v15);
  result = (__int64)v16;
  if (v16 == v15) {
    v13 = 32;
  }
  else {
    if (v16 == nullptr) {
      return result;
    }
    v13 = 40;
  }
  return (*(__int64 (**)(__int64))(*v16 + v13))((__int64)v16);
}

__int64 GameHr_6b6a60(__int64 a1)
{
  unsigned int* v1;
  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  _DWORD* v5;
  int v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  int v13;
  __int64 v14;
  int v15;
  unsigned __int64 v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;

  v1 = *(unsigned int**)(a1 + 1);
  v2 = v1[1];
  if ((_DWORD)v2 != 0) {
    v3 = 0;
    v4 = 0;
    v5 = GameData_212ce38;
    while (1) {
      v9 = *v1;
      if (v4 >= v9) {
        v13 = v4 - v9;
        v14 = __clz(v13 + 16);
        v11 = *(_QWORD*)(*((_QWORD*)v1 + 2) + 8 * (27 - v14) + 8) +
              32LL * (unsigned int)(v13 - v5[28 - v14]);
        v15 = *(_BYTE*)(v11 + 16) & 0x7F;
        if (v15 == 7) {
        LABEL_14:
          GameRoutine_6b6860(v11 + 16);
          v16 = *v1;
          if (v4 < v16) {
            v8 = *((_QWORD*)v1 + 1) + 32 * v4;
            goto LABEL_4;
          }
          goto LABEL_3;
        }
        if (v15 != 8) {
          goto LABEL_5;
        }
      }
      else {
        v10 = *((_QWORD*)v1 + 1);
        v11 = v10 + v3;
        v12 = *(_BYTE*)(v10 + v3 + 16) & 0x7F;
        if (v12 == 7) {
          goto LABEL_14;
        }
        if (v12 != 8) {
          goto LABEL_5;
        }
        v11 = v10 + v3;
      }
      GameHr_6b6a60(v11 + 16);
      v16 = *v1;
      if (v4 < v16) {
        v8 = *((_QWORD*)v1 + 1) + v3;
        goto LABEL_4;
      }
    LABEL_3:
      v6 = v4 - v16;
      v7 = __clz(v6 + 16);
      v8 = *(_QWORD*)(*((_QWORD*)v1 + 2) + 8 * (27 - v7) + 8) +
           32LL * (unsigned int)(v6 - v5[28 - v7]);
    LABEL_4:
      *(_BYTE*)(v8 + 16) = 0;
      v2 = v1[1];
    LABEL_5:
      ++v4;
      v3 += 32;
      if (v4 == v2) {
        goto LABEL_17;
      }
    }
  }
  v4 = 0;
LABEL_17:
  GameRoutine_6b6ee0(v1, 0, v1, v4);
  v17 = *((__int64**)v1 + 2);
  v18 = GameData_212bf68;
  if (v17 != nullptr) {
    v19 = *v17;
    if (*v17 == 0) {
      goto LABEL_27;
    }
    do {
      v20 = *((_QWORD*)v1 + 2);
      v21 = *(_QWORD*)(v20 + 8 * v19);
      if (v21 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v18 + 200LL) != 0) {
          v22 = 128;
        }
        else {
          v22 = 56;
        }
        GameRoutine_1a0a4e0(*(_QWORD*)v18 + v22, v21);
        v20 = *((_QWORD*)v1 + 2);
      }
      *(_QWORD*)(v20 + 8 * v19--) = 0;
    } while (v19 != 0);
    v17 = *((__int64**)v1 + 2);
    if (v17 != nullptr) {
    LABEL_27:
      v23 = 128;
      if (*(_QWORD*)(*(_QWORD*)v18 + 200LL) == 0) {
        v23 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)v18 + v23, v17);
    }
  }
  v24 = 128;
  if (*(_QWORD*)(*(_QWORD*)v18 + 200LL) == 0) {
    v24 = 56;
  }
  return GameRoutine_1a0a4e0(*(_QWORD*)v18 + v24, v1);
}

__int64 GameHr_6cdf80(__int64 a1, char a2)
{
  __int64 v2;
  __int64 v5;
  int v6;
  _QWORD* v7;
  char v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  int v16;
  __int64 result;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _QWORD v23[4];
  _QWORD* v24;

  v2 = *(_QWORD*)(a1 + 1200);
  if ((int)((unsigned __int64)(*(_QWORD*)(a1 + 1208) - v2) >> 2) >= 1) {
    v5 = *(_QWORD*)(a1 + 1168);
    *(_QWORD*)(a1 + 1208) = v2;
    v6 = *(_DWORD*)(a1 + 416);
    *(_DWORD*)(a1 + 1192) = 0;
    *(_QWORD*)(a1 + 1248) = 0;
    *(_QWORD*)(a1 + 1256) = 0;
    *(_QWORD*)(a1 + 1176) = v5;
    if ((v6 & 0x10000000) == 0) {
      *(_DWORD*)(a1 + 416) = v6 | 0x10000000;
      GameRoutine_6c51e0(a1);
      GameRoutine_6c6da0(a1);
      GameRoutine_6c6ec0(a1);
      *(_DWORD*)(a1 + 416) &= ~0x10000000u;
    }
  }
  v7 = v23;
  v21 = 0;
  v22 = 0;
  v20 = 0;
  v23[2] = a1;
  v23[0] = GameData_1f914e8;
  v23[1] = &v20;
  v8 = *(_BYTE*)(a1 + 1152);
  v24 = v23;
  if ((v8 & 4) == 0) {
    goto LABEL_15;
  }
  v9 = *(_QWORD*)(a1 + 1112);
  v10 = *(_QWORD*)(a1 + 1104);
  if ((int)((unsigned __int64)(v9 - v10) >> 2) < 1) {
    v7 = v23;
  LABEL_15:
    v15 = 32;
    goto LABEL_16;
  }
  v11 = 0;
  v12 = 0;
  v13 = GameData_212c880[0];
  v14 = *GameData_212c880[0];
  do {
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v14 + 64) +
                             8LL * (*(_DWORD*)(v10 + v11) & 0xFFF)) +
                  104LL) == 2) {
      if (v24 == nullptr) {
        GameRoutine_60a310(0);
      }
      (*(void (**)(_QWORD*, __int64))(*v24 + 48LL))(v24, v10 + v11);
      v14 = *v13;
      v9 = *(_QWORD*)(a1 + 1112);
      v10 = *(_QWORD*)(a1 + 1104);
    }
    ++v12;
    v11 += 4;
  } while (v12 < (int)((unsigned __int64)(v9 - v10) >> 2));
  v7 = v24;
  if (v24 == v23) {
    goto LABEL_15;
  }
  if (v24 != nullptr) {
    v15 = 40;
  LABEL_16:
    (*(void (**)(__int64))(*v7 + v15))((__int64)v7);
  }
  v23[0] = 32;
  v16 = GameRoutine_84ec80(a1 + 1744, v23);
  result =
      GameRoutine_6ce1c0(&v20, a1, a1 + 1168, (unsigned int)(v16 + 3), a2 & 1);
  if ((result & 1) != 0) {
    v18 = *(_DWORD*)(a1 + 416);
    if ((v18 & 0x10000000) == 0) {
      *(_DWORD*)(a1 + 416) = v18 | 0x10000000;
      GameRoutine_6c51e0(a1);
      GameRoutine_6c6da0(a1);
      result = GameRoutine_6c6ec0(a1);
      *(_DWORD*)(a1 + 416) &= ~0x10000000u;
    }
  }
  if (v20 != 0) {
    v21 = v20;
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v19 = 56;
    }
    return GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v19, v20);
  }
  return result;
}

__int64 GameHr_6cfa20(__int64 a1)
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
  __int64 result;
  int v29;
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
  char v41[4];

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
  GameRoutine_711270(a1 + 828);
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
        goto LABEL_70;
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
          goto LABEL_69;
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
          goto LABEL_69;
        }
        v37 = (int)v37;
      }
      *(_BYTE*)(*(_QWORD*)(a1 + 600) + 4 * v37 + 2) = v36;
    LABEL_69:
      *(_BYTE*)(a1 + 805) = 0;
    LABEL_70:
      v14 += 4;
    } while (v14 != v13);
  }
LABEL_53:
  v40[0] = 0;
  v27 = GameRoutine_6dd190(a1, v40, 1);
  v41[0] = 0;
  result = GameRoutine_6dd190(a1, v41, 1);
  v29 = *(unsigned __int16*)(a1 + 494);
  if (*(_WORD*)(a1 + 494) != 0 && v27 != *(__int16*)(a1 + 494)) {
    v29 = 0;
    *(_WORD*)(a1 + 494) = 0;
  }
  if ((int)result >= v27) {
    v30 = v27;
  }
  else {
    v30 = result;
  }
  if (v27 < 0) {
    v30 = 0;
  }
  if (v30 != *(__int16*)(a1 + 492)) {
    *(_WORD*)(a1 + 492) = v30;
  }
  if (v29 != 0) {
    *(_WORD*)(a1 + 494) = 0;
  }
  v31 = *(_DWORD*)(a1 + 416);
  *(_BYTE*)(a1 + 2093) = 0;
  if ((v31 & 0x10000000) == 0) {
    *(_DWORD*)(a1 + 416) = v31 | 0x10000000;
    GameRoutine_6c51e0(a1);
    GameRoutine_6c6da0(a1);
    result = GameRoutine_6c6ec0(a1);
    *(_DWORD*)(a1 + 416) &= ~0x10000000u;
  }
  return result;
}

__int64 GameHr_717c70(__int64 result, __int64* a2)
{
  __int64 v2;
  int v4;
  int v5;
  __int64 v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _WORD v12[2];
  __int64 v13;
  unsigned __int8 v14;
  __int128 v15;
  _DWORD v16[6];
  _QWORD v17[2];
  int v18;
  char v19;
  int v20;
  int v21;
  __int16 v22;
  __int64 v23;
  char v24;
  _QWORD v25[4];
  _QWORD* v26;

  v2 = GameData_21caab0;
  if (GameData_21caab0 != 0) {
    v12[0] = 0;
    v14 = 0;
    v15 = 0u;
    *(_QWORD*)v16 = 0;
    *(_DWORD*)((char*)&v16[1] + 3) = 0;
    *(_QWORD*)&v16[3] = 0;
    v16[5] = 0;
    v13 = 0x10000000000LL;
    v18 = 0;
    v19 = 0;
    v20 = 0;
    v21 = 0;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    v17[0] = 0;
    *(_QWORD*)((char*)v17 + 7) = 0;
    if ((GameRoutine_876070(v12, result) & 1) != 0) {
      v4 = HIBYTE(v13);
      *(_BYTE*)(v2 + 15) = BYTE6(v13);
      v5 = v14;
      *(_DWORD*)(v2 + 60) = v4;
      *(_DWORD*)(v2 + 64) = v5;
      *(_QWORD*)(v2 + 24) = *(_QWORD*)((char*)&v15 + 2);
      GameRoutine_71e5c0(v2);
    }
    v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 24LL))(v2);
    v7 = GameRoutine_7a8520(v6);
    v8 = *a2;
    LODWORD(v25[0]) = v7;
    if (((*(__int64 (**)(__int64*, _QWORD*))(v8 + 16))(a2, v25) & 1) == 0) {
      return (*(__int64 (**)(__int64*, _QWORD))(*a2 + 24))(a2, 0);
    }
    v9 = *(_QWORD*)(v2 + 48);
    v26 = v25;
    *(_BYTE*)(v9 + 3932768) |= 4u;
    v25[0] = GameData_1f9fc40;
    GameRoutine_828a00(v2 + 40, v25);
    if (v26 == v25) {
      v10 = 32;
    }
    else {
      if (v26 == nullptr) {
        goto LABEL_10;
      }
      v10 = 40;
    }
    (*(void (**)(__int64))(*v26 + v10))((__int64)v26);
  LABEL_10:
    v26 = v25;
    v25[0] = GameData_1f9fcc0;
    GameRoutine_829bb0(v2 + 40, a2, v25);
    if (v26 == v25) {
      v11 = 32;
    }
    else {
      if (v26 == nullptr) {
      LABEL_15:
        *(_BYTE*)(*(_QWORD*)(v2 + 48) + 3932768LL) &= ~4u;
        return (*(__int64 (**)(__int64*, _QWORD))(*a2 + 24))(a2, 0);
      }
      v11 = 40;
    }
    (*(void (**)(__int64))(*v26 + v11))((__int64)v26);
    goto LABEL_15;
  }
  return result;
}

_QWORD* GameHr_738cc0(__int64 a1, long double a2)
{
  __int64* v3;
  long double v4;
  __int64 v5;
  _QWORD* result;
  int v7;
  __int64 v8;
  __int64 v9;

  v3 = GameData_212cfd0[0];
  if (*(_BYTE*)(*GameData_212cfd0[0] + 8) != 0 &&
      GameRoutine_6ea8c0(*GameData_212cfd0[0] + 8, a2) != 0) {
    GameRoutine_738de0();
  }
  GameRoutine_7c6120(a1);
  if (*(_BYTE*)(*v3 + 8) == 0) {
    result = *(_QWORD**)(a1 + 192);
    *(_QWORD*)(a1 + 152) = 0;
    *(_QWORD*)(a1 + 192) = 0;
    if (result == (_QWORD*)(a1 + 160)) {
    LABEL_13:
      v7 = 2;
      goto LABEL_14;
    }
  LABEL_10:
    v7 = 2;
    if (result == nullptr) {
      goto LABEL_16;
    }
    goto LABEL_11;
  }
  v5 = GameRoutine_6ea8c0(*v3 + 8, v4);
  result = *(_QWORD**)(a1 + 192);
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  if (v5 == 0) {
    if (result == (_QWORD*)(a1 + 160)) {
      goto LABEL_13;
    }
    goto LABEL_10;
  }
  v7 = 5;
  if (result == (_QWORD*)(a1 + 160)) {
  LABEL_14:
    v8 = 32;
    goto LABEL_15;
  }
  if (result != nullptr) {
  LABEL_11:
    v8 = 40;
  LABEL_15:
    result = (_QWORD*)(*(__int64 (**)(__int64))(*result + v8))((__int64)result);
  }
LABEL_16:
  v9 = *(_QWORD*)(a1 + 8);
  if (v9 != 0) {
    while (1) {
      if (*(_BYTE*)v9 == 2) {
        if (*(_DWORD*)(v9 + 32) == v7) {
          *(_QWORD*)(a1 + 16) = v9;
          *(_WORD*)(a1 + 136) &= ~0x80u;
          return result;
        }
      }
      else if (*(_BYTE*)v9 == 0) {
        return result;
      }
      v9 += 64;
    }
  }
  return result;
}

__int64 GameHr_746c60(__int64 a1, char a2, long double a3)
{
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 result;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  _BYTE* v13;
  __int64 v14;
  __int64 v15;
  char v16;
  char v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _BYTE v22[200];

  v5 = *(unsigned __int8*)(a1 + 8);
  v4 = a1 + 8;
  if (v5 == 0) {
    return 0;
  }
  v6 = a1;
  result = GameRoutine_6ea8c0(v4, a3);
  if (result != 0) {
    if (GameData_21cf840 == 0) {
      return 0;
    }
    if (*(int*)(GameData_21cf840 + 16) > 0) {
      return 0;
    }
    if (result != *(_QWORD*)(GameData_21cf840 + 160)) {
      return 0;
    }
    v9 = result;
    v10 = v6 + 64;
    v11 = v9;
    v12 = GameRoutine_1307480(v10);
    if ((v12 & 0x80000000) != 0) {
      return 0;
    }
    v13 = (_BYTE*)(v11 + 847);
    v14 = 2;
    v15 = *GameData_212c878[0];
    while (1) {
      if (*(_WORD*)(v13 - 19) != 0 && (*(v13 - 16) & 1) != 0 &&
          *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v15 + 64) +
                                         8LL * *(unsigned __int16*)(v13 - 19)) +
                              72LL) < 8u) {
        LODWORD(v14) = v14 - 2;
        goto LABEL_25;
      }
      if (*(_WORD*)(v13 - 11) != 0 && (*(v13 - 8) & 1) != 0 &&
          *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v15 + 64) +
                                         8LL * *(unsigned __int16*)(v13 - 11)) +
                              72LL) < 8u) {
        break;
      }
      if (*(_WORD*)(v13 - 3) != 0 && (*v13 & 1) != 0 &&
          *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v15 + 64) +
                                         8LL * *(unsigned __int16*)(v13 - 3)) +
                              72LL) < 8u) {
        goto LABEL_25;
      }
      v14 += 3;
      v13 += 24;
      if (v14 == 32) {
        LODWORD(v14) = -1;
        goto LABEL_25;
      }
    }
    LODWORD(v14) = v14 - 1;
  LABEL_25:
    if ((GameRoutine_6d8f40(v11, v12) & 1) != 0) {
      if ((a2 & 1) == 0) {
        GameRoutine_6de250(v11, (unsigned int)v14);
      }
      v16 = GameRoutine_712ba0(v11 + 828, 0, 6);
      v17 = GameRoutine_712ba0(v11 + 828, 6, 24);
      if ((v16 & 1) != 0 || (v17 & 1) != 0) {
        v18 = *(_DWORD*)(v11 + 416);
        if ((v18 & 0x10000000) == 0) {
          *(_DWORD*)(v11 + 416) = v18 | 0x10000000;
          GameRoutine_6c51e0(v11);
          GameRoutine_6c6da0(v11);
          GameRoutine_6c6ec0(v11);
          *(_DWORD*)(v11 + 416) &= ~0x10000000u;
        }
      }
      GameRoutine_10c830(v22, 0.0);
      *(struct PseudoSret*)(&v21) =
          GameRoutine_ff2d0("SE_SYS_Weapon_Change", "SE_SYS_Weapon_Change", v22,
                            0, 65537, 0, 0.0, 1.0);
      GameRoutine_10cff0(v22);
      if (GameData_22400f8 != 0 && *(_BYTE*)(GameData_22400f8 + 8) == 1 &&
          (*(_BYTE*)(GameData_22400f8 + 9) & 1) == 0) {
        v19 = *(_QWORD*)(v11 + 440);
        if (v19 != 0 && *(unsigned __int8*)(v19 + 16) <= 8u &&
            GameData_2240160 != 0) {
          v20 = *(unsigned __int8*)(v11 + 2088);
          if ((*(_BYTE*)(GameData_2240160 + 8 + v20) & 1) != 0) {
            *(_BYTE*)(GameData_2240160 + 8 + v20) |= 2u;
          }
        }
      }
      if (GameData_21cf840 != 0 && *(int*)(GameData_21cf840 + 16) <= 0) {
        GameRoutine_1829280();
      }
      return 1;
    }
    else {
      return 0;
    }
  }
  return result;
}

__int64 GameHr_75bac0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  unsigned int v4;
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 result;
  __int64 v10;
  _QWORD v11[4];
  _QWORD* v12;
  int v13;
  _QWORD v14[4];
  _QWORD* v15;

  v2 = *(_QWORD*)(a1 + 152);
  v3 = *(_QWORD*)(a1 + 160);
  if (v3 != 0) {
    LODWORD(v3) = *(_WORD*)(v3 + 16) & 0xFFF;
  }
  v4 = *(char*)(v2 + 584);
  v5 = *(char*)(v2 + 585);
  v13 = v3;
  v11[0] = GameData_1f95620;
  v11[1] = a1;
  v15 = v14;
  v12 = v11;
  v14[0] = GameData_1f955a0;
  v14[1] = v11;
  GameRoutine_757f60(v2, &v13, v4, v5, (__int64)v14);
  if (v15 == v14) {
    v6 = 32;
  }
  else {
    if (v15 == nullptr) {
      goto LABEL_8;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v15 + v6))((__int64)v15);
LABEL_8:
  v7 = GameData_21ca300;
  v8 = *(_QWORD*)(GameData_21ca300 + 96);
  GameRoutine_72b4a0(v8);
  GameRoutine_72b6c0(v8);
  GameRoutine_72a260(*(_QWORD*)(v7 + 152));
  result = (__int64)v12;
  if (v12 == v11) {
    v10 = 32;
  }
  else {
    if (v12 == nullptr) {
      return result;
    }
    v10 = 40;
  }
  return (*(__int64 (**)(__int64))(*v12 + v10))((__int64)v12);
}

__int64 GameHr_77a740(__int64 a1, unsigned int a2, long double a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _QWORD* v20;
  __int64 v21;
  _QWORD* v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v31;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  _QWORD* v36;
  __int64 v37;
  _QWORD* v38;
  __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  _QWORD* v47;
  __int64 v48;
  _QWORD* v49;
  __int64 v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  __int64 v53;
  unsigned __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  _QWORD v58[4];
  _QWORD* v59;
  __int64 v60;
  __int64 v61;

  if ((a2 & 0x80000000) == 0) {
    v60 = v3;
    v61 = v4;
    v31 = a1 + 12LL * a2 + 60;
    v33 = a1 + 37036;
    v34 = a1 + 24692;
    v35 = *(_QWORD*)(a1 + 24720);
    *(_DWORD*)(a1 + 24692) = 0;
    if (v35 != 0) {
      v36 = *(_QWORD**)(a1 + 24712);
      if (v36 != nullptr) {
        v37 = GameData_212bf68;
        do {
          v38 = (_QWORD*)*v36;
          if (*(_QWORD*)(*(_QWORD*)v37 + 200LL) != 0) {
            v39 = 128;
          }
          else {
            v39 = 56;
          }
          GameRoutine_1a0a4e0(*(_QWORD*)v37 + v39, v36);
          v36 = v38;
        } while (v38 != nullptr);
      }
      v40 = *(_QWORD*)(a1 + 24704);
      *(_QWORD*)(a1 + 24712) = 0;
      if (v40 != 0) {
        v41 = v40 & 7;
        if (v40 >= 8) {
          v43 = v40 & 0xFFFFFFFFFFFFFFF8LL;
          v42 = 0;
          do {
            *(_QWORD*)(*(_QWORD*)(a1 + 24696) + 8 * v42) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 24696) + 8 * v42 + 8) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 24696) + 8 * v42 + 16) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 24696) + 8 * v42 + 24) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 24696) + 8 * v42 + 32) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 24696) + 8 * v42 + 40) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 24696) + 8 * v42 + 48) = 0;
            v44 = *(_QWORD*)(a1 + 24696) + 8 * v42;
            v42 += 8;
            *(_QWORD*)(v44 + 56) = 0;
          } while (v43 != v42);
        }
        else {
          v42 = 0;
        }
        if (v41 != 0) {
          v45 = 8 * v42;
          do {
            --v41;
            *(_QWORD*)(*(_QWORD*)(a1 + 24696) + v45) = 0;
            v45 += 8;
          } while (v41 != 0);
        }
      }
      *(_QWORD*)(a1 + 24720) = 0;
    }
    v46 = *(_QWORD*)(v33 + 28);
    *(_DWORD*)(v34 + 44) = 0;
    *(_DWORD*)v33 = 0;
    if (v46 != 0) {
      v47 = *(_QWORD**)(v33 + 20);
      if (v47 != nullptr) {
        v48 = GameData_212bf68;
        do {
          v49 = (_QWORD*)*v47;
          if (*(_QWORD*)(*(_QWORD*)v48 + 200LL) != 0) {
            v50 = 128;
          }
          else {
            v50 = 56;
          }
          GameRoutine_1a0a4e0(*(_QWORD*)v48 + v50, v47);
          v47 = v49;
        } while (v49 != nullptr);
      }
      v51 = *(_QWORD*)(v33 + 12);
      *(_QWORD*)(v33 + 20) = 0;
      if (v51 != 0) {
        v52 = v51 & 7;
        if (v51 >= 8) {
          v54 = v51 & 0xFFFFFFFFFFFFFFF8LL;
          v53 = 0;
          do {
            *(_QWORD*)(*(_QWORD*)(v33 + 4) + 8 * v53) = 0;
            *(_QWORD*)(*(_QWORD*)(v33 + 4) + 8 * v53 + 8) = 0;
            *(_QWORD*)(*(_QWORD*)(v33 + 4) + 8 * v53 + 16) = 0;
            *(_QWORD*)(*(_QWORD*)(v33 + 4) + 8 * v53 + 24) = 0;
            *(_QWORD*)(*(_QWORD*)(v33 + 4) + 8 * v53 + 32) = 0;
            *(_QWORD*)(*(_QWORD*)(v33 + 4) + 8 * v53 + 40) = 0;
            *(_QWORD*)(*(_QWORD*)(v33 + 4) + 8 * v53 + 48) = 0;
            v55 = *(_QWORD*)(v33 + 4) + 8 * v53;
            v53 += 8;
            *(_QWORD*)(v55 + 56) = 0;
          } while (v54 != v53);
        }
        else {
          v53 = 0;
        }
        if (v52 != 0) {
          v56 = 8 * v53;
          do {
            --v52;
            *(_QWORD*)(*(_QWORD*)(v33 + 4) + v56) = 0;
            v56 += 8;
          } while (v52 != 0);
        }
      }
      *(_QWORD*)(v33 + 28) = 0;
    }
    *(_DWORD*)(v33 + 44) = 0;
    if (*(char*)(v31 + 1) < 0 || *(char*)(v31 + 2) < 0) {
      return GameRoutine_845bc0(a1 + 12400, a1) & 1;
    }
    v58[0] = GameData_1f98190;
    v58[1] = a1;
    v59 = v58;
    GameRoutine_775580((__int64 (**)())a1, v31, v58, a3);
    if (v59 == v58) {
      v57 = 32;
    }
    else {
      if (v59 == nullptr) {
      LABEL_74:
        GameRoutine_77b1a0(a1);
        return GameRoutine_845bc0(a1 + 12400, a1) & 1;
      }
      v57 = 40;
    }
    (*(void (**)(__int64))(*v59 + v57))((__int64)v59);
    goto LABEL_74;
  }
  v60 = v3;
  v61 = v4;
  v5 = a1 + 37036;
  v6 = a1 + 24692;
  v7 = *(_QWORD*)(a1 + 24720);
  *(_DWORD*)(a1 + 24692) = 0;
  if (v7 != 0) {
    v8 = *(_QWORD**)(a1 + 24712);
    if (v8 != nullptr) {
      v10 = GameData_212bf68;
      do {
        v11 = (_QWORD*)*v8;
        if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) != 0) {
          v12 = 128;
        }
        else {
          v12 = 56;
        }
        GameRoutine_1a0a4e0(*(_QWORD*)v10 + v12, v8);
        v8 = v11;
      } while (v11 != nullptr);
    }
    v13 = *(_QWORD*)(a1 + 24704);
    *(_QWORD*)(a1 + 24712) = 0;
    if (v13 != 0) {
      v14 = v13 & 7;
      if (v13 >= 8) {
        v16 = v13 & 0xFFFFFFFFFFFFFFF8LL;
        v15 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(a1 + 24696) + 8 * v15) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 24696) + 8 * v15 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 24696) + 8 * v15 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 24696) + 8 * v15 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 24696) + 8 * v15 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 24696) + 8 * v15 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 24696) + 8 * v15 + 48) = 0;
          v17 = *(_QWORD*)(a1 + 24696) + 8 * v15;
          v15 += 8;
          *(_QWORD*)(v17 + 56) = 0;
        } while (v16 != v15);
      }
      else {
        v15 = 0;
      }
      if (v14 != 0) {
        v18 = 8 * v15;
        do {
          --v14;
          *(_QWORD*)(*(_QWORD*)(a1 + 24696) + v18) = 0;
          v18 += 8;
        } while (v14 != 0);
      }
    }
    *(_QWORD*)(a1 + 24720) = 0;
  }
  v19 = *(_QWORD*)(v5 + 28);
  *(_DWORD*)(v6 + 44) = 0;
  *(_DWORD*)v5 = 0;
  if (v19 != 0) {
    v20 = *(_QWORD**)(v5 + 20);
    if (v20 != nullptr) {
      v21 = GameData_212bf68;
      do {
        v22 = (_QWORD*)*v20;
        if (*(_QWORD*)(*(_QWORD*)v21 + 200LL) != 0) {
          v23 = 128;
        }
        else {
          v23 = 56;
        }
        GameRoutine_1a0a4e0(*(_QWORD*)v21 + v23, v20);
        v20 = v22;
      } while (v22 != nullptr);
    }
    v24 = *(_QWORD*)(v5 + 12);
    *(_QWORD*)(v5 + 20) = 0;
    if (v24 != 0) {
      v25 = v24 & 7;
      if (v24 >= 8) {
        v27 = v24 & 0xFFFFFFFFFFFFFFF8LL;
        v26 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(v5 + 4) + 8 * v26) = 0;
          *(_QWORD*)(*(_QWORD*)(v5 + 4) + 8 * v26 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(v5 + 4) + 8 * v26 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(v5 + 4) + 8 * v26 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(v5 + 4) + 8 * v26 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(v5 + 4) + 8 * v26 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(v5 + 4) + 8 * v26 + 48) = 0;
          v28 = *(_QWORD*)(v5 + 4) + 8 * v26;
          v26 += 8;
          *(_QWORD*)(v28 + 56) = 0;
        } while (v27 != v26);
      }
      else {
        v26 = 0;
      }
      if (v25 != 0) {
        v29 = 8 * v26;
        do {
          --v25;
          *(_QWORD*)(*(_QWORD*)(v5 + 4) + v29) = 0;
          v29 += 8;
        } while (v25 != 0);
      }
    }
    *(_QWORD*)(v5 + 28) = 0;
  }
  *(_DWORD*)(v5 + 44) = 0;
  return 0;
}

__int64 GameHr_7820b0(__int64 a1, __int64 a2, long double a3)
{
  __int64 (**v3)();
  __int64 v4;
  __int64 result;
  __int64 v6;
  _QWORD v7[4];
  _QWORD* v8;

  v3 = *(__int64 (***)())(a1 + 8);
  v4 = *(_QWORD*)(a1 + 16);
  v8 = v7;
  v7[0] = GameData_1f97f00;
  v7[1] = v4;
  GameRoutine_775580(v3, a2, v7, a3);
  result = (__int64)v8;
  if (v8 == v7) {
    v6 = 32;
  }
  else {
    if (v8 == nullptr) {
      return result;
    }
    v6 = 40;
  }
  return (*(__int64 (**)(__int64))(*v8 + v6))((__int64)v8);
}

__int64 GameHr_7a0960(__int64 result)
{
  __int64 v1;
  __int64 v2;
  unsigned int v3;
  unsigned int v4;
  __int64 v5;
  __int64 v6;
  _WORD* v7;
  __int16 v8;
  __int16 v9;
  __int16 v10;
  __int16 v11;
  __int16 v12;
  __int16 v13;
  __int16 v14;
  unsigned __int16 v15;
  _QWORD v16[4];
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  unsigned __int16 v20;

  v1 = *(_QWORD*)(result + 24);
  if (v1 == 0) {
    return result;
  }
  v2 = result;
  v20 = 0;
  v18 = 0;
  v19 = 0;
  if (GameRoutine_79d430(result)) {
    v3 = *(_DWORD*)(v2 + 80);
    v4 = *(_DWORD*)(v2 + 84);
    v16[0] = GameData_1f989f8;
    v16[1] = &v18;
    v17 = v16;
    GameRoutine_756f00(v1, v3, v4, (__int64)v16);
    if (v17 == v16) {
      v5 = 32;
    }
    else {
      if (v17 == nullptr) {
        goto LABEL_8;
      }
      v5 = 40;
    }
    (*(void (**)(__int64))(*v17 + v5))((__int64)v17);
  }
LABEL_8:
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d41b0,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)GameRoutine_1a09fd0(&GameData_21d41b0) != 0) {
    GameRoutine_799290(&GameData_21d40b8);
    GameRoutine_1a09fe0(&GameData_21d41b0);
  }
  v6 = *(_QWORD*)(v2 + 168);
  if (v6 != 0) {
    v7 = (_WORD*)(*(_QWORD*)(*(_QWORD*)(v2 + 136) +
                             8 * ((unsigned __int64)(v6 + *(_QWORD*)(v2 + 160) -
                                                     1) >>
                                  4)) +
                  244LL * (((_DWORD)v6 + *(_DWORD*)(v2 + 160) - 1) & 0xF));
  }
  else {
    v7 = &GameData_21d40b8;
  }
  v8 = WORD1(v18);
  v9 = WORD2(v18);
  v10 = HIWORD(v18);
  v11 = v19;
  v12 = WORD1(v19);
  v13 = WORD2(v19);
  v14 = HIWORD(v19);
  v15 = v20;
  result = HIWORD(v19) | (unsigned int)v20;
  if ((WORD1(v18) | (unsigned __int16)v18 | WORD2(v18) | HIWORD(v18) |
       (unsigned __int16)v19 | WORD1(v19) | WORD2(v19) |
       (unsigned int)result) != 0) {
    v7[113] = v18;
    v7[114] = v8;
    v7[115] = v11;
    v7[116] = v13;
    v7[119] = v14;
    v7[117] = v15;
    v7[120] = v9;
    v7[121] = v10;
    v7[118] = v12;
  }
  else {
    v7[121] = 0;
    *(_QWORD*)(v7 + 117) = 0;
    *(_QWORD*)(v7 + 113) = 0;
  }
  return result;
}

#pragma GCC visibility pop
