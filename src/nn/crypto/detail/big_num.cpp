#include "nn/crypto/detail/big_num.hpp"

#include <string.h>

namespace nn::crypto::detail {

BigNum::BigNum()
  : m_Digits(nullptr), m_Count(0), m_MaxCount(0), m_Reserved(nullptr) {}

BigNum::~BigNum() {}

bool BigNum::Set(const void* data, size_t size) {
  const uint8_t* bytes = static_cast<const uint8_t*>(data);
  while (size > 0 && *bytes == 0) {
    ++bytes;
    --size;
  }
  if (size > sizeof(Digit) * m_MaxCount) {
    return false;
  }
  m_Count = (size + sizeof(Digit) - 1) / sizeof(Digit);
  DigitsFromOctetString(m_Digits, m_MaxCount, bytes, size);
  return true;
}

void BigNum::Get(void* out, size_t outSize) const {
  OctetStringFromDigits(out, outSize, m_Digits, m_Count);
}

int BigNum::GetDigitsBits() const {
  return GetDigitBits(m_Digits[m_Count - 1])
    + static_cast<int>(m_Count - 1) * DigitBits;
}

size_t BigNum::GetSize() const {
  if (m_Count == 0) {
    return 0;
  }
  size_t size = sizeof(Digit) * m_Count;
  Digit top = m_Digits[m_Count - 1];
  if (top < 0x100) {
    return size - 3;
  }
  if (top < 0x10000) {
    return size - 2;
  }
  if (top < 0x1000000) {
    return size - 1;
  }
  return size;
}

void BigNum::ReserveStatic(Digit* buffer, int count) {
  m_Digits = buffer;
  m_MaxCount = count;
}

void BigNum::Recount() {
  m_Count = GetDigits(m_Digits, static_cast<int>(m_MaxCount));
}

void BigNum::Cleanse() {
  memset(m_Digits, 0, sizeof(Digit) * static_cast<uint32_t>(m_MaxCount));
}

void BigNum::Increment() {
  Increment(m_Digits, static_cast<int>(m_Count));
  Recount();
}

void BigNum::Decrement() {
  Decrement(m_Digits, static_cast<int>(m_Count));
  Recount();
}

void BigNum::SubAbs(const BigNum* lhs, const BigNum* rhs) {
  int digits = static_cast<int>(
    lhs->m_Count > rhs->m_Count ? lhs->m_Count : rhs->m_Count);
  Cleanse();
  if (Compare(lhs->m_Digits, rhs->m_Digits, digits) == 1) {
    Sub(m_Digits, lhs->m_Digits, rhs->m_Digits, digits);
  }
  else {
    Sub(m_Digits, rhs->m_Digits, lhs->m_Digits, digits);
  }
  Recount();
}

bool BigNum::Mult(const BigNum* lhs, const BigNum* rhs,
  DigitAllocator* allocator) {
  memset(m_Digits, 0, sizeof(Digit) * m_MaxCount);
  int digits = static_cast<int>(
    lhs->m_Count > rhs->m_Count ? lhs->m_Count : rhs->m_Count);
  bool result = Mult(m_Digits, lhs->m_Digits, rhs->m_Digits, digits,
    allocator);
  Recount();
  return result;
}

bool BigNum::Mod(const BigNum* lhs, const BigNum* rhs,
  DigitAllocator* allocator) {
  memset(m_Digits, 0, sizeof(Digit) * m_MaxCount);
  bool result = Mod(m_Digits, lhs->m_Digits, static_cast<int>(lhs->m_Count),
    rhs->m_Digits, static_cast<int>(rhs->m_Count), allocator);
  Recount();
  return result;
}

bool BigNum::ModInv(const BigNum* lhs, const BigNum* rhs,
  DigitAllocator* allocator) {
  memset(m_Digits, 0, sizeof(Digit) * m_MaxCount);
  bool result = ModInv(m_Digits, lhs->m_Digits,
    static_cast<int>(lhs->m_Count), rhs->m_Digits,
    static_cast<int>(rhs->m_Count), allocator);
  Recount();
  return result;
}

bool BigNum::TestPrimality(DigitAllocator* allocator) const {
  if (IsEven(m_Digits, static_cast<int>(m_Count))) {
    return false;
  }
  return TestPrimality(m_Digits, static_cast<int>(m_Count), allocator);
}

}
