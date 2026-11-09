#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_da9a80(_QWORD, _QWORD);
__int64 GameRoutine_da9c00(_QWORD, _QWORD);
__int64 GameRoutine_da9d60(_QWORD, _QWORD);
__int64 GameRoutine_da9ec0(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_zview_CharacterInputPlayer_vtable[])();
_QWORD* CharacterInputPlayer_Destructor(_QWORD* result);

_QWORD* CharacterInputPlayer_Destructor(_QWORD* result)
{
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD v5[16];

  v1 = result;
  *result = game_zview_CharacterInputPlayer_vtable;
  v2 = result[1];
  v3 = *(_QWORD*)(v2 + 32);
  if (v3 != 0) {
    GameRoutine_da9c00(*(_QWORD*)(v2 + 32), result[4]);
    GameRoutine_da9d60(v3, v1[5]);
    GameRoutine_da9ec0(v3, v1[6]);
    memset(v5, 0, sizeof(v5));
    result = (_QWORD*)GameRoutine_da9a80(v3, v5);
  }
  v4 = v1[3];
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    return (_QWORD*)std___1___shared_weak_count___release_weak(v4);
  }
  return result;
}

#pragma GCC visibility pop
