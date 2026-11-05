#include <string.h>

#include "nn/hid/hid_key_code_composer.hpp"

namespace nn::kpr::detail {

namespace {

int Min(int lhs, int rhs) {
  return lhs < rhs ? lhs : rhs;
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

}
