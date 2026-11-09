#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_ceca80(_QWORD* result, __int64, char);
__int64 DungeonController_f5e870(void);
__int64 GameRoutine_657a50(_QWORD, _QWORD);
__int64 GameRoutine_716420(_QWORD, _QWORD);
__int64 GameRoutine_efbb60(_QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 GameData_212dbd0[6];
extern __int64 GameData_212dbe0[4];
extern __int64 GameData_212dc68;
extern __int64 GameData_21c9600;
extern __int64 GameData_21c9608;
extern __int64 GameData_21ec7c0;
extern __int64 GameData_21f3c90;
extern __int64 GameData_21f3d08;
extern __int64 GameData_21f3d10;
extern __int64 game_GameModeData_instance_;
extern __int64 game_hub_ProcHubSeqView_instance_;
extern __int64 game_script_hub_talk_g_select_menu;
void GameRoutine_d54600(__int64);
void GameRoutine_d54760(__int64);
void ProcHubSeq_Unknown6();
void ProcHubSeq_Unknown7();
void ProcHubSeq_Unknown10();
__int64 ProcHubSeq_Unknown11();
__int64 ProcHubSeq_Unknown12(__int64 a1);
__int64 ProcHubSeq_Unknown13(__int64 result);
__int64 ProcHubSeq_Unknown14(__int64 result, __int64 a2);

void ProcHubSeq_Unknown6()
{
  if (GameData_21f3d10 != 0) {
    GameRoutine_d54600(GameData_21f3d10);
  }
}

void ProcHubSeq_Unknown7()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  _QWORD* v5;

  if (GameData_21f3d10 != 0) {
    GameRoutine_d54760(GameData_21f3d10);
    if (*(int*)(GameData_21f3d10 + 152) <= 0) {
      v0 = *(_QWORD*)(GameData_21ec7c0 + 80);
      if (v0 != 0) {
        v1 = *(_QWORD*)(GameData_21ec7c0 + 72);
        v2 = *(_QWORD*)(GameData_21ec7c0 + 80);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v0 + 16), 1u,
                                  memory_order_relaxed);
        v3 = std___1___shared_weak_count_lock(v2);
        std___1___shared_weak_count___release_weak(v0);
        if (v3 == 0 || v1 == 0) {
          if (v3 == 0) {
            return;
          }
        }
        else {
          v5 = *(_QWORD**)(v1 + 24);
          *(float*)(v1 + 1120) = fmaxf(*(float*)(v1 + 1120), 0.2);
          GameRoutine_ceca80(v5, 0x100000, 1);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
          std___1___shared_weak_count___release_weak(v3);
        }
      }
    }
  }
}

void ProcHubSeq_Unknown10()
{
  __int64 v0;

  v0 = *(_QWORD*)GameData_212dbd0[0];
  if ((*(_BYTE*)(*(_QWORD*)GameData_212dc68 + 144LL) & 1) == 0) {
    *(_BYTE*)(*(_QWORD*)GameData_212dc68 + 144LL) = 1;
  }
  *(_BYTE*)(v0 + 8) = 1;
  if (GameData_21f3c90 == 0 && game_hub_ProcHubSeqView_instance_ != 0) {
    *(_DWORD*)(game_hub_ProcHubSeqView_instance_ + 152) = 2;
  }
}

__int64 ProcHubSeq_Unknown11()
{
  __int64 result;
  _QWORD v1[2];

  *(_DWORD*)(*(_QWORD*)GameData_212dbe0[0] + 8LL) = 10;
  if ((*(_BYTE*)(GameData_21f3d10 + 11) & 1) == 0) {
    *(_BYTE*)(GameData_21f3d10 + 11) = 1;
    v1[0] = 0;
    v1[1] = 0;
    result = GameRoutine_efbb60(GameData_21f3d08, v1, 0);
    if (game_script_hub_talk_g_select_menu != 0) {
      *(_DWORD*)(game_script_hub_talk_g_select_menu + 152) = 12;
    }
  }
  if (game_hub_ProcHubSeqView_instance_ != 0) {
    *(_DWORD*)(game_hub_ProcHubSeqView_instance_ + 152) = 13;
  }
  return result;
}

__int64 ProcHubSeq_Unknown12(__int64 a1)
{
  __int64 result;
  _QWORD v2[2];

  result = *(_QWORD*)(a1 + 40);
  if (result != 0 && (*(_WORD*)(result + 136) & 1) == 0) {
    result = GameRoutine_657a50(result, 1);
  }
  *(_DWORD*)(*(_QWORD*)GameData_212dbe0[0] + 8LL) = 15;
  if (GameData_21c9600 != 0) {
    *(_DWORD*)(GameData_21c9600 + 152) = 1;
  }
  if ((*(_BYTE*)(GameData_21f3d10 + 11) & 1) == 0) {
    *(_BYTE*)(GameData_21f3d10 + 11) = 1;
    v2[0] = 0;
    v2[1] = 0;
    result = GameRoutine_efbb60(GameData_21f3d08, v2, 0);
    if (game_script_hub_talk_g_select_menu != 0) {
      *(_DWORD*)(game_script_hub_talk_g_select_menu + 152) = 12;
    }
  }
  if (game_hub_ProcHubSeqView_instance_ != 0) {
    *(_DWORD*)(game_hub_ProcHubSeqView_instance_ + 152) = 13;
  }
  return result;
}

__int64 ProcHubSeq_Unknown13(__int64 result)
{
  int v1;

  v1 = *(_DWORD*)(result + 232);
  *(_DWORD*)(result + 232) = v1 + 1;
  if (v1 == 0) {
    return (**(__int64 (***)(__int64))(result + 224))(result + 224);
  }
  return result;
}

__int64 ProcHubSeq_Unknown14(__int64 result, __int64 a2)
{
  int v2;
  __int64 v3;
  __int64 v4;

  v2 = *(_DWORD*)(result + 232) - 1;
  *(_DWORD*)(result + 232) = v2;
  if (v2 == 0) {
    v3 = result + 224;
    result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)(result + 224) +
                                                8LL))(result + 224, a2);
    if (*(_DWORD*)(v3 + 8) == 0) {
      result = *(_QWORD*)(GameData_21f3d10 + 200);
      if (result != 0) {
        result = DungeonController_f5e870();
      }
      v4 = GameData_21c9608;
      if ((*(_BYTE*)(GameData_21c9608 + 328) & 0x20) != 0) {
        result = game_GameModeData_instance_;
        if (game_GameModeData_instance_ != 0 &&
            *(_BYTE*)(game_GameModeData_instance_ + 57) != 0) {
          result = GameRoutine_716420(
              game_GameModeData_instance_,
              *(unsigned __int8*)(game_GameModeData_instance_ + 57));
          if (game_GameModeData_instance_ != 0) {
            *(_BYTE*)(game_GameModeData_instance_ + 57) = 0;
          }
        }
        *(_QWORD*)(v4 + 328) &= ~0x20uLL;
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
