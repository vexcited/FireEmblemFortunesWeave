#pragma once

#include <stddef.h>
#include <stdint.h>

namespace nn::crypto::detail {

enum EccCurveType {
  EccCurveType_P256 = 1,
  EccCurveType_Secp256k1 = 2,
};

template <EccCurveType Type> struct EccCurveParameters {
  static constexpr int MaxDigits = 8;

  struct Point {
    uint32_t x[MaxDigits];
    uint32_t y[MaxDigits];
  };

  struct JPoint {
    uint32_t x[MaxDigits];
    uint32_t y[MaxDigits];
    uint32_t z[MaxDigits];
  };

  static const uint32_t P[MaxDigits];
  static const uint32_t N[MaxDigits];
  static const uint32_t a4[MaxDigits];
  static const uint32_t b[MaxDigits];
  static const Point G;
};

template <EccCurveType Type> class EccMaths {
public:
  using Point = typename EccCurveParameters<Type>::Point;
  using JPoint = typename EccCurveParameters<Type>::JPoint;

  static int Validate(const Point* point);
  static int JValidate(const JPoint* point);
  static void Add(Point* result, const Point* lhs, const Point* rhs);
  static void JAdd(JPoint* result, const JPoint* lhs, const JPoint* rhs);
  static void JDouble(JPoint* result, const JPoint* point);
  static void Mul(Point* result, const uint32_t* scalar, int digits,
    const Point* point);

  static void Mult(uint32_t* result, const uint32_t* lhs,
    const uint32_t* rhs);
  static void Mult_Shift384(uint32_t* result, const uint32_t* lhs,
    const uint32_t* rhs);
  static void AddModP(uint32_t* result, const uint32_t* lhs,
    const uint32_t* rhs);
  static void AddModN(uint32_t* result, const uint32_t* lhs,
    const uint32_t* rhs);
  static void SubModP(uint32_t* result, const uint32_t* lhs,
    const uint32_t* rhs);
  static void MultModP(uint32_t* result, const uint32_t* lhs,
    const uint32_t* rhs);
  static void MultModN(uint32_t* result, const uint32_t* lhs,
    const uint32_t* rhs);
  static void SqrModP(uint32_t* result, const uint32_t* value);
  static void ModInvP(uint32_t* result, const uint32_t* value);
  static void ModInvN(uint32_t* result, const uint32_t* value);
  static void NegModP(uint32_t* result, const uint32_t* value);
  static void NegModN(uint32_t* result, const uint32_t* value);
  static void Mult8ModP(uint32_t* result, const uint32_t* value);
  static void ModP(uint32_t* result, const uint32_t* value, int digits);

private:
  static void ToJacobian(JPoint* result, const Point* point);
  static void ToAffine(Point* result, const JPoint* point);
};

template <EccCurveType Type> class EccOperations {
public:
  static constexpr int MaxDigits = EccCurveParameters<Type>::MaxDigits;

  using Point = typename EccCurveParameters<Type>::Point;

  struct Signature {
    uint32_t r[MaxDigits];
    uint32_t s[MaxDigits];
  };

  struct KeyPair {
    uint32_t privateKey[MaxDigits];
    Point publicKey;
  };

  int ValidatePoint(const Point* point) const;
  void GenerateKeyPair(KeyPair* keyPair, const uint32_t* random,
    size_t randomDigits) const;
  int GenerateSharedKey(uint32_t* sharedKey, const Point* point,
    const uint32_t* privateKey) const;
  int EcdsaSign(Signature* signature, const void* hash, size_t hashSize,
    const uint32_t* privateKey, const uint32_t* random,
    size_t randomDigits) const;
  int EcdsaVerify(const Signature* signature, const void* hash,
    size_t hashSize, const Point* publicKey) const;
};

}
