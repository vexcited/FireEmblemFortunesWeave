#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/diag/diag_hashed_trace_context.hpp"
#include "nn/err/context_series.hpp"
#include "nn/err/detail/err_context_series_holder.hpp"
#include "nn/fs/fs_error_context.hpp"
#include "nn/result.hpp"
#include "nn/span.hpp"
#include "nn/time/time_types.hpp"

namespace nn::err {

struct ChatContext {
  time::PosixTime time;
  char query[248];

  static ChatContext Make(const time::PosixTime& time, const char* query);
};

struct FsContext : fs::ErrorContext {};

struct HttpContext {
  char ip[16];
  char fqdn[240];

  static HttpContext Make(const char* ip, const char* fqdn);
};

struct HashedTraceContext {
  int32_t count;
  uint64_t hashes[6];

  static HashedTraceContext Make(diag::HashedTraceContextImpl context);
  static HashedTraceContext Make(Span<diag::HashedTraceContextImpl> contexts);
};

struct MessageContext {
  const char* message;
  size_t size;

  static MessageContext Make(const char* message, size_t size);
  static MessageContext Make(char* buffer, size_t size, const char* format,
    ...);
};

struct NplnContext {
  const void* data;
  size_t size;

  static NplnContext Make(const void* data, size_t size);
};

struct SdCardContext {
  uint32_t version;
  uint32_t nvmeResult;
  uint8_t data[52];
};

struct ShortMessageContext {
  char message[60];

  static ShortMessageContext Make(const char* format, ...);
};

Result MakeResultWithContextDescriptor(Result result,
  ContextDescriptor descriptor);

namespace detail {

struct ContextTraits {
  template <typename T>
  static T MakeContext(const RawContext& context);
  template <typename T>
  static size_t GetRawContextDataSize(const T& context);
  template <typename T>
  static void UpdateRawContextData(const RawContext& rawContext,
    const T& context);
  template <typename T>
  static void ToString(char* buffer, size_t size, const T& context);
};

}

}
