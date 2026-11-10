#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

double clog_plt(double, double);
long double csqrt_plt(double, double);
double casin(double a1, double a2);

double casin(double a1, double a2)
{
  long double v4;
  double v5;
  double v6;

  v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(double, "d1", "=w")),
  v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(double, "d1", "=w"));
  v4 = csqrt_plt(0x1.0000000000000p+0 - (a1 - a2) * (a1 + a2),
                 a2 * (a1 * -0x1.0000000000000p+1)),
  v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(double, "d1", "=w")),
  v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(double, "d1", "=w"));
  clog_plt(*(double*)&v4 - a2, a1 + v5),
      v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(double, "d1", "=w")),
      v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(double, "d1", "=w"));
  return v6;
}

#pragma GCC visibility pop
