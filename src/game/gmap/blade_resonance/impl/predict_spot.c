#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

bool PredictSpot_Destructor(__int64 a1);

bool PredictSpot_Destructor(__int64 a1)
{
  return (unsigned int)(*(_DWORD*)(a1 + 52) - 1) < 2;
}

#pragma GCC visibility pop
