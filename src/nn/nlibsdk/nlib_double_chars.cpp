#include <errno.h>
#include <float.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

namespace {

constexpr int EInval = 22;
constexpr int ERange = 34;
constexpr int EIlSeq = 84;
constexpr int MantissaDigits = 18;
constexpr int MaximumExponent = 291;
constexpr int MinimumExponent = -325;
constexpr int ExponentLimit = 1000;
// The largest and smallest double over the 18 digits of the mantissa.
constexpr double MaximumMantissa = 1.7976931348623158e17;
constexpr double MinimumMantissa = 2.2250738585072013e17;

constexpr double kPowers[9] = {
  1e1, 1e2, 1e4, 1e8, 1e16, 1e32, 1e64, 1e128, 1e256,
};

constexpr double kInversePowers[9] = {
  1e-1, 1e-2, 1e-4, 1e-8, 1e-16, 1e-32, 1e-64, 1e-128, 1e-256,
};

bool IsDigit(unsigned int character) {
  return character - '0' < 10;
}

bool IsSpaceOrEnd(unsigned int character) {
  return character == '\0' || character == '\t' || character == '\n' ||
    character == ' ';
}

// The largest powers are applied first.
double Scale(double mantissa, int exponent, const double (&powers)[9]) {
  for (int i = 8; i >= 0; --i) {
    if ((exponent & (1 << i)) != 0) {
      mantissa *= powers[i];
    }
  }
  return mantissa;
}

}

extern "C" {

// Up to 18 significant digits are kept. A leading zero ends the integer
// part, and an exponent marker is consumed even without digits.
int nnmem_nlib_strto_double_fallback(double* pOutValue, const char* string,
  const char** pOutEnd) {
  const unsigned char* p = reinterpret_cast<const unsigned char*>(string);
  unsigned int character = *p;
  if (IsSpaceOrEnd(character)) {
    return EIlSeq;
  }

  bool isNegative = false;
  if (character == '+') {
    ++p;
  }
  else if (character == '-') {
    isNegative = true;
    ++p;
  }
  character = *p;

  double mantissa = 0.0;
  int digits = 0;
  int scale = 0;
  if (character == '0') {
    character = *++p;
  }
  else if (!IsDigit(character)) {
    *pOutValue = 0.0;
    if (pOutEnd != nullptr) {
      *pOutEnd = string;
    }
    return EIlSeq;
  }
  else {
    do {
      if (digits < MantissaDigits) {
        ++digits;
        mantissa = mantissa * 10.0 + character - '0';
      }
      else {
        --scale;
      }
      character = *++p;
    } while (IsDigit(character));
  }

  if (character == '.') {
    character = *++p;
    while (IsDigit(character)) {
      if (digits < MantissaDigits) {
        ++digits;
        ++scale;
        mantissa = mantissa * 10.0 + character - '0';
      }
      character = *++p;
    }
  }
  for (int i = digits; i < MantissaDigits; ++i) {
    mantissa *= 10.0;
    ++scale;
  }

  int exponent = -scale;
  if ((character & ~0x20u) == 'E') {
    unsigned int sign = p[1];
    unsigned int digit = sign;
    p += 1;
    if (sign == '-' || sign == '+') {
      digit = *++p;
    }
    if (IsDigit(digit)) {
      int value = 0;
      do {
        value = value * 10 + digit - '0';
        digit = *++p;
      } while (IsDigit(digit));
      exponent = sign == '-' ? -scale - value : value - scale;
    }
  }

  int error = 0;
  if (exponent >= 0) {
    if (exponent >= MaximumExponent && (exponent != MaximumExponent ||
      mantissa > MaximumMantissa)) {
      *pOutValue = isNegative ? -DBL_MAX : DBL_MAX;
      error = ERange;
    }
    else {
      mantissa = Scale(mantissa, exponent, kPowers);
      *pOutValue = isNegative ? -mantissa : mantissa;
    }
  }
  else if (exponent <= MinimumExponent && (exponent != MinimumExponent ||
    mantissa < MinimumMantissa)) {
    *pOutValue = 0.0;
    error = ERange;
  }
  else {
    mantissa = Scale(mantissa, -exponent, kInversePowers);
    *pOutValue = isNegative ? -mantissa : mantissa;
  }

  const char* end = reinterpret_cast<const char*>(p);
  if (pOutEnd != nullptr) {
    *pOutEnd = end;
    return end != string ? error : EIlSeq;
  }
  return *end == '\0' ? error : EIlSeq;
}

// The own parse fixes the end, then the C library parses a copy of at most
// 127 characters and its result wins when it consumes all of it without
// error.
int nnmem_nlib_double_from_chars(double* pOutValue, const char** pOutEnd,
  const char* first, const char* last) {
  const unsigned char* begin = reinterpret_cast<const unsigned char*>(first);
  const unsigned char* limit = reinterpret_cast<const unsigned char*>(last);
  double value = 0.0;
  bool isParsed = false;
  int error;
  const unsigned char* end;
  const unsigned char* marker = nullptr;
  const unsigned char* p = begin;
  unsigned int character;
  double mantissa = 0.0;
  int digits = 0;
  int scale = 0;
  int exponent;

  if (p == limit) {
    error = EInval;
    end = limit;
    goto finish;
  }
  character = *p;
  if (character == '-') {
    ++p;
    if (p == limit) {
      error = EInval;
      end = begin;
      goto finish;
    }
    character = *p;
  }

  if (character == '0') {
    ++p;
    if (p == limit) {
      error = 0;
      isParsed = true;
      end = limit;
      goto finish;
    }
    character = *p;
  }
  else if (!IsDigit(character)) {
    error = EInval;
    end = begin;
    goto finish;
  }
  else {
    for (;;) {
      if (digits < MantissaDigits) {
        ++digits;
        mantissa = mantissa * 10.0 + character - '0';
      }
      else {
        --scale;
      }
      if (++p == limit) {
        character = 0;
        break;
      }
      character = *p;
      if (!IsDigit(character)) {
        break;
      }
    }
  }

  if (character == '.') {
    if (++p == limit) {
      character = 0;
    }
    else {
      character = *p;
      while (IsDigit(character)) {
        if (digits < MantissaDigits) {
          ++digits;
          ++scale;
          mantissa = mantissa * 10.0 + character - '0';
        }
        if (++p == limit) {
          character = 0;
          break;
        }
        character = *p;
      }
    }
  }
  for (int i = digits; i < MantissaDigits; ++i) {
    mantissa *= 10.0;
    ++scale;
  }

  end = p;
  exponent = -scale;
  if ((character & ~0x20u) == 'E') {
    const unsigned char* q = p + 1;
    unsigned int sign = 0;
    unsigned int digit = 0;
    bool hasDigits = false;
    if (q != limit) {
      sign = *q;
      digit = sign;
      if (sign == '-' || sign == '+') {
        q = p + 2;
        if (q != limit) {
          digit = *q;
          hasDigits = IsDigit(digit);
        }
      }
      else {
        hasDigits = IsDigit(digit);
      }
    }
    if (hasDigits) {
      int value = 0;
      for (;;) {
        if (value - scale >= ExponentLimit) {
          do {
            ++q;
          } while (q != limit && IsDigit(*q));
          error = ERange;
          end = q;
          goto finish;
        }
        value = value * 10 + digit - '0';
        if (++q == limit) {
          break;
        }
        digit = *q;
        if (!IsDigit(digit)) {
          break;
        }
      }
      end = q;
      exponent = sign == '-' ? -(scale + value) : value - scale;
    }
    else {
      // The marker is not consumed, except by a range error.
      marker = p;
      end = q;
    }
  }

  if (exponent >= 0) {
    if (exponent >= MaximumExponent) {
      error = ERange;
      if (exponent != MaximumExponent || mantissa > MaximumMantissa) {
        goto finish;
      }
    }
    mantissa = Scale(mantissa, exponent, kPowers);
  }
  else {
    if (exponent <= MinimumExponent) {
      error = ERange;
      if (exponent != MinimumExponent || mantissa < MinimumMantissa) {
        goto finish;
      }
    }
    mantissa = Scale(mantissa, -exponent, kInversePowers);
  }
  error = 0;
  isParsed = true;
  value = *begin == '-' ? -mantissa : mantissa;
  if (marker != nullptr) {
    end = marker;
  }

finish:
  if (pOutEnd != nullptr) {
    *pOutEnd = reinterpret_cast<const char*>(end);
  }
  if (isParsed) {
    char buffer[128] = {};
    size_t length = static_cast<size_t>(limit - begin) < sizeof(buffer) - 1 ?
      limit - begin : sizeof(buffer) - 1;
    memcpy(buffer, first, length);
    buffer[length] = '\0';
    if (IsSpaceOrEnd(static_cast<unsigned char>(buffer[0]))) {
      *pOutValue = value;
    }
    else {
      char* parsedEnd = nullptr;
      errno = 0;
      double parsed = strtod(buffer, &parsedEnd);
      if (*parsedEnd != '\0') {
        *pOutValue = value;
      }
      else {
        *pOutValue = parsed;
        if (errno != 0) {
          *pOutValue = value;
        }
      }
    }
  }
  return error;
}

}
