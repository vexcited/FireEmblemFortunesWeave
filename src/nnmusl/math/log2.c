#include "nnmusl_libm.h"

#define T __log2_data.tab
#define B __log2_data.poly1
#define A __log2_data.poly
#define InvLn2hi __log2_data.invln2hi
#define InvLn2lo __log2_data.invln2lo
#define N (1 << LOG2_TABLE_BITS)
#define OFF 0x3fe6000000000000

double log2(double x)
{
  uint64_t ix = asuint64(x);
  uint32_t top = top16(x);
  double r, r2, r4, y, hi, lo, p;

#define LO asuint64(1.0 - 0x1.5b51p-5)
#define HI asuint64(1.0 + 0x1.6ab2p-5)
  if (predict_false(ix - LO < HI - LO)) {
    if (WANT_ROUNDING && predict_false(ix == asuint64(1.0))) {
      return 0;
    }

    r = x - 1.0;
    hi = r * InvLn2hi;
    lo = r * InvLn2lo + fma(r, InvLn2hi, -hi);
    r2 = r * r;
    r4 = r2 * r2;
    p = r2 * (B[0] + r * B[1]);
    y = hi + p;
    lo += hi - y + p;
    lo += r4 * (B[2] + r * B[3] + r2 * (B[4] + r * B[5]) +
      r4 * (B[6] + r * B[7] + r2 * (B[8] + r * B[9])));
    y += lo;
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
  int i = (tmp >> (52 - LOG2_TABLE_BITS)) % N;
  int k = (int64_t)tmp >> 52;
  uint64_t iz = ix - (tmp & 0xfffULL << 52);
  double invc = T[i].invc;
  double logc = T[i].logc;
  double z = asdouble(iz);
  double kd = (double)k;

  r = fma(z, invc, -1.0);
  double t1 = r * InvLn2hi;
  double t2 = r * InvLn2lo + fma(r, InvLn2hi, -t1);

  double t3 = kd + logc;
  hi = t3 + t1;
  lo = t3 - hi + t1 + t2;

  r2 = r * r;
  r4 = r2 * r2;
  p = A[0] + r * A[1] + r2 * (A[2] + r * A[3]) + r4 * (A[4] + r * A[5]);
  y = lo + r2 * p + hi;
  return eval_as_double(y);
}
