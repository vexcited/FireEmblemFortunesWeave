#include <string.h>

#include "nn/diag/diag_abort.hpp"
#include "nn/err/detail/err_context_series_holder.hpp"
#include "nn/os/time.hpp"

namespace nn::err::detail {

namespace {

constexpr size_t RawContextHeaderSize = 4;
constexpr size_t RawContextDataSizeMax = 256;

}

uint8_t RawContext::GetType() const {
  return type;
}

const void* RawContext::GetData() const {
  return data;
}

size_t RawContext::GetDataSize() const {
  return size;
}

size_t RawContext::GetSerializationSize() const {
  NN_ABORT_UNLESS(size <= RawContextDataSizeMax);
  return size + RawContextHeaderSize;
}

size_t RawContext::Serialize(void* buffer, size_t bufferSize) const {
  NN_ABORT_UNLESS(size <= RawContextDataSizeMax);
  auto header = static_cast<uint8_t*>(buffer);
  header[1] = 0;
  header[0] = type;
  size_t dataSize = size;
  *reinterpret_cast<uint16_t*>(header + 2) = dataSize;
  memcpy(header + RawContextHeaderSize, data, dataSize);
  return dataSize + RawContextHeaderSize;
}

bool ContextSeriesEntry::IsLinkedWithOtherEntries() const {
  return previous != nullptr || next != nullptr;
}

ContextSeriesEntry* ContextSeriesEntry::Prev() const {
  return previous;
}

ContextSeriesEntry* ContextSeriesEntry::Next() const {
  return next;
}

void ContextSeriesEntry::LinkNext(ContextSeriesEntry* entry) {
  entry->previous = this;
  entry->next = next;
  next = entry;
}

const RawContext& ContextSeriesEntry::GetRawContext() const {
  return context;
}

bool ContextSeries::IsEmpty() const {
  return first == nullptr;
}

size_t ContextSeries::GetSerializationSize() const {
  size_t size = 0;
  for (const ContextSeriesEntry* entry = first; entry != nullptr;
    entry = entry->next) {
    size += entry->context.GetSerializationSize();
  }

  return size;
}

const ContextSeriesEntry* ContextSeries::CBegin() const {
  return first;
}

const ContextSeriesEntry* ContextSeries::CEnd() const {
  return nullptr;
}

void ContextSeriesArray::lock() {
  mutex.Lock();
}

void ContextSeriesArray::unlock() {
  mutex.Unlock();
}

void ContextSeriesArray::SeriesHolder::Initialize(
  ContextDescriptor descriptor, Result result) {
  this->descriptor = descriptor;
  initialOriginalResult = result;
  currentOriginalResult = result;
  tick = os::GetSystemTick().value;
}

bool ContextSeriesArray::SeriesHolder::IsInitialized() const {
  return descriptor.value != InvalidDescriptorValue;
}

void ContextSeriesArray::SeriesHolder::Reset() {
  descriptor.value = InvalidDescriptorValue;
  ResetContextSeries(&series);
}

ContextDescriptor ContextSeriesArray::SeriesHolder::GetDescriptor() const {
  return descriptor;
}

Result ContextSeriesArray::SeriesHolder::GetInitialOriginalResult() const {
  return initialOriginalResult;
}

Result ContextSeriesArray::SeriesHolder::GetCurrentOriginalResult() const {
  return currentOriginalResult;
}

int64_t ContextSeriesArray::SeriesHolder::GetTick() const {
  return tick;
}

const ContextSeries&
ContextSeriesArray::SeriesHolder::GetContextSeries() const {
  return series;
}

void ContextSeriesArray::SeriesHolder::UpdateTick() {
  tick = os::GetSystemTick().value;
}

void ContextSeriesArray::SeriesHolder::AppendContext(
  ContextSeriesEntry* entry, Result result) {
  currentOriginalResult = result;
  tick = os::GetSystemTick().value;
  AppendContextEntry(&series, entry);
}

void ContextSeriesArray::SeriesHolder::UpdateCurrentOriginalResult(
  Result result) {
  currentOriginalResult = result;
  tick = os::GetSystemTick().value;
}

bool SerializedContextSeries::ConstIterator::operator==(
  const ConstIterator& other) const {
  return m_pSeries->m_pData == other.m_pSeries->m_pData &&
    m_Position == other.m_Position;
}

bool SerializedContextSeries::ConstIterator::operator!=(
  const ConstIterator& other) const {
  return m_pSeries->m_pData != other.m_pSeries->m_pData ||
    m_Position != other.m_Position;
}

const RawContext& SerializedContextSeries::ConstIterator::operator*() const {
  return m_Context;
}

const RawContext* SerializedContextSeries::ConstIterator::operator->() const {
  return &m_Context;
}

size_t SerializedContextSeries::ConstIterator::GetPosition() const {
  return m_Position;
}

const void* SerializedContextSeries::GetData() const {
  return m_pData;
}

size_t SerializedContextSeries::GetSize() const {
  return m_Size;
}

int SerializedContextSeries::GetCount() const {
  return m_Count;
}

}
