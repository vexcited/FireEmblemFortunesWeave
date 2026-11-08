#include <math.h>
#include <string.h>

#include "nn/srepo/detail/srepo_generator.hpp"
#include "nn/srepo/detail/srepo_verifier.hpp"
#include "nn/util/string_util.hpp"

namespace nn::srepo::detail {

namespace {

constexpr size_t kEventIdLengthMax = 31;
constexpr size_t kKeyLengthMax = 63;
constexpr size_t kDepthMax = 3;
constexpr uint32_t kKeyValueCountMax = 100;

// The payload bytes the service fills in for the placeholder types 0x40
// to 0x42.
constexpr size_t PlaceholderSizes[] = {16, 1, 10};

using Reader = util::MessagePackReader;
using Type = util::MessagePackReader::AnyDataType;

struct KeyInfo {
  size_t length;
  size_t position;
};

struct NestLevel {
  uint32_t index;
  uint32_t count;
  bool isMap;
};

bool IsDigit(char c) {
  return c >= '0' && c <= '9';
}

bool IsLower(char c) {
  return c >= 'a' && c <= 'z';
}

bool IsUpper(char c) {
  return c >= 'A' && c <= 'Z';
}

bool IsKeyHead(char c) {
  return IsLower(c) || c == '_' || IsUpper(c);
}

bool IsKeyChar(char c) {
  return IsDigit(c) || IsKeyHead(c);
}

bool IsAny64BitId(const Reader::AnyData& data) {
  return data.extension.type == MsgpackExtensionType_Any64BitId &&
    data.extension.length == sizeof(Any64BitId);
}

const char* GetString(const Reader::StreamParam& stream, size_t position) {
  return reinterpret_cast<const char*>(stream.buffer + position);
}

}

bool VerifyEventId(size_t* pOutLength, const char* id) {
  if (id == nullptr) {
    return false;
  }
  const char* p = id;
  while (*p != '\0') {
    if (!IsDigit(*p) && !IsLower(*p) && *p != '_') {
      return false;
    }
    p++;
    if (static_cast<size_t>(p - id) > kEventIdLengthMax) {
      return false;
    }
  }
  *pOutLength = p - id;
  return p != id;
}

// The old keys also allow colons and start with any key character.
bool VerifyKeyOld(const char* key, size_t length) {
  if (key == nullptr || length - 1 >= kKeyLengthMax) {
    return false;
  }
  for (size_t i = 0; i < length; i++) {
    if (!IsKeyChar(key[i]) && key[i] != ':') {
      return false;
    }
  }
  return true;
}

bool VerifyKey(size_t* pOutLength, const char* key) {
  if (key == nullptr || !IsKeyHead(key[0])) {
    return false;
  }
  size_t length = 1;
  while (length <= kKeyLengthMax && IsKeyChar(key[length])) {
    length++;
  }
  if (length - 1 >= kKeyLengthMax || key[length] != '\0') {
    return false;
  }
  *pOutLength = length;
  return true;
}

bool VerifyKey(const char* key, size_t length) {
  if (key == nullptr || length - 1 >= kKeyLengthMax) {
    return false;
  }
  if (!IsKeyHead(key[0])) {
    return false;
  }
  size_t i = 1;
  while (i < length && IsKeyChar(key[i])) {
    i++;
  }
  return i == length;
}

// The length fits the remaining size once the msgpack header is added.
bool VerifyStringValueLength(size_t* pOutLength, const char* value,
  size_t sizeMax) {
  if (sizeMax == 0) {
    return false;
  }
  const uint32_t header = sizeMax < 0x21 ? 1 : sizeMax < 0x102 ? 2 :
    sizeMax < 0x10003 ? 3 : sizeMax == 0x10003 ? 4 : 5;
  const uint32_t lengthMax = static_cast<uint32_t>(sizeMax) - header;
  const uint32_t limit = lengthMax + 1;
  if (limit == 0) {
    *pOutLength = 0;
    return true;
  }
  uint32_t length = 0;
  while (length != limit && value[length] != '\0') {
    length++;
  }
  const size_t result = static_cast<size_t>(static_cast<int>(length));
  if (result > lengthMax) {
    return false;
  }
  *pOutLength = result;
  return true;
}

bool VerifyFloatValue(float value) {
  return isfinite(value);
}

bool VerifyDoubleValue(double value) {
  return isfinite(value);
}

bool VerifyBinaryValue(const void* value, size_t size) {
  return value != nullptr || size == 0;
}

bool IsSameValueType(util::MessagePackReader::AnyDataType lhs,
  util::MessagePackReader::AnyDataType rhs) {
  using Type = util::MessagePackReader::AnyDataType;
  if (lhs == rhs) {
    return true;
  }

  // Integers of either sign and floats of either width are interchangeable.
  const bool lhsIsInteger = lhs == Type::AnyDataType_UnsignedInteger ||
    lhs == Type::AnyDataType_SignedInteger;
  const bool rhsIsInteger = rhs == Type::AnyDataType_UnsignedInteger ||
    rhs == Type::AnyDataType_SignedInteger;
  const bool lhsIsFloat =
    lhs == Type::AnyDataType_Float32 || lhs == Type::AnyDataType_Float64;
  const bool rhsIsFloat =
    rhs == Type::AnyDataType_Float32 || rhs == Type::AnyDataType_Float64;
  return (lhsIsInteger && rhsIsInteger) || (lhsIsFloat && rhsIsFloat);
}

bool VerifyArrayValue(size_t* pOutSize, const uint8_t* data, size_t size,
  size_t count, size_t depth) {
  if (depth > kDepthMax) {
    return false;
  }
  Reader::StreamParam stream = {data, size, 0};
  Reader reader(&stream);
  Reader::AnyData any = {};
  Type firstType = Type::AnyDataType_Nil;
  const uint8_t* firstData = nullptr;
  size_t firstSize = 0;
  size_t firstCount = 0;
  for (size_t i = 0; i < count; i++) {
    if (!reader.ReadCurrent(&any)) {
      return false;
    }
    if (i == 0) {
      firstType = any.type;
    }
    else if (!IsSameValueType(firstType, any.type)) {
      return false;
    }

    switch (any.type) {
      case Type::AnyDataType_Bool:
      case Type::AnyDataType_UnsignedInteger:
      case Type::AnyDataType_SignedInteger:
      case Type::AnyDataType_String:
        break;
      case Type::AnyDataType_Extension:
        if (!IsAny64BitId(any)) {
          return false;
        }
        break;
      case Type::AnyDataType_Float32:
        if (!VerifyFloatValue(any.float32Value)) {
          return false;
        }
        break;
      case Type::AnyDataType_Float64:
        if (!VerifyDoubleValue(any.float64Value)) {
          return false;
        }
        break;
      case Type::AnyDataType_Map: {
        size_t structSize = 0;
        const uint8_t* pStruct = stream.buffer + stream.position;
        const size_t rest = stream.size - stream.position;
        if (!VerifyStructValue(&structSize, pStruct, rest, any.count,
            depth + 1)) {
          return false;
        }
        if (i == 0) {
          firstData = pStruct;
          firstSize = structSize;
          firstCount = any.count;
        }
        else if (!IsSameNestedType(firstData, firstSize, firstCount, pStruct,
            rest, any.count, true, depth + 1)) {
          return false;
        }
        stream.position += structSize;
        break;
      }
      default:
        return false;
    }
  }
  *pOutSize = stream.position;
  return true;
}

// Keys must be unique regardless of case.
bool VerifyStructValue(size_t* pOutSize, const uint8_t* data, size_t size,
  size_t count, size_t depth) {
  if (depth > kDepthMax) {
    return false;
  }
  Reader::StreamParam stream = {data, size, 0};
  Reader reader(&stream);
  Reader::AnyData any = {};
  for (size_t i = 0; i < count; i++) {
    if (!reader.ReadCurrent(&any) || any.type != Type::AnyDataType_String) {
      return false;
    }
    const char* key = GetString(stream, any.string.position);
    if (!VerifyKey(key, any.string.length)) {
      return false;
    }

    Reader::StreamParam previous = {data, size, 0};
    Reader previousReader(&previous);
    Reader::AnyData other = {};
    for (size_t j = 0; j < i; j++) {
      if (!previousReader.ReadCurrent(&other)) {
        return false;
      }
      if (any.string.length == other.string.length &&
          util::Strnicmp(key, GetString(previous, other.string.position),
            static_cast<int>(any.string.length)) == 0) {
        return false;
      }
      if (!previousReader.ReadCurrent(&other)) {
        return false;
      }
      if (other.type == Type::AnyDataType_Array ||
          other.type == Type::AnyDataType_Map) {
        size_t skipped = 0;
        if (!SkipNestedTypeValue(&skipped,
            previous.buffer + previous.position,
            previous.size - previous.position, other.count,
            other.type == Type::AnyDataType_Map, depth + 1)) {
          return false;
        }
        previous.position += skipped;
      }
    }

    if (!reader.ReadCurrent(&any)) {
      return false;
    }
    switch (any.type) {
      case Type::AnyDataType_Bool:
      case Type::AnyDataType_UnsignedInteger:
      case Type::AnyDataType_SignedInteger:
      case Type::AnyDataType_String:
        break;
      case Type::AnyDataType_Extension:
        if (!IsAny64BitId(any)) {
          return false;
        }
        break;
      case Type::AnyDataType_Float32:
        if (!VerifyFloatValue(any.float32Value)) {
          return false;
        }
        break;
      case Type::AnyDataType_Float64:
        if (!VerifyDoubleValue(any.float64Value)) {
          return false;
        }
        break;
      case Type::AnyDataType_Array: {
        size_t arraySize = 0;
        if (!VerifyArrayValue(&arraySize, stream.buffer + stream.position,
            stream.size - stream.position, any.count, depth + 1)) {
          return false;
        }
        stream.position += arraySize;
        break;
      }
      case Type::AnyDataType_Map: {
        size_t structSize = 0;
        if (!VerifyStructValue(&structSize, stream.buffer + stream.position,
            stream.size - stream.position, any.count, depth + 1)) {
          return false;
        }
        stream.position += structSize;
        break;
      }
      default:
        return false;
    }
  }
  *pOutSize = stream.position;
  return true;
}

bool IsSameNestedType(const uint8_t* lhs, size_t lhsSize, size_t lhsCount,
  const uint8_t* rhs, size_t rhsSize, size_t rhsCount, bool isMap,
  size_t depth) {
  if (lhsCount != rhsCount) {
    return false;
  }
  if (depth > kDepthMax) {
    return false;
  }
  Reader::StreamParam lhsStream = {lhs, lhsSize, 0};
  Reader lhsReader(&lhsStream);
  Reader::AnyData l = {};
  Reader::StreamParam rhsStream = {rhs, rhsSize, 0};
  Reader rhsReader(&rhsStream);
  Reader::AnyData r = {};
  for (uint32_t i = 0; i < lhsCount; i++) {
    if (isMap) {
      if (!lhsReader.ReadCurrent(&l) || l.type != Type::AnyDataType_String) {
        return false;
      }
      if (!rhsReader.ReadCurrent(&r) || r.type != Type::AnyDataType_String) {
        return false;
      }
      if (l.string.length != r.string.length ||
          memcmp(lhsStream.buffer + l.string.position,
            rhsStream.buffer + r.string.position, l.string.length) != 0) {
        return false;
      }
    }
    if (!lhsReader.ReadCurrent(&l) || !rhsReader.ReadCurrent(&r)) {
      return false;
    }
    if (l.type != r.type) {
      if (!IsSameValueType(l.type, r.type)) {
        return false;
      }
      continue;
    }
    if (l.type == Type::AnyDataType_Array && !isMap) {
      return false;
    }
    if (l.type != Type::AnyDataType_Array &&
        l.type != Type::AnyDataType_Map) {
      continue;
    }

    size_t lhsNested = 0;
    if (!SkipNestedTypeValue(&lhsNested, lhsStream.buffer + lhsStream.position,
        lhsStream.size - lhsStream.position, l.count,
        l.type == Type::AnyDataType_Map, depth + 1)) {
      return false;
    }
    size_t rhsNested = 0;
    if (!SkipNestedTypeValue(&rhsNested, rhsStream.buffer + rhsStream.position,
        rhsStream.size - rhsStream.position, r.count,
        r.type == Type::AnyDataType_Map, depth + 1)) {
      return false;
    }
    if (!IsSameNestedType(lhsStream.buffer + lhsStream.position, lhsNested,
        l.count, rhsStream.buffer + rhsStream.position, rhsNested, r.count,
        l.type == Type::AnyDataType_Map, depth + 1)) {
      return false;
    }
    lhsStream.position += lhsNested;
    rhsStream.position += rhsNested;
  }
  return true;
}

// Walks the nested containers with an explicit stack indexed by depth. A
// failed key read only fails when the type left behind is not a string.
bool SkipNestedTypeValue(size_t* pOutSize, const uint8_t* data, size_t size,
  size_t count, bool isMap, size_t depth) {
  Reader::StreamParam stream = {data, size, 0};
  Reader reader(&stream);
  Reader::AnyData any = {};
  NestLevel levels[kDepthMax + 1] = {};
  levels[depth].count = static_cast<uint32_t>(count);
  levels[depth].isMap = isMap;
  for (size_t level = depth; level >= depth; level--) {
    while (levels[level].index++ < levels[level].count) {
      if (levels[level].isMap && !reader.ReadCurrent(&any) &&
          any.type != Type::AnyDataType_String) {
        return false;
      }
      if (!reader.ReadCurrent(&any)) {
        return false;
      }
      if (any.type == Type::AnyDataType_Array ||
          any.type == Type::AnyDataType_Map) {
        level++;
        if (level > kDepthMax) {
          return false;
        }
        levels[level].index = 0;
        levels[level].count = any.count;
        levels[level].isMap = any.type == Type::AnyDataType_Map;
      }
    }
  }
  *pOutSize = stream.position;
  return true;
}

bool VerifyReportOld(const uint8_t* data, size_t size, size_t sizeMax) {
  if (size > sizeMax) {
    return false;
  }
  Reader::StreamParam stream = {data, size, 0};
  Reader reader(&stream);
  Reader::AnyData any = {};
  if (!reader.ReadCurrent(&any) || any.type != Type::AnyDataType_Map) {
    return false;
  }
  const uint32_t count = any.count;
  if (count == 0 || count > kKeyValueCountMax) {
    return false;
  }
  KeyInfo keys[kKeyValueCountMax] = {};
  for (size_t i = 0; i < count; i++) {
    if (!reader.ReadCurrent(&any) || any.type != Type::AnyDataType_String) {
      return false;
    }
    if (!VerifyKeyOld(GetString(stream, any.string.position),
        any.string.length)) {
      return false;
    }
    keys[i].length = any.string.length;
    keys[i].position = any.string.position;
    if (!reader.ReadCurrent(&any)) {
      return false;
    }
    switch (any.type) {
      case Type::AnyDataType_Float64:
      case Type::AnyDataType_UnsignedInteger:
      case Type::AnyDataType_SignedInteger:
      case Type::AnyDataType_String:
        break;
      case Type::AnyDataType_Extension:
        if (!IsAny64BitId(any)) {
          return false;
        }
        break;
      default:
        return false;
    }
  }
  if (stream.position != stream.size) {
    return false;
  }
  for (int i = 0; i < static_cast<int>(count) - 1; i++) {
    for (uint32_t j = i + 1; j < count; j++) {
      if (keys[i].length == keys[j].length &&
          util::Strnicmp(GetString(stream, keys[i].position),
            GetString(stream, keys[j].position),
            static_cast<int>(keys[i].length)) == 0) {
        return false;
      }
    }
  }
  return true;
}

bool VerifyReport(const uint8_t* data, size_t size, size_t sizeMax) {
  if (size > sizeMax) {
    return false;
  }
  Reader::StreamParam stream = {data, size, 0};
  Reader reader(&stream);
  Reader::AnyData any = {};
  if (!reader.ReadCurrent(&any) || any.type != Type::AnyDataType_Map) {
    return false;
  }
  const uint32_t count = any.count;
  if (count == 0 || count > kKeyValueCountMax) {
    return false;
  }
  KeyInfo keys[kKeyValueCountMax] = {};
  for (size_t i = 0; i < count; i++) {
    if (!reader.ReadCurrent(&any) || any.type != Type::AnyDataType_String) {
      return false;
    }
    if (!VerifyKey(GetString(stream, any.string.position),
        any.string.length)) {
      return false;
    }
    keys[i].length = any.string.length;
    keys[i].position = any.string.position;
    if (!reader.ReadCurrent(&any)) {
      return false;
    }
    switch (any.type) {
      case Type::AnyDataType_Bool:
      case Type::AnyDataType_UnsignedInteger:
      case Type::AnyDataType_SignedInteger:
      case Type::AnyDataType_String:
        break;
      case Type::AnyDataType_Binary:
        if (!VerifyBinaryValue(stream.buffer + any.string.position,
            any.string.length)) {
          return false;
        }
        break;
      case Type::AnyDataType_Extension:
        if (any.extension.type == MsgpackExtensionType_Any64BitId) {
          if (any.extension.length != sizeof(Any64BitId)) {
            return false;
          }
        }
        else {
          const uint8_t index =
            static_cast<uint8_t>(any.extension.type - 0x40);
          if (index > 2 || any.extension.length != PlaceholderSizes[index]) {
            return false;
          }
        }
        break;
      case Type::AnyDataType_Float32:
        if (!VerifyFloatValue(any.float32Value)) {
          return false;
        }
        break;
      case Type::AnyDataType_Float64:
        if (!VerifyDoubleValue(any.float64Value)) {
          return false;
        }
        break;
      case Type::AnyDataType_Array: {
        size_t arraySize = 0;
        if (!VerifyArrayValue(&arraySize, stream.buffer + stream.position,
            stream.size - stream.position, any.count, 1)) {
          return false;
        }
        stream.position += arraySize;
        break;
      }
      case Type::AnyDataType_Map: {
        size_t structSize = 0;
        if (!VerifyStructValue(&structSize, stream.buffer + stream.position,
            stream.size - stream.position, any.count, 1)) {
          return false;
        }
        stream.position += structSize;
        break;
      }
      default:
        return false;
    }
  }
  if (stream.position != stream.size) {
    return false;
  }
  for (int i = 0; i < static_cast<int>(count) - 1; i++) {
    for (uint32_t j = i + 1; j < count; j++) {
      if (keys[i].length == keys[j].length &&
          util::Strnicmp(GetString(stream, keys[i].position),
            GetString(stream, keys[j].position),
            static_cast<int>(keys[i].length)) == 0) {
        return false;
      }
    }
  }
  return true;
}

}
