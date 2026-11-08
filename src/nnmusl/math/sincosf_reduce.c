#include "nnmusl_sincosf.h"

// The callers share one out of line copy of the large argument reduction.
NNMUSL_LIBM_HIDDEN __attribute__((noinline)) double __sincosf_reduce_large(
  uint32_t xi, int *np)
{
  return reduce_large(xi, np);
}
