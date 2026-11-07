#include "nn/err/err_context_reader.hpp"

namespace nn::err {

namespace detail {

SerializedContextSeries::ConstIterator SerializedContextSeries::CBegin()
  const {
  return ConstIterator(*this, 0);
}

SerializedContextSeries::ConstIterator SerializedContextSeries::CEnd() const {
  return ConstIterator(*this, m_Size);
}

}

void ContextReader::SetSerializedContextSeries(
  detail::SerializedContextSeries&& series) {
  m_Series.emplace(static_cast<detail::SerializedContextSeries&&>(series));
}

uint8_t ContextReader::GetType() const {
  return (*m_Iterator)->GetType();
}

void ContextReader::SetTotalCount(int count) {
  m_TotalCount = count;
}

int ContextReader::GetTotalCount() const {
  return m_TotalCount;
}

}
