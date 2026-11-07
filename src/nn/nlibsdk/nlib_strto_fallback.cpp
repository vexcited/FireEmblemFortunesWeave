#include <stddef.h>
#include <stdint.h>

namespace {

constexpr int ERange = 34;
constexpr int EIlSeq = 84;
constexpr int EOpNotSupp = 95;

// Indexed by the character plus one, negative for anything that is not a
// hexadecimal digit.
constexpr int8_t HexDigitValue[257] = {
  -1,
  -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
  -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
  -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
  0, 1, 2, 3, 4, 5, 6, 7, 8, 9, -1, -1, -1, -1, -1, -1,
  -1, 10, 11, 12, 13, 14, 15, -1, -1, -1, -1, -1, -1, -1, -1, -1,
  -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
  -1, 10, 11, 12, 13, 14, 15, -1, -1, -1, -1, -1, -1, -1, -1, -1,
  -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
  -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
  -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
  -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
  -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
  -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
  -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
  -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
  -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
};

bool IsRefusedStart(char c) {
  return c == 0 || c == '\t' || c == '\n' || c == ' ';
}

int8_t GetHexDigit(const uint8_t* p) {
  return HexDigitValue[*p + 1];
}

// Overflow is only noticed when a step makes the value smaller.
int ParseHex(uint64_t* pOutValue, const uint8_t** pOutEnd,
  const uint8_t* p) {
  if (GetHexDigit(p) < 0) {
    *pOutEnd = p;
    *pOutValue = 0;
    return 0;
  }
  uint64_t value = 0;
  int result = 0;
  do {
    uint64_t next = static_cast<uint8_t>(GetHexDigit(p)) + 16 * value;
    if (next < value) {
      result = ERange;
    }
    value = next;
    ++p;
  } while (GetHexDigit(p) >= 0);
  *pOutEnd = p;
  *pOutValue = value;
  return result;
}

int ParseOctal(uint64_t* pOutValue, const uint8_t** pOutEnd,
  const uint8_t* p) {
  uint64_t value = 0;
  int result = 0;
  while ((*p & 0xf8) == 0x30) {
    uint64_t next = (*p & 7) | (8 * value);
    if (next < value) {
      result = ERange;
    }
    value = next;
    ++p;
  }
  *pOutEnd = p;
  *pOutValue = value;
  return result;
}

int ParseDecimal(uint64_t* pOutValue, const uint8_t** pOutEnd,
  const uint8_t* p) {
  uint64_t value = 0;
  int result = 0;
  while (static_cast<uint32_t>(*p - '0') <= 9) {
    uint64_t next = (*p & 0xf) + 10 * value;
    if (next < value) {
      result = ERange;
    }
    value = next;
    ++p;
  }
  *pOutEnd = p;
  *pOutValue = value;
  return result;
}

// Bases 0, 8, 10 and 16 are supported. A hexadecimal prefix is consumed even
// when no digit follows it.
[[gnu::noinline]] int ParseInteger(uint64_t* pOutValue, bool* pOutNegative,
  const char* string, const char** pOutEnd, int base) {
  const uint8_t* p = reinterpret_cast<const uint8_t*>(string);
  if (*p == '-') {
    *pOutNegative = true;
    ++p;
  }
  else {
    *pOutNegative = false;
    p += *p == '+';
  }
  const uint8_t** end = reinterpret_cast<const uint8_t**>(pOutEnd);
  switch (base) {
    case 0:
      if (*p == '0') {
        if ((p[1] | 0x20) == 'x') {
          return ParseHex(pOutValue, end, p + 2);
        }
        return ParseOctal(pOutValue, end, p);
      }
      return ParseDecimal(pOutValue, end, p);
    case 8:
      return ParseOctal(pOutValue, end, p);
    case 10:
      return ParseDecimal(pOutValue, end, p);
    case 16:
      if (*p == '0') {
        p += (p[1] & 0xdf) == 'X' ? 2 : 1;
      }
      return ParseHex(pOutValue, end, p);
    default:
      *end = p;
      return EOpNotSupp;
  }
}

struct Parsed {
  int result;
  bool isNegative;
  uint64_t value;
};

// The sign flag is left uninitialized like the original.
[[gnu::always_inline]] inline bool Parse(Parsed* pOut, const char* string,
  const char** pOutEnd, int base) {
  const char* end = nullptr;
  pOut->value = 0;
  pOut->result = ParseInteger(&pOut->value, &pOut->isNegative, string, &end,
    base);
  if (pOutEnd != nullptr) {
    *pOutEnd = end;
    return end != string;
  }
  return *end == 0;
}

}

extern "C" {

int nnmem_nlib_strto_int32_fallback(int32_t* pOut, const char* string,
  const char** pOutEnd, int base) {
  if (IsRefusedStart(*string)) {
    return EIlSeq;
  }
  Parsed parsed;
  if (!Parse(&parsed, string, pOutEnd, base)) {
    return EIlSeq;
  }
  int result = parsed.result;
  uint32_t value;
  if (result != 0) {
    value = parsed.isNegative ? 0x80000000 : 0x7fffffff;
  }
  else if (!parsed.isNegative) {
    if ((parsed.value >> 31) != 0) {
      result = ERange;
      value = 0x7fffffff;
    }
    else {
      value = static_cast<uint32_t>(parsed.value);
    }
  }
  else if (parsed.value <= 0x80000000) {
    value = 0u - static_cast<uint32_t>(parsed.value);
  }
  else {
    result = ERange;
    value = 0x80000000;
  }
  *pOut = static_cast<int32_t>(value);
  return result;
}

int nnmem_nlib_strto_int64_fallback(int64_t* pOut, const char* string,
  const char** pOutEnd, int base) {
  if (IsRefusedStart(*string)) {
    return EIlSeq;
  }
  Parsed parsed;
  if (!Parse(&parsed, string, pOutEnd, base)) {
    return EIlSeq;
  }
  int result = parsed.result;
  uint64_t value;
  if (result != 0) {
    value = parsed.isNegative ? 0x8000000000000000 : 0x7fffffffffffffff;
  }
  else if (!parsed.isNegative) {
    if ((parsed.value >> 63) != 0) {
      result = ERange;
      value = 0x7fffffffffffffff;
    }
    else {
      value = parsed.value;
    }
  }
  else if (parsed.value <= 0x8000000000000000) {
    value = 0 - parsed.value;
  }
  else {
    result = ERange;
    value = 0x8000000000000000;
  }
  *pOut = static_cast<int64_t>(value);
  return result;
}

// Any parse error, an unsupported base included, becomes 34.
int nnmem_nlib_strto_uint32_fallback(uint32_t* pOut, const char* string,
  const char** pOutEnd, int base) {
  if (IsRefusedStart(*string)) {
    return EIlSeq;
  }
  Parsed parsed;
  if (!Parse(&parsed, string, pOutEnd, base)) {
    return EIlSeq;
  }
  uint32_t value;
  int result = ERange;
  if (parsed.isNegative) {
    value = 0;
  }
  else if (parsed.result != 0) {
    value = UINT32_MAX;
  }
  else {
    value = parsed.value < UINT32_MAX ?
      static_cast<uint32_t>(parsed.value) : UINT32_MAX;
    result = (parsed.value >> 32) != 0 ? ERange : 0;
  }
  *pOut = value;
  return result;
}

int nnmem_nlib_strto_uint64_fallback(uint64_t* pOut, const char* string,
  const char** pOutEnd, int base) {
  if (IsRefusedStart(*string)) {
    return EIlSeq;
  }
  Parsed parsed;
  if (!Parse(&parsed, string, pOutEnd, base)) {
    return EIlSeq;
  }
  uint64_t value = parsed.result != 0 ? UINT64_MAX : parsed.value;
  int result = parsed.result != 0 ? ERange : 0;
  if (parsed.isNegative) {
    value = 0;
    result = ERange;
  }
  *pOut = value;
  return result;
}

}
