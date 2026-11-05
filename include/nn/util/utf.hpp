#pragma once

#include <uchar.h>
#include <stdint.h>

namespace nn::util {

enum CharacterEncodingResult {
  CharacterEncodingResult_Success,
  CharacterEncodingResult_InsufficientLength,
  CharacterEncodingResult_InvalidFormat,
};

CharacterEncodingResult ConvertStringUtf8ToUtf16Native(uint16_t* dst,
  int dstLength, const char* src, int srcLength);
CharacterEncodingResult ConvertStringUtf8ToUtf16Native(uint16_t* dst,
  int dstLength, const char* src);
CharacterEncodingResult ConvertStringUtf16NativeToUtf8(char* dst,
  int dstLength, const uint16_t* src, int srcLength);
CharacterEncodingResult ConvertStringUtf16NativeToUtf8(char* dst,
  int dstLength, const uint16_t* src);
CharacterEncodingResult GetLengthOfConvertedStringUtf16NativeToUtf8(
  int* pOutLength, const uint16_t* src, int srcLength);
CharacterEncodingResult GetLengthOfConvertedStringUtf16NativeToUtf8(
  int* pOutLength, const uint16_t* src);
CharacterEncodingResult ConvertStringUtf8ToUtf16Native(char16_t* dst,
  int dstLength, const char* src, int srcLength);
CharacterEncodingResult ConvertStringUtf8ToUtf16Native(char16_t* dst,
  int dstLength, const char* src);
CharacterEncodingResult ConvertStringUtf16NativeToUtf8(char* dst,
  int dstLength, const char16_t* src, int srcLength);
CharacterEncodingResult ConvertStringUtf16NativeToUtf8(char* dst,
  int dstLength, const char16_t* src);
CharacterEncodingResult GetLengthOfConvertedStringUtf16NativeToUtf8(
  int* pOutLength, const char16_t* src, int srcLength);
CharacterEncodingResult GetLengthOfConvertedStringUtf16NativeToUtf8(
  int* pOutLength, const char16_t* src);
CharacterEncodingResult ConvertStringUtf8ToUtf32(uint32_t* dst,
  int dstLength, const char* src, int srcLength);
CharacterEncodingResult ConvertStringUtf8ToUtf32(uint32_t* dst,
  int dstLength, const char* src);
CharacterEncodingResult ConvertStringUtf32ToUtf8(char* dst, int dstLength,
  const uint32_t* src, int srcLength);
CharacterEncodingResult ConvertStringUtf32ToUtf8(char* dst, int dstLength,
  const uint32_t* src);
CharacterEncodingResult GetLengthOfConvertedStringUtf32ToUtf8(
  int* pOutLength, const uint32_t* src, int srcLength);
CharacterEncodingResult GetLengthOfConvertedStringUtf32ToUtf8(
  int* pOutLength, const uint32_t* src);
CharacterEncodingResult ConvertStringUtf8ToUtf32(char32_t* dst,
  int dstLength, const char* src, int srcLength);
CharacterEncodingResult ConvertStringUtf8ToUtf32(char32_t* dst,
  int dstLength, const char* src);
CharacterEncodingResult ConvertStringUtf32ToUtf8(char* dst, int dstLength,
  const char32_t* src, int srcLength);
CharacterEncodingResult ConvertStringUtf32ToUtf8(char* dst, int dstLength,
  const char32_t* src);
CharacterEncodingResult GetLengthOfConvertedStringUtf32ToUtf8(
  int* pOutLength, const char32_t* src, int srcLength);
CharacterEncodingResult GetLengthOfConvertedStringUtf32ToUtf8(
  int* pOutLength, const char32_t* src);
CharacterEncodingResult GetLengthOfConvertedStringUtf8ToUtf16Native(
  int* pOutLength, const char* src, int srcLength);
CharacterEncodingResult GetLengthOfConvertedStringUtf8ToUtf16Native(
  int* pOutLength, const char* src);
CharacterEncodingResult GetLengthOfConvertedStringUtf8ToUtf32(
  int* pOutLength, const char* src, int srcLength);
CharacterEncodingResult GetLengthOfConvertedStringUtf8ToUtf32(
  int* pOutLength, const char* src);
CharacterEncodingResult PickOutCharacterFromUtf8String(char* pOutChar,
  const char** pStr);
CharacterEncodingResult ConvertCharacterUtf8ToUtf32(uint32_t* pDst,
  const char* pSrc);
CharacterEncodingResult ConvertCharacterUtf8ToUtf32(char32_t* pDst,
  const char* pSrc);
CharacterEncodingResult ConvertCharacterUtf32ToUtf8(char* pDst,
  uint32_t src);
CharacterEncodingResult ConvertCharacterUtf32ToUtf8(char* pDst,
  char32_t src);
CharacterEncodingResult ConvertCharacterUtf8ToUtf16Native(uint16_t* pDst,
  const char* pSrc);
CharacterEncodingResult ConvertCharacterUtf8ToUtf16Native(char16_t* pDst,
  const char* pSrc);
CharacterEncodingResult ConvertCharacterUtf16NativeToUtf8(char* pDst,
  const uint16_t* pSrc);
CharacterEncodingResult ConvertCharacterUtf16NativeToUtf8(char* pDst,
  const char16_t* pSrc);

}
