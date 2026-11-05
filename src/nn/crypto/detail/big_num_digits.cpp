#include "nn/crypto/detail/big_num.hpp"

#include <string.h>

namespace nn::crypto {

void GenerateCryptographicallyRandomBytes(void* buffer, size_t size);

}

namespace nn::crypto::detail {

namespace {

constexpr BigNum::Digit MaxDigit = 0xffffffff;
}

void BigNum::AssignDigit(Digit* a, Digit digit, int digits) {
  SetZero(a, digits);
  a[0] = digit;
}

void BigNum::SetZero(Digit* a, int digits) {
  if (digits > 0) {
    memset(a, 0, sizeof(Digit) * digits);
  }
}

BigNum::Digit BigNum::Add(Digit* a, const Digit* b, const Digit* c,
  int digits) {
  return nndetailCryptoBignumAddWords(a, b, c, digits);
}

BigNum::Digit BigNum::Sub(Digit* a, const Digit* b, const Digit* c,
  int digits) {
  return nndetailCryptoBignumSubWords(a, b, c, digits);
}

BigNum::Digit BigNum::AddMult(Digit* a, const Digit* b, int digits,
  Digit c) {
  return nndetailCryptoBignumMulAddWords(a, b, digits, c);
}

BigNum::Digit BigNum::SubMult(Digit* a, const Digit* b, Digit c,
  const Digit* d, int digits) {
  if (c == 0) {
    return 0;
  }

  Digit borrow = 0;
  for (int i = 0; i < digits; ++i) {
    uint64_t product = static_cast<uint64_t>(c) * d[i];
    Digit low = static_cast<Digit>(product);
    Digit high = static_cast<Digit>(product >> 32);
    if ((a[i] = b[i] - borrow) > MaxDigit - borrow) {
      borrow = 1;
    }
    else {
      borrow = 0;
    }
    if ((a[i] -= low) > MaxDigit - low) {
      ++borrow;
    }
    borrow += high;
  }
  return borrow;
}

void BigNum::Increment(Digit* a, int digits) {
  for (int i = 0; i < digits; ++i) {
    if (++a[i] != 0) {
      break;
    }
  }
}

void BigNum::Decrement(Digit* a, int digits) {
  for (int i = 0; i < digits; ++i) {
    if (a[i]-- != 0) {
      break;
    }
  }
}

int BigNum::GetDigitBits(Digit digit) {
  int bits = 0;
  for (; bits < DigitBits; ++bits, digit >>= 1) {
    if (digit == 0) {
      break;
    }
  }
  return bits;
}

void BigNum::Copy(Digit* a, const Digit* b, int digits) {
  for (int i = 0; i < digits; ++i) {
    a[i] = b[i];
  }
}

void BigNum::SetOne(Digit* a, int digits) {
  a[0] = 1;
  SetZero(a + 1, digits - 1);
}

int BigNum::GetDigits(const Digit* a, int digits) {
  int i = digits - 1;
  for (; i >= 0; --i) {
    if (a[i] != 0) {
      break;
    }
  }
  return i + 1;
}

int BigNum::GetDigitBits(const Digit* a, int digits) {
  int count = GetDigits(a, digits);
  return (count - 1) * DigitBits + GetDigitBits(a[count - 1]);
}

BigNum::Digit BigNum::LeftShift(Digit* a, const Digit* b, int bits,
  int digits) {
  if (bits >= DigitBits) {
    return 0;
  }

  int complement = DigitBits - bits;
  Digit carry = 0;
  for (int i = 0; i < digits; ++i) {
    Digit digit = b[i];
    a[i] = (digit << bits) | carry;
    carry = bits != 0 ? digit >> complement : 0;
  }
  return carry;
}

BigNum::Digit BigNum::RightShift(Digit* a, const Digit* b, int bits,
  int digits) {
  if (bits >= DigitBits) {
    return 0;
  }

  int complement = DigitBits - bits;
  Digit carry = 0;
  for (int i = digits - 1; i >= 0; --i) {
    Digit digit = b[i];
    a[i] = (digit >> bits) | carry;
    carry = bits != 0 ? digit << complement : 0;
  }
  return carry;
}

int BigNum::Compare(const Digit* a, const Digit* b, int digits) {
  for (int i = digits - 1; i >= 0; --i) {
    if (a[i] > b[i]) {
      return 1;
    }
    if (a[i] < b[i]) {
      return -1;
    }
  }
  return 0;
}

int BigNum::IsZero(const Digit* a, int digits) {
  for (int i = 0; i < digits; ++i) {
    if (a[i] != 0) {
      return 0;
    }
  }
  return 1;
}

bool BigNum::IsOne(const Digit* a, int digits) {
  if (a[0] != 1) {
    return false;
  }
  for (int i = 1; i < digits; ++i) {
    if (a[i] != 0) {
      return false;
    }
  }
  return true;
}

bool BigNum::IsEven(const Digit* a, int digits) {
  (void)digits;
  return (a[0] & 1) == 0;
}

bool BigNum::IsOdd(const Digit* a, int digits) {
  (void)digits;
  return (a[0] & 1) != 0;
}

void BigNum::Mult(Digit* a, const Digit* b, const Digit* c, int digits) {
  Digit t[2 * MaxDigits] = {};
  SetZero(t, 2 * digits);

  int bDigits = GetDigits(b, digits);
  int cDigits = GetDigits(c, digits);
  for (int i = 0; i < bDigits; ++i) {
    t[i + cDigits] += AddMult(&t[i], c, cDigits, b[i]);
  }

  Copy(a, t, 2 * digits);
}

bool BigNum::Mult(Digit* a, const Digit* b, const Digit* c, int digits,
  DigitAllocator* allocator) {
  Digit* t = allocator->Allocate(2 * digits);
  if (t == nullptr) {
    return false;
  }
  SetZero(t, 2 * digits);

  int bDigits = GetDigits(b, digits);
  int cDigits = GetDigits(c, digits);
  for (int i = 0; i < bDigits; ++i) {
    t[i + cDigits] += AddMult(&t[i], c, cDigits, b[i]);
  }

  Copy(a, t, 2 * digits);
  allocator->Free(2 * digits);
  return true;
}

void BigNum::AddMod(Digit* a, const Digit* b, const Digit* c,
  const Digit* d, int digits) {
  Digit carry = Add(a, b, c, digits);
  if (carry == 0 && Compare(a, d, digits) < 0) {
    return;
  }
  while (Sub(a, a, d, digits) != carry) {
  }
}

// A positive difference above the modulus is folded with additions, as the
// original code does.
void BigNum::SubMod(Digit* a, const Digit* b, const Digit* c,
  const Digit* d, int digits) {
  Digit borrow = Sub(a, b, c, digits);
  if (borrow == 0 && Compare(a, d, digits) <= 0) {
    return;
  }
  Digit carry = Add(a, a, d, digits);
  if (carry == borrow) {
    return;
  }
  while (Add(a, a, d, digits) != carry) {
  }
}

void BigNum::Mod(Digit* a, const Digit* b, int bDigits, const Digit* c,
  int cDigits) {
  Digit quotient[2 * MaxDigits];
  Div(quotient, a, b, bDigits, c, cDigits);
}

bool BigNum::Mod(Digit* a, const Digit* b, int bDigits, const Digit* c,
  int cDigits, DigitAllocator* allocator) {
  Digit* quotient = allocator->Allocate(bDigits);
  if (quotient == nullptr) {
    return false;
  }
  if (!Div(quotient, a, b, bDigits, c, cDigits, allocator)) {
    return false;
  }
  allocator->Free(bDigits);
  return true;
}

bool BigNum::Div(Digit* a, Digit* b, const Digit* c, int cDigits,
  const Digit* d, int dDigits, DigitAllocator* allocator) {
  Digit* cc = allocator->Allocate(cDigits + 1);
  Digit* dd = allocator->Allocate(dDigits);
  if (cc == nullptr || dd == nullptr) {
    return false;
  }

  int ddDigits = GetDigits(d, dDigits);
  if (ddDigits == 0) {
    return false;
  }

  // Normalize so the divisor has its top bit set.
  int shift = DigitBits - GetDigitBits(d[ddDigits - 1]);
  SetZero(cc, ddDigits);
  cc[cDigits] = LeftShift(cc, c, shift, cDigits);
  LeftShift(dd, d, shift, ddDigits);
  Digit top = dd[ddDigits - 1];

  SetZero(a, cDigits);
  for (int i = cDigits - ddDigits; i >= 0; --i) {
    Digit quotient;
    if (top == MaxDigit) {
      quotient = cc[i + ddDigits];
    }
    else {
      DigitDiv(&quotient, &cc[i + ddDigits - 1], top + 1);
    }
    cc[i + ddDigits] -= SubMult(&cc[i], &cc[i], quotient, dd, ddDigits);

    while (cc[i + ddDigits] != 0 || Compare(&cc[i], dd, ddDigits) >= 0) {
      ++quotient;
      cc[i + ddDigits] -= Sub(&cc[i], &cc[i], dd, ddDigits);
    }
    a[i] = quotient;
  }

  SetZero(b, dDigits);
  RightShift(b, cc, shift, ddDigits);
  allocator->Free(dDigits);
  allocator->Free(cDigits + 1);
  return true;
}

void BigNum::Div(Digit* a, Digit* b, const Digit* c, int cDigits,
  const Digit* d, int dDigits) {
  Digit cc[2 * MaxDigits + 1] = {};
  Digit dd[MaxDigits] = {};

  int ddDigits = GetDigits(d, dDigits);
  if (ddDigits == 0) {
    return;
  }

  int shift = DigitBits - GetDigitBits(d[ddDigits - 1]);
  SetZero(cc, ddDigits);
  cc[cDigits] = LeftShift(cc, c, shift, cDigits);
  SetZero(dd, ddDigits);
  LeftShift(dd, d, shift, ddDigits);
  Digit top = dd[ddDigits - 1];

  SetZero(a, cDigits);
  for (int i = cDigits - ddDigits; i >= 0; --i) {
    Digit quotient;
    if (top == MaxDigit) {
      quotient = cc[i + ddDigits];
    }
    else {
      DigitDiv(&quotient, &cc[i + ddDigits - 1], top + 1);
    }
    cc[i + ddDigits] -= SubMult(&cc[i], &cc[i], quotient, dd, ddDigits);

    while (cc[i + ddDigits] != 0 || Compare(&cc[i], dd, ddDigits) >= 0) {
      ++quotient;
      cc[i + ddDigits] -= Sub(&cc[i], &cc[i], dd, ddDigits);
    }
    a[i] = quotient;
  }

  SetZero(b, dDigits);
  RightShift(b, cc, shift, ddDigits);
}

bool BigNum::ModMult(Digit* a, const Digit* b, const Digit* c,
  const Digit* d, int digits, DigitAllocator* allocator) {
  Digit* t = allocator->Allocate(2 * digits);
  if (t == nullptr) {
    return false;
  }
  if (!Mult(t, b, c, digits, allocator)) {
    return false;
  }
  if (!Mod(a, t, 2 * digits, d, digits, allocator)) {
    return false;
  }
  allocator->Free(2 * digits);
  return true;
}

// Left to right exponentiation by 2 bit windows. With a single exponent
// digit only the powers its windows use are computed.
bool BigNum::ModExp(Digit* a, const Digit* b, const Digit* c, int cDigits,
  const Digit* d, int dDigits, DigitAllocator* allocator) {
  bool usesWindow[4] = {};
  bool usesCube = false;
  if (cDigits > 1) {
    usesCube = true;
    usesWindow[2] = true;
  }
  else {
    for (int shift = 0; shift < DigitBits; shift += 2) {
      usesWindow[(c[0] >> shift) & 3] = true;
    }
    if (usesWindow[3] == true) {
      usesCube = true;
      usesWindow[2] = true;
    }
  }

  Digit* power[3];
  power[0] = allocator->Allocate(dDigits);
  power[1] = allocator->Allocate(dDigits);
  power[2] = allocator->Allocate(dDigits);
  if (power[0] == nullptr || power[1] == nullptr || power[2] == nullptr) {
    return false;
  }

  Copy(power[0], b, dDigits);
  if (usesWindow[2] == true &&
    !ModMult(power[1], power[0], b, d, dDigits, allocator)) {
    return false;
  }
  if (usesCube && !ModMult(power[2], power[1], b, d, dDigits, allocator)) {
    return false;
  }

  Digit* t = allocator->Allocate(dDigits);
  if (t == nullptr) {
    return false;
  }
  AssignDigit(t, 1, dDigits);

  cDigits = GetDigits(c, cDigits);
  for (int i = cDigits - 1; i >= 0; --i) {
    Digit ci = c[i];
    int ciBits = DigitBits;
    if (i == cDigits - 1) {
      while ((ci >> (DigitBits - 2)) == 0) {
        ci <<= 2;
        ciBits -= 2;
      }
    }

    for (int j = 0; j < ciBits; j += 2, ci <<= 2) {
      if (!ModMult(t, t, t, d, dDigits, allocator) ||
        !ModMult(t, t, t, d, dDigits, allocator)) {
        return false;
      }
      Digit s = ci >> (DigitBits - 2);
      if (s != 0 &&
        !ModMult(t, t, power[s - 1], d, dDigits, allocator)) {
        return false;
      }
    }
  }

  Copy(a, t, dDigits);
  allocator->Free(4 * dDigits);
  return true;
}

bool BigNum::ModInv(Digit* a, const Digit* b, int bDigits, const Digit* c,
  int cDigits, DigitAllocator* allocator) {
  Digit* q = allocator->Allocate(cDigits);
  Digit* t1 = allocator->Allocate(cDigits);
  Digit* t3 = allocator->Allocate(cDigits);
  Digit* u1 = allocator->Allocate(cDigits);
  Digit* u3 = allocator->Allocate(cDigits);
  Digit* v1 = allocator->Allocate(cDigits);
  Digit* v3 = allocator->Allocate(cDigits);
  Digit* w = allocator->Allocate(2 * cDigits);
  if (q == nullptr || t1 == nullptr || t3 == nullptr || u1 == nullptr ||
    u3 == nullptr || v1 == nullptr || v3 == nullptr || w == nullptr) {
    return false;
  }

  AssignDigit(u1, 1, cDigits);
  SetZero(v1, cDigits);
  SetZero(u3, cDigits);
  Copy(u3, b, bDigits);
  Copy(v3, c, cDigits);

  int u1Sign = 1;
  while (!IsZero(v3, cDigits)) {
    if (!Div(q, t3, u3, cDigits, v3, cDigits, allocator) ||
      !Mult(w, q, v1, cDigits, allocator)) {
      return false;
    }
    Add(t1, u1, w, cDigits);
    Copy(u1, v1, cDigits);
    Copy(v1, t1, cDigits);
    Copy(u3, v3, cDigits);
    Copy(v3, t3, cDigits);
    u1Sign = -u1Sign;
  }

  if (u1Sign < 0) {
    Sub(a, c, u1, cDigits);
  }
  else {
    Copy(a, u1, cDigits);
  }

  allocator->Free(9 * cDigits);
  return true;
}

// Extended Euclid on the remainders, tracking only the coefficient of b and
// its sign.
void BigNum::ModInv(Digit* a, const Digit* b, const Digit* c, int digits) {
  Digit q[MaxDigits];
  Digit t1[MaxDigits];
  Digit t3[MaxDigits];
  Digit w[2 * MaxDigits];
  Digit u1[MaxDigits];
  Digit u3[MaxDigits];
  Digit v1[MaxDigits];
  Digit v3[MaxDigits];

  AssignDigit(u1, 1, digits);
  SetZero(v1, digits);
  Copy(u3, b, digits);
  Copy(v3, c, digits);

  int u1Sign = 1;
  while (!IsZero(v3, digits)) {
    Div(q, t3, u3, digits, v3, digits);
    Mult(w, q, v1, digits);
    Add(t1, u1, w, digits);
    Copy(u1, v1, digits);
    Copy(v1, t1, digits);
    Copy(u3, v3, digits);
    Copy(v3, t3, digits);
    u1Sign = -u1Sign;
  }

  if (u1Sign < 0) {
    Sub(a, c, u1, digits);
  }
  else {
    Copy(a, u1, digits);
  }
}

// Miller Rabin with random bases reduced modulo n - 1, 7 rounds below 32
// digits, 5 below 48 and 4 above.
bool BigNum::TestPrimality(const Digit* a, int digits,
  DigitAllocator* allocator) {
  Digit* aMinusOne = allocator->Allocate(digits);
  if (aMinusOne == nullptr) {
    return false;
  }
  Copy(aMinusOne, a, digits);
  Decrement(aMinusOne, digits);

  Digit* m = allocator->Allocate(digits);
  if (m == nullptr) {
    return false;
  }
  Copy(m, aMinusOne, digits);

  int shifts = 0;
  while (true) {
    RightShift(m, m, 1, digits);
    if (IsOdd(m, digits) || IsZero(m, digits)) {
      break;
    }
    ++shifts;
  }

  int rounds = digits >= 48 ? 4 : 5;
  if (digits < 32) {
    rounds = 7;
  }

  Digit* x = allocator->Allocate(digits);
  if (x == nullptr) {
    return false;
  }

  for (int round = 0; round < rounds; ++round) {
    GenerateCryptographicallyRandomBytes(x, sizeof(Digit) * digits);
    Digit* quotient = allocator->Allocate(digits);
    if (quotient == nullptr) {
      return false;
    }
    if (!Div(quotient, x, x, digits, aMinusOne, digits, allocator)) {
      return false;
    }
    allocator->Free(digits);

    if (!ModExp(x, x, m, digits, a, digits, allocator)) {
      return false;
    }
    if (IsOne(x, digits) || Compare(x, aMinusOne, digits) == 0) {
      continue;
    }

    if (shifts == 0) {
      allocator->Free(3 * digits);
      return false;
    }
    for (int j = 1; ; ++j) {
      if (!ModMult(x, x, x, a, digits, allocator)) {
        return false;
      }
      if (IsOne(x, digits)) {
        allocator->Free(3 * digits);
        return false;
      }
      if (Compare(x, aMinusOne, digits) == 0) {
        break;
      }
      if (j == shifts) {
        allocator->Free(3 * digits);
        return false;
      }
    }
  }

  allocator->Free(3 * digits);
  return true;
}

void OctetStringFromDigits(void* out, size_t outSize, const uint32_t* digits,
  size_t digitCount) {
  uint8_t* bytes = static_cast<uint8_t*>(out);
  size_t remaining = outSize;
  for (size_t i = 0; i < digitCount && remaining > 0; ++i) {
    uint32_t digit = digits[i];
    for (int shift = 0; remaining > 0 && shift < 32; shift += 8) {
      bytes[--remaining] = static_cast<uint8_t>(digit >> shift);
    }
  }
  if (remaining > 0) {
    memset(bytes, 0, remaining);
  }
}

void DigitsFromOctetString(uint32_t* digits, size_t digitCount,
  const void* data, size_t size) {
  const uint8_t* bytes = static_cast<const uint8_t*>(data);
  size_t i = 0;
  size_t remaining = size;
  for (; i < digitCount && remaining > 0; ++i) {
    uint32_t digit = 0;
    for (int shift = 0; remaining > 0 && shift < 32; shift += 8) {
      digit |= static_cast<uint32_t>(bytes[--remaining]) << shift;
    }
    digits[i] = digit;
  }
  if (i < digitCount) {
    memset(&digits[i], 0,
      sizeof(uint32_t) * static_cast<int>(digitCount - i));
  }
}

}
