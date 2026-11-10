#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_667c80(_QWORD);
__int64 GameRoutine_e61c90(__int64, __int64);
__int64 GameRoutine_eb9b60(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern _UNKNOWN GameData_2216780;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProcCmdBtlSeq_Unknown12(__int64 result);
__int64 ProcCmdBtlSeq_Unknown21();
__int64 CmdBtlDispos_f35040(_QWORD);
__int64 CmdBtlSkipInput_1006910(_QWORD);
__int64 CmdbtlPartyNatives_eb9b60(_QWORD);
__int64 Field_1012ce0(_QWORD);
__int64 GameManager_a2c820(void);
__int64 GameRoutine_65a020(void);
__int64 GameRoutine_a2c9c0(_QWORD, _QWORD);
__int64 GameRoutine_e618a0();
__int64 GameRoutine_eab520(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_eacc20(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_ec0ae0(_QWORD);
__int64 GameRoutine_f82cf0(_QWORD);
__int64 Manager_e9a420(_QWORD);
__int64 ProcCmdBtlSeq_e61c90(__int64, __int64);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 snd_Fade_Fade_10cb00(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak();
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 GameData_21c9600;
extern __int64 GameData_21d3f90;
extern __int64 GameData_21ec7a8;
extern __int64 GameData_21f4cc0;
extern __int64 GameData_2203490;
extern __int64 GameData_2219078;
extern __int64 GameData_2219080;
extern __int64 GameData_22190a0;
extern __int64 GameData_22190a8;
extern __int64 GameData_22190c0;
extern __int64 GameData_22190c8;
extern __int64 game_GameRestartData_unknown_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64* GameData_212dec0[4];
extern __int64* GameData_212ea58;
extern __int64* GameData_212f4e0[3];
extern __int64* game_sound_g_game_sound_ptr[5];
extern int GameData_221beb0;
void ProcCmdBtlSeq_e640b0();
__int64 ProcCmdBtlSeq_e64240(__int64 result);
bool ProcCmdBtlSeq_e64270();
__int64 ProcCmdBtlSeq_e64340(__int64 result);
__int64 ProcCmdBtlSeq_e64370(__int64 result);
__int64 ProcCmdBtlSeq_e644e0();
void ProcCmdBtlSeq_e64510() { *(_BYTE*)(GameData_22190a8 + 8) = 0; };
_QWORD* ProcCmdBtlSeq_e64540(__int64 a1);
__int64 ProcCmdBtlSeq_e64680(__int64 result);
void ProcCmdBtlSeq_e65d40();
__int64 ProcCmdBtlSeq_e66120(__int64 a1);
__int64 ProcCmdBtlSeq_e66160();
__int64 ProcCmdBtlSeq_e66170(__int64 a1);
void ProcCmdBtlSeq_e66190() { *(_BYTE*)(*GameData_212dec0[0] + 11) = 1; };
__int64 ProcCmdBtlSeq_e66380(__int64 result);
__int64 ProcCmdBtlSeq_e663a0();
__int64 ProcCmdBtlSeq_e663e0(__int64 result);
__int64 ProcCmdBtlSeq_e66ca0();
__int64 game_cmdbtl_anonymous_ProcCmdBtlSeq_CheckOverTurn_closure_Invoke();
__int64 ProcCmdBtlSeq_Unknown8();

void ProcCmdBtlSeq_e640b0()
{
  __int64 v0;

  v0 = GameData_22190a0;
  if (*(_BYTE*)(GameData_22190a0 + 14) == 1) {
    *(_BYTE*)(GameData_22190a0 + 14) = 0;
  }
  if (*(_BYTE*)(v0 + 10) == 1) {
    *(_BYTE*)(v0 + 10) = 0;
  }
}

__int64 ProcCmdBtlSeq_e64240(__int64 result)
{
  if (GameData_21d3f90 != 0) {
    return GameRoutine_eacc20(
        result, 3, *(unsigned int*)(*GameData_212ea58 + 612), 0xFFFFFFFFLL);
  }
  return result;
}

bool ProcCmdBtlSeq_e64270()
{
  bool v0;
  __int64 v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;

  v1 = GameData_2203490;
  v2 = *(__int64**)(GameData_2203490 + 432);
  if (*(__int64**)(GameData_2203490 + 440) == v2) {
    return false;
  }
  v4 = *v2;
  v3 = v2[1];
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v4 != 0) {
    v0 = *(float*)(v1 + 456) < *(float*)(v4 + 28);
    if (v3 == 0) {
      goto LABEL_9;
    }
  }
  else if (v3 == 0) {
    goto LABEL_9;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak();
    if (v4 != 0) {
      return v0;
    }
    return false;
  }
LABEL_9:
  if (v4 == 0) {
    return false;
  }
  return v0;
}

__int64 ProcCmdBtlSeq_e64340(__int64 result)
{
  if (GameData_21d3f90 != 0) {
    return GameRoutine_eacc20(
        result, 4, *(unsigned int*)(*GameData_212ea58 + 612), 0xFFFFFFFFLL);
  }
  return result;
}

__int64 ProcCmdBtlSeq_e64370(__int64 result)
{
  int v1;
  int v2;
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  if (*(_QWORD*)(GameData_2203490 + 592) !=
      *(_QWORD*)(GameData_2203490 + 584)) {
    v1 = 9;
  LABEL_3:
    *(_DWORD*)(result + 152) = v1;
    return result;
  }
  v2 = *(_DWORD*)(GameData_2203490 + 1204);
  if ((v2 & 0x10) != 0 && *(int*)(GameData_2203490 + 612) <= 1) {
    *(_DWORD*)(GameData_2203490 + 1204) = v2 & 0xFFFFFFEF;
    v3 = GameData_221beb0 | 0x1F000;
  LABEL_19:
    GameData_221beb0 = v3;
    v1 = 7;
    goto LABEL_3;
  }
  if ((v2 & 0x100) != 0) {
    *(_DWORD*)(GameData_2203490 + 1204) = v2 & 0xFFFFFEFF;
    v1 = 6;
    goto LABEL_3;
  }
  v4 = *(_QWORD*)(GameData_2203490 + 1240);
  if (v4 != 0) {
    v5 = *(_QWORD*)(GameData_2203490 + 1232);
    v6 = result;
    v7 = *(_QWORD*)(GameData_2203490 + 1240);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                              memory_order_relaxed);
    v8 = std___1___shared_weak_count_lock(v7);
    if (v8 != 0) {
      if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
        std___1___shared_weak_count___release_weak();
      }
      std___1___shared_weak_count___release_weak();
      result = v6;
      if (v5 != 0) {
        v1 = 5;
        goto LABEL_3;
      }
    }
    else {
      std___1___shared_weak_count___release_weak();
      result = v6;
    }
  }
  if (*(_DWORD*)(GameData_2203490 + 608) == 1) {
    v3 = GameData_221beb0 | 0x8002;
    goto LABEL_19;
  }
  v9 = result;
  result = GameRoutine_f82cf0(*GameData_212f4e0[0]);
  if ((result & 1) != 0) {
    *(_DWORD*)(v9 + 152) = 7;
  }
  else {
    *(_DWORD*)(v9 + 152) = 8;
  }
  return result;
}

__int64 ProcCmdBtlSeq_e644e0()
{
  unsigned int v0;
  unsigned int v1;

  LOBYTE(v0) = game_ProcGameSkipView_instance_;
  if (game_ProcGameSkipView_instance_ == 0) {
    return v0 & 1;
  }
  v1 = *(unsigned __int8*)(game_ProcGameSkipView_instance_ + 152);
  if (v1 <= 4) {
    v0 = 0x16u >> v1;
    return v0 & 1;
  }
  return 0;
}

_QWORD* ProcCmdBtlSeq_e64540(__int64 a1)
{
  __int64 v2;
  int v3;
  __int64 v4;
  _QWORD* result;
  _QWORD* v6;
  int v7;
  __int64 v8;
  __int64 v9;

  v2 = *GameData_212ea58;
  v3 = *(_DWORD*)(*GameData_212ea58 + 1220);
  if ((unsigned int)(v3 - 4) < 2) {
    goto LABEL_10;
  }
  if ((unsigned int)(v3 - 6) < 2) {
    *(_DWORD*)(v2 + 1220) = 0;
    *(_BYTE*)(*GameData_212f4e0[0] + 8) = 1;
    v4 = GameData_22190a0;
    if (*(_BYTE*)(GameData_22190a0 + 14) == 1) {
      *(_BYTE*)(GameData_22190a0 + 14) = 0;
    }
    if (*(_BYTE*)(v4 + 10) == 1) {
      *(_BYTE*)(v4 + 10) = 0;
    }
    result = *(_QWORD**)(a1 + 192);
    v6 = (_QWORD*)(a1 + 160);
    v7 = 4;
    goto LABEL_12;
  }
  if (v3 == 3) {
    *(_DWORD*)(v2 + 608) = 1;
  LABEL_10:
    *(_DWORD*)(v2 + 1220) = 0;
    v6 = (_QWORD*)(a1 + 160);
    v7 = 3;
    *(_QWORD*)(a1 + 152) = 0;
    result = *(_QWORD**)(a1 + 192);
    goto LABEL_13;
  }
  result = *(_QWORD**)(a1 + 192);
  v6 = (_QWORD*)(a1 + 160);
  v7 = 11;
LABEL_12:
  *(_QWORD*)(a1 + 152) = 0;
LABEL_13:
  *(_QWORD*)(a1 + 192) = 0;
  if (result == v6) {
    v8 = 32;
  }
  else {
    if (result == nullptr) {
      goto LABEL_18;
    }
    v8 = 40;
  }
  result = (_QWORD*)(*(__int64 (**)(__int64))(*result + v8))((__int64)result);
LABEL_18:
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

__int64 ProcCmdBtlSeq_e64680(__int64 result)
{
  if (GameData_21d3f90 != 0) {
    return GameRoutine_eacc20(
        result, 5, *(unsigned int*)(*GameData_212ea58 + 612), 0xFFFFFFFFLL);
  }
  return result;
}

void ProcCmdBtlSeq_e65d40()
{
  __int64** v0;
  __int64** i;
  __int64 v2;
  int v3;
  int v4;

  v0 = *(__int64***)(GameData_2219080 + 32);
  for (i = *(__int64***)(GameData_2219080 + 40); v0 != i; v0 += 2) {
    v2 = **v0;
    if (v2 != 0 && *((_BYTE*)*v0 + 17) == 1) {
      v3 = *(_DWORD*)(v2 + 2184);
      if (v3 <= -1) {
        v3 = -1;
      }
      if ((unsigned int)(v3 + 1) < 0x1869F) {
        v4 = v3 + 1;
      }
      else {
        v4 = 99999;
      }
      *(_DWORD*)(v2 + 2184) = v4;
    }
  }
}

__int64 ProcCmdBtlSeq_e66120(__int64 a1)
{
  _QWORD v2[3];

  memset(v2, 0, sizeof(v2));
  return GameRoutine_eab520(a1, "CmdBtlEnding", v2);
}

__int64 ProcCmdBtlSeq_e66160()
{
  __int64 v0;
  __int64 v1;
  __int64 result;
  __int64 v3;
  __int64* v4;
  int v5;
  int v6;
  _BYTE v7[200];
  __int64 v8;
  __int64 v9;

  result = GameData_21ec7a8;
  if (*(_BYTE*)(GameData_21ec7a8 + 8) != 0) {
    v8 = v0;
    v9 = v1;
    v3 = GameData_21ec7a8;
    snd_Fade_Fade_10cb00(v7, "FadeTime_BGM_CmdBtl_GameOver_Out");
    v4 = game_sound_g_game_sound_ptr[0];
    GameRoutine_a2c9c0(*game_sound_g_game_sound_ptr[0], v7);
    result = snd_Fade_Destroy_Fade(v7);
    v5 = *(unsigned __int8*)(v3 + 10);
    *(_BYTE*)(v3 + 8) = 0;
    if (v5 == 1) {
      snd_Fade_Fade_10cb00(v7, "FadeTime_BGM_CmdBtl_GameOver_Out");
      v6 = *(_DWORD*)(*v4 + 628);
      if (v6 != 0) {
        *(_DWORD*)(*v4 + 628) = v6 - 1;
        GameManager_a2c820();
      }
      return snd_Fade_Destroy_Fade(v7);
    }
  }
  return result;
}

__int64 ProcCmdBtlSeq_e66170(__int64 a1)
{
  __int64 v1;

  v1 = GameData_22190c0;
  *(_BYTE*)(a1 + 219) = *(_BYTE*)(GameData_22190c0 + 11);
  return CmdBtlSkipInput_1006910(v1);
}

__int64 ProcCmdBtlSeq_e66380(__int64 result)
{
  if (*(_BYTE*)(result + 218) != 0) {
    *(_BYTE*)(result + 218) = 0;
    return Field_1012ce0(GameData_2219078);
  }
  return result;
}

__int64 ProcCmdBtlSeq_e663a0()
{
  Manager_e9a420(GameData_2203490);
  return CmdBtlDispos_f35040(GameData_22190c8);
}

__int64 ProcCmdBtlSeq_e663e0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  int v3;
  _QWORD v5[5];

  if ((*(_BYTE*)(GameData_21f4cc0 + 9) & 1) == 0 &&
      (*(_BYTE*)(GameData_21f4cc0 + 10) & 1) == 0 &&
      (*(_BYTE*)(GameData_21f4cc0 + 11) & 1) == 0) {
    if ((*(_BYTE*)(GameData_21f4cc0 + 8) & 1) == 0) {
      return result;
    }
  LABEL_19:
    v5[3] = v1;
    v5[4] = v2;
    memset(v5, 0, 24);
    return GameRoutine_eab520(result, "Ending", v5);
  }
  if (*(_BYTE*)(GameData_21f4cc0 + 10) != 0) {
    v3 = 3;
  }
  else {
    v3 = 2;
  }
  if (*(_BYTE*)(GameData_21f4cc0 + 12) != 0) {
    v3 = 4;
  }
  if ((((unsigned __int8)(*(_BYTE*)(GameData_21f4cc0 + 12) |
                          *(_BYTE*)(GameData_21f4cc0 + 9)) |
        *(_BYTE*)(GameData_21f4cc0 + 10)) &
       1) == 0) {
    v3 = 5;
    if ((*(_BYTE*)(GameData_21f4cc0 + 11) & 1) == 0) {
      v3 = *(unsigned __int8*)(GameData_21f4cc0 + 8);
    }
  }
  if (v3 == 4 || v3 == 1) {
    goto LABEL_19;
  }
  return result;
}

__int64 ProcCmdBtlSeq_e66ca0()
{
  __int64 result;
  __int64 v1;

  if (*(_DWORD*)(game_GameRestartData_unknown_ + 3228) != 0) {
    result = GameRoutine_65a020();
    v1 = game_GameRestartData_unknown_;
    if (*(_DWORD*)(game_GameRestartData_unknown_ + 3228) != 0) {
      *(_BYTE*)(game_GameRestartData_unknown_ + 16) = 0;
      *(_DWORD*)(v1 + 8) = 8;
      if (GameData_21c9600 != 0) {
        *(_DWORD*)(GameData_21c9600 + 152) = 14;
      }
    }
  }
  return result;
}

__int64 game_cmdbtl_anonymous_ProcCmdBtlSeq_CheckOverTurn_closure_Invoke()
{
  __int64 v0;

  v0 = GameData_21f4cc0;
  *(_BYTE*)(GameData_21f4cc0 + 10) = 1;
  if ((GameRoutine_ec0ae0(v0) & 1) != 0) {
    GameRoutine_e618a0();
  }
  return 4;
}

__int64 ProcCmdBtlSeq_Unknown12(__int64 result)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  _BOOL4 v3;

  v1 = *(_QWORD*)(result + 8);
  v2 = *(_QWORD*)(result + 16);
  if (v1 > v2) {
  LABEL_4:
    v3 = true;
  }
  else {
    while (*(_BYTE*)v2 != 2) {
      v2 -= 64LL;
      if (v1 > v2) {
        goto LABEL_4;
      }
    }
    v3 = *(_DWORD*)(v2 + 32) != 19;
  }
  if (v1 != 0 && v3) {
    while (1) {
      if (*(_BYTE*)v1 == 2) {
        if (*(_DWORD*)(v1 + 32) == 19) {
          *(_QWORD*)(result + 16) = v1;
          *(_WORD*)(result + 136) &= ~0x80u;
          return result;
        }
      }
      else if (*(_BYTE*)v1 == 0) {
        return result;
      }
      v1 += 64LL;
    }
  }
  return result;
}

__int64 ProcCmdBtlSeq_Unknown21()
{
  __int64 v0;
  _QWORD v2[6];
  char v3;
  char v4;
  char v5;
  __int64 v6;
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
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  char v21;

  v4 = 0;
  v5 = 0;
  memset(v2, 0, sizeof(v2));
  v3 = 0;
  v21 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  LOBYTE(v19) = 0;
  v6 = 0x500000005LL;
  GameRoutine_eb9b60(v2);
  GameRoutine_e61c90((__int64)&GameData_2216780, (__int64)v2);
  if (v21 == 1 && v19 != 0) {
    v20 = v19;
    v0 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v0 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v0);
  }
  return GameRoutine_667c80(v2);
}

__int64 ProcCmdBtlSeq_Unknown8()
{
  __int64 v0;
  _QWORD v2[6];
  char v3;
  char v4;
  char v5;
  __int64 v6;
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
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  char v21;

  v4 = 0;
  v5 = 0;
  memset(v2, 0, sizeof(v2));
  v3 = 0;
  v21 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  LOBYTE(v19) = 0;
  v6 = 0x500000005LL;
  CmdbtlPartyNatives_eb9b60(v2);
  ProcCmdBtlSeq_e61c90((__int64)&GameData_2216780, (__int64)v2);
  if (v21 == 1 && v19 != 0) {
    v20 = v19;
    v0 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v0 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v0);
  }
  return GameRoutine_667c80(v2);
}

#pragma GCC visibility pop
