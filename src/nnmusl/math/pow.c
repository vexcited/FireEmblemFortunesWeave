#include "nnmusl_libm.h"

#define T __pow_log_data.tab
#define A __pow_log_data.poly
#define Ln2hi __pow_log_data.ln2hi
#define Ln2lo __pow_log_data.ln2lo
#define N (1 << POW_LOG_TABLE_BITS)
#define OFF 0x3fe6955500000000

static inline uint32_t top12(double x)
{
  return asuint64(x) >> 52;
}

static inline double log_inline(uint64_t ix, double *tail)
{
  uint64_t tmp = ix - OFF;
  int i = (tmp >> (52 - POW_LOG_TABLE_BITS)) % N;
  int k = (int64_t)tmp >> 52;
  uint64_t iz = ix - (tmp & 0xfffULL << 52);
  double z = asdouble(iz);
  double kd = (double)k;
  double invc = T[i].invc;
  double logc = T[i].logc;
  double logctail = T[i].logctail;
  double r = fma(z, invc, -1.0);

  double t1 = kd * Ln2hi + logc;
  double t2 = t1 + r;
  double lo1 = kd * Ln2lo + logctail;
  double lo2 = t1 - t2 + r;

  double ar = A[0] * r;
  double ar2 = r * ar;
  double ar3 = r * ar2;
  double hi = t2 + ar2;
  double lo3 = fma(ar, r, -ar2);
  double lo4 = t2 - hi + ar2;
  double p = ar3 * (A[1] + r * A[2] +
    ar2 * (A[3] + r * A[4] + ar2 * (A[5] + r * A[6])));
  double lo = lo1 + lo2 + lo3 + lo4 + p;
  double y = hi + lo;
  *tail = hi - y + lo;
  return y;
}

#undef N
#undef T
#define N (1 << EXP_TABLE_BITS)
#define InvLn2N __exp_data.invln2N
#define NegLn2hiN __exp_data.negln2hiN
#define NegLn2loN __exp_data.negln2loN
#define T __exp_data.tab
#define C2 __exp_data.poly[5 - EXP_POLY_ORDER]
#define C3 __exp_data.poly[6 - EXP_POLY_ORDER]
#define C4 __exp_data.poly[7 - EXP_POLY_ORDER]
#define C5 __exp_data.poly[8 - EXP_POLY_ORDER]

// Like exp2, the nnmusl special case has no subnormal rounding fixup.
static inline double specialcase(double tmp, uint64_t sbits, uint64_t ki)
{
  double scale;

  if ((ki & 0x80000000) == 0) {
    sbits -= 1009ull << 52;
    scale = asdouble(sbits);
    return eval_as_double(0x1p1009 * (scale + scale * tmp));
  }

  sbits += 1022ull << 52;
  scale = asdouble(sbits);
  return eval_as_double(0x1p-1022 * (scale + scale * tmp));
}

#define SIGN_BIAS (0x800 << EXP_TABLE_BITS)

static inline double exp_inline(double x, double xtail, uint32_t sign_bias)
{
  uint32_t abstop = top12(x) & 0x7ff;

  if (predict_false(abstop - top12(0x1p-54) >=
    top12(512.0) - top12(0x1p-54))) {
    if (abstop - top12(0x1p-54) >= 0x80000000) {
      double one = WANT_ROUNDING ? 1.0 + x : 1.0;
      return sign_bias ? -one : one;
    }

    if (abstop >= top12(1024.0)) {
      if (asuint64(x) >> 63) {
        return __math_uflow(sign_bias);
      }
      else {
        return __math_oflow(sign_bias);
      }
    }

    abstop = 0;
  }

  double z = InvLn2N * x;
  double kd = roundtoint(z);
  uint64_t ki = converttoint(z);
  double r = x + kd * NegLn2hiN + kd * NegLn2loN;
  r += xtail;
  uint64_t idx = 2 * (ki % N);
  uint64_t top = (ki + sign_bias) << (52 - EXP_TABLE_BITS);
  double tail = asdouble(T[idx]);
  uint64_t sbits = T[idx + 1] + top;
  double r2 = r * r;
  double tmp = tail + r + r2 * (C2 + r * C3) + r2 * r2 * (C4 + r * C5);

  if (predict_false(abstop == 0)) {
    return specialcase(tmp, sbits, ki);
  }

  double scale = asdouble(sbits);
  return eval_as_double(scale + scale * tmp);
}

static inline int checkint(uint64_t iy)
{
  int e = iy >> 52 & 0x7ff;

  if (e < 0x3ff) {
    return 0;
  }

  if (e > 0x3ff + 52) {
    return 2;
  }

  if (iy & ((1ULL << (0x3ff + 52 - e)) - 1)) {
    return 0;
  }

  if (iy & (1ULL << (0x3ff + 52 - e))) {
    return 1;
  }

  return 2;
}

static inline int zeroinfnan(uint64_t i)
{
  return 2 * i - 1 >= 2 * asuint64(__builtin_inf()) - 1;
}

static inline int issignaling_inline(double x)
{
  uint64_t ix = asuint64(x);
  return 2 * (ix ^ 0x0008000000000000) > 2 * 0x7ff8000000000000ULL;
}

double pow(double x, double y)
{
  uint32_t sign_bias = 0;
  uint64_t ix = asuint64(x);
  uint64_t iy = asuint64(y);

  // nnmusl checks a few exact exponents before the musl code.
  if (ix == asuint64(1.0)) {
    return 1.0;
  }

  if ((uint32_t)iy == 0) {
    if ((iy & 0x7fffffff00000000) == asuint64(1.0)) {
      return iy >> 63 ? 1.0 / x : x;
    }

    if (iy >> 32 == 0x40000000) {
      return x * x;
    }

    if (iy >> 32 == 0x3fe00000 && !(ix >> 63)) {
      return sqrt(x);
    }
  }

  uint32_t topx = top12(x);
  uint32_t topy = top12(y);

  if (predict_false(topx - 0x001 >= 0x7ff - 0x001 ||
    (topy & 0x7ff) - 0x3be >= 0x43e - 0x3be)) {
    if (predict_false(zeroinfnan(iy))) {
      if (2 * iy == 0) {
        return issignaling_inline(x) ? x + y : 1.0;
      }

      if (ix == asuint64(1.0)) {
        return issignaling_inline(y) ? x + y : 1.0;
      }

      if (2 * ix > 2 * asuint64(__builtin_inf()) ||
        2 * iy > 2 * asuint64(__builtin_inf())) {
        return x + y;
      }

      if (2 * ix == 2 * asuint64(1.0)) {
        return 1.0;
      }

      if ((2 * ix < 2 * asuint64(1.0)) == !(iy >> 63)) {
        return 0.0;
      }

      return y * y;
    }

    if (predict_false(zeroinfnan(ix))) {
      double x2 = x * x;

      if (ix >> 63 && checkint(iy) == 1) {
        x2 = -x2;
      }

      return iy >> 63 ? fp_barrier(1 / x2) : x2;
    }

    if (ix >> 63) {
      int yint = checkint(iy);

      if (yint == 0) {
        return __math_invalid(x);
      }

      if (yint == 1) {
        sign_bias = SIGN_BIAS;
      }

      ix &= 0x7fffffffffffffff;
      topx &= 0x7ff;
    }

    if ((topy & 0x7ff) - 0x3be >= 0x43e - 0x3be) {
      if (ix == asuint64(1.0)) {
        return 1.0;
      }

      if ((topy & 0x7ff) < 0x3be) {
        return ix > asuint64(1.0) ? 1.0 + y : 1.0 - y;
      }

      return (ix > asuint64(1.0)) == (topy < 0x800) ?
        __math_oflow(0) : __math_uflow(0);
    }

    if (topx == 0) {
      ix = asuint64(x * 0x1p52);
      ix &= 0x7fffffffffffffff;
      ix -= 52ULL << 52;
    }
  }

  double lo;
  double hi = log_inline(ix, &lo);
  double ehi = y * hi;
  double elo = y * lo + fma(y, hi, -ehi);
  return exp_inline(ehi, elo, sign_bias);
}
