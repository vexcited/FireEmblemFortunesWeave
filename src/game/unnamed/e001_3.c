#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};

extern __int64 GameData_212bf68;

extern __int64 GameData_21caab0;

__int64 GameRoutine_127cc60(_QWORD, _QWORD);

struct PseudoSret GameRoutine_127cec0(_QWORD, _QWORD);

__int64 GameRoutine_1a0a4e0(_QWORD, _QWORD);

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

#pragma GCC visibility pop
