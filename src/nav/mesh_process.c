#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

void MeshProcess_Unknown2(__int64 a1, __int64 a2, __int64 a3, __int64 a4);

void MeshProcess_Unknown2(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4;

  if (*(int*)(a2 + 40) >= 1) {
    v4 = 0;
    do {
      *(_WORD*)(a4 + 2 * v4++) = -1;
    } while (v4 < *(int*)(a2 + 40));
  }
}

#pragma GCC visibility pop
