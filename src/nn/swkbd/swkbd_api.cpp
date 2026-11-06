#include "nn/swkbd/swkbd_api.hpp"

#include <string.h>

#include "nn/applet/applet_api.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/la/la_common_arguments.hpp"
#include "nn/util/utf.hpp"

namespace nn::applet {

Result CreateLargeStorage(StorageHandle* pOutStorage, void* pBuffer,
  size_t size, bool isWritable);
Result CreateTransferStorage(StorageHandle* pOutStorage, void* pBuffer,
  size_t size);

}

namespace nn::la {

void PushToInChannel(applet::LibraryAppletHandle handle, const void* pData,
  size_t size);

}

namespace nn::swkbd {

namespace {

constexpr int OkTextMaxLength = 8;
constexpr int HeaderTextMaxLength = 64;
constexpr int SubTextMaxLength = 128;
constexpr int GuideTextMaxLength = 256;
constexpr int InitialStringMaxLength = 500;
constexpr int UserWordMax = 5000;
constexpr int StringBufferSize = 2004;
constexpr int InitialStringOffset = 20;
constexpr int UserDictionaryOffset = 2024;
constexpr applet::AppletId AppletId_Swkbd = applet::AppletId(0x1020011);
constexpr uint32_t SwkbdLaVersion = 0x160012;
constexpr uint32_t ResultCanceledValue = 0x29f;

template <int MaxLength>
inline int GetTextLength(const char16_t* pText) {
  int length = 0;
  while (length <= MaxLength && pText[length] != 0) {
    ++length;
  }

  return length > MaxLength ? MaxLength : length;
}

template <int MaxLength>
inline void SetText(char16_t (&text)[MaxLength + 1], const char16_t* pText) {
  if (pText == nullptr) {
    text[0] = 0;
    return;
  }

  int length = GetTextLength<MaxLength>(pText);
  memcpy(text, pText, sizeof(char16_t) * length);
  text[length] = 0;
}

template <int MaxLength>
inline void SetTextUtf8(char16_t (&text)[MaxLength + 1], const char* pText) {
  if (pText == nullptr) {
    text[0] = 0;
    return;
  }

  int length = GetLengthOfConvertedStringUtf8ToUtf16(pText);
  ConvertUtf8ToUtf16(text, MaxLength + 1, pText);
  text[length] = 0;
}

}

void ConvertUtf8ToUtf16(void* pDst, int dstLength, const char* pSrc,
  int srcLength) {
  util::CharacterEncodingResult result = util::ConvertStringUtf8ToUtf16Native(
    static_cast<uint16_t*>(pDst), dstLength, pSrc, srcLength);
  NN_ABORT_UNLESS(result != util::CharacterEncodingResult_InvalidFormat);
  NN_ABORT_UNLESS(result != util::CharacterEncodingResult_InsufficientLength);
}

void ConvertUtf8ToUtf16(void* pDst, int dstLength, const char* pSrc) {
  util::CharacterEncodingResult result = util::ConvertStringUtf8ToUtf16Native(
    static_cast<uint16_t*>(pDst), dstLength, pSrc);
  NN_ABORT_UNLESS(result != util::CharacterEncodingResult_InvalidFormat);
  NN_ABORT_UNLESS(result != util::CharacterEncodingResult_InsufficientLength);
}

int GetLengthOfConvertedStringUtf8ToUtf16(const char* pSrc) {
  int length = 0;
  util::CharacterEncodingResult result =
    util::GetLengthOfConvertedStringUtf8ToUtf16Native(&length, pSrc,
      static_cast<int>(strlen(pSrc)));
  NN_ABORT_UNLESS(result != util::CharacterEncodingResult_InvalidFormat);
  return length;
}

void GetInteractiveOutStorageCallback(applet::LibraryAppletHandle handle,
  String* pOutString, const ShowKeyboardArg& arg) {
  applet::StorageHandle storage = {};
  if (!applet::TryPopFromInteractiveOutChannel(&storage, handle)) {
    return;
  }

  size_t stringSize = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    applet::ReadFromStorage(storage, 0, &stringSize, sizeof(stringSize)));
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    applet::ReadFromStorage(storage, sizeof(stringSize), pOutString->ptr,
      stringSize));
  applet::ReleaseStorage(storage);

  size_t dialogTextLength = 0;
  TextCheckResult checkResult = TextCheckResult_Success;
  const KeyboardConfig& config = arg.keyboardConfig;
  if (config._isUseTextCheck == true &&
    (config._textCheckCallback != nullptr ||
      config._textCheckCallbackWithUserData != nullptr)) {
    size_t bufSize = pOutString->bufSize;
    pOutString->bufSize = stringSize;
    if (config._textCheckCallbackWithUserData != nullptr) {
      checkResult = config._textCheckCallbackWithUserData(
        arg._textCheckWorkBuf, &dialogTextLength, *pOutString,
        config._textCheckUserData);
    }
    else {
      checkResult = config._textCheckCallback(arg._textCheckWorkBuf,
        &dialogTextLength, pOutString);
    }

    pOutString->bufSize = bufSize;
  }

  NN_ABORT_UNLESS_RESULT_SUCCESS(applet::CreateStorage(&storage,
    sizeof(checkResult) + StringBufferSize));
  NN_ABORT_UNLESS_RESULT_SUCCESS(applet::WriteToStorage(storage, 0,
    &checkResult, sizeof(checkResult)));
  NN_ABORT_UNLESS_RESULT_SUCCESS(applet::WriteToStorage(storage,
    sizeof(checkResult), arg._textCheckWorkBuf, StringBufferSize));
  applet::PushToInteractiveInChannel(handle, storage);
}

size_t GetRequiredTextCheckWorkBufferSize() {
  return StringBufferSize;
}

void ReadCloseResultAndString(applet::LibraryAppletHandle handle,
  CloseResult* pOutResult, String* pOutString) {
  applet::StorageHandle storage = {};
  if (!applet::TryPopFromOutChannel(&storage, handle)) {
    return;
  }

  NN_ABORT_UNLESS_RESULT_SUCCESS(
    applet::ReadFromStorage(storage, 0, pOutResult, sizeof(*pOutResult)));
  if (pOutString->ptr != nullptr && pOutString->bufSize != 0) {
    NN_ABORT_UNLESS_RESULT_SUCCESS(
      applet::ReadFromStorage(storage, sizeof(*pOutResult), pOutString->ptr,
        pOutString->bufSize));
  }

  applet::ReleaseStorage(storage);
}

void CopyInitialStringInfo(ShowKeyboardArg* pArg, int length) {
  pArg->keyboardConfig._initialStringLength = length;
  if (static_cast<uint32_t>(length) <= InitialStringMaxLength) {
    pArg->keyboardConfig._initialStringOffset = InitialStringOffset;
  }
}

size_t GetRequiredWorkBufferSize(int userWordCount) {
  if (static_cast<uint32_t>(userWordCount) > UserWordMax) {
    return 0;
  }

  uint32_t size = StringBufferSize + sizeof(UserWord) * userWordCount;
  return (size + 0xfff) & ~0xfffu;
}

void CopyUserDictionaryInfo(ShowKeyboardArg* pArg, int count) {
  pArg->keyboardConfig._userDictionaryNum = count;
  if (pArg->workBuf != nullptr &&
    pArg->workBufSize >= GetRequiredWorkBufferSize(count)) {
    pArg->keyboardConfig._userDictionaryOffset = UserDictionaryOffset;
  }
}

void keyboardConfig2kbdConfig(const KeyboardConfig& config,
  KbdConfigForGen2* pOut) {
  pOut->keyboardMode = config.keyboardMode;
  pOut->leftOptionalSymbolKey = config.leftOptionalSymbolKey;
  pOut->rightOptionalSymbolKey = config.rightOptionalSymbolKey;
  pOut->isPredictionEnabled = config.isPredictionEnabled;
  pOut->invalidCharFlag = config.invalidCharFlag;
  pOut->initialCursorPos = config.initialCursorPos;
  pOut->textMaxLength = config.textMaxLength;
  pOut->textMinLength = config.textMinLength;
  pOut->passwordMode = config.passwordMode;
  pOut->inputFormMode = config.inputFormMode;
  pOut->isUseNewLine = config.isUseNewLine;
  pOut->isUseUtf8 = config.isUseUtf8;
  pOut->isUseBlurBackground = config.isUseBlurBackground;
  pOut->initialStringOffset = config._initialStringOffset;
  pOut->initialStringLength = config._initialStringLength;
  pOut->userDictionaryOffset = config._userDictionaryOffset;
  pOut->userDictionaryNum = config._userDictionaryNum;
  pOut->isUseTextCheck = config._isUseTextCheck;
  pOut->customizedDicCount = config._customizedDicCount;
  pOut->isCancelButtonDisabled = config.isCancelButtonDisabled;
  pOut->isTriggerEnabled = config.isTriggerEnabled;
  pOut->isSoundEnabled = config.isSoundEnabled;
  memcpy(pOut->okText, config.okText, sizeof(pOut->okText));
  memcpy(pOut->headerText, config.headerText, sizeof(pOut->headerText));
  memcpy(pOut->subText, config.subText, sizeof(pOut->subText));
  memcpy(pOut->guideText, config.guideText, sizeof(pOut->guideText));
  memset(pOut->reserved, 0, sizeof(pOut->reserved));
  for (int i = 0; i < 8; ++i) {
    pOut->separateTextPos[i] = config.separateTextPos[i];
  }

  for (int i = 0; i < 24; ++i) {
    pOut->customizedDicInfoList[i] = config._customizedDicInfoList[i];
  }
}

Result ShowKeyboard(String* pOutString, const ShowKeyboardArg& arg,
  Trigger trigger) {
  la::CommonArgumentsWriter writer(SwkbdLaVersion);
  applet::LibraryAppletHandle handle = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(applet::CreateLibraryApplet(&handle,
    AppletId_Swkbd, applet::LibraryAppletMode(0)));
  writer.PushToInChannel(handle);

  KbdConfigForGen2 kbdConfig;
  keyboardConfig2kbdConfig(arg.keyboardConfig, &kbdConfig);
  kbdConfig.trigger = trigger;
  la::PushToInChannel(handle, &kbdConfig, sizeof(kbdConfig));

  applet::StorageHandle workStorage = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(applet::CreateLargeStorage(&workStorage,
    arg.workBuf, arg.workBufSize, true));
  applet::PushToInChannel(handle, workStorage);

  if (arg._customizedDictionaryWorkBuf != nullptr &&
    arg._customizedDictionaryWorkBufSize != 0) {
    if (kbdConfig.customizedDicCount != 0) {
      applet::StorageHandle dictionaryStorage = {};
      NN_ABORT_UNLESS_RESULT_SUCCESS(applet::CreateTransferStorage(
        &dictionaryStorage, arg._customizedDictionaryWorkBuf,
        arg._customizedDictionaryWorkBufSize));
      applet::PushToInChannel(handle, dictionaryStorage);
    }
  }
  else {
    kbdConfig.customizedDicCount = 0;
  }

  bool isInteractive = true;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    applet::StartLibraryApplet(handle, &isInteractive));
  while (applet::WaitPopFromInteractiveOutChannelEvent(handle)) {
    GetInteractiveOutStorageCallback(handle, pOutString, arg);
  }

  applet::JoinLibraryApplet(handle);
  switch (applet::GetLibraryAppletExitReason(handle)) {
    case applet::LibraryAppletExitReason_Canceled:
      applet::CloseLibraryApplet(handle);
      return Result{ResultCanceledValue};
    case applet::LibraryAppletExitReason_Unexpected:
      diag::detail::AbortImpl();
    case applet::LibraryAppletExitReason_Abnormal:
      diag::detail::AbortImpl();
    default:
      break;
  }

  CloseResult closeResult = CloseResult_Cancel;
  ReadCloseResultAndString(handle, &closeResult, pOutString);
  applet::CloseLibraryApplet(handle);
  return Result{closeResult != CloseResult_Enter ? ResultCanceledValue : 0};
}

Result ShowKeyboard(String* pOutString, const ShowKeyboardArg& arg) {
  return ShowKeyboard(pOutString, arg, Trigger(0));
}

void InitializeKeyboardConfig(KeyboardConfig* pConfig) {
  pConfig->_textCheckCallback = nullptr;
  pConfig->_initialStringOffset = 0;
  pConfig->_initialStringLength = 0;
  pConfig->_userDictionaryOffset = 0;
  pConfig->_userDictionaryNum = 0;
  pConfig->_isUseTextCheck = false;
  pConfig->_textCheckCallbackWithUserData = nullptr;
  pConfig->_textCheckUserData = nullptr;
  pConfig->isTriggerEnabled = false;
  pConfig->isSoundEnabled = true;
}

void MakePreset(KeyboardConfig* pConfig, Preset preset) {
  switch (preset) {
    case Preset_Default:
      MakePresetDefault(pConfig);
      break;
    case Preset_Password:
      MakePresetPassword(pConfig);
      break;
    case Preset_UserName:
      MakePresetUserName(pConfig);
      break;
    case Preset_DownloadCode:
      MakePresetDownloadCode(pConfig);
      break;
    default:
      diag::detail::AbortImpl();
  }

  memset(pConfig->okText, 0, sizeof(char16_t) * OkTextMaxLength);
  memset(pConfig->headerText, 0, sizeof(char16_t) * HeaderTextMaxLength);
  memset(pConfig->subText, 0, sizeof(char16_t) * SubTextMaxLength);
  memset(pConfig->guideText, 0, sizeof(char16_t) * GuideTextMaxLength);
  InitializeKeyboardConfig(pConfig);
}

size_t GetRequiredWorkBufferSize(bool isUseDictionary) {
  return isUseDictionary ? 0xd000 : 0x1000;
}

size_t GetRequiredStringBufferSize() {
  return StringBufferSize;
}

void SetOkText(KeyboardConfig* pConfig, const char16_t* pText) {
  if (pText == nullptr) {
    pConfig->okText[0] = 0;
    return;
  }

  int length = 0;
  while (length < OkTextMaxLength && pText[length] != 0) {
    ++length;
  }

  memcpy(pConfig->okText, pText, sizeof(char16_t) * length);
  pConfig->okText[length] = 0;
}

void SetOkTextUtf8(KeyboardConfig* pConfig, const char* pText) {
  SetTextUtf8<OkTextMaxLength>(pConfig->okText, pText);
}

void SetLeftOptionalSymbolKey(KeyboardConfig* pConfig, char16_t key) {
  pConfig->leftOptionalSymbolKey = key;
}

void SetLeftOptionalSymbolKeyUtf8(KeyboardConfig* pConfig, const char* pKey) {
  ConvertUtf8ToUtf16(&pConfig->leftOptionalSymbolKey, 1, pKey,
    static_cast<int>(strlen(pKey)));
}

void SetRightOptionalSymbolKey(KeyboardConfig* pConfig, char16_t key) {
  pConfig->rightOptionalSymbolKey = key;
}

void SetRightOptionalSymbolKeyUtf8(KeyboardConfig* pConfig,
  const char* pKey) {
  ConvertUtf8ToUtf16(&pConfig->rightOptionalSymbolKey, 1, pKey,
    static_cast<int>(strlen(pKey)));
}

void SetHeaderText(KeyboardConfig* pConfig, const char16_t* pText) {
  SetText<HeaderTextMaxLength>(pConfig->headerText, pText);
}

void SetHeaderTextUtf8(KeyboardConfig* pConfig, const char* pText) {
  SetTextUtf8<HeaderTextMaxLength>(pConfig->headerText, pText);
}

void SetSubText(KeyboardConfig* pConfig, const char16_t* pText) {
  SetText<SubTextMaxLength>(pConfig->subText, pText);
}

void SetSubTextUtf8(KeyboardConfig* pConfig, const char* pText) {
  SetTextUtf8<SubTextMaxLength>(pConfig->subText, pText);
}

void SetGuideText(KeyboardConfig* pConfig, const char16_t* pText) {
  SetText<GuideTextMaxLength>(pConfig->guideText, pText);
}

void SetGuideTextUtf8(KeyboardConfig* pConfig, const char* pText) {
  SetTextUtf8<GuideTextMaxLength>(pConfig->guideText, pText);
}

void SetInitialText(ShowKeyboardArg* pArg, const char16_t* pText) {
  if (pText == nullptr) {
    pArg->keyboardConfig._initialStringLength = 0;
    return;
  }

  int length = 0;
  while (length < InitialStringMaxLength && pText[length] != 0) {
    ++length;
  }

  CopyInitialStringInfo(pArg, length);
  memcpy(static_cast<uint8_t*>(pArg->workBuf) +
    pArg->keyboardConfig._initialStringOffset, pText,
    sizeof(char16_t) * length);
}

void SetInitialTextUtf8(ShowKeyboardArg* pArg, const char* pText) {
  if (pText == nullptr) {
    pArg->keyboardConfig._initialStringLength = 0;
    return;
  }

  CopyInitialStringInfo(pArg, GetLengthOfConvertedStringUtf8ToUtf16(pText));
  ConvertUtf8ToUtf16(static_cast<uint8_t*>(pArg->workBuf) +
    pArg->keyboardConfig._initialStringOffset, InitialStringMaxLength + 1,
    pText);
}

void SetUserWordList(ShowKeyboardArg* pArg, const UserWord* pList,
  int count) {
  if (pList == nullptr || count <= 0) {
    pArg->keyboardConfig._userDictionaryNum = 0;
    return;
  }

  CopyUserDictionaryInfo(pArg, count);
  memcpy(static_cast<uint8_t*>(pArg->workBuf) +
    pArg->keyboardConfig._userDictionaryOffset, pList,
    sizeof(UserWord) * count);
}

void SetCustomizedDictionaries(ShowKeyboardArg* pArg,
  const CustomizedDictionarySet& set) {
  pArg->_customizedDictionaryWorkBuf = set.pBuffer;
  pArg->_customizedDictionaryWorkBufSize = set.bufferSize;
  pArg->keyboardConfig._customizedDicCount =
    static_cast<uint8_t>(set.dictionaryCount);
  for (int i = 0; i < set.dictionaryCount; ++i) {
    pArg->keyboardConfig._customizedDicInfoList[i] = set.dictionaryInfo[i];
  }
}

void SetTextCheckCallback(ShowKeyboardArg* pArg,
  TextCheckCallback callback) {
  if (callback == nullptr) {
    pArg->keyboardConfig._isUseTextCheck = false;
    return;
  }

  pArg->keyboardConfig._textCheckCallback = callback;
  pArg->keyboardConfig._isUseTextCheck = true;
}

void SetTextCheckCallback(ShowKeyboardArg* pArg,
  TextCheckCallbackWithUserData callback, void* pUserData) {
  if (callback == nullptr) {
    pArg->keyboardConfig._isUseTextCheck = false;
    return;
  }

  pArg->keyboardConfig._textCheckCallbackWithUserData = callback;
  pArg->keyboardConfig._textCheckUserData = pUserData;
  pArg->keyboardConfig._isUseTextCheck = true;
}

}
