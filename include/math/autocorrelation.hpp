#pragma once

#include <stddef.h>

namespace fw::math {

struct Correlation64 {
  double elements[64];
  size_t size;
};

Correlation64 AutoCorrelation64(double* samples, size_t first_lag,
                               size_t end_lag);

}
