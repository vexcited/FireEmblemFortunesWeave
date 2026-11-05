#include "nn/prepo/prepo_play_report.hpp"
#include "nn/srepo/detail/srepo_generator.hpp"

namespace nn::prepo {

namespace {

// prepo containers share the srepo container layout.
const srepo::Struct& ToSrepoStruct(const Struct& value) {
  return reinterpret_cast<const srepo::Struct&>(value);
}

}

Array::Array()
  : m_Buffer(nullptr), m_BufferSize(0), m_Size(0), m_Count(0) {}

void Array::SetBuffer(void* buffer, size_t size) {
  m_Buffer = static_cast<uint8_t*>(buffer);
  m_BufferSize = size;
  m_Size = 0;
  m_Count = 0;
}

void Array::Clear() {
  m_Size = 0;
  m_Count = 0;
}

Result Array::Add(long value) {
  const Result result = detail::HandleSrepoResult(
    srepo::detail::ArrayGenerator::AddValue(
      &m_Size, value, m_Buffer, m_BufferSize, m_Size));
  if (result.IsSuccess()) {
    m_Count++;
  }
  return result;
}

Result Array::Add(const Any64BitId& value) {
  const srepo::Any64BitId id = {value.id};
  const Result result = detail::HandleSrepoResult(
    srepo::detail::ArrayGenerator::AddValue(
      &m_Size, id, m_Buffer, m_BufferSize, m_Size));
  if (result.IsSuccess()) {
    m_Count++;
  }
  return result;
}

Result Array::Add(float value) {
  const Result result = detail::HandleSrepoResult(
    srepo::detail::ArrayGenerator::AddValue(
      &m_Size, value, m_Buffer, m_BufferSize, m_Size));
  if (result.IsSuccess()) {
    m_Count++;
  }
  return result;
}

Result Array::Add(double value) {
  const Result result = detail::HandleSrepoResult(
    srepo::detail::ArrayGenerator::AddValue(
      &m_Size, value, m_Buffer, m_BufferSize, m_Size));
  if (result.IsSuccess()) {
    m_Count++;
  }
  return result;
}

Result Array::Add(const char* value) {
  const Result result = detail::HandleSrepoResult(
    srepo::detail::ArrayGenerator::AddValue(
      &m_Size, value, m_Buffer, m_BufferSize, m_Size));
  if (result.IsSuccess()) {
    m_Count++;
  }
  return result;
}

Result Array::Add(bool value) {
  const Result result = detail::HandleSrepoResult(
    srepo::detail::ArrayGenerator::AddValue(
      &m_Size, value, m_Buffer, m_BufferSize, m_Size));
  if (result.IsSuccess()) {
    m_Count++;
  }
  return result;
}

Result Array::Add(const Struct& value) {
  const Result result = detail::HandleSrepoResult(
    srepo::detail::ArrayGenerator::AddValue(
      &m_Size, ToSrepoStruct(value), m_Buffer, m_BufferSize, m_Size));
  if (result.IsSuccess()) {
    m_Count++;
  }
  return result;
}

int Array::GetCount() const {
  return static_cast<int>(m_Count);
}

size_t Array::GetSize() const {
  return m_Size;
}

const void* Array::GetBuffer() const {
  return m_Buffer;
}

}
