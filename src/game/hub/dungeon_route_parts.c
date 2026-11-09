#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_14a1b00(_QWORD, float);
extern __int64 (*game_hub_DungeonRouteParts_vtable[])();
__int64 DungeonRouteParts_Destructor(__int64 result);

__int64 DungeonRouteParts_Destructor(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  *(_QWORD*)result = game_hub_DungeonRouteParts_vtable;
  v1 = *(_QWORD*)(result + 80);
  if (v1 != 0) {
    v2 = result;
    result = *(_QWORD*)(v1 + 8);
    *(_BYTE*)v1 = 0;
    v3 = *(_QWORD*)result;
    if (*(_QWORD*)result != 0) {
      if (*(_DWORD*)(v3 + 16) == *(_DWORD*)(result + 8)) {
        *(_BYTE*)(v3 + 33) = 0;
        if (*(_BYTE*)v1 != 0) {
          goto LABEL_7;
        }
      }
      result = *(_QWORD*)(v1 + 8);
    }
    result = GameRoutine_14a1b00(result, 0.0);
  LABEL_7:
    *(_QWORD*)(v2 + 80) = 0;
  }
  return result;
}

#pragma GCC visibility pop
