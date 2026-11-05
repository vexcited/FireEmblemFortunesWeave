#pragma once

#include <stddef.h>
#include <stdint.h>

namespace nn::util {

namespace detail {

// Mirrors the zlib stream of the bundled nnutilZlib library.
struct ZlibStream {
  const uint8_t* nextIn;
  uint32_t availIn;
  uint64_t totalIn;
  uint8_t* nextOut;
  uint32_t availOut;
  uint64_t totalOut;
  const char* message;
  void* state;
  void* (*allocate)(void* opaque, uint32_t items, uint32_t size);
  void (*free)(void* opaque, void* address);
  void* opaque;
  int dataType;
  uint64_t adler;
  uint64_t reserved;
};

static_assert(sizeof(ZlibStream) == 112);

}

struct StreamingCompressZlibContext {
  uintptr_t workCurrent;
  uintptr_t workEnd;
  detail::ZlibStream stream;
  bool isFinished;
};

struct StreamingDecompressZlibContext {
  uintptr_t workCurrent;
  uintptr_t workEnd;
  detail::ZlibStream stream;
  bool isFinished;
  alignas(8) uint8_t workBuffer[39928];
};

bool CompressZlib(size_t* pOutSize, void* dst, size_t dstSize,
  const void* src, size_t srcSize, void* work, size_t workSize);
bool CompressZlib(size_t* pOutSize, void* dst, size_t dstSize,
  const void* src, size_t srcSize, void* work, size_t workSize,
  int memLevel, int level);
bool CompressGzip(size_t* pOutSize, void* dst, size_t dstSize,
  const void* src, size_t srcSize, void* work, size_t workSize);
bool CompressGzip(size_t* pOutSize, void* dst, size_t dstSize,
  const void* src, size_t srcSize, void* work, size_t workSize,
  int memLevel, int level);
bool CompressDeflate(size_t* pOutSize, void* dst, size_t dstSize,
  const void* src, size_t srcSize, void* work, size_t workSize);
bool CompressDeflate(size_t* pOutSize, void* dst, size_t dstSize,
  const void* src, size_t srcSize, void* work, size_t workSize,
  int memLevel, int level);

void InitializeStreamingCompressZlibContext(
  StreamingCompressZlibContext* context, void* work, size_t workSize);
void InitializeStreamingCompressZlibContext(
  StreamingCompressZlibContext* context, void* work, size_t workSize,
  int memLevel, int level);
void InitializeStreamingCompressGzipContext(
  StreamingCompressZlibContext* context, void* work, size_t workSize);
void InitializeStreamingCompressGzipContext(
  StreamingCompressZlibContext* context, void* work, size_t workSize,
  int memLevel, int level);
void InitializeStreamingCompressDeflateContext(
  StreamingCompressZlibContext* context, void* work, size_t workSize);
void InitializeStreamingCompressDeflateContext(
  StreamingCompressZlibContext* context, void* work, size_t workSize,
  int memLevel, int level);
bool StreamingCompressZlib(size_t* pOutDstSize, size_t* pOutSrcSize,
  void* dst, size_t dstSize, const void* src, size_t srcSize,
  StreamingCompressZlibContext* context);
bool StreamingCompressGzip(size_t* pOutDstSize, size_t* pOutSrcSize,
  void* dst, size_t dstSize, const void* src, size_t srcSize,
  StreamingCompressZlibContext* context);
bool StreamingCompressDeflate(size_t* pOutDstSize, size_t* pOutSrcSize,
  void* dst, size_t dstSize, const void* src, size_t srcSize,
  StreamingCompressZlibContext* context);

void InitializeStreamingDecompressZlibContext(
  StreamingDecompressZlibContext* context);
void InitializeStreamingDecompressGzipContext(
  StreamingDecompressZlibContext* context);
void InitializeStreamingDecompressDeflateContext(
  StreamingDecompressZlibContext* context);
bool StreamingDecompressZlib(size_t* pOutDstSize, size_t* pOutSrcSize,
  void* dst, size_t dstSize, const void* src, size_t srcSize,
  StreamingDecompressZlibContext* context);
bool StreamingDecompressGzip(size_t* pOutDstSize, size_t* pOutSrcSize,
  void* dst, size_t dstSize, const void* src, size_t srcSize,
  StreamingDecompressZlibContext* context);
bool StreamingDecompressDeflate(size_t* pOutDstSize, size_t* pOutSrcSize,
  void* dst, size_t dstSize, const void* src, size_t srcSize,
  StreamingDecompressZlibContext* context);

uint32_t GetGzipDecompressedSize(const void* src, size_t srcSize);
bool DecompressZlib(void* dst, size_t dstSize, const void* src,
  size_t srcSize, void* work, size_t workSize);
bool DecompressGzip(void* dst, size_t dstSize, const void* src,
  size_t srcSize, void* work, size_t workSize);
bool DecompressDeflate(void* dst, size_t dstSize, const void* src,
  size_t srcSize, void* work, size_t workSize);

}
