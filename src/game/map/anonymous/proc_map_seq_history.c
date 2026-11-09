#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 MapInfo_825790(void);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_map_anonymous_ProcMapSeqHistory_vtable[])();
extern __int64 GameData_21c9648;
extern __int64 GameData_21cd128;
extern __int64 GameData_21cd138;
extern __int64 GameData_2240780;
__int64 ProcMapSeqHistory_Destructor(__int64 a1);

__int64 ProcMapSeqHistory_Destructor(__int64 a1)
{
  __int64 v2;
  int v3;
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  *(_QWORD*)a1 = game_map_anonymous_ProcMapSeqHistory_vtable;
  if (GameData_21cd128 != 0) {
    MapInfo_825790();
  }
  v2 = GameData_21cd138;
  v3 = *(_DWORD*)(GameData_21cd138 + 16) - 1;
  *(_DWORD*)(GameData_21cd138 + 16) = v3;
  if (v3 == 0) {
    (*(void (**)(__int64))(*(_QWORD*)(v2 + 8) + 8LL))(v2 + 8);
  }
  v4 = GameData_21c9648;
  v5 = *(_DWORD*)(GameData_21c9648 + 16) - 1;
  *(_DWORD*)(GameData_21c9648 + 16) = v5;
  if (v5 == 0) {
    (*(void (**)(__int64))(*(_QWORD*)(v4 + 8) + 8LL))(v4 + 8);
  }
  v6 = *(_QWORD*)(a1 + 216);
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
  }
  v7 = *(_QWORD*)(a1 + 200);
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
  }
  v8 = *(_QWORD*)(a1 + 184);
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak(v8);
  }
  GameData_2240780 = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

#pragma GCC visibility pop
