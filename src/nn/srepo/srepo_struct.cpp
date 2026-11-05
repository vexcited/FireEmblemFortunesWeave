#include "nn/srepo/srepo_report.hpp"

namespace nn::srepo {

Struct::Struct()
  : m_Buffer(nullptr), m_BufferSize(0), m_Size(0), m_Count(0) {}

void Struct::SetBuffer(void* buffer, size_t size) {
  m_Buffer = static_cast<uint8_t*>(buffer);
  m_BufferSize = size;
  m_Size = 0;
  m_Count = 0;
}

void Struct::Clear() {
  m_Size = 0;
  m_Count = 0;
}

Result Struct::Add(const char* key, long value) {
  const Result result = detail::StructGenerator::AddKeyValue(
    &m_Size, key, value, m_Buffer, m_BufferSize, m_Size);
  if (result.IsSuccess()) {
    m_Count++;
  }
  return result;
}

Result Struct::Add(const char* key, const Any64BitId& value) {
  const Any64BitId id = value;
  const Result result = detail::StructGenerator::AddKeyValue(
    &m_Size, key, id, m_Buffer, m_BufferSize, m_Size);
  if (result.IsSuccess()) {
    m_Count++;
  }
  return result;
}

Result Struct::Add(const char* key, float value) {
  const Result result = detail::StructGenerator::AddKeyValue(
    &m_Size, key, value, m_Buffer, m_BufferSize, m_Size);
  if (result.IsSuccess()) {
    m_Count++;
  }
  return result;
}

Result Struct::Add(const char* key, double value) {
  const Result result = detail::StructGenerator::AddKeyValue(
    &m_Size, key, value, m_Buffer, m_BufferSize, m_Size);
  if (result.IsSuccess()) {
    m_Count++;
  }
  return result;
}

Result Struct::Add(const char* key, const char* value) {
  const Result result = detail::StructGenerator::AddKeyValue(
    &m_Size, key, value, m_Buffer, m_BufferSize, m_Size);
  if (result.IsSuccess()) {
    m_Count++;
  }
  return result;
}

Result Struct::Add(const char* key, bool value) {
  const Result result = detail::StructGenerator::AddKeyValue(
    &m_Size, key, value, m_Buffer, m_BufferSize, m_Size);
  if (result.IsSuccess()) {
    m_Count++;
  }
  return result;
}

Result Struct::Add(const char* key, const Array& value) {
  const Result result = detail::StructGenerator::AddValue(
    &m_Size, key, value, m_Buffer, m_BufferSize, m_Size);
  if (result.IsSuccess()) {
    m_Count++;
  }
  return result;
}

Result Struct::Add(const char* key, const Struct& value) {
  const Result result = detail::StructGenerator::AddValue(
    &m_Size, key, value, m_Buffer, m_BufferSize, m_Size);
  if (result.IsSuccess()) {
    m_Count++;
  }
  return result;
}

int Struct::GetCount() const {
  return static_cast<int>(m_Count);
}

size_t Struct::GetSize() const {
  return m_Size;
}

const void* Struct::GetBuffer() const {
  return m_Buffer;
}

}
