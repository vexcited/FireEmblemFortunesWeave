#include <string.h>

#include "nn/diag/diag_abort.hpp"
#include "nn/diag/unexpected_default.hpp"
#include "nn/image/detail/image_png_util.hpp"

namespace nn::image {

namespace {

enum PngColorType {
  PngColorType_Gray = 0,
  PngColorType_Rgb = 2,
  PngColorType_Palette = 3,
  PngColorType_GrayAlpha = 4,
  PngColorType_Rgba = 6,
};

}

int GetBitDepth(PixelFormat format) {
  switch (format) {
    case PixelFormat_Invalid:
      return 0;
    case PixelFormat_Palette1:
    case PixelFormat_Gray1:
      return 1;
    case PixelFormat_Palette2:
    case PixelFormat_Gray2:
      return 2;
    case PixelFormat_Palette4:
    case PixelFormat_Gray4:
      return 4;
    case PixelFormat_Palette8:
    case PixelFormat_Gray8:
    case PixelFormat_Rgb8:
    case PixelFormat_GrayAlpha8:
    case PixelFormat_Rgba8:
      return 8;
    case PixelFormat_Gray16:
    case PixelFormat_Rgb16:
    case PixelFormat_GrayAlpha16:
    case PixelFormat_Rgba16:
      return 16;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

int GetChannelCount(PixelFormat format) {
  switch (format) {
    case PixelFormat_Invalid:
      return 0;
    case PixelFormat_Palette1:
    case PixelFormat_Palette2:
    case PixelFormat_Palette4:
    case PixelFormat_Palette8:
    case PixelFormat_Gray1:
    case PixelFormat_Gray2:
    case PixelFormat_Gray4:
    case PixelFormat_Gray8:
    case PixelFormat_Gray16:
      return 1;
    case PixelFormat_GrayAlpha8:
    case PixelFormat_GrayAlpha16:
      return 2;
    case PixelFormat_Rgb8:
    case PixelFormat_Rgb16:
      return 3;
    case PixelFormat_Rgba8:
    case PixelFormat_Rgba16:
      return 4;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

namespace detail {

PngMemoryAllocator::PngMemoryAllocator()
  : m_Allocate(nullptr), m_pAllocateArgument(nullptr), m_Free(nullptr),
    m_pFreeArgument(nullptr), m_IsInitialized(false) {}

PngMemoryAllocator::~PngMemoryAllocator() {
  m_IsInitialized = false;
  m_Allocate = nullptr;
  m_pAllocateArgument = nullptr;
  m_Free = nullptr;
  m_pFreeArgument = nullptr;
}

void PngMemoryAllocator::Initialize(AllocateFunction allocate,
  void* pAllocateArgument, FreeFunction free, void* pFreeArgument) {
  NN_ABORT_UNLESS(!m_IsInitialized);
  m_Allocate = allocate;
  m_pAllocateArgument = pAllocateArgument;
  m_Free = free;
  m_pFreeArgument = pFreeArgument;
  m_IsInitialized = true;
}

void PngMemoryAllocator::Finalize() {
  m_IsInitialized = false;
  m_Allocate = nullptr;
  m_pAllocateArgument = nullptr;
  m_Free = nullptr;
  m_pFreeArgument = nullptr;
}

void* PngMemoryAllocator::Allocate(size_t size) {
  NN_ABORT_UNLESS(m_IsInitialized);
  return m_Allocate(size, m_pAllocateArgument);
}

void PngMemoryAllocator::Free(void* pointer) {
  NN_ABORT_UNLESS(m_IsInitialized);
  m_Free(pointer, m_pFreeArgument);
}

PngStreamAccessor::PngStreamAccessor()
  : m_Size(0), m_Offset(0), m_IsInitialized(false) {}

PngStreamAccessor::~PngStreamAccessor() {
  m_IsInitialized = false;
  m_Size = 0;
  m_Offset = 0;
}

void PngStreamAccessor::Finalize() {
  m_IsInitialized = false;
  m_Size = 0;
  m_Offset = 0;
}

size_t PngStreamAccessor::GetOffset() {
  return m_Offset;
}

void PngStreamReader::Initialize(const void* pData, size_t size) {
  NN_ABORT_UNLESS(!m_IsInitialized);
  m_pData = static_cast<const uint8_t*>(pData);
  m_Size = size;
  m_Offset = 0;
  m_IsInitialized = true;
}

bool PngStreamReader::Read(void* pOutData, size_t size) {
  NN_ABORT_UNLESS(m_IsInitialized);
  size_t end = m_Offset + size;
  if (end <= m_Size) {
    memcpy(pOutData, m_pData + m_Offset, size);
    m_Offset += size;
  }
  return end <= m_Size;
}

void PngStreamWriter::Initialize(void* pBuffer, size_t size) {
  NN_ABORT_UNLESS(!m_IsInitialized);
  m_pBuffer = static_cast<uint8_t*>(pBuffer);
  m_Size = size;
  m_Offset = 0;
  m_IsInitialized = true;
}

bool PngStreamWriter::Write(const void* pData, size_t size) {
  NN_ABORT_UNLESS(m_IsInitialized);
  size_t end = m_Offset + size;
  if (end <= m_Size) {
    memcpy(m_pBuffer + m_Offset, pData, size);
    m_Offset += size;
  }
  return end <= m_Size;
}

void PngWarningCallback(png_struct_def* pPng, const char* pMessage) {}

void PngErrorCallback(png_struct_def* pPng, const char* pMessage) {
  PngStatus* pStatus =
    static_cast<PngStatus*>(nndetailImagePng_png_get_error_ptr(pPng));
  if (strcmp("Out of Memory", pMessage) == 0) {
    *pStatus = PngStatus_OutOfMemory;
    nndetailImagePng_png_longjmp(pPng, 1);
  }
  *pStatus = strcmp("Short of output buffer for writing png file.\n",
    pMessage) == 0 ? PngStatus_ShortOutput : PngStatus_WrongFormat;
  nndetailImagePng_png_longjmp(pPng, 1);
}

void* PngMemoryAllocateCallback(png_struct_def* pPng, size_t size) {
  return static_cast<PngMemoryAllocator*>(
    nndetailImagePng_png_get_mem_ptr(pPng))->Allocate(size);
}

void MemoryFreeCallback(png_struct_def* pPng, void* pointer) {
  static_cast<PngMemoryAllocator*>(
    nndetailImagePng_png_get_mem_ptr(pPng))->Free(pointer);
}

void WritePngDataCallback(png_struct_def* pPng, unsigned char* pData,
  size_t size) {
  PngStreamWriter* pWriter =
    static_cast<PngStreamWriter*>(nndetailImagePng_png_get_io_ptr(pPng));
  if (!pWriter->Write(pData, size)) {
    nndetailImagePng_png_error(pPng,
      "Short of output buffer for writing png file.\n");
  }
}

void FlushPngDataCallback(png_struct_def* pPng) {}

void ReadPngDataCallback(png_struct_def* pPng, unsigned char* pData,
  size_t size) {
  PngStreamReader* pReader =
    static_cast<PngStreamReader*>(nndetailImagePng_png_get_io_ptr(pPng));
  if (!pReader->Read(pData, size)) {
    nndetailImagePng_png_error(pPng, "Invalid read position for png data.\n");
  }
}

PixelFormat CombinePngPixelFormat(int bitDepth, int colorType) {
  switch (bitDepth) {
    case 1:
      switch (colorType) {
        case PngColorType_Gray:
          return PixelFormat_Gray1;
        case PngColorType_Palette:
          return PixelFormat_Palette1;
        default:
          return PixelFormat_Invalid;
      }
    case 2:
      switch (colorType) {
        case PngColorType_Gray:
          return PixelFormat_Gray2;
        case PngColorType_Palette:
          return PixelFormat_Palette2;
        default:
          return PixelFormat_Invalid;
      }
    case 4:
      switch (colorType) {
        case PngColorType_Gray:
          return PixelFormat_Gray4;
        case PngColorType_Palette:
          return PixelFormat_Palette4;
        default:
          return PixelFormat_Invalid;
      }
    case 8:
      switch (colorType) {
        case PngColorType_Gray:
          return PixelFormat_Gray8;
        case PngColorType_Rgb:
          return PixelFormat_Rgb8;
        case PngColorType_Palette:
          return PixelFormat_Palette8;
        case PngColorType_GrayAlpha:
          return PixelFormat_GrayAlpha8;
        case PngColorType_Rgba:
          return PixelFormat_Rgba8;
        default:
          return PixelFormat_Invalid;
      }
    case 16:
      switch (colorType) {
        case PngColorType_Gray:
          return PixelFormat_Gray16;
        case PngColorType_Rgb:
          return PixelFormat_Rgb16;
        case PngColorType_GrayAlpha:
          return PixelFormat_GrayAlpha16;
        case PngColorType_Rgba:
          return PixelFormat_Rgba16;
        default:
          return PixelFormat_Invalid;
      }
    default:
      return PixelFormat_Invalid;
  }
}

int GetPngColorType(PixelFormat format) {
  switch (format) {
    case PixelFormat_Palette1:
    case PixelFormat_Palette2:
    case PixelFormat_Palette4:
    case PixelFormat_Palette8:
      return PngColorType_Palette;
    case PixelFormat_Gray1:
    case PixelFormat_Gray2:
    case PixelFormat_Gray4:
    case PixelFormat_Gray8:
    case PixelFormat_Gray16:
      return PngColorType_Gray;
    case PixelFormat_Rgb8:
    case PixelFormat_Rgb16:
      return PngColorType_Rgb;
    case PixelFormat_GrayAlpha8:
    case PixelFormat_GrayAlpha16:
      return PngColorType_GrayAlpha;
    case PixelFormat_Rgba8:
    case PixelFormat_Rgba16:
      return PngColorType_Rgba;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

size_t GetPngRowStride(PixelFormat format, int width) {
  int bitDepth = GetBitDepth(format);
  return (bitDepth * width * GetChannelCount(format) + 7) >> 3;
}

}

}
