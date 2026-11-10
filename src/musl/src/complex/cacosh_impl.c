#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 cacos_plt(void);
double cacosh(double a1, double a2);

double cacosh(double a1, double a2)
{

#pragma clang fp contract(off)
  double v3;
  double v4;

  v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(double, "d1", "=w"));
  cacos_plt(),
      v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(double, "d1", "=w"));
  v4 = -v3;
  if (*(__int64*)&a2 <= -1) {
    return v3;
  }
  return v4;
}

#pragma GCC visibility pop
