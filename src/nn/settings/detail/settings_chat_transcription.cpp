#include <string.h>

#include "nn/settings/detail/settings_api.hpp"
#include "nn/settings/settings_chat_transcription.hpp"

namespace nn::settings::detail {

[[gnu::noinline]] bool IsSupportedChatLanguageCode(
  const LanguageCode& languageCode);

namespace {

using system::ChatTranscriptionFlag;
using system::ChatTranscriptionSettings;
using system::ChatTranscriptionSettingsEx;
using system::TextToSpeechVoiceTypeForChat;
using ChatTranscriptionFlagSet = util::BitFlagSet<32, ChatTranscriptionFlag>;

constexpr Result ResultNullSettings = {(1892 << 9) | 105};
constexpr Result ResultSettingsFull = {(1894 << 9) | 105};
constexpr Result ResultSettingsAlreadyExist = {(1896 << 9) | 105};
constexpr Result ResultSettingsNotFound = {(1895 << 9) | 105};
constexpr Result ResultNullLanguageCode = {(1983 << 9) | 105};
constexpr Result ResultUnsupportedTextToSpeechLanguageCode = {
  (1985 << 9) | 105};
constexpr Result ResultUnsupportedSpeechToTextLanguageCode = {
  (1986 << 9) | 105};
constexpr Result ResultInvalidSettingsCount = {(1987 << 9) | 105};
constexpr Result ResultInvalidUidCount = {(1898 << 9) | 105};
constexpr int ChatTranscriptionSettingsCountMax = 8;

bool IsSameUser(const account::Uid& lhs, const account::Uid& rhs) {
  return lhs.value[0] == rhs.value[0] && lhs.value[1] == rhs.value[1];
}

template <typename Settings>
Settings* Find(Settings* pSettings, int count, const account::Uid& uid) {
  for (int i = 0; i < count; ++i) {
    if (IsSameUser(pSettings[i].uid, uid)) {
      return &pSettings[i];
    }
  }

  return nullptr;
}

account::Uid* Find(account::Uid* pUids, int count, const account::Uid& uid) {
  for (int i = 0; i < count; ++i) {
    if (IsSameUser(pUids[i], uid)) {
      return &pUids[i];
    }
  }

  return nullptr;
}

template <typename Settings>
Result Add(Settings* pSettings, int count, const Settings& settings) {
  if (pSettings == nullptr) {
    return ResultNullSettings;
  }

  if (count >= ChatTranscriptionSettingsCountMax) {
    return ResultSettingsFull;
  }

  if (Find(pSettings, count, settings.uid) != nullptr) {
    return ResultSettingsAlreadyExist;
  }

  pSettings[count] = settings;
  return Result();
}

template <typename Settings>
Result Remove(Settings* pSettings, int* pCount, const account::Uid& uid) {
  if (pSettings == nullptr) {
    return ResultNullSettings;
  }

  const int count = *pCount;
  for (int i = 0; i < count; ++i) {
    if (IsSameUser(pSettings[i].uid, uid)) {
      const int last = count - 1;
      if (last > i) {
        memcpy(&pSettings[i], &pSettings[i + 1],
          sizeof(Settings) * static_cast<uint32_t>(last - i));
      }

      pSettings[last] = {};
      --*pCount;
      return Result();
    }
  }

  return Result();
}

template <typename Settings>
Result GetValidity(Settings* pSettings, int count, const account::Uid& uid,
  ChatTranscriptionFlagSet flags, bool* pOutIsValid) {
  if (pSettings == nullptr) {
    return ResultNullSettings;
  }

  Settings* pFound = Find(pSettings, count, uid);
  if (pFound == nullptr) {
    return ResultSettingsNotFound;
  }

  *pOutIsValid = (flags._storage[0] & ~pFound->flags._storage[0]) == 0;
  return Result();
}

template <typename Settings>
Result SetValidity(Settings* pSettings, int count, const account::Uid& uid,
  ChatTranscriptionFlagSet flags, bool isValid) {
  if (pSettings == nullptr) {
    return ResultNullSettings;
  }

  Settings* pFound = Find(pSettings, count, uid);
  if (pFound == nullptr) {
    return ResultSettingsNotFound;
  }

  if (isValid) {
    pFound->flags._storage[0] |= flags._storage[0];
  }
  else {
    pFound->flags._storage[0] &= ~flags._storage[0];
  }

  return Result();
}

template <typename Settings>
Result GetVoiceType(TextToSpeechVoiceTypeForChat* pOutVoiceType,
  Settings* pSettings, int count, const account::Uid& uid) {
  if (pSettings == nullptr) {
    return ResultNullSettings;
  }

  Settings* pFound = Find(pSettings, count, uid);
  if (pFound == nullptr) {
    return ResultSettingsNotFound;
  }

  *pOutVoiceType = pFound->textToSpeechVoiceType;
  return Result();
}

template <typename Settings>
Result SetVoiceType(Settings* pSettings, int count, const account::Uid& uid,
  TextToSpeechVoiceTypeForChat voiceType) {
  if (pSettings == nullptr) {
    return ResultNullSettings;
  }

  Settings* pFound = Find(pSettings, count, uid);
  if (pFound == nullptr) {
    return ResultSettingsNotFound;
  }

  pFound->textToSpeechVoiceType = voiceType;
  return Result();
}

template <typename Settings>
Result Exists(bool* pOutExists, Settings* pSettings, int count,
  const account::Uid& uid) {
  if (pSettings == nullptr) {
    return ResultNullSettings;
  }

  *pOutExists = Find(pSettings, count, uid) != nullptr;
  return Result();
}

// The kept entries are packed to the front and the rest of the full array
// is cleared.
template <typename Settings>
Result RemoveExcept(Settings* pSettings, int count, account::Uid* pUids,
  int uidCount, int* pOutCount) {
  if (pSettings == nullptr) {
    return ResultNullSettings;
  }

  if (count < 1 || count > ChatTranscriptionSettingsCountMax) {
    return ResultInvalidSettingsCount;
  }

  if (pUids == nullptr) {
    return ResultNullSettings;
  }

  if (uidCount < 0) {
    return ResultInvalidUidCount;
  }

  int keptCount = 0;
  for (int i = 0; i < count; ++i) {
    if (Find(pUids, uidCount, pSettings[i].uid) == nullptr) {
      continue;
    }

    if (keptCount != i) {
      pSettings[keptCount] = pSettings[i];
    }

    ++keptCount;
  }

  memset(&pSettings[keptCount], 0,
    sizeof(Settings) * (ChatTranscriptionSettingsCountMax - keptCount));
  *pOutCount = keptCount;
  return Result();
}

Result GetLanguageCode(LanguageCode* pOutLanguageCode,
  ChatTranscriptionSettingsEx* pSettings, int count, const account::Uid& uid,
  LanguageCode ChatTranscriptionSettingsEx::*pMember) {
  if (pOutLanguageCode == nullptr) {
    return ResultNullLanguageCode;
  }

  if (pSettings == nullptr) {
    return ResultNullSettings;
  }

  ChatTranscriptionSettingsEx* pFound = Find(pSettings, count, uid);
  if (pFound == nullptr) {
    return ResultSettingsNotFound;
  }

  *pOutLanguageCode = pFound->*pMember;
  return Result();
}

Result SetLanguageCode(ChatTranscriptionSettingsEx* pSettings, int count,
  const account::Uid& uid, const LanguageCode& languageCode,
  LanguageCode ChatTranscriptionSettingsEx::*pMember,
  Result unsupportedResult) {
  if (pSettings == nullptr) {
    return ResultNullSettings;
  }

  if (!IsSupportedChatLanguageCode(languageCode)) {
    return unsupportedResult;
  }

  ChatTranscriptionSettingsEx* pFound = Find(pSettings, count, uid);
  if (pFound == nullptr) {
    return ResultSettingsNotFound;
  }

  pFound->*pMember = languageCode;
  return Result();
}

}

Result AddChatTranscriptionSettings(ChatTranscriptionSettings* pSettings,
  int count, const ChatTranscriptionSettings& settings) {
  return Add(pSettings, count, settings);
}

Result AddChatTranscriptionSettings(ChatTranscriptionSettingsEx* pSettings,
  int count, const ChatTranscriptionSettingsEx& settings) {
  return Add(pSettings, count, settings);
}

Result RemoveChatTranscriptionSettings(ChatTranscriptionSettings* pSettings,
  int* pCount, const account::Uid& uid) {
  return Remove(pSettings, pCount, uid);
}

Result RemoveChatTranscriptionSettings(ChatTranscriptionSettingsEx* pSettings,
  int* pCount, const account::Uid& uid) {
  return Remove(pSettings, pCount, uid);
}

Result GetValidityChatTranscriptionSettings(
  ChatTranscriptionSettings* pSettings, int count, const account::Uid& uid,
  ChatTranscriptionFlagSet flags, bool* pOutIsValid) {
  return GetValidity(pSettings, count, uid, flags, pOutIsValid);
}

Result GetValidityChatTranscriptionSettings(
  ChatTranscriptionSettingsEx* pSettings, int count, const account::Uid& uid,
  ChatTranscriptionFlagSet flags, bool* pOutIsValid) {
  return GetValidity(pSettings, count, uid, flags, pOutIsValid);
}

Result SetValidityChatTranscriptionSettings(
  ChatTranscriptionSettings* pSettings, int count, const account::Uid& uid,
  ChatTranscriptionFlagSet flags, bool isValid) {
  return SetValidity(pSettings, count, uid, flags, isValid);
}

Result SetValidityChatTranscriptionSettings(
  ChatTranscriptionSettingsEx* pSettings, int count, const account::Uid& uid,
  ChatTranscriptionFlagSet flags, bool isValid) {
  return SetValidity(pSettings, count, uid, flags, isValid);
}

Result GetTextToSpeechVoiceTypeForChat(
  TextToSpeechVoiceTypeForChat* pOutVoiceType,
  ChatTranscriptionSettings* pSettings, int count, const account::Uid& uid) {
  return GetVoiceType(pOutVoiceType, pSettings, count, uid);
}

Result GetTextToSpeechVoiceTypeForChat(
  TextToSpeechVoiceTypeForChat* pOutVoiceType,
  ChatTranscriptionSettingsEx* pSettings, int count,
  const account::Uid& uid) {
  return GetVoiceType(pOutVoiceType, pSettings, count, uid);
}

Result SetTextToSpeechVoiceTypeForChat(ChatTranscriptionSettings* pSettings,
  int count, const account::Uid& uid, TextToSpeechVoiceTypeForChat voiceType) {
  return SetVoiceType(pSettings, count, uid, voiceType);
}

Result SetTextToSpeechVoiceTypeForChat(
  ChatTranscriptionSettingsEx* pSettings, int count, const account::Uid& uid,
  TextToSpeechVoiceTypeForChat voiceType) {
  return SetVoiceType(pSettings, count, uid, voiceType);
}

Result ExistsChatTranscriptionSettings(bool* pOutExists,
  ChatTranscriptionSettings* pSettings, int count, const account::Uid& uid) {
  return Exists(pOutExists, pSettings, count, uid);
}

Result ExistsChatTranscriptionSettings(bool* pOutExists,
  ChatTranscriptionSettingsEx* pSettings, int count,
  const account::Uid& uid) {
  return Exists(pOutExists, pSettings, count, uid);
}

Result GetTextToSpeechLanguageCode(LanguageCode* pOutLanguageCode,
  ChatTranscriptionSettingsEx* pSettings, int count,
  const account::Uid& uid) {
  return GetLanguageCode(pOutLanguageCode, pSettings, count, uid,
    &ChatTranscriptionSettingsEx::textToSpeechLanguageCode);
}

Result SetTextToSpeechLanguageCode(ChatTranscriptionSettingsEx* pSettings,
  int count, const account::Uid& uid, const LanguageCode& languageCode) {
  return SetLanguageCode(pSettings, count, uid, languageCode,
    &ChatTranscriptionSettingsEx::textToSpeechLanguageCode,
    ResultUnsupportedTextToSpeechLanguageCode);
}

Result GetSpeechToTextLanguageCode(LanguageCode* pOutLanguageCode,
  ChatTranscriptionSettingsEx* pSettings, int count,
  const account::Uid& uid) {
  return GetLanguageCode(pOutLanguageCode, pSettings, count, uid,
    &ChatTranscriptionSettingsEx::speechToTextLanguageCode);
}

Result SetSpeechToTextLanguageCode(ChatTranscriptionSettingsEx* pSettings,
  int count, const account::Uid& uid, const LanguageCode& languageCode) {
  return SetLanguageCode(pSettings, count, uid, languageCode,
    &ChatTranscriptionSettingsEx::speechToTextLanguageCode,
    ResultUnsupportedSpeechToTextLanguageCode);
}

Result RemoveChatTranscriptionSettingsExcept(
  ChatTranscriptionSettings* pSettings, int count, account::Uid* pUids,
  int uidCount, int* pOutCount) {
  return RemoveExcept(pSettings, count, pUids, uidCount, pOutCount);
}

Result RemoveChatTranscriptionSettingsExcept(
  ChatTranscriptionSettingsEx* pSettings, int count, account::Uid* pUids,
  int uidCount, int* pOutCount) {
  return RemoveExcept(pSettings, count, pUids, uidCount, pOutCount);
}

}
