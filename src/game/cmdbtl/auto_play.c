#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CmdBtlMindEnumeration_Destructor(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1ff7ba0[])();
extern __int64 (*game_cmdbtl_AutoPlay_vtable[])();
extern __int64 GameData_22190a8;
extern __int64 GameData_225ca88;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_22265e0;
__int64 AutoPlay_Destructor(_QWORD* a1);
__int64 CmdbtlPartyNatives_e9a800(_QWORD, _QWORD);
__int64 GameRoutine_1007060(_QWORD);
__int64 GameRoutine_1626290(void);
__int64 GameRoutine_9bd620(_QWORD, _QWORD);
__int64 GameRoutine_eb6750(_QWORD);
__int64 GameRoutine_eb6820(_QWORD);
__int64 GameRoutine_ec13d0(_QWORD);
__int64 GameRoutine_ec1530(_QWORD);
__int64 ProcList_9bd480(_QWORD);
__int64 game_HashString(void);
__int64 game_ProcList_Call_9bcfa0(_QWORD, _QWORD, _QWORD);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern _UNKNOWN GameData_1abc9d5;
extern _UNKNOWN GameData_1acfb96;
extern __int64 (*GameData_1fecb98[])();
extern __int64 (*GameData_1ff7bd0[])();
extern __int64 (*GameData_1ff7c50[])();
extern __int64 (*GameData_1ff7cd0[])();
extern __int64 (*GameData_1ff7d50[])();
extern __int64 (*GameData_1ff7dd0[])();
extern __int64 GameData_212f510[6];
extern __int64 GameData_21ec7b8;
extern __int64 GameData_21f4cc0;
extern __int64 GameData_2203490;
extern __int64 GameData_22054a8;
extern __int64 GameData_2216820;
extern __int64 GameData_22190a0;
extern __int64 GameData_22190c0;
extern __int64 game_ProcFadeView_instance_;
extern __int64* GameData_212dec0[4];
extern __int64* GameData_212ea58;
extern char GameData_2216858;
void __attribute__((noreturn)) GameRoutine_8123d0(void);
__int64 AutoPlay_f82840();
__int64 AutoPlay_f82a70(__int64 a1);
__int64 AutoPlay_f82bc0(__int64 a1, int a2);
__int64 AutoPlay_f82ee0(__int64 a1, __int64 a2);
__int64 AutoPlay_f83060();
__int64 game_cmdbtl_AutoPlay_CallFailedAutoPlayDialog(__int64 a1, __int64 a2);
bool game_cmdbtl_AutoPlay_CallFailedAutoPlayDialog_lambda0_Invoke();

void game_cmdbtl_AutoPlay_CallFailedAutoPlayDialog_lambda1_Invoke()
{
  *(_BYTE*)(*(_QWORD*)GameData_212f510[0] + 9LL) = 1;
};
__int64 game_cmdbtl_AutoPlay_CallFailedAutoPlayDialog_lambda2_Invoke();
__int64
game_cmdbtl_AutoPlay_CallFailedAutoPlayDialog_lambda4_Invoke(__int64 a1);

__int64 AutoPlay_Destructor(_QWORD* a1)
{
  __int64 v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  *a1 = game_cmdbtl_AutoPlay_vtable;
  if (GameData_225ca88 != 0) {
    v2 = *(_QWORD*)(GameData_225ca88 + 1968);
    if (v2 != 0 && *(_BYTE*)(v2 + 408) != 0) {
      *(_BYTE*)(v2 + 408) = 0;
    }
  }
  result = CmdBtlMindEnumeration_Destructor(a1 + 7);
  v4 = a1[4];
  if (v4 != 0) {
    v5 = a1[5];
    if (v4 == v5) {
      goto LABEL_12;
    }
    do {
      result = *(_QWORD*)(v5 - 8);
      if (result != 0) {
        result = std___1___shared_weak_count___release_weak(result);
      }
      v5 -= 16;
    } while (v5 != v4);
    v6 = a1[4];
    a1[5] = v4;
    if (v6 != 0) {
    LABEL_12:
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v7);
    }
  }
  *a1 = GameData_1ff7ba0;
  if ((_QWORD*)GameData_22190a8 == a1) {
    GameData_22190a8 = 0;
    GameData_22265e0 = 0;
  }
  return result;
}

__int64 AutoPlay_f82840()
{
  int v0;
  char v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;

  if ((*(_BYTE*)(GameData_21f4cc0 + 13) & 1) == 0) {
    if ((GameData_2216858 & 1) == 0) {
      GameRoutine_8123d0();
    }
    if ((GameData_2216820 & 8) != 0) {
      goto LABEL_6;
    }
  }
  if ((*(_BYTE*)(GameData_21f4cc0 + 12) & 1) != 0 || GameData_21ec7b8 != 0) {
    goto LABEL_6;
  }
  if (GameData_22054a8 != 0) {
    v3 = *(_QWORD*)(GameData_22054a8 + 80);
    if (v3 != 0) {
      v4 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_22054a8 + 48) +
                                 8 * ((v3 + *(_QWORD*)(GameData_22054a8 + 72) -
                                       1) /
                                      0x33uLL)) +
                      80 * ((v3 + *(_QWORD*)(GameData_22054a8 + 72) - 1) %
                            0x33uLL) +
                      72);
      if (v4 != 0 && *(_BYTE*)(v4 + 138) != 0) {
        goto LABEL_6;
      }
    }
    v1 = 0;
    if ((*(_BYTE*)(GameData_22190a0 + 11) & 1) == 0 &&
        (*(_BYTE*)(GameData_22190a0 + 13) & 1) == 0 &&
        (*(_BYTE*)(GameData_22190a0 + 14) & 1) == 0) {
      v5 = *(_QWORD*)(GameData_22054a8 + 80);
      if (v5 == 0) {
        goto LABEL_22;
      }
      v6 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_22054a8 + 48) +
                                 8 * ((v5 + *(_QWORD*)(GameData_22054a8 + 72) -
                                       1) /
                                      0x33uLL)) +
                      80 * ((v5 + *(_QWORD*)(GameData_22054a8 + 72) - 1) %
                            0x33uLL) +
                      72);
      if (v6 == 0 || *(_BYTE*)(v6 + 138) == 0) {
        goto LABEL_22;
      }
    LABEL_6:
      v1 = 0;
    }
  }
  else {
    v1 = 0;
    if ((*(_BYTE*)(GameData_22190a0 + 11) & 1) == 0 &&
        (*(_BYTE*)(GameData_22190a0 + 13) & 1) == 0 &&
        (*(_BYTE*)(GameData_22190a0 + 14) & 1) == 0) {
    LABEL_22:
      v7 = *(__int64**)(GameData_2203490 + 432);
      if (*(__int64**)(GameData_2203490 + 440) == v7) {
        goto LABEL_31;
      }
      v8 = *v7;
      v9 = v7[1];
      if (v9 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                                  memory_order_relaxed);
      }
      if (v8 != 0) {
        v0 = (*(__int64 (**)(__int64))(*(_QWORD*)v8 + 24LL))(v8) ^ 1;
      }
      if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
        std___1___shared_weak_count___release_weak(v9);
      }
      if (((v8 != 0) & (v0 ^ 1)) == 0) {
      LABEL_31:
        if ((*(_BYTE*)(GameData_22190c0 + 11) & 1) == 0) {
          v1 = *(_BYTE*)(GameData_22190c0 + 9) ^ 1;
          return v1 & 1;
        }
      }
      goto LABEL_6;
    }
  }
  return v1 & 1;
}

__int64 AutoPlay_f82a70(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 result;
  int v5;
  int v6;
  char v7;
  char v8;
  __int64 v9;
  void* v10;

  v2 = GameData_212dec0[0];
  if ((GameRoutine_ec13d0(*GameData_212dec0[0]) & 1) != 0) {
    v10 = &GameData_1acfb96;
    v9 = game_HashString();
    game_VariableManager_SetFlag(&v9, 0xFFFFFFFFLL);
    v10 = &GameData_1abc9d5;
    v9 = game_HashString();
    game_VariableManager_SetFlag(&v9, 0);
  }
  v3 = *v2;
  LODWORD(v9) = 0;
  result = GameRoutine_ec1530(v3);
  if ((result & 1) == 0) {
    result = GameRoutine_eb6820(&v9);
    if ((result & 1) != 0) {
      v5 = v9;
      if ((*(_BYTE*)(*v2 + 13) & 1) != 0) {
        goto LABEL_25;
      }
      if ((GameData_2216858 & 1) == 0) {
        GameRoutine_8123d0();
      }
      if ((GameData_2216820 & 8) == 0) {
      LABEL_25:
        if ((int)v9 >= -1 && (*(_BYTE*)(*v2 + 12) & 1) == 0) {
          result = AutoPlay_f83060();
          if (v5 < (int)result) {
            v6 = *(_DWORD*)(a1 + 16);
            v7 = *(_BYTE*)(a1 + 20);
            *(_DWORD*)(a1 + 16) = v5;
            *(_BYTE*)(a1 + 20) = 1;
            *(_BYTE*)(a1 + 13) = 1;
            if (v6 == v5) {
              v8 = v7;
            }
            else {
              v8 = 0;
            }
            if (*(_BYTE*)(a1 + 28) != 1 || *(_DWORD*)(a1 + 24) != v5) {
              result = GameRoutine_eb6750((unsigned int)v5);
              *(_DWORD*)(a1 + 24) = v5;
              *(_BYTE*)(a1 + 28) = 1;
            }
            if ((v8 & 1) == 0 && GameData_225ca88 != 0) {
              result = *(_QWORD*)(GameData_225ca88 + 1968);
              if (result != 0) {
                return GameRoutine_1626290();
              }
            }
          }
        }
      }
    }
  }
  return result;
}

__int64 AutoPlay_f82bc0(__int64 a1, int a2)
{
  __int64 result;
  int v5;
  char v6;
  char v7;
  __int64 v8;
  void* v9;

  if ((*(_BYTE*)(*GameData_212dec0[0] + 13) & 1) != 0) {
    goto LABEL_6;
  }
  if ((GameData_2216858 & 1) == 0) {
    GameRoutine_8123d0();
  }
  if ((GameData_2216820 & 8) == 0) {
  LABEL_6:
    result = 0;
    if (a2 < -1 || (*(_BYTE*)(*GameData_212dec0[0] + 12) & 1) != 0) {
      return result;
    }
    if (a2 < (int)AutoPlay_f83060(0)) {
      v5 = *(_DWORD*)(a1 + 16);
      v6 = *(_BYTE*)(a1 + 20);
      *(_DWORD*)(a1 + 16) = a2;
      *(_BYTE*)(a1 + 20) = 1;
      *(_BYTE*)(a1 + 13) = 1;
      if (v5 == a2) {
        v7 = v6;
      }
      else {
        v7 = 0;
      }
      if (*(_BYTE*)(a1 + 28) != 1 || *(_DWORD*)(a1 + 24) != a2) {
        v9 = &GameData_1abc9d5;
        v8 = game_HashString();
        game_VariableManager_SetFlag(&v8, 1);
        v9 = &GameData_1acfb96;
        v8 = game_HashString();
        game_VariableManager_SetFlag(&v8, (unsigned int)a2);
        *(_DWORD*)(a1 + 24) = a2;
        *(_BYTE*)(a1 + 28) = 1;
      }
      if ((v7 & 1) == 0 && GameData_225ca88 != 0 &&
          *(_QWORD*)(GameData_225ca88 + 1968) != 0) {
        GameRoutine_1626290();
      }
      return 1;
    }
  }
  return 0;
}

__int64 AutoPlay_f82ee0(__int64 a1, __int64 a2)
{
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64* v12;
  __int64* v13;
  __int64 v14;
  _QWORD v15[4];
  _QWORD* v16;

  v4 = GameData_212ea58;
  v15[0] = GameData_1fecb98;
  v16 = v15;
  CmdbtlPartyNatives_e9a800(*GameData_212ea58, v15);
  if (v16 == v15) {
    v5 = 32;
  }
  else {
    if (v16 == nullptr) {
      goto LABEL_6;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v16 + v5))((__int64)v16);
LABEL_6:
  if (*(_BYTE*)(a1 + 28) != 1) {
    return 0;
  }
  v6 = *v4;
  v7 = *(int*)(a1 + 24);
  if ((_DWORD)v7 == -1) {
    v12 = *(__int64**)(v6 + 712);
    v13 = *(__int64**)(v6 + 720);
    if (v12 == v13) {
    LABEL_20:
      game_cmdbtl_AutoPlay_CallFailedAutoPlayDialog(a1, a2);
      return 1;
    }
    while (1) {
      v14 = *v12;
      v12 += 2;
      if ((*(_BYTE*)(v14 + 190) & 1) != 0) {
        return 0;
      }
      if (v12 == v13) {
        goto LABEL_20;
      }
    }
  }
  v8 = (__int64*)(*(_QWORD*)(v6 + 712) + 16 * v7);
  v9 = *v8;
  v10 = v8[1];
  if (v10 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v9 == 0 || (*(_BYTE*)(v9 + 190) & 1) != 0) {
    if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      std___1___shared_weak_count___release_weak(v10);
    }
    return 0;
  }
  game_cmdbtl_AutoPlay_CallFailedAutoPlayDialog(a1, a2);
  if (v10 == 0 || atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) != 0) {
    return 1;
  }
  (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
  std___1___shared_weak_count___release_weak(v10);
  return 1;
}

__int64 AutoPlay_f83060()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  unsigned int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v0 = GameData_2203490;
  v1 = *(_QWORD*)(GameData_2203490 + 712);
  if ((int)((unsigned __int64)(*(_QWORD*)(GameData_2203490 + 720) - v1) >> 4) <
      1) {
    return 0;
  }
  else {
    v2 = 0;
    v3 = 0;
    v4 = 0;
    do {
      v5 = *(_QWORD*)(v1 + v2);
      v6 = *(_QWORD*)(v5 + 320);
      if (v6 != 0) {
        v7 = *(_QWORD*)(v5 + 312);
        v8 = *(_QWORD*)(v5 + 320);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                                  memory_order_relaxed);
        v9 = std___1___shared_weak_count_lock(v8);
        std___1___shared_weak_count___release_weak(v6);
        if (v9 != 0) {
          if (v7 != 0 && (*(_DWORD*)(*(_QWORD*)v7 + 76LL) & 0x10) == 0) {
            v4 += (*(_DWORD*)(*(_QWORD*)v7 + 76LL) & 0x20) == 0;
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
            std___1___shared_weak_count___release_weak(v9);
          }
        }
      }
      v1 = *(_QWORD*)(v0 + 712);
      ++v3;
      v2 += 16;
    } while (v3 < (int)((unsigned __int64)(*(_QWORD*)(v0 + 720) - v1) >> 4));
  }
  return v4;
}

__int64 game_cmdbtl_AutoPlay_CallFailedAutoPlayDialog(__int64 a1, __int64 a2)
{
  __int64 result;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
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
  _QWORD v17[4];
  _QWORD* v18;

  result = ProcList_9bd480(a2);
  if (result == 0) {
    return result;
  }
  v4 = *(_QWORD*)(result + 152);
  v5 = result;
  v18 = v17;
  v17[0] = GameData_1ff7bd0;
  v6 = *(_QWORD*)(v4 + 8);
  if (v6 >= *(_QWORD*)(v4 + 16)) {
    v8 = GameRoutine_9bd620(v4, v17);
  }
  else {
    *(_QWORD*)(v6 + 32) = v6;
    (*(void (**)(_QWORD*, unsigned __int64))(*v18 + 24LL))(v18, v6);
    v8 = v6 + 48;
  }
  *(_QWORD*)(v4 + 8) = v8;
  if (v18 == v17) {
    v9 = 32;
  }
  else {
    if (v18 == nullptr) {
      goto LABEL_10;
    }
    v9 = 40;
  }
  (*(void (**)(_QWORD*))(*v18 + v9))(v18);
LABEL_10:
  v17[0] = GameData_1ff7c50;
  v18 = v17;
  game_ProcList_Call_9bcfa0(v5, v17, v7);
  if (v18 == v17) {
    v11 = 32;
  }
  else {
    if (v18 == nullptr) {
      goto LABEL_15;
    }
    v11 = 40;
  }
  (*(void (**)(__int64))(*v18 + v11))((__int64)v18);
LABEL_15:
  v17[0] = GameData_1ff7cd0;
  v18 = v17;
  game_ProcList_Call_9bcfa0(v5, v17, v10);
  if (v18 == v17) {
    v13 = 32;
  }
  else {
    if (v18 == nullptr) {
      goto LABEL_20;
    }
    v13 = 40;
  }
  (*(void (**)(__int64))(*v18 + v13))((__int64)v18);
LABEL_20:
  v17[0] = GameData_1ff7d50;
  v18 = v17;
  game_ProcList_Call_9bcfa0(v5, v17, v12);
  if (v18 == v17) {
    v15 = 32;
    goto LABEL_24;
  }
  if (v18 != nullptr) {
    v15 = 40;
  LABEL_24:
    (*(void (**)(__int64))(*v18 + v15))((__int64)v18);
  }
  v17[0] = GameData_1ff7dd0;
  v17[1] = a1;
  v18 = v17;
  game_ProcList_Call_9bcfa0(v5, v17, v14);
  result = (__int64)v18;
  if (v18 == v17) {
    v16 = 32;
  }
  else {
    if (v18 == nullptr) {
      return result;
    }
    v16 = 40;
  }
  return (*(__int64 (**)(__int64))(*v18 + v16))((__int64)v18);
}

bool game_cmdbtl_AutoPlay_CallFailedAutoPlayDialog_lambda0_Invoke()
{
  char v0;
  __int64 v1;
  __int64 v2;

  if (game_ProcFadeView_instance_ == 0) {
    return true;
  }
  v0 = *(_BYTE*)(game_ProcFadeView_instance_ + 480);
  *(_BYTE*)(game_ProcFadeView_instance_ + 480) = 3;
  v1 = game_ProcFadeView_instance_;
  if (game_ProcFadeView_instance_ == 0) {
    return true;
  }
  v2 = *(unsigned __int8*)(game_ProcFadeView_instance_ + 480);
  *(_BYTE*)(game_ProcFadeView_instance_ + 480) = v0;
  return *(float*)(v1 + (v2 << 6) + 172) == *(float*)(v1 + (v2 << 6) + 168);
}

__int64 game_cmdbtl_AutoPlay_CallFailedAutoPlayDialog_lambda2_Invoke()
{
  __int64 result;
  __int64 v1;
  int v2;

  result = GameRoutine_1007060(GameData_22190c0);
  v1 = GameData_225ca88;
  if (GameData_225ca88 != 0 && *(_BYTE*)(GameData_225ca88 + 1977) == 1) {
    v2 = *(_DWORD*)(GameData_225ca88 + 1984);
    *(_BYTE*)(GameData_225ca88 + 1977) = 0;
    *(_DWORD*)(v1 + 1984) = (v2 & ~(v2 >> 31)) + 1;
    *(_DWORD*)(v1 + 1980) = 2;
  }
  return result;
}

__int64 game_cmdbtl_AutoPlay_CallFailedAutoPlayDialog_lambda4_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 result;
  int v3;
  __int64 v4;
  void* v5;

  v1 = *(_QWORD*)(a1 + 8);
  v5 = &GameData_1acfb96;
  v4 = game_HashString();
  game_VariableManager_SetFlag(&v4, 0xFFFFFFFFLL);
  v5 = &GameData_1abc9d5;
  v4 = game_HashString();
  result = game_VariableManager_SetFlag(&v4, 0);
  v3 = *(unsigned __int8*)(v1 + 28);
  *(_BYTE*)(v1 + 13) = 0;
  if (v3 == 1) {
    *(_BYTE*)(v1 + 28) = 0;
  }
  if (*(_BYTE*)(GameData_22190a0 + 9) == 1) {
    *(_BYTE*)(GameData_22190a0 + 9) = 0;
  }
  return result;
}

#pragma GCC visibility pop
