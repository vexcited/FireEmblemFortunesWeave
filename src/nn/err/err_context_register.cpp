#include "nn/diag/diag_abort.hpp"
#include "nn/err/context_series.hpp"
#include "nn/err/detail/err_context_series_holder.hpp"
#include "nn/err/err_context_api.hpp"
#include "nn/sf/shared_pointer.hpp"

namespace nn::err {

namespace {

// Only these contexts reach the writer of an application, the others abort.
template <typename T>
inline constexpr bool IsApplicationContext = false;

template <>
inline constexpr bool IsApplicationContext<ShortMessageContext> = true;
template <>
inline constexpr bool IsApplicationContext<MessageContext> = true;
template <>
inline constexpr bool IsApplicationContext<NplnContext> = true;
template <>
inline constexpr bool IsApplicationContext<ChatContext> = true;

[[gnu::always_inline]] inline bool IsWriterInitialized() {
  return __atomic_load_n(&detail::WriterState.initialized,
    __ATOMIC_ACQUIRE) == 1;
}

template <typename T>
[[gnu::always_inline]] inline util::optional<detail::RawContext> Create(
  const T& context) {
  util::optional<detail::RawContext> raw = detail::CreateRawContext(context,
    static_cast<MemoryResource*>(detail::WriterState.accessor.allocator));
  if constexpr (!IsApplicationContext<T>) {
    NN_ABORT_UNLESS(false);
  }
  return raw;
}

// The context owns its data like a unique pointer with this deleter.
[[gnu::always_inline]] inline void Release(
  util::optional<detail::RawContext>& raw) {
  if (raw.has_value()) {
    void* pData = raw->data;
    raw->data = nullptr;
    if (pData != nullptr) {
      raw->deleter(pData);
    }
  }
}

}

template <typename T>
ContextDescriptor RegisterContext(const T& context, Result result) {
  if (!IsWriterInitialized()) {
    return {UINT32_MAX};
  }
  util::optional<detail::RawContext> raw = Create(context);
  ContextDescriptor descriptor;
  {
    sf::SharedPointer<sf::IServiceObject> writer(
      reinterpret_cast<sf::IServiceObject*>(detail::WriterState.writer), true);
    descriptor = detail::ContextApiImpl::RegisterContext(
      *reinterpret_cast<context::IWriterForApplication*>(writer.Get()),
      detail::WriterState.accessor, std::move(raw), result);
  }
  Release(raw);
  return descriptor;
}

template <typename T>
void AddContext(ContextDescriptor descriptor, Result result,
  const T& context) {
  if (!IsWriterInitialized()) {
    return;
  }
  util::optional<detail::RawContext> raw = Create(context);
  detail::ContextApiImpl::AddContext(detail::WriterState.accessor, descriptor,
    result, std::move(raw));
  Release(raw);
}

template <typename T>
[[gnu::always_inline]] inline Result UpdateResult(Result result,
  const T& context, util::optional<Result> current) {
  const ContextDescriptor descriptor = {detail::GetContextDescriptor(result)};
  util::optional<detail::RawContext> raw = Create(context);
  Result updated;
  {
    sf::SharedPointer<sf::IServiceObject> writer(
      reinterpret_cast<sf::IServiceObject*>(detail::WriterState.writer), true);
    updated = detail::ContextApiImpl::UpdateResultWithContext(
      *reinterpret_cast<context::IWriterForApplication*>(writer.Get()),
      detail::WriterState.accessor, descriptor, result, std::move(raw),
      current);
  }
  Release(raw);
  return updated;
}

template <typename T>
Result UpdateResultWithContext(Result result, const T& context) {
  if (!IsWriterInitialized()) {
    return result;
  }
  return UpdateResult(result, context, util::optional<Result>());
}

template <typename T>
Result UpdateResultWithContext(Result previous, const T& context,
  Result current) {
  if (!IsWriterInitialized()) {
    return current;
  }
  return UpdateResult(previous, context, util::optional<Result>(current));
}

#define NN_ERR_INSTANTIATE(T) \
  template ContextDescriptor RegisterContext<T>(const T&, Result); \
  template void AddContext<T>(ContextDescriptor, Result, const T&);
#define NN_ERR_INSTANTIATE_UPDATE(T) \
  template Result UpdateResultWithContext<T>(Result, const T&); \
  template Result UpdateResultWithContext<T>(Result, const T&, Result);

NN_ERR_INSTANTIATE(HashedTraceContext)
NN_ERR_INSTANTIATE(HttpContext)
NN_ERR_INSTANTIATE(SdCardContext)
NN_ERR_INSTANTIATE(FsContext)
NN_ERR_INSTANTIATE(ShortMessageContext)
NN_ERR_INSTANTIATE(MessageContext)
NN_ERR_INSTANTIATE(NplnContext)
NN_ERR_INSTANTIATE(ChatContext)
NN_ERR_INSTANTIATE_UPDATE(HashedTraceContext)
NN_ERR_INSTANTIATE_UPDATE(HttpContext)
NN_ERR_INSTANTIATE_UPDATE(SdCardContext)
NN_ERR_INSTANTIATE_UPDATE(FsContext)
NN_ERR_INSTANTIATE_UPDATE(ShortMessageContext)
NN_ERR_INSTANTIATE_UPDATE(MessageContext)
NN_ERR_INSTANTIATE_UPDATE(NplnContext)
NN_ERR_INSTANTIATE_UPDATE(ChatContext)

#undef NN_ERR_INSTANTIATE_UPDATE
#undef NN_ERR_INSTANTIATE

}
