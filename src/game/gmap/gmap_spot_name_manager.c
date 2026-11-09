#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_17bddb0(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_20d8a50[])();
extern __int64 GameData_2265728;
extern int GameData_2265734;
__int64 GmapSpotNameManager_Destructor(_QWORD* a1);

__int64 GmapSpotNameManager_Destructor(_QWORD* a1)
{
  __int64 result;
  __int64 v3;

  result = GameRoutine_17bddb0(a1 + 3);
  v3 = a1[2];
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    result = std___1___shared_weak_count___release_weak(v3);
  }
  *a1 = GameData_20d8a50;
  if ((_QWORD*)GameData_2265728 == a1) {
    GameData_2265728 = 0;
    GameData_2265734 = 0;
  }
  return result;
}

#pragma GCC visibility pop
