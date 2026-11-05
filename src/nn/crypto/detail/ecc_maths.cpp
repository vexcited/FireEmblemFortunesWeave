#include "nn/crypto/detail/ecc_operations.hpp"

#include <string.h>

#include "nn/crypto/detail/big_num.hpp"

extern "C" {

void nndetailCryptoMult256(uint32_t* result, const uint32_t* lhs,
  const uint32_t* rhs);
void nndetailCryptoMult256_Shift384(uint32_t* result, const uint32_t* lhs,
  const uint32_t* rhs);
void nndetailCryptoAddMod256_SecP256k1_P(uint32_t* result,
  const uint32_t* lhs, const uint32_t* rhs);
void nndetailCryptoAddMod256_SecP256k1_N(uint32_t* result,
  const uint32_t* lhs, const uint32_t* rhs);
void nndetailCryptoSubMod256_SecP256k1_P(uint32_t* result,
  const uint32_t* lhs, const uint32_t* rhs);
void nndetailCryptoMultMod256_SecP256k1_P(uint32_t* result,
  const uint32_t* lhs, const uint32_t* rhs);
void nndetailCryptoMultMod256_SecP256k1_N(uint32_t* result,
  const uint32_t* lhs, const uint32_t* rhs);
void nndetailCryptoSqrMod256_SecP256k1_P(uint32_t* result,
  const uint32_t* value);
void nndetailCryptoInvMod256_SecP256k1_P(uint32_t* result,
  const uint32_t* value);
void nndetailCryptoInvMod256_SecP256k1_N(uint32_t* result,
  const uint32_t* value);
void nndetailCryptoNeg256_SecP256k1_P(uint32_t* result,
  const uint32_t* value);
void nndetailCryptoNeg256_SecP256k1_N(uint32_t* result,
  const uint32_t* value);
void nndetailCryptoMult8Mod256_SecP256k1_P(uint32_t* result,
  const uint32_t* value);

}

namespace nn::crypto::detail {

namespace {

using P256 = EccMaths<EccCurveType_P256>;
using P256Parameters = EccCurveParameters<EccCurveType_P256>;
using Secp256k1 = EccMaths<EccCurveType_Secp256k1>;

constexpr int Digits = EccCurveParameters<EccCurveType_Secp256k1>::MaxDigits;

}

// The GLV constants are separate unnamed pools in the original.
[[gnu::visibility("hidden")]]
extern const uint32_t Secp256k1Lambda[Digits] = {
  0x1b23bd72, 0xdf02967c, 0x20816678, 0x122e22ea,
  0x8812645a, 0xa5261c02, 0xc05c30e0, 0x5363ad4c,
};

[[gnu::visibility("hidden")]]
extern const uint32_t Secp256k1Beta[Digits] = {
  0x719501ee, 0xc1396c28, 0x12f58995, 0x9cf04975,
  0xac3434e9, 0x6e64479e, 0x657c0710, 0x7ae96a2b,
};

[[gnu::visibility("hidden")]]
extern const uint32_t Secp256k1MinusB1[Digits] = {
  0x0abfe4c3, 0x6f547fa9, 0x010e8828, 0xe4437ed6, 0, 0, 0, 0,
};

[[gnu::visibility("hidden")]]
extern const uint32_t Secp256k1MinusB2[Digits] = {
  0x3db1562c, 0xd765cda8, 0x0774346d, 0x8a280ac5,
  0xfffffffe, 0xffffffff, 0xffffffff, 0xffffffff,
};

[[gnu::visibility("hidden")]]
extern const uint32_t Secp256k1G1[Digits] = {
  0x45dbb031, 0xe893209a, 0x71e8ca7f, 0x3daa8a14,
  0x9284eb15, 0xe86c90e4, 0xa7d46bcd, 0x3086d221,
};

[[gnu::visibility("hidden")]]
extern const uint32_t Secp256k1G2[Digits] = {
  0x8ac47f71, 0x1571b4ae, 0x9df506c6, 0x221208ac,
  0x0abfe4c4, 0x6f547fa9, 0x010e8828, 0xe4437ed6,
};

// The NIST fast reduction adds and subtracts the eight word combinations of
// the upper half.
template <>
void P256::ModP(uint32_t* result, const uint32_t* value, int digits) {
  uint32_t sum[Digits];
  uint32_t c[Digits * 2] = {};
  uint32_t t[Digits];
  BigNum::SetZero(c, Digits * 2);
  BigNum::Copy(c, value, digits);

  const uint32_t* p = P256Parameters::P;
  for (int i = 0; i < Digits; ++i) {
    sum[i] = c[i];
  }

  auto set = [&t](uint32_t t0, uint32_t t1, uint32_t t2, uint32_t t3,
    uint32_t t4, uint32_t t5, uint32_t t6, uint32_t t7) {
    t[0] = t0;
    t[1] = t1;
    t[2] = t2;
    t[3] = t3;
    t[4] = t4;
    t[5] = t5;
    t[6] = t6;
    t[7] = t7;
  };

  set(0, 0, 0, c[11], c[12], c[13], c[14], c[15]);
  BigNum::AddMod(sum, sum, t, p, Digits);
  BigNum::AddMod(sum, sum, t, p, Digits);
  set(0, 0, 0, c[12], c[13], c[14], c[15], 0);
  BigNum::AddMod(sum, sum, t, p, Digits);
  BigNum::AddMod(sum, sum, t, p, Digits);
  set(c[8], c[9], c[10], 0, 0, 0, c[14], c[15]);
  BigNum::AddMod(sum, sum, t, p, Digits);
  set(c[9], c[10], c[11], c[13], c[14], c[15], c[13], c[8]);
  BigNum::AddMod(sum, sum, t, p, Digits);

  set(c[11], c[12], c[13], 0, 0, 0, c[8], c[10]);
  BigNum::SubMod(sum, sum, t, p, Digits);
  set(c[12], c[13], c[14], c[15], 0, 0, c[9], c[11]);
  BigNum::SubMod(sum, sum, t, p, Digits);
  set(c[13], c[14], c[15], c[8], c[9], c[10], 0, c[12]);
  BigNum::SubMod(sum, sum, t, p, Digits);
  set(c[14], c[15], 0, c[9], c[10], c[11], 0, c[13]);
  BigNum::SubMod(sum, sum, t, p, Digits);

  BigNum::Copy(result, sum, Digits);
}

namespace {

void MultModP256(uint32_t* result, const uint32_t* lhs, const uint32_t* rhs) {
  uint32_t wide[Digits * 2] = {};
  BigNum::Mult(wide, lhs, rhs, Digits);
  [[clang::noinline]] P256::ModP(result, wide, Digits * 2);
}

}

// The curve constant a4 holds 3, which is subtracted.
template <>
void P256::Add(Point* result, const Point* lhs, const Point* rhs) {
  if (BigNum::IsZero(lhs->x, Digits) && BigNum::IsZero(lhs->y, Digits)) {
    BigNum::Copy(result->x, rhs->x, Digits);
    BigNum::Copy(result->y, rhs->y, Digits);
    return;
  }
  if (BigNum::IsZero(rhs->x, Digits) && BigNum::IsZero(rhs->y, Digits)) {
    BigNum::Copy(result->x, lhs->x, Digits);
    BigNum::Copy(result->y, lhs->y, Digits);
    return;
  }

  uint32_t lambda[Digits] = {};
  uint32_t x[Digits * 2] = {};
  uint32_t t[Digits * 2] = {};
  const uint32_t* p;
  if (BigNum::Compare(lhs->x, rhs->x, Digits) != 0) {
    p = P256Parameters::P;
    BigNum::SubMod(t, rhs->y, lhs->y, p, Digits);
    BigNum::SubMod(lambda, rhs->x, lhs->x, p, Digits);
  }
  else if (BigNum::Compare(lhs->y, rhs->y, Digits) == 0) {
    MultModP256(t, lhs->x, lhs->x);
    BigNum::SetZero(lambda, Digits);
    {
      uint32_t wide[Digits * 2] = {};
      lambda[0] = 3;
      BigNum::Mult(wide, t, lambda, Digits);
      [[clang::noinline]] ModP(t, wide, Digits * 2);
    }
    p = P256Parameters::P;
    BigNum::SubMod(t, t, P256Parameters::a4, p, Digits);
    BigNum::AddMod(lambda, lhs->y, lhs->y, p, Digits);
  }
  else {
    BigNum::SetZero(result->x, Digits);
    BigNum::SetZero(result->y, Digits);
    return;
  }

  BigNum::ModInv(lambda, lambda, p, Digits);
  MultModP256(lambda, t, lambda);
  MultModP256(t, lambda, lambda);
  BigNum::SubMod(t, t, lhs->x, p, Digits);
  BigNum::SubMod(t, t, rhs->x, p, Digits);
  BigNum::Copy(x, lhs->x, Digits);
  BigNum::Copy(result->x, t, Digits);
  BigNum::SubMod(t, x, result->x, p, Digits);
  MultModP256(x, t, lambda);
  BigNum::SubMod(result->y, x, lhs->y, p, Digits);
}

template <>
int P256::Validate(const Point* point) {
  if (BigNum::IsZero(point->x, Digits) && BigNum::IsZero(point->y, Digits)) {
    return 1;
  }

  uint32_t rhs[Digits * 2] = {};
  uint32_t t[Digits * 2] = {};
  uint32_t lhs[Digits * 2] = {};
  MultModP256(t, point->x, point->x);
  MultModP256(rhs, t, point->x);
  MultModP256(t, P256Parameters::a4, point->x);
  const uint32_t* p = P256Parameters::P;
  BigNum::SubMod(rhs, rhs, t, p, Digits);
  BigNum::AddMod(rhs, rhs, P256Parameters::b, p, Digits);
  MultModP256(lhs, point->y, point->y);
  return BigNum::Compare(rhs, lhs, Digits) == 0;
}

template <>
void Secp256k1::Mult(uint32_t* result, const uint32_t* lhs,
  const uint32_t* rhs) {
  nndetailCryptoMult256(result, lhs, rhs);
}

template <>
void Secp256k1::Mult_Shift384(uint32_t* result, const uint32_t* lhs,
  const uint32_t* rhs) {
  nndetailCryptoMult256_Shift384(result, lhs, rhs);
}

template <>
void Secp256k1::AddModP(uint32_t* result, const uint32_t* lhs,
  const uint32_t* rhs) {
  nndetailCryptoAddMod256_SecP256k1_P(result, lhs, rhs);
}

template <>
void Secp256k1::AddModN(uint32_t* result, const uint32_t* lhs,
  const uint32_t* rhs) {
  nndetailCryptoAddMod256_SecP256k1_N(result, lhs, rhs);
}

template <>
void Secp256k1::SubModP(uint32_t* result, const uint32_t* lhs,
  const uint32_t* rhs) {
  nndetailCryptoSubMod256_SecP256k1_P(result, lhs, rhs);
}

template <>
void Secp256k1::MultModP(uint32_t* result, const uint32_t* lhs,
  const uint32_t* rhs) {
  nndetailCryptoMultMod256_SecP256k1_P(result, lhs, rhs);
}

template <>
void Secp256k1::MultModN(uint32_t* result, const uint32_t* lhs,
  const uint32_t* rhs) {
  nndetailCryptoMultMod256_SecP256k1_N(result, lhs, rhs);
}

template <>
void Secp256k1::SqrModP(uint32_t* result, const uint32_t* value) {
  nndetailCryptoSqrMod256_SecP256k1_P(result, value);
}

template <>
void Secp256k1::ModInvP(uint32_t* result, const uint32_t* value) {
  nndetailCryptoInvMod256_SecP256k1_P(result, value);
}

template <>
void Secp256k1::ModInvN(uint32_t* result, const uint32_t* value) {
  nndetailCryptoInvMod256_SecP256k1_N(result, value);
}

template <>
void Secp256k1::NegModP(uint32_t* result, const uint32_t* value) {
  nndetailCryptoNeg256_SecP256k1_P(result, value);
}

template <>
void Secp256k1::NegModN(uint32_t* result, const uint32_t* value) {
  nndetailCryptoNeg256_SecP256k1_N(result, value);
}

template <>
void Secp256k1::Mult8ModP(uint32_t* result, const uint32_t* value) {
  nndetailCryptoMult8Mod256_SecP256k1_P(result, value);
}

// Doubling and addition use the Jacobian dbl-2009-l and add-2007-bl
// formulas, a zero z marks the point at infinity.
template <>
[[gnu::always_inline]]
void Secp256k1::JDouble(JPoint* result, const JPoint* point) {
  uint32_t a[Digits] = {};
  SqrModP(a, point->x);
  uint32_t b[Digits] = {};
  SqrModP(b, point->y);
  uint32_t c[Digits] = {};
  SqrModP(c, b);

  uint32_t d[Digits] = {};
  AddModP(d, a, c);
  AddModP(b, point->x, b);
  SqrModP(b, b);
  SubModP(d, b, d);
  AddModP(d, d, d);

  uint32_t e[Digits] = {};
  AddModP(e, a, a);
  AddModP(e, e, a);
  uint32_t f[Digits] = {};
  SqrModP(f, e);

  AddModP(result->x, d, d);
  SubModP(result->x, f, result->x);
  MultModP(result->z, point->y, point->z);
  AddModP(result->z, result->z, result->z);
  Mult8ModP(c, c);
  SubModP(result->y, d, result->x);
  MultModP(result->y, result->y, e);
  SubModP(result->y, result->y, c);
}

template <>
void Secp256k1::JAdd(JPoint* result, const JPoint* lhs, const JPoint* rhs) {
  if (BigNum::IsZero(rhs->z, Digits)) {
    BigNum::Copy(result->x, lhs->x, Digits);
    BigNum::Copy(result->y, lhs->y, Digits);
    BigNum::Copy(result->z, lhs->z, Digits);
    return;
  }
  if (BigNum::IsZero(lhs->z, Digits)) {
    BigNum::Copy(result->x, rhs->x, Digits);
    BigNum::Copy(result->y, rhs->y, Digits);
    BigNum::Copy(result->z, rhs->z, Digits);
    return;
  }

  uint32_t z1z1[Digits] = {};
  SqrModP(z1z1, lhs->z);
  uint32_t z2z2[Digits] = {};
  SqrModP(z2z2, rhs->z);
  uint32_t u1[Digits] = {};
  MultModP(u1, lhs->x, z2z2);
  uint32_t u2[Digits] = {};
  MultModP(u2, rhs->x, z1z1);
  uint32_t s1[Digits] = {};
  MultModP(s1, lhs->y, rhs->z);
  MultModP(s1, s1, z2z2);
  uint32_t s2[Digits] = {};
  MultModP(s2, rhs->y, lhs->z);
  MultModP(s2, s2, z1z1);
  uint32_t h[Digits] = {};
  SubModP(h, u2, u1);

  if (BigNum::IsZero(h, Digits)) {
    if (BigNum::Compare(s1, s2, Digits) != 0) {
      BigNum::SetOne(result->x, Digits);
      BigNum::SetOne(result->y, Digits);
      BigNum::SetZero(result->z, Digits);
      return;
    }
    JDouble(result, lhs);
    return;
  }

  uint32_t i[Digits] = {};
  AddModP(i, h, h);
  SqrModP(i, i);
  uint32_t j[Digits] = {};
  MultModP(j, h, i);
  uint32_t r[Digits] = {};
  SubModP(r, s2, s1);
  AddModP(r, r, r);
  uint32_t v[Digits] = {};
  MultModP(v, u1, i);
  uint32_t t[Digits] = {};
  AddModP(t, v, v);
  AddModP(t, j, t);

  SqrModP(result->x, r);
  SubModP(result->x, result->x, t);
  uint32_t w[Digits] = {};
  SubModP(result->y, v, result->x);
  MultModP(result->y, result->y, r);
  MultModP(w, s1, j);
  AddModP(w, w, w);
  SubModP(result->y, result->y, w);

  AddModP(result->z, lhs->z, rhs->z);
  SqrModP(result->z, result->z);
  SubModP(result->z, result->z, z1z1);
  SubModP(result->z, result->z, z2z2);
  MultModP(result->z, result->z, h);
}

template <>
void Secp256k1::Add(Point* result, const Point* lhs, const Point* rhs) {
  if (BigNum::IsZero(lhs->x, Digits) && BigNum::IsZero(lhs->y, Digits)) {
    BigNum::Copy(result->x, rhs->x, Digits);
    BigNum::Copy(result->y, rhs->y, Digits);
    return;
  }
  if (BigNum::IsZero(rhs->x, Digits) && BigNum::IsZero(rhs->y, Digits)) {
    BigNum::Copy(result->x, lhs->x, Digits);
    BigNum::Copy(result->y, lhs->y, Digits);
    return;
  }

  uint32_t lambda[Digits] = {};
  uint32_t x[Digits] = {};
  uint32_t t[Digits] = {};
  if (BigNum::Compare(lhs->x, rhs->x, Digits) != 0) {
    SubModP(t, rhs->y, lhs->y);
    SubModP(lambda, rhs->x, lhs->x);
  }
  else if (BigNum::Compare(lhs->y, rhs->y, Digits) == 0) {
    SqrModP(t, lhs->x);
    BigNum::SetZero(lambda, Digits);
    lambda[0] = 3;
    MultModP(t, t, lambda);
    AddModP(lambda, lhs->y, lhs->y);
  }
  else {
    BigNum::SetZero(result->x, Digits);
    BigNum::SetZero(result->y, Digits);
    return;
  }

  ModInvP(lambda, lambda);
  MultModP(lambda, t, lambda);
  SqrModP(t, lambda);
  SubModP(t, t, lhs->x);
  SubModP(t, t, rhs->x);
  BigNum::Copy(x, lhs->x, Digits);
  BigNum::Copy(result->x, t, Digits);
  SubModP(t, x, result->x);
  MultModP(x, t, lambda);
  SubModP(result->y, x, lhs->y);
}

template <>
int Secp256k1::Validate(const Point* point) {
  if (BigNum::IsZero(point->x, Digits) && BigNum::IsZero(point->y, Digits)) {
    return 1;
  }

  uint32_t rhs[Digits * 2] = {};
  uint32_t square[Digits * 2] = {};
  uint32_t lhs[Digits * 2] = {};
  SqrModP(square, point->x);
  MultModP(rhs, square, point->x);
  AddModP(rhs, rhs, EccCurveParameters<EccCurveType_Secp256k1>::b);
  SqrModP(lhs, point->y);
  return BigNum::Compare(rhs, lhs, Digits) == 0;
}

template <>
int Secp256k1::JValidate(const JPoint* point) {
  if (BigNum::IsZero(point->z, Digits)) {
    return 1;
  }

  uint32_t rhs[Digits * 2] = {};
  uint32_t t[Digits * 2] = {};
  uint32_t lhs[Digits * 2] = {};
  uint32_t z[Digits * 2] = {};
  SqrModP(t, point->x);
  MultModP(rhs, t, point->x);
  SqrModP(z, point->z);
  MultModP(z, point->z, z);
  SqrModP(z, z);
  MultModP(t, EccCurveParameters<EccCurveType_Secp256k1>::b, z);
  AddModP(rhs, rhs, t);
  SqrModP(lhs, point->y);
  return BigNum::Compare(rhs, lhs, Digits) == 0;
}

template <>
[[gnu::visibility("hidden")]]
void Secp256k1::ToJacobian(JPoint* result, const Point* point) {
  if (BigNum::IsZero(point->x, Digits) && BigNum::IsZero(point->y, Digits)) {
    BigNum::SetOne(result->x, Digits);
    BigNum::SetOne(result->y, Digits);
    BigNum::SetZero(result->z, Digits);
  }
  else {
    BigNum::Copy(result->x, point->x, Digits);
    BigNum::Copy(result->y, point->y, Digits);
    BigNum::SetOne(result->z, Digits);
  }
}

template <>
[[gnu::visibility("hidden")]]
void Secp256k1::ToAffine(Point* result, const JPoint* point) {
  if (BigNum::IsZero(point->z, Digits)) {
    BigNum::SetZero(result->x, Digits);
    BigNum::SetZero(result->y, Digits);
    return;
  }

  uint32_t inverse[Digits] = {};
  uint32_t square[Digits] = {};
  ModInvP(inverse, point->z);
  SqrModP(square, inverse);
  MultModP(result->x, point->x, square);
  MultModP(result->y, point->y, square);
  MultModP(result->y, result->y, inverse);
}

// The scalar is split with the GLV endomorphism into two halves of about
// 128 bits, which are multiplied together in one double and add pass.
template <>
void Secp256k1::Mul(Point* result, const uint32_t* scalar, int /* digits */,
  const Point* point) {
  uint32_t lambda[Digits];
  memcpy(lambda, Secp256k1Lambda, sizeof(lambda));
  uint32_t beta[Digits];
  memcpy(beta, Secp256k1Beta, sizeof(beta));
  uint32_t minusB1[Digits];
  memcpy(minusB1, Secp256k1MinusB1, sizeof(minusB1));
  uint32_t minusB2[Digits];
  memcpy(minusB2, Secp256k1MinusB2, sizeof(minusB2));
  uint32_t g1[Digits];
  memcpy(g1, Secp256k1G1, sizeof(g1));
  uint32_t g2[Digits];
  memcpy(g2, Secp256k1G2, sizeof(g2));

  uint32_t k1[Digits] = {};
  uint32_t k2[Digits] = {};
  uint32_t c1[Digits] = {};
  uint32_t c2[Digits] = {};
  Mult_Shift384(c1, scalar, g1);
  Mult_Shift384(c2, scalar, g2);
  MultModN(c1, c1, minusB1);
  MultModN(c2, c2, minusB2);
  AddModN(k2, c1, c2);
  MultModN(k1, k2, lambda);
  BigNum::Sub(k1, scalar, k1, Digits);

  uint32_t absK1[Digits] = {};
  uint32_t negK1[Digits] = {};
  uint32_t absK2[Digits] = {};
  uint32_t negK2[Digits] = {};
  NegModN(negK1, k1);
  NegModN(negK2, k2);
  const bool isK1Small = BigNum::GetDigits(k1, Digits) <=
    BigNum::GetDigits(negK1, Digits);
  const bool isK2Small = BigNum::GetDigits(k2, Digits) <=
    BigNum::GetDigits(negK2, Digits);
  BigNum::Copy(absK1, isK1Small ? k1 : negK1, Digits);
  BigNum::Copy(absK2, isK2Small ? k2 : negK2, Digits);

  JPoint total = {};
  JPoint p1 = {};
  JPoint p2 = {};
  JPoint q = {};
  BigNum::SetOne(p1.x, Digits);
  BigNum::SetOne(p1.y, Digits);
  BigNum::SetZero(p1.z, Digits);
  BigNum::SetOne(p2.x, Digits);
  BigNum::SetOne(p2.y, Digits);
  BigNum::SetZero(p2.z, Digits);
  ToJacobian(&q, point);

  for (int word = 0; word < 4; ++word) {
    uint32_t mask = 1;
    for (int bit = 0; bit < 32; ++bit) {
      JPoint sum = {};
      [[clang::noinline]] JAdd(&sum, &p1, &q);
      if ((absK1[word] & mask) != 0) {
        p1 = sum;
      }
      [[clang::noinline]] JAdd(&sum, &p2, &q);
      if ((absK2[word] & mask) != 0) {
        p2 = sum;
      }
      [[clang::noinline]] JDouble(&q, &q);
      mask <<= 1;
    }
  }

  {
    JPoint sum = {};
    [[clang::noinline]] JAdd(&sum, &p1, &q);
    if ((absK1[4] & 1) != 0) {
      p1 = sum;
    }
    [[clang::noinline]] JAdd(&sum, &p2, &q);
    if ((absK2[4] & 1) != 0) {
      p2 = sum;
    }
    [[clang::noinline]] JDouble(&q, &q);
  }

  uint32_t y1[Digits] = {};
  uint32_t negY1[Digits] = {};
  uint32_t y2[Digits] = {};
  uint32_t negY2[Digits] = {};
  NegModP(negY1, p1.y);
  NegModP(negY2, p2.y);
  BigNum::Copy(y1, p1.y, Digits);
  BigNum::Copy(y2, p2.y, Digits);
  BigNum::Copy(p1.y, isK1Small ? y1 : negY1, Digits);
  BigNum::Copy(p2.y, isK2Small ? y2 : negY2, Digits);

  MultModP(p2.x, beta, p2.x);
  [[clang::noinline]] JAdd(&total, &p1, &p2);
  ToAffine(result, &total);
}

// P-256 has no dedicated order arithmetic and goes through the generic big
// number operations.
template <>
inline void P256::Mult(uint32_t* result, const uint32_t* lhs,
  const uint32_t* rhs) {
  BigNum::Mult(result, lhs, rhs, Digits);
}

template <>
inline void P256::MultModN(uint32_t* result, const uint32_t* lhs,
  const uint32_t* rhs) {
  uint32_t wide[Digits * 2] = {};
  BigNum::Mult(wide, lhs, rhs, Digits);
  BigNum::Mod(result, wide, Digits * 2, P256Parameters::N, Digits);
}

template <>
inline void P256::AddModN(uint32_t* result, const uint32_t* lhs,
  const uint32_t* rhs) {
  BigNum::AddMod(result, lhs, rhs, P256Parameters::N, Digits);
}

template <>
inline void P256::ModInvN(uint32_t* result, const uint32_t* value) {
  BigNum::ModInv(result, value, P256Parameters::N, Digits);
}

// The P-256 multiplication is a plain double and add from the highest set
// bit of the scalar.
template <>
[[gnu::visibility("hidden"), gnu::noinline]]
void P256::Mul(Point* result, const uint32_t* scalar,
  int digits, const Point* point) {
  if (BigNum::IsZero(scalar, digits)) {
    BigNum::SetZero(result->x, Digits);
    BigNum::SetZero(result->y, Digits);
    return;
  }

  BigNum::Copy(result->x, point->x, Digits);
  BigNum::Copy(result->y, point->y, Digits);

  const uint32_t* word = scalar + digits - 1;
  int bit = digits * 32 - 1;
  while (*word == 0) {
    --word;
    bit -= 32;
  }

  uint32_t mask = 0x80000000;
  while ((*word & mask) == 0) {
    mask >>= 1;
    --bit;
  }

  while (bit-- > 0) {
    if (mask < 2) {
      mask = 0x80000000;
      --word;
    }
    else {
      mask >>= 1;
    }

    Add(result, result, result);
    if ((*word & mask) != 0) {
      Add(result, result, point);
    }
  }
}

template <EccCurveType Type>
int EccOperations<Type>::ValidatePoint(const Point* point) const {
  return EccMaths<Type>::Validate(point);
}

template <EccCurveType Type>
void EccOperations<Type>::GenerateKeyPair(KeyPair* keyPair,
  const uint32_t* random, size_t randomDigits) const {
  BigNum::Mod(keyPair->privateKey, random, static_cast<int>(randomDigits),
    EccCurveParameters<Type>::N, MaxDigits);
  EccMaths<Type>::Mul(&keyPair->publicKey, keyPair->privateKey, MaxDigits,
    &EccCurveParameters<Type>::G);
}

template <EccCurveType Type>
int EccOperations<Type>::GenerateSharedKey(uint32_t* sharedKey,
  const Point* point, const uint32_t* privateKey) const {
  if (EccMaths<Type>::Validate(point) == 0) {
    return 2;
  }

  Point product = {};
  EccMaths<Type>::Mul(&product, privateKey, MaxDigits, point);
  BigNum::Copy(sharedKey, product.x, MaxDigits);
  return 0;
}

template <EccCurveType Type>
int EccOperations<Type>::EcdsaSign(Signature* signature, const void* hash,
  size_t hashSize, const uint32_t* privateKey, const uint32_t* random,
  size_t randomDigits) const {
  using Maths = EccMaths<Type>;
  const uint32_t* order = EccCurveParameters<Type>::N;

  uint32_t sum[MaxDigits];
  uint32_t product[MaxDigits * 2];
  uint32_t inverse[MaxDigits];
  uint32_t digest[MaxDigits * 2];
  Point point;
  uint32_t k[MaxDigits];
  BigNum::SetZero(sum, MaxDigits);
  BigNum::SetZero(product, MaxDigits * 2);
  BigNum::SetZero(inverse, MaxDigits);
  BigNum::SetZero(digest, MaxDigits * 2);
  DigitsFromOctetString(digest, MaxDigits, hash,
    hashSize < sizeof(uint32_t) * MaxDigits ?
      hashSize : sizeof(uint32_t) * MaxDigits);

  BigNum::Mod(k, random, static_cast<int>(randomDigits), order, MaxDigits);
  Maths::Mul(&point, k, MaxDigits, &EccCurveParameters<Type>::G);

  int digits = BigNum::GetDigits(point.x, MaxDigits);
  if (BigNum::IsZero(point.x, digits)) {
    return 1;
  }

  BigNum::Mod(signature->r, point.x, digits, order, MaxDigits);
  if (BigNum::IsZero(signature->r, MaxDigits)) {
    return 1;
  }

  Maths::MultModN(product, privateKey, signature->r);
  Maths::AddModN(sum, digest, product);
  Maths::ModInvN(inverse, k);
  Maths::MultModN(signature->s, inverse, sum);

  if (BigNum::IsZero(signature->s, MaxDigits)) {
    BigNum::SetZero(signature->r, MaxDigits);
    return 1;
  }
  return 0;
}

template <EccCurveType Type>
int EccOperations<Type>::EcdsaVerify(const Signature* signature,
  const void* hash, size_t hashSize, const Point* publicKey) const {
  using Maths = EccMaths<Type>;
  const uint32_t* order = EccCurveParameters<Type>::N;

  // The last two buffers are cleared but never used.
  uint32_t digest[MaxDigits];
  uint32_t inverse[MaxDigits];
  uint32_t product[MaxDigits * 2];
  uint32_t u1[MaxDigits];
  uint32_t u2[MaxDigits];
  uint32_t unused0[MaxDigits];
  uint32_t unused1[MaxDigits];
  Point sum;
  Point point;
  BigNum::SetZero(digest, MaxDigits);
  BigNum::SetZero(inverse, MaxDigits);
  BigNum::SetZero(product, MaxDigits * 2);
  BigNum::SetZero(u1, MaxDigits);
  BigNum::SetZero(u2, MaxDigits);
  BigNum::SetZero(unused0, MaxDigits);
  BigNum::SetZero(unused1, MaxDigits);

  if (Maths::Validate(publicKey) == 0) {
    return 2;
  }

  if (BigNum::IsZero(signature->r, MaxDigits) ||
    BigNum::Compare(signature->r, order, MaxDigits) >= 0 ||
    BigNum::IsZero(signature->s, MaxDigits) ||
    BigNum::Compare(signature->s, order, MaxDigits) >= 0) {
    return 3;
  }

  Maths::ModInvN(inverse, signature->s);
  DigitsFromOctetString(digest, MaxDigits, hash,
    hashSize < sizeof(uint32_t) * MaxDigits ?
      hashSize : sizeof(uint32_t) * MaxDigits);

  Maths::Mult(product, digest, inverse);
  BigNum::Mod(u1, product, BigNum::GetDigits(product, MaxDigits * 2), order,
    MaxDigits);
  Maths::Mult(product, inverse, signature->r);
  BigNum::Mod(u2, product, BigNum::GetDigits(product, MaxDigits * 2), order,
    MaxDigits);

  Maths::Mul(&sum, u1, MaxDigits, &EccCurveParameters<Type>::G);
  Maths::Mul(&point, u2, MaxDigits, publicKey);
  Maths::Add(&sum, &sum, &point);

  if (BigNum::IsZero(sum.x, MaxDigits) && BigNum::IsZero(sum.y, MaxDigits)) {
    return 1;
  }
  if (BigNum::Compare(sum.x, signature->r, MaxDigits) != 0) {
    return 3;
  }
  return 0;
}

template class EccOperations<EccCurveType_P256>;
template class EccOperations<EccCurveType_Secp256k1>;

}
