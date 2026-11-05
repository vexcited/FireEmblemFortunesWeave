#include "nn/audio/renderer_api.hpp"

namespace nn::audio::common {

uint32_t NodeIdManager::GetNodeId(NodeIdType type, int base, int variation) {
  return static_cast<uint32_t>(type) << 28 |
    static_cast<uint32_t>(base) << 16 | static_cast<uint32_t>(variation);
}

NodeIdManager::NodeIdType NodeIdManager::GetType(uint32_t nodeId) {
  return static_cast<NodeIdType>(nodeId >> 28);
}

int NodeIdManager::GetBase(uint32_t nodeId) {
  return nodeId >> 16 & 0xfff;
}

int NodeIdManager::GetVariation(uint32_t nodeId) {
  return nodeId & 0xffff;
}

uint32_t NodeIdManager::GetInvalidNodeId() {
  return static_cast<uint32_t>(NodeIdType_Invalid) << 28;
}

}
