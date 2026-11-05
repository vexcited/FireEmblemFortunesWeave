#include "nn/diag/diag_abort.hpp"
#include "nn/settings/detail/settings_api.hpp"
#include "nn/settings/settings_chat_transcription.hpp"

namespace nn::settings::system {

ChatTranscriptionSettingsManager::ChatTranscriptionSettingsManager(
  ChatTranscriptionSettings* pSettings, int capacity)
  : m_pSettings(pSettings), m_Capacity(capacity), m_Count(0) {}

ChatTranscriptionSettingsManager& ChatTranscriptionSettingsManager::Load() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetChatTranscriptionSettings(
    &m_Count, m_pSettings, m_Capacity));
  return *this;
}

ChatTranscriptionSettingsManager& ChatTranscriptionSettingsManager::Save() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::SetChatTranscriptionSettings(m_pSettings, m_Count));
  return *this;
}

ChatTranscriptionSettingsManager& ChatTranscriptionSettingsManager::Add(
  const ChatTranscriptionSettings& settings) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::AddChatTranscriptionSettings(m_pSettings, m_Count, settings));
  m_Count++;
  return *this;
}

ChatTranscriptionSettingsManager& ChatTranscriptionSettingsManager::Remove(
  const account::Uid& uid) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::RemoveChatTranscriptionSettings(m_pSettings, &m_Count, uid));
  return *this;
}

bool ChatTranscriptionSettingsManager::IsValid(const account::Uid& uid,
  util::BitFlagSet<32, ChatTranscriptionFlag> flags) {
  bool isValid = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetValidityChatTranscriptionSettings(
    m_pSettings, m_Count, uid, flags, &isValid));
  return isValid;
}

ChatTranscriptionSettingsManager& ChatTranscriptionSettingsManager::SetValidity(
  const account::Uid& uid, util::BitFlagSet<32, ChatTranscriptionFlag> flags,
  bool isValid) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetValidityChatTranscriptionSettings(
    m_pSettings, m_Count, uid, flags, isValid));
  return *this;
}

TextToSpeechVoiceTypeForChat
ChatTranscriptionSettingsManager::GetTextToSpeechVoiceType(
  const account::Uid& uid) {
  TextToSpeechVoiceTypeForChat voiceType = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetTextToSpeechVoiceTypeForChat(
    &voiceType, m_pSettings, m_Count, uid));
  return voiceType;
}

ChatTranscriptionSettingsManager&
ChatTranscriptionSettingsManager::SetTextToSpeechVoiceType(
  const account::Uid& uid, TextToSpeechVoiceTypeForChat voiceType) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetTextToSpeechVoiceTypeForChat(
    m_pSettings, m_Count, uid, voiceType));
  return *this;
}

int ChatTranscriptionSettingsManager::GetCount() {
  return m_Count;
}

// The existence check passes the capacity, not the loaded count.
bool ChatTranscriptionSettingsManager::Has(const account::Uid& uid) {
  bool exists = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::ExistsChatTranscriptionSettings(
    &exists, m_pSettings, m_Capacity, uid));
  return exists;
}

ChatTranscriptionSettingsManager&
ChatTranscriptionSettingsManager::RemoveExcept(
  account::Uid* pUids, int count) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::RemoveChatTranscriptionSettingsExcept(
    m_pSettings, m_Count, pUids, count, &m_Count));
  return *this;
}

ChatTranscriptionSettingsExManager::ChatTranscriptionSettingsExManager(
  ChatTranscriptionSettingsEx* pSettings, int capacity)
  : m_pSettings(pSettings), m_Capacity(capacity), m_Count(0) {}

ChatTranscriptionSettingsExManager& ChatTranscriptionSettingsExManager::Load() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetChatTranscriptionSettings(
    &m_Count, m_pSettings, m_Capacity));
  return *this;
}

ChatTranscriptionSettingsExManager& ChatTranscriptionSettingsExManager::Save() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::SetChatTranscriptionSettings(m_pSettings, m_Count));
  return *this;
}

ChatTranscriptionSettingsExManager& ChatTranscriptionSettingsExManager::Add(
  const ChatTranscriptionSettingsEx& settings) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::AddChatTranscriptionSettings(m_pSettings, m_Count, settings));
  m_Count++;
  return *this;
}

ChatTranscriptionSettingsExManager& ChatTranscriptionSettingsExManager::Remove(
  const account::Uid& uid) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::RemoveChatTranscriptionSettings(m_pSettings, &m_Count, uid));
  return *this;
}

bool ChatTranscriptionSettingsExManager::IsValid(const account::Uid& uid,
  util::BitFlagSet<32, ChatTranscriptionFlag> flags) {
  bool isValid = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetValidityChatTranscriptionSettings(
    m_pSettings, m_Count, uid, flags, &isValid));
  return isValid;
}

ChatTranscriptionSettingsExManager&
ChatTranscriptionSettingsExManager::SetValidity(
  const account::Uid& uid, util::BitFlagSet<32, ChatTranscriptionFlag> flags,
  bool isValid) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetValidityChatTranscriptionSettings(
    m_pSettings, m_Count, uid, flags, isValid));
  return *this;
}

TextToSpeechVoiceTypeForChat
ChatTranscriptionSettingsExManager::GetTextToSpeechVoiceType(
  const account::Uid& uid) {
  TextToSpeechVoiceTypeForChat voiceType = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetTextToSpeechVoiceTypeForChat(
    &voiceType, m_pSettings, m_Count, uid));
  return voiceType;
}

ChatTranscriptionSettingsExManager&
ChatTranscriptionSettingsExManager::SetTextToSpeechVoiceType(
  const account::Uid& uid, TextToSpeechVoiceTypeForChat voiceType) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetTextToSpeechVoiceTypeForChat(
    m_pSettings, m_Count, uid, voiceType));
  return *this;
}

int ChatTranscriptionSettingsExManager::GetCount() {
  return m_Count;
}

// The existence check passes the capacity, not the loaded count.
bool ChatTranscriptionSettingsExManager::Has(const account::Uid& uid) {
  bool exists = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::ExistsChatTranscriptionSettings(
    &exists, m_pSettings, m_Capacity, uid));
  return exists;
}

ChatTranscriptionSettingsExManager&
ChatTranscriptionSettingsExManager::RemoveExcept(
  account::Uid* pUids, int count) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::RemoveChatTranscriptionSettingsExcept(
    m_pSettings, m_Count, pUids, count, &m_Count));
  return *this;
}

LanguageCode ChatTranscriptionSettingsExManager::GetTextToSpeechLanguageCode(
  const account::Uid& uid) {
  LanguageCode languageCode = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetTextToSpeechLanguageCode(
    &languageCode, m_pSettings, m_Count, uid));
  return languageCode;
}

LanguageCode ChatTranscriptionSettingsExManager::GetSpeechToTextLanguageCode(
  const account::Uid& uid) {
  LanguageCode languageCode = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetSpeechToTextLanguageCode(
    &languageCode, m_pSettings, m_Count, uid));
  return languageCode;
}

ChatTranscriptionSettingsExManager&
ChatTranscriptionSettingsExManager::SetTextToSpeechLanguageCode(
  const account::Uid& uid, const LanguageCode& languageCode) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetTextToSpeechLanguageCode(
    m_pSettings, m_Count, uid, languageCode));
  return *this;
}

ChatTranscriptionSettingsExManager&
ChatTranscriptionSettingsExManager::SetSpeechToTextLanguageCode(
  const account::Uid& uid, const LanguageCode& languageCode) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetSpeechToTextLanguageCode(
    m_pSettings, m_Count, uid, languageCode));
  return *this;
}

}
