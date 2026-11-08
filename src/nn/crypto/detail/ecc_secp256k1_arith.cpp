#include <stdint.h>
#include <string.h>

// The original is hand written assembly over four 64 bit limbs. The moduli
// are kept as their distance to 2^256.
namespace {

using Limbs = uint64_t[4];

constexpr uint64_t DistanceP[4] = {0x1000003d1, 0, 0, 0};
constexpr uint64_t DistanceN[4] = {
  0x402da1732fc9bebf, 0x4551231950b75fc4, 1, 0};

[[gnu::always_inline]] inline uint64_t AddCarry(uint64_t a, uint64_t b,
  uint64_t& carry) {
  const unsigned __int128 sum =
    static_cast<unsigned __int128>(a) + b + carry;
  carry = static_cast<uint64_t>(sum >> 64);
  return static_cast<uint64_t>(sum);
}

[[gnu::always_inline]] inline uint64_t SubBorrow(uint64_t a, uint64_t b,
  uint64_t& borrow) {
  const unsigned __int128 difference =
    static_cast<unsigned __int128>(a) - b - borrow;
  borrow = static_cast<uint64_t>(difference >> 64) & 1;
  return static_cast<uint64_t>(difference);
}

[[gnu::always_inline]] inline void Load(Limbs out, const uint32_t* in) {
  memcpy(out, in, sizeof(Limbs));
}

[[gnu::always_inline]] inline void Store(uint32_t* out, const Limbs in) {
  memcpy(out, in, sizeof(Limbs));
}

// The reduced sum is kept when either addition carried out.
[[gnu::always_inline]] inline void AddMod(uint32_t* result,
  const uint32_t* lhs, const uint32_t* rhs, const uint64_t* distance) {
  Limbs a;
  Limbs b;
  Load(a, lhs);
  Load(b, rhs);
  Limbs sum;
  uint64_t carry = 0;
  for (int i = 0; i < 4; i++) {
    sum[i] = AddCarry(a[i], b[i], carry);
  }
  Limbs reduced;
  uint64_t reducedCarry = 0;
  for (int i = 0; i < 4; i++) {
    reduced[i] = AddCarry(sum[i], distance[i], reducedCarry);
  }
  const bool isReduced = carry + reducedCarry != 0;
  Limbs out;
  for (int i = 0; i < 4; i++) {
    out[i] = isReduced ? reduced[i] : sum[i];
  }
  Store(result, out);
}

[[gnu::always_inline]] inline void Neg(uint32_t* result,
  const uint32_t* value, const uint64_t* distance) {
  Limbs a;
  Load(a, value);
  Limbs shifted;
  uint64_t carry = 0;
  for (int i = 0; i < 4; i++) {
    shifted[i] = AddCarry(a[i], distance[i], carry);
  }
  Limbs out;
  uint64_t borrow = 0;
  for (int i = 0; i < 4; i++) {
    out[i] = SubBorrow(0, shifted[i], borrow);
  }
  Store(result, out);
}

// The whole product is formed before anything is stored.
[[gnu::always_inline]] inline void Multiply(uint64_t* product,
  const uint64_t* a, const uint64_t* b) {
  for (int i = 0; i < 8; i++) {
    product[i] = 0;
  }
  for (int i = 0; i < 4; i++) {
    uint64_t carry = 0;
    for (int j = 0; j < 4; j++) {
      const unsigned __int128 term =
        static_cast<unsigned __int128>(a[i]) * b[j] + product[i + j] + carry;
      product[i + j] = static_cast<uint64_t>(term);
      carry = static_cast<uint64_t>(term >> 64);
    }
    product[i + 4] = carry;
  }
}

// The high half comes back in as a multiple of the distance, the leftover
// top limb plus one is added again and taken off when nothing carries out.
[[gnu::always_inline]] inline void ReduceP(uint64_t* out,
  const uint64_t* product) {
  const uint64_t k = DistanceP[0];
  uint64_t high[5];
  uint64_t carry = 0;
  for (int i = 0; i < 4; i++) {
    const unsigned __int128 term =
      static_cast<unsigned __int128>(product[4 + i]) * k + carry;
    high[i] = static_cast<uint64_t>(term);
    carry = static_cast<uint64_t>(term >> 64);
  }
  high[4] = carry;
  Limbs sum;
  uint64_t sumCarry = 0;
  for (int i = 0; i < 4; i++) {
    sum[i] = AddCarry(product[i], high[i], sumCarry);
  }
  const uint64_t top = high[4] + sumCarry;
  const unsigned __int128 fold =
    static_cast<unsigned __int128>(top) * k + k;
  uint64_t foldCarry = 0;
  sum[0] = AddCarry(sum[0], static_cast<uint64_t>(fold), foldCarry);
  sum[1] = AddCarry(sum[1], static_cast<uint64_t>(fold >> 64), foldCarry);
  sum[2] = AddCarry(sum[2], 0, foldCarry);
  sum[3] = AddCarry(sum[3], 0, foldCarry);
  const uint64_t adjust = foldCarry == 0 ? k : 0;
  uint64_t borrow = 0;
  out[0] = SubBorrow(sum[0], adjust, borrow);
  for (int i = 1; i < 4; i++) {
    out[i] = SubBorrow(sum[i], 0, borrow);
  }
}

}

extern "C" {

void nndetailCryptoMultMod256_SecP256k1_P(uint32_t* result,
  const uint32_t* lhs, const uint32_t* rhs) {
  Limbs a;
  Limbs b;
  Load(a, lhs);
  Load(b, rhs);
  uint64_t product[8];
  Multiply(product, a, b);
  Limbs out;
  ReduceP(out, product);
  Store(result, out);
}

void nndetailCryptoSqrMod256_SecP256k1_P(uint32_t* result,
  const uint32_t* value) {
  Limbs a;
  Load(a, value);
  uint64_t product[8];
  Multiply(product, a, a);
  Limbs out;
  ReduceP(out, product);
  Store(result, out);
}

void nndetailCryptoMult256(uint32_t* result, const uint32_t* lhs,
  const uint32_t* rhs) {
  Limbs a;
  Limbs b;
  Load(a, lhs);
  Load(b, rhs);
  uint64_t product[8];
  Multiply(product, a, b);
  memcpy(result, product, sizeof(product));
}

// Only the bits from 384 up are kept.
void nndetailCryptoMult256_Shift384(uint32_t* result, const uint32_t* lhs,
  const uint32_t* rhs) {
  Limbs a;
  Limbs b;
  Load(a, lhs);
  Load(b, rhs);
  uint64_t product[8];
  Multiply(product, a, b);
  memcpy(result, product + 6, 2 * sizeof(uint64_t));
}

void nndetailCryptoAddMod256_SecP256k1_P(uint32_t* result,
  const uint32_t* lhs, const uint32_t* rhs) {
  AddMod(result, lhs, rhs, DistanceP);
}

void nndetailCryptoAddMod256_SecP256k1_N(uint32_t* result,
  const uint32_t* lhs, const uint32_t* rhs) {
  AddMod(result, lhs, rhs, DistanceN);
}

// A borrow takes the distance off once more.
void nndetailCryptoSubMod256_SecP256k1_P(uint32_t* result,
  const uint32_t* lhs, const uint32_t* rhs) {
  Limbs a;
  Limbs b;
  Load(a, lhs);
  Load(b, rhs);
  Limbs difference;
  uint64_t borrow = 0;
  for (int i = 0; i < 4; i++) {
    difference[i] = SubBorrow(a[i], b[i], borrow);
  }
  const uint64_t adjust = borrow != 0 ? DistanceP[0] : 0;
  Limbs out;
  uint64_t adjustBorrow = 0;
  out[0] = SubBorrow(difference[0], adjust, adjustBorrow);
  for (int i = 1; i < 4; i++) {
    out[i] = SubBorrow(difference[i], 0, adjustBorrow);
  }
  Store(result, out);
}

void nndetailCryptoNeg256_SecP256k1_P(uint32_t* result,
  const uint32_t* value) {
  Neg(result, value, DistanceP);
}

void nndetailCryptoNeg256_SecP256k1_N(uint32_t* result,
  const uint32_t* value) {
  Neg(result, value, DistanceN);
}

// The three bits shifted out are folded back with the distance, which is
// taken off again when the sum does not carry.
void nndetailCryptoMult8Mod256_SecP256k1_P(uint32_t* result,
  const uint32_t* value) {
  Limbs a;
  Load(a, value);
  const uint64_t fold = ((a[3] >> 61) + 1) * DistanceP[0];
  Limbs shifted = {a[0] << 3, (a[1] << 3) | (a[0] >> 61),
    (a[2] << 3) | (a[1] >> 61), (a[3] << 3) | (a[2] >> 61)};
  Limbs sum;
  uint64_t carry = 0;
  sum[0] = AddCarry(shifted[0], fold, carry);
  for (int i = 1; i < 4; i++) {
    sum[i] = AddCarry(shifted[i], 0, carry);
  }
  const uint64_t adjust = carry == 0 ? DistanceP[0] : 0;
  Limbs out;
  uint64_t borrow = 0;
  out[0] = SubBorrow(sum[0], adjust, borrow);
  for (int i = 1; i < 4; i++) {
    out[i] = SubBorrow(sum[i], 0, borrow);
  }
  Store(result, out);
}

}
