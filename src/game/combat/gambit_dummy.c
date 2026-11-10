#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GambitDummy_Unknown3(PSEUDO_X8 x8_);

__attribute__((swiftcall)) void GambitDummy_Unknown3(PSEUDO_X8 x8_)
{
  char* a1 = (char*)PSEUDO_X8_VALUE(x8_);
  strcpy(a1, "\nDummy");
}

#pragma GCC visibility pop
