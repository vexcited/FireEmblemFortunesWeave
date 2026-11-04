#pragma once

#include <stddef.h>
#include <stdint.h>

extern "C" {

uint32_t nndetailCryptoBignumAddWords(uint32_t* a, const uint32_t* b,
  const uint32_t* c, int digits);
uint32_t nndetailCryptoBignumSubWords(uint32_t* a, const uint32_t* b,
  const uint32_t* c, int digits);
uint32_t nndetailCryptoBignumMulAddWords(uint32_t* a, const uint32_t* b,
  int digits, uint32_t c);

}

namespace nn::crypto::detail {

class BigNum {
public:
  using Digit = uint32_t;

  static constexpr int DigitBits = 32;
  static constexpr int MaxDigits = 8;

  class DigitAllocator;

  BigNum();
  ~BigNum();

  bool Set(const void* data, size_t size);
  void Get(void* out, size_t outSize) const;
  int GetDigitsBits() const;
  size_t GetSize() const;
  void ReserveStatic(Digit* buffer, int count);
  void Recount();
  void Cleanse();
  void Increment();
  void Decrement();
  void SubAbs(const BigNum* lhs, const BigNum* rhs);
  bool Mult(const BigNum* lhs, const BigNum* rhs, DigitAllocator* allocator);
  bool Mod(const BigNum* lhs, const BigNum* rhs, DigitAllocator* allocator);
  bool ModInv(const BigNum* lhs, const BigNum* rhs,
    DigitAllocator* allocator);
  bool TestPrimality(DigitAllocator* allocator) const;

  static void AssignDigit(Digit* a, Digit digit, int digits);
  static void SetZero(Digit* a, int digits);
  static Digit Add(Digit* a, const Digit* b, const Digit* c, int digits);
  static Digit Sub(Digit* a, const Digit* b, const Digit* c, int digits);
  static Digit AddMult(Digit* a, const Digit* b, int digits, Digit c);
  static Digit SubMult(Digit* a, const Digit* b, Digit c, const Digit* d,
    int digits);
  static void Increment(Digit* a, int digits);
  static void Decrement(Digit* a, int digits);
  static int GetDigitBits(Digit digit);
  static void DigitDiv(Digit* a, const Digit* b, Digit c);
  static void Copy(Digit* a, const Digit* b, int digits);
  static void SetOne(Digit* a, int digits);
  static int GetDigits(const Digit* a, int digits);
  static int GetDigitBits(const Digit* a, int digits);
  static Digit LeftShift(Digit* a, const Digit* b, int bits, int digits);
  static Digit RightShift(Digit* a, const Digit* b, int bits, int digits);
  static int Compare(const Digit* a, const Digit* b, int digits);
  static bool IsZero(const Digit* a, int digits);
  static bool IsOne(const Digit* a, int digits);
  static bool IsEven(const Digit* a, int digits);
  static bool IsOdd(const Digit* a, int digits);
  static void Mult(Digit* a, const Digit* b, const Digit* c, int digits);
  static bool Mult(Digit* a, const Digit* b, const Digit* c, int digits,
    DigitAllocator* allocator);
  static void AddMod(Digit* a, const Digit* b, const Digit* c,
    const Digit* d, int digits);
  static void SubMod(Digit* a, const Digit* b, const Digit* c,
    const Digit* d, int digits);
  static void Mod(Digit* a, const Digit* b, int bDigits, const Digit* c,
    int cDigits);
  static bool Mod(Digit* a, const Digit* b, int bDigits, const Digit* c,
    int cDigits, DigitAllocator* allocator);
  static bool ModMult(Digit* a, const Digit* b, const Digit* c,
    const Digit* d, int digits, DigitAllocator* allocator);
  static bool Div(Digit* a, Digit* b, const Digit* c, int cDigits,
    const Digit* d, int dDigits, DigitAllocator* allocator);
  static void Div(Digit* a, Digit* b, const Digit* c, int cDigits,
    const Digit* d, int dDigits);
  static bool ModInv(Digit* a, const Digit* b, int bDigits, const Digit* c,
    int cDigits, DigitAllocator* allocator);
  static bool TestPrimality(const Digit* a, int digits,
    DigitAllocator* allocator);

private:
  Digit* m_Digits;
  size_t m_Count;
  size_t m_MaxCount;
  void* m_Reserved;
};

class BigNum::DigitAllocator {
public:
  Digit* Allocate(int count) {
    if (m_Remaining < count) {
      return nullptr;
    }
    Digit* digits = m_Current;
    m_Remaining -= count;
    m_Current += count;
    if (m_Remaining < m_MinRemaining) {
      m_MinRemaining = m_Remaining;
    }
    return digits;
  }

  void Free(int count) {
    m_Current -= count;
    m_Remaining += count;
  }

private:
  Digit* m_Buffer;
  Digit* m_Current;
  int m_Remaining;
  int m_Capacity;
  int m_MinRemaining;
};

static_assert(sizeof(BigNum) == 32);

void OctetStringFromDigits(void* out, size_t outSize, const uint32_t* digits,
  size_t digitCount);
void DigitsFromOctetString(uint32_t* digits, size_t digitCount,
  const void* data, size_t size);

}
