#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

double compiler_rt_18_1_8_lib_builtins_855db0(double a1, double a2, double a3,
                                              double a4);

double compiler_rt_18_1_8_lib_builtins_855db0(double a1, double a2, double a3,
                                              double a4)
{
  return PSEUDO_UNFUSED(a1 * a3) - PSEUDO_UNFUSED(a2 * a4);
}

#pragma GCC visibility pop
