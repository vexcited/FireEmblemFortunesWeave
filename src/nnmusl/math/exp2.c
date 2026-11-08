#include "nnmusl_libm.h"
#include "../nnmusl_fp_ops.h"

#define N (1 << EXP_TABLE_BITS)
#define Shift __exp_data.exp2_shift
#define T __exp_data.tab
#define C1 __exp_data.exp2_poly[0]
#define C2 __exp_data.exp2_poly[1]
#define C3 __exp_data.exp2_poly[2]
#define C4 __exp_data.exp2_poly[3]
#define C5 __exp_data.exp2_poly[4]

// Unlike exp, the nnmusl exp2 special case has no subnormal rounding fixup.
static inline double specialcase(double tmp, uint64_t sbits, uint64_t ki)
{
  double scale;

  if ((ki & 0x80000000) == 0) {
    sbits -= 1ull << 52;
    scale = asdouble(sbits);
    return eval_as_double(2 * (scale + scale * tmp));
  }

  sbits += 1022ull << 52;
  scale = asdouble(sbits);
  return eval_as_double(0x1p-1022 * (scale + scale * tmp));
}

static inline uint32_t top12(double x)
{
  return asuint64(x) >> 52;
}

double exp2(double x)
{
  uint64_t bits = asuint64(x);

  // The musl 1.1 underflow signalling is kept in front of the new code.
  if ((bits >> 32 & 0x7fffffff) >= 0x408ff000 && bits >> 63) {
    if (x <= -1075 || x - 0x1p52 + 0x1p52 != x) {
      __nnmusl_force_eval((float)(-0x1p-149 / x));
    }

    if (x <= -1075) {
      return 0;
    }
  }

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

      if (!(asuint64(x) >> 63)) {
        return __math_oflow(0);
      }
      else if (asuint64(x) >= asuint64(-1075.0)) {
        return __math_uflow(0);
      }
    }

    if (2 * asuint64(x) > 2 * asuint64(928.0)) {
      abstop = 0;
    }
  }

  double kd = eval_as_double(x + Shift);
  uint64_t ki = asuint64(kd);
  kd -= Shift;
  double r = x - kd;
  uint64_t idx = 2 * (ki % N);
  uint64_t top = ki << (52 - EXP_TABLE_BITS);
  double tail = asdouble(T[idx]);
  uint64_t sbits = T[idx + 1] + top;
  double r2 = r * r;
  double tmp = tail + r * C1 + r2 * (C2 + r * C3) + r2 * r2 * (C4 + r * C5);

  if (predict_false(abstop == 0)) {
    return specialcase(tmp, sbits, ki);
  }

  double scale = asdouble(sbits);
  return eval_as_double(scale + scale * tmp);
}
