// Long double has 128 bits, the SDK computes these in double precision.
double tgamma(double x);
double acosh(double x);
double asinh(double x);
double cosh(double x);
double erf(double x);
double erfc(double x);
double exp(double x);
double expm1(double x);
double log10(double x);
double log1p(double x);
double log2(double x);
double log(double x);
double sinh(double x);
double tanh(double x);

long double tgammal(long double x) {
  return tgamma(x);
}

long double acoshl(long double x) {
  return acosh(x);
}

long double asinhl(long double x) {
  return asinh(x);
}

long double coshl(long double x) {
  return cosh(x);
}

long double erfl(long double x) {
  return erf(x);
}

long double erfcl(long double x) {
  return erfc(x);
}

long double expl(long double x) {
  return exp(x);
}

long double expm1l(long double x) {
  return expm1(x);
}

long double log10l(long double x) {
  return log10(x);
}

long double log1pl(long double x) {
  return log1p(x);
}

long double log2l(long double x) {
  return log2(x);
}

long double logl(long double x) {
  return log(x);
}

long double sinhl(long double x) {
  return sinh(x);
}

long double tanhl(long double x) {
  return tanh(x);
}
