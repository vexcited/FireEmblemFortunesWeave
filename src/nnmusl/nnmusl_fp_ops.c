#include "nnmusl_fp_ops.h"

// nnmusl keeps exception raising operations out of line, so the compiler
// can neither fold nor reorder them.
NNMUSL_HIDDEN volatile double __nnmusl_fp_sink;

NNMUSL_HIDDEN double __nnmusl_fdiv(double x, double y)
{
  return x / y;
}

NNMUSL_HIDDEN float __nnmusl_fdivf(float x, float y)
{
  return x / y;
}

NNMUSL_HIDDEN double __nnmusl_fmul(double x, double y)
{
  return x * y;
}

NNMUSL_HIDDEN double __nnmusl_fadd(double x, double y)
{
  return x + y;
}

NNMUSL_HIDDEN float __nnmusl_faddf(float x, float y)
{
  return x + y;
}

NNMUSL_HIDDEN double __nnmusl_fsub(double x, double y)
{
  return x - y;
}

NNMUSL_HIDDEN float __nnmusl_fsubf(float x, float y)
{
  return x - y;
}

NNMUSL_HIDDEN void __nnmusl_force_eval(double x)
{
  __nnmusl_fp_sink = x;
}
