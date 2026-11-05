#include "nn/util/util_compression.hpp"

#include "nn/diag/diag_abort.hpp"
#include "nn/diag/unexpected_default.hpp"

#define NN_UTIL_ZLIB_VERSION "1.3.1.f-NINTENDO-SDK-v1"

extern "C" {

int nnutilZlib_deflateInit2_(nn::util::detail::ZlibStream* stream, int level,
  int method, int windowBits, int memLevel, int strategy,
  const char* version, int streamSize);
int nnutilZlib_deflate(nn::util::detail::ZlibStream* stream, int flush);
int nnutilZlib_deflateEnd(nn::util::detail::ZlibStream* stream);
int nnutilZlib_inflateInit2_(nn::util::detail::ZlibStream* stream,
  int windowBits, const char* version, int streamSize);
int nnutilZlib_inflate(nn::util::detail::ZlibStream* stream, int flush);
int nnutilZlib_inflateEnd(nn::util::detail::ZlibStream* stream);

}

namespace nn::util {

namespace {

enum ZlibResult {
  Z_OK = 0,
  Z_STREAM_END = 1,
  Z_NEED_DICT = 2,
  Z_VERSION_ERROR = -6,
  Z_BUF_ERROR = -5,
  Z_STREAM_ERROR = -2,
};

enum ZlibFlush {
  Z_NO_FLUSH = 0,
  Z_FINISH = 4,
};

constexpr int Z_DEFLATED = 8;
constexpr int DefaultMemLevel = 8;
constexpr int DefaultLevel = -1;
constexpr int ZlibWindowBits = 15;
constexpr int GzipWindowBits = 31;
constexpr int DeflateWindowBits = -15;

struct WorkBuffer {
  uintptr_t current;
  uintptr_t end;
};

// zlib allocations are carved from the work buffer, aligned to their size
// rounded down to a power of two and at most 8, and never freed.
void* AllocateFromWorkBuffer(void* opaque, uint32_t items, uint32_t size) {
  WorkBuffer* work = static_cast<WorkBuffer*>(opaque);
  const uint32_t total = items * size;
  const uintptr_t alignment = total < 8 ?
    uintptr_t(1) << (63 - __builtin_clzll(total)) : 8;
  const uintptr_t misalignment = work->current & (alignment - 1);
  const uintptr_t address = work->current +
    (misalignment != 0 ? alignment - misalignment : 0);
  if (address + total > work->end) {
    return nullptr;
  }
  work->current = address + total;
  return reinterpret_cast<void*>(address);
}

void FreeToWorkBuffer(void*, void*) {}

bool IsZlibError(int result) {
  return static_cast<uint32_t>(result - Z_BUF_ERROR) < 4;
}

bool IsInflateError(int result) {
  return static_cast<uint32_t>(result - Z_VERSION_ERROR) < 5;
}

[[gnu::noinline]] bool CompressImpl(size_t* pOutSize, void* dst, size_t dstSize,
  const void* src, size_t srcSize, void* work, size_t workSize,
  int memLevel, int level, int windowBits) {
  WorkBuffer buffer = {reinterpret_cast<uintptr_t>(work),
    reinterpret_cast<uintptr_t>(work) + workSize};
  detail::ZlibStream stream = {};
  stream.nextIn = static_cast<const uint8_t*>(src);
  stream.availIn = static_cast<uint32_t>(srcSize);
  stream.nextOut = static_cast<uint8_t*>(dst);
  stream.availOut = static_cast<uint32_t>(dstSize);
  stream.allocate = AllocateFromWorkBuffer;
  stream.free = FreeToWorkBuffer;
  stream.opaque = &buffer;

  int result = nnutilZlib_deflateInit2_(&stream, level, Z_DEFLATED,
    windowBits, memLevel, 0, NN_UTIL_ZLIB_VERSION, sizeof(stream));
  if (result == Z_OK) {
    result = nnutilZlib_deflate(&stream, Z_FINISH);
    if (result == Z_OK) {
      return false;
    }
    if (result == Z_STREAM_END) {
      result = nnutilZlib_deflateEnd(&stream);
      if (result == Z_OK) {
        *pOutSize = stream.totalOut;
        return true;
      }
    }
  }

  if (!IsZlibError(result)) {
    nn::detail::UnexpectedDefaultImpl();
  }
  return false;
}

// Running out of output and missing dictionaries fail, other unexpected
// zlib results abort.
[[gnu::noinline]] bool DecompressImpl(void* dst, size_t dstSize,
  const void* src, size_t srcSize, void* work, size_t workSize,
  int windowBits) {
  WorkBuffer buffer = {reinterpret_cast<uintptr_t>(work),
    reinterpret_cast<uintptr_t>(work) + workSize};
  detail::ZlibStream stream = {};
  stream.nextIn = static_cast<const uint8_t*>(src);
  stream.availIn = static_cast<uint32_t>(srcSize);
  stream.nextOut = static_cast<uint8_t*>(dst);
  stream.availOut = static_cast<uint32_t>(dstSize);
  stream.allocate = AllocateFromWorkBuffer;
  stream.free = FreeToWorkBuffer;
  stream.opaque = &buffer;

  int result = nnutilZlib_inflateInit2_(&stream, windowBits,
    NN_UTIL_ZLIB_VERSION, sizeof(stream));
  if (IsInflateError(result)) {
    return false;
  }
  if (result == Z_OK) {
    result = nnutilZlib_inflate(&stream, Z_FINISH);
    if (IsInflateError(result)) {
      return false;
    }
    if (result == Z_STREAM_END) {
      result = nnutilZlib_inflateEnd(&stream);
      if (IsInflateError(result) || result == Z_NEED_DICT) {
        return false;
      }
      if (result == Z_OK) {
        return true;
      }
    }
  }

  if (result != Z_NEED_DICT) {
    nn::detail::UnexpectedDefaultImpl();
  }
  return false;
}

void InitializeCompressContext(StreamingCompressZlibContext* context,
  void* work, size_t workSize, int memLevel, int level, int windowBits) {
  context->isFinished = false;
  detail::ZlibStream& stream = context->stream;
  stream.availIn = 0;
  stream.nextOut = nullptr;
  stream.availOut = 0;
  stream.allocate = AllocateFromWorkBuffer;
  stream.free = FreeToWorkBuffer;
  stream.opaque = context;
  context->workCurrent = reinterpret_cast<uintptr_t>(work);
  context->workEnd = reinterpret_cast<uintptr_t>(work) + workSize;
  stream.nextIn = nullptr;
  NN_ABORT_UNLESS(nnutilZlib_deflateInit2_(&stream, level, Z_DEFLATED,
    windowBits, memLevel, 0, NN_UTIL_ZLIB_VERSION, sizeof(stream)) == Z_OK);
}

void InitializeDecompressContext(StreamingDecompressZlibContext* context,
  int windowBits) {
  context->isFinished = false;
  detail::ZlibStream& stream = context->stream;
  stream.availIn = 0;
  stream.nextOut = nullptr;
  stream.availOut = 0;
  stream.allocate = AllocateFromWorkBuffer;
  stream.free = FreeToWorkBuffer;
  stream.opaque = context;
  context->workCurrent = reinterpret_cast<uintptr_t>(context->workBuffer);
  context->workEnd = reinterpret_cast<uintptr_t>(context->workBuffer) +
    sizeof(context->workBuffer);
  stream.nextIn = nullptr;
  NN_ABORT_UNLESS(nnutilZlib_inflateInit2_(&stream, windowBits,
    NN_UTIL_ZLIB_VERSION, sizeof(stream)) == Z_OK);
}

// An empty input finishes the stream.
[[gnu::noinline]] bool StreamingCompressImpl(size_t* pOutDstSize,
  size_t* pOutSrcSize, void* dst, size_t dstSize, const void* src,
  size_t srcSize, StreamingCompressZlibContext* context) {
  if (context->isFinished) {
    *pOutDstSize = 0;
    *pOutSrcSize = 0;
    return true;
  }

  detail::ZlibStream& stream = context->stream;
  stream.nextIn = static_cast<const uint8_t*>(src);
  stream.availIn = static_cast<uint32_t>(srcSize);
  stream.nextOut = static_cast<uint8_t*>(dst);
  stream.availOut = static_cast<uint32_t>(dstSize);

  int result;
  if (srcSize != 0) {
    result = nnutilZlib_deflate(&stream, Z_NO_FLUSH);
  }
  else {
    result = nnutilZlib_deflate(&stream, Z_FINISH);
    if (result == Z_STREAM_END) {
      context->isFinished = true;
      result = nnutilZlib_deflateEnd(&stream);
    }
  }

  if (result != Z_OK) {
    if (!IsInflateError(result)) {
      nn::detail::UnexpectedDefaultImpl();
    }
    return false;
  }

  *pOutDstSize = static_cast<uint32_t>(dstSize) - stream.availOut;
  *pOutSrcSize = static_cast<uint32_t>(srcSize) - stream.availIn;
  return true;
}

[[gnu::noinline]] bool StreamingDecompressImpl(size_t* pOutDstSize,
  size_t* pOutSrcSize, void* dst, size_t dstSize, const void* src,
  size_t srcSize, StreamingDecompressZlibContext* context) {
  if (context->isFinished) {
    *pOutDstSize = 0;
    *pOutSrcSize = 0;
    return true;
  }

  detail::ZlibStream& stream = context->stream;
  stream.nextIn = static_cast<const uint8_t*>(src);
  stream.availIn = static_cast<uint32_t>(srcSize);
  stream.nextOut = static_cast<uint8_t*>(dst);
  stream.availOut = static_cast<uint32_t>(dstSize);

  int result = nnutilZlib_inflate(&stream, Z_NO_FLUSH);
  if (result == Z_STREAM_END) {
    context->isFinished = true;
    result = nnutilZlib_inflate(&stream, Z_FINISH);
    if (IsInflateError(result)) {
      return false;
    }
    if (result == Z_STREAM_END) {
      result = nnutilZlib_inflateEnd(&stream);
      if (IsInflateError(result)) {
        return false;
      }
    }
  }
  else if (IsInflateError(result)) {
    return false;
  }

  if (result != Z_OK) {
    if (result != Z_NEED_DICT) {
      nn::detail::UnexpectedDefaultImpl();
    }
    return false;
  }

  *pOutDstSize = static_cast<uint32_t>(dstSize) - stream.availOut;
  *pOutSrcSize = static_cast<uint32_t>(srcSize) - stream.availIn;
  return true;
}

}

bool CompressZlib(size_t* pOutSize, void* dst, size_t dstSize,
  const void* src, size_t srcSize, void* work, size_t workSize) {
  return CompressImpl(pOutSize, dst, dstSize, src, srcSize, work, workSize,
    DefaultMemLevel, DefaultLevel, ZlibWindowBits);
}

bool CompressZlib(size_t* pOutSize, void* dst, size_t dstSize,
  const void* src, size_t srcSize, void* work, size_t workSize,
  int memLevel, int level) {
  return CompressImpl(pOutSize, dst, dstSize, src, srcSize, work, workSize,
    memLevel, level, ZlibWindowBits);
}

bool CompressGzip(size_t* pOutSize, void* dst, size_t dstSize,
  const void* src, size_t srcSize, void* work, size_t workSize) {
  return CompressImpl(pOutSize, dst, dstSize, src, srcSize, work, workSize,
    DefaultMemLevel, DefaultLevel, GzipWindowBits);
}

bool CompressGzip(size_t* pOutSize, void* dst, size_t dstSize,
  const void* src, size_t srcSize, void* work, size_t workSize,
  int memLevel, int level) {
  return CompressImpl(pOutSize, dst, dstSize, src, srcSize, work, workSize,
    memLevel, level, GzipWindowBits);
}

bool CompressDeflate(size_t* pOutSize, void* dst, size_t dstSize,
  const void* src, size_t srcSize, void* work, size_t workSize) {
  return CompressImpl(pOutSize, dst, dstSize, src, srcSize, work, workSize,
    DefaultMemLevel, DefaultLevel, DeflateWindowBits);
}

bool CompressDeflate(size_t* pOutSize, void* dst, size_t dstSize,
  const void* src, size_t srcSize, void* work, size_t workSize,
  int memLevel, int level) {
  return CompressImpl(pOutSize, dst, dstSize, src, srcSize, work, workSize,
    memLevel, level, DeflateWindowBits);
}

// The gzip trailer ends with the decompressed size modulo 2^32.
uint32_t GetGzipDecompressedSize(const void* src, size_t srcSize) {
  uint32_t size;
  __builtin_memcpy(&size, static_cast<const uint8_t*>(src) + srcSize - 4,
    sizeof(size));
  return size;
}

bool DecompressZlib(void* dst, size_t dstSize, const void* src,
  size_t srcSize, void* work, size_t workSize) {
  return DecompressImpl(dst, dstSize, src, srcSize, work, workSize,
    ZlibWindowBits);
}

bool DecompressGzip(void* dst, size_t dstSize, const void* src,
  size_t srcSize, void* work, size_t workSize) {
  return DecompressImpl(dst, dstSize, src, srcSize, work, workSize,
    GzipWindowBits);
}

bool DecompressDeflate(void* dst, size_t dstSize, const void* src,
  size_t srcSize, void* work, size_t workSize) {
  return DecompressImpl(dst, dstSize, src, srcSize, work, workSize,
    DeflateWindowBits);
}

void InitializeStreamingCompressZlibContext(
  StreamingCompressZlibContext* context, void* work, size_t workSize) {
  InitializeCompressContext(context, work, workSize, DefaultMemLevel,
    DefaultLevel, ZlibWindowBits);
}

void InitializeStreamingCompressZlibContext(
  StreamingCompressZlibContext* context, void* work, size_t workSize,
  int memLevel, int level) {
  InitializeCompressContext(context, work, workSize, memLevel, level,
    ZlibWindowBits);
}

void InitializeStreamingCompressGzipContext(
  StreamingCompressZlibContext* context, void* work, size_t workSize) {
  InitializeCompressContext(context, work, workSize, DefaultMemLevel,
    DefaultLevel, GzipWindowBits);
}

void InitializeStreamingCompressGzipContext(
  StreamingCompressZlibContext* context, void* work, size_t workSize,
  int memLevel, int level) {
  InitializeCompressContext(context, work, workSize, memLevel, level,
    GzipWindowBits);
}

void InitializeStreamingCompressDeflateContext(
  StreamingCompressZlibContext* context, void* work, size_t workSize) {
  InitializeCompressContext(context, work, workSize, DefaultMemLevel,
    DefaultLevel, DeflateWindowBits);
}

void InitializeStreamingCompressDeflateContext(
  StreamingCompressZlibContext* context, void* work, size_t workSize,
  int memLevel, int level) {
  InitializeCompressContext(context, work, workSize, memLevel, level,
    DeflateWindowBits);
}

bool StreamingCompressZlib(size_t* pOutDstSize, size_t* pOutSrcSize,
  void* dst, size_t dstSize, const void* src, size_t srcSize,
  StreamingCompressZlibContext* context) {
  return StreamingCompressImpl(pOutDstSize, pOutSrcSize, dst, dstSize, src,
    srcSize, context);
}

bool StreamingCompressGzip(size_t* pOutDstSize, size_t* pOutSrcSize,
  void* dst, size_t dstSize, const void* src, size_t srcSize,
  StreamingCompressZlibContext* context) {
  return StreamingCompressImpl(pOutDstSize, pOutSrcSize, dst, dstSize, src,
    srcSize, context);
}

bool StreamingCompressDeflate(size_t* pOutDstSize, size_t* pOutSrcSize,
  void* dst, size_t dstSize, const void* src, size_t srcSize,
  StreamingCompressZlibContext* context) {
  return StreamingCompressImpl(pOutDstSize, pOutSrcSize, dst, dstSize, src,
    srcSize, context);
}

void InitializeStreamingDecompressZlibContext(
  StreamingDecompressZlibContext* context) {
  InitializeDecompressContext(context, ZlibWindowBits);
}

void InitializeStreamingDecompressGzipContext(
  StreamingDecompressZlibContext* context) {
  InitializeDecompressContext(context, GzipWindowBits);
}

void InitializeStreamingDecompressDeflateContext(
  StreamingDecompressZlibContext* context) {
  InitializeDecompressContext(context, DeflateWindowBits);
}

bool StreamingDecompressZlib(size_t* pOutDstSize, size_t* pOutSrcSize,
  void* dst, size_t dstSize, const void* src, size_t srcSize,
  StreamingDecompressZlibContext* context) {
  return StreamingDecompressImpl(pOutDstSize, pOutSrcSize, dst, dstSize, src,
    srcSize, context);
}

bool StreamingDecompressGzip(size_t* pOutDstSize, size_t* pOutSrcSize,
  void* dst, size_t dstSize, const void* src, size_t srcSize,
  StreamingDecompressZlibContext* context) {
  return StreamingDecompressImpl(pOutDstSize, pOutSrcSize, dst, dstSize, src,
    srcSize, context);
}

bool StreamingDecompressDeflate(size_t* pOutDstSize, size_t* pOutSrcSize,
  void* dst, size_t dstSize, const void* src, size_t srcSize,
  StreamingDecompressZlibContext* context) {
  return StreamingDecompressImpl(pOutDstSize, pOutSrcSize, dst, dstSize, src,
    srcSize, context);
}

}
