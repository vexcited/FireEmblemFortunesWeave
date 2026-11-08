#include <stddef.h>
#include <stdint.h>

// The original is hand written assembly that walks the words in batches,
// its counts are full registers.
extern "C" {

uint32_t nndetailCryptoBignumMulAddWords(uint32_t* result,
  const uint32_t* value, size_t count, uint32_t multiplier) {
  uint64_t carry = 0;
  for (size_t i = 0; i < count; i++) {
    const uint64_t sum =
      static_cast<uint64_t>(multiplier) * value[i] + result[i] + carry;
    result[i] = static_cast<uint32_t>(sum);
    carry = sum >> 32;
  }
  return static_cast<uint32_t>(carry);
}

uint32_t nndetailCryptoBignumMulWords(uint32_t* result,
  const uint32_t* value, size_t count, uint32_t multiplier) {
  uint64_t carry = 0;
  for (size_t i = 0; i < count; i++) {
    const uint64_t product =
      static_cast<uint64_t>(multiplier) * value[i] + carry;
    result[i] = static_cast<uint32_t>(product);
    carry = product >> 32;
  }
  return static_cast<uint32_t>(carry);
}

uint32_t nndetailCryptoBignumAddWords(uint32_t* result, const uint32_t* lhs,
  const uint32_t* rhs, size_t count) {
  uint32_t carry = 0;
  for (size_t i = 0; i < count; i++) {
    const uint64_t sum = static_cast<uint64_t>(lhs[i]) + rhs[i] + carry;
    result[i] = static_cast<uint32_t>(sum);
    carry = static_cast<uint32_t>(sum >> 32);
  }
  return carry;
}

uint32_t nndetailCryptoBignumSubWords(uint32_t* result, const uint32_t* lhs,
  const uint32_t* rhs, size_t count) {
  uint32_t borrow = 0;
  for (size_t i = 0; i < count; i++) {
    const uint64_t difference =
      static_cast<uint64_t>(lhs[i]) - rhs[i] - borrow;
    result[i] = static_cast<uint32_t>(difference);
    borrow = static_cast<uint32_t>(difference >> 32) & 1;
  }
  return borrow;
}

}
