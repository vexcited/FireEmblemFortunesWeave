#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_ceca80(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_d8cf60(_QWORD);
__int64 MapObjectModule_a7d120(_QWORD);
__int64 MapObjectModule_a7d220(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_hub_anonymous_ProcHubSeqAreaChangeBase_vtable[])();
extern __int64 (*game_hub_anonymous_ProcHubSeqAreaChangePlayer_vtable[])();
extern __int64 GameData_21f3cb8;
extern __int64 GameData_2212260;
__int64 ProcHubSeqAreaChangePlayer_Destructor(__int64 a1);

__int64 ProcHubSeqAreaChangePlayer_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;

  *(_QWORD*)a1 = game_hub_anonymous_ProcHubSeqAreaChangePlayer_vtable;
  v2 = *(_QWORD*)(a1 + 168);
  if (v2 != 0) {
    GameRoutine_ceca80(*(_QWORD*)(v2 + 24), 0x20000, 0);
    GameRoutine_ceca80(*(_QWORD*)(*(_QWORD*)(a1 + 168) + 24LL), 4096, 0);
  }
  GameRoutine_d8cf60(GameData_21f3cb8);
  v3 = *(_QWORD*)(a1 + 152);
  if (v3 != 0) {
    *(_BYTE*)(v3 + 156) = 0;
    MapObjectModule_a7d120(v3);
    *(_BYTE*)(v3 + 157) = 0;
    MapObjectModule_a7d220(v3);
  }
  v4 = *(_QWORD*)(a1 + 176);
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
  }
  *(_QWORD*)a1 = game_hub_anonymous_ProcHubSeqAreaChangeBase_vtable;
  if (*(_BYTE*)(GameData_2212260 + 12) == 1) {
    *(_BYTE*)(GameData_2212260 + 12) = 0;
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

#pragma GCC visibility pop
