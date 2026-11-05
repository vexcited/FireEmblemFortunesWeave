#include "nn/srepo/detail/srepo_generator.hpp"
#include "nn/util/message_pack.hpp"

namespace nn::srepo::detail {

namespace {

// The report starts with a map16 header whose count is big endian.
const size_t MapHeaderSize = 3;

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
