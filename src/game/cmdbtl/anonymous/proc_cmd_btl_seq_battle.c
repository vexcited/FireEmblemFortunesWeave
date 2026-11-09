#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BattleInfo_796d90(_QWORD, _QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_80e800(_QWORD);
__int64 GameRoutine_a28e10(_QWORD, _QWORD);
__int64 GameRoutine_eacc20(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 std___1___shared_weak_count___release_weak();
extern __int64 (*GameData_1fe76a0[])();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_cmdbtl_anonymous_ProcCmdBtlSeqBattle_vtable[])();
extern __int64 GameData_212d240;
extern __int64 game_cmdbtl_ProcCmdBtlSeqView_instance_;
extern __int64 game_sound_g_game_sound;
extern __int64* GameData_212ea58;
extern char GameData_1a9f09e;
__int64 ProcCmdBtlSeqBattle_Destructor(__int64 a1);
__int64 ProcCmdBtlSeqBattle_Unknown18(__int64 a1, __int64 a2);
__int64 ProcCmdBtlSeqBattle_Unknown19();
__int64 ProcCmdBtlSeqBattle_Unknown20();

__int64 ProcCmdBtlSeqBattle_Destructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;

  v1 = *(_QWORD*)(a1 + 200);
  *(_QWORD*)a1 = game_cmdbtl_anonymous_ProcCmdBtlSeqBattle_vtable;
  *(_QWORD*)(a1 + 152) = GameData_1fe76a0;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak();
  }
  v3 = *(_QWORD*)(a1 + 184);
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak();
  }
  v4 = *(_QWORD*)(a1 + 168);
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak();
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 ProcCmdBtlSeqBattle_Unknown18(__int64 a1, __int64 a2)
{
  char v2;
  __int64 v3;
  __int64 v4;
  bool v6;

  v3 = *(_QWORD*)(a1 + 160);
  v4 = *(_QWORD*)(a1 + 168);
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v3 != 0) {
    v2 = BattleInfo_796d90(v3, a2);
    if (v4 == 0) {
    LABEL_8:
      if (v3 != 0) {
        return v2 & 1;
      }
      goto LABEL_9;
    }
  }
  else if (v4 == 0) {
    goto LABEL_8;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    goto LABEL_8;
  }
  (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
  std___1___shared_weak_count___release_weak();
  if (v3 != 0) {
    return v2 & 1;
  }

LABEL_9:
  v6 = *(_QWORD*)(*GameData_212ea58 + 656) == 0 ||
       *(_QWORD*)GameData_212d240 == 0;
  v2 = !v6 && (GameRoutine_eacc20(a2, 10, 0xFFFFFFFFLL, 0xFFFFFFFFLL) & 1) != 0;
  return v2 & 1;
}

__int64 ProcCmdBtlSeqBattle_Unknown19()
{
  if (game_cmdbtl_ProcCmdBtlSeqView_instance_ != 0) {
    return GameRoutine_80e800(&GameData_1a9f09e);
  }
  else {
    return GameRoutine_80e800("SE_SYS_Battle_In");
  }
}

__int64 ProcCmdBtlSeqBattle_Unknown20()
{
  __int64 result;

  result = game_sound_g_game_sound;
  if (game_sound_g_game_sound != 0) {
    return GameRoutine_a28e10(game_sound_g_game_sound, 0);
  }
  return result;
}

#pragma GCC visibility pop
