#pragma once

#include <stdint.h>

#define NNMUSL_LIBM_HIDDEN __attribute__((visibility("hidden")))

#define predict_true(x) __builtin_expect(!!(x), 1)
#define predict_false(x) __builtin_expect(x, 0)
#define WANT_ROUNDING 1

#define EXP_TABLE_BITS 7
#define EXP_POLY_ORDER 5
#define EXP2_POLY_ORDER 5

struct exp_data {
  double invln2N;
  double shift;
  double negln2hiN;
  double negln2loN;
  double poly[4];
  double exp2_shift;
  double exp2_poly[EXP2_POLY_ORDER];
  uint64_t tab[2 * (1 << EXP_TABLE_BITS)];
};

NNMUSL_LIBM_HIDDEN extern const struct exp_data __exp_data;

#define EXP2F_TABLE_BITS 5
#define EXP2F_POLY_ORDER 3

struct exp2f_data {
  uint64_t tab[1 << EXP2F_TABLE_BITS];
  double shift_scaled;
  double poly[EXP2F_POLY_ORDER];
  double shift;
  double invln2_scaled;
  double poly_scaled[EXP2F_POLY_ORDER];
};

NNMUSL_LIBM_HIDDEN extern const struct exp2f_data __exp2f_data;

#define LOG_TABLE_BITS 7
#define LOG_POLY_ORDER 6
#define LOG_POLY1_ORDER 12

struct log_data {
  double ln2hi;
  double ln2lo;
  double poly[LOG_POLY_ORDER - 1];
  double poly1[LOG_POLY1_ORDER - 1];
  struct {
    double invc, logc;
  } tab[1 << LOG_TABLE_BITS];
};

NNMUSL_LIBM_HIDDEN extern const struct log_data __log_data;

#define LOG2_TABLE_BITS 6
#define LOG2_POLY_ORDER 7
#define LOG2_POLY1_ORDER 11

struct log2_data {
  double invln2hi;
  double invln2lo;
  double poly[LOG2_POLY_ORDER - 1];
  double poly1[LOG2_POLY1_ORDER - 1];
  struct {
    double invc, logc;
  } tab[1 << LOG2_TABLE_BITS];
};

NNMUSL_LIBM_HIDDEN extern const struct log2_data __log2_data;

#define POW_LOG_TABLE_BITS 7
#define POW_LOG_POLY_ORDER 8

struct pow_log_data {
  double ln2hi;
  double ln2lo;
  double poly[POW_LOG_POLY_ORDER - 1];
  struct {
    double invc, pad, logc, logctail;
  } tab[1 << POW_LOG_TABLE_BITS];
};

NNMUSL_LIBM_HIDDEN extern const struct pow_log_data __pow_log_data;

NNMUSL_LIBM_HIDDEN double __math_oflow(uint32_t sign);
NNMUSL_LIBM_HIDDEN double __math_uflow(uint32_t sign);
NNMUSL_LIBM_HIDDEN double __math_xflow(uint32_t sign, double y);
NNMUSL_LIBM_HIDDEN double __math_divzero(uint32_t sign);
NNMUSL_LIBM_HIDDEN double __math_invalid(double x);
NNMUSL_LIBM_HIDDEN float __math_invalidf(float x);
NNMUSL_LIBM_HIDDEN float __math_oflowf(uint32_t sign);
NNMUSL_LIBM_HIDDEN float __math_uflowf(uint32_t sign);

double round(double x);
double fma(double x, double y, double z);
double sqrt(double x);

static inline uint64_t asuint64(double f)
{
  union { double f; uint64_t i; } u = { f };
  return u.i;
}

static inline double asdouble(uint64_t i)
{
  union { uint64_t i; double f; } u = { i };
  return u.f;
}

static inline uint32_t asuint(float f)
{
  union { float f; uint32_t i; } u = { f };
  return u.i;
}

static inline uint32_t top16(double x)
{
  return asuint64(x) >> 48;
}

static inline double eval_as_double(double x)
{
  return x;
}

static inline float eval_as_float(float x)
{
  return x;
}

// nnmusl barriers are empty asm statements, they never spill to the stack.
static inline double fp_barrier(double x)
{
  __asm__ __volatile__("" : "+w"(x));
  return x;
}

static inline void fp_force_eval(double x)
{
  __asm__ __volatile__("" : : "w"(x));
}

static inline void fp_force_evalf(float x)
{
  __asm__ __volatile__("" : : "w"(x));
}

// nnmusl builds the aarch64 toint intrinsics on top of round.
static inline double roundtoint(double x)
{
  return round(x);
}

static inline int64_t converttoint(double x)
{
  return (int64_t)round(x);
}
