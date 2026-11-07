#include "nn/diag/diag_abort.hpp"
#include "nn/diag/unexpected_default.hpp"
#include "nn/kpr/kpr_utf8_code_composer.hpp"

namespace nn::kpr {

Utf8CodeComposer::Utf8CodeComposer() {
  detail::InitializeUtf8CodeComposer(&m_Storage);
}

Utf8CodeComposerMode Utf8CodeComposer::GetMode() const {
  return detail::GetUtf8CodeComposerMode(m_Storage);
}

void Utf8CodeComposer::SetMode(Utf8CodeComposerMode mode) {
  switch (mode) {
    case Utf8CodeComposerMode_Default:
    case Utf8CodeComposerMode_DeadKey:
    case Utf8CodeComposerMode_RomajiHiragana:
    case Utf8CodeComposerMode_RomajiKatakana:
      break;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
  detail::SetUtf8CodeComposerMode(&m_Storage, mode);
}

int Utf8CodeComposer::GetCompositionCount() const {
  return detail::GetUtf8CodeComposerCompositionCount(m_Storage);
}

int Utf8CodeComposer::GetComposition(char* output, int count) const {
  NN_ABORT_UNLESS_NOT_NULL(output);
  NN_ABORT_UNLESS(count >= 0);
  return detail::GetUtf8CodeComposerComposition(m_Storage, output, count);
}

int Utf8CodeComposer::EnqueueKeyCodes(const char* input, int count) {
  NN_ABORT_UNLESS_NOT_NULL(input);
  NN_ABORT_UNLESS(count >= 0);
  return detail::EnqueueUtf8CodeComposer(&m_Storage, input, count);
}

int Utf8CodeComposer::RemoveKeyCodes(char* output, int count) {
  NN_ABORT_UNLESS_NOT_NULL(output);
  NN_ABORT_UNLESS(count >= 0);
  return detail::RemoveUtf8CodeComposer(&m_Storage, output, count);
}

void Utf8CodeComposer::FlushKeyCodes() {
  detail::FlushUtf8CodeComposer(&m_Storage);
}

int Utf8CodeComposer::EnqueueAltCodes(const int* codes, int count) {
  NN_ABORT_UNLESS_NOT_NULL(codes);
  NN_ABORT_UNLESS(count >= 0);
  return detail::EnqueueUtf8CodeComposerAltCodes(&m_Storage, codes, count);
}

void Utf8CodeComposer::FlushAltCodes() {
  detail::FlushUtf8CodeComposerAltCodes(&m_Storage);
}

int Utf8CodeComposer::GetOutputCount() const {
  return detail::GetUtf8CodeComposerOutputCount(m_Storage);
}

int Utf8CodeComposer::DequeueOutputs(char* output, int count) {
  NN_ABORT_UNLESS_NOT_NULL(output);
  NN_ABORT_UNLESS(count >= 0);
  return detail::DequeueUtf8CodeComposerOutput(&m_Storage, output, count);
}

void Utf8CodeComposer::Clear() {
  detail::ClearUtf8CodeComposer(&m_Storage);
}

}
