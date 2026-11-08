#include "nnmusl_libm.h"

#define N (1 << EXP_TABLE_BITS)
#define InvLn2N __exp_data.invln2N
#define NegLn2hiN __exp_data.negln2hiN
#define NegLn2loN __exp_data.negln2loN
#define T __exp_data.tab
#define C2 __exp_data.poly[5 - EXP_POLY_ORDER]
#define C3 __exp_data.poly[6 - EXP_POLY_ORDER]
#define C4 __exp_data.poly[7 - EXP_POLY_ORDER]
#define C5 __exp_data.poly[8 - EXP_POLY_ORDER]

static __attribute__((noinline)) double specialcase(double tmp, uint64_t sbits,
  uint64_t ki)
{
  double scale, y;

  if ((ki & 0x80000000) == 0) {
    sbits -= 1009ull << 52;
    scale = asdouble(sbits);
    y = 0x1p1009 * (scale + scale * tmp);
    return eval_as_double(y);
  }

  sbits += 1022ull << 52;
  scale = asdouble(sbits);
  y = scale + scale * tmp;

  if (y < 1.0) {
    double lo = scale - y + scale * tmp;
    double hi = 1.0 + y;
    lo = 1.0 - hi + y + lo;
    y = eval_as_double(hi + lo) - 1.0;

    if (WANT_ROUNDING && y == 0.0) {
      y = 0.0;
    }

    fp_force_eval(fp_barrier(0x1p-1022) * 0x1p-1022);
  }

  y = 0x1p-1022 * y;
  return eval_as_double(y);
}

static inline uint32_t top12(double x)
{
  return asuint64(x) >> 52;
}

static inline double exp_inline(double x, double xtail, int has_tail)
{
  uint32_t abstop = top12(x) & 0x7ff;

  if (predict_false(abstop - top12(0x1p-54) >=
    top12(512.0) - top12(0x1p-54))) {
    if (abstop - top12(0x1p-54) >= 0x80000000) {
      return WANT_ROUNDING ? 1.0 + x : 1.0;
    }

    if (abstop >= top12(1024.0)) {
      if (asuint64(x) == asuint64(-__builtin_inf())) {
        return 0.0;
      }

      if (abstop >= top12(__builtin_inf())) {
        return 1.0 + x;
      }

      if (asuint64(x) >> 63) {
        return __math_uflow(0);
      }
      else {
        return __math_oflow(0);
      }
    }

    abstop = 0;
  }

  double z = InvLn2N * x;
  double kd = roundtoint(z);
  uint64_t ki = converttoint(z);
  double r = x + kd * NegLn2hiN + kd * NegLn2loN;

  if (has_tail) {
    r += xtail;
  }

  uint64_t idx = 2 * (ki % N);
  uint64_t top = ki << (52 - EXP_TABLE_BITS);
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

double exp(double x)
{
  return exp_inline(x, 0, 0);
}

NNMUSL_LIBM_HIDDEN double __exp_dd(double x, double xtail)
{
  return exp_inline(x, xtail, 1);
}
