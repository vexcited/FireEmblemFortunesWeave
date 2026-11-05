#include "nn/prepo/prepo_play_report.hpp"
#include "nn/srepo/detail/srepo_generator.hpp"

namespace nn::prepo::detail {

namespace {

constexpr Result ResultInvalidEventId = {0xa81};

const size_t ReportSizeMax = 0x10000;

// prepo containers share the srepo container layout.
const srepo::Array& ToSrepoArray(const Array& value) {
  return reinterpret_cast<const srepo::Array&>(value);
}

const srepo::Struct& ToSrepoStruct(const Struct& value) {
  return reinterpret_cast<const srepo::Struct&>(value);
}

}

PlayReportImpl::PlayReportImpl()
  : m_IsOptInCheckEnabled(true), m_Buffer(nullptr), m_BufferSize(0),
    m_Position(0) {
  m_EventId[0] = '\0';
}

PlayReportImpl::PlayReportImpl(const char* eventId)
  : m_IsOptInCheckEnabled(true), m_Buffer(nullptr), m_BufferSize(0),
    m_Position(0) {
  if (SetEventId(eventId).IsFailure()) {
    m_EventId[0] = '\0';
  }
}

Result PlayReportImpl::SetEventId(const char* eventId) {
  size_t length = 0;
  if (!srepo::detail::VerifyEventId(&length, eventId)) {
    return ResultInvalidEventId;
  }

  size_t i = 0;
  for (; i < sizeof(m_EventId) - 1 && eventId[i] != '\0'; i++) {
    m_EventId[i] = eventId[i];
  }
  m_EventId[i] = '\0';
  return Result{0};
}

void PlayReportImpl::SetBuffer(void* buffer, size_t size) {
  m_Buffer = static_cast<uint8_t*>(buffer);
  m_BufferSize = size;
  srepo::detail::ReportGenerator::Initialize(&m_Position, m_Buffer, size);
}

void PlayReportImpl::Clear() {
  srepo::detail::ReportGenerator::Initialize(
    &m_Position, m_Buffer, m_BufferSize);
}

Result PlayReportImpl::Add(const char* key, long value) {
  return HandleSrepoResult(srepo::detail::ReportGenerator::AddKeyValue(
    &m_Position, key, value, m_Buffer, m_BufferSize, m_Position,
    ReportSizeMax));
}

Result PlayReportImpl::Add(const char* key, const Any64BitId& value) {
  const srepo::Any64BitId id = {value.id};
  return HandleSrepoResult(srepo::detail::ReportGenerator::AddKeyValue(
    &m_Position, key, id, m_Buffer, m_BufferSize, m_Position,
    ReportSizeMax));
}

Result PlayReportImpl::Add(const char* key, float value) {
  return HandleSrepoResult(srepo::detail::ReportGenerator::AddKeyValue(
    &m_Position, key, value, m_Buffer, m_BufferSize, m_Position,
    ReportSizeMax));
}

Result PlayReportImpl::Add(const char* key, double value) {
  return HandleSrepoResult(srepo::detail::ReportGenerator::AddKeyValue(
    &m_Position, key, value, m_Buffer, m_BufferSize, m_Position,
    ReportSizeMax));
}

Result PlayReportImpl::Add(const char* key, const char* value) {
  return HandleSrepoResult(srepo::detail::ReportGenerator::AddKeyValue(
    &m_Position, key, value, m_Buffer, m_BufferSize, m_Position,
    ReportSizeMax));
}

Result PlayReportImpl::Add(const char* key, bool value) {
  return HandleSrepoResult(srepo::detail::ReportGenerator::AddKeyValue(
    &m_Position, key, value, m_Buffer, m_BufferSize, m_Position,
    ReportSizeMax));
}

Result PlayReportImpl::Add(const char* key, const void* value, size_t size) {
  return HandleSrepoResult(srepo::detail::ReportGenerator::AddKeyValue(
    &m_Position, key, value, size, m_Buffer, m_BufferSize, m_Position,
    ReportSizeMax));
}

Result PlayReportImpl::Add(const char* key, const Array& value) {
  return HandleSrepoResult(srepo::detail::ReportGenerator::AddKeyValue(
    &m_Position, key, ToSrepoArray(value), m_Buffer, m_BufferSize, m_Position,
    ReportSizeMax));
}

Result PlayReportImpl::Add(const char* key, const Struct& value) {
  return HandleSrepoResult(srepo::detail::ReportGenerator::AddKeyValue(
    &m_Position, key, ToSrepoStruct(value), m_Buffer, m_BufferSize,
    m_Position, ReportSizeMax));
}

Result PlayReportImpl::AddPlaceholder(const char* key, int8_t type) {
  return HandleSrepoResult(srepo::detail::ReportGenerator::AddPlaceholder(
    &m_Position, key, type, m_Buffer, m_BufferSize, m_Position,
    ReportSizeMax));
}

int PlayReportImpl::GetCount() const {
  return srepo::detail::ReportGenerator::GetKeyValueCount(
    m_Buffer, m_BufferSize);
}

size_t PlayReportImpl::GetSize() const {
  return m_Position;
}

}
