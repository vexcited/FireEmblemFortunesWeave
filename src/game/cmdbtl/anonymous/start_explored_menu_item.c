#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_17859d0(_QWORD, _QWORD, _QWORD);
extern __int64 GameData_21c9608;
__int64 StartExploredMenuItem_Unknown25(__int64 a1);

__int64 StartExploredMenuItem_Unknown25(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  _BYTE v5[32];
  _BYTE* v6;

  if (*(_BYTE*)(a1 + 82) != 1 || (*(_BYTE*)(GameData_21c9608 + 328) & 4) == 0 &&
                                     *(int*)(GameData_21c9608 + 308) < 1) {
    return 1;
  }
  v1 = *(_QWORD*)(a1 + 8);
  v6 = nullptr;
  v2 = GameRoutine_17859d0(v1, 1, v5);
  if (v6 == v5) {
    v3 = 32;
  }
  else {
    if (v6 == nullptr) {
      goto LABEL_9;
    }
    v3 = 40;
  }
  (*(void (**)(void*))(*(_QWORD*)v6 + v3))((void*)v6);

LABEL_9:
  if (v2 != 0) {
    return 12;
  }
  return 1;
}

#pragma GCC visibility pop
