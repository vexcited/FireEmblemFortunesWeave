#include <stddef.h>
#include <stdint.h>

namespace {

constexpr int EInval = 22;
constexpr int ERange = 34;
constexpr int EIlSeq = 84;
constexpr uint32_t ReplacementCharacter = 0xfffd;

// Sequence lengths by lead byte, 0 for continuation bytes and overlong
// leads. Leads past 0xf4 keep the lengths of the old 5 and 6 byte forms.
constexpr uint8_t Utf8Length[256] = {
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
  2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
  3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
  4, 4, 4, 4, 4, 0, 0, 0, 5, 5, 5, 5, 6, 6, 7, 8,
};

bool IsContinuation(uint8_t c) {
  return (c & 0xc0) == 0x80;
}

int Fail(size_t* pOutLength, uint32_t* pOutCharacter, size_t length,
  int error) {
  *pOutLength = length;
  *pOutCharacter = ReplacementCharacter;
  return error;
}

}

extern "C" {

// A truncated sequence gives 34 with the length of its valid prefix, an
// invalid one gives 84 with the replacement character.
int nnmem_nlib_memutf8_to_utf32char(size_t* pOutLength,
  uint32_t* pOutCharacter, const char* string, size_t size) {
  if (static_cast<ptrdiff_t>(size) <= 0) {
    *pOutLength = 0;
    return EInval;
  }
  const uint8_t* s = reinterpret_cast<const uint8_t*>(string);
  uint32_t lead = s[0];
  switch (Utf8Length[lead]) {
    case 1:
      *pOutLength = 1;
      *pOutCharacter = lead;
      return 0;
    case 2:
      if (size == 1) {
        return Fail(pOutLength, pOutCharacter, 1, ERange);
      }
      if (!IsContinuation(s[1])) {
        break;
      }
      *pOutLength = 2;
      *pOutCharacter = (s[1] & 0x3f) | ((lead & 0x1f) << 6);
      return 0;
    case 3:
      if (size >= 3) {
        uint32_t second = s[1];
        if (!IsContinuation(second)) {
          break;
        }
        if (IsContinuation(s[2])) {
          uint32_t high = ((lead & 0xf) << 12) | ((second & 0x3f) << 6);
          if ((high & 0xf800) == 0 || (high & 0xf800) == 0xd800) {
            break;
          }
          *pOutLength = 3;
          *pOutCharacter = (s[2] & 0x3f) | high;
          return 0;
        }
        if (lead == 0xed ? second > 0x9f : lead == 0xe0 && second < 0xa0) {
          break;
        }
        return Fail(pOutLength, pOutCharacter, 2, EIlSeq);
      }
      if (size == 1) {
        return Fail(pOutLength, pOutCharacter, 1, ERange);
      }
      if (lead == 0xed) {
        if (s[1] < 0x80 || s[1] > 0x9f) {
          break;
        }
      }
      else if (lead == 0xe0) {
        if ((s[1] & 0xe0) != 0xa0) {
          break;
        }
      }
      else if (!IsContinuation(s[1])) {
        break;
      }
      return Fail(pOutLength, pOutCharacter, 2, ERange);
    case 4: {
      if (size == 1) {
        return Fail(pOutLength, pOutCharacter, 1, ERange);
      }
      uint32_t second = s[1];
      if (size < 4) {
        if (lead == 0xf4) {
          if (second < 0x80 || second > 0x8f) {
            break;
          }
        }
        else if (lead == 0xf0) {
          if (second - 0x90 > 0x2f) {
            break;
          }
        }
        else if (!IsContinuation(second)) {
          break;
        }
        if (size == 2) {
          return Fail(pOutLength, pOutCharacter, 2, ERange);
        }
        if (IsContinuation(s[2])) {
          return Fail(pOutLength, pOutCharacter, 3, ERange);
        }
        return Fail(pOutLength, pOutCharacter, 2, EIlSeq);
      }
      if (!IsContinuation(second)) {
        break;
      }
      size_t validLength;
      if (!IsContinuation(s[2])) {
        validLength = 2;
      }
      else if (!IsContinuation(s[3])) {
        validLength = 3;
      }
      else {
        uint32_t high = ((lead & 7) << 18) | ((second & 0x3f) << 12);
        if (high - 0x110000 < 0xfff00000) {
          break;
        }
        *pOutLength = 4;
        *pOutCharacter = (s[3] & 0x3f) | ((s[2] & 0x3f) << 6) | high;
        return 0;
      }
      if (lead == 0xf4 ? second > 0x8f : lead == 0xf0 && second < 0x90) {
        break;
      }
      return Fail(pOutLength, pOutCharacter, validLength, EIlSeq);
    }
    default:
      break;
  }
  return Fail(pOutLength, pOutCharacter, 1, EIlSeq);
}

}
