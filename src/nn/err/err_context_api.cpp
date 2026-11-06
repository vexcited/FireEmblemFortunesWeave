#include <utility>

#include "nn/err/err_context_api.hpp"

namespace nn::err::detail {

namespace {

inline bool IsValid(ContextDescriptor descriptor) {
  return descriptor.value !=
    ContextSeriesArray::SeriesHolder::InvalidDescriptorValue;
}

inline MemoryResource& GetSerializationAllocator(
  ContextWriterClientResourceAccessor& accessor) {
  return *static_cast<MemoryResource*>(accessor.serialization_allocator);
}

}

void ContextApiImpl::UpdateResult(
  ContextWriterClientResourceAccessor& accessor, ContextDescriptor descriptor,
  Result previous, Result current) {
  if (IsValid(descriptor)) {
    ContextWriterClientImpl::UpdateResult(*accessor.series, descriptor,
      previous, current);
  }
}

Result ContextApiImpl::ConvertResult(
  ContextWriterClientResourceAccessor& accessor, ContextDescriptor descriptor,
  Result previous, Result current) {
  if (!IsValid(descriptor)) {
    return current;
  }
  ContextWriterClientImpl::UpdateResult(*accessor.series, descriptor,
    previous, current);
  return MakeResultWithContextDescriptor(current, descriptor);
}

void ContextApiImpl::AddContext(ContextWriterClientResourceAccessor& accessor,
  ContextDescriptor descriptor, Result result,
  util::optional<RawContext>&& context) {
  if (IsValid(descriptor) && context.has_value()) {
    ContextWriterClientImpl::AddContext(*accessor.series, descriptor, result,
      std::move(*context));
  }
}

template <typename T>
void ContextApiImpl::CommitContext(T& writer,
  ContextWriterClientResourceAccessor& accessor, ContextDescriptor descriptor,
  Result result) {
  if (IsValid(descriptor)) {
    ContextWriterClientImpl::CommitContext(writer, *accessor.series,
      descriptor, result, GetSerializationAllocator(accessor));
  }
}

template void ContextApiImpl::CommitContext<context::IWriterForSystem>(
  context::IWriterForSystem& writer,
  ContextWriterClientResourceAccessor& accessor, ContextDescriptor descriptor,
  Result result);
template void ContextApiImpl::CommitContext<context::IWriterForApplication>(
  context::IWriterForApplication& writer,
  ContextWriterClientResourceAccessor& accessor, ContextDescriptor descriptor,
  Result result);

}
