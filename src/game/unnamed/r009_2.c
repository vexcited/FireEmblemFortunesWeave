#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _UNKNOWN GameData_1ac3e7d;

extern __int64 GameData_212bf68;

extern __int64 GameData_21c9f40;

extern __int64 GameData_21caab0;

extern __int64 GameData_21f3d10;

extern __int64 GameData_220d618;

extern __int64 GameData_2265ee0;

__int64 GameRoutine_155fbe0(_QWORD, _QWORD);

__int64 GameRoutine_1562060(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1562cf0(_QWORD, _QWORD);

__int64 GameRoutine_1a09c70(_QWORD);

__int64 GameRoutine_1a0a4e0(_QWORD, _QWORD);

__int64 GameRoutine_1a0b940(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_60a060(_QWORD, _QWORD, _QWORD);

void __attribute__((noreturn)) GameRoutine_60a1d0(_QWORD);

__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_65c580(_QWORD, _QWORD);

__int64 GameRoutine_7a86e0(_QWORD);

__int64 GameRoutine_80e330(_QWORD, _QWORD);

__int64 GameRoutine_ee23a0(_QWORD);

__int64 GameHr_16962f0()
{
  _QWORD* v0;
  __int64 v1;
  __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v7;
  unsigned __int64 v8;
  _QWORD* v9;
  unsigned __int64 v10;
  __int64 v11;
  _QWORD v12[2];

  LOBYTE(v0) = GameData_21f3d10;
  if (GameData_21f3d10 == 0) {
    return (unsigned __int8)v0 & 1;
  }
  if (*(_DWORD*)(GameData_21f3d10 + 136) == 1) {
    goto LABEL_15;
  }
  v12[1] = &GameData_1ac3e7d;
  v12[0] = GameRoutine_7a86e0(&GameData_1ac3e7d);
  if (GameData_21caab0 == 0) {
    goto LABEL_15;
  }
  v1 = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48), v12);
  if (v1 == 0) {
    goto LABEL_15;
  }
  LODWORD(v0) = *(_DWORD*)(v1 + 32);
  if ((_DWORD)v0 == 0) {
    return (unsigned __int8)v0 & 1;
  }
  v2 = (*(_BYTE*)(GameData_21f3d10 + 64) & 1) != 0
           ? *(_QWORD*)(GameData_21f3d10 + 80)
           : GameData_21f3d10 + 65;
  v3 = GameRoutine_7a86e0(v2);
  if (v3 == 0) {
    goto LABEL_15;
  }
  v4 = *(_QWORD*)(GameData_21c9f40 + 96);
  if (v4 == 0 || *(_QWORD*)(GameData_21c9f40 + 112) == 0) {
    goto LABEL_15;
  }
  v7 = v4 - 1;
  if ((v4 & (v4 - 1)) != 0) {
    v8 = v3;
    if (v3 >= v4) {
      v8 = v3 % v4;
    }
  }
  else {
    v8 = v7 & v3;
  }
  v0 = *(_QWORD**)(*(_QWORD*)(GameData_21c9f40 + 88) + 8 * v8);
  if (v0 != nullptr) {
    v9 = (_QWORD*)*v0;
    if (*v0 != 0) {
      if ((v4 & v7) == 0) {
        while (1) {
          v11 = v9[1];
          if (v11 == v3) {
            if (v9[2] == v3) {
              goto LABEL_37;
            }
          }
          else if ((v11 & v7) != v8) {
            goto LABEL_15;
          }
          v9 = (_QWORD*)*v9;
          LOBYTE(v0) = 0;
          if (v9 == nullptr) {
            return (unsigned __int8)v0 & 1;
          }
        }
      }
      while (1) {
        v10 = v9[1];
        if (v10 == v3) {
          if (v9[2] == v3) {
          LABEL_37:
            v0 = (_QWORD*)v9[3];
            if (v0 != nullptr) {
              LOBYTE(v0) = GameRoutine_ee23a0(GameData_220d618);
            }
            return (unsigned __int8)v0 & 1;
          }
        }
        else {
          if (v10 >= v4) {
            v10 %= v4;
          }
          if (v10 != v8) {
            break;
          }
        }
        v9 = (_QWORD*)*v9;
        LOBYTE(v0) = 0;
        if (v9 == nullptr) {
          return (unsigned __int8)v0 & 1;
        }
      }
    }
  LABEL_15:
    LOBYTE(v0) = 0;
  }
  return (unsigned __int8)v0 & 1;
}

unsigned __int64 GameHr_1761b30(__int64 a1, int a2, char a3, _QWORD* a4,
                                __int64 a5, _QWORD* a6, _QWORD* a7)
{
  char v13;
  char v14;
  char v15;
  unsigned __int64 result;
  __int64 v17;
  const char* v18;
  unsigned __int64 v19;
  char* v20;
  __int64 v21;
  int v22;
  unsigned __int64 v23;
  char* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  char* v30;
  __int128 v31;
  __int64 v32;
  _QWORD v33[2];
  __int64 v34;

  v33[1] = 0;
  v34 = 0;
  v33[0] = 0;
  if ((a3 & 1) != 0) {
    qmemcpy((char*)v33 + 1, "Pos_TalkOff", 11);
    v13 = 22;
  }
  else {
    qmemcpy((char*)v33 + 1, "Pos_TalkOn", 10);
    v13 = 20;
  }
  LOBYTE(v33[0]) = v13;
  GameRoutine_1562cf0(a1 + 168, (char*)v33 + 1);
  if (a4[1] == 0) {
    return GameRoutine_1562cf0(a1 + 168, "Type_TitleOff");
  }
  GameRoutine_1562cf0(a1 + 168, "Type_TitleOn");
  GameRoutine_60a060(a1 + 960, *a6, a6[1]);
  v33[1] = 0;
  v34 = 0;
  v33[0] = 0;
  v32 = 0;
  v31 = 0u;
  if (a2 != 0) {
    strcpy((char*)v33 + 1, "Title_Ank");
    DWORD2(v31) = 1802387807;
    *(_QWORD*)((char*)&v31 + 1) = *(_QWORD*)"T_Title_Ank";
    v14 = 22;
    v15 = 18;
  }
  else {
    strcpy((char*)v33 + 1, "Title_System");
    *(_DWORD*)((char*)&v31 + 1) = 1767137108;
    DWORD1(v31) = 1701606505;
    v14 = 14;
    v15 = 24;
  }
  LOBYTE(v33[0]) = v15;
  LOBYTE(v31) = v14;
  v17 = GameRoutine_155fbe0(a1 + 168, "L_Title");
  GameRoutine_1562060(v17, (char*)&v31 + 1, *a4);
  GameRoutine_1562cf0(v17, (char*)v33 + 1);
  GameRoutine_1562cf0(v17, *a7);
  if (*(_QWORD*)(a5 + 8) != 0) {
    v18 = *(const char**)a5;
  }
  else {
    v18 = "SE_SYS_Telop_CommonNotice";
  }
  result = GameRoutine_1a09c70(v18);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    GameRoutine_60a1d0(result);
  }
  v19 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v21 = 26;
    }
    else {
      v21 = (result | 7) + 1;
    }
    v20 = (char*)GameRoutine_651b90(GameData_2265ee0, v21, 16, 0);
    v29 = v19;
    v30 = v20;
    v28 = v21 | 1;
  }
  else {
    LOBYTE(v28) = 2 * result;
    v20 = (char*)&v28 + 1;
    if (result == 0) {
      goto LABEL_21;
    }
  }
  result = GameRoutine_1a0b940(v20, v18, v19);
LABEL_21:
  v20[v19] = 0;
  v22 = v28 & 1;
  v23 = (unsigned __int64)(unsigned __int8)v28 >> 1;
  if (v22 != 0) {
    v23 = v29;
  }
  if (v23 != 0) {
    if (v22 != 0) {
      v24 = v30;
    }
    else {
      v24 = (char*)&v28 + 1;
    }
    result = GameRoutine_80e330(a1, v24);
    v22 = v28 & 1;
  }
  if (v22 != 0 && v30 != nullptr) {
    v25 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v25 = 56;
    }
    result =
        GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v25, (_QWORD)(v30));
  }
  if ((v31 & 1) != 0 && v32 != 0) {
    v26 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v26 = 56;
    }
    result =
        GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v26, (_QWORD)(v32));
  }
  if ((v33[0] & 1) != 0 && v34 != 0) {
    v27 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v27 = 56;
    }
    return GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v27, (_QWORD)(v34));
  }
  return result;
}

#pragma GCC visibility pop
