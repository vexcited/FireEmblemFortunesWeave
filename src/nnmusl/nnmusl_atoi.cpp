namespace {

[[gnu::always_inline]] inline bool IsSpace(int c) {
  return c == ' ' || static_cast<unsigned int>(c - '\t') < 5;
}

[[gnu::always_inline]] inline bool IsDigit(int c) {
  return static_cast<unsigned int>(c - '0') < 10;
}

// The value is built negative so that the most negative one fits.
template <typename T>
[[gnu::always_inline]] inline T Parse(const char* text) {
  T value = 0;
  bool isNegative = false;
  while (IsSpace(*text)) {
    ++text;
  }

  switch (*text) {
    case '-':
      isNegative = true;
      [[fallthrough]];
    case '+':
      ++text;
  }

  while (IsDigit(*text)) {
    value = 10 * value - (*text++ - '0');
  }

  return isNegative ? value : -value;
}

}

extern "C" {

int atoi(const char* text) {
  return Parse<int>(text);
}

long atol(const char* text) {
  return Parse<long>(text);
}

long long atoll(const char* text) {
  return Parse<long long>(text);
}

}
