#include <stdarg.h>
#include <string.h>

#include <algorithm>

#include "nn/err/err_context.hpp"
#include "nn/time/time_time_zone_api.hpp"
#include "nn/util/string_util.hpp"
#include "nn/util/util_format_string.hpp"

namespace nn::err {

namespace {

// Unused hash slots keep this marker.
const uint64_t InvalidHash = 0x1234567890abcdefull;

struct [[gnu::packed]] HashedTraceContextData {
  int32_t count;
  uint64_t hashes[6];
};

inline void* GetMutableData(const detail::RawContext& context) {
  return const_cast<void*>(context.GetData());
}

}

Result MakeResultWithContextDescriptor(Result result,
  ContextDescriptor descriptor) {
  return Result{result.GetInnerValueForDebug() |
    (descriptor.value << 22) | 0x80000000};
}

ChatContext ChatContext::Make(const time::PosixTime& time,
  const char* query) {
  ChatContext result = {};
  result.time = time;
  util::Strlcpy(result.query, query, sizeof(result.query));
  return result;
}

HttpContext HttpContext::Make(const char* ip, const char* fqdn) {
  HttpContext result = {};
  util::Strlcpy(result.ip, ip, sizeof(result.ip));
  util::Strlcpy(result.fqdn, fqdn, sizeof(result.fqdn));
  return result;
}

HashedTraceContext HashedTraceContext::Make(
  diag::HashedTraceContextImpl context) {
  HashedTraceContext result = {};
  for (uint64_t& hash : result.hashes) {
    hash = InvalidHash;
  }
  result.hashes[0] = context.hash;
  result.count = 1;
  return result;
}

HashedTraceContext HashedTraceContext::Make(
  Span<diag::HashedTraceContextImpl> contexts) {
  HashedTraceContext result = {};
  for (uint64_t& hash : result.hashes) {
    hash = InvalidHash;
  }
  for (uintptr_t i = 0; i < contexts.size; i++) {
    result.hashes[i] = contexts.data[i].hash;
  }
  result.count = static_cast<int32_t>(contexts.size);
  return result;
}

MessageContext MessageContext::Make(const char* message, size_t size) {
  return MessageContext{message, size};
}

MessageContext MessageContext::Make(char* buffer, size_t size,
  const char* format, ...) {
  va_list args;
  va_start(args, format);
  const int length = util::VSNPrintf(buffer, size, format, args);
  va_end(args);
  return MessageContext{buffer, std::min(size, static_cast<size_t>(length + 1))};
}

NplnContext NplnContext::Make(const void* data, size_t size) {
  return NplnContext{data, size};
}

ShortMessageContext ShortMessageContext::Make(const char* format, ...) {
  ShortMessageContext result = {};
  va_list args;
  va_start(args, format);
  util::VSNPrintf(result.message, sizeof(result.message), format, args);
  va_end(args);
  return result;
}

namespace detail {

template <>
size_t ContextTraits::GetRawContextDataSize<ChatContext>(
  const ChatContext& context) {
  return sizeof(context.time) +
    util::Strnlen(context.query, sizeof(context.query)) + 1;
}

template <>
ChatContext ContextTraits::MakeContext<ChatContext>(const RawContext& context) {
  const auto* data = static_cast<const ChatContext*>(context.GetData());
  ChatContext result = {};
  result.time = data->time;
  util::Strlcpy(result.query, data->query, sizeof(result.query));
  return result;
}

template <>
void ContextTraits::UpdateRawContextData<ChatContext>(
  const RawContext& rawContext, const ChatContext& context) {
  memcpy(GetMutableData(rawContext), &context,
    GetRawContextDataSize(context));
}

template <>
void ContextTraits::ToString<ChatContext>(char* buffer, size_t size,
  const ChatContext& context) {
  time::CalendarTime calendarTime = {};
  time::CalendarAdditionalInfo info = {};
  const Result result =
    time::ToCalendarTime(&calendarTime, &info, context.time);
  if (result.IsFailure()) {
    util::SNPrintf(buffer, size, "PosixTime=%lld,Query=%s,InnerValue=0x%08x",
      context.time.value, context.query, result.GetInnerValueForDebug());
  }
  else {
    util::SNPrintf(buffer, size,
      "Date=%04hd%02hhd%02hhd %02hhd:%02hhd:%02hhd[%s],Query=%s",
      calendarTime.year, calendarTime.month, calendarTime.day,
      calendarTime.hour, calendarTime.minute, calendarTime.second,
      info.timeZone.standardTimeName, context.query);
  }
}

template <>
HttpContext ContextTraits::MakeContext<HttpContext>(const RawContext& context) {
  const char* data = static_cast<const char*>(context.GetData());
  HttpContext result = {};
  const int ipLength = util::Strlcpy(result.ip, data, sizeof(result.ip));
  util::Strlcpy(result.fqdn, data + ipLength + 1, sizeof(result.fqdn));
  return result;
}

template <>
size_t ContextTraits::GetRawContextDataSize<HttpContext>(
  const HttpContext& context) {
  return util::Strnlen(context.ip, sizeof(context.ip)) + 1 +
    util::Strnlen(context.fqdn, sizeof(context.fqdn)) + 1;
}

template <>
void ContextTraits::UpdateRawContextData<HttpContext>(
  const RawContext& rawContext, const HttpContext& context) {
  char* data = static_cast<char*>(GetMutableData(rawContext));
  const int ipLength = util::Strlcpy(data, context.ip,
    static_cast<int>(rawContext.GetDataSize()));
  util::Strlcpy(data + ipLength + 1, context.fqdn,
    static_cast<int>(rawContext.GetDataSize()) - (ipLength + 1));
}

template <>
void ContextTraits::ToString<HttpContext>(char* buffer, size_t size,
  const HttpContext& context) {
  util::SNPrintf(buffer, size, "ip=%s,fqdn=%s", context.ip, context.fqdn);
}

template <>
FsContext ContextTraits::MakeContext<FsContext>(const RawContext& context) {
  FsContext result = {};
  memcpy(&result, context.GetData(), context.GetDataSize());
  return result;
}

template <>
size_t ContextTraits::GetRawContextDataSize<FsContext>(
  const FsContext& context) {
  return std::min(fs::GetContextSize(context.type), sizeof(FsContext));
}

template <>
void ContextTraits::UpdateRawContextData<FsContext>(
  const RawContext& rawContext, const FsContext& context) {
  void* data = GetMutableData(rawContext);
  const size_t size = fs::GetContextSize(context.type);
  memcpy(data, &context, std::min(rawContext.GetDataSize(), size));
}

template <>
void ContextTraits::ToString<FsContext>(char* buffer, size_t size,
  const FsContext& context) {
  fs::ErrorContext::ToString(buffer, size, context);
}

template <>
HashedTraceContext ContextTraits::MakeContext<HashedTraceContext>(
  const RawContext& context) {
  const auto* data =
    static_cast<const HashedTraceContextData*>(context.GetData());
  HashedTraceContext result = {};
  result.count = data->count;
  for (int i = 0; i < 6; i++) {
    result.hashes[i] = data->hashes[i];
  }
  return result;
}

template <>
size_t ContextTraits::GetRawContextDataSize<HashedTraceContext>(
  const HashedTraceContext&) {
  return sizeof(HashedTraceContextData);
}

template <>
void ContextTraits::UpdateRawContextData<HashedTraceContext>(
  const RawContext& rawContext, const HashedTraceContext& context) {
  auto* data = static_cast<HashedTraceContextData*>(
    GetMutableData(rawContext));
  data->count = context.count;
  for (int i = 0; i < 6; i++) {
    data->hashes[i] = context.hashes[i];
  }
}

template <>
MessageContext ContextTraits::MakeContext<MessageContext>(
  const RawContext& context) {
  const char* message = static_cast<const char*>(context.GetData());
  return MessageContext{message, context.GetDataSize()};
}

template <>
size_t ContextTraits::GetRawContextDataSize<MessageContext>(
  const MessageContext& context) {
  return strnlen(context.message, context.size) + 1;
}

template <>
void ContextTraits::UpdateRawContextData<MessageContext>(
  const RawContext& rawContext, const MessageContext& context) {
  char* data = static_cast<char*>(GetMutableData(rawContext));
  util::Strlcpy(data, context.message,
    static_cast<int>(rawContext.GetDataSize()));
}

template <>
void ContextTraits::ToString<MessageContext>(char* buffer, size_t size,
  const MessageContext& context) {
  util::Strlcpy(buffer, context.message, static_cast<int>(size));
}

template <>
NplnContext ContextTraits::MakeContext<NplnContext>(
  const RawContext& context) {
  const void* data = context.GetData();
  return NplnContext{data, context.GetDataSize()};
}

template <>
size_t ContextTraits::GetRawContextDataSize<NplnContext>(
  const NplnContext& context) {
  return context.size;
}

template <>
void ContextTraits::UpdateRawContextData<NplnContext>(
  const RawContext& rawContext, const NplnContext& context) {
  void* data = GetMutableData(rawContext);
  memcpy(data, context.data, rawContext.GetDataSize());
}

template <>
void ContextTraits::ToString<NplnContext>(char* buffer, size_t size,
  const NplnContext& context) {
  util::SNPrintf(buffer, size, "NPLN %p %zu", context.data, context.size);
}

template <>
SdCardContext ContextTraits::MakeContext<SdCardContext>(
  const RawContext& context) {
  SdCardContext result = {};
  memcpy(&result, context.GetData(), context.GetDataSize());
  return result;
}

template <>
size_t ContextTraits::GetRawContextDataSize<SdCardContext>(
  const SdCardContext&) {
  return sizeof(SdCardContext);
}

template <>
void ContextTraits::UpdateRawContextData<SdCardContext>(
  const RawContext& rawContext, const SdCardContext& context) {
  *static_cast<SdCardContext*>(GetMutableData(rawContext)) = context;
}

template <>
void ContextTraits::ToString<SdCardContext>(char* buffer, size_t size,
  const SdCardContext& context) {
  util::SNPrintf(buffer, size, "nvmeResult=0x%08x", context.nvmeResult);
}

template <>
ShortMessageContext ContextTraits::MakeContext<ShortMessageContext>(
  const RawContext& context) {
  ShortMessageContext result = {};
  util::Strlcpy(result.message, static_cast<const char*>(context.GetData()),
    sizeof(result.message));
  return result;
}

template <>
size_t ContextTraits::GetRawContextDataSize<ShortMessageContext>(
  const ShortMessageContext&) {
  return sizeof(ShortMessageContext);
}

template <>
void ContextTraits::UpdateRawContextData<ShortMessageContext>(
  const RawContext& rawContext, const ShortMessageContext& context) {
  char* data = static_cast<char*>(GetMutableData(rawContext));
  util::Strlcpy(data, context.message, sizeof(context.message));
}

template <>
void ContextTraits::ToString<ShortMessageContext>(char* buffer, size_t size,
  const ShortMessageContext& context) {
  util::Strlcpy(buffer, context.message, static_cast<int>(size));
}

}

}
