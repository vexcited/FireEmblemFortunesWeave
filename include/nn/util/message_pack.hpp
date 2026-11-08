#pragma once

#include <stddef.h>
#include <stdint.h>

namespace nn::util {

class MessagePackReader {
public:
  struct StreamParam {
    const uint8_t* buffer;
    size_t size;
    size_t position;
  };

  enum AnyDataType : int32_t {
    AnyDataType_Nil,
    AnyDataType_Bool,
    AnyDataType_Binary,
    AnyDataType_Extension,
    AnyDataType_Float32,
    AnyDataType_Float64,
    AnyDataType_UnsignedInteger,
    AnyDataType_SignedInteger,
    AnyDataType_String,
    AnyDataType_Array,
    AnyDataType_Map,
  };

  struct AnyData {
    AnyDataType type;
    union {
      bool boolValue;
      uint64_t unsignedValue;
      int64_t signedValue;
      uint32_t float32Bits;
      uint64_t float64Bits;
      float float32Value;
      double float64Value;
      uint32_t count;
      struct {
        size_t length;
        size_t position;
      } string;
      struct {
        int8_t type;
        size_t length;
        size_t position;
      } extension;
    };
  };

  explicit MessagePackReader(StreamParam* stream);
  bool ReadCurrent(AnyData* data);

private:
  StreamParam* m_Stream;
};

class MessagePackWriter {
public:
  struct StreamParam {
    uint8_t* buffer;
    size_t size;
    size_t position;
  };

  explicit MessagePackWriter(StreamParam* stream);

  size_t GetRemainSize() const;
  bool WriteFixMap(uint8_t count);
  bool WriteMap16(uint16_t count);
  bool WriteMap32(uint32_t count);
  bool WriteMapAutoSize(uint32_t count);
  bool WriteFixArray(uint8_t count);
  bool WriteArray16(uint16_t count);
  bool WriteArray32(uint32_t count);
  bool WriteArrayAutoSize(uint32_t count);
  bool WriteString(const char* str, uint32_t length);
  bool WriteVerifiedString(const char* str, uint32_t length);
  bool WriteBinary8Header(uint8_t length);
  bool WriteBinary16Header(uint16_t length);
  bool WriteBinary32Header(uint32_t length);
  bool WriteBinaryHeader(uint32_t length);
  bool WriteBinary(const void* data, uint32_t length);
  bool WriteExtension8Header(int8_t type, uint8_t length);
  bool WriteExtension16Header(int8_t type, uint16_t length);
  bool WriteExtension32Header(int8_t type, uint32_t length);
  bool WriteExtensionHeader(int8_t type, uint32_t length);
  bool WriteExtension(int8_t type, const void* data, uint32_t length);
  bool WriteNil();
  bool WriteBool(bool value);
  bool WriteFixNum(int8_t value);
  bool WriteSignedInteger8(int8_t value);
  bool WriteSignedInteger16(int16_t value);
  bool WriteSignedInteger32(int32_t value);
  bool WriteSignedInteger64(int64_t value);
  bool WriteSignedIntegerAutoSize(int64_t value);
  bool WriteUnsignedInteger8(uint8_t value);
  bool WriteUnsignedInteger16(uint16_t value);
  bool WriteUnsignedInteger32(uint32_t value);
  bool WriteUnsignedInteger64(uint64_t value);
  bool WriteUnsignedIntegerAutoSize(uint64_t value);
  bool WriteIntegerAutoSize(int64_t value);
  bool WriteFloat32(float value);
  bool WriteFloat64(double value);

private:
  StreamParam* m_Stream;
};

namespace detail::msgpack {

using ReaderStream = MessagePackReader::StreamParam;
using WriterStream = MessagePackWriter::StreamParam;

bool ReadCurrent(MessagePackReader::AnyData* data, ReaderStream* stream);
bool WriteFixMap(WriterStream* stream, uint8_t count);
bool WriteMap16(WriterStream* stream, uint16_t count);
bool WriteMap32(WriterStream* stream, uint32_t count);
bool WriteMapAutoSize(WriterStream* stream, uint32_t count);
bool WriteFixArray(WriterStream* stream, uint8_t count);
bool WriteArray16(WriterStream* stream, uint16_t count);
bool WriteArray32(WriterStream* stream, uint32_t count);
bool WriteArrayAutoSize(WriterStream* stream, uint32_t count);
bool WriteString(WriterStream* stream, const char* str, uint32_t length);
bool WriteVerifiedString(WriterStream* stream, const char* str,
  uint32_t length);
bool WriteBinary8Header(WriterStream* stream, uint8_t length);
bool WriteBinary16Header(WriterStream* stream, uint16_t length);
bool WriteBinary32Header(WriterStream* stream, uint32_t length);
bool WriteBinaryHeader(WriterStream* stream, uint32_t length);
bool WriteBinary(WriterStream* stream, const void* data, uint32_t length);
bool WriteExtension8Header(WriterStream* stream, int8_t type, uint8_t length);
bool WriteExtension16Header(WriterStream* stream, int8_t type,
  uint16_t length);
bool WriteExtension32Header(WriterStream* stream, int8_t type,
  uint32_t length);
bool WriteExtensionHeader(WriterStream* stream, int8_t type, uint32_t length);
bool WriteExtension(WriterStream* stream, int8_t type, const void* data,
  uint32_t length);
bool WriteNil(WriterStream* stream);
bool WriteBool(WriterStream* stream, bool value);
bool WriteFixNum(WriterStream* stream, int8_t value);
bool WriteSignedInteger8(WriterStream* stream, int8_t value);
bool WriteSignedInteger16(WriterStream* stream, int16_t value);
bool WriteSignedInteger32(WriterStream* stream, int32_t value);
bool WriteSignedInteger64(WriterStream* stream, int64_t value);
bool WriteSignedIntegerAutoSize(WriterStream* stream, int64_t value);
bool WriteUnsignedInteger8(WriterStream* stream, uint8_t value);
bool WriteUnsignedInteger16(WriterStream* stream, uint16_t value);
bool WriteUnsignedInteger32(WriterStream* stream, uint32_t value);
bool WriteUnsignedInteger64(WriterStream* stream, uint64_t value);
bool WriteUnsignedIntegerAutoSize(WriterStream* stream, uint64_t value);
bool WriteIntegerAutoSize(WriterStream* stream, int64_t value);
bool WriteFloat32(WriterStream* stream, float value);
bool WriteFloat64(WriterStream* stream, double value);

}

bool IsValidUtf8String(const char* str, size_t length);

}
