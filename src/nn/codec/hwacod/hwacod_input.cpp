#include "nn/codec/hwacod/hwacod_shim.hpp"
#include "nn/codec/opus_impl.hpp"

namespace nn::codec::hwacod::shim {
namespace {

constexpr Result ResultInvalidArgument = {0x7d06f};
constexpr Result ResultInsufficientInputData = {0x7dc6f};

}

Result GetFirstInputDataSize(size_t* size, const InstanceParameter& parameter,
  const void* data, size_t dataSize) {
  switch (parameter.index()) {
    case 1: {
      const auto& stub = *std::get_if<StubDecoderParameter>(&parameter);
      const int sampleCount = (stub.frameDuration.nanoseconds
        * stub.sampleRate + 999999999) / 1000000000;
      const size_t frameSize = static_cast<int64_t>(stub.channelCount)
        * sampleCount * sizeof(int16_t);
      *size = dataSize < frameSize ? dataSize : frameSize;
      return {0};
    }
    case 2:
    case 3: {
      if (dataSize < sizeof(opus::OpusPacketHeader)) {
        return ResultInsufficientInputData;
      }
      opus::OpusPacketHeader header = {};
      opus::GetOpusPacketHeader(&header, static_cast<const uint8_t*>(data));
      const size_t packetSize =
        header.packetSize + sizeof(opus::OpusPacketHeader);
      if (dataSize < packetSize) {
        return ResultInsufficientInputData;
      }
      *size = packetSize;
      return {0};
    }
    default:
      return ResultInvalidArgument;
  }
}

}
