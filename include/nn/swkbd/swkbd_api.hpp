#pragma once

#include <stddef.h>
#include <stdint.h>
#include <uchar.h>

#include "nn/applet/applet_types.hpp"
#include "nn/result.hpp"
#include "nn/swkbd/swkbd_types.hpp"

namespace nn::swkbd {

void ConvertUtf8ToUtf16(void* pDst, int dstLength, const char* pSrc,
  int srcLength);
void ConvertUtf8ToUtf16(void* pDst, int dstLength, const char* pSrc);
int GetLengthOfConvertedStringUtf8ToUtf16(const char* pSrc);

void MakePresetDefault(KeyboardConfig* pConfig);
void MakePresetPassword(KeyboardConfig* pConfig);
void MakePresetUserName(KeyboardConfig* pConfig);
void MakePresetDownloadCode(KeyboardConfig* pConfig);
void MakePreset(KeyboardConfig* pConfig, Preset preset);
void InitializeKeyboardConfig(KeyboardConfig* pConfig);

void GetInteractiveOutStorageCallback(applet::LibraryAppletHandle handle,
  String* pOutString, const ShowKeyboardArg& arg);
void ReadCloseResultAndString(applet::LibraryAppletHandle handle,
  CloseResult* pOutResult, String* pOutString);
void CopyInitialStringInfo(ShowKeyboardArg* pArg, int length);
void CopyUserDictionaryInfo(ShowKeyboardArg* pArg, int count);
void keyboardConfig2kbdConfig(const KeyboardConfig& config,
  KbdConfigForGen2* pOut);

size_t GetRequiredTextCheckWorkBufferSize();
size_t GetRequiredWorkBufferSize(int userWordCount);
size_t GetRequiredWorkBufferSize(bool isUseDictionary);
size_t GetRequiredStringBufferSize();

Result ShowKeyboard(String* pOutString, const ShowKeyboardArg& arg,
  Trigger trigger);
Result ShowKeyboard(String* pOutString, const ShowKeyboardArg& arg);

void SetOkText(KeyboardConfig* pConfig, const char16_t* pText);
void SetOkTextUtf8(KeyboardConfig* pConfig, const char* pText);
void SetLeftOptionalSymbolKey(KeyboardConfig* pConfig, char16_t key);
void SetLeftOptionalSymbolKeyUtf8(KeyboardConfig* pConfig, const char* pKey);
void SetRightOptionalSymbolKey(KeyboardConfig* pConfig, char16_t key);
void SetRightOptionalSymbolKeyUtf8(KeyboardConfig* pConfig,
  const char* pKey);
void SetHeaderText(KeyboardConfig* pConfig, const char16_t* pText);
void SetHeaderTextUtf8(KeyboardConfig* pConfig, const char* pText);
void SetSubText(KeyboardConfig* pConfig, const char16_t* pText);
void SetSubTextUtf8(KeyboardConfig* pConfig, const char* pText);
void SetGuideText(KeyboardConfig* pConfig, const char16_t* pText);
void SetGuideTextUtf8(KeyboardConfig* pConfig, const char* pText);
void SetInitialText(ShowKeyboardArg* pArg, const char16_t* pText);
void SetInitialTextUtf8(ShowKeyboardArg* pArg, const char* pText);
void SetUserWordList(ShowKeyboardArg* pArg, const UserWord* pList,
  int count);
void SetCustomizedDictionaries(ShowKeyboardArg* pArg,
  const CustomizedDictionarySet& set);
void SetTextCheckCallback(ShowKeyboardArg* pArg,
  TextCheckCallback callback);
void SetTextCheckCallback(ShowKeyboardArg* pArg,
  TextCheckCallbackWithUserData callback, void* pUserData);

}
