#pragma once

#include <stdint.h>

#include "nn/hid/hid_key_code_composer.hpp"

namespace nn::kpr {

class KeyCodeComposer {
public:
  KeyCodeComposer();

  KeyCodeComposerMode GetMode() const;
  void SetMode(KeyCodeComposerMode mode);
  int GetCompositionCount() const;
  int GetComposition(uint16_t* output, int count) const;
  int Enqueue(const uint16_t* input, int count);
  int GetDequeueableCount() const;
  int Dequeue(uint16_t* output, int count);
  int Remove(uint16_t* output, int count);
  void Flush();
  void Clear();

private:
  detail::KeyCodeComposerStorage m_Storage;
};

}
