#pragma once

#include "nn/account/account_types.hpp"
#include "nn/settings/settings_types.hpp"
#include "nn/util/bit_flag_set.hpp"

namespace nn::settings::system {

struct ChatTranscriptionSettings {
  account::Uid uid;
  TextToSpeechVoiceTypeForChat textToSpeechVoiceType;
  util::BitFlagSet<32, ChatTranscriptionFlag> flags;
  uint8_t reserved18[8];
};

static_assert(sizeof(ChatTranscriptionSettings) == 0x20);

struct ChatTranscriptionSettingsEx {
  account::Uid uid;
  TextToSpeechVoiceTypeForChat textToSpeechVoiceType;
  util::BitFlagSet<32, ChatTranscriptionFlag> flags;
  LanguageCode textToSpeechLanguageCode;
  LanguageCode speechToTextLanguageCode;
  uint8_t reserved28[0x18];
};

static_assert(sizeof(ChatTranscriptionSettingsEx) == 0x40);

class ChatTranscriptionSettingsManager {
 public:
  ChatTranscriptionSettingsManager(
    ChatTranscriptionSettings* pSettings, int capacity);

  ChatTranscriptionSettingsManager& Load();
  ChatTranscriptionSettingsManager& Save();
  ChatTranscriptionSettingsManager& Add(
    const ChatTranscriptionSettings& settings);
  ChatTranscriptionSettingsManager& Remove(const account::Uid& uid);
  bool IsValid(const account::Uid& uid,
    util::BitFlagSet<32, ChatTranscriptionFlag> flags);
  ChatTranscriptionSettingsManager& SetValidity(const account::Uid& uid,
    util::BitFlagSet<32, ChatTranscriptionFlag> flags, bool isValid);
  TextToSpeechVoiceTypeForChat GetTextToSpeechVoiceType(
    const account::Uid& uid);
  ChatTranscriptionSettingsManager& SetTextToSpeechVoiceType(
    const account::Uid& uid, TextToSpeechVoiceTypeForChat voiceType);
  int GetCount();
  bool Has(const account::Uid& uid);
  ChatTranscriptionSettingsManager& RemoveExcept(
    account::Uid* pUids, int count);
 private:
  ChatTranscriptionSettings* m_pSettings;
  int m_Capacity;
  int m_Count;
};

class ChatTranscriptionSettingsExManager {
 public:
  ChatTranscriptionSettingsExManager(
    ChatTranscriptionSettingsEx* pSettings, int capacity);

  ChatTranscriptionSettingsExManager& Load();
  ChatTranscriptionSettingsExManager& Save();
  ChatTranscriptionSettingsExManager& Add(
    const ChatTranscriptionSettingsEx& settings);
  ChatTranscriptionSettingsExManager& Remove(const account::Uid& uid);
  bool IsValid(const account::Uid& uid,
    util::BitFlagSet<32, ChatTranscriptionFlag> flags);
  ChatTranscriptionSettingsExManager& SetValidity(const account::Uid& uid,
    util::BitFlagSet<32, ChatTranscriptionFlag> flags, bool isValid);
  TextToSpeechVoiceTypeForChat GetTextToSpeechVoiceType(
    const account::Uid& uid);
  ChatTranscriptionSettingsExManager& SetTextToSpeechVoiceType(
    const account::Uid& uid, TextToSpeechVoiceTypeForChat voiceType);
  int GetCount();
  bool Has(const account::Uid& uid);
  ChatTranscriptionSettingsExManager& RemoveExcept(
    account::Uid* pUids, int count);
  LanguageCode GetTextToSpeechLanguageCode(const account::Uid& uid);
  LanguageCode GetSpeechToTextLanguageCode(const account::Uid& uid);
  ChatTranscriptionSettingsExManager& SetTextToSpeechLanguageCode(
    const account::Uid& uid, const LanguageCode& languageCode);
  ChatTranscriptionSettingsExManager& SetSpeechToTextLanguageCode(
    const account::Uid& uid, const LanguageCode& languageCode);
 private:
  ChatTranscriptionSettingsEx* m_pSettings;
  int m_Capacity;
  int m_Count;
};

}
