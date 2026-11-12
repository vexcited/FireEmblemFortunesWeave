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
__int64* game_9a28e0(int);
__int64 Situation_764060_alt1(__int64, __int64) __asm__("Situation_764060");
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");

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
      v21 = __cxa_guard_acquire_alt1((__int64)&GameData_21da3d0);
      LODWORD(v7) = v20;
      if (v21 != 0) {
        GameData_21da3c8 = (__int64)&GameData_1aafe61;
        GameData_21da3c0 = game_HashString_alt1((__int64)&GameData_1aafe61);
        __cxa_guard_release_alt1((__int64)&GameData_21da3d0);
        LODWORD(v7) = v20;
      }
    }
    v8 = v7 + ((unsigned int)v7 >> 31);
    v9 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v10 = game_GameVariableTable_Find_alt1(
          *(_QWORD**)(game_GameModeData_instance_ + 48),
          (unsigned __int64*)&GameData_21da3c0);
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
        __cxa_guard_acquire_alt1((__int64)&GameData_21da3b8) != 0) {
      GameData_21da3b0 = (__int64)&GameData_1a891cc;
      GameData_21da3a8 = game_HashString_alt1((__int64)&GameData_1a891cc);
      __cxa_guard_release_alt1((__int64)&GameData_21da3b8);
    }
    v17 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v18 = game_GameVariableTable_Find_alt1(
          *(_QWORD**)(game_GameModeData_instance_ + 48),
          (unsigned __int64*)&GameData_21da3a8);
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
  __int64 v13;
  unsigned int v14;
  __int64 v15;
  int v16;
  char v17;
  __int64 v18;
  __int64 v19;
  int v20;
  int v21;
  int v22;
  int v23;
  __int64 v24;
  int v25;
  __int64 v26;
  int v27;
  __int64 v28;
  __int64 v29;
  int v30;
  unsigned int v31;
  __int64* v32;
  __int64 v33;
  int v34;
  int v35;
  unsigned __int64 v36;
  int v37;
  int v38;
  signed int v39;
  struct {
    _BYTE v40[32];
    _BYTE* v41;
  } v40_;
  struct {
    __int64 v42;
    int* v43;
    _BYTE* v44;
    char gap72_[8];
    __int64* v45;
  } v42_;
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
        v42_.v42 = *(_QWORD*)v5;
        LODWORD(v42_.v43) = *(_DWORD*)(v5 + 8);
        v14 = GameRoutine_7dbdd0(a2);
        v15 = *(_QWORD*)(a2 + 440);
        if (v14 >= 0x1F4) {
          v16 = 500;
        }
        else {
          v16 = v14;
        }
        if (v15 != 0) {
          v17 = *(_BYTE*)(v15 + 16);
        }
        else {
          v17 = 9;
        }
        v9 = *(unsigned __int8*)(a2 + 498);
        if (((1 << v17) & 0xF1) == 0) {
          v18 = *(_QWORD*)(a2 + 392);
          if (v9 != *(unsigned __int8*)(v18 + 445)) {
            v21 = *(char*)(v18 + 446);
            v22 = v9 - v21;
            goto LABEL_31;
          }
          if (game_GameModeData_instance_ != 0) {
            v9 = *(_DWORD*)(game_GameModeData_instance_ + 68);
            v19 = *(_QWORD*)(game_GameModeData_instance_ + 16);
            if (v19 != 0) {
              v9 += *(char*)(v19 + 128);
            }
            v20 = *(unsigned __int8*)(v18 + 442);
            if (*(_BYTE*)(v18 + 442) == 0) {
            LABEL_30:
              v21 = *(char*)(v18 + 443);
              v22 = v9 + v21;
            LABEL_31:
              if (v22 <= 1) {
                v22 = 1;
              }
              if (v22 >= 99) {
                v22 = 99;
              }
              if (v21 != 0) {
                v20 = v22;
              }
              else {
                v20 = v9;
              }
              v9 = *(unsigned __int8*)(v18 + 447);
              if (*(_BYTE*)(v18 + 447) != 0) {
                goto LABEL_10;
              }
            LABEL_39:
              v23 = *(char*)(v18 + 448);
              if (v23 != 0) {
                v8 = v20 + v23;
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
                v9 = v20;
              }
              goto LABEL_10;
            }
          }
          else {
            v9 = 0;
            v20 = *(unsigned __int8*)(v18 + 442);
            if (*(_BYTE*)(v18 + 442) == 0) {
              goto LABEL_30;
            }
          }
          v9 = *(unsigned __int8*)(v18 + 447);
          if (*(_BYTE*)(v18 + 447) == 0) {
            goto LABEL_39;
          }
        }
      LABEL_10:
        v10 = v42_.v42 & 0xFE03FE00007FFFFELL | (unsigned int)(v16 << 23);
        v11 = GameRoutine_7dbc20(
            GameData_21d99e8,
            (unsigned int)(unsigned __int8)(*(_DWORD*)v5 >> 15) - v9);
        if (v11 >= 0x1F4) {
          v12 = 500;
        }
        else {
          v12 = v11;
        }
        v42_.v42 = v10 | (v12 << 32) | 1;
        v13 = BonusExpList_7ffb30((__int64)&v42_.v42);
        v7 += v13;
        v5 += 12;
        if (v5 == v6) {
          if (v7 <= 0) {
            return 0;
          }
          v40_.v41 = nullptr;
          v46 = 0;
          v42_.v42 = (__int64)GameData_1f95fe8;
          v42_.v43 = &v46;
          v42_.v45 = &v42_.v42;
          v42_.v44 = v40_.v40;
          Situation_764060_alt1(v13, (__int64)&v42_.v42);
          if (v42_.v45 == &v42_.v42) {
            v24 = 32;
          LABEL_47:
            (*(void (**)(__int64))(*v42_.v45 + v24))((__int64)v42_.v45);
          }
          else if (v42_.v45 != nullptr) {
            v24 = 40;
            goto LABEL_47;
          }
          v25 = v46;
          if (v40_.v41 == v40_.v40) {
            v26 = 32;
          LABEL_52:
            (*(void (**)(__int64))(*(_QWORD*)v40_.v41 + v26))(
                (__int64)v40_.v41);
          }
          else if (v40_.v41 != nullptr) {
            v26 = 40;
            goto LABEL_52;
          }
          if (v25 < 1) {
            return 0;
          }
          if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21da3e8,
                                    memory_order_acquire) &
               1) == 0 &&
              __cxa_guard_acquire_alt1((__int64)&GameData_21da3e8) != 0) {
            GameData_21da3e0 = (__int64)&GameData_1ac3036;
            GameData_21da3d8 = game_HashString_alt1((__int64)&GameData_1ac3036);
            __cxa_guard_release_alt1((__int64)&GameData_21da3e8);
          }
          v27 = game_GameModeData_instance_;
          if (game_GameModeData_instance_ != 0) {
            v28 = game_GameVariableTable_Find_alt1(
                *(_QWORD**)(game_GameModeData_instance_ + 48),
                (unsigned __int64*)&GameData_21da3d8);
            if (v28 != 0) {
              v27 = *(_DWORD*)(v28 + 32);
            }
            else {
              v27 = 0;
            }
          }
          v29 = (1374389535LL * (v27 * v7 + 99)) >> 37;
          v30 = (int)(v25 + v29 + ((unsigned int)v29 >> 31) - 1) / v25;
          if (v30 <= 1) {
            v31 = 1;
          }
          else {
            v31 = v30;
          }
          v32 = game_9a28e0(64);
          if (game_GameModeData_instance_ == 0) {
            return v31;
          }
          v33 = game_GameVariableTable_Find_alt1(
              *(_QWORD**)(game_GameModeData_instance_ + 48),
              (unsigned __int64*)v32);
          if (v33 == 0) {
            return v31;
          }
          v34 = *(_DWORD*)(v33 + 32);
          result = v31;
          if (v34 != 0) {
            v35 = *(_DWORD*)(a2 + 504);
            v36 = (unsigned __int64)(GameData_21d9970 - GameData_21d9968) >> 2;
            if (v34 < (int)v36) {
              LODWORD(v36) = v34;
            }
            v37 = v36 - 1;
            if (v34 <= 0) {
              v38 = 0;
            }
            else {
              v38 = v37;
            }
            v39 = *(_DWORD*)(GameData_21d9968 + 4LL * v38);
            if (v39 < (int)(v35 + v31)) {
              return (v39 - v35) & (unsigned int)~((v39 - v35) >> 31);
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
