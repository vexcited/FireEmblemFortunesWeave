#include <string.h>

#include "nn/diag/unexpected_default.hpp"
#include "nn/kpr/kpr_utf8_code_composer.hpp"

namespace nn::kpr::detail {

namespace {

const int BufferSize = 20;
const uint32_t AltCodeValueMask = 0x7fffffff;
const uint32_t AltCodeLeadingZero = 0x80000000;

int Min(int lhs, int rhs) {
  return lhs < rhs ? lhs : rhs;
}

}

void InitializeUtf8CodeComposer(Utf8CodeComposerStorage* storage) {
  *storage = {};
}

Utf8CodeComposerMode GetUtf8CodeComposerMode(
  const Utf8CodeComposerStorage& storage) {
  return storage.mode;
}

// The original keeps this out of line in the clear path it inlines.
[[gnu::noinline]] void SetUtf8CodeComposerMode(
  Utf8CodeComposerStorage* storage, Utf8CodeComposerMode mode) {
  if (mode != storage->mode) {
    ClearUtf8CodeComposer(storage);
  }
  storage->mode = mode;
}

void ClearUtf8CodeComposer(Utf8CodeComposerStorage* storage) {
  const Utf8CodeComposerMode mode = storage->mode;
  InitializeUtf8CodeComposer(storage);
  SetUtf8CodeComposerMode(storage, mode);
}

int GetUtf8CodeComposerCompositionCount(
  const Utf8CodeComposerStorage& storage) {
  return storage.compositionCount + storage.outputCount;
}

int GetUtf8CodeComposerComposition(const Utf8CodeComposerStorage& storage,
  char* output, int count) {
  const int length = Min(storage.compositionCount + storage.outputCount,
    count);
  if (length != 0) {
    memmove(output, storage.buffer, length);
  }
  return length;
}

int EnqueueUtf8CodeComposer(Utf8CodeComposerStorage* storage,
  const char* input, int count) {
  if (storage->outputCount > 0) {
    return 0;
  }
  if ((storage->altCode & AltCodeValueMask) != 0) {
    ProcessAltCode(storage);
  }
  else {
    storage->altCode = 0;
  }

  const Utf8CodeComposerMode mode = storage->mode;
  int index = 0;
  while (index < count) {
    const char* code = input + index;
    const int total = storage->compositionCount + storage->outputCount;
    const int length = GetUtf8CodeLength(*code);
    if (total + length > BufferSize || count < index + length) {
      return index;
    }
    AddQueueNativeTail(storage, code, length);
    index += length;

    switch (mode) {
      case Utf8CodeComposerMode_RomajiHiragana:
      case Utf8CodeComposerMode_RomajiKatakana:
        ProcessRomaji(storage);
        break;
      case Utf8CodeComposerMode_DeadKey:
        ProcessDeadKey(storage);
        break;
      case Utf8CodeComposerMode_Default:
        storage->outputCount += storage->compositionCount;
        storage->compositionCount = 0;
        break;
      default:
        nn::detail::UnexpectedDefaultImpl();
    }
    if (storage->outputCount >= 1) {
      return index;
    }
  }
  return index;
}

int GetUtf8CodeComposerOutputCount(const Utf8CodeComposerStorage& storage) {
  return storage.outputCount;
}

void FlushUtf8CodeComposerAltCodes(Utf8CodeComposerStorage* storage) {
  if ((storage->altCode & AltCodeValueMask) != 0) {
    ProcessAltCode(storage);
  }
  else {
    storage->altCode = 0;
  }
}

// Each removed byte drops a whole character from the composition.
int RemoveUtf8CodeComposer(Utf8CodeComposerStorage* storage, char* output,
  int count) {
  const int length = Min(storage->compositionCount, count);
  if (length >= 1) {
    memmove(output, storage->buffer + storage->outputCount +
      storage->compositionCount - length, length);
    for (int i = length; i != 0; i--) {
      RemoveQueueNativeTail(storage);
    }
  }
  return length;
}

// A leading zero is kept as the top bit, the decimal value below it.
int EnqueueUtf8CodeComposerAltCodes(Utf8CodeComposerStorage* storage,
  const int* codes, int count) {
  if (storage->outputCount > 0 ||
      storage->compositionCount + storage->outputCount > BufferSize) {
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

void FlushUtf8CodeComposer(Utf8CodeComposerStorage* storage) {
  if ((storage->altCode & AltCodeValueMask) != 0) {
    ProcessAltCode(storage);
  }
  else {
    storage->altCode = 0;
  }
  switch (storage->mode) {
    case Utf8CodeComposerMode_RomajiHiragana:
    case Utf8CodeComposerMode_RomajiKatakana:
      ProcessRomajiForcibly(storage);
      break;
    case Utf8CodeComposerMode_DeadKey:
      ProcessDeadKeyForcibly(storage);
      break;
    case Utf8CodeComposerMode_Default:
      storage->outputCount += storage->compositionCount;
      storage->compositionCount = 0;
      break;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

int DequeueUtf8CodeComposerOutput(Utf8CodeComposerStorage* storage,
  char* output, int count) {
  const int length = Min(storage->outputCount, count);
  if (length >= 1) {
    memmove(output, storage->buffer, length);
    const size_t total = static_cast<size_t>(storage->compositionCount) +
      storage->outputCount;
    if (static_cast<int>(total) != length) {
      memmove(storage->buffer, storage->buffer + length, total - length);
    }
    storage->outputCount -= length;
  }
  return length;
}

}
