#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

void gfxa_LocalLightBuffers_LocalLightBuffers_lambda0_Invoke(__int64 a1,
                                                             __int64 a2);
void gfxa_LocalLightBuffers_LocalLightBuffers_lambda1_Invoke(__int64 a1,
                                                             __int64 a2);

void gfxa_LocalLightBuffers_LocalLightBuffers_lambda0_Invoke(__int64 a1,
                                                             __int64 a2)
{
  *(_WORD*)a2 = 514;
  *(_BYTE*)(a2 + 2) = 2;
  *(_WORD*)(a2 + 6) = 42;
}

void gfxa_LocalLightBuffers_LocalLightBuffers_lambda1_Invoke(__int64 a1,
                                                             __int64 a2)
{
  *(_BYTE*)(a2 + 4) = 0;
  *(_WORD*)a2 = 771;
  *(_WORD*)(a2 + 6) = 42;
}

#pragma GCC visibility pop
