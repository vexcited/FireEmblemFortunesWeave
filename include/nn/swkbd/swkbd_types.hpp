#pragma once

#include <stddef.h>
#include <stdint.h>
#include <uchar.h>

namespace nn::swkbd {

enum Preset : int32_t {
  Preset_Default,
  Preset_Password,
  Preset_UserName,
  Preset_DownloadCode,
};

enum KeyboardMode : int32_t {
  KeyboardMode_LanguageSet1,
  KeyboardMode_Numeric,
  KeyboardMode_ASCII,
};

enum TextCheckResult : int32_t {
  TextCheckResult_Success = 1,
};

enum CloseResult : int32_t {
  CloseResult_Enter,
  CloseResult_Cancel,
};

enum Trigger : uint8_t {};

struct String {
  void* ptr;
  size_t bufSize;
};

struct UserWord {
  char data[100];
};

struct alignas(4) DictionaryInfo {
  uint8_t data[8];
};

struct CustomizedDictionarySet {
  void* pBuffer;
  uint32_t bufferSize;
  DictionaryInfo dictionaryInfo[24];
  uint16_t dictionaryCount;
};

using TextCheckCallback = TextCheckResult (*)(void* pOutDialogText,
  size_t* pOutDialogTextLength, String* pString);
using TextCheckCallbackWithUserData = TextCheckResult (*)(
  void* pOutDialogText, size_t* pOutDialogTextLength, const String& string,
  void* pUserData);

struct KeyboardConfig {
  KeyboardMode keyboardMode;
  char16_t okText[9];
  char16_t leftOptionalSymbolKey;
  char16_t rightOptionalSymbolKey;
  bool isPredictionEnabled;
  uint32_t invalidCharFlag;
  int32_t initialCursorPos;
  char16_t headerText[65];
  char16_t subText[129];
  char16_t guideText[257];
  int32_t textMaxLength;
  int32_t textMinLength;
  int32_t passwordMode;
  int32_t inputFormMode;
  bool isUseNewLine;
  bool isUseUtf8;
  bool isUseBlurBackground;
  int32_t _initialStringOffset;
  int32_t _initialStringLength;
  int32_t _userDictionaryOffset;
  int32_t _userDictionaryNum;
  bool _isUseTextCheck;
  TextCheckCallback _textCheckCallback;
  int32_t separateTextPos[8];
  DictionaryInfo _customizedDicInfoList[24];
  uint8_t _customizedDicCount;
  bool isCancelButtonDisabled;
  TextCheckCallbackWithUserData _textCheckCallbackWithUserData;
  void* _textCheckUserData;
  bool isTriggerEnabled;
  bool isSoundEnabled;
  uint8_t _reserved[62];
};

static_assert(sizeof(KeyboardConfig) == 1304);

struct ShowKeyboardArg {
  KeyboardConfig keyboardConfig;
  void* workBuf;
  size_t workBufSize;
  void* _textCheckWorkBuf;
  size_t _textCheckWorkBufSize;
  void* _customizedDictionaryWorkBuf;
  size_t _customizedDictionaryWorkBufSize;
};

static_assert(sizeof(ShowKeyboardArg) == 1352);

struct KbdConfigForGen2 {
  KeyboardMode keyboardMode;
  char16_t okText[9];
  char16_t leftOptionalSymbolKey;
  char16_t rightOptionalSymbolKey;
  bool isPredictionEnabled;
  bool isUseNewLine;
  uint32_t invalidCharFlag;
  int32_t initialCursorPos;
  char16_t headerText[65];
  char16_t subText[129];
  char16_t guideText[257];
  bool isUseUtf8;
  bool isUseBlurBackground;
  int32_t textMaxLength;
  int32_t textMinLength;
  int32_t passwordMode;
  int32_t inputFormMode;
  int32_t initialStringOffset;
  int32_t initialStringLength;
  int32_t userDictionaryOffset;
  int32_t userDictionaryNum;
  DictionaryInfo customizedDicInfoList[24];
  uint8_t customizedDicCount;
  bool isUseTextCheck;
  bool isCancelButtonDisabled;
  Trigger trigger;
  int32_t separateTextPos[8];
  bool isTriggerEnabled;
  bool isSoundEnabled;
  uint8_t reserved[126];
};

static_assert(sizeof(KbdConfigForGen2) == 1328);

}
