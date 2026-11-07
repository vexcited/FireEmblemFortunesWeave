#include "nn/hid/hid_key_code_composer.hpp"

namespace nn::hid {

namespace {

kpr::KeyCodeComposerMode ToMode(bool isEnabled, kpr::KeyCodeComposerMode mode) {
  return isEnabled ? mode : kpr::KeyCodeComposerMode_Default;
}

}

KeyCodeComposer::KeyCodeComposer() : m_Storage() {
  kpr::detail::InitializeKeyCodeComposer(&m_Storage);
}

void KeyCodeComposer::SetDeadKeyMode(bool isEnabled) {
  kpr::detail::SetKeyCodeComposerMode(&m_Storage,
    ToMode(isEnabled, kpr::KeyCodeComposerMode_DeadKey));
}

bool KeyCodeComposer::GetDeadKeyMode() const {
  return kpr::detail::GetKeyCodeComposerMode(m_Storage) ==
    kpr::KeyCodeComposerMode_DeadKey;
}

void KeyCodeComposer::SetRomajiHiraganaMode(bool isEnabled) {
  kpr::detail::SetKeyCodeComposerMode(&m_Storage,
    ToMode(isEnabled, kpr::KeyCodeComposerMode_RomajiHiragana));
}

bool KeyCodeComposer::GetRomajiHiraganaMode() const {
  return kpr::detail::GetKeyCodeComposerMode(m_Storage) ==
    kpr::KeyCodeComposerMode_RomajiHiragana;
}

void KeyCodeComposer::SetRomajiKatakanaMode(bool isEnabled) {
  kpr::detail::SetKeyCodeComposerMode(&m_Storage,
    ToMode(isEnabled, kpr::KeyCodeComposerMode_RomajiKatakana));
}

bool KeyCodeComposer::GetRomajiKatakanaMode() const {
  return kpr::detail::GetKeyCodeComposerMode(m_Storage) ==
    kpr::KeyCodeComposerMode_RomajiKatakana;
}

int KeyCodeComposer::GetCompositionCount() const {
  return kpr::detail::GetKeyCodeComposerCompositionCount(m_Storage);
}

int KeyCodeComposer::GetComposition(uint16_t* output, int count) const {
  return kpr::detail::GetKeyCodeComposerComposition(m_Storage, output, count);
}

int KeyCodeComposer::GetOutputCount() const {
  return kpr::detail::GetKeyCodeComposerDequeueableCount(m_Storage);
}

int KeyCodeComposer::DequeueOutputs(uint16_t* output, int count) {
  return kpr::detail::DequeueKeyCodeComposer(&m_Storage, output, count);
}

int KeyCodeComposer::EnqueueKeyCodes(const uint16_t* input, int count) {
  return kpr::detail::EnqueueKeyCodeComposer(&m_Storage, input, count);
}

int KeyCodeComposer::RemoveKeyCodes(uint16_t* output, int count) {
  return kpr::detail::RemoveKeyCodeComposer(&m_Storage, output, count);
}

void KeyCodeComposer::FlushKeyCodes() {
  kpr::detail::FlushKeyCodeComposer(&m_Storage);
}

int KeyCodeComposer::EnqueueAltCodes(const int* codes, int count) {
  return kpr::detail::EnqueueKeyCodeComposerAltCodes(&m_Storage, codes,
    count);
}

void KeyCodeComposer::FlushAltCodes() {
  kpr::detail::FlushKeyCodeComposerAltCodes(&m_Storage);
}

void KeyCodeComposer::Clear() {
  kpr::detail::ClearKeyCodeComposer(&m_Storage);
}

}
