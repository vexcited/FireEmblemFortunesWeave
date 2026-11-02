#pragma once

#include "audio/butterworth.hpp"

namespace fw::audio {

struct ComplexCoefficient {
  double real;
  double imaginary;
};

void ExpandButterworthRoots(const ComplexCoefficient* roots, uint32_t count,
                            ComplexCoefficient* coefficients);
uint32_t InitializeButterworth(nerd::Butterworth* filter, uint32_t order,
                               bool high_pass, double sample_rate,
                               double cutoff)
  asm("_ZN4nerd11Butterworth6DoInitEddjb");

}
