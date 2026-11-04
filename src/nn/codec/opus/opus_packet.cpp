#include "nn/codec/opus_impl.hpp"

namespace nn::codec::opus {
namespace {

constexpr int OpusBadArgument = -1;
constexpr int OpusInvalidPacket = -4;

}

size_t GetOpusPacketSizeImpl(const uint8_t* packet, size_t size) {
  OpusPacketHeader header = {};
  GetOpusPacketHeader(&header, packet);
  if (header.packetSize > OpusPacketSizeMax) {
    return 0;
  }
  return header.packetSize + sizeof(OpusPacketHeader);
}

OpusResult GetOpusPacketSampleCountPerFrameImpl(int* sampleCount,
  const uint8_t* packet, size_t size, int sampleRate) {
  *sampleCount = nncodecLibopus_opus_packet_get_samples_per_frame(
    packet + sizeof(OpusPacketHeader), sampleRate);
  return OpusResult_Success;
}

OpusResult GetOpusPacketSampleCountInPacketImpl(int* sampleCount,
  const uint8_t* packet, size_t size, int sampleRate) {
  const int count = nncodecLibopus_opus_packet_get_nb_samples(
    packet + sizeof(OpusPacketHeader),
    static_cast<int32_t>(size - sizeof(OpusPacketHeader)), sampleRate);
  if (count == OpusBadArgument) {
    return OpusResult_InsufficientOpusBuffer;
  }
  if (count == OpusInvalidPacket) {
    return OpusResult_BrokenData;
  }

  *sampleCount = count;
  return OpusResult_Success;
}

OpusResult GetOpusPacketFrameCountImpl(int* frameCount, const uint8_t* packet,
  size_t size) {
  const int count = nncodecLibopus_opus_packet_get_nb_frames(
    packet + sizeof(OpusPacketHeader),
    static_cast<int32_t>(size - sizeof(OpusPacketHeader)));
  if (count == OpusBadArgument) {
    return OpusResult_InsufficientOpusBuffer;
  }
  if (count == OpusInvalidPacket) {
    return OpusResult_BrokenData;
  }

  *frameCount = count;
  return OpusResult_Success;
}

OpusResult GetOpusPacketChannelCountImpl(int* channelCount,
  const uint8_t* packet, size_t size) {
  *channelCount = nncodecLibopus_opus_packet_get_nb_channels(
    packet + sizeof(OpusPacketHeader));
  return OpusResult_Success;
}

}
