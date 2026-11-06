#include <utility>

#include "nn/err/err_context_api.hpp"

namespace nn::err::detail {

void ContextWriterClientImpl::AddContext(ContextSeriesArray& array,
  ContextDescriptor descriptor, Result result, RawContext&& context) {
  array.AppendContext(descriptor, result, std::move(context), result);
}

void ContextWriterClientImpl::UpdateResult(ContextSeriesArray& array,
  ContextDescriptor descriptor, Result previous, Result current) {
  array.UpdateCurrentOriginalResult(descriptor, previous, current);
}

Result ContextWriterClientImpl::ConvertResult(ContextSeriesArray& array,
  ContextDescriptor descriptor, Result previous, Result current) {
  array.UpdateCurrentOriginalResult(descriptor, previous, current);
  return current;
}

}
