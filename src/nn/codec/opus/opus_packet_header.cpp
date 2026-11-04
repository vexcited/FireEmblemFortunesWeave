#include "nn/codec/opus_impl.hpp"

namespace nn::codec::opus {
namespace {

inline uint32_t LoadBigEndian(const uint8_t* data) {
  return __builtin_bswap32(*reinterpret_cast<const uint32_t*>(data));
}

}

void SetOpusPacketHeader(uint8_t* data, const OpusPacketHeader& header) {
  data[0] = static_cast<uint8_t>(header.packetSize >> 24);
  data[1] = static_cast<uint8_t>(header.packetSize >> 16);
  data[2] = static_cast<uint8_t>(header.packetSize >> 8);
  data[3] = static_cast<uint8_t>(header.packetSize);
  data[4] = static_cast<uint8_t>(header.finalRange >> 24);
  data[5] = static_cast<uint8_t>(header.finalRange >> 16);
  data[6] = static_cast<uint8_t>(header.finalRange >> 8);
  data[7] = static_cast<uint8_t>(header.finalRange);
}

void GetOpusPacketHeader(OpusPacketHeader* header, const uint8_t* data) {
  const uint32_t packetSize = LoadBigEndian(data);
  const uint32_t finalRange = LoadBigEndian(data + 4);
  header->packetSize = packetSize;
  header->finalRange = finalRange;
}

}
