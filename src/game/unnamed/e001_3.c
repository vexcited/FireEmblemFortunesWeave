#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)
struct PseudoSret {
  _QWORD words[3];
};

extern _UNKNOWN GameData_1ad27ed;
extern _UNKNOWN GameData_1ae1c3a;
extern __int64 GameData_212bf68;
extern __int64 GameData_21caab0;
__int64 GameRoutine_127cc60(_QWORD, _QWORD);
struct PseudoSret GameRoutine_127cec0(_QWORD, _QWORD);
__int64 GameRoutine_1a0a4e0(_QWORD, _QWORD);
__int64 GameRoutine_65c580(_QWORD, _QWORD);
__int64 GameRoutine_6c3050(__int64, __int64, __int64, __int64, __int64,
                           __int64);
__int64 GameRoutine_6c51e0(__int64 result);
__int64 GameRoutine_6c6da0(_QWORD);
__int64 GameRoutine_6c6ec0(__int64);
__int64 GameRoutine_6d1740(__int64, __int64*);
__int64 GameRoutine_6d2380(_QWORD);
__int64 GameRoutine_6e4de0(_QWORD);
__int64 GameRoutine_6e50e0(_QWORD);
__int64 GameRoutine_6e5480(_QWORD);
__int64 GameRoutine_7152e0(void);
__int64 GameRoutine_7a86e0(_QWORD);

__int64 GameHr_6d7010(__int64 a1, __int64 a2, int a3)
{
  int v4;
  int v5;
  __int64 v6;
  int v7;
  __int64 v8;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 result;
  int v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27[2];
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  unsigned int v37;
  __int64 v38;
  int v39;
  int v40;
  char v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  _QWORD v47[3];
  __int64 v48;

  v27[0] = a2;
  v27[1] = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v38 = 0x3F80000000000000LL;
  if (GameData_21caab0 != 0) {
    v4 = *(_DWORD*)(GameData_21caab0 + 60);
  }
  else {
    v4 = 0;
  }
  v41 = 0;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  v45 = 0;
  v46 = 0;
  v39 = v4;
  v40 = 67072;
  if (a3 != 0) {
    goto LABEL_18;
  }
  if (GameData_21caab0 == 0) {
    v5 = 0;
    a3 = *(unsigned __int8*)(a2 + 442);
    if (*(_BYTE*)(a2 + 442) != 0) {
      goto LABEL_18;
    }
    goto LABEL_11;
  }
  v5 = *(_DWORD*)(GameData_21caab0 + 68);
  v6 = *(_QWORD*)(GameData_21caab0 + 16);
  if (v6 != 0) {
    v5 += *(char*)(v6 + 128);
  }
  a3 = *(unsigned __int8*)(a2 + 442);
  if (*(_BYTE*)(a2 + 442) == 0) {
  LABEL_11:
    if (*(_BYTE*)(a2 + 443) != 0) {
      v7 = v5 + *(char*)(a2 + 443);
      if (v7 <= 1) {
        v7 = 1;
      }
      if (v7 >= 99) {
        a3 = 99;
      }
      else {
        a3 = v7;
      }
    }
    else {
      a3 = v5;
    }
  }
LABEL_18:
  v8 = *(_QWORD*)(a2 + 304);
  if (a3 <= *(unsigned __int8*)(a2 + 444)) {
    v9 = *(unsigned __int8*)(a2 + 444);
  }
  else {
    v9 = a3;
  }
  v37 = v9;
  if (v8 != 0) {
    v48 = v8;
    *(struct PseudoSret*)(v47) = GameRoutine_127cec0(&v48, v9);
    v10 = v47[0];
    v47[0] = v8;
    v44 = v47[2];
    v42 = v10;
    v43 = v47[1];
    HIBYTE(v40) = 1;
    v45 = GameRoutine_127cc60(v47, v9);
  }
  GameRoutine_6e4de0(v27);
  GameRoutine_6e50e0(v27);
  GameRoutine_6e5480(v27);
  GameRoutine_6c3050(a1, v11, v12, v13, v14, v15);
  GameRoutine_6d1740(a1, v27);
  result = GameRoutine_6d2380(a1);
  v17 = *(_DWORD*)(a1 + 416);
  if ((v17 & 0x10000000) == 0) {
    *(_DWORD*)(a1 + 416) = v17 | 0x10000000;
    GameRoutine_6c51e0(a1);
    GameRoutine_6c6da0(a1);
    result = GameRoutine_6c6ec0(a1);
    *(_DWORD*)(a1 + 416) &= ~0x10000000u;
  }
  v18 = (__int64*)GameData_212bf68;
  if (v42 != 0) {
    v19 = *(_QWORD*)GameData_212bf68;
    v43 = v42;
    v20 = 128;
    if (*(_QWORD*)(v19 + 200) == 0) {
      v20 = 56;
    }
    result = GameRoutine_1a0a4e0(v19 + v20, v42);
  }
  if (v34 != 0) {
    v21 = *v18;
    v35 = v34;
    v22 = 128;
    if (*(_QWORD*)(v21 + 200) == 0) {
      v22 = 56;
    }
    result = GameRoutine_1a0a4e0(v21 + v22, v34);
  }
  if (v31 != 0) {
    v23 = *v18;
    v32 = v31;
    v24 = 128;
    if (*(_QWORD*)(v23 + 200) == 0) {
      v24 = 56;
    }
    result = GameRoutine_1a0a4e0(v23 + v24, v31);
  }
  if (v28 != 0) {
    v25 = *v18;
    v29 = v28;
    v26 = 128;
    if (*(_QWORD*)(v25 + 200) == 0) {
      v26 = 56;
    }
    return GameRoutine_1a0a4e0(v25 + v26, v28);
  }
  return result;
}

__int64 GameHr_6d8390(__int64 a1, __int64 a2, int a3)
{
  int v5;
  int v6;
  __int64 v7;
  int v8;
  unsigned int v9;
  char v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  float v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 result;
  int v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33[2];
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  unsigned int v43;
  int v44;
  int v45;
  int v46;
  char v47;
  char v48;
  __int16 v49;
  char v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  void* v57;
  __int64 v58;
  __int64 v59;

  if (a3 == 0) {
    a3 = GameRoutine_7152e0();
  }
  v33[0] = a2;
  v33[1] = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  v45 = 1065353216;
  if (GameData_21caab0 != 0) {
    v5 = *(_DWORD*)(GameData_21caab0 + 60);
  }
  else {
    v5 = 0;
  }
  v46 = v5;
  v50 = 0;
  v51 = 0;
  v52 = 0;
  v53 = 0;
  v54 = 0;
  v55 = 0;
  v49 = 1;
  if (a3 == 0) {
    if (GameData_21caab0 == 0) {
      v6 = 0;
      a3 = *(unsigned __int8*)(a2 + 442);
      if (*(_BYTE*)(a2 + 442) != 0) {
        goto LABEL_20;
      }
      goto LABEL_13;
    }
    v6 = *(_DWORD*)(GameData_21caab0 + 68);
    v7 = *(_QWORD*)(GameData_21caab0 + 16);
    if (v7 != 0) {
      v6 += *(char*)(v7 + 128);
    }
    a3 = *(unsigned __int8*)(a2 + 442);
    if (*(_BYTE*)(a2 + 442) == 0) {
    LABEL_13:
      if (*(_BYTE*)(a2 + 443) != 0) {
        v8 = v6 + *(char*)(a2 + 443);
        if (v8 <= 1) {
          v8 = 1;
        }
        if (v8 >= 99) {
          a3 = 99;
        }
        else {
          a3 = v8;
        }
      }
      else {
        a3 = v6;
      }
    }
  }
LABEL_20:
  if (a3 <= *(unsigned __int8*)(a2 + 444)) {
    v9 = *(unsigned __int8*)(a2 + 444);
  }
  else {
    v9 = a3;
  }
  v43 = v9;
  if (GameData_21caab0 != 0) {
    if (*(_DWORD*)(GameData_21caab0 + 60) == 1) {
      v10 = 2;
    }
    else {
      v10 = 3;
    }
  }
  else {
    v10 = 3;
  }
  v11 = *(_QWORD*)(a2 + 304);
  v48 = v10;
  v47 = 2;
  v57 = &GameData_1ad27ed;
  v12 = GameRoutine_7a86e0(&GameData_1ad27ed);
  v13 = GameData_21caab0;
  v56 = v12;
  if (GameData_21caab0 != 0) {
    v14 = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48), &v56);
    if (v14 != 0) {
      v13 = *(_DWORD*)(v14 + 32);
    }
    else {
      v13 = 0;
    }
  }
  v44 = v13;
  v57 = &GameData_1ae1c3a;
  v15 = 0.0f;
  v56 = GameRoutine_7a86e0(&GameData_1ae1c3a);
  if (GameData_21caab0 != 0) {
    v16 = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48), &v56);
    if (v16 != 0) {
      v15 = (float)*(int*)(v16 + 32) * 0.01f;
    }
  }
  v45 = LODWORD(v15);
  v59 = v11;
  *(struct PseudoSret*)(&v56) = GameRoutine_127cec0(&v59, v9);
  v53 = v58;
  v51 = v56;
  v52 = (__int64)v57;
  HIBYTE(v49) = 1;
  GameRoutine_6e4de0(v33);
  GameRoutine_6e50e0(v33);
  GameRoutine_6e5480(v33);
  GameRoutine_6c3050(a1, v17, v18, v19, v20, v21);
  GameRoutine_6d1740(a1, v33);
  result = GameRoutine_6d2380(a1);
  v23 = *(_DWORD*)(a1 + 416);
  if ((v23 & 0x10000000) == 0) {
    *(_DWORD*)(a1 + 416) = v23 | 0x10000000;
    GameRoutine_6c51e0(a1);
    GameRoutine_6c6da0(a1);
    result = GameRoutine_6c6ec0(a1);
    *(_DWORD*)(a1 + 416) &= ~0x10000000u;
  }
  v24 = (__int64*)GameData_212bf68;
  if (v51 != 0) {
    v25 = *(_QWORD*)GameData_212bf68;
    v52 = v51;
    v26 = 128;
    if (*(_QWORD*)(v25 + 200) == 0) {
      v26 = 56;
    }
    result = GameRoutine_1a0a4e0(v25 + v26, v51);
  }
  if (v40 != 0) {
    v27 = *v24;
    v41 = v40;
    v28 = 128;
    if (*(_QWORD*)(v27 + 200) == 0) {
      v28 = 56;
    }
    result = GameRoutine_1a0a4e0(v27 + v28, v40);
  }
  if (v37 != 0) {
    v29 = *v24;
    v38 = v37;
    v30 = 128;
    if (*(_QWORD*)(v29 + 200) == 0) {
      v30 = 56;
    }
    result = GameRoutine_1a0a4e0(v29 + v30, v37);
  }
  if (v34 != 0) {
    v31 = *v24;
    v35 = v34;
    v32 = 128;
    if (*(_QWORD*)(v31 + 200) == 0) {
      v32 = 56;
    }
    return GameRoutine_1a0a4e0(v31 + v32, v34);
  }
  return result;
}

#pragma GCC visibility pop
