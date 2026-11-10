#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__n128 GameRoutine_109d5e0(unsigned int*);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_character_IKSlopeQuadrupedal_vtable[])();
__n128 IKSlopeQuadrupedal_Destructor(__int64 a1);

__n128 IKSlopeQuadrupedal_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __n128 result;
  __int64 v7;

  *(_QWORD*)a1 = game_character_IKSlopeQuadrupedal_vtable;
  GameRoutine_109d5e0((unsigned int*)(a1 + 336));
  v2 = *(_QWORD*)(a1 + 360);
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak(v2);
  }
  GameRoutine_109d5e0((unsigned int*)(a1 + 304));
  v3 = *(_QWORD*)(a1 + 328);
  if (v3 != 0) {
    std___1___shared_weak_count___release_weak(v3);
  }
  GameRoutine_109d5e0((unsigned int*)(a1 + 272));
  v4 = *(_QWORD*)(a1 + 296);
  if (v4 != 0) {
    std___1___shared_weak_count___release_weak(v4);
  }
  GameRoutine_109d5e0((unsigned int*)(a1 + 240));
  v5 = *(_QWORD*)(a1 + 264);
  if (v5 != 0) {
    std___1___shared_weak_count___release_weak(v5);
  }
  result = GameRoutine_109d5e0((unsigned int*)(a1 + 64));
  v7 = *(_QWORD*)(a1 + 88);
  if (v7 != 0) {
    return std___1___shared_weak_count___release_weak(v7);
  }
  return result;
}

#pragma GCC visibility pop
