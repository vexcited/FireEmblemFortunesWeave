#include <string.h>

#include "nn/kpr/kpr_utf8_code_composer.hpp"
#include "nn/util/utf.hpp"

namespace nn::kpr::detail {

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

}
