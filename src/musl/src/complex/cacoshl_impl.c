#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 __signbitl_plt(long double);
long double cacosl_plt(long double, long double);
long double cacoshl(long double a1, long double a2);

long double cacoshl(long double a1, long double a2)
{
  int v2;
  long double v3;
  long double result;
  long double v7;

  v2 = __signbitl_plt(a2);
  cacosl_plt(a1, a2);
  result = v3;
  v7 = v3;
  if (v2 == 0) {
    HIBYTE(v7) = HIBYTE(v3) ^ 0x80;
    return v7;
  }
  return result;
}

#pragma GCC visibility pop
