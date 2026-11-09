#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SpecialSeodolaCondition_Unknown2(__int64 a1, _DWORD* a2);

__int64 SpecialSeodolaCondition_Unknown2(__int64 a1, _DWORD* a2)
{
  return (*a2 > 1) | (unsigned int)((*(_BYTE*)(a1 + 8) & 1) == 0);
}

#pragma GCC visibility pop
