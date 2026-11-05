#include "nn/prepo/prepo_play_report.hpp"
#include "nn/srepo/detail/srepo_generator.hpp"

namespace nn::prepo {

namespace {

// prepo containers share the srepo container layout.
const srepo::Array& ToSrepoArray(const Array& value) {
  return reinterpret_cast<const srepo::Array&>(value);
}

const srepo::Struct& ToSrepoStruct(const Struct& value) {
  return reinterpret_cast<const srepo::Struct&>(value);
}

}

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
  const Result result = detail::HandleSrepoResult(
    srepo::detail::StructGenerator::AddKeyValue(
      &m_Size, key, value, m_Buffer, m_BufferSize, m_Size));
  if (result.IsSuccess()) {
    m_Count++;
  }
  return result;
}

Result Struct::Add(const char* key, const Any64BitId& value) {
  const srepo::Any64BitId id = {value.id};
  const Result result = detail::HandleSrepoResult(
    srepo::detail::StructGenerator::AddKeyValue(
      &m_Size, key, id, m_Buffer, m_BufferSize, m_Size));
  if (result.IsSuccess()) {
    m_Count++;
  }
  return result;
}

Result Struct::Add(const char* key, float value) {
  const Result result = detail::HandleSrepoResult(
    srepo::detail::StructGenerator::AddKeyValue(
      &m_Size, key, value, m_Buffer, m_BufferSize, m_Size));
  if (result.IsSuccess()) {
    m_Count++;
  }
  return result;
}

Result Struct::Add(const char* key, double value) {
  const Result result = detail::HandleSrepoResult(
    srepo::detail::StructGenerator::AddKeyValue(
      &m_Size, key, value, m_Buffer, m_BufferSize, m_Size));
  if (result.IsSuccess()) {
    m_Count++;
  }
  return result;
}

Result Struct::Add(const char* key, const char* value) {
  const Result result = detail::HandleSrepoResult(
    srepo::detail::StructGenerator::AddKeyValue(
      &m_Size, key, value, m_Buffer, m_BufferSize, m_Size));
  if (result.IsSuccess()) {
    m_Count++;
  }
  return result;
}

Result Struct::Add(const char* key, bool value) {
  const Result result = detail::HandleSrepoResult(
    srepo::detail::StructGenerator::AddKeyValue(
      &m_Size, key, value, m_Buffer, m_BufferSize, m_Size));
  if (result.IsSuccess()) {
    m_Count++;
  }
  return result;
}

Result Struct::Add(const char* key, const Array& value) {
  const Result result = detail::HandleSrepoResult(
    srepo::detail::StructGenerator::AddValue(
      &m_Size, key, ToSrepoArray(value), m_Buffer, m_BufferSize, m_Size));
  if (result.IsSuccess()) {
    m_Count++;
  }
  return result;
}

Result Struct::Add(const char* key, const Struct& value) {
  const Result result = detail::HandleSrepoResult(
    srepo::detail::StructGenerator::AddValue(
      &m_Size, key, ToSrepoStruct(value), m_Buffer, m_BufferSize, m_Size));
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
