#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 strcmp(_QWORD, _QWORD);
bool TransitionConditionVariableChanged_Unknown2(__int64 a1, __int64 a2);

bool TransitionConditionVariableChanged_Unknown2(__int64 a1, __int64 a2)
{
  __int64 v5;
  int v6;
  int v7;
  int v8;

  if (*(_DWORD*)(a2 + 16) != 7) {
    return false;
  }
  if ((unsigned int)strcmp(*(_QWORD*)(a2 + 24), a1 + 9) != 0) {
    return false;
  }
  v5 = *(_QWORD*)(a2 + 32);
  v6 = *(_DWORD*)(a1 + 36);
  if (v6 == 5) {
    v8 = *(_DWORD*)(v5 + 72);
    if (v8 == 1) {
      return *(float*)(v5 + 64) < *(float*)(a1 + 40);
    }
    else {
      if (v8 != 0) {
        return false;
      }
      return (*(_BYTE*)(v5 + 64) ^ 1) & *(_BYTE*)(a1 + 40) & 1;
    }
  }
  else {
    if (v6 != 0) {
      return false;
    }
    v7 = *(_DWORD*)(v5 + 72);
    if (v7 == 1) {
      return *(float*)(v5 + 64) > *(float*)(a1 + 40);
    }
    else {
      if (v7 != 0) {
        return false;
      }
      return *(_BYTE*)(v5 + 64) & (*(_BYTE*)(a1 + 40) ^ 1) & 1;
    }
  }
}

#pragma GCC visibility pop
