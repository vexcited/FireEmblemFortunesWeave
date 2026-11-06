#pragma once

#include <stdint.h>

#include "nn/err/detail/err_context_series_holder.hpp"
#include "nn/util/optional.hpp"

namespace nn::err {

class ContextReader {
 public:
  uint8_t GetType() const;
  void SetTotalCount(int count);
  int GetTotalCount() const;

 private:
  util::optional<detail::SerializedContextSeries> m_Series;
  util::optional<detail::SerializedContextSeries::ConstIterator> m_Iterator;
  int m_TotalCount;
};

}
