#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_7dbc20(unsigned __int64, int);
__int64 GameRoutine_7dbdd0(__int64);
__int64 GameRoutine_9a28e0(_QWORD);
__int64 Situation_764060(void);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD, _QWORD);
extern _UNKNOWN GameData_1a891cc;
extern _UNKNOWN GameData_1aafe61;
extern _UNKNOWN GameData_1ac3036;
extern _UNKNOWN GameData_21da3b8;
extern _UNKNOWN GameData_21da3d0;
extern _UNKNOWN GameData_21da3e8;
extern __int64 (*GameData_1f95fe8[])();
extern __int64 GameData_21ca2f8;
extern __int64 GameData_21d9968;
extern __int64 GameData_21d9970;
extern __int64 GameData_21d99e8;
extern __int64 GameData_21da3a8;
extern __int64 GameData_21da3b0;
extern __int64 GameData_21da3c0;
extern __int64 GameData_21da3c8;
extern __int64 GameData_21da3d8;
extern __int64 GameData_21da3e0;
extern __int64 game_GameModeData_instance_;
__int64 BonusExpList_7ffb30(__int64 a1);
__int64 BonusExpList_7ffec0(__int64* a1, __int64 a2);

__int64 BonusExpList_7ffb30(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  int v4;
  int v5;
  int v6;
  __int64 v7;
  int v8;
  int v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned int v14;
  int v15;
  unsigned int v16;
  int v17;
  __int64 v18;
  int v20;
  int v21;
  __int64 v22;
  __int64 v23;

  v1 = *(_QWORD*)a1;
  v3 = (*(_QWORD*)a1 >> 50) & 0x7FLL;
  if ((*(_QWORD*)a1 & 1) != 0) {
    v4 = (unsigned __int8)*(_QWORD*)a1 >> 1;
  }
  else {
    v4 = 0;
  }
  v5 = (HIDWORD(*(_QWORD*)a1) & 0x1FF) * ((unsigned int)*(_QWORD*)a1 >> 23) *
       ((*(_QWORD*)a1 >> 41) & 0x1FF);
  v6 = (v5 * v4 + 999999) / 1000000;
  if ((_DWORD)v3 != 0) {
    v7 =
        (1125899907LL * (v5 * ((unsigned __int8)*(_QWORD*)a1 >> 1) + 999999)) >>
        50;
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21da3d0,
                              memory_order_acquire) &
         1) == 0) {
      v20 = v7;
      v21 = __cxa_guard_acquire(&GameData_21da3d0);
      LODWORD(v7) = v20;
      if (v21 != 0) {
        GameData_21da3c8 = (__int64)&GameData_1aafe61;
        GameData_21da3c0 = game_HashString(&GameData_1aafe61, v22);
        __cxa_guard_release(&GameData_21da3d0);
        LODWORD(v7) = v20;
      }
    }
    v8 = v7 + ((unsigned int)v7 >> 31);
    v9 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v10 = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), &GameData_21da3c0);
      if (v10 != 0) {
        v9 = *(_DWORD*)(v10 + 32);
      }
      else {
        v9 = 0;
      }
    }
    v11 = *(_QWORD*)a1;
    v1 = (1759218605LL * (v8 * (int)v3 * v9 + 9999)) >> 44;
    LODWORD(v1) = v1 + ((unsigned int)v1 >> 31);
    v12 = *(_QWORD*)a1;
    if ((int)v1 <= 1) {
      LODWORD(v1) = 1;
    }
    v6 += v1;
    LOBYTE(v1) = *(_QWORD*)a1;
  }
  else {
    LODWORD(v11) = *(_QWORD*)a1;
    v12 = *(_QWORD*)a1;
  }
  v13 = v12 >> 57;
  v14 = ((unsigned int)v11 >> 8) & 0x7F;
  if ((v1 & 1) != 0) {
    v15 = v13;
  }
  else {
    v15 = 0;
  }
  if (v13 == 0) {
    v15 = 0;
  }
  v16 = v15 + v6;
  if (v14 != 0) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21da3b8,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire(&GameData_21da3b8) != 0) {
      GameData_21da3b0 = (__int64)&GameData_1a891cc;
      GameData_21da3a8 = game_HashString(&GameData_1a891cc, v23);
      __cxa_guard_release(&GameData_21da3b8);
    }
    v17 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v18 = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), &GameData_21da3a8);
      if (v18 != 0) {
        v17 = *(_DWORD*)(v18 + 32);
      }
      else {
        v17 = 0;
      }
    }
    v16 += (int)(v17 * v14 * (*(_DWORD*)(a1 + 8) & 0x1FF) *
                     ((*(_DWORD*)(a1 + 8) >> 9) & 0x1FF) +
                 999999) /
           1000000;
  }
  return v16;
}

__int64 BonusExpList_7ffec0(__int64* a1, __int64 a2)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  int v7;
  int v8;
  int v9;
  unsigned __int64 v10;
  unsigned int v11;
  __int64 v12;
  unsigned int v13;
  __int64 v14;
  int v15;
  char v16;
  __int64 v17;
  __int64 v18;
  int v19;
  int v20;
  int v21;
  int v22;
  __int64 v23;
  int v24;
  __int64 v25;
  int v26;
  __int64 v27;
  __int64 v28;
  int v29;
  unsigned int v30;
  __int64 v31;
  __int64 v32;
  int v33;
  int v34;
  unsigned __int64 v35;
  int v36;
  int v37;
  signed int v38;
  __int64 v39;
  _BYTE v40[32];
  _BYTE* v41;
  __int64 v42;
  int* v43;
  _BYTE* v44;
  __int64* v45;
  int v46;

  if (GameData_21ca2f8 == 0) {
    return 0;
  }
  result = 0;
  if (a2 != 0) {
    v5 = *a1;
    v6 = a1[1];
    if (*a1 != v6) {
      v7 = 0;
      while (1) {
        v42 = *(_QWORD*)v5;
        LODWORD(v43) = *(_DWORD*)(v5 + 8);
        v13 = GameRoutine_7dbdd0(a2);
        v14 = *(_QWORD*)(a2 + 440);
        if (v13 >= 0x1F4) {
          v15 = 500;
        }
        else {
          v15 = v13;
        }
        if (v14 != 0) {
          v16 = *(_BYTE*)(v14 + 16);
        }
        else {
          v16 = 9;
        }
        v9 = *(unsigned __int8*)(a2 + 498);
        if (((1 << v16) & 0xF1) == 0) {
          v17 = *(_QWORD*)(a2 + 392);
          if (v9 != *(unsigned __int8*)(v17 + 445)) {
            v20 = *(char*)(v17 + 446);
            v21 = v9 - v20;
            goto LABEL_31;
          }
          if (game_GameModeData_instance_ != 0) {
            v9 = *(_DWORD*)(game_GameModeData_instance_ + 68);
            v18 = *(_QWORD*)(game_GameModeData_instance_ + 16);
            if (v18 != 0) {
              v9 += *(char*)(v18 + 128);
            }
            v19 = *(unsigned __int8*)(v17 + 442);
            if (*(_BYTE*)(v17 + 442) == 0) {
            LABEL_30:
              v20 = *(char*)(v17 + 443);
              v21 = v9 + v20;
            LABEL_31:
              if (v21 <= 1) {
                v21 = 1;
              }
              if (v21 >= 99) {
                v21 = 99;
              }
              if (v20 != 0) {
                v19 = v21;
              }
              else {
                v19 = v9;
              }
              v9 = *(unsigned __int8*)(v17 + 447);
              if (*(_BYTE*)(v17 + 447) != 0) {
                goto LABEL_10;
              }
            LABEL_39:
              v22 = *(char*)(v17 + 448);
              if (v22 != 0) {
                v8 = v19 + v22;
                if (v8 <= 1) {
                  v8 = 1;
                }
                if (v8 >= 99) {
                  v9 = 99;
                }
                else {
                  v9 = v8;
                }
              }
              else {
                v9 = v19;
              }
              goto LABEL_10;
            }
          }
          else {
            v9 = 0;
            v19 = *(unsigned __int8*)(v17 + 442);
            if (*(_BYTE*)(v17 + 442) == 0) {
              goto LABEL_30;
            }
          }
          v9 = *(unsigned __int8*)(v17 + 447);
          if (*(_BYTE*)(v17 + 447) == 0) {
            goto LABEL_39;
          }
        }
      LABEL_10:
        v10 = v42 & 0xFE03FE00007FFFFELL | (unsigned int)(v15 << 23);
        v11 = GameRoutine_7dbc20(
            GameData_21d99e8,
            (unsigned int)(unsigned __int8)(*(_DWORD*)v5 >> 15) - v9);
        if (v11 >= 0x1F4) {
          v12 = 500;
        }
        else {
          v12 = v11;
        }
        v42 = v10 | (v12 << 32) | 1;
        v7 += BonusExpList_7ffb30((__int64)&v42);
        v5 += 12;
        if (v5 == v6) {
          if (v7 <= 0) {
            return 0;
          }
          v41 = nullptr;
          v46 = 0;
          v42 = (__int64)GameData_1f95fe8;
          v43 = &v46;
          v45 = &v42;
          v44 = v40;
          Situation_764060();
          if (v45 == &v42) {
            v23 = 32;
          LABEL_47:
            (*(void (**)(void))(*v45 + v23))();
          }
          else if (v45 != nullptr) {
            v23 = 40;
            goto LABEL_47;
          }
          v24 = v46;
          if (v41 == v40) {
            v25 = 32;
          LABEL_52:
            (*(void (**)(void))(*(_QWORD*)v41 + v25))();
          }
          else if (v41 != nullptr) {
            v25 = 40;
            goto LABEL_52;
          }
          if (v24 < 1) {
            return 0;
          }
          if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21da3e8,
                                    memory_order_acquire) &
               1) == 0 &&
              (unsigned int)__cxa_guard_acquire(&GameData_21da3e8) != 0) {
            GameData_21da3e0 = (__int64)&GameData_1ac3036;
            GameData_21da3d8 = game_HashString(&GameData_1ac3036, v39);
            __cxa_guard_release(&GameData_21da3e8);
          }
          v26 = game_GameModeData_instance_;
          if (game_GameModeData_instance_ != 0) {
            v27 = game_GameVariableTable_Find(
                *(_QWORD*)(game_GameModeData_instance_ + 48),
                &GameData_21da3d8);
            if (v27 != 0) {
              v26 = *(_DWORD*)(v27 + 32);
            }
            else {
              v26 = 0;
            }
          }
          v28 = (1374389535LL * (v26 * v7 + 99)) >> 37;
          v29 = (int)(v24 + v28 + ((unsigned int)v28 >> 31) - 1) / v24;
          if (v29 <= 1) {
            v30 = 1;
          }
          else {
            v30 = v29;
          }
          v31 = GameRoutine_9a28e0(64);
          if (game_GameModeData_instance_ == 0) {
            return v30;
          }
          v32 = game_GameVariableTable_Find(
              *(_QWORD*)(game_GameModeData_instance_ + 48), v31);
          if (v32 == 0) {
            return v30;
          }
          v33 = *(_DWORD*)(v32 + 32);
          result = v30;
          if (v33 != 0) {
            v34 = *(_DWORD*)(a2 + 504);
            v35 = (unsigned __int64)(GameData_21d9970 - GameData_21d9968) >> 2;
            if (v33 < (int)v35) {
              LODWORD(v35) = v33;
            }
            v36 = v35 - 1;
            if (v33 <= 0) {
              v37 = 0;
            }
            else {
              v37 = v36;
            }
            v38 = *(_DWORD*)(GameData_21d9968 + 4LL * v37);
            if (v38 < (int)(v34 + v30)) {
              return (v38 - v34) & (unsigned int)~((v38 - v34) >> 31);
            }
          }
          return result;
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
