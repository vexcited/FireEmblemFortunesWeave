#pragma once

#include <stdint.h>

#include "nn/hid/hid_key_code_composer.hpp"
#include "nn/util/bit_flag_set.hpp"

namespace nn::kpr {

enum Utf8CodeComposerMode : int {
  Utf8CodeComposerMode_Default,
  Utf8CodeComposerMode_DeadKey,
  Utf8CodeComposerMode_RomajiHiragana,
  Utf8CodeComposerMode_RomajiKatakana,
};

namespace detail {

// Outputs come first in the buffer, then the composition.
struct Utf8CodeComposerStorage {
  char buffer[20];
  Utf8CodeComposerMode mode;
  int32_t compositionCount;
  int32_t outputCount;
  uint32_t altCode;
  uint32_t reserved;
};

static_assert(sizeof(Utf8CodeComposerStorage) == 40);

void InitializeUtf8CodeComposer(Utf8CodeComposerStorage* storage);
Utf8CodeComposerMode GetUtf8CodeComposerMode(
  const Utf8CodeComposerStorage& storage);
void SetUtf8CodeComposerMode(Utf8CodeComposerStorage* storage,
  Utf8CodeComposerMode mode);
void ClearUtf8CodeComposer(Utf8CodeComposerStorage* storage);
int GetUtf8CodeComposerCompositionCount(
  const Utf8CodeComposerStorage& storage);
int GetUtf8CodeComposerComposition(const Utf8CodeComposerStorage& storage,
  char* output, int count);
int EnqueueUtf8CodeComposer(Utf8CodeComposerStorage* storage,
  const char* input, int count);
int GetUtf8CodeComposerOutputCount(const Utf8CodeComposerStorage& storage);
void FlushUtf8CodeComposerAltCodes(Utf8CodeComposerStorage* storage);
int RemoveUtf8CodeComposer(Utf8CodeComposerStorage* storage, char* output,
  int count);
int EnqueueUtf8CodeComposerAltCodes(Utf8CodeComposerStorage* storage,
  const int* codes, int count);
void FlushUtf8CodeComposer(Utf8CodeComposerStorage* storage);
int DequeueUtf8CodeComposerOutput(Utf8CodeComposerStorage* storage,
  char* output, int count);

int GetUtf8CodeLength(char code);
bool Utf16NativeToUtf8(Utf8CodeComposerStorage* pOut,
  const KeyCodeComposerStorage& storage);
bool Utf8ToUtf16Native(KeyCodeComposerStorage* pOut,
  const Utf8CodeComposerStorage& storage);
void AddQueueNativeHead(Utf8CodeComposerStorage* storage, const char* code,
  int length);
void RemoveQueueNativeHead(Utf8CodeComposerStorage* storage);
void AddQueueNativeTail(Utf8CodeComposerStorage* storage, const char* code,
  int length);
void RemoveQueueNativeTail(Utf8CodeComposerStorage* storage);

struct AltCodeField;

int InterpretAltCode(char* pOut, int size,
  util::BitPack<uint32_t, AltCodeField> altCode);

void ProcessAltCode(Utf8CodeComposerStorage* storage);
void ProcessDeadKey(Utf8CodeComposerStorage* storage);
void ProcessDeadKeyForcibly(Utf8CodeComposerStorage* storage);
void ProcessRomaji(Utf8CodeComposerStorage* storage);
void ProcessRomajiForcibly(Utf8CodeComposerStorage* storage);

}

class Utf8CodeComposer {
public:
  Utf8CodeComposer();

  Utf8CodeComposerMode GetMode() const;
  void SetMode(Utf8CodeComposerMode mode);
  int GetCompositionCount() const;
  int GetComposition(char* output, int count) const;
  int EnqueueKeyCodes(const char* input, int count);
  int RemoveKeyCodes(char* output, int count);
  void FlushKeyCodes();
  int EnqueueAltCodes(const int* codes, int count);
  void FlushAltCodes();
  int GetOutputCount() const;
  int DequeueOutputs(char* output, int count);
  void Clear();

private:
  detail::Utf8CodeComposerStorage m_Storage;
};

}
