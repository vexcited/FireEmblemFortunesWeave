#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

void gfxa_SceneBuffers_SceneBuffers_lambda0_Invoke(__int64 a1, _WORD* a2);
void gfxa_SceneBuffers_SceneBuffers_lambda1_Invoke(__int64 a1, _WORD* a2);
void gfxa_SceneBuffers_SceneBuffers_lambda2_Invoke(__int64 a1, __int64 a2);

void gfxa_SceneBuffers_SceneBuffers_lambda0_Invoke(__int64 a1, _WORD* a2)
{
  *a2 = 514;
  a2[3] = 42;
}

void gfxa_SceneBuffers_SceneBuffers_lambda1_Invoke(__int64 a1, _WORD* a2)
{
  *a2 = 0;
  a2[3] = 42;
}

void gfxa_SceneBuffers_SceneBuffers_lambda2_Invoke(__int64 a1, __int64 a2)
{
  *(_WORD*)a2 = 771;
  *(_BYTE*)(a2 + 4) = 2;
  *(_WORD*)(a2 + 6) = 42;
}

#pragma GCC visibility pop
