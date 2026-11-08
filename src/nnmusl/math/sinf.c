#include "nnmusl_sincosf.h"

float sinf(float y)
{
  double x = y;
  double s;
  int n;
  const sincos_t *p = &__sincosf_table[0];

  if (abstop12(y) < abstop12(pio4)) {
    s = x * x;

    if (predict_false(abstop12(y) < abstop12(0x1p-12f))) {
      if (predict_false(abstop12(y) < abstop12(0x1p-126f))) {
        fp_force_evalf(s);
      }

      return y;
    }

    return sinf_poly(x, s, p, 0);
  }
  else if (predict_true(abstop12(y) < abstop12(120.0f))) {
    x = reduce_fast(x, p, &n);
    s = p->sign[n & 3];

    if (n & 2) {
      p = &__sincosf_table[1];
    }

    return sinf_poly(x * s, x * x, p, n);
  }
  else if (abstop12(y) < abstop12(__builtin_inff())) {
    uint32_t xi = asuint(y);
    int sign = xi >> 31;

    x = reduce_large(xi, &n);
    s = p->sign[(n + sign) & 3];

    if ((n + sign) & 2) {
      p = &__sincosf_table[1];
    }

    return sinf_poly(x * s, x * x, p, n);
  }
  else {
    return __math_invalidf(y);
  }
}
