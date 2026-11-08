#include "nnmusl_sincosf.h"

void sincosf(float y, float *sinp, float *cosp)
{
  double x = y;
  double s;
  int n;
  const sincos_t *p = &__sincosf_table[0];

  if (abstop12(y) < abstop12(pio4)) {
    double x2 = x * x;

    if (predict_false(abstop12(y) < abstop12(0x1p-12f))) {
      if (predict_false(abstop12(y) < abstop12(0x1p-126f))) {
        fp_force_evalf(x2);
      }

      *sinp = y;
      *cosp = 1.0f;
      return;
    }

    sincosf_poly(x, x2, p, 0, sinp, cosp);
  }
  else if (abstop12(y) < abstop12(120.0f)) {
    x = reduce_fast(x, p, &n);
    s = p->sign[n & 3];

    if (n & 2) {
      p = &__sincosf_table[1];
    }

    sincosf_poly(x * s, x * x, p, n, sinp, cosp);
  }
  else if (predict_true(abstop12(y) < abstop12(__builtin_inff()))) {
    uint32_t xi = asuint(y);
    int sign = xi >> 31;

    x = reduce_large(xi, &n);
    s = p->sign[(n + sign) & 3];

    if ((n + sign) & 2) {
      p = &__sincosf_table[1];
    }

    sincosf_poly(x * s, x * x, p, n, sinp, cosp);
  }
  else {
    *sinp = *cosp = y - y;
  }
}
