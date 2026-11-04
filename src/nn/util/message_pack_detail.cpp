#include "nn/util/message_pack.hpp"

#include <string.h>

namespace nn::util::detail::msgpack {

namespace {

size_t GetRemainSize(const WriterStream* stream) {
  return stream->size - stream->position;
}

void WriteByte(WriterStream* stream, uint8_t value) {
  stream->buffer[stream->position++] = value;
}

void WriteBigEndian16(WriterStream* stream, uint16_t value) {
  uint16_t swapped = __builtin_bswap16(value);
  memcpy(stream->buffer + stream->position, &swapped, sizeof(swapped));
  stream->position += sizeof(swapped);
}

void WriteBigEndian32(WriterStream* stream, uint32_t value) {
  uint32_t swapped = __builtin_bswap32(value);
  memcpy(stream->buffer + stream->position, &swapped, sizeof(swapped));
  stream->position += sizeof(swapped);
}

void WriteBigEndian64(WriterStream* stream, uint64_t value) {
  uint64_t swapped = __builtin_bswap64(value);
  memcpy(stream->buffer + stream->position, &swapped, sizeof(swapped));
  stream->position += sizeof(swapped);
}

bool WriteData(WriterStream* stream, const void* data, uint32_t length) {
  if (length > 0) {
    memcpy(stream->buffer + stream->position, data, length);
    stream->position += length;
  }
  return true;
}

bool ReadByte(ReaderStream* stream, uint8_t* value) {
  if (stream->size == stream->position) {
    return false;
  }
  *value = stream->buffer[stream->position++];
  return true;
}

bool ReadBigEndian16(ReaderStream* stream, uint16_t* value) {
  if (stream->size - stream->position < sizeof(*value)) {
    return false;
  }
  uint16_t raw;
  memcpy(&raw, stream->buffer + stream->position, sizeof(raw));
  *value = __builtin_bswap16(raw);
  return true;
}

bool ReadBigEndian32(ReaderStream* stream, uint32_t* value) {
  if (stream->size - stream->position < sizeof(*value)) {
    return false;
  }
  uint32_t raw;
  memcpy(&raw, stream->buffer + stream->position, sizeof(raw));
  *value = __builtin_bswap32(raw);
  return true;
}

bool ReadBigEndian64(ReaderStream* stream, uint64_t* value) {
  if (stream->size - stream->position < sizeof(*value)) {
    return false;
  }
  uint64_t raw;
  memcpy(&raw, stream->buffer + stream->position, sizeof(raw));
  *value = __builtin_bswap64(raw);
  return true;
}

bool ReadLength(ReaderStream* stream, uint8_t tag, uint8_t tag8,
  size_t* length) {
  if (tag == tag8) {
    uint8_t value;
    if (!ReadByte(stream, &value)) {
      return false;
    }
    *length = value;
  }
  else if (tag == tag8 + 1) {
    uint16_t value;
    if (!ReadBigEndian16(stream, &value)) {
      return false;
    }
    *length = value;
    stream->position += sizeof(value);
  }
  else {
    uint32_t value;
    if (!ReadBigEndian32(stream, &value)) {
      return false;
    }
    *length = value;
    stream->position += sizeof(value);
  }
  return true;
}

bool ReadCount(ReaderStream* stream, uint8_t tag, uint8_t tag16,
  uint32_t* count) {
  if (tag == tag16 + 1) {
    uint32_t value;
    if (!ReadBigEndian32(stream, &value)) {
      return false;
    }
    *count = value;
    stream->position += sizeof(value);
  }
  else if (tag == tag16) {
    uint16_t value;
    if (!ReadBigEndian16(stream, &value)) {
      return false;
    }
    *count = value;
    stream->position += sizeof(value);
  }
  else {
    *count = tag & 0xf;
  }
  return true;
}

}

bool ReadCurrent(MessagePackReader::AnyData* data, ReaderStream* stream) {
  using AnyData = MessagePackReader;

  uint8_t tag;
  if (!ReadByte(stream, &tag)) {
    return false;
  }

  if ((tag & 0xe0) == 0xa0 || (tag >= 0xd9 && tag <= 0xdb)) {
    data->type = AnyData::AnyDataType_String;
    if ((tag & 0xe0) == 0xa0) {
      data->string.length = tag & 0x1f;
    }
    else if (!ReadLength(stream, tag, 0xd9, &data->string.length)) {
      return false;
    }
    size_t length = data->string.length;
    if (stream->size - stream->position < length) {
      return false;
    }
    if (length != 0 && !IsValidUtf8String(
      reinterpret_cast<const char*>(stream->buffer + stream->position),
      length)) {
      return false;
    }
    data->string.position = stream->position;
    stream->position += data->string.length;
    return true;
  }

  if ((tag & 0xf0) == 0x90 || (tag & 0xfe) == 0xdc) {
    data->type = AnyData::AnyDataType_Array;
    return ReadCount(stream, tag, 0xdc, &data->count);
  }

  if ((tag & 0xf0) == 0x80 || (tag & 0xfe) == 0xde) {
    data->type = AnyData::AnyDataType_Map;
    return ReadCount(stream, tag, 0xde, &data->count);
  }

  if (tag < 0x80 || tag >= 0xe0 || (tag & 0xfc) == 0xd0) {
    data->type = AnyData::AnyDataType_SignedInteger;
    switch (tag) {
      case 0xd0: {
        uint8_t value;
        if (!ReadByte(stream, &value)) {
          return false;
        }
        data->signedValue = static_cast<int8_t>(value);
        return true;
      }
      case 0xd1: {
        uint16_t value;
        if (!ReadBigEndian16(stream, &value)) {
          return false;
        }
        data->signedValue = static_cast<int16_t>(value);
        stream->position += sizeof(value);
        return true;
      }
      case 0xd2: {
        uint32_t value;
        if (!ReadBigEndian32(stream, &value)) {
          return false;
        }
        data->signedValue = static_cast<int32_t>(value);
        stream->position += sizeof(value);
        return true;
      }
      case 0xd3: {
        uint64_t value;
        if (!ReadBigEndian64(stream, &value)) {
          return false;
        }
        data->signedValue = static_cast<int64_t>(value);
        stream->position += sizeof(value);
        return true;
      }
      default:
        data->signedValue = static_cast<int8_t>(tag);
        return true;
    }
  }

  if ((tag & 0xfc) == 0xcc) {
    data->type = AnyData::AnyDataType_UnsignedInteger;
    switch (tag) {
      case 0xcc: {
        uint8_t value;
        if (!ReadByte(stream, &value)) {
          return false;
        }
        data->unsignedValue = value;
        return true;
      }
      case 0xcd: {
        uint16_t value;
        if (!ReadBigEndian16(stream, &value)) {
          return false;
        }
        data->unsignedValue = value;
        stream->position += sizeof(value);
        return true;
      }
      case 0xce: {
        uint32_t value;
        if (!ReadBigEndian32(stream, &value)) {
          return false;
        }
        data->unsignedValue = value;
        stream->position += sizeof(value);
        return true;
      }
      default: {
        uint64_t value;
        if (!ReadBigEndian64(stream, &value)) {
          return false;
        }
        data->unsignedValue = value;
        stream->position += sizeof(value);
        return true;
      }
    }
  }

  switch (tag) {
    case 0xc0:
      data->type = AnyData::AnyDataType_Nil;
      return true;
    case 0xc2:
    case 0xc3:
      data->type = AnyData::AnyDataType_Bool;
      data->boolValue = tag == 0xc3;
      return true;
    case 0xc4:
    case 0xc5:
    case 0xc6: {
      data->type = AnyData::AnyDataType_Binary;
      if (!ReadLength(stream, tag, 0xc4, &data->string.length)) {
        return false;
      }
      if (stream->size - stream->position < data->string.length) {
        return false;
      }
      data->string.position = stream->position;
      stream->position += data->string.length;
      return true;
    }
    case 0xca: {
      data->type = AnyData::AnyDataType_Float32;
      uint32_t value;
      if (!ReadBigEndian32(stream, &value)) {
        return false;
      }
      data->float32Bits = value;
      stream->position += sizeof(value);
      return true;
    }
    case 0xcb: {
      data->type = AnyData::AnyDataType_Float64;
      uint64_t value;
      if (!ReadBigEndian64(stream, &value)) {
        return false;
      }
      data->float64Bits = value;
      stream->position += sizeof(value);
      return true;
    }
    case 0xc7:
    case 0xc8:
    case 0xc9:
    case 0xd4:
    case 0xd5:
    case 0xd6:
    case 0xd7:
    case 0xd8: {
      data->type = AnyData::AnyDataType_Extension;
      if (tag <= 0xc9) {
        if (!ReadLength(stream, tag, 0xc7, &data->extension.length)) {
          return false;
        }
      }
      else {
        data->extension.length = static_cast<size_t>(1) << (tag - 0xd4);
      }
      uint8_t type;
      if (!ReadByte(stream, &type)) {
        return false;
      }
      data->extension.type = static_cast<int8_t>(type);
      if (stream->size - stream->position < data->extension.length) {
        return false;
      }
      data->extension.position = stream->position;
      stream->position += data->extension.length;
      return true;
    }
    default:
      return false;
  }
}

bool WriteFixMap(WriterStream* stream, uint8_t count) {
  if (count > 0xf || GetRemainSize(stream) < 1) {
    return false;
  }
  WriteByte(stream, 0x80 | count);
  return true;
}

bool WriteMap16(WriterStream* stream, uint16_t count) {
  if (GetRemainSize(stream) < 3) {
    return false;
  }
  WriteByte(stream, 0xde);
  WriteBigEndian16(stream, count);
  return true;
}

bool WriteMap32(WriterStream* stream, uint32_t count) {
  if (GetRemainSize(stream) < 5) {
    return false;
  }
  WriteByte(stream, 0xdf);
  WriteBigEndian32(stream, count);
  return true;
}

bool WriteMapAutoSize(WriterStream* stream, uint32_t count) {
  if (count <= 0xf) {
    return WriteFixMap(stream, static_cast<uint8_t>(count));
  }
  if (count <= 0xffff) {
    return WriteMap16(stream, static_cast<uint16_t>(count));
  }
  return WriteMap32(stream, count);
}

bool WriteFixArray(WriterStream* stream, uint8_t count) {
  if (count > 0xf || GetRemainSize(stream) < 1) {
    return false;
  }
  WriteByte(stream, 0x90 | count);
  return true;
}

bool WriteArray16(WriterStream* stream, uint16_t count) {
  if (GetRemainSize(stream) < 3) {
    return false;
  }
  WriteByte(stream, 0xdc);
  WriteBigEndian16(stream, count);
  return true;
}

bool WriteArray32(WriterStream* stream, uint32_t count) {
  if (GetRemainSize(stream) < 5) {
    return false;
  }
  WriteByte(stream, 0xdd);
  WriteBigEndian32(stream, count);
  return true;
}

bool WriteArrayAutoSize(WriterStream* stream, uint32_t count) {
  if (count <= 0xf) {
    return WriteFixArray(stream, static_cast<uint8_t>(count));
  }
  if (count <= 0xffff) {
    return WriteArray16(stream, static_cast<uint16_t>(count));
  }
  return WriteArray32(stream, count);
}

bool WriteString(WriterStream* stream, const char* str, uint32_t length) {
  if (length == 0) {
    if (GetRemainSize(stream) < 1) {
      return false;
    }
    WriteByte(stream, 0xa0);
    return true;
  }
  if (!IsValidUtf8String(str, length)) {
    return false;
  }
  return WriteVerifiedString(stream, str, length);
}

bool WriteVerifiedString(WriterStream* stream, const char* str,
  uint32_t length) {
  if (length <= 0x1f) {
    if (GetRemainSize(stream) < static_cast<size_t>(length) + 1) {
      return false;
    }
    WriteByte(stream, 0xa0 | length);
  }
  else if (length <= 0xff) {
    if (GetRemainSize(stream) < static_cast<size_t>(length) + 2) {
      return false;
    }
    WriteByte(stream, 0xd9);
    WriteByte(stream, static_cast<uint8_t>(length));
  }
  else if (length <= 0xffff) {
    if (GetRemainSize(stream) < static_cast<size_t>(length) + 3) {
      return false;
    }
    WriteByte(stream, 0xda);
    WriteBigEndian16(stream, static_cast<uint16_t>(length));
  }
  else {
    if (GetRemainSize(stream) < static_cast<size_t>(length) + 5) {
      return false;
    }
    WriteByte(stream, 0xdb);
    WriteBigEndian32(stream, length);
  }
  return WriteData(stream, str, length);
}

bool WriteBinary8Header(WriterStream* stream, uint8_t length) {
  if (GetRemainSize(stream) < static_cast<size_t>(length) + 2) {
    return false;
  }
  WriteByte(stream, 0xc4);
  WriteByte(stream, length);
  return true;
}

bool WriteBinary16Header(WriterStream* stream, uint16_t length) {
  if (GetRemainSize(stream) < static_cast<size_t>(length) + 3) {
    return false;
  }
  WriteByte(stream, 0xc5);
  WriteBigEndian16(stream, length);
  return true;
}

bool WriteBinary32Header(WriterStream* stream, uint32_t length) {
  if (GetRemainSize(stream) < static_cast<size_t>(length) + 5) {
    return false;
  }
  WriteByte(stream, 0xc6);
  WriteBigEndian32(stream, length);
  return true;
}

bool WriteBinaryHeader(WriterStream* stream, uint32_t length) {
  if (length <= 0xff) {
    return WriteBinary8Header(stream, static_cast<uint8_t>(length));
  }
  if (length <= 0xffff) {
    return WriteBinary16Header(stream, static_cast<uint16_t>(length));
  }
  return WriteBinary32Header(stream, length);
}

bool WriteBinary(WriterStream* stream, const void* data, uint32_t length) {
  if (!WriteBinaryHeader(stream, length)) {
    return false;
  }
  return WriteData(stream, data, length);
}

bool WriteExtension8Header(WriterStream* stream, int8_t type,
  uint8_t length) {
  if (GetRemainSize(stream) < static_cast<size_t>(length) + 3) {
    return false;
  }
  WriteByte(stream, 0xc7);
  WriteByte(stream, length);
  WriteByte(stream, static_cast<uint8_t>(type));
  return true;
}

bool WriteExtension16Header(WriterStream* stream, int8_t type,
  uint16_t length) {
  if (GetRemainSize(stream) < static_cast<size_t>(length) + 4) {
    return false;
  }
  WriteByte(stream, 0xc8);
  WriteBigEndian16(stream, length);
  WriteByte(stream, static_cast<uint8_t>(type));
  return true;
}

bool WriteExtension32Header(WriterStream* stream, int8_t type,
  uint32_t length) {
  if (GetRemainSize(stream) < static_cast<size_t>(length) + 6) {
    return false;
  }
  WriteByte(stream, 0xc9);
  WriteBigEndian32(stream, length);
  WriteByte(stream, static_cast<uint8_t>(type));
  return true;
}

bool WriteExtensionHeader(WriterStream* stream, int8_t type,
  uint32_t length) {
  if (length <= 0xff) {
    return WriteExtension8Header(stream, type, static_cast<uint8_t>(length));
  }
  if (length <= 0xffff) {
    return WriteExtension16Header(stream, type,
      static_cast<uint16_t>(length));
  }
  return WriteExtension32Header(stream, type, length);
}

bool WriteExtension(WriterStream* stream, int8_t type, const void* data,
  uint32_t length) {
  if (type < 0) {
    return false;
  }

  uint8_t tag;
  switch (length) {
    case 1:
      tag = 0xd4;
      break;
    case 2:
      tag = 0xd5;
      break;
    case 4:
      tag = 0xd6;
      break;
    case 8:
      tag = 0xd7;
      break;
    case 16:
      tag = 0xd8;
      break;
    default:
      if (!WriteExtensionHeader(stream, type, length)) {
        return false;
      }
      return WriteData(stream, data, length);
  }

  if (GetRemainSize(stream) < static_cast<size_t>(length) + 2) {
    return false;
  }
  WriteByte(stream, tag);
  WriteByte(stream, static_cast<uint8_t>(type));
  return WriteData(stream, data, length);
}

bool WriteNil(WriterStream* stream) {
  if (GetRemainSize(stream) < 1) {
    return false;
  }
  WriteByte(stream, 0xc0);
  return true;
}

bool WriteBool(WriterStream* stream, bool value) {
  if (GetRemainSize(stream) < 1) {
    return false;
  }
  WriteByte(stream, value ? 0xc3 : 0xc2);
  return true;
}

bool WriteFixNum(WriterStream* stream, int8_t value) {
  if (value < -32 || GetRemainSize(stream) < 1) {
    return false;
  }
  WriteByte(stream, static_cast<uint8_t>(value));
  return true;
}

bool WriteSignedInteger8(WriterStream* stream, int8_t value) {
  if (GetRemainSize(stream) < 2) {
    return false;
  }
  WriteByte(stream, 0xd0);
  WriteByte(stream, static_cast<uint8_t>(value));
  return true;
}

bool WriteSignedInteger16(WriterStream* stream, int16_t value) {
  if (GetRemainSize(stream) < 3) {
    return false;
  }
  WriteByte(stream, 0xd1);
  WriteBigEndian16(stream, static_cast<uint16_t>(value));
  return true;
}

bool WriteSignedInteger32(WriterStream* stream, int32_t value) {
  if (GetRemainSize(stream) < 5) {
    return false;
  }
  WriteByte(stream, 0xd2);
  WriteBigEndian32(stream, static_cast<uint32_t>(value));
  return true;
}

bool WriteSignedInteger64(WriterStream* stream, int64_t value) {
  if (GetRemainSize(stream) < 9) {
    return false;
  }
  WriteByte(stream, 0xd3);
  WriteBigEndian64(stream, static_cast<uint64_t>(value));
  return true;
}

bool WriteSignedIntegerAutoSize(WriterStream* stream, int64_t value) {
  if (value >= -32 && value <= 0x7f) {
    if (GetRemainSize(stream) < 1) {
      return false;
    }
    WriteByte(stream, static_cast<uint8_t>(value));
    return true;
  }
  if (value == static_cast<int8_t>(value)) {
    return WriteSignedInteger8(stream, static_cast<int8_t>(value));
  }
  if (value == static_cast<int16_t>(value)) {
    return WriteSignedInteger16(stream, static_cast<int16_t>(value));
  }
  if (value == static_cast<int32_t>(value)) {
    return WriteSignedInteger32(stream, static_cast<int32_t>(value));
  }
  return WriteSignedInteger64(stream, value);
}

bool WriteUnsignedInteger8(WriterStream* stream, uint8_t value) {
  if (GetRemainSize(stream) < 2) {
    return false;
  }
  WriteByte(stream, 0xcc);
  WriteByte(stream, value);
  return true;
}

bool WriteUnsignedInteger16(WriterStream* stream, uint16_t value) {
  if (GetRemainSize(stream) < 3) {
    return false;
  }
  WriteByte(stream, 0xcd);
  WriteBigEndian16(stream, value);
  return true;
}

bool WriteUnsignedInteger32(WriterStream* stream, uint32_t value) {
  if (GetRemainSize(stream) < 5) {
    return false;
  }
  WriteByte(stream, 0xce);
  WriteBigEndian32(stream, value);
  return true;
}

bool WriteUnsignedInteger64(WriterStream* stream, uint64_t value) {
  if (GetRemainSize(stream) < 9) {
    return false;
  }
  WriteByte(stream, 0xcf);
  WriteBigEndian64(stream, value);
  return true;
}

bool WriteUnsignedIntegerAutoSize(WriterStream* stream, uint64_t value) {
  if (value <= 0x7f) {
    if (GetRemainSize(stream) < 1) {
      return false;
    }
    WriteByte(stream, static_cast<uint8_t>(value));
    return true;
  }
  if (value <= 0xff) {
    return WriteUnsignedInteger8(stream, static_cast<uint8_t>(value));
  }
  if (value <= 0xffff) {
    return WriteUnsignedInteger16(stream, static_cast<uint16_t>(value));
  }
  if (value <= 0xffffffff) {
    return WriteUnsignedInteger32(stream, static_cast<uint32_t>(value));
  }
  return WriteUnsignedInteger64(stream, value);
}

bool WriteIntegerAutoSize(WriterStream* stream, int64_t value) {
  if (value < 0) {
    return WriteSignedIntegerAutoSize(stream, value);
  }
  return WriteUnsignedIntegerAutoSize(stream, static_cast<uint64_t>(value));
}

bool WriteFloat32(WriterStream* stream, float value) {
  if (GetRemainSize(stream) < 5) {
    return false;
  }
  WriteByte(stream, 0xca);
  uint32_t bits;
  memcpy(&bits, &value, sizeof(bits));
  WriteBigEndian32(stream, bits);
  return true;
}

bool WriteFloat64(WriterStream* stream, double value) {
  if (GetRemainSize(stream) < 9) {
    return false;
  }
  WriteByte(stream, 0xcb);
  uint64_t bits;
  memcpy(&bits, &value, sizeof(bits));
  WriteBigEndian64(stream, bits);
  return true;
}

}
