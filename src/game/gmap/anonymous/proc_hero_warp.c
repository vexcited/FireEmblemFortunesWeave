#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int128 GameData_22532c0;
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_gmap_anonymous_ProcHeroWarp_vtable[])();
__int64 ProcHeroWarp_Destructor(__int64 a1);

__int64 ProcHeroWarp_Destructor(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 176);
  *(_QWORD*)a1 = game_gmap_anonymous_ProcHeroWarp_vtable;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak(v1);
  }
  *((_QWORD*)&GameData_22532c0 + 1) = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

#pragma GCC visibility pop
