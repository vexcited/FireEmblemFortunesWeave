#include "nnmusl_libm.h"

#define T __log_data.tab
#define B __log_data.poly1
#define A __log_data.poly
#define Ln2hi __log_data.ln2hi
#define Ln2lo __log_data.ln2lo
#define N (1 << LOG_TABLE_BITS)
#define OFF 0x3fe6000000000000

double log(double x)
{
  uint64_t ix = asuint64(x);
  uint32_t top = top16(x);
  double w, r, r2, r3, y, hi, lo;

#define LO asuint64(1.0 - 0x1p-4)
#define HI asuint64(1.0 + 0x1.09p-4)
  if (predict_false(ix - LO < HI - LO)) {
    if (WANT_ROUNDING && predict_false(ix == asuint64(1.0))) {
      return 0;
    }

    r = x - 1.0;
    r2 = r * r;
    r3 = r * r2;
    y = r3 * (B[1] + r * B[2] + r2 * B[3] +
      r3 * (B[4] + r * B[5] + r2 * B[6] +
      r3 * (B[7] + r * B[8] + r2 * B[9] + r3 * B[10])));
    w = r * 0x1p27;
    double rhi = r + w - w;
    double rlo = r - rhi;
    w = rhi * rhi * B[0];
    hi = r + w;
    lo = r - hi + w;
    lo += B[0] * rlo * (rhi + r);
    y += lo;
    y += hi;
    return eval_as_double(y);
  }

  if (predict_false(top - 0x0010 >= 0x7ff0 - 0x0010)) {
    if (ix * 2 == 0) {
      return __math_divzero(1);
    }

    if (ix == asuint64(__builtin_inf())) {
      return x;
    }

    if ((top & 0x8000) || (top & 0x7ff0) == 0x7ff0) {
      return __math_invalid(x);
    }

    ix = asuint64(x * 0x1p52);
    ix -= 52ULL << 52;
  }

  uint64_t tmp = ix - OFF;
  int i = (tmp >> (52 - LOG_TABLE_BITS)) % N;
  int k = (int64_t)tmp >> 52;
  uint64_t iz = ix - (tmp & 0xfffULL << 52);
  double invc = T[i].invc;
  double logc = T[i].logc;
  double z = asdouble(iz);

  // nnmusl reaches fma through the libc entry point.
  r = fma(z, invc, -1.0);
  double kd = (double)k;

  w = kd * Ln2hi + logc;
  hi = w + r;
  lo = w - hi + r + kd * Ln2lo;

  r2 = r * r;
  y = lo + r2 * A[0] +
    r * r2 * (A[1] + r * A[2] + r2 * (A[3] + r * A[4])) + hi;
  return eval_as_double(y);
}
