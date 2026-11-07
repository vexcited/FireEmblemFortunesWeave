#include <string.h>

#include "nn/diag/unexpected_default.hpp"
#include "nn/kpr/kpr_utf8_code_composer.hpp"
#include "nn/util/utf.hpp"

namespace nn::kpr::detail {

// A dead key followed by a base character gives the composed character.
struct DeadKeyEntry {
  char deadKey[4];
  char base[4];
  char composed[4];
};

[[gnu::visibility("hidden")]] extern const DeadKeyEntry DeadKeyTable[107];

namespace {

const uint32_t AltCodeValueMask = 0x7fffffff;
const uint32_t AltCodeLeadingZero = 0x80000000;
const uint32_t MaxAltCodeValue = 0x6666666;
const int DeadKeyEntryCount = 107;

[[gnu::always_inline]] bool IsSameCode(const char* lhs, const char* rhs,
  int length) {
  for (int i = 0; i < length; i++) {
    if (lhs[i] != rhs[i]) {
      return false;
    }
    if (lhs[i] == '\0') {
      return true;
    }
  }
  return true;
}

// Alt codes 128 to 255 use code page 437.
const char Cp437Table[128][4] = {
  "\u00c7", "\u00fc", "\u00e9", "\u00e2", "\u00e4", "\u00e0", "\u00e5",
  "\u00e7", "\u00ea", "\u00eb", "\u00e8", "\u00ef", "\u00ee", "\u00ec",
  "\u00c4", "\u00c5", "\u00c9", "\u00e6", "\u00c6", "\u00f4", "\u00f6",
  "\u00f2", "\u00fb", "\u00f9", "\u00ff", "\u00d6", "\u00dc", "\u00a2",
  "\u00a3", "\u00a5", "\u20a7", "\u0192", "\u00e1", "\u00ed", "\u00f3",
  "\u00fa", "\u00f1", "\u00d1", "\u00aa", "\u00ba", "\u00bf", "\u2310",
  "\u00ac", "\u00bd", "\u00bc", "\u00a1", "\u00ab", "\u00bb", "\u2591",
  "\u2592", "\u2593", "\u2502", "\u2524", "\u2561", "\u2562", "\u2556",
  "\u2555", "\u2563", "\u2551", "\u2557", "\u255d", "\u255c", "\u255b",
  "\u2510", "\u2514", "\u2534", "\u252c", "\u251c", "\u2500", "\u253c",
  "\u255e", "\u255f", "\u255a", "\u2554", "\u2569", "\u2566", "\u2560",
  "\u2550", "\u256c", "\u2567", "\u2568", "\u2564", "\u2565", "\u2559",
  "\u2558", "\u2552", "\u2553", "\u256b", "\u256a", "\u2518", "\u250c",
  "\u2588", "\u2584", "\u258c", "\u2590", "\u2580", "\u03b1", "\u00df",
  "\u0393", "\u03c0", "\u03a3", "\u03c3", "\u00b5", "\u03c4", "\u03a6",
  "\u0398", "\u03a9", "\u03b4", "\u221e", "\u03c6", "\u03b5", "\u2229",
  "\u2261", "\u00b1", "\u2265", "\u2264", "\u2320", "\u2321", "\u00f7",
  "\u2248", "\u00b0", "\u2219", "\u00b7", "\u221a", "\u207f", "\u00b2",
  "\u25a0", "\u00a0",
};

// With a leading zero, 128 to 159 use Windows-1252 instead.
const char Windows1252Table[32][4] = {
  "\u20ac", "", "\u201a", "\u0192", "\u201e", "\u2026", "\u2020",
  "\u2021", "\u02c6", "\u2030", "\u0160", "\u2039", "\u0152", "",
  "\u017d", "", "", "\u2018", "\u2019", "\u201c", "\u201d",
  "\u2022", "\u2013", "\u2014", "\u02dc", "\u2122", "\u0161", "\u203a",
  "\u0153", "", "\u017e", "\u0178",
};

}

int GetUtf8CodeLength(char code) {
  const uint8_t c = static_cast<uint8_t>(code);
  if ((c & 0x80) == 0) {
    return 1;
  }
  if ((c & 0xe0) == 0xc0) {
    return 2;
  }
  if ((c & 0xf0) == 0xe0) {
    return 3;
  }
  if ((c & 0xf8) == 0xf0) {
    return 4;
  }
  return 0;
}

bool Utf16NativeToUtf8(Utf8CodeComposerStorage* pOut,
  const KeyCodeComposerStorage& storage) {
  Utf8CodeComposerStorage converted = {};
  converted.mode = static_cast<Utf8CodeComposerMode>(storage.mode);
  converted.altCode = storage.altCode;
  const uint16_t* composition = storage.buffer + storage.dequeueableCount;
  int length = 0;
  util::GetLengthOfConvertedStringUtf16NativeToUtf8(&length, composition,
    storage.compositionCount);
  if (length >= 1) {
    if (util::ConvertStringUtf16NativeToUtf8(converted.buffer, length,
          composition, storage.compositionCount) !=
        util::CharacterEncodingResult_Success) {
      return false;
    }
    converted.compositionCount = length;
  }
  *pOut = converted;
  return true;
}

bool Utf8ToUtf16Native(KeyCodeComposerStorage* pOut,
  const Utf8CodeComposerStorage& storage) {
  KeyCodeComposerStorage converted = {};
  converted.mode = static_cast<KeyCodeComposerMode>(storage.mode);
  converted.altCode = storage.altCode;
  int length = 0;
  util::GetLengthOfConvertedStringUtf8ToUtf16Native(&length, storage.buffer,
    storage.outputCount);
  if (length >= 1) {
    converted.dequeueableCount = length;
    if (util::ConvertStringUtf8ToUtf16Native(converted.buffer, length,
          storage.buffer, storage.outputCount) !=
        util::CharacterEncodingResult_Success) {
      return false;
    }
  }
  util::GetLengthOfConvertedStringUtf8ToUtf16Native(&length,
    storage.buffer + storage.outputCount, storage.compositionCount);
  if (length >= 1) {
    converted.compositionCount = length;
    if (util::ConvertStringUtf8ToUtf16Native(
          converted.buffer + converted.dequeueableCount, length,
          storage.buffer + storage.outputCount, storage.compositionCount) !=
        util::CharacterEncodingResult_Success) {
      return false;
    }
  }
  *pOut = converted;
  return true;
}

void AddQueueNativeHead(Utf8CodeComposerStorage* storage, const char* code,
  int length) {
  const int total = GetUtf8CodeComposerCompositionCount(*storage);
  if (storage->compositionCount >= 1 && total != storage->outputCount) {
    memmove(storage->buffer + storage->outputCount + length,
      storage->buffer + storage->outputCount, total - storage->outputCount);
  }
  memcpy(storage->buffer + storage->outputCount, code, length);
  storage->compositionCount += length;
}

void RemoveQueueNativeHead(Utf8CodeComposerStorage* storage) {
  const int total = GetUtf8CodeComposerCompositionCount(*storage);
  const int head = storage->outputCount;
  const int length = GetUtf8CodeLength(storage->buffer[head]);
  const int rest = total - (head + length);
  if (rest > 0) {
    memcpy(storage->buffer + head, storage->buffer + head + length, rest);
  }
  storage->compositionCount -= length;
}

void AddQueueNativeTail(Utf8CodeComposerStorage* storage, const char* code,
  int length) {
  const int total = GetUtf8CodeComposerCompositionCount(*storage);
  memcpy(storage->buffer + total, code, length);
  storage->compositionCount += length;
}

// Only a single continuation byte is stepped over to find the lead byte.
void RemoveQueueNativeTail(Utf8CodeComposerStorage* storage) {
  const int total = GetUtf8CodeComposerCompositionCount(*storage);
  int index = total - 1;
  if (storage->outputCount < index) {
    const uint8_t c = static_cast<uint8_t>(storage->buffer[index]);
    if ((c & 0x80) != 0 && (c & 0xf0) != 0xe0 && (c & 0xe0) != 0xc0 &&
        (c & 0xf8) != 0xf0) {
      index = total - 2;
    }
  }
  storage->compositionCount -= GetUtf8CodeLength(storage->buffer[index]);
}

// Alt codes past the table wrap to their low byte as a code point, values
// too large to grow give a space. The original keeps this out of line.
[[gnu::noinline]] int InterpretAltCode(char* pOut, int size,
  util::BitPack<uint32_t, AltCodeField> altCode) {
  const uint32_t raw = altCode._storage;
  const uint32_t value = raw & AltCodeValueMask;
  if ((raw & 0x7fffff80) == 0x80) {
    const char* entry = nullptr;
    if ((raw & AltCodeLeadingZero) == 0) {
      entry = Cp437Table[value - 0x80];
    }
    else if (value <= 0x9f) {
      entry = Windows1252Table[value - 0x80];
    }
    if (entry != nullptr) {
      const int length = GetUtf8CodeLength(entry[0]);
      memcpy(pOut, entry, length);
      if (length != 0) {
        return length;
      }
    }
  }
  else if (value > MaxAltCodeValue) {
    pOut[0] = ' ';
    return 1;
  }
  const uint16_t code = raw & 0xff;
  util::ConvertStringUtf16NativeToUtf8(pOut, size, &code, 1);
  if (pOut[0] == '\0') {
    return 1;
  }
  return GetUtf8CodeLength(pOut[0]);
}

// The converted character goes in front of the composition and out at once.
void ProcessAltCode(Utf8CodeComposerStorage* storage) {
  char utf8[4] = {};
  const int length = InterpretAltCode(utf8, sizeof(utf8),
    util::BitPack<uint32_t, AltCodeField>{storage->altCode});
  if (length != 0) {
    AddQueueNativeHead(storage, utf8, length);
    const int head = GetUtf8CodeLength(storage->buffer[storage->outputCount]);
    storage->outputCount += head;
    storage->compositionCount -= head;
  }
  storage->altCode = 0;
}

// A lone dead key is looked up as pressed twice, the rest is kept as is.
void ProcessDeadKeyForcibly(Utf8CodeComposerStorage* storage) {
  char output[20] = {};
  int outputLength = 0;
  const int compositionCount = storage->compositionCount;
  for (int offset = 0; offset < compositionCount;) {
    const char* code = storage->buffer + storage->outputCount + offset;
    const int length = GetUtf8CodeLength(code[0]);
    if (length == 0) {
      break;
    }
    const char* replacement = code;
    for (int i = 0; i < DeadKeyEntryCount; i++) {
      const DeadKeyEntry& entry = DeadKeyTable[i];
      if (GetUtf8CodeLength(entry.deadKey[0]) == length &&
          IsSameCode(code, entry.deadKey, length) &&
          GetUtf8CodeLength(entry.base[0]) == length &&
          IsSameCode(code, entry.base, length)) {
        replacement = entry.composed;
        break;
      }
    }
    const int replacementLength = GetUtf8CodeLength(replacement[0]);
    memcpy(output + outputLength, replacement, replacementLength);
    outputLength += replacementLength;
    offset += length;
  }
  storage->compositionCount = 0;
  AddQueueNativeTail(storage, output, outputLength);
  storage->outputCount += storage->compositionCount;
  storage->compositionCount = 0;
}

// A trailing n becomes the syllabic n of the current kana.
void ProcessRomajiForcibly(Utf8CodeComposerStorage* storage) {
  const int total = GetUtf8CodeComposerCompositionCount(*storage);
  if (storage->compositionCount >= 1 && storage->buffer[total - 1] == 'n') {
    const char* syllabicN = nullptr;
    switch (GetUtf8CodeComposerMode(*storage)) {
      case Utf8CodeComposerMode_RomajiKatakana:
        syllabicN = "\u30f3";
        break;
      case Utf8CodeComposerMode_RomajiHiragana:
        syllabicN = "\u3093";
        break;
      default:
        nn::detail::UnexpectedDefaultImpl();
    }
    const int length = GetUtf8CodeLength(syllabicN[0]);
    RemoveQueueNativeTail(storage);
    AddQueueNativeTail(storage, syllabicN, length);
  }
  storage->outputCount += storage->compositionCount;
  storage->compositionCount = 0;
}

}
