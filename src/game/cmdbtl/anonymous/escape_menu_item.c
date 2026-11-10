#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_ec1aa0(void);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 GameData_21f4cc0;
extern __int64 GameData_2203490;
extern __int64 GameData_2216820;
extern char GameData_2216858;
void __attribute__((noreturn)) GameRoutine_8123d0(void);
__int64 EscapeMenuItem_Unknown6();
__int64 GameRoutine_1011550(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_8224a0(_QWORD);
__int64 GameRoutine_e618a0(void);
__int64 GameRoutine_ec1530(_QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
extern __int64 GameData_212f510[6];
extern __int64 GameData_2219098;
extern __int64 GameData_22190a0;
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64* GameData_212dec0[4];
extern __int64* GameData_212f4e0[3];
__int64 game_cmdbtl_anonymous_EscapeMenuItem_ACall_closure_Invoke();
__int64 game_cmdbtl_anonymous_EscapeMenuItem_ACall_closure0_Invoke();
__int64 Dialog_1649e50(__int64 result, __int64, char, char);
__int64 GameRoutine_100b530(__int64 result);
__int64 MapSortieMenu_871860(__int64, __int64, __int64, __int64, __int64);
__int64 ProcList_9bd480(__int64);
__int64 game_ProcList_Call_9bcfa0(__int64, __int64);
extern __int64 (*GameData_2069e30[])();
extern __int64 (*GameData_2069ea0[])();
extern __int64 (*GameData_2069f20[])();
extern __int64 (*GameData_2069fb0[])();
extern __int64 GameData_22190a8;
void __attribute__((noreturn))
GameRoutine_8123d0_alt1() __asm__("GameRoutine_8123d0");
__int64 EscapeMenuItem_Unknown25(_QWORD* a1);
__int64
game_cmdbtl_anonymous_EscapeMenuItem_ACall_closure_Invoke_161df00(__int64 a1,
                                                                  __int64* a2);

__int64 EscapeMenuItem_Unknown6()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v0 = GameData_2203490;
  v1 = *(_QWORD*)(GameData_2203490 + 640);
  v2 = *(_QWORD*)(GameData_2203490 + 648);
  if (v2 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8),
                                            1u, memory_order_relaxed),
                  atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0)) {
    v3 = v1;
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    std___1___shared_weak_count___release_weak(v2);
    v1 = v3;
    if (v3 != 0) {
      goto LABEL_9;
    }
  }
  else if (v1 != 0) {
    goto LABEL_9;
  }
  v1 = *(_QWORD*)(v0 + 656);
  v4 = *(_QWORD*)(v0 + 664);
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v5 = v1;
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak(v4);
      v1 = v5;
    }
  }

LABEL_9:
  (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
  if ((*(_BYTE*)(GameData_21f4cc0 + 13) & 1) != 0) {
    return GameRoutine_ec1aa0();
  }
  if ((GameData_2216858 & 1) == 0) {
    GameRoutine_8123d0();
  }
  if ((GameData_2216820 & 8) != 0) {
    return 0;
  }
  else {
    return GameRoutine_ec1aa0();
  }
}

__int64 EscapeMenuItem_Unknown25(_QWORD* a1)
{
  unsigned int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  struct {
    _QWORD v10[4];
    _QWORD* v11;
  } v10_;

  v2 = 1;
  if (((*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1) & 1) != 0) {
    GameRoutine_100b530(GameData_2219098);
    *(_BYTE*)(GameData_22190a8 + 11) = 0;
    *(_BYTE*)(GameData_22190a0 + 8) = 1;
    v3 = a1[1];
    if (*(_QWORD*)(v3 + 152) != 0) {
      v4 = *(_QWORD*)(v3 + 152);
    }
    else {
      v4 = a1[1];
    }
    v5 = ProcList_9bd480(v4);
    if (v5 == 0) {
      return 12;
    }
    v6 = v5;
    v10_.v10[0] = GameData_2069e30;
    v10_.v11 = v10_.v10;
    game_ProcList_Call_9bcfa0(v5, (__int64)v10_.v10);
    if (v10_.v11 == v10_.v10) {
      v7 = 32;
    }
    else {
      if (v10_.v11 == nullptr) {
        goto LABEL_11;
      }
      v7 = 40;
    }
    (*(void (**)(__int64))(*v10_.v11 + v7))((__int64)v10_.v11);
  LABEL_11:
    v10_.v10[0] = GameData_2069fb0;
    v10_.v11 = v10_.v10;
    game_ProcList_Call_9bcfa0(v6, (__int64)v10_.v10);
    if (v10_.v11 == v10_.v10) {
      v8 = 32;
    }
    else {
      if (v10_.v11 == nullptr) {
        return 12;
      }
      v8 = 40;
    }
    (*(void (**)(__int64))(*v10_.v11 + v8))((__int64)v10_.v11);
    return 12;
  }
  return v2;
}

__int64

game_cmdbtl_anonymous_EscapeMenuItem_ACall_closure_Invoke_161df00(__int64 a1,
                                                                  __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 result;
  __int64 v7;
  struct {
    _QWORD v8[4];
    _QWORD* v9;
  } v8_;
  struct {
    _QWORD v10[4];
    _QWORD* v11;
  } v10_;
  struct {
    _QWORD v12[4];
    _QWORD* v13;
  } v12_;
  const char* v14;

  v2 = *a2;
  v14 = "MID_Menu_Retired_Confirm";
  v12_.v13 = v12_.v12;
  v8_.v9 = v8_.v8;
  v12_.v12[0] = GameData_2069ea0;
  v10_.v11 = v10_.v10;
  v10_.v10[0] = GameData_2069f20;
  v8_.v8[0] = GameData_2069f20;
  v3 = MapSortieMenu_871860(v2, (__int64)&v14, (__int64)v12_.v12,
                            (__int64)v10_.v10, (__int64)v8_.v8);
  if (v8_.v9 == v8_.v8) {
    v4 = 32;
  }
  else {
    if (v8_.v9 == nullptr) {
      goto LABEL_6;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v8_.v9 + v4))((__int64)v8_.v9);
LABEL_6:
  if (v10_.v11 == v10_.v10) {
    v5 = 32;
  }
  else {
    if (v10_.v11 == nullptr) {
      goto LABEL_11;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v10_.v11 + v5))((__int64)v10_.v11);
LABEL_11:
  result = (__int64)v12_.v13;
  if (v12_.v13 == v12_.v12) {
    v7 = 32;
  }
  else {
    if (v12_.v13 == nullptr) {
      goto LABEL_16;
    }
    v7 = 40;
  }
  result = (*(__int64 (**)(__int64))(*v12_.v13 + v7))((__int64)v12_.v13);
LABEL_16:
  if ((GameData_2216858 & 1) == 0) {
    GameRoutine_8123d0_alt1();
  }
  if ((GameData_2216820 & 0x800000) != 0) {
    return Dialog_1649e50(v3, (__int64)"MID_CmdBtl_Escape_Attention", 1, 0);
  }
  return result;
}

__int64 game_cmdbtl_anonymous_EscapeMenuItem_ACall_closure_Invoke()
{
  *(_BYTE*)(*GameData_212dec0[0] + 11) = 1;
  GameRoutine_e618a0();
  return 4;
}

__int64 game_cmdbtl_anonymous_EscapeMenuItem_ACall_closure0_Invoke()
{
  __int64 v0;
  int v1;
  __int64 v2;
  int v3;
  int v4;
  unsigned int v5;
  int v6;
  float v7;
  __int64 result;

  if (*(_BYTE*)(GameData_22190a0 + 8) == 1) {
    *(_BYTE*)(GameData_22190a0 + 8) = 0;
  }
  *(_BYTE*)(*GameData_212f4e0[0] + 11) = 1;
  result = GameData_2219098;
  *(_BYTE*)(GameData_2219098 + 8) = 1;
  if ((*(_BYTE*)(result + 9) & 1) == 0) {
    v0 = result;
    if ((*(_BYTE*)(result + 10) & 1) == 0) {
      result = GameRoutine_ec1530(GameData_21f4cc0);
      if ((result & 1) == 0 && *(int*)(v0 + 24) <= 0) {
        result = GameRoutine_1011550(*(_QWORD*)GameData_212f510[0], 0, 1);
        if ((result & 1) != 0) {
          v1 = *(unsigned __int8*)(v0 + 8);
          *(_BYTE*)(v0 + 9) = v1;
          v2 = game_ProcGameSkipView_instance_;
          if (v1 == 1) {
            if (game_ProcGameSkipView_instance_ != 0) {
              v3 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
              if ((v3 & 0x10) == 0) {
                *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) =
                    v3 & 0xFFFFFFEE;
                result = GameRoutine_8224a0(25);
                if (game_GameModeData_instance_ != 0 &&
                    (result = game_GameVariableTable_Find(
                         *(_QWORD*)(game_GameModeData_instance_ + 48),
                         result)) != 0) {
                  v4 = *(_DWORD*)(v2 + 156);
                  if (*(_DWORD*)(result + 32) == 1) {
                    if ((v4 & 4) != 0) {
                      return result;
                    }
                    v5 = v4 | 4;
                    goto LABEL_24;
                  }
                }
                else {
                  v4 = *(_DWORD*)(v2 + 156);
                }
                if ((v4 & 4) == 0) {
                  return result;
                }
                v5 = v4 & 0xFFFFFFFB;
                goto LABEL_24;
              }
            }
          }
          else if (game_ProcGameSkipView_instance_ != 0) {
            v6 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
            if (*(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 0) {
              v6 |= 2u;
              *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) = v6;
            }
            if ((v6 & 0x10) == 0) {
              v5 = v6 & 0xFFFFFFE2 | 1;
            LABEL_24:
              v7 = *(float*)(v2 + 224);
              *(_DWORD*)(v2 + 156) = v5;
              if (v7 > 0.0) {
                *(_DWORD*)(v2 + 224) = 0;
              }
            }
          }
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
