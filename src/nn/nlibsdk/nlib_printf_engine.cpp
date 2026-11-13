#include <errno.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>
#include <string.h>
#include <wchar.h>

namespace nn::nlibsdk {

namespace detail {

enum FormatFlag : uint32_t {
  FormatFlag_Left = 1,
  FormatFlag_Plus = 2,
  FormatFlag_Space = 4,
  FormatFlag_Alternate = 8,
  FormatFlag_Zero = 0x10,
  FormatFlag_Upper = 0x20,
  FormatFlag_Signed = 0x40,
};

// A width or a precision, taken from the arguments for a star.
struct FieldSpec {
  bool isArgument;
  int value;
};

constexpr uint64_t kDecimalPowers[20] = {
  1ull, 10ull, 100ull, 1000ull, 10000ull, 100000ull, 1000000ull,
  10000000ull, 100000000ull, 1000000000ull, 10000000000ull,
  100000000000ull, 1000000000000ull, 10000000000000ull,
  100000000000000ull, 1000000000000000ull, 10000000000000000ull,
  100000000000000000ull, 1000000000000000000ull, 10000000000000000000ull,
};

constexpr uint64_t kHexadecimalPowers[16] = {
  1ull << 0, 1ull << 4, 1ull << 8, 1ull << 12, 1ull << 16, 1ull << 20,
  1ull << 24, 1ull << 28, 1ull << 32, 1ull << 36, 1ull << 40, 1ull << 44,
  1ull << 48, 1ull << 52, 1ull << 56, 1ull << 60,
};

constexpr uint64_t kOctalPowers[22] = {
  1ull << 0, 1ull << 3, 1ull << 6, 1ull << 9, 1ull << 12, 1ull << 15,
  1ull << 18, 1ull << 21, 1ull << 24, 1ull << 27, 1ull << 30, 1ull << 33,
  1ull << 36, 1ull << 39, 1ull << 42, 1ull << 45, 1ull << 48, 1ull << 51,
  1ull << 54, 1ull << 57, 1ull << 60, 1ull << 63,
};

constexpr double kFloatPowers[20] = {
  1e0, 1e1, 1e2, 1e3, 1e4, 1e5, 1e6, 1e7, 1e8, 1e9, 1e10, 1e11, 1e12, 1e13,
  1e14, 1e15, 1e16, 1e17, 1e18, 1e19,
};

// The type of the strings printed with %ls.
template <class CharT>
struct WideString {
  using Type = wchar_t;
};

template <>
struct WideString<char16_t> {
  using Type = char16_t;
};

template <size_t N>
inline size_t CountDigits(uint64_t value, const uint64_t (&powers)[N]) {
  size_t count = 1;
  while (count < N && value >= powers[count]) {
    ++count;
  }
  return count;
}

inline uint64_t GetMagnitude(int64_t value, bool* pOutIsNegative) {
  if (value < 0) {
    *pOutIsNegative = true;
    return -static_cast<uint64_t>(value);
  }
  return value;
}

template <class CharT>
inline void Put(CharT** cursor, CharT* end, CharT character) {
  if (*cursor < end) {
    **cursor = character;
  }
  ++*cursor;
}

inline const char* GetNullString(const char*) {
  return "(null)";
}

inline const wchar_t* GetNullString(const wchar_t*) {
  return L"(null)";
}

// The UTF-16 placeholder of the SDK ends with an opening parenthesis.
inline const char16_t* GetNullString(const char16_t*) {
  return u"(null(";
}

inline size_t GetLength(const char* string) {
  return strlen(string);
}

inline size_t GetLength(const wchar_t* string) {
  return wcslen(string);
}

inline size_t GetLength(const char16_t* string) {
  size_t length = 0;
  while (string[length] != 0) {
    ++length;
  }
  return length;
}

// Units of another type are truncated or extended one by one.
template <class CharT, class SourceT>
inline void CopyString(CharT** cursor, CharT* end, const SourceT* string,
  size_t length) {
  if (end == nullptr) {
    *cursor += length;
    return;
  }
  for (size_t i = 0; i < length; ++i) {
    Put(cursor, end, static_cast<CharT>(string[i]));
  }
}

inline void CopyString(char** cursor, char* end, const char* string,
  size_t length) {
  if (end != nullptr) {
    size_t count = *cursor + length < end ? length : end - *cursor;
    memcpy(*cursor, string, count * sizeof(char));
  }
  *cursor += length;
}

inline void CopyString(wchar_t** cursor, wchar_t* end, const wchar_t* string,
  size_t length) {
  if (end != nullptr) {
    size_t count = *cursor + length < end ? length : end - *cursor;
    memcpy(*cursor, string, count * sizeof(wchar_t));
  }
  *cursor += length;
}

// The SDK keeps the parsers and the conversions out of line, one copy per
// character type.
template <class CharT>
[[gnu::noinline]] FieldSpec ParseWidth(const CharT** format,
  uint32_t* flags, int argument) {
  if (**format == '*') {
    ++*format;
    if (argument < 0) {
      argument = -argument;
      *flags |= FormatFlag_Left;
    }
    return {true, argument};
  }
  if (**format < '1' || **format > '9') {
    return {false, -1};
  }
  int width = 0;
  do {
    width = width * 10 + static_cast<int>(**format) - '0';
    ++*format;
  } while (**format >= '0' && **format <= '9');
  return {false, width};
}

// A negative precision from the arguments counts as zero.
template <class CharT>
[[gnu::noinline]] FieldSpec ParsePrecision(const CharT** format,
  int argument) {
  if (**format != '.') {
    return {false, -1};
  }
  ++*format;
  if (**format == '*') {
    ++*format;
    return {true, argument < 0 ? 0 : argument};
  }
  if (**format < '0' || **format > '9') {
    return {false, 0};
  }
  int precision = 0;
  do {
    precision = precision * 10 + static_cast<int>(**format) - '0';
    ++*format;
  } while (**format >= '0' && **format <= '9');
  return {false, precision};
}

// Returns the modifier, with H for hh and L for ll.
template <class CharT>
[[gnu::noinline]] int ParseLength(const CharT** format) {
  switch (**format) {
    case 'h':
      ++*format;
      if (**format == 'h') {
        ++*format;
        return 'H';
      }
      return 'h';
    case 'j':
      ++*format;
      return 'j';
    case 'l':
      ++*format;
      if (**format == 'l') {
        ++*format;
        return 'L';
      }
      return 'l';
    case 't':
      ++*format;
      return 't';
    case 'z':
      ++*format;
      return 'z';
    default:
      return -1;
  }
}

template <class CharT>
[[gnu::noinline]] void FormatCharacter(CharT** cursor, CharT* end,
  uint32_t flags, int width, int character) {
  if (width > 0 && (flags & FormatFlag_Left) == 0) {
    for (int i = width; i > 1; --i) {
      Put(cursor, end, static_cast<CharT>(' '));
    }
  }
  Put(cursor, end, static_cast<CharT>(character));
  if (width > 0 && (flags & FormatFlag_Left) != 0) {
    for (int i = width; i > 1; --i) {
      Put(cursor, end, static_cast<CharT>(' '));
    }
  }
}

// A precision of zero prints the whole string.
template <class CharT, class SourceT>
[[gnu::noinline]] void FormatString(CharT** cursor, CharT* end,
  uint32_t flags, int width, int precision, const SourceT* string) {
  if (string == nullptr) {
    string = GetNullString(string);
  }
  size_t length = GetLength(string);
  if (precision > 0 && static_cast<unsigned int>(precision) < length) {
    length = static_cast<unsigned int>(precision);
  }
  if (width > 0 && (flags & FormatFlag_Left) == 0) {
    for (size_t i = static_cast<unsigned int>(width); length < i; --i) {
      Put(cursor, end, static_cast<CharT>(' '));
    }
  }
  CopyString(cursor, end, string, length);
  if (width > 0 && (flags & FormatFlag_Left) != 0) {
    for (size_t i = static_cast<unsigned int>(width); length < i; --i) {
      Put(cursor, end, static_cast<CharT>(' '));
    }
  }
}

// Fixed notation only, with at most 18 decimals. The decimals are rounded
// on their own and never carry into the integer part.
template <class CharT>
[[gnu::noinline]] CharT* FormatFloat(CharT* cursor, CharT* end,
  uint32_t flags, int precision, int width, double value) {
  double magnitude = value >= 0.0 ? value : -value;
  unsigned int decimals = precision < 0 ? 6 :
    static_cast<unsigned int>(precision) < 18 ? precision : 18;
  uint64_t integer = static_cast<uint64_t>(magnitude);
  double fraction = magnitude - static_cast<double>(integer);
  uint64_t decimal;
  if (decimals == 0) {
    decimal = 0;
    if (fraction >= 0.5) {
      ++integer;
    }
  }
  else {
    decimal = (static_cast<uint64_t>(fraction * kFloatPowers[decimals + 1]) +
      5) / 10;
  }

  bool hasSign = (flags & (FormatFlag_Plus | FormatFlag_Space)) != 0 ||
    value < 0.0;
  size_t digits = CountDigits(integer, kDecimalPowers);
  size_t length = hasSign + digits + (decimals != 0 ? decimals + 1 : 0);
  if ((flags & FormatFlag_Left) == 0 && width > 0) {
    CharT pad = (flags & FormatFlag_Zero) != 0 ? '0' : ' ';
    for (size_t i = static_cast<unsigned int>(width); length < i; --i) {
      Put(&cursor, end, pad);
    }
  }

  if (value >= 0.0) {
    if ((flags & FormatFlag_Plus) != 0) {
      Put(&cursor, end, static_cast<CharT>('+'));
    }
    else if ((flags & FormatFlag_Space) != 0) {
      Put(&cursor, end, static_cast<CharT>(' '));
    }
  }
  else {
    Put(&cursor, end, static_cast<CharT>('-'));
  }

  for (size_t i = digits; i > 0; --i) {
    uint64_t power = kDecimalPowers[i - 1];
    Put(&cursor, end, static_cast<CharT>('0' + integer / power));
    integer %= power;
  }
  if (decimals != 0) {
    Put(&cursor, end, static_cast<CharT>('.'));
    for (size_t i = decimals; i > 0; --i) {
      uint64_t power = kDecimalPowers[i - 1];
      Put(&cursor, end, static_cast<CharT>('0' + decimal / power));
      decimal %= power;
    }
  }

  if ((flags & FormatFlag_Left) != 0 && width > 0) {
    for (size_t i = static_cast<unsigned int>(width); length < i; --i) {
      Put(&cursor, end, static_cast<CharT>(' '));
    }
  }
  return cursor;
}

}

namespace {

using namespace nn::nlibsdk::detail;

constexpr int EInval = 22;

// The prefix of the alternate form is written before the padding, and the
// zeros of the precision before the sign. The arguments are consumed in the
// list of the caller.
template <class CharT>
int Format(CharT* buffer, size_t size, const CharT* format,
  va_list& arguments) {
  if (static_cast<ptrdiff_t>(size) < 0 || format == nullptr ||
    (buffer == nullptr) != (size == 0)) {
    errno = EInval;
    return -EInval;
  }

  CharT* end = buffer + size;
  CharT* cursor = buffer;
  for (const CharT* p = format; *p != 0; ++p) {
    if (*p != '%') {
      Put(&cursor, end, *p);
      continue;
    }

    ++p;
    uint32_t flags = 0;
    for (;; ++p) {
      if (*p == ' ') {
        flags |= FormatFlag_Space;
      }
      else if (*p == '#') {
        flags |= FormatFlag_Alternate;
      }
      else if (*p == '0') {
        flags |= FormatFlag_Zero;
      }
      else if (*p == '-') {
        flags |= FormatFlag_Left;
      }
      else if (*p == '+') {
        flags |= FormatFlag_Plus;
      }
      else {
        break;
      }
    }

    va_list peek;
    va_copy(peek, arguments);
    FieldSpec width = ParseWidth(&p, &flags, va_arg(peek, int));
    va_end(peek);
    if (width.isArgument) {
      va_arg(arguments, int);
    }
    va_copy(peek, arguments);
    FieldSpec precision = ParsePrecision(&p, va_arg(peek, int));
    va_end(peek);
    if (precision.isArgument) {
      va_arg(arguments, int);
    }
    int length = ParseLength(&p);

    bool isHexadecimal;
    bool isDecimal;
    switch (*p) {
      case 0:
        Put(&cursor, end, static_cast<CharT>('%'));
        --p;
        continue;
      case '%':
        Put(&cursor, end, static_cast<CharT>('%'));
        continue;
      case 'E':
      case 'F':
      case 'G':
      case 'e':
      case 'f':
      case 'g':
        cursor = FormatFloat(cursor, end, flags, precision.value, width.value,
          va_arg(arguments, double));
        continue;
      case 'X':
        isHexadecimal = true;
        isDecimal = false;
        flags = (flags & ~(FormatFlag_Plus | FormatFlag_Space |
          FormatFlag_Upper)) | FormatFlag_Upper;
        break;
      case 'c':
        FormatCharacter(&cursor, end, flags, width.value,
          va_arg(arguments, int));
        continue;
      case 'd':
      case 'i':
        isHexadecimal = false;
        isDecimal = true;
        flags |= FormatFlag_Signed;
        break;
      case 'o':
        isHexadecimal = false;
        isDecimal = false;
        flags &= ~(FormatFlag_Plus | FormatFlag_Space);
        break;
      case 'p':
        isHexadecimal = true;
        isDecimal = false;
        width.value = 16;
        flags = (flags & ~(FormatFlag_Plus | FormatFlag_Space |
          FormatFlag_Zero | FormatFlag_Upper)) | FormatFlag_Zero |
          FormatFlag_Upper;
        break;
      case 's':
        if (length == 'l') {
          FormatString(&cursor, end, flags, width.value, precision.value,
            va_arg(arguments, const typename WideString<CharT>::Type*));
        }
        else {
          FormatString(&cursor, end, flags, width.value, precision.value,
            va_arg(arguments, const char*));
        }
        continue;
      case 'u':
        isHexadecimal = false;
        isDecimal = true;
        flags &= ~(FormatFlag_Plus | FormatFlag_Space);
        break;
      case 'x':
        isHexadecimal = true;
        isDecimal = false;
        flags &= ~(FormatFlag_Plus | FormatFlag_Space);
        break;
      default:
        Put(&cursor, end, static_cast<CharT>('%'));
        Put(&cursor, end, *p);
        continue;
    }

    uint64_t value;
    bool isNegative = false;
    if ((flags & FormatFlag_Signed) != 0) {
      switch (length) {
        case 'H':
          value = GetMagnitude(static_cast<signed char>(
            va_arg(arguments, int)), &isNegative);
          break;
        case 'h':
          value = GetMagnitude(static_cast<short>(va_arg(arguments, int)),
            &isNegative);
          break;
        case 'L':
        case 'j':
        case 'l':
        case 't':
          value = GetMagnitude(va_arg(arguments, int64_t), &isNegative);
          break;
        case 'z':
          value = va_arg(arguments, size_t);
          break;
        default:
          value = GetMagnitude(va_arg(arguments, int), &isNegative);
          break;
      }
    }
    else {
      switch (length) {
        case 'H':
          value = static_cast<unsigned char>(va_arg(arguments, unsigned int));
          break;
        case 'h':
          value = static_cast<unsigned short>(
            va_arg(arguments, unsigned int));
          break;
        case 'L':
        case 'j':
        case 'l':
        case 't':
        case 'z':
          value = va_arg(arguments, uint64_t);
          break;
        default:
          value = va_arg(arguments, unsigned int);
          break;
      }
    }

    size_t prefix = isNegative || (flags & FormatFlag_Space) != 0 ||
      (flags & FormatFlag_Plus) != 0;
    if ((flags & FormatFlag_Alternate) != 0 && value != 0 && !isDecimal) {
      Put(&cursor, end, static_cast<CharT>('0'));
      precision.value -= precision.value > 0;
      if (isHexadecimal) {
        Put(&cursor, end, static_cast<CharT>(
          (flags & FormatFlag_Upper) != 0 ? 'X' : 'x'));
        prefix |= 2;
        precision.value -= precision.value > 0;
      }
      else {
        ++prefix;
      }
    }

    const uint64_t* powers;
    size_t digits;
    if (isDecimal) {
      powers = kDecimalPowers;
      digits = CountDigits(value, kDecimalPowers);
    }
    else if (isHexadecimal) {
      powers = kHexadecimalPowers;
      digits = CountDigits(value, kHexadecimalPowers);
    }
    else {
      powers = kOctalPowers;
      digits = CountDigits(value, kOctalPowers);
    }

    size_t total = digits + prefix;
    if (width.value > 0 && (flags & FormatFlag_Left) == 0) {
      CharT pad = precision.value < 0 && (flags & FormatFlag_Zero) != 0 ?
        '0' : ' ';
      for (; total < static_cast<unsigned int>(width.value) &&
        precision.value < width.value; --width.value) {
        Put(&cursor, end, pad);
      }
    }
    if (precision.value > 0) {
      for (; total < static_cast<unsigned int>(precision.value);
        --precision.value) {
        Put(&cursor, end, static_cast<CharT>('0'));
        --width.value;
      }
    }

    if (isNegative) {
      Put(&cursor, end, static_cast<CharT>('-'));
    }
    else if ((flags & FormatFlag_Plus) != 0) {
      Put(&cursor, end, static_cast<CharT>('+'));
    }
    else if ((flags & FormatFlag_Space) != 0) {
      Put(&cursor, end, static_cast<CharT>(' '));
    }

    for (size_t i = digits; i > 0; --i) {
      uint64_t power = powers[i - 1];
      uint64_t digit = value / power;
      CharT character;
      if (!isHexadecimal || digit <= 9) {
        character = static_cast<CharT>('0' + digit);
      }
      else {
        character = static_cast<CharT>(((flags & FormatFlag_Upper) != 0 ?
          'A' : 'a') + digit - 10);
      }
      Put(&cursor, end, character);
      value -= digit * power;
    }

    if (width.value > 0 && (flags & FormatFlag_Left) != 0) {
      for (; total < static_cast<unsigned int>(width.value); --width.value) {
        Put(&cursor, end, static_cast<CharT>(' '));
      }
    }
  }

  int count = static_cast<int>(cursor - buffer);
  if (cursor < end) {
    *cursor = 0;
  }
  else if (size != 0) {
    end[-1] = 0;
  }
  return count;
}

}

int FormatFallback(char* buffer, size_t size, const char* format,
  va_list arguments) {
  return Format(buffer, size, format, arguments);
}

int FormatFallback(wchar_t* buffer, size_t size, const wchar_t* format,
  va_list arguments) {
  return Format(buffer, size, format, arguments);
}

int VsnPrintfFallback(char16_t* buffer, size_t size, const char16_t* format,
  va_list arguments) {
  return Format(buffer, size, format, arguments);
}

int VsnPrintfFallback(char32_t* buffer, size_t size, const char32_t* format,
  va_list arguments) {
  // Only this one leaves the list of the caller untouched.
  va_list copy;
  va_copy(copy, arguments);
  int result = Format(buffer, size, format, copy);
  va_end(copy);
  return result;
}

}
