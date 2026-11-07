#pragma once

#include "nn/err/context_initialization.hpp"
#include "nn/err/err_context.hpp"
#include "nn/result.hpp"
#include "nn/util/optional.hpp"

namespace nn {

class MemoryResource;

}

namespace nn::err::context {

class IWriterForSystem;
class IWriterForApplication;

}

namespace nn::err::detail {

struct ContextWriterClientImpl {
  static void AddContext(ContextSeriesArray& array,
    ContextDescriptor descriptor, Result result, RawContext&& context);
  static void UpdateResult(ContextSeriesArray& array,
    ContextDescriptor descriptor, Result previous, Result current);
  static Result ConvertResult(ContextSeriesArray& array,
    ContextDescriptor descriptor, Result previous, Result current);
  template <typename T>
  static Result CommitContext(T& writer, ContextSeriesArray& array,
    ContextDescriptor descriptor, Result result, MemoryResource& allocator);
};

struct ContextApiImpl {
  static void UpdateResult(ContextWriterClientResourceAccessor& accessor,
    ContextDescriptor descriptor, Result previous, Result current);
  static Result ConvertResult(ContextWriterClientResourceAccessor& accessor,
    ContextDescriptor descriptor, Result previous, Result current);
  static void AddContext(ContextWriterClientResourceAccessor& accessor,
    ContextDescriptor descriptor, Result result,
    util::optional<RawContext>&& context);
  template <typename T>
  static void CommitContext(T& writer,
    ContextWriterClientResourceAccessor& accessor,
    ContextDescriptor descriptor, Result result);
  template <typename T>
  static Result UpdateResultWithContext(T& writer,
    ContextWriterClientResourceAccessor& accessor,
    ContextDescriptor descriptor, Result result,
    util::optional<RawContext>&& context, util::optional<Result> current);
  template <typename T>
  static ContextDescriptor RegisterContext(T& writer,
    ContextWriterClientResourceAccessor& accessor,
    util::optional<RawContext>&& context, Result result);
};

template <typename T>
util::optional<RawContext> CreateRawContext(const T& context,
  MemoryResource* pAllocator);

}
