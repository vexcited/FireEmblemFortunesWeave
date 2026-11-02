#include "audio/butterworth_init.hpp"

namespace fw::audio {

namespace butterworth_detail {

double Cosine(double) asm("cos");
double Sine(double) asm("sin");
double Tangent(double) asm("tan");
double Magnitude(double, double) asm("hypot");
ComplexCoefficient Divide(double, double, double, double) asm("__divdc3");
ComplexCoefficient Multiply(double, double, double, double)
  asm("__muldc3");
void GenericEntry() asm("_ZN4nerd11Butterworth12ApplyGenericEPKsPsmm");
void TwoEntry() asm("_ZN4nerd11Butterworth6Apply2EPKsPsmm");
void FourEntry() asm("_ZN4nerd11Butterworth6Apply4EPKsPsmm");
void SixEntry() asm("_ZN4nerd11Butterworth6Apply6EPKsPsmm");

ComplexCoefficient MultiplyRoot(ComplexCoefficient root,
                                ComplexCoefficient coefficient) {
  double real = root.imaginary * coefficient.imaginary
    - root.real * coefficient.real;
  double imaginary = coefficient.imaginary * -root.real
    - root.imaginary * coefficient.real;

  if (__builtin_isnan(real) && __builtin_isnan(imaginary)) {
    return Multiply(-root.real, -root.imaginary,
                    coefficient.real, coefficient.imaginary);
  }

  return {real, imaginary};
}

ComplexCoefficient Evaluate(const ComplexCoefficient* coefficients,
                             uint32_t count, double point) {
  ComplexCoefficient value = {};

  for (size_t i = count + 1; i != 0; --i) {
    double real = point * value.real - value.imaginary * 0.0;
    double imaginary = value.real * 0.0 + point * value.imaginary;

    if (__builtin_isnan(real) && __builtin_isnan(imaginary)) {
      ComplexCoefficient product = Multiply(value.real, value.imaginary,
                                             point, 0.0);
      real = product.real;
      imaginary = product.imaginary;
    }

    value.real = real + coefficients[i - 1].real;
    value.imaginary = imaginary + coefficients[i - 1].imaginary;
  }

  return value;
}

}

using namespace butterworth_detail;

void ExpandButterworthRoots(const ComplexCoefficient* roots, uint32_t count,
                            ComplexCoefficient* coefficients) {
  coefficients[0] = {1.0, 0.0};
  __builtin_memset(coefficients + 1, 0,
                   sizeof(ComplexCoefficient) * count);

  for (size_t i = 0; i < count; ++i) {
    for (size_t j = count; j != 0; --j) {
      ComplexCoefficient product = MultiplyRoot(roots[i], coefficients[j]);
      coefficients[j].real = product.real + coefficients[j - 1].real;
      coefficients[j].imaginary = product.imaginary
        + coefficients[j - 1].imaginary;
    }

    coefficients[0] = MultiplyRoot(roots[i], coefficients[0]);
  }
}

uint32_t InitializeButterworth(nerd::Butterworth* filter, uint32_t order,
                               bool high_pass, double sample_rate,
                               double cutoff) {
  filter->order = 0;
  filter->unknown_170 = 0;
  filter->unknown_178 = 0;

  if (__builtin_isgreaterequal(cutoff, sample_rate * 0.5) || order - 1 > 9) {
    return 3587;
  }

  ComplexCoefficient poles[10] = {};
  double offset = (order & 1) != 0 ? 0.0 : 0.5;

  for (uint32_t i = 0; i < order; ++i) {
    int index = (i & 1) == 0 ? static_cast<int>(order + i / 2)
      : static_cast<int>(order - (i + 1) / 2);
    double angle = (offset + static_cast<double>(index)) * 0x1.921fb54442d18p+1
      / static_cast<double>(order);
    poles[i].real = Cosine(angle);
    poles[i].imaginary = Sine(angle);
  }

  double scale = Tangent(cutoff / sample_rate * 0x1.921fb54442d18p+1)
    / 0x1.921fb54442d18p+1 * 0x1.921fb54442d18p+2;

  for (uint32_t i = 0; i < order; ++i) {
    if (high_pass) {
      poles[i] = Divide(scale, 0.0, poles[i].real, poles[i].imaginary);
    }
    else {
      poles[i].real = scale * poles[i].real;
      poles[i].imaginary = scale * poles[i].imaginary;
    }
  }

  ComplexCoefficient transformed[10] = {};
  ComplexCoefficient zeros[10] = {};

  for (uint32_t i = 0; i < order; ++i) {
    transformed[i] = Divide(poles[i].real + 2.0, poles[i].imaginary,
                            2.0 - poles[i].real, -poles[i].imaginary);
    zeros[i] = {high_pass ? 1.0 : -1.0, 0.0};
  }

  ComplexCoefficient numerator[21] = {};
  ComplexCoefficient denominator[21] = {};
  ExpandButterworthRoots(zeros, order, numerator);
  ExpandButterworthRoots(transformed, order, denominator);
  double normalization = denominator[order].real;

  for (uint32_t i = 0; i <= order; ++i) {
    filter->feedforward[i] = numerator[i].real / normalization;
  }

  for (uint32_t i = 0; i <= order; ++i) {
    filter->feedback[i] = -denominator[i].real / normalization;
  }

  double point = high_pass ? -1.0 : 1.0;
  ComplexCoefficient top = Evaluate(numerator, order, point);
  ComplexCoefficient bottom = Evaluate(denominator, order, point);
  ComplexCoefficient ratio = Divide(top.real, top.imaginary,
                                    bottom.real, bottom.imaginary);
  filter->gain = 1.0 / Magnitude(ratio.real, ratio.imaginary);

  for (uint32_t i = 0; i <= order; ++i) {
    filter->inputs[i] = 0.0;
    filter->outputs[i] = 0.0;
  }

  filter->order = order;
  void (*entry)() = GenericEntry;

  switch (order) {
    case 2:
      entry = TwoEntry;
      break;
    case 4:
      entry = FourEntry;
      break;
    case 6:
      entry = SixEntry;
      break;
  }

  filter->unknown_170 = reinterpret_cast<uintptr_t>(entry);
  filter->unknown_178 = 0;
  return 0;
}

}
