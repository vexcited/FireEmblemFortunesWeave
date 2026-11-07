#include <stddef.h>
#include <stdint.h>

namespace {

constexpr int EInval = 22;
constexpr int ERange = 34;
constexpr int EOpNotSupp = 95;

struct ParseResult {
  int error;
  const char* end;
};

// Overflow is only noticed when a step makes the value smaller. Hexadecimal
// letters map to the digit plus 0x95 truncated to 8 bits, as in the original.
[[gnu::noinline]] ParseResult ParseUnsigned(uint64_t* pOutValue,
  bool* pOutNegative, const char* first, const char* last, int base) {
  const char* begin = first;
  bool isNegative = first != last && *first == '-';
  *pOutNegative = isNegative;
  if (isNegative) {
    ++first;
  }
  if (base != 16 && base != 10 && base != 8) {
    return {EOpNotSupp, begin};
  }
  if (first == last) {
    return {EInval, last};
  }
  uint64_t value = 0;
  int error = 0;
  const char* p = first;
  for (; p != last; ++p) {
    uint8_t c = static_cast<uint8_t>(*p);
    uint8_t digit;
    if (base == 16) {
      if (static_cast<uint8_t>(c - '0') <= 9) {
        digit = static_cast<uint8_t>(c - '0');
      }
      else if (static_cast<uint32_t>(c - 'a') <= 5) {
        digit = static_cast<uint8_t>(c + 0x95);
      }
      else {
        break;
      }
    }
    else if (base == 10) {
      if (static_cast<uint32_t>(c - '0') > 9) {
        break;
      }
      digit = static_cast<uint8_t>(c - '0');
    }
    else {
      if ((c & 0xf8) != 0x30) {
        break;
      }
      digit = static_cast<uint8_t>(c - '0');
    }
    uint64_t next = value * static_cast<uint64_t>(base) + digit;
    if (next < value) {
      error = ERange;
    }
    value = next;
  }
  if (p == first) {
    return {EInval, first};
  }
  if (error != 0) {
    return {error, p};
  }
  *pOutValue = value;
  return {0, p};
}

}

extern "C" {

int nnmem_nlib_int8_from_chars(int8_t* pOut, const char** pOutEnd,
  const char* first, const char* last, int base) {
  uint64_t value = 0;
  bool isNegative;
  ParseResult result = ParseUnsigned(&value, &isNegative, first, last, base);
  if (pOutEnd != nullptr) {
    *pOutEnd = result.end;
  }
  if (result.error != 0) {
    return result.error;
  }
  if (isNegative) {
    if (value > 0x80) {
      return ERange;
    }
    *pOut = static_cast<int8_t>(-static_cast<int>(value));
  }
  else {
    if (value > 0x7f) {
      return ERange;
    }
    *pOut = static_cast<int8_t>(value);
  }
  return 0;
}

int nnmem_nlib_int16_from_chars(int16_t* pOut, const char** pOutEnd,
  const char* first, const char* last, int base) {
  uint64_t value = 0;
  bool isNegative;
  ParseResult result = ParseUnsigned(&value, &isNegative, first, last, base);
  if (pOutEnd != nullptr) {
    *pOutEnd = result.end;
  }
  if (result.error != 0) {
    return result.error;
  }
  if (isNegative) {
    if (value > 0x8000) {
      return ERange;
    }
    *pOut = static_cast<int16_t>(-static_cast<int>(value));
  }
  else {
    if (value > 0x7fff) {
      return ERange;
    }
    *pOut = static_cast<int16_t>(value);
  }
  return 0;
}

int nnmem_nlib_int32_from_chars(int32_t* pOut, const char** pOutEnd,
  const char* first, const char* last, int base) {
  uint64_t value = 0;
  bool isNegative;
  ParseResult result = ParseUnsigned(&value, &isNegative, first, last, base);
  if (pOutEnd != nullptr) {
    *pOutEnd = result.end;
  }
  if (result.error != 0) {
    return result.error;
  }
  if (isNegative) {
    if (value > 0x80000000) {
      return ERange;
    }
    *pOut = static_cast<int32_t>(0u - static_cast<uint32_t>(value));
  }
  else {
    if (value > 0x7fffffff) {
      return ERange;
    }
    *pOut = static_cast<int32_t>(value);
  }
  return 0;
}

int nnmem_nlib_int64_from_chars(int64_t* pOut, const char** pOutEnd,
  const char* first, const char* last, int base) {
  uint64_t value = 0;
  bool isNegative;
  ParseResult result = ParseUnsigned(&value, &isNegative, first, last, base);
  if (pOutEnd != nullptr) {
    *pOutEnd = result.end;
  }
  if (result.error != 0) {
    return result.error;
  }
  if (isNegative) {
    if (value > 0x8000000000000000) {
      return ERange;
    }
    *pOut = static_cast<int64_t>(0 - value);
  }
  else {
    if (value > 0x7fffffffffffffff) {
      return ERange;
    }
    *pOut = static_cast<int64_t>(value);
  }
  return 0;
}

int nnmem_nlib_uint8_from_chars(uint8_t* pOut, const char** pOutEnd,
  const char* first, const char* last, int base) {
  uint64_t value = 0;
  bool isNegative;
  ParseResult result = ParseUnsigned(&value, &isNegative, first, last, base);
  if (pOutEnd != nullptr) {
    *pOutEnd = result.end;
  }
  if (result.error != 0) {
    return result.error;
  }
  if (isNegative || value > UINT8_MAX) {
    return ERange;
  }
  *pOut = static_cast<uint8_t>(value);
  return 0;
}

int nnmem_nlib_uint16_from_chars(uint16_t* pOut, const char** pOutEnd,
  const char* first, const char* last, int base) {
  uint64_t value = 0;
  bool isNegative;
  ParseResult result = ParseUnsigned(&value, &isNegative, first, last, base);
  if (pOutEnd != nullptr) {
    *pOutEnd = result.end;
  }
  if (result.error != 0) {
    return result.error;
  }
  if (isNegative || value > UINT16_MAX) {
    return ERange;
  }
  *pOut = static_cast<uint16_t>(value);
  return 0;
}

int nnmem_nlib_uint32_from_chars(uint32_t* pOut, const char** pOutEnd,
  const char* first, const char* last, int base) {
  uint64_t value = 0;
  bool isNegative;
  ParseResult result = ParseUnsigned(&value, &isNegative, first, last, base);
  if (pOutEnd != nullptr) {
    *pOutEnd = result.end;
  }
  if (result.error != 0) {
    return result.error;
  }
  if (isNegative || value > UINT32_MAX) {
    return ERange;
  }
  *pOut = static_cast<uint32_t>(value);
  return 0;
}

int nnmem_nlib_uint64_from_chars(uint64_t* pOut, const char** pOutEnd,
  const char* first, const char* last, int base) {
  uint64_t value = 0;
  bool isNegative;
  ParseResult result = ParseUnsigned(&value, &isNegative, first, last, base);
  if (pOutEnd != nullptr) {
    *pOutEnd = result.end;
  }
  if (result.error != 0) {
    return result.error;
  }
  if (isNegative) {
    return ERange;
  }
  *pOut = value;
  return 0;
}

}
