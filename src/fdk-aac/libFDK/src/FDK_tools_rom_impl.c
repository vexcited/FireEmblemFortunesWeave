#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _UNKNOWN* SdkData_e62a40;
extern _UNKNOWN* SdkData_e62a58;
extern _UNKNOWN* SdkData_e62a70;
extern _UNKNOWN* SdkData_e62a88;
extern _UNKNOWN* SdkData_e62aa0;
extern _UNKNOWN* SdkData_e62ab8;
extern _UNKNOWN* SdkData_e62ad0;
extern _UNKNOWN* SdkData_e62ae8;
extern _UNKNOWN* SdkData_e62b00;
extern _UNKNOWN* SdkData_e62b18;
extern _UNKNOWN* SdkData_e62b30;
extern _UNKNOWN* SdkData_e62b48;
extern _UNKNOWN* SdkData_e62b60;
extern _UNKNOWN* SdkData_e62b78;
extern _UNKNOWN* SdkData_e62b90;
_UNKNOWN** nn_codec_getBitstreamElementList(int a1, char a2, char a3);

_UNKNOWN** nn_codec_getBitstreamElementList(int a1, char a2, char a3)
{
  _UNKNOWN** result;
  _UNKNOWN** v5;
  _UNKNOWN** v6;
  _UNKNOWN** v7;
  _UNKNOWN** v8;
  _UNKNOWN** v9;

  result = nullptr;
  if (a1 > 28) {
    if ((unsigned int)(a1 - 143) < 3) {
      if (a3 == 1) {
        return &SdkData_e62b78;
      }
      else {
        return &SdkData_e62b90;
      }
    }
    if (a1 == 39) {
      if (a2 >= 1) {
        v9 = &SdkData_e62b60;
      }
      else {
        v9 = &SdkData_e62b48;
      }
      if (a3 == 1) {
        return &SdkData_e62b30;
      }
      else {
        return v9;
      }
    }
    if (a1 != 29) {
      return result;
    }
  LABEL_22:
    if (a3 == 1) {
      return &SdkData_e62a40;
    }
    else {
      return &SdkData_e62a58;
    }
  }
  if (a1 <= 16) {
    if (a1 != 2 && a1 != 5) {
      return result;
    }
    goto LABEL_22;
  }
  if (a1 == 17) {
  LABEL_6:
    v5 = &SdkData_e62ab8;
    if (a2 == 0) {
      v5 = &SdkData_e62aa0;
    }
    v6 = &SdkData_e62a88;
    if (a2 == 0) {
      v6 = &SdkData_e62a70;
    }
    if (a3 == 1) {
      return v6;
    }
    else {
      return v5;
    }
  }
  if (a1 != 20) {
    if (a1 != 23) {
      return result;
    }
    goto LABEL_6;
  }
  v7 = &SdkData_e62b18;
  v8 = &SdkData_e62ae8;
  if (a2 < 1) {
    v7 = &SdkData_e62b00;
    v8 = &SdkData_e62ad0;
  }
  if (a3 == 1) {
    return v8;
  }
  else {
    return v7;
  }
}

#pragma GCC visibility pop
