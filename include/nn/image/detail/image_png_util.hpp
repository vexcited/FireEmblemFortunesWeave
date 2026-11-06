#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/image/image_types.hpp"

struct png_struct_def;

extern "C" {

void* nndetailImagePng_png_get_mem_ptr(const png_struct_def* pPng);
void* nndetailImagePng_png_get_io_ptr(const png_struct_def* pPng);
void* nndetailImagePng_png_get_error_ptr(const png_struct_def* pPng);
[[noreturn]] void nndetailImagePng_png_longjmp(const png_struct_def* pPng,
  int value);
void nndetailImagePng_png_destroy_read_struct(png_struct_def** ppPng,
  void** ppInfo, void** ppEndInfo);
[[noreturn]] void nndetailImagePng_png_error(const png_struct_def* pPng,
  const char* pMessage);

}

namespace nn::image::detail {

enum PngStatus : int32_t {
  PngStatus_Ok,
  PngStatus_WrongFormat,
  PngStatus_OutOfMemory,
  PngStatus_ShortOutput,
};

class PngMemoryAllocator {
public:
  using AllocateFunction = void* (*)(size_t size, void* pArgument);
  using FreeFunction = void (*)(void* pointer, void* pArgument);

  PngMemoryAllocator();
  ~PngMemoryAllocator();

  void Initialize(AllocateFunction allocate, void* pAllocateArgument,
    FreeFunction free, void* pFreeArgument);
  void Finalize();
  void* Allocate(size_t size);
  void Free(void* pointer);

private:
  AllocateFunction m_Allocate;
  void* m_pAllocateArgument;
  FreeFunction m_Free;
  void* m_pFreeArgument;
  bool m_IsInitialized;
};

struct PngReadWork {
  png_struct_def* pPng;
  void* pInfo;
};

class PngStreamAccessor {
public:
  PngStreamAccessor();
  ~PngStreamAccessor();

  void Finalize();
  size_t GetOffset();

protected:
  size_t m_Size;
  size_t m_Offset;
  bool m_IsInitialized;
};

class PngStreamReader : public PngStreamAccessor {
public:
  void Initialize(const void* pData, size_t size);
  bool Read(void* pOutData, size_t size);

private:
  const uint8_t* m_pData;
};

class PngStreamWriter : public PngStreamAccessor {
public:
  void Initialize(void* pBuffer, size_t size);
  bool Write(const void* pData, size_t size);

private:
  uint8_t* m_pBuffer;
};

void PngWarningCallback(png_struct_def* pPng, const char* pMessage);
[[noreturn]] void PngErrorCallback(png_struct_def* pPng,
  const char* pMessage);
void* PngMemoryAllocateCallback(png_struct_def* pPng, size_t size);
void MemoryFreeCallback(png_struct_def* pPng, void* pointer);
void WritePngDataCallback(png_struct_def* pPng, unsigned char* pData,
  size_t size);
void FlushPngDataCallback(png_struct_def* pPng);
void ReadPngDataCallback(png_struct_def* pPng, unsigned char* pData,
  size_t size);
PixelFormat CombinePngPixelFormat(int bitDepth, int colorType);
int GetPngColorType(PixelFormat format);
size_t GetPngRowStride(PixelFormat format, int width);

}
