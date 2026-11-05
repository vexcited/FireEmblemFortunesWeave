#include <stdint.h>

namespace nn::la {

namespace detail {

// The 196 GB 18030-2022 characters outside the BMP that are mapped to the
// private use area from U+F200, as their surrogate pairs in ascending order.
constexpr int Gb18030SurrogatePairCount = 196;
extern const uint32_t g_Gb18030SurrogatePairs[Gb18030SurrogatePairCount];

}

namespace {

constexpr uint16_t ExternalCodeBase = 0xf200;

template <typename Char>
bool ConvertSurrogatePairToExternal(Char* pOut, Char high, Char low) {
  if (static_cast<uint16_t>(high - 0xd840) > 0x33 ||
    (low & 0xfc00) != 0xdc00) {
    return false;
  }

  const uint32_t pair = (static_cast<uint32_t>(high) << 16) | low;
  int begin = 0;
  int end = detail::Gb18030SurrogatePairCount;
  while (begin <= end) {
    const int middle = begin + (end - begin) / 2;
    if (middle >= detail::Gb18030SurrogatePairCount) {
      return false;
    }

    const uint32_t value = detail::g_Gb18030SurrogatePairs[middle];
    if (pair < value) {
      end = middle - 1;
    }
    else if (pair > value) {
      begin = middle + 1;
    }
    else {
      *pOut = static_cast<Char>(ExternalCodeBase + middle);
      return true;
    }
  }

  return false;
}

template <typename Char>
bool ConvertExternalToSurrogatePair(Char* pOutHigh, Char* pOutLow,
  Char external) {
  const uint16_t index = static_cast<uint16_t>(external - ExternalCodeBase);
  if (index < detail::Gb18030SurrogatePairCount) {
    const uint32_t pair = detail::g_Gb18030SurrogatePairs[index];
    *pOutHigh = static_cast<Char>(pair >> 16);
    *pOutLow = static_cast<Char>(pair);
  }

  return index < detail::Gb18030SurrogatePairCount;
}

}

bool ConvertGb180302022SurrogatePairToExternal(uint16_t* pOut, uint16_t high,
  uint16_t low) {
  return ConvertSurrogatePairToExternal(pOut, high, low);
}

bool ConvertGb180302022SurrogatePairToExternal(char16_t* pOut, char16_t high,
  char16_t low) {
  return ConvertSurrogatePairToExternal(pOut, high, low);
}

bool ConvertGb180302022ExternalToSurrogatePair(uint16_t* pOutHigh,
  uint16_t* pOutLow, uint16_t external) {
  return ConvertExternalToSurrogatePair(pOutHigh, pOutLow, external);
}

bool ConvertGb180302022ExternalToSurrogatePair(char16_t* pOutHigh,
  char16_t* pOutLow, char16_t external) {
  return ConvertExternalToSurrogatePair(pOutHigh, pOutLow, external);
}

}
