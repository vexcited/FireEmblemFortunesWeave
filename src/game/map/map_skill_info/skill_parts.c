#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_155e140(_QWORD);
__int64 GameRoutine_1563f90(_QWORD, _QWORD);
__int64 GameRoutine_1564060(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_map_MapSkillInfo_SkillParts_vtable[])();
__int64 SkillParts_Destructor(_QWORD* a1);

__int64 SkillParts_Destructor(_QWORD* a1)
{
  __int64 v2;
  __int64 result;

  *a1 = game_map_MapSkillInfo_SkillParts_vtable;
  GameRoutine_155e140(a1 + 1);
  GameRoutine_155e140(a1 + 1);
  v2 = a1[13];
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    std___1___shared_weak_count___release_weak(v2);
  }
  GameRoutine_1564060(a1 + 7);
  GameRoutine_1563f90(a1 + 4, a1[5]);
  result = a1[2];
  if (result != 0) {
    return std___1___shared_weak_count___release_weak(result);
  }
  return result;
}

#pragma GCC visibility pop
