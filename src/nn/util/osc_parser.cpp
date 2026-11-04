#include "nn/util/osc.hpp"

#include <string.h>

namespace nn::util {

namespace {

uint32_t LoadBigEndian32(const uint8_t* data) {
  uint32_t value;
  memcpy(&value, data, sizeof(value));
  return __builtin_bswap32(value);
}

uint64_t LoadBigEndian64(const uint8_t* data) {
  uint64_t value;
  memcpy(&value, data, sizeof(value));
  return __builtin_bswap64(value);
}

OscTimeTag LoadTimeTag(const uint8_t* data) {
  OscTimeTag timeTag;
  timeTag.seconds = LoadBigEndian32(data);
  timeTag.fraction = LoadBigEndian32(data + 4);
  return timeTag;
}

bool IsValidTypeTag(char tag) {
  switch (tag) {
    case 'F':
    case 'I':
    case 'N':
    case 'T':
    case 'b':
    case 'c':
    case 'd':
    case 'f':
    case 'h':
    case 'i':
    case 'm':
    case 'r':
    case 's':
    case 't':
      return true;
    default:
      return false;
  }
}

const uint8_t* GetArgument(const OscMessageParserType* parser) {
  return parser->buffer + parser->argumentIndex;
}

}

bool InitializeOscBundleParser(OscBundleParserType* parser,
  const void* buffer, size_t size) {
  if (parser == nullptr || buffer == nullptr || size < 16 || size % 4 != 0) {
    return false;
  }

  static const char BundleTag[] = "#bundle";
  const uint8_t* bytes = static_cast<const uint8_t*>(buffer);
  for (size_t i = 0; i < sizeof(BundleTag); ++i) {
    if (bytes[i] != static_cast<uint8_t>(BundleTag[i])) {
      return false;
    }
  }

  parser->buffer = bytes;
  parser->size = size;
  parser->index = 16;
  return true;
}

OscTimeTag GetOscBundleTimeTag(const OscBundleParserType* parser) {
  return LoadTimeTag(parser->buffer + 8);
}

void GetOscBundlePacketBuffer(const void** pOutBuffer, size_t* pOutSize,
  const OscBundleParserType* parser) {
  const int next = parser->index + 4;
  if (next <= static_cast<int>(parser->size)) {
    uint32_t packetSize = LoadBigEndian32(parser->buffer + parser->index);
    if (static_cast<size_t>(next) + packetSize <= parser->size) {
      *pOutBuffer = parser->buffer + next;
      *pOutSize = packetSize;
      return;
    }
  }
  *pOutBuffer = nullptr;
  *pOutSize = 0;
}

void AdvanceOscBundleParserPacketIndex(OscBundleParserType* parser) {
  const int next = parser->index + 4;
  if (next <= static_cast<int>(parser->size)) {
    uint32_t packetSize = LoadBigEndian32(parser->buffer + parser->index);
    if (static_cast<size_t>(next) + packetSize <= parser->size) {
      parser->index = next + packetSize;
    }
  }
}

bool InitializeOscMessageParser(OscMessageParserType* parser,
  const void* buffer, size_t size) {
  const uint8_t* bytes = static_cast<const uint8_t*>(buffer);
  if (parser == nullptr || bytes == nullptr || size % 4 != 0
    || bytes[0] != '/') {
    return false;
  }

  size_t index = 0;
  while (index < size && bytes[index] != ',') {
    ++index;
  }
  if (index == size) {
    return false;
  }

  ++index;
  parser->typeTagIndex = static_cast<int32_t>(index);
  for (; index < size; ++index) {
    char tag = static_cast<char>(bytes[index]);
    if (tag == '\0') {
      break;
    }
    if (!IsValidTypeTag(tag)) {
      return false;
    }
  }
  if (index == size) {
    return false;
  }

  parser->buffer = bytes;
  parser->size = size;
  parser->argumentIndex = static_cast<int32_t>((index & ~3) + 4);
  return true;
}

char GetOscMessageArgumentTypeTag(const OscMessageParserType* parser) {
  if (parser == nullptr || parser->buffer == nullptr) {
    return '\0';
  }
  return static_cast<char>(parser->buffer[parser->typeTagIndex]);
}

int32_t GetOscMessageArgumentAsInt32(const OscMessageParserType* parser) {
  if (parser == nullptr || parser->buffer == nullptr) {
    return 0;
  }
  return static_cast<int32_t>(LoadBigEndian32(GetArgument(parser)));
}

int64_t GetOscMessageArgumentAsInt64(const OscMessageParserType* parser) {
  if (parser == nullptr || parser->buffer == nullptr) {
    return 0;
  }
  return static_cast<int64_t>(LoadBigEndian64(GetArgument(parser)));
}

float GetOscMessageArgumentAsFloat(const OscMessageParserType* parser) {
  if (parser == nullptr || parser->buffer == nullptr) {
    return 0.0f;
  }
  uint32_t bits = LoadBigEndian32(GetArgument(parser));
  float value;
  memcpy(&value, &bits, sizeof(value));
  return value;
}

double GetOscMessageArgumentAsDouble(const OscMessageParserType* parser) {
  if (parser == nullptr || parser->buffer == nullptr) {
    return 0.0;
  }
  uint64_t bits = LoadBigEndian64(GetArgument(parser));
  double value;
  memcpy(&value, &bits, sizeof(value));
  return value;
}

char GetOscMessageArgumentAsChar(const OscMessageParserType* parser) {
  if (parser == nullptr || parser->buffer == nullptr) {
    return '\0';
  }
  return static_cast<char>(*GetArgument(parser));
}

const char* GetOscMessageArgumentAsString(
  const OscMessageParserType* parser) {
  if (parser == nullptr || parser->buffer == nullptr) {
    return nullptr;
  }
  return reinterpret_cast<const char*>(GetArgument(parser));
}

OscBlob GetOscMessageArgumentAsBlob(const OscMessageParserType* parser) {
  OscBlob blob = {};
  if (parser != nullptr && parser->buffer != nullptr) {
    const uint8_t* argument = GetArgument(parser);
    blob.data = argument + sizeof(uint32_t);
    blob.size = LoadBigEndian32(argument);
  }
  return blob;
}

OscTimeTag GetOscMessageArgumentAsTimeTag(
  const OscMessageParserType* parser) {
  if (parser == nullptr || parser->buffer == nullptr) {
    return OscTimeTag();
  }
  return LoadTimeTag(GetArgument(parser));
}

OscColor GetOscMessageArgumentAsColor(const OscMessageParserType* parser) {
  OscColor color = {};
  if (parser != nullptr && parser->buffer != nullptr) {
    memcpy(&color, GetArgument(parser), sizeof(color));
  }
  return color;
}

OscMidiMessage GetOscMessageArgumentAsMidiMessage(
  const OscMessageParserType* parser) {
  OscMidiMessage message = {};
  if (parser != nullptr && parser->buffer != nullptr) {
    memcpy(&message, GetArgument(parser), sizeof(message));
  }
  return message;
}

void AdvanceOscMessageParserArgumentIndex(OscMessageParserType* parser) {
  if (parser == nullptr || parser->buffer == nullptr) {
    return;
  }

  char tag = static_cast<char>(parser->buffer[parser->typeTagIndex]);
  if (tag == '\0') {
    return;
  }
  ++parser->typeTagIndex;

  switch (tag) {
    case 'b':
      parser->argumentIndex +=
        (LoadBigEndian32(GetArgument(parser)) + 7) & ~3;
      break;
    case 'c':
    case 'f':
    case 'i':
    case 'm':
    case 'r':
      parser->argumentIndex += 4;
      break;
    case 'd':
    case 'h':
    case 't':
      parser->argumentIndex += 8;
      break;
    case 's':
      parser->argumentIndex += static_cast<int32_t>(
        (strlen(reinterpret_cast<const char*>(GetArgument(parser))) & ~3)
        + 4);
      break;
    default:
      break;
  }
}

}
