#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1670c60(_QWORD, _QWORD, _QWORD);
__int64 SystemMenuItem_Config_Unknown25(__int64 a1);

__int64 SystemMenuItem_Config_Unknown25(__int64 a1)
{
  __int64 v1;

  if (*(_BYTE*)(a1 + 82) != 1) {
    return 1;
  }
  v1 = *(_QWORD*)(a1 + 8);
  if (*(_QWORD*)(v1 + 152) != 0) {
    v1 = *(_QWORD*)(v1 + 152);
  }
  GameRoutine_1670c60(v1, 0, *(unsigned __int8*)(a1 + 144));
  return 9;
}

#pragma GCC visibility pop
