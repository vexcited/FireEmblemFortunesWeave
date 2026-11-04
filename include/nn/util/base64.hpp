#pragma once

#include <stddef.h>

namespace nn::util {

class Base64 {
public:
  enum Mode {
    Mode_Normal,
    Mode_NormalNoLinefeed,
    Mode_UrlSafe,
  };

  enum Status {
    Status_Success,
    Status_BufferFull,
    Status_BadData,
  };

  static Status ToBase64String(char* dst, size_t dstSize, const void* src,
    size_t srcSize, Mode mode);
  static Status FromBase64String(size_t* pOutSize, void* dst, size_t dstSize,
    const char* src, Mode mode);
  static Status FromBase64String(size_t* pOutSize, void* dst, size_t dstSize,
    const char* src, size_t srcLength, Mode mode);
};

}
