#include <string.h>

#include "nn/diag/unexpected_default.hpp"
#include "nn/hid/hid_key_code_composer.hpp"
#include "nn/kpr/kpr_utf8_code_composer.hpp"
#include "nn/util/utf.hpp"

namespace nn::kpr::detail {

namespace {

const int MaxQueuedCount = 4;
const uint32_t AltCodeValueMask = 0x7fffffff;
const uint32_t AltCodeLeadingZero = 0x80000000;

int Min(int lhs, int rhs) {
  return lhs < rhs ? lhs : rhs;
}

// Composition goes through the UTF-8 composer, outputs already queued here
// stay in front of the new ones.
template <typename Process>
[[gnu::always_inline]] void ProcessAsUtf8(KeyCodeComposerStorage* storage,
  Process process) {
  Utf8CodeComposerStorage utf8 = {};
  if (!Utf16NativeToUtf8(&utf8, *storage)) {
    return;
  }
  process(&utf8);
  KeyCodeComposerStorage converted = {};
  if (!Utf8ToUtf16Native(&converted, utf8)) {
    return;
  }
  const int dequeueableCount = storage->dequeueableCount;
  if (dequeueableCount >= 1) {
    const int total = converted.compositionCount + converted.dequeueableCount;
    if (total != 0) {
      memmove(converted.buffer + dequeueableCount, converted.buffer,
        sizeof(uint16_t) * total);
    }
    memcpy(converted.buffer, storage->buffer,
      sizeof(uint16_t) * dequeueableCount);
    converted.dequeueableCount += dequeueableCount;
  }
  *storage = converted;
}

}

void InitializeKeyCodeComposer(KeyCodeComposerStorage* storage) {
  *storage = {};
}

KeyCodeComposerMode GetKeyCodeComposerMode(
  const KeyCodeComposerStorage& storage) {
  return storage.mode;
}

void ClearKeyCodeComposer(KeyCodeComposerStorage* storage) {
  const KeyCodeComposerMode mode = storage->mode;
  InitializeKeyCodeComposer(storage);
  SetKeyCodeComposerMode(storage, mode);
}

// The original keeps this out of line in the clear path it inlines.
[[gnu::noinline]] void SetKeyCodeComposerMode(KeyCodeComposerStorage* storage,
  KeyCodeComposerMode mode) {
  if (mode != storage->mode) {
    ClearKeyCodeComposer(storage);
  }

  storage->mode = mode;
}

int GetKeyCodeComposerCompositionCount(const KeyCodeComposerStorage& storage) {
  return storage.compositionCount + storage.dequeueableCount;
}

int GetKeyCodeComposerComposition(const KeyCodeComposerStorage& storage,
  uint16_t* output, int count) {
  const int length = Min(count,
    storage.compositionCount + storage.dequeueableCount);

  if (length != 0) {
    memmove(output, storage.buffer, sizeof(uint16_t) * length);
  }

  return length;
}

int GetKeyCodeComposerDequeueableCount(const KeyCodeComposerStorage& storage) {
  return storage.dequeueableCount;
}

int DequeueKeyCodeComposer(KeyCodeComposerStorage* storage, uint16_t* output,
  int count) {
  const int length = Min(count, storage->dequeueableCount);

  if (length >= 1) {
    const uint32_t size = sizeof(uint16_t) * length;
    memmove(output, storage->buffer, size);

    const size_t total = sizeof(uint16_t) *
      (storage->compositionCount + storage->dequeueableCount);

    if (total != size) {
      memmove(storage->buffer,
        reinterpret_cast<uint8_t*>(storage->buffer) + size, total - size);
    }

    storage->dequeueableCount -= length;
  }

  return length;
}

int RemoveKeyCodeComposer(KeyCodeComposerStorage* storage, uint16_t* output,
  int count) {
  const int compositionCount = storage->compositionCount;
  const int length = Min(count, compositionCount);

  if (length >= 1) {
    memmove(output, storage->buffer + storage->dequeueableCount +
      compositionCount - length, sizeof(uint16_t) * length);
    storage->compositionCount -= length;
  }

  return length;
}

int EnqueueKeyCodeComposer(KeyCodeComposerStorage* storage,
  const uint16_t* input, int count) {
  if (storage->dequeueableCount > 0) {
    return 0;
  }
  FlushKeyCodeComposerAltCodes(storage);
  const KeyCodeComposerMode mode = storage->mode;
  const int length = count < 0 ? 0 : count;
  for (int i = 0; i != length; i++) {
    const int total = storage->compositionCount + storage->dequeueableCount;
    if (total > MaxQueuedCount) {
      return i;
    }
    storage->buffer[total] = input[i];
    storage->compositionCount += 1;
    switch (mode) {
      case KeyCodeComposerMode_RomajiHiragana:
      case KeyCodeComposerMode_RomajiKatakana:
        ProcessAsUtf8(storage, ProcessRomaji);
        break;
      case KeyCodeComposerMode_DeadKey:
        ProcessAsUtf8(storage, ProcessDeadKey);
        break;
      case KeyCodeComposerMode_Default:
        storage->dequeueableCount += storage->compositionCount;
        storage->compositionCount = 0;
        break;
      default:
        nn::detail::UnexpectedDefaultImpl();
    }
    if (storage->dequeueableCount > 0) {
      return i + 1;
    }
  }
  return length;
}

// The original keeps this out of line in both flush paths.
[[gnu::noinline]] void FlushKeyCodeComposerAltCodes(
  KeyCodeComposerStorage* storage) {
  const uint32_t altCode = storage->altCode;
  if ((altCode & AltCodeValueMask) != 0) {
    char utf8[4] = {};
    if (InterpretAltCode(utf8, sizeof(utf8),
          util::BitPack<uint32_t, AltCodeField>{altCode}) >= 1) {
      uint16_t utf16 = 0;
      const int length = GetUtf8CodeLength(utf8[0]);
      if (util::ConvertStringUtf8ToUtf16Native(&utf16, 1, utf8,
            Min(length, static_cast<int>(sizeof(utf8)))) ==
          util::CharacterEncodingResult_Success) {
        const int dequeueableCount = storage->dequeueableCount;
        const int total = storage->compositionCount + dequeueableCount;
        if (total != dequeueableCount) {
          memmove(storage->buffer + dequeueableCount + 1,
            storage->buffer + dequeueableCount,
            sizeof(uint16_t) * (total - dequeueableCount));
        }
        storage->buffer[storage->dequeueableCount] = utf16;
        storage->dequeueableCount += 1;
        storage->altCode = 0;
        return;
      }
    }
  }
  storage->altCode = 0;
}

void FlushKeyCodeComposer(KeyCodeComposerStorage* storage) {
  FlushKeyCodeComposerAltCodes(storage);
  switch (storage->mode) {
    case KeyCodeComposerMode_RomajiHiragana:
    case KeyCodeComposerMode_RomajiKatakana:
      ProcessAsUtf8(storage, ProcessRomajiForcibly);
      break;
    case KeyCodeComposerMode_DeadKey:
      ProcessAsUtf8(storage, ProcessDeadKeyForcibly);
      break;
    case KeyCodeComposerMode_Default:
      storage->dequeueableCount += storage->compositionCount;
      storage->compositionCount = 0;
      break;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

// A leading zero is kept as the top bit, the decimal value below it.
int EnqueueKeyCodeComposerAltCodes(KeyCodeComposerStorage* storage,
  const int* codes, int count) {
  if (storage->dequeueableCount > 0 ||
      storage->compositionCount + storage->dequeueableCount > MaxQueuedCount) {
    return 0;
  }
  int index = 0;
  for (; index < count; index++) {
    const uint32_t digit = codes[index];
    if (digit > 9) {
      break;
    }
    const uint32_t altCode = storage->altCode;
    const uint32_t value = altCode & AltCodeValueMask;
    if (value == 0) {
      storage->altCode = digit == 0 ? AltCodeLeadingZero : altCode | digit;
    }
    else {
      if (value > 0x6666666) {
        break;
      }
      storage->altCode = (value * 10 + digit) |
        (altCode & AltCodeLeadingZero);
    }
  }
  return Min(index, count);
}

}
