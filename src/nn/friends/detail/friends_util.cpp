#include "nn/settings/settings_types.hpp"
#include "nn/util/string_util.hpp"

namespace nn::friends::detail::util {

namespace {

bool IsAlphabet(char c) {
  return static_cast<unsigned int>((c & 0xdf) - 'A') <= 'Z' - 'A';
}

bool IsDigit(char c) {
  return static_cast<unsigned int>(c - '0') <= 9;
}

}

// Accepts a two or three letter language, optionally followed by a four
// letter script, a two letter region or a three digit region.
bool VerifyLanguageCode(const settings::LanguageCode& code) {
  const char* string = code.string;
  if (string[0] == 0) {
    return true;
  }
  int length = nn::util::Strnlen(string, sizeof(code.string));
  if (length == sizeof(code.string)) {
    return false;
  }
  int languageLength = string[2] == '-' || string[2] == 0 ? 2 : 3;
  for (int i = 0; i < languageLength; i++) {
    if (!IsAlphabet(string[i])) {
      return false;
    }
  }
  if (string[languageLength] == 0) {
    return true;
  }
  if (string[languageLength] != '-') {
    return false;
  }
  int start = languageLength + 1;
  int subtagLength = length - start;
  if (IsAlphabet(string[start])) {
    if (subtagLength != 4 && subtagLength != 2) {
      return false;
    }
    for (int i = start; i < length; i++) {
      if (!IsAlphabet(string[i])) {
        return false;
      }
    }
    return true;
  }
  if (subtagLength != 3) {
    return false;
  }
  for (int i = start; i < length; i++) {
    if (!IsDigit(string[i])) {
      return false;
    }
  }
  return true;
}

}
