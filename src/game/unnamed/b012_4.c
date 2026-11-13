#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _QWORD GameData_1b01768[4];
extern __int64* GameData_212dec0[4];
extern __int64* GameData_212ea58;
extern __int64* GameData_212f628[9];
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
__attribute__((swiftcall)) void GameRoutine_80c770(PSEUDO_X8, _QWORD);
void __attribute__((noreturn)) GameRoutine_8123d0(_QWORD);
__int64 GameRoutine_e70790(__int64);
__int64 GameRoutine_e734e0(__int64 result);
__int64 GameRoutine_e73d00(__int64, __int64);
__int64 GameRoutine_e749a0(_QWORD, _QWORD);
bool GameRoutine_e76770(__int64, __int64, unsigned __int16*);
__int64 GameRoutine_e7d890(_QWORD);
__int64 GameRoutine_e7fde0(__int64, __int64*, _QWORD*, int, float, float);
__int64 GameRoutine_e803d0(_QWORD, _QWORD);
__attribute__((swiftcall)) void game_80c770(PSEUDO_X8, __int64 result);
__int64 CmdBtlUnit_e7d890(__int64);
__int64 CmdbtlPartyNatives_e73d00(__int64);
__int64 CmdbtlPartyNatives_e749a0(__int64 result, _QWORD*);
__int64 GameRoutine_17c6540_alt1(__int64, char) __asm__("GameRoutine_17c6540");
__int64 MapCombatPrediction_19f2a10(__int64, __int64, __int64*);
__int64 game_19f3620(__int64, char);
unsigned __int128 game_19f3620_pair(__int64, char) __asm__("game_19f3620");
__int64 game_Unit_EquipItem_6d8f40(__int64, unsigned int);
__int64 game_Unit_GetParam(__int64);
__int64 game_cmdbtl_anonymous_e70790(__int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
void CmdBtlParty_e734e0(__int64);
bool GameHr_e726b0(_QWORD* a1, char a2);
void GameHr_e74760(__int64 a1, _QWORD* a2);

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
  unsigned int v19;
  _DWORD* v20;
  unsigned int v21;
  __int64* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64* v35;
  __int64* v36;
  int v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64* v41;
  __int64 v42[2];
  _BYTE v43[16];

  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v4 = GameData_212ea58;
  v5 = *GameData_212ea58;
  v6 = *(_QWORD*)(*GameData_212ea58 + 640);
  v7 = *(_QWORD*)(*GameData_212ea58 + 648);
  if (v7 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8),
                                            1u, memory_order_relaxed),
                  atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0)) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    std___1___shared_weak_count___release_weak(v7),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v6 != 0) {
      goto LABEL_4;
    }
  }
  else if (v6 != 0) {
    goto LABEL_4;
  }
  v6 = *(_QWORD*)(v5 + 656);
  v32 = *(_QWORD*)(v5 + 664);
  if (v32 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v32 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v32 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v32 + 16LL))(v32),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      std___1___shared_weak_count___release_weak(v32),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
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
      (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      std___1___shared_weak_count___release_weak(v10),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v9 != 0) {
        goto LABEL_8;
      }
    LABEL_36:
      v9 = v8[82];
      v33 = v8[83];
      if (v33 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v33 + 8), 1u,
                                  memory_order_relaxed);
        if (atomic_fetch_add((atomic_ullong* volatile)(v33 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v33 + 16LL))(v33),
              v18 = COERCE_AS(__typeof__(v18),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          std___1___shared_weak_count___release_weak(v33),
              v18 = COERCE_AS(__typeof__(v18),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
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
                   16LL * (int)v11[12]),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
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
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    std___1___shared_weak_count___release_weak(v13),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v15 = std___1___shared_weak_count_lock(v13),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  std___1___shared_weak_count___release_weak(v13),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v16 = v14 == 0;
  if (v15 != 0 && v14 != 0) {
    if (a1[2865] - a1[2864] < 0x11u) {
      v16 = true;
      goto LABEL_58;
    }
    v42[0] = ({
      unsigned __int128 r_ = game_19f3620_pair((__int64)(a1 + 2863), a2 & 1);
      v18 = COERCE_AS(__typeof__(v18), (unsigned long long)(r_ >> 64));
      (__int64)(unsigned long long)r_;
    });
    v42[1] = v18;
    v19 = MapCombatPrediction_19f2a10((__int64)(a1 + 2863),
                                      *(_QWORD*)(v14 + 16), v42),
    v18 = COERCE_AS(__typeof__(v18),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v20 = *(_DWORD**)(*v4 + 640);
    if ((v20[12] & 0x80000000) != 0) {
      goto LABEL_56;
    }
    v21 = v19;
    v22 = (__int64*)(*(_QWORD*)((*(__int64 (**)(_QWORD))(*(_QWORD*)v20 + 32LL))(
                                    *(_QWORD*)(*v4 + 640)) +
                                40) +
                     16LL * (int)v20[12]),
    v18 = COERCE_AS(__typeof__(v18),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v23 = v22[1];
    if (v23 == 0) {
      goto LABEL_56;
    }
    v24 = *v22;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v23 + 8), 1u,
                              memory_order_relaxed);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v23 + 16), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      std___1___shared_weak_count___release_weak(v23),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v25 = std___1___shared_weak_count_lock(v23),
    v18 = COERCE_AS(__typeof__(v18),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    std___1___shared_weak_count___release_weak(v23),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v25 != 0 && v24 != 0) {
      v27 = *(_QWORD*)(v24 + 16);
      v28 = *(_QWORD*)(v27 + 440);
      if (v28 != 0 &&
          (unsigned __int64)(v29 = *(unsigned __int8*)(v28 + 16)) <= 3) {
        v30 = GameData_1b01768[v29];
      }
      else {
        v30 = 3;
      }
      v34 = *v4 + (v30 << 7);
      v35 = *(__int64**)(v34 + 712);
      v36 = *(__int64**)(v34 + 720);
      if (v35 == v36) {
        v37 = 0;
      }
      else {
        v37 = 0;
        do {
          v38 = *v35;
          v35 += 2;
          if (v38 == v24) {
            break;
          }
          ++v37;
        } while (v35 != v36);
      }
      v39 = a1[2877];
      v40 = a1[2878];
      if (v39 == v40) {
        goto LABEL_54;
      }
      while (*(_DWORD*)v39 != v37) {
        v39 += 12;
        if (v39 == v40) {
          goto LABEL_53;
        }
      }
      if ((game_Unit_EquipItem_6d8f40(v27, v21) & 1) != 0) {
        game_80c770((void*)((__int64)v43),
                    (__int64)"SE_SYS_Weapon_Change_LinkUnit"),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        CmdBtlUnit_e7d890(v24),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v41 = GameData_212f628[0];
        GameRoutine_17c6540_alt1(*GameData_212f628[0], a2 & 1),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        *(_BYTE*)(v39 + 8) = 1;
        *(_BYTE*)(*v41 + 281) = 1;
      }
    }
  LABEL_53:
    if (v25 == 0) {
    LABEL_56:
      game_cmdbtl_anonymous_e70790((__int64)a1),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      goto LABEL_57;
    }
  LABEL_54:
    if (atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      std___1___shared_weak_count___release_weak(v25),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    goto LABEL_56;
  }
LABEL_57:
  if (v15 != 0) {
  LABEL_58:
    if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      std___1___shared_weak_count___release_weak(v15),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    return !v16;
  }
LABEL_60:
  v16 = true;
  return !v16;
}

void GameHr_e74760(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _BOOL4 v8;
  int v9;
  int v10;
  char v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  __int64* v18;
  __int64* v19;
  int v20;
  int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  _BOOL4 v26;
  __int64 v27;
  int v28;
  int v29;
  int v30;
  __int64 v31;

  v2 = *a2;
  v5 = *(_QWORD*)(*a2 + 320LL);
  if (v5 == 0) {
    goto LABEL_8;
  }
  v6 = std___1___shared_weak_count_lock(v5);
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
    v31 = v6;
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v31);
    if (v8) {
      goto LABEL_8;
    }
  }
  v9 = 0;
LABEL_9:
  CmdbtlPartyNatives_e749a0(a1 + 40, a2);
  v10 = *(_DWORD*)(a1 + 12) - v9;
  v12 = CmdbtlPartyNatives_e73d00(a1);
  v13 = *(_DWORD*)(a1 + 20) + *(_DWORD*)(a1 + 16);
  v14 = *(_DWORD*)(a1 + 12);
  if (v13 <= 1) {
    v13 = 1;
  }
  v15 = v12 & 1 | (*(_DWORD*)(a1 + 36) == 1);
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
    CmdBtlParty_e734e0(a1);
  }
  v18 = *(__int64**)(a1 + 40);
  v19 = *(__int64**)(a1 + 48);
  if (v18 != v19) {
    v20 = 0;
    while (1) {
      v22 = *v18;
      v23 = *(_QWORD*)(*v18 + 320);
      if (v23 != 0) {
        v24 = std___1___shared_weak_count_lock(v23);
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
            v27 = v24;
            (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
            std___1___shared_weak_count___release_weak(v27);
            if (!v26) {
            LABEL_36:
              v21 = 0;
              goto LABEL_26;
            }
          }
        }
      }
      v21 = game_Unit_GetParam(*(_QWORD*)(v22 + 16));
    LABEL_26:
      v20 += v21;
      v18 += 2;
      if (v18 == v19) {
        goto LABEL_38;
      }
    }
  }
  v20 = 0;
LABEL_38:
  v28 = *(_DWORD*)(a1 + 12);
  if (v20 <= 1) {
    v29 = 1;
  }
  else {
    v29 = v20;
  }
  v30 = *(_DWORD*)(a1 + 20) + v29;
  if (v30 <= 1) {
    v30 = 1;
  }
  if (v30 >= (unsigned int)v28) {
    v30 = *(_DWORD*)(a1 + 12);
  }
  if (v28 < 0) {
    v30 = 0;
  }
  *(_DWORD*)(a1 + 12) = v30;
  *(_DWORD*)(a1 + 16) = v29;
  if (v30 != v28) {
    CmdBtlParty_e734e0(a1);
  }
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

#pragma GCC visibility pop
