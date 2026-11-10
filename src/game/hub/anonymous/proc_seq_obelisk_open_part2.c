#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 snd_Fade_Fade_10c910(_QWORD, _QWORD);
__int64 snd_fnd_WeakHandle_get(_QWORD);
__int64 snd_fnd_WeakHandle_isValid(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_hub_anonymous_ProcSeqObeliskOpenPart2_vtable[])();
__int64 ProcSeqObeliskOpenPart2_Destructor(__int64 a1);

__int64 ProcSeqObeliskOpenPart2_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  _BYTE v5[200];

  *(_QWORD*)a1 = game_hub_anonymous_ProcSeqObeliskOpenPart2_vtable;
  if ((snd_fnd_WeakHandle_isValid(a1 + 280) & 1) != 0) {
    v2 = snd_fnd_WeakHandle_get(a1 + 280);
    snd_Fade_Fade_10c910(v5, 500);
    (*(void (**)(__int64, _BYTE*, _QWORD, double))(
        *(_QWORD*)(v2 - 5592) + 248LL))(v2 - 5592, v5, 0, 0.0);
    snd_Fade_Destroy_Fade(v5);
  }
  v3 = *(_QWORD*)(a1 + 264);
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

#pragma GCC visibility pop
