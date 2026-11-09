#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _QWORD GameData_1b01768[4];

extern __int64* GameData_212dec0[4];

extern __int64* GameData_212ea58;

extern __int64* GameData_212f628[9];

extern __int64 GameData_21f4cc0;

extern __int64 GameData_2203490;

extern __int64 GameData_2216820;

extern char GameData_2216858;

__int64 GameRoutine_17c6540(_QWORD, _QWORD);

__int64 GameRoutine_19f2a10(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_19f3620(_QWORD, _QWORD);

__int64 GameRoutine_1a09c50();

__int64 GameRoutine_1a0a0c0(_QWORD);

__int64 GameRoutine_654050(_QWORD, _QWORD);

__int64 GameRoutine_6d8f40(void);

__int64 GameRoutine_6dd190(_QWORD, _QWORD, _QWORD);

_QWORD* GameRoutine_80c770(_QWORD* __return_ptr, _QWORD);

void __attribute__((noreturn)) GameRoutine_8123d0(_QWORD);

__int64 GameRoutine_e70790(__int64);

__int64 GameRoutine_e734e0(__int64 result);

__int64 GameRoutine_e73d00(__int64, __int64);

__int64 GameRoutine_e749a0(_QWORD, _QWORD);

bool GameRoutine_e76770(__int64, __int64, unsigned __int16*);

bool GameRoutine_e7c280(__int64);

__int64 GameRoutine_e7d890(_QWORD);

__int64 GameRoutine_e7fde0(__int64, __int64*, _QWORD*, int, float, float);

__int64 GameRoutine_e803d0(_QWORD, _QWORD);

__int64 GameRoutine_e9ba00(__int64, __int64, unsigned int, unsigned __int8,
                           __int64*, float);

bool GameHr_e726b0(_QWORD* a1, char a2)
{
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  _DWORD* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _BOOL4 v16;
  __int64 v18;
  _DWORD* v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64* v32;
  __int64* v33;
  int v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64* v38;
  _QWORD v39[2];
  __int64 v40;

  v4 = GameData_212ea58;
  v5 = *GameData_212ea58;
  v6 = *(_QWORD*)(*GameData_212ea58 + 640);
  v7 = *(_QWORD*)(*GameData_212ea58 + 648);
  if (v7 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8),
                                            1u, memory_order_relaxed),
                  atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0)) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    GameRoutine_1a09c50();
    if (v6 != 0) {
      goto LABEL_4;
    }
  }
  else if (v6 != 0) {
    goto LABEL_4;
  }
  v6 = *(_QWORD*)(v5 + 656);
  v29 = *(_QWORD*)(v5 + 664);
  if (v29 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v29 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
      GameRoutine_1a09c50();
    }
  }
LABEL_4:
  v8 = (_QWORD*)*v4;
  if (*(_BYTE*)(v6 + 8) == 7) {
    goto LABEL_10;
  }
  v9 = v8[80];
  v10 = v8[81];
  if (v10 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      GameRoutine_1a09c50();
      if (v9 != 0) {
        goto LABEL_8;
      }
    LABEL_36:
      v9 = v8[82];
      v30 = v8[83];
      if (v30 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v30 + 8), 1u,
                                  memory_order_relaxed);
        if (atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
          GameRoutine_1a09c50();
        }
      }
      goto LABEL_8;
    }
  }
  if (v9 == 0) {
    goto LABEL_36;
  }
LABEL_8:
  if (*(_BYTE*)(v9 + 8) != 8) {
    return false;
  }
  v8 = (_QWORD*)*v4;
LABEL_10:
  v11 = (_DWORD*)v8[80];
  if ((v11[12] & 0x80000000) != 0) {
    goto LABEL_60;
  }
  v12 = (__int64*)(*(_QWORD*)((*(__int64 (**)(_QWORD))(*(_QWORD*)v11 + 32LL))(
                                  v8[80]) +
                              40) +
                   16LL * (int)v11[12]);
  v13 = v12[1];
  if (v13 == 0) {
    goto LABEL_60;
  }
  v14 = *v12;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                            memory_order_relaxed);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 16), 1u,
                            memory_order_relaxed);
  if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    GameRoutine_1a09c50();
  }
  v15 = GameRoutine_1a0a0c0(v13);
  GameRoutine_1a09c50();
  v16 = v14 == 0;
  if (v15 != 0 && v14 != 0) {
    if (a1[2865] - a1[2864] < 0x11u) {
      v16 = true;
      goto LABEL_58;
    }
    v39[0] = GameRoutine_19f3620(a1 + 2863, a2 & 1);
    v39[1] = v18;
    GameRoutine_19f2a10(a1 + 2863, *(_QWORD*)(v14 + 16), v39);
    v19 = *(_DWORD**)(*v4 + 640);
    if ((v19[12] & 0x80000000) != 0) {
      goto LABEL_56;
    }
    v20 = (__int64*)(*(_QWORD*)((*(__int64 (**)(_QWORD))(*(_QWORD*)v19 + 32LL))(
                                    *(_QWORD*)(*v4 + 640)) +
                                40) +
                     16LL * (int)v19[12]);
    v21 = v20[1];
    if (v21 == 0) {
      goto LABEL_56;
    }
    v22 = *v20;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v21 + 8), 1u,
                              memory_order_relaxed);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v21 + 16), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
      GameRoutine_1a09c50();
    }
    v23 = GameRoutine_1a0a0c0(v21);
    GameRoutine_1a09c50();
    if (v23 != 0 && v22 != 0) {
      v25 = *(_QWORD*)(*(_QWORD*)(v22 + 16) + 440LL);
      if (v25 != 0 &&
          (unsigned __int64)(v26 = *(unsigned __int8*)(v25 + 16)) <= 3) {
        v27 = GameData_1b01768[v26];
      }
      else {
        v27 = 3;
      }
      v31 = *v4 + (v27 << 7);
      v32 = *(__int64**)(v31 + 712);
      v33 = *(__int64**)(v31 + 720);
      if (v32 == v33) {
        v34 = 0;
      }
      else {
        v34 = 0;
        do {
          v35 = *v32;
          v32 += 2;
          if (v35 == v22) {
            break;
          }
          ++v34;
        } while (v32 != v33);
      }
      v36 = a1[2877];
      v37 = a1[2878];
      if (v36 == v37) {
        goto LABEL_54;
      }
      while (*(_DWORD*)v36 != v34) {
        v36 += 12;
        if (v36 == v37) {
          goto LABEL_53;
        }
      }
      if ((GameRoutine_6d8f40() & 1) != 0) {
        GameRoutine_80c770(&v40, "SE_SYS_Weapon_Change_LinkUnit");
        GameRoutine_e7d890(v22);
        v38 = GameData_212f628[0];
        GameRoutine_17c6540(*GameData_212f628[0], a2 & 1);
        *(_BYTE*)(v36 + 8) = 1;
        *(_BYTE*)(*v38 + 281) = 1;
      }
    }
  LABEL_53:
    if (v23 == 0) {
    LABEL_56:
      GameRoutine_e70790((__int64)a1);
      goto LABEL_57;
    }
  LABEL_54:
    if (atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
      GameRoutine_1a09c50();
    }
    goto LABEL_56;
  }
LABEL_57:
  if (v15 != 0) {
  LABEL_58:
    if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
      GameRoutine_1a09c50();
    }
    return !v16;
  }
LABEL_60:
  v16 = true;
  return !v16;
}

__int64 GameHr_e74760(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _BOOL4 v8;
  int v9;
  int v10;
  __int64 v11;
  __int64 result;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  __int64* v18;
  __int64* v19;
  int v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  _BOOL4 v26;
  int v27;
  int v28;
  int v29;
  _BYTE v30[4];

  v2 = *a2;
  v5 = *(_QWORD*)(*a2 + 320);
  if (v5 == 0) {
    goto LABEL_8;
  }
  v6 = GameRoutine_1a0a0c0(v5);
  if (v6 == 0) {
    goto LABEL_8;
  }
  v7 = *(_QWORD*)(v2 + 312);
  v8 = v7 == 0 || (*(_BYTE*)(*(_QWORD*)v7 + 76LL) & 8) == 0;
  if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v8) {
    LABEL_8:
      v9 = *(__int16*)(*(_QWORD*)(v2 + 16) + 492LL);
      goto LABEL_9;
    }
  }
  else {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    GameRoutine_1a09c50();
    if (v8) {
      goto LABEL_8;
    }
  }
  v9 = 0;
LABEL_9:
  GameRoutine_e749a0(a1 + 40, a2);
  v10 = *(_DWORD*)(a1 + 12) - v9;
  result = GameRoutine_e73d00(a1, v11);
  v13 = *(_DWORD*)(a1 + 20) + *(_DWORD*)(a1 + 16);
  v14 = *(_DWORD*)(a1 + 12);
  if (v13 <= 1) {
    v13 = 1;
  }
  v15 = result & 1 | (*(_DWORD*)(a1 + 36) == 1);
  if (v13 >= v10) {
    v16 = v10;
  }
  else {
    v16 = v13;
  }
  if (v10 >= v15) {
    v15 = v16;
  }
  if (v13 >= (unsigned int)v15) {
    v13 = v15;
  }
  if (v15 >= 0) {
    v17 = v13;
  }
  else {
    v17 = 0;
  }
  *(_DWORD*)(a1 + 12) = v17;
  if (v17 != v14) {
    result = GameRoutine_e734e0(a1);
  }
  v18 = *(__int64**)(a1 + 40);
  v19 = *(__int64**)(a1 + 48);
  if (v18 != v19) {
    v20 = 0;
    while (1) {
      v22 = *v18;
      v23 = *(_QWORD*)(*v18 + 320);
      if (v23 != 0) {
        v24 = GameRoutine_1a0a0c0(v23);
        if (v24 != 0) {
          v25 = *(_QWORD*)(v22 + 312);
          v26 = v25 == 0 || (*(_BYTE*)(*(_QWORD*)v25 + 76LL) & 8) == 0;
          if (atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                               0xFFFFFFFFFFFFFFFFLL) != 0) {
            if (!v26) {
              goto LABEL_36;
            }
          }
          else {
            (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
            GameRoutine_1a09c50();
            if (!v26) {
            LABEL_36:
              result = 0;
              goto LABEL_26;
            }
          }
        }
      }
      v21 = *(_QWORD*)(v22 + 16);
      v30[0] = 0;
      result = GameRoutine_6dd190(v21, v30, 1);
    LABEL_26:
      v20 += result;
      v18 += 2;
      if (v18 == v19) {
        goto LABEL_38;
      }
    }
  }
  v20 = 0;
LABEL_38:
  v27 = *(_DWORD*)(a1 + 12);
  if (v20 <= 1) {
    v28 = 1;
  }
  else {
    v28 = v20;
  }
  v29 = *(_DWORD*)(a1 + 20) + v28;
  if (v29 <= 1) {
    v29 = 1;
  }
  if (v29 >= (unsigned int)v27) {
    v29 = *(_DWORD*)(a1 + 12);
  }
  if (v27 < 0) {
    v29 = 0;
  }
  *(_DWORD*)(a1 + 12) = v29;
  *(_DWORD*)(a1 + 16) = v28;
  if (v29 != v27) {
    return GameRoutine_e734e0(a1);
  }
  return result;
}

__int64 GameHr_e789d0(__int64 a1, unsigned __int16* a2)
{
  __int64* v3;
  __int64 result;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  bool v8;
  __int64 v9;
  atomic_ullong* v10;
  char v11;
  _QWORD v12[2];

  v3 = *(__int64**)(a1 + 16);
  result = *(_QWORD*)(a1 + 32);
  v5 = *v3;
  v6 = v3[1];
  if (v6 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                              memory_order_relaxed);
  }
  v7 = **(_DWORD**)(a1 + 24);
  if ((*(_BYTE*)(*GameData_212dec0[0] + 13) & 1) == 0) {
    if ((GameData_2216858 & 1) == 0) {
      GameRoutine_8123d0(result);
    }
    v8 = (GameData_2216820 & 8) != 0;
    if (v7 > 2) {
      goto LABEL_14;
    }
  LABEL_8:
    if (v8) {
      goto LABEL_14;
    }
    v9 = a1;
    v12[0] = v5;
    v12[1] = v6;
    if (v6 == 0) {
      result = GameRoutine_e76770(result, (__int64)v12, a2);
      if ((result & 1) == 0) {
        return result;
      }
      goto LABEL_18;
    }
    v10 = (atomic_ullong*)(v6 + 8);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                              memory_order_relaxed);
    result = GameRoutine_e76770(result, (__int64)v12, a2);
    v11 = result;
    if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (atomic_fetch_add(v10, 0xFFFFFFFFFFFFFFFFLL) != 0) {
        goto LABEL_12;
      }
    }
    else {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      result = GameRoutine_1a09c50();
      if (atomic_fetch_add(v10, 0xFFFFFFFFFFFFFFFFLL) != 0) {
      LABEL_12:
        if ((v11 & 1) == 0) {
          return result;
        }
        goto LABEL_18;
      }
    }
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    result = GameRoutine_1a09c50();
    if ((v11 & 1) == 0) {
      return result;
    }
  LABEL_18:
    **(_BYTE**)(v9 + 8) = 1;
    return result;
  }
  v8 = false;
  if (v7 <= 2) {
    goto LABEL_8;
  }
LABEL_14:
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, unsigned __int16*, unsigned __int16*))(
        *(_QWORD*)v6 + 16LL))(v6, a2, a2);
    return GameRoutine_1a09c50();
  }
  return result;
}

bool GameHr_e7c4f0(__int64 a1)
{
  _BOOL4 v1;
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  int v8;
  __int64 v10;
  __int64 v11;
  int v12;
  int v13;

  v3 = *(_DWORD*)(a1 + 484);
  v4 = *(_QWORD*)(a1 + 320);
  if (v4 == 0) {
    goto LABEL_8;
  }
  v5 = GameRoutine_1a0a0c0(v4);
  if (v5 == 0) {
    goto LABEL_8;
  }
  v6 = *(_QWORD*)(a1 + 312);
  if (v6 != 0 && *(_DWORD*)(*(_QWORD*)v6 + 64LL) == 0) {
    if ((*(_BYTE*)(GameData_21f4cc0 + 13) & 1) != 0) {
      v7 = 0;
      v1 = true;
    }
    else {
      if ((GameData_2216858 & 1) == 0) {
        goto LABEL_42;
      }
      v7 = 0;
      v1 = (GameData_2216820 & 8) == 0;
    }
  }
  else {
    v7 = 1;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (((v1 | v7) & 1) != 0) {
      goto LABEL_8;
    }
  }
  else {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    GameRoutine_1a09c50();
    if (((v1 | v7) & 1) != 0) {
    LABEL_8:
      if (GameRoutine_e7c280(a1)) {
        v8 = -589947500;
      }
      else {
        v8 = 119788728;
      }
      if (v3 == v8) {
        return true;
      }
      goto LABEL_15;
    }
  }
  if (v3 == -1054720718) {
    return true;
  }
LABEL_15:
  v10 = *(_QWORD*)(a1 + 320);
  if (v10 == 0) {
    goto LABEL_22;
  }
  v5 = GameRoutine_1a0a0c0(v10);
  if (v5 == 0) {
    goto LABEL_22;
  }
  v11 = *(_QWORD*)(a1 + 312);
  if (v11 == 0 || *(_DWORD*)(*(_QWORD*)v11 + 64LL) != 0) {
    v12 = 1;
    goto LABEL_20;
  }
  if ((*(_BYTE*)(GameData_21f4cc0 + 13) & 1) != 0) {
    v12 = 0;
    v1 = true;
    goto LABEL_20;
  }
  if ((GameData_2216858 & 1) == 0) {
  LABEL_42:
    GameRoutine_8123d0(v5);
  }
  v12 = 0;
  v1 = (GameData_2216820 & 8) == 0;
LABEL_20:
  if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (((v1 | v12) & 1) != 0) {
      goto LABEL_22;
    }
  LABEL_35:
    v13 = 1669996436;
    return v3 == 0 || v3 == v13;
  }
  (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
  GameRoutine_1a09c50();
  if (((v1 | v12) & 1) == 0) {
    goto LABEL_35;
  }
LABEL_22:
  if (GameRoutine_e7c280(a1)) {
    v13 = -1101902990;
  }
  else {
    v13 = -574916402;
  }
  return v3 == 0 || v3 == v13;
}

__int64 GameHr_e80220(__int64 a1, __int64* a2, _QWORD* a3, __int64 a4,
                      __int64 a5, float a6)
{
  __int64 v6;
  __int64 v10;
  __int64 v11;
  __int64 result;
  __int64 v13;
  __int64 v14;
  float v15[4];
  _BYTE v16[32];
  _BYTE* v17;
  _QWORD v18[2];
  __int64 v19[2];
  _BYTE v20[32];
  _BYTE* v21;

  v6 = a2[1];
  v19[0] = *a2;
  v19[1] = v6;
  if (v6 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                              memory_order_relaxed);
  }
  v10 = a3[1];
  v18[0] = *a3;
  v18[1] = v10;
  if (v10 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_e7fde0(a1, v19, v18, 0, a6, 0.0);
    GameRoutine_1a09c50();
    if (v6 == 0) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  GameRoutine_e7fde0(a1, v19, v18, 0, a6, 0.0);
  if (v6 != 0) {
  LABEL_5:
    GameRoutine_1a09c50();
  }
LABEL_6:
  if (a4 == 0) {
    result = *(_QWORD*)(a5 + 32);
    if (result != 0) {
      return (*(__int64 (**)(__int64))(*(_QWORD*)result + 48LL))(result);
    }
    return result;
  }
  v11 = *(_QWORD*)(a5 + 32);
  v17 = nullptr;
  v15[0] = a6;
  if (v11 != 0) {
    if (v11 == a5) {
      v21 = v20;
      (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v11 + 24LL))(v11, v20);
    }
    else {
      v21 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    }
  }
  else {
    v21 = nullptr;
  }
  GameRoutine_654050(v20, v16);
  if (v21 == v20) {
    v13 = 32;
    goto LABEL_20;
  }
  if (v21 != nullptr) {
    v13 = 40;
  LABEL_20:
    (*(void (**)(_BYTE*))(*(_QWORD*)v21 + v13))(v21);
  }
  GameRoutine_e803d0(a4, v15);
  result = (__int64)v17;
  if (v17 == v16) {
    v14 = 32;
  }
  else {
    if (v17 == nullptr) {
      return result;
    }
    v14 = 40;
  }
  return (*(__int64 (**)(_BYTE*))(*(_QWORD*)v17 + v14))(v17);
}

__int64 GameHr_e9bcb0(__int64 a1, __int64 a2, signed int a3, __int64* a4)
{
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _BOOL4 v15;
  __int64 v16;
  __int64 v17;
  float v18;
  unsigned int v19;
  char v20;
  __int64 v22[2];

  v7 = a1 + ((__int64)a3 << 7);
  v8 = *(_QWORD*)(v7 + 752);
  v9 = *(_QWORD*)(v7 + 760);
  if (v9 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                              memory_order_relaxed);
  }
  v10 = a4[1];
  if (v10 == 0) {
    v10 = v9;
    goto LABEL_9;
  }
  if (*(_QWORD*)(v10 + 8) == -1) {
    v10 = v9;
    v11 = *(_QWORD*)(a1 + 536);
    if (v11 == 0) {
      goto LABEL_15;
    }
  LABEL_10:
    v12 = *(_QWORD*)(a1 + 528);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 16), 1u,
                              memory_order_relaxed);
    v13 = GameRoutine_1a0a0c0(v11);
    if (v13 == 0) {
      v12 = 0;
    }
    if (v10 == 0) {
      goto LABEL_19;
    }
    goto LABEL_16;
  }
  v8 = *a4;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 16), 1u,
                            memory_order_relaxed);
  if (v9 == 0) {
  LABEL_9:
    v11 = *(_QWORD*)(a1 + 536);
    if (v11 == 0) {
      goto LABEL_15;
    }
    goto LABEL_10;
  }
  GameRoutine_1a09c50();
  v11 = *(_QWORD*)(a1 + 536);
  if (v11 != 0) {
    goto LABEL_10;
  }
LABEL_15:
  v13 = 0;
  v12 = 0;
  if (v10 == 0) {
  LABEL_19:
    v15 = v12 == 0;
    goto LABEL_20;
  }
LABEL_16:
  v14 = GameRoutine_1a0a0c0(v10);
  if (v14 == 0) {
    goto LABEL_19;
  }
  v15 = v12 == v8;
  if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
    GameRoutine_1a09c50();
  }
LABEL_20:
  if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    GameRoutine_1a09c50();
  }
  if (v11 != 0) {
    GameRoutine_1a09c50();
  }
  if (v15) {
  LABEL_34:
    v19 = !v15;
    if (v10 == 0) {
      return v19;
    }
    goto LABEL_37;
  }
  v16 = *(_QWORD*)(a1 + 536);
  if (v16 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 16), 1u,
                              memory_order_relaxed);
    v17 = *(_QWORD*)(v16 + 8);
    GameRoutine_1a09c50();
    if (v17 != -1) {
      v18 = 0.3;
      v22[0] = v8;
      v22[1] = v10;
      if (v10 == 0) {
        goto LABEL_29;
      }
    LABEL_32:
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 16), 1u,
                                memory_order_relaxed);
      v20 = GameRoutine_e9ba00(a1, a2, a3, 1u, v22, v18);
      GameRoutine_1a09c50();
      if ((v20 & 1) == 0) {
        v19 = 0;
      LABEL_37:
        GameRoutine_1a09c50();
        return v19;
      }
      goto LABEL_33;
    }
  }
  v18 = 0.0;
  v22[0] = v8;
  v22[1] = v10;
  if (v10 != 0) {
    goto LABEL_32;
  }
LABEL_29:
  if ((GameRoutine_e9ba00(a1, a2, a3, 1u, v22, v18) & 1) != 0) {
  LABEL_33:
    *(_DWORD*)(GameData_2203490 + 1204) |= 0x800u;
    goto LABEL_34;
  }
  return 0;
}

#pragma GCC visibility pop
