#pragma once

#include <stddef.h>
#include <stdint.h>

namespace nn::util {

struct OscTimeTag {
  uint32_t seconds;
  uint32_t fraction;
};

struct OscColor {
  uint8_t r;
  uint8_t g;
  uint8_t b;
  uint8_t a;
};

struct OscMidiMessage {
  uint8_t portId;
  uint8_t status;
  uint8_t data1;
  uint8_t data2;
};

struct OscBlob {
  const void* data;
  size_t size;
};

struct OscBundleParserType {
  const uint8_t* buffer;
  size_t size;
  int32_t index;
};

struct OscMessageParserType {
  const uint8_t* buffer;
  size_t size;
  int32_t argumentIndex;
  int32_t typeTagIndex;
};

bool InitializeOscBundleParser(OscBundleParserType* parser,
  const void* buffer, size_t size);
OscTimeTag GetOscBundleTimeTag(const OscBundleParserType* parser);
void GetOscBundlePacketBuffer(const void** pOutBuffer, size_t* pOutSize,
  const OscBundleParserType* parser);
void AdvanceOscBundleParserPacketIndex(OscBundleParserType* parser);

bool InitializeOscMessageParser(OscMessageParserType* parser,
  const void* buffer, size_t size);
char GetOscMessageArgumentTypeTag(const OscMessageParserType* parser);
int32_t GetOscMessageArgumentAsInt32(const OscMessageParserType* parser);
int64_t GetOscMessageArgumentAsInt64(const OscMessageParserType* parser);
float GetOscMessageArgumentAsFloat(const OscMessageParserType* parser);
double GetOscMessageArgumentAsDouble(const OscMessageParserType* parser);
char GetOscMessageArgumentAsChar(const OscMessageParserType* parser);
const char* GetOscMessageArgumentAsString(
  const OscMessageParserType* parser);
OscBlob GetOscMessageArgumentAsBlob(const OscMessageParserType* parser);
OscTimeTag GetOscMessageArgumentAsTimeTag(const OscMessageParserType* parser);
OscColor GetOscMessageArgumentAsColor(const OscMessageParserType* parser);
OscMidiMessage GetOscMessageArgumentAsMidiMessage(
  const OscMessageParserType* parser);
void AdvanceOscMessageParserArgumentIndex(OscMessageParserType* parser);

}
