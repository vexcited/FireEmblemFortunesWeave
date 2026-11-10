#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

double nn_codec_FDKsqrt(double a1);

double nn_codec_FDKsqrt(double a1)
{

#pragma clang fp contract(off)
  return sqrt(a1);
}

#pragma GCC visibility pop
