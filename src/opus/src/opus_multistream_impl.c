#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 opus_multistream_75140(int* a1, int a2, int a3);

__int64 opus_multistream_75140(int* a1, int a2, int a3)
{
  __int64 v4;
  __int64 result;
  __int64 v6;
  unsigned __int8* v7;
  int v8;

  v4 = *a1;
  if (a3 <= -1) {
    LODWORD(result) = -1;
  }
  else {
    LODWORD(result) = a3;
  }
  v6 = (int)result + 1LL;
  v7 = (unsigned __int8*)a1 + (int)result + 13;
  while (v6 < v4) {
    v8 = *v7++;
    result = (unsigned int)(result + 1);
    ++v6;
    if (2 * a2 == v8) {
      return result;
    }
  }
  return 0xFFFFFFFFLL;
}

#pragma GCC visibility pop
