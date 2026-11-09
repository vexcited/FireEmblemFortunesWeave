#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BlacksmithMenuItem_Info_Unknown3(__int64 a1);

__int64 BlacksmithMenuItem_Info_Unknown3(__int64 a1)
{
  if ((*(_BYTE*)(a1 + 96) & 1) != 0) {
    return *(_QWORD*)(a1 + 112);
  }
  else {
    return a1 + 97;
  }
}

#pragma GCC visibility pop
