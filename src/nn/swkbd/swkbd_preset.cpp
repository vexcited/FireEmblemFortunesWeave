#include "nn/swkbd/swkbd_api.hpp"

#include <string.h>

namespace nn::swkbd {

void MakePresetDefault(KeyboardConfig* pConfig) {
  memset(pConfig, 0, sizeof(*pConfig));
  pConfig->keyboardMode = KeyboardMode_ASCII;
  pConfig->rightOptionalSymbolKey = 0;
  pConfig->textMinLength = 0;
  pConfig->invalidCharFlag = 0;
  pConfig->initialCursorPos = 1;
  pConfig->inputFormMode = 1;
  pConfig->isUseNewLine = true;
  pConfig->isUseBlurBackground = true;
  for (int i = 0; i < 8; ++i) {
    pConfig->separateTextPos[i] = -1;
  }
}

void MakePresetPassword(KeyboardConfig* pConfig) {
  memset(pConfig, 0, sizeof(*pConfig));
  pConfig->keyboardMode = KeyboardMode_ASCII;
  pConfig->rightOptionalSymbolKey = 0;
  pConfig->textMinLength = 0;
  pConfig->isUseNewLine = false;
  pConfig->invalidCharFlag = 0;
  pConfig->initialCursorPos = 1;
  pConfig->passwordMode = 1;
  pConfig->isUseBlurBackground = true;
  for (int i = 0; i < 8; ++i) {
    pConfig->separateTextPos[i] = -1;
  }
}

void MakePresetUserName(KeyboardConfig* pConfig) {
  memset(pConfig, 0, sizeof(*pConfig));
  pConfig->isUseNewLine = false;
  pConfig->isUseUtf8 = false;
  pConfig->invalidCharFlag = 0x100;
  pConfig->initialCursorPos = 1;
  pConfig->isUseBlurBackground = true;
  pConfig->textMaxLength = 0;
  pConfig->textMinLength = 0;
  pConfig->passwordMode = 0;
  pConfig->inputFormMode = 0;
  for (int i = 0; i < 8; ++i) {
    pConfig->separateTextPos[i] = -1;
  }
}

void MakePresetDownloadCode(KeyboardConfig* pConfig) {
  memset(pConfig, 0, sizeof(*pConfig));
  pConfig->rightOptionalSymbolKey = 0;
  pConfig->keyboardMode = KeyboardMode_ASCII;
  pConfig->inputFormMode = 2;
  pConfig->invalidCharFlag = 0x80;
  pConfig->initialCursorPos = 1;
  pConfig->textMaxLength = 16;
  pConfig->textMinLength = 16;
  pConfig->isUseUtf8 = false;
  pConfig->isUseBlurBackground = true;
  pConfig->separateTextPos[0] = 3;
  pConfig->separateTextPos[1] = 7;
  pConfig->separateTextPos[2] = 11;
  for (int i = 3; i < 8; ++i) {
    pConfig->separateTextPos[i] = -1;
  }
}

}
