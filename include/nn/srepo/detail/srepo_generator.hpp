#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/result.hpp"
#include "nn/util/message_pack.hpp"

namespace nn::srepo {

struct Any64BitId {
  uint64_t id;
};

class Array;
class Struct;

namespace detail {

bool VerifyEventId(size_t* pOutLength, const char* eventId);

// The extension types the reports store, after the msgpack extension tag.
enum MsgpackExtensionType : uint8_t {
  MsgpackExtensionType_Any64BitId,
};

struct ReportGenerator {
  static void Initialize(size_t* pOutPosition, uint8_t* buffer, size_t size);
  static int GetKeyValueCount(const uint8_t* buffer, size_t size);
  static void IncrementKeyValueCount(uint8_t* buffer, size_t size);
  static Result AddKey(size_t* pOutPosition, const char* key, uint8_t* buffer,
    size_t size, size_t position);
  static bool CheckKeyDuplication(const uint8_t* buffer, size_t size,
    const char* key);
  static Result AddKeyValue(size_t* pOutPosition, const char* key, long value,
    uint8_t* buffer, size_t size, size_t position, size_t sizeMax);
  static Result AddKeyValue(size_t* pOutPosition, const char* key,
    const Any64BitId& value, uint8_t* buffer, size_t size, size_t position,
    size_t sizeMax);
  static Result AddKeyValue(size_t* pOutPosition, const char* key, float value,
    uint8_t* buffer, size_t size, size_t position, size_t sizeMax);
  static Result AddKeyValue(size_t* pOutPosition, const char* key,
    double value, uint8_t* buffer, size_t size, size_t position,
    size_t sizeMax);
  static Result AddKeyValue(size_t* pOutPosition, const char* key,
    const char* value, uint8_t* buffer, size_t size, size_t position,
    size_t sizeMax);
  static Result AddKeyValue(size_t* pOutPosition, const char* key, bool value,
    uint8_t* buffer, size_t size, size_t position, size_t sizeMax);
  static Result AddKeyValue(size_t* pOutPosition, const char* key,
    const void* value, size_t valueSize, uint8_t* buffer, size_t size,
    size_t position, size_t sizeMax);
  static Result AddKeyValue(size_t* pOutPosition, const char* key,
    const Array& value, uint8_t* buffer, size_t size, size_t position,
    size_t sizeMax);
  static Result AddKeyValue(size_t* pOutPosition, const char* key,
    const Struct& value, uint8_t* buffer, size_t size, size_t position,
    size_t sizeMax);
  static Result AddPlaceholder(size_t* pOutPosition, const char* key,
    int8_t type, uint8_t* buffer, size_t size, size_t position,
    size_t sizeMax);
};

struct ArrayGenerator {
  static bool IsSameValueType(util::MessagePackReader::AnyDataType type,
    uint8_t* buffer, size_t size);
  static bool IsSameExtensionType(MsgpackExtensionType type, uint8_t* buffer,
    size_t size);
  static Result AddValue(size_t* pOutPosition, long value, uint8_t* buffer,
    size_t size, size_t position);
  static Result AddValue(size_t* pOutPosition, const Any64BitId& value,
    uint8_t* buffer, size_t size, size_t position);
  static Result AddValue(size_t* pOutPosition, float value, uint8_t* buffer,
    size_t size, size_t position);
  static Result AddValue(size_t* pOutPosition, double value, uint8_t* buffer,
    size_t size, size_t position);
  static Result AddValue(size_t* pOutPosition, const char* value,
    uint8_t* buffer, size_t size, size_t position);
  static Result AddValue(size_t* pOutPosition, bool value, uint8_t* buffer,
    size_t size, size_t position);
  static Result AddValue(size_t* pOutPosition, const Struct& value,
    uint8_t* buffer, size_t size, size_t position);
};

struct StructGenerator {
  static Result AddKey(size_t* pOutPosition, const char* key, uint8_t* buffer,
    size_t size, size_t position);
  static bool CheckKeyDuplication(const uint8_t* buffer, size_t size,
    const char* key);
  static Result AddKeyValue(size_t* pOutPosition, const char* key, long value,
    uint8_t* buffer, size_t size, size_t position);
  static Result AddKeyValue(size_t* pOutPosition, const char* key,
    const Any64BitId& value, uint8_t* buffer, size_t size, size_t position);
  static Result AddKeyValue(size_t* pOutPosition, const char* key, float value,
    uint8_t* buffer, size_t size, size_t position);
  static Result AddKeyValue(size_t* pOutPosition, const char* key,
    double value, uint8_t* buffer, size_t size, size_t position);
  static Result AddKeyValue(size_t* pOutPosition, const char* key,
    const char* value, uint8_t* buffer, size_t size, size_t position);
  static Result AddKeyValue(size_t* pOutPosition, const char* key, bool value,
    uint8_t* buffer, size_t size, size_t position);
  static Result AddValue(size_t* pOutPosition, const char* key,
    const Array& value, uint8_t* buffer, size_t size, size_t position);
  static Result AddValue(size_t* pOutPosition, const char* key,
    const Struct& value, uint8_t* buffer, size_t size, size_t position);
};

}

}
