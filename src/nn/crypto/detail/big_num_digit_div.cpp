#include "nn/crypto/detail/big_num.hpp"

namespace nn::crypto::detail {

namespace {

constexpr BigNum::Digit MaxDigit = 0xffffffff;
constexpr BigNum::Digit MaxHalfDigit = 0xffff;

BigNum::Digit LowHalf(BigNum::Digit digit) {
  return digit & MaxHalfDigit;
}

BigNum::Digit HighHalf(BigNum::Digit digit) {
  return digit >> 16;
}

BigNum::Digit ToHighHalf(BigNum::Digit digit) {
  return digit << 16;
}

}

// Divides the two digit value b by c, the quotient must fit one digit.
void BigNum::DigitDiv(Digit* a, const Digit* b, Digit c) {
  Digit t[2] = {b[0], b[1]};
  Digit cHigh = HighHalf(c);
  Digit cLow = LowHalf(c);

  Digit aHigh = cHigh == MaxHalfDigit ? HighHalf(t[1]) : t[1] / (cHigh + 1);
  aHigh &= MaxHalfDigit;
  Digit u = aHigh * cLow;
  Digit v = aHigh * cHigh;
  if ((t[0] -= ToHighHalf(u)) > MaxDigit - ToHighHalf(u)) {
    --t[1];
  }
  t[1] -= HighHalf(u);
  t[1] -= v;

  while (t[1] > cHigh || (t[1] == cHigh && t[0] >= ToHighHalf(cLow))) {
    if ((t[0] -= ToHighHalf(cLow)) > MaxDigit - ToHighHalf(cLow)) {
      --t[1];
    }
    t[1] -= cHigh;
    aHigh = (aHigh + 1) & MaxHalfDigit;
  }

  Digit aLow = cHigh == MaxHalfDigit ? LowHalf(t[1])
    : (ToHighHalf(t[1]) + HighHalf(t[0])) / (cHigh + 1);
  aLow &= MaxHalfDigit;
  u = aLow * cLow;
  v = aLow * cHigh;
  if ((t[0] -= u) > MaxDigit - u) {
    --t[1];
  }
  if ((t[0] -= ToHighHalf(v)) > MaxDigit - ToHighHalf(v)) {
    --t[1];
  }
  t[1] -= HighHalf(v);

  while (t[1] > 0 || (t[1] == 0 && t[0] >= c)) {
    if ((t[0] -= c) > MaxDigit - c) {
      --t[1];
    }
    aLow = (aLow + 1) & MaxHalfDigit;
  }

  *a = ToHighHalf(aHigh) + aLow;
}

}
