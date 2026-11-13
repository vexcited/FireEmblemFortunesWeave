#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_nlib_6b7180(unsigned int** a1);

__int64 nn_nlib_6b7180(unsigned int** a1)
{
  unsigned int* v1;
  unsigned __int64 v2;

  v1 = a1[1];
  v2 = **a1;
  if ((unsigned __int64)v1 >= v2) {
    return 28LL - __clz((unsigned int)((_DWORD)v1 - v2 + 16));
  }
  else {
    return 0;
  }
}

#pragma GCC visibility pop
