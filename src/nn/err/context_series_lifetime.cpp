#include <stddef.h>
#include <stdint.h>

#include "nn/diag/diag_abort.hpp"
#include "nn/err/detail/err_context_series_holder.hpp"

namespace nn::err::detail {

void* GetContextNopAllocator();

namespace {

constexpr size_t RawContextHeaderSize = 4;
constexpr size_t RawContextDataSizeMax = 0x100;

[[gnu::always_inline]] void ReleaseData(void*& pData,
  MemoryResourceDeleter& deleter) {
  void* pOwned = pData;
  pData = nullptr;
  if (pOwned != nullptr) {
    deleter(pOwned);
  }
}

// An empty context leaves its reserved bytes as they were.
[[gnu::always_inline]] void ClearRawContext(RawContext* pContext) {
  pContext->type = 0;
  pContext->size = 0;
  pContext->data = nullptr;
  pContext->deleter = {};
}

[[gnu::always_inline]] void AssignDeserialized(RawContext* pContext,
  const void* pData, size_t size) {
  RawContext context = RawContext::Deserialize(pData, size);
  AssignRawContext(pContext, &context);
  ReleaseData(context.data, context.deleter);
}

}

void ContextSeriesEntry::Reset() {
  active = 0;
  previous = nullptr;
  next = nullptr;
  RawContext empty;
  ClearRawContext(&empty);
  AssignRawContext(&context, &empty);
  ReleaseData(empty.data, empty.deleter);
}

void DestroyContextSeries(ContextSeries* pSeries) {
  for (ContextSeriesEntry* entry = pSeries->first; entry != nullptr;) {
    ContextSeriesEntry* next = entry->next;
    entry->Reset();
    entry = next;
  }
  pSeries->first = nullptr;
  pSeries->last = nullptr;
}

// The original reaches this one through its exported symbol.
[[gnu::noinline]] RawContext RawContext::Deserialize(const void* pData,
  size_t size) {
  NN_ABORT_UNLESS(IsDeserializable(pData, size));
  const uint8_t* pBytes = static_cast<const uint8_t*>(pData);
  const uint8_t type = pBytes[0];
  const uint16_t dataSize = *reinterpret_cast<const uint16_t*>(pBytes + 2);
  NN_ABORT_UNLESS(size >= RawContextHeaderSize + dataSize);
  OwnedContextData owned = {
    const_cast<uint8_t*>(pBytes + RawContextHeaderSize),
    {GetContextNopAllocator(), dataSize}};
  [[clang::uninitialized]] RawContext context;
  ConstructRawContext(&context, type, dataSize, &owned);
  ReleaseData(owned.data, owned.deleter);
  return context;
}

bool RawContext::IsDeserializable(const void* pData, size_t size) {
  if (size < RawContextHeaderSize) {
    return false;
  }
  const uint8_t* pBytes = static_cast<const uint8_t*>(pData);
  if (pBytes[0] == 0) {
    return false;
  }
  const uint16_t dataSize = *reinterpret_cast<const uint16_t*>(pBytes + 2);
  return dataSize >= 1 && dataSize <= RawContextDataSizeMax &&
    size >= RawContextHeaderSize + dataSize;
}

[[gnu::noinline]] SerializedContextSeries::SerializedContextSeries(
  SerializedContextSeries&& other)
  : m_IsInitialized(other.m_IsInitialized), m_pData(other.m_pData),
    m_Deleter(other.m_Deleter), m_Size(other.m_Size),
    m_Count(other.m_Count) {
  other.m_IsInitialized = false;
  other.m_pData = nullptr;
  other.m_Size = 0;
  other.m_Count = 0;
}

SerializedContextSeries& SerializedContextSeries::operator=(
  SerializedContextSeries&& other) {
  SerializedContextSeries moved(
    static_cast<SerializedContextSeries&&>(other));
  const bool isInitialized = m_IsInitialized;
  m_IsInitialized = moved.m_IsInitialized;
  moved.m_IsInitialized = isInitialized;
  void* pData = m_pData;
  m_pData = moved.m_pData;
  moved.m_pData = pData;
  const MemoryResourceDeleter deleter = m_Deleter;
  m_Deleter = moved.m_Deleter;
  moved.m_Deleter = deleter;
  const size_t size = m_Size;
  m_Size = moved.m_Size;
  moved.m_Size = size;
  const int count = m_Count;
  m_Count = moved.m_Count;
  moved.m_Count = count;
  return *this;
}

void SerializedContextSeries::Reset() {
  m_IsInitialized = false;
  ReleaseData(m_pData, m_Deleter);
  m_Size = 0;
  m_Count = 0;
}

SerializedContextSeries::ConstIterator::ConstIterator(
  const SerializedContextSeries& series, size_t position)
  : m_pSeries(&series), m_Position(position) {
  ClearRawContext(&m_Context);
  if (position < series.m_Size) {
    AssignDeserialized(&m_Context,
      static_cast<const uint8_t*>(series.m_pData) + position,
      series.m_Size - position);
  }
}

SerializedContextSeries::ConstIterator&
SerializedContextSeries::ConstIterator::operator++() {
  m_Position += m_Context.GetSerializationSize();
  if (m_Position < m_pSeries->m_Size) {
    AssignDeserialized(&m_Context,
      static_cast<const uint8_t*>(m_pSeries->m_pData) + m_Position,
      m_pSeries->m_Size - m_Position);
  }
  return *this;
}

}
