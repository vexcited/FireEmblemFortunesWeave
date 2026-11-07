#include "nn/diag/diag_abort.hpp"
#include "nn/diag/unexpected_default.hpp"
#include "nn/kpr/kpr_key_code_composer.hpp"

namespace nn::kpr {

KeyCodeComposer::KeyCodeComposer() {
  detail::InitializeKeyCodeComposer(&m_Storage);
}

KeyCodeComposerMode KeyCodeComposer::GetMode() const {
  return detail::GetKeyCodeComposerMode(m_Storage);
}

void KeyCodeComposer::SetMode(KeyCodeComposerMode mode) {
  switch (mode) {
    case KeyCodeComposerMode_Default:
    case KeyCodeComposerMode_DeadKey:
    case KeyCodeComposerMode_RomajiHiragana:
    case KeyCodeComposerMode_RomajiKatakana:
      break;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
  detail::SetKeyCodeComposerMode(&m_Storage, mode);
}

int KeyCodeComposer::GetCompositionCount() const {
  return detail::GetKeyCodeComposerCompositionCount(m_Storage);
}

int KeyCodeComposer::GetComposition(uint16_t* output, int count) const {
  NN_ABORT_UNLESS_NOT_NULL(output);
  NN_ABORT_UNLESS(count >= 0);
  return detail::GetKeyCodeComposerComposition(m_Storage, output, count);
}

int KeyCodeComposer::Enqueue(const uint16_t* input, int count) {
  NN_ABORT_UNLESS_NOT_NULL(input);
  NN_ABORT_UNLESS(count >= 0);
  return detail::EnqueueKeyCodeComposer(&m_Storage, input, count);
}

int KeyCodeComposer::GetDequeueableCount() const {
  return detail::GetKeyCodeComposerDequeueableCount(m_Storage);
}

int KeyCodeComposer::Dequeue(uint16_t* output, int count) {
  NN_ABORT_UNLESS_NOT_NULL(output);
  NN_ABORT_UNLESS(count >= 0);
  return detail::DequeueKeyCodeComposer(&m_Storage, output, count);
}

int KeyCodeComposer::Remove(uint16_t* output, int count) {
  NN_ABORT_UNLESS_NOT_NULL(output);
  NN_ABORT_UNLESS(count >= 0);
  return detail::RemoveKeyCodeComposer(&m_Storage, output, count);
}

int KeyCodeComposer::Flush() {
  return detail::FlushKeyCodeComposer(&m_Storage);
}

void KeyCodeComposer::Clear() {
  detail::ClearKeyCodeComposer(&m_Storage);
}

}
