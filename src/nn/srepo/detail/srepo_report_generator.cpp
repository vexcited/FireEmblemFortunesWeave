#include "nn/srepo/detail/srepo_generator.hpp"
#include "nn/srepo/detail/srepo_verifier.hpp"
#include "nn/util/message_pack.hpp"

namespace nn::srepo::detail {

namespace {

// The report starts with a map16 header whose count is big endian.
const size_t MapHeaderSize = 3;

// The srepo results of a mixed array, an invalid value and a full buffer.
constexpr Result ResultValueTypeMismatch = {0x2b4};
constexpr Result ResultInvalidValue = {0x8b4};
constexpr Result ResultBufferFull = {0xcb4};

using AnyDataType = util::MessagePackReader::AnyDataType;

}

bool ArrayGenerator::IsSameValueType(
  util::MessagePackReader::AnyDataType type, uint8_t* buffer, size_t size) {
  util::MessagePackReader::StreamParam stream = {buffer, size, 0};
  util::MessagePackReader reader(&stream);
  util::MessagePackReader::AnyData data = {};
  if (!reader.ReadCurrent(&data)) {
    return false;
  }
  return detail::IsSameValueType(data.type, type);
}

bool ArrayGenerator::IsSameExtensionType(MsgpackExtensionType type,
  uint8_t* buffer, size_t size) {
  util::MessagePackReader::StreamParam stream = {buffer, size, 0};
  util::MessagePackReader reader(&stream);
  util::MessagePackReader::AnyData data = {};
  if (!reader.ReadCurrent(&data)) {
    return false;
  }
  return data.type == util::MessagePackReader::AnyDataType_Extension &&
    data.extension.type == type;
}

Result ArrayGenerator::AddValue(size_t* pOutPosition, long value,
  uint8_t* buffer, size_t size, size_t position) {
  if (position != 0 &&
    !IsSameValueType(AnyDataType::AnyDataType_SignedInteger, buffer, size)) {
    return ResultValueTypeMismatch;
  }
  util::MessagePackWriter::StreamParam stream = {buffer, size, position};
  util::MessagePackWriter writer(&stream);
  if (!writer.WriteSignedIntegerAutoSize(value)) {
    return ResultBufferFull;
  }
  *pOutPosition = stream.position;
  return Result{0};
}

Result ArrayGenerator::AddValue(size_t* pOutPosition, const Any64BitId& value,
  uint8_t* buffer, size_t size, size_t position) {
  if (position != 0 &&
    !IsSameExtensionType(MsgpackExtensionType_Any64BitId, buffer, size)) {
    return ResultValueTypeMismatch;
  }
  util::MessagePackWriter::StreamParam stream = {buffer, size, position};
  util::MessagePackWriter writer(&stream);
  // Msgpack stores the id big endian.
  const uint64_t id = __builtin_bswap64(value.id);
  if (!writer.WriteExtension(MsgpackExtensionType_Any64BitId, &id,
    sizeof(id))) {
    return ResultBufferFull;
  }
  *pOutPosition = stream.position;
  return Result{0};
}

Result ArrayGenerator::AddValue(size_t* pOutPosition, float value,
  uint8_t* buffer, size_t size, size_t position) {
  if (position != 0 &&
    !IsSameValueType(AnyDataType::AnyDataType_Float32, buffer, size)) {
    return ResultValueTypeMismatch;
  }
  if (!VerifyFloatValue(value)) {
    return ResultInvalidValue;
  }
  util::MessagePackWriter::StreamParam stream = {buffer, size, position};
  util::MessagePackWriter writer(&stream);
  if (!writer.WriteFloat32(value)) {
    return ResultBufferFull;
  }
  *pOutPosition = stream.position;
  return Result{0};
}

Result ArrayGenerator::AddValue(size_t* pOutPosition, double value,
  uint8_t* buffer, size_t size, size_t position) {
  if (position != 0 &&
    !IsSameValueType(AnyDataType::AnyDataType_Float64, buffer, size)) {
    return ResultValueTypeMismatch;
  }
  if (!VerifyDoubleValue(value)) {
    return ResultInvalidValue;
  }
  util::MessagePackWriter::StreamParam stream = {buffer, size, position};
  util::MessagePackWriter writer(&stream);
  if (!writer.WriteFloat64(value)) {
    return ResultBufferFull;
  }
  *pOutPosition = stream.position;
  return Result{0};
}

Result ArrayGenerator::AddValue(size_t* pOutPosition, const char* value,
  uint8_t* buffer, size_t size, size_t position) {
  if (position != 0 &&
    !IsSameValueType(AnyDataType::AnyDataType_String, buffer, size)) {
    return ResultValueTypeMismatch;
  }
  if (value == nullptr) {
    return ResultInvalidValue;
  }
  util::MessagePackWriter::StreamParam stream = {buffer, size, position};
  util::MessagePackWriter writer(&stream);
  size_t length = 0;
  if (!VerifyStringValueLength(&length, value,
    stream.size - stream.position)) {
    return ResultBufferFull;
  }
  if (!writer.WriteString(value, static_cast<uint32_t>(length))) {
    return ResultInvalidValue;
  }
  *pOutPosition = stream.position;
  return Result{0};
}

Result ArrayGenerator::AddValue(size_t* pOutPosition, bool value,
  uint8_t* buffer, size_t size, size_t position) {
  if (position != 0 &&
    !IsSameValueType(AnyDataType::AnyDataType_Bool, buffer, size)) {
    return ResultValueTypeMismatch;
  }
  util::MessagePackWriter::StreamParam stream = {buffer, size, position};
  util::MessagePackWriter writer(&stream);
  if (!writer.WriteBool(value)) {
    return ResultBufferFull;
  }
  *pOutPosition = stream.position;
  return Result{0};
}

void ReportGenerator::Initialize(
  size_t* pOutPosition, uint8_t* buffer, size_t size) {
  util::MessagePackWriter::StreamParam stream = {buffer, size, 0};
  util::MessagePackWriter writer(&stream);
  writer.WriteMap16(0);
  *pOutPosition = stream.position;
}

int ReportGenerator::GetKeyValueCount(const uint8_t* buffer, size_t size) {
  if (size < MapHeaderSize) {
    return 0;
  }
  return buffer[1] << 8 | buffer[2];
}

void ReportGenerator::IncrementKeyValueCount(uint8_t* buffer, size_t size) {
  if (size < MapHeaderSize) {
    return;
  }
  const uint16_t count =
    static_cast<uint16_t>((buffer[1] << 8 | buffer[2]) + 1);
  buffer[1] = static_cast<uint8_t>(count >> 8);
  buffer[2] = static_cast<uint8_t>(count);
}

}
