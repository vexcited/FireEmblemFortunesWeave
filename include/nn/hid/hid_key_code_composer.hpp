#pragma once

#include <stdint.h>

namespace nn::kpr {

enum KeyCodeComposerMode : int {
  KeyCodeComposerMode_Default,
  KeyCodeComposerMode_DeadKey,
  KeyCodeComposerMode_RomajiHiragana,
  KeyCodeComposerMode_RomajiKatakana,
};

namespace detail {

// Dequeueable code points come first in the buffer, then the composition.
struct KeyCodeComposerStorage {
  uint16_t buffer[6];
  KeyCodeComposerMode mode;
  int32_t compositionCount;
  int32_t dequeueableCount;
  uint32_t altCode;
  uint32_t reserved;
};

static_assert(sizeof(KeyCodeComposerStorage) == 32);

void InitializeKeyCodeComposer(KeyCodeComposerStorage* storage);
void SetKeyCodeComposerMode(KeyCodeComposerStorage* storage,
  KeyCodeComposerMode mode);
KeyCodeComposerMode GetKeyCodeComposerMode(
  const KeyCodeComposerStorage& storage);
int GetKeyCodeComposerCompositionCount(const KeyCodeComposerStorage& storage);
int GetKeyCodeComposerComposition(const KeyCodeComposerStorage& storage,
  uint16_t* output, int count);
int GetKeyCodeComposerDequeueableCount(const KeyCodeComposerStorage& storage);
int DequeueKeyCodeComposer(KeyCodeComposerStorage* storage, uint16_t* output,
  int count);
int EnqueueKeyCodeComposer(KeyCodeComposerStorage* storage,
  const uint16_t* input, int count);
int RemoveKeyCodeComposer(KeyCodeComposerStorage* storage, uint16_t* output,
  int count);
int FlushKeyCodeComposer(KeyCodeComposerStorage* storage);
int EnqueueKeyCodeComposerAltCodes(KeyCodeComposerStorage* storage,
  const int* codes, int count);
int FlushKeyCodeComposerAltCodes(KeyCodeComposerStorage* storage);
void ClearKeyCodeComposer(KeyCodeComposerStorage* storage);

}
}

namespace nn::hid {

class KeyCodeComposer {
public:
  KeyCodeComposer();
  void SetDeadKeyMode(bool isEnabled);
  bool GetDeadKeyMode() const;
  void SetRomajiHiraganaMode(bool isEnabled);
  bool GetRomajiHiraganaMode() const;
  void SetRomajiKatakanaMode(bool isEnabled);
  bool GetRomajiKatakanaMode() const;
  int GetCompositionCount() const;
  int GetComposition(uint16_t* output, int count) const;
  int GetOutputCount() const;
  int DequeueOutputs(uint16_t* output, int count);
  int EnqueueKeyCodes(const uint16_t* input, int count);
  int RemoveKeyCodes(uint16_t* output, int count);
  int FlushKeyCodes();
  int EnqueueAltCodes(const int* codes, int count);
  int FlushAltCodes();
  void Clear();

private:
  kpr::detail::KeyCodeComposerStorage m_Storage;
};

}
