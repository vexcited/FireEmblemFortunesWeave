#pragma once

#define NNMUSL_HIDDEN __attribute__((visibility("hidden")))

NNMUSL_HIDDEN double __nnmusl_fdiv(double x, double y);
NNMUSL_HIDDEN float __nnmusl_fdivf(float x, float y);
NNMUSL_HIDDEN double __nnmusl_fmul(double x, double y);
NNMUSL_HIDDEN double __nnmusl_fadd(double x, double y);
NNMUSL_HIDDEN float __nnmusl_faddf(float x, float y);
NNMUSL_HIDDEN double __nnmusl_fsub(double x, double y);
NNMUSL_HIDDEN float __nnmusl_fsubf(float x, float y);
NNMUSL_HIDDEN void __nnmusl_force_eval(double x);
