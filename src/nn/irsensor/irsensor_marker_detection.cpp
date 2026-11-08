#include <stddef.h>
#include <stdint.h>

#include "nn/irsensor/irsensor_types.hpp"
#include "nn/result.hpp"

namespace nerd_gillette_internal::otete::plato {

struct PlatoObject {
  float x;
  float y;
  float radius;
  uint8_t unknownC;
  uint8_t reserved[3];
};

struct PlatoPacket {
  uint8_t unknown0;
  uint8_t mode;
  uint8_t unknown2;
  uint8_t objectCount;
  uint32_t unknown4;
  uint32_t unknown8;
  PlatoObject objects[47];
};

static_assert(sizeof(PlatoPacket) == 0x2fc);

bool DecodePacketROK(PlatoPacket* pOutPacket, const unsigned char* pData,
  unsigned long size, unsigned long* pOutSize);

}

namespace nn::irsensor {

namespace {

using nerd_gillette_internal::otete::plato::PlatoPacket;

constexpr Result ResultMarkerDecodeFailed = {0x140cd};
constexpr size_t TeraPluginDataOffset = 0x14;
constexpr size_t TeraPluginDataSize = 300;
constexpr int MarkerObjectCountMax = 32;

}

struct AdaptiveClusteringObject {
  float x;
  float y;
  float area;
  uint8_t unknownC;
  uint8_t reserved[3];
};

struct AdaptiveClusteringProcessorState {
  int64_t samplingNumber;
  uint64_t timeStampNanoSeconds;
  IrCameraAmbientNoiseLevel ambientNoiseLevel;
  uint32_t mode;
  uint8_t objectCount;
  uint8_t unknown19;
  uint8_t reserved1a[6];
  AdaptiveClusteringObject objects[MarkerObjectCountMax];
};

namespace {

// The packet keeps radii, the state reports their squares as areas.
Result ConvertPacket(AdaptiveClusteringProcessorState* pOutState,
  const PlatoPacket& packet) {
  if (static_cast<uint32_t>(packet.mode - 1) > 2) {
    return ResultMarkerDecodeFailed;
  }
  pOutState->mode = static_cast<uint8_t>(packet.mode - 1);
  const uint8_t count = packet.objectCount < MarkerObjectCountMax ?
    packet.objectCount : MarkerObjectCountMax;
  pOutState->objectCount = count;
  pOutState->unknown19 = packet.unknown2;
  pOutState->timeStampNanoSeconds =
    static_cast<uint64_t>(packet.unknown8 * packet.unknown4 * 100) * 1000;
  for (int i = 0; i < count; i++) {
    pOutState->objects[i].x = packet.objects[i].x;
    pOutState->objects[i].y = packet.objects[i].y;
    pOutState->objects[i].area =
      packet.objects[i].radius * packet.objects[i].radius;
    pOutState->objects[i].unknownC = packet.objects[i].unknownC;
  }
  return Result{};
}

}

Result DecodeMarkerDetectionState(AdaptiveClusteringProcessorState* pOutState,
  const TeraPluginProcessorState& state, size_t* pOutSize,
  const uint8_t* pData) {
  PlatoPacket packet = {};
  pOutState->samplingNumber = state.samplingNumber;
  pOutState->ambientNoiseLevel = state.ambientNoiseLevel;
  if (!nerd_gillette_internal::otete::plato::DecodePacketROK(&packet, pData,
      TeraPluginDataSize, pOutSize)) {
    return ResultMarkerDecodeFailed;
  }
  return ConvertPacket(pOutState, packet);
}

Result DecodeOneMarkerDetectionState(
  AdaptiveClusteringProcessorState* pOutState,
  const TeraPluginProcessorState& state) {
  size_t size = 0;
  PlatoPacket packet = {};
  pOutState->samplingNumber = state.samplingNumber;
  pOutState->ambientNoiseLevel = state.ambientNoiseLevel;
  const uint8_t* pData =
    reinterpret_cast<const uint8_t*>(&state) + TeraPluginDataOffset;
  if (!nerd_gillette_internal::otete::plato::DecodePacketROK(&packet, pData,
      TeraPluginDataSize, &size)) {
    return ResultMarkerDecodeFailed;
  }
  return ConvertPacket(pOutState, packet);
}

}
