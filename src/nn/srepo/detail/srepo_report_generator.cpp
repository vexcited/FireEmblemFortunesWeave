#include "nn/diag/diag_abort.hpp"
#include "nn/srepo/detail/srepo_generator.hpp"
#include "nn/srepo/detail/srepo_verifier.hpp"
#include "nn/util/message_pack.hpp"

namespace nn::srepo::detail {

namespace {

// The report starts with a map16 header whose count is big endian.
const size_t MapHeaderSize = 3;

// The srepo results of a mixed array, an invalid value and a full buffer.
constexpr Result ResultValueTypeMismatch = {0x2b4};
constexpr Result ResultInvalidKey = {0x4b4};
constexpr Result ResultDuplicatedKey = {0x6b4};
constexpr Result ResultInvalidValue = {0x8b4};
constexpr Result ResultBufferFull = {0xcb4};
constexpr Result ResultTooManyKeys = {0xeb4};
constexpr Result ResultReportTooLarge = {0x14b4};

constexpr int KeyValueCountMax = 100;

// The bytes of the msgpack header of a string of the length.
size_t GetStringHeaderSize(uint32_t length) {
  return length < 0x20 ? 1 : length < 0x100 ? 2 : length < 0x10000 ? 3 : 5;
}

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

namespace nn::srepo::detail {

namespace {

[[gnu::always_inline]] inline Result FinishKeyValue(size_t* pOutPosition,
  uint8_t* buffer, size_t size, size_t position, size_t sizeMax) {
  if (position > sizeMax) {
    return ResultReportTooLarge;
  }
  ReportGenerator::IncrementKeyValueCount(buffer, size);
  *pOutPosition = position;
  return Result{0};
}

}

Result ReportGenerator::AddKey(size_t* pOutPosition, const char* key,
  uint8_t* buffer, size_t size, size_t position) {
  size_t length = 0;
  if (!VerifyKey(&length, key)) {
    return ResultInvalidKey;
  }
  if (CheckKeyDuplication(buffer, position, key)) {
    return ResultDuplicatedKey;
  }
  if (GetKeyValueCount(buffer, size) >= KeyValueCountMax) {
    return ResultTooManyKeys;
  }
  util::MessagePackWriter::StreamParam stream = {buffer, size, position};
  util::MessagePackWriter writer(&stream);
  const uint32_t keyLength = static_cast<uint32_t>(length);
  if (keyLength + GetStringHeaderSize(keyLength) >
    stream.size - stream.position) {
    return ResultBufferFull;
  }
  if (!writer.WriteString(key, keyLength)) {
    return ResultInvalidKey;
  }
  *pOutPosition = stream.position;
  return Result{0};
}

Result ReportGenerator::AddKeyValue(size_t* pOutPosition, const char* key,
  long value, uint8_t* buffer, size_t size, size_t position, size_t sizeMax) {
  size_t keyEnd = 0;
  NN_RESULT_DO(AddKey(&keyEnd, key, buffer, size, position));
  util::MessagePackWriter::StreamParam stream = {buffer, size, keyEnd};
  util::MessagePackWriter writer(&stream);
  if (!writer.WriteIntegerAutoSize(value)) {
    return ResultBufferFull;
  }
  return FinishKeyValue(pOutPosition, buffer, size, stream.position, sizeMax);
}

Result ReportGenerator::AddKeyValue(size_t* pOutPosition, const char* key,
  const Any64BitId& value, uint8_t* buffer, size_t size, size_t position,
  size_t sizeMax) {
  size_t keyEnd = 0;
  NN_RESULT_DO(AddKey(&keyEnd, key, buffer, size, position));
  util::MessagePackWriter::StreamParam stream = {buffer, size, keyEnd};
  util::MessagePackWriter writer(&stream);
  const uint64_t id = __builtin_bswap64(value.id);
  if (!writer.WriteExtension(MsgpackExtensionType_Any64BitId, &id,
    sizeof(id))) {
    return ResultBufferFull;
  }
  return FinishKeyValue(pOutPosition, buffer, size, stream.position, sizeMax);
}

Result ReportGenerator::AddKeyValue(size_t* pOutPosition, const char* key,
  float value, uint8_t* buffer, size_t size, size_t position, size_t sizeMax) {
  if (!VerifyFloatValue(value)) {
    return ResultInvalidValue;
  }
  size_t keyEnd = 0;
  NN_RESULT_DO(AddKey(&keyEnd, key, buffer, size, position));
  util::MessagePackWriter::StreamParam stream = {buffer, size, keyEnd};
  util::MessagePackWriter writer(&stream);
  if (!writer.WriteFloat32(value)) {
    return ResultBufferFull;
  }
  return FinishKeyValue(pOutPosition, buffer, size, stream.position, sizeMax);
}

Result ReportGenerator::AddKeyValue(size_t* pOutPosition, const char* key,
  double value, uint8_t* buffer, size_t size, size_t position,
  size_t sizeMax) {
  if (!VerifyDoubleValue(value)) {
    return ResultInvalidValue;
  }
  size_t keyEnd = 0;
  NN_RESULT_DO(AddKey(&keyEnd, key, buffer, size, position));
  util::MessagePackWriter::StreamParam stream = {buffer, size, keyEnd};
  util::MessagePackWriter writer(&stream);
  if (!writer.WriteFloat64(value)) {
    return ResultBufferFull;
  }
  return FinishKeyValue(pOutPosition, buffer, size, stream.position, sizeMax);
}

Result ReportGenerator::AddKeyValue(size_t* pOutPosition, const char* key,
  const char* value, uint8_t* buffer, size_t size, size_t position,
  size_t sizeMax) {
  if (value == nullptr) {
    return ResultInvalidValue;
  }
  size_t keyEnd = 0;
  NN_RESULT_DO(AddKey(&keyEnd, key, buffer, size, position));
  util::MessagePackWriter::StreamParam stream = {buffer, size, keyEnd};
  util::MessagePackWriter writer(&stream);
  size_t length = 0;
  if (!VerifyStringValueLength(&length, value,
    stream.size - stream.position)) {
    return ResultBufferFull;
  }
  if (!writer.WriteString(value, static_cast<uint32_t>(length))) {
    return ResultInvalidValue;
  }
  return FinishKeyValue(pOutPosition, buffer, size, stream.position, sizeMax);
}

Result ReportGenerator::AddKeyValue(size_t* pOutPosition, const char* key,
  const void* value, size_t valueSize, uint8_t* buffer, size_t size,
  size_t position, size_t sizeMax) {
  if (!VerifyBinaryValue(value, valueSize)) {
    return ResultInvalidValue;
  }
  size_t keyEnd = 0;
  NN_RESULT_DO(AddKey(&keyEnd, key, buffer, size, position));
  util::MessagePackWriter::StreamParam stream = {buffer, size, keyEnd};
  util::MessagePackWriter writer(&stream);
  if (!writer.WriteBinary(value, static_cast<uint32_t>(valueSize))) {
    return ResultBufferFull;
  }
  return FinishKeyValue(pOutPosition, buffer, size, stream.position, sizeMax);
}

Result ReportGenerator::AddKeyValue(size_t* pOutPosition, const char* key,
  bool value, uint8_t* buffer, size_t size, size_t position, size_t sizeMax) {
  size_t keyEnd = 0;
  NN_RESULT_DO(AddKey(&keyEnd, key, buffer, size, position));
  util::MessagePackWriter::StreamParam stream = {buffer, size, keyEnd};
  util::MessagePackWriter writer(&stream);
  if (!writer.WriteBool(value)) {
    return ResultBufferFull;
  }
  return FinishKeyValue(pOutPosition, buffer, size, stream.position, sizeMax);
}

}

namespace nn::srepo::detail {

namespace {

[[gnu::always_inline]] inline Result AddStructKey(size_t* pOutPosition,
  const char* key, uint8_t* buffer, size_t size, size_t position) {
  size_t length = 0;
  if (!VerifyKey(&length, key)) {
    return ResultInvalidKey;
  }
  if (StructGenerator::CheckKeyDuplication(buffer, position, key)) {
    return ResultDuplicatedKey;
  }
  util::MessagePackWriter::StreamParam stream = {buffer, size, position};
  util::MessagePackWriter writer(&stream);
  const uint32_t keyLength = static_cast<uint32_t>(length);
  if (keyLength + GetStringHeaderSize(keyLength) >
    stream.size - stream.position) {
    return ResultBufferFull;
  }
  if (!writer.WriteString(key, keyLength)) {
    return ResultInvalidKey;
  }
  *pOutPosition = stream.position;
  return Result{0};
}

}

Result StructGenerator::AddKey(size_t* pOutPosition, const char* key,
  uint8_t* buffer, size_t size, size_t position) {
  return AddStructKey(pOutPosition, key, buffer, size, position);
}

Result StructGenerator::AddKeyValue(size_t* pOutPosition, const char* key,
  long value, uint8_t* buffer, size_t size, size_t position) {
  size_t keyEnd = 0;
  NN_RESULT_DO(AddStructKey(&keyEnd, key, buffer, size, position));
  util::MessagePackWriter::StreamParam stream = {buffer, size, keyEnd};
  util::MessagePackWriter writer(&stream);
  if (!writer.WriteSignedIntegerAutoSize(value)) {
    return ResultBufferFull;
  }
  *pOutPosition = stream.position;
  return Result{0};
}

Result StructGenerator::AddKeyValue(size_t* pOutPosition, const char* key,
  const Any64BitId& value, uint8_t* buffer, size_t size, size_t position) {
  size_t keyEnd = 0;
  NN_RESULT_DO(AddStructKey(&keyEnd, key, buffer, size, position));
  util::MessagePackWriter::StreamParam stream = {buffer, size, keyEnd};
  util::MessagePackWriter writer(&stream);
  const uint64_t id = __builtin_bswap64(value.id);
  if (!writer.WriteExtension(MsgpackExtensionType_Any64BitId, &id,
    sizeof(id))) {
    return ResultBufferFull;
  }
  *pOutPosition = stream.position;
  return Result{0};
}

Result StructGenerator::AddKeyValue(size_t* pOutPosition, const char* key,
  float value, uint8_t* buffer, size_t size, size_t position) {
  if (!VerifyFloatValue(value)) {
    return ResultInvalidValue;
  }
  size_t keyEnd = 0;
  NN_RESULT_DO(AddStructKey(&keyEnd, key, buffer, size, position));
  util::MessagePackWriter::StreamParam stream = {buffer, size, keyEnd};
  util::MessagePackWriter writer(&stream);
  if (!writer.WriteFloat32(value)) {
    return ResultBufferFull;
  }
  *pOutPosition = stream.position;
  return Result{0};
}

Result StructGenerator::AddKeyValue(size_t* pOutPosition, const char* key,
  double value, uint8_t* buffer, size_t size, size_t position) {
  if (!VerifyDoubleValue(value)) {
    return ResultInvalidValue;
  }
  size_t keyEnd = 0;
  NN_RESULT_DO(AddStructKey(&keyEnd, key, buffer, size, position));
  util::MessagePackWriter::StreamParam stream = {buffer, size, keyEnd};
  util::MessagePackWriter writer(&stream);
  if (!writer.WriteFloat64(value)) {
    return ResultBufferFull;
  }
  *pOutPosition = stream.position;
  return Result{0};
}

Result StructGenerator::AddKeyValue(size_t* pOutPosition, const char* key,
  const char* value, uint8_t* buffer, size_t size, size_t position) {
  if (value == nullptr) {
    return ResultInvalidValue;
  }
  size_t keyEnd = 0;
  NN_RESULT_DO(AddStructKey(&keyEnd, key, buffer, size, position));
  util::MessagePackWriter::StreamParam stream = {buffer, size, keyEnd};
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

Result StructGenerator::AddKeyValue(size_t* pOutPosition, const char* key,
  bool value, uint8_t* buffer, size_t size, size_t position) {
  size_t keyEnd = 0;
  NN_RESULT_DO(AddStructKey(&keyEnd, key, buffer, size, position));
  util::MessagePackWriter::StreamParam stream = {buffer, size, keyEnd};
  util::MessagePackWriter writer(&stream);
  if (!writer.WriteBool(value)) {
    return ResultBufferFull;
  }
  *pOutPosition = stream.position;
  return Result{0};
}

}
