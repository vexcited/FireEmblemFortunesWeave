#include "nn/util/message_pack.hpp"

namespace nn::util {

MessagePackReader::MessagePackReader(StreamParam* stream) : m_Stream(stream) {}

bool MessagePackReader::ReadCurrent(AnyData* data) {
  return detail::msgpack::ReadCurrent(data, m_Stream);
}

MessagePackWriter::MessagePackWriter(StreamParam* stream) : m_Stream(stream) {}

size_t MessagePackWriter::GetRemainSize() const {
  return m_Stream->size - m_Stream->position;
}

bool MessagePackWriter::WriteFixMap(uint8_t count) {
  return detail::msgpack::WriteFixMap(m_Stream, count);
}

bool MessagePackWriter::WriteMap16(uint16_t count) {
  return detail::msgpack::WriteMap16(m_Stream, count);
}

bool MessagePackWriter::WriteMap32(uint32_t count) {
  return detail::msgpack::WriteMap32(m_Stream, count);
}

bool MessagePackWriter::WriteMapAutoSize(uint32_t count) {
  return detail::msgpack::WriteMapAutoSize(m_Stream, count);
}

bool MessagePackWriter::WriteFixArray(uint8_t count) {
  return detail::msgpack::WriteFixArray(m_Stream, count);
}

bool MessagePackWriter::WriteArray16(uint16_t count) {
  return detail::msgpack::WriteArray16(m_Stream, count);
}

bool MessagePackWriter::WriteArray32(uint32_t count) {
  return detail::msgpack::WriteArray32(m_Stream, count);
}

bool MessagePackWriter::WriteArrayAutoSize(uint32_t count) {
  return detail::msgpack::WriteArrayAutoSize(m_Stream, count);
}

bool MessagePackWriter::WriteString(const char* str, uint32_t length) {
  return detail::msgpack::WriteString(m_Stream, str, length);
}

bool MessagePackWriter::WriteVerifiedString(const char* str, uint32_t length) {
  return detail::msgpack::WriteVerifiedString(m_Stream, str, length);
}

bool MessagePackWriter::WriteBinary8Header(uint8_t length) {
  return detail::msgpack::WriteBinary8Header(m_Stream, length);
}

bool MessagePackWriter::WriteBinary16Header(uint16_t length) {
  return detail::msgpack::WriteBinary16Header(m_Stream, length);
}

bool MessagePackWriter::WriteBinary32Header(uint32_t length) {
  return detail::msgpack::WriteBinary32Header(m_Stream, length);
}

bool MessagePackWriter::WriteBinaryHeader(uint32_t length) {
  return detail::msgpack::WriteBinaryHeader(m_Stream, length);
}

bool MessagePackWriter::WriteBinary(const void* data, uint32_t length) {
  return detail::msgpack::WriteBinary(m_Stream, data, length);
}

bool MessagePackWriter::WriteExtension8Header(int8_t type, uint8_t length) {
  return detail::msgpack::WriteExtension8Header(m_Stream, type, length);
}

bool MessagePackWriter::WriteExtension16Header(int8_t type, uint16_t length) {
  return detail::msgpack::WriteExtension16Header(m_Stream, type, length);
}

bool MessagePackWriter::WriteExtension32Header(int8_t type, uint32_t length) {
  return detail::msgpack::WriteExtension32Header(m_Stream, type, length);
}

bool MessagePackWriter::WriteExtensionHeader(int8_t type, uint32_t length) {
  return detail::msgpack::WriteExtensionHeader(m_Stream, type, length);
}

bool MessagePackWriter::WriteExtension(
  int8_t type, const void* data, uint32_t length) {
  return detail::msgpack::WriteExtension(m_Stream, type, data, length);
}

bool MessagePackWriter::WriteNil() {
  return detail::msgpack::WriteNil(m_Stream);
}

bool MessagePackWriter::WriteBool(bool value) {
  return detail::msgpack::WriteBool(m_Stream, value);
}

bool MessagePackWriter::WriteFixNum(int8_t value) {
  return detail::msgpack::WriteFixNum(m_Stream, value);
}

bool MessagePackWriter::WriteSignedInteger8(int8_t value) {
  return detail::msgpack::WriteSignedInteger8(m_Stream, value);
}

bool MessagePackWriter::WriteSignedInteger16(int16_t value) {
  return detail::msgpack::WriteSignedInteger16(m_Stream, value);
}

bool MessagePackWriter::WriteSignedInteger32(int32_t value) {
  return detail::msgpack::WriteSignedInteger32(m_Stream, value);
}

bool MessagePackWriter::WriteSignedInteger64(int64_t value) {
  return detail::msgpack::WriteSignedInteger64(m_Stream, value);
}

bool MessagePackWriter::WriteSignedIntegerAutoSize(int64_t value) {
  return detail::msgpack::WriteSignedIntegerAutoSize(m_Stream, value);
}

bool MessagePackWriter::WriteUnsignedInteger8(uint8_t value) {
  return detail::msgpack::WriteUnsignedInteger8(m_Stream, value);
}

bool MessagePackWriter::WriteUnsignedInteger16(uint16_t value) {
  return detail::msgpack::WriteUnsignedInteger16(m_Stream, value);
}

bool MessagePackWriter::WriteUnsignedInteger32(uint32_t value) {
  return detail::msgpack::WriteUnsignedInteger32(m_Stream, value);
}

bool MessagePackWriter::WriteUnsignedInteger64(uint64_t value) {
  return detail::msgpack::WriteUnsignedInteger64(m_Stream, value);
}

bool MessagePackWriter::WriteUnsignedIntegerAutoSize(uint64_t value) {
  return detail::msgpack::WriteUnsignedIntegerAutoSize(m_Stream, value);
}

bool MessagePackWriter::WriteIntegerAutoSize(int64_t value) {
  return detail::msgpack::WriteIntegerAutoSize(m_Stream, value);
}

bool MessagePackWriter::WriteFloat32(float value) {
  return detail::msgpack::WriteFloat32(m_Stream, value);
}

bool MessagePackWriter::WriteFloat64(double value) {
  return detail::msgpack::WriteFloat64(m_Stream, value);
}

}
