#pragma once

#include <stdint.h>

#include "nn/audio/renderer_config.hpp"

namespace nn::audio {

namespace server {

class UpsamplerManager;

}

struct UpsamplerInfo {
  uint8_t state[576];
  server::UpsamplerManager* manager;
  int32_t* buffer;
  int sampleCount;
  int inputCount;
  bool isUsed;
  int8_t inputIndices[6];
  uint8_t reserved1[33];

  UpsamplerInfo();
};

static_assert(sizeof(UpsamplerInfo) == 640);

namespace server {

class UpsamplerManager {
public:
  static constexpr int SampleCount = 240;
  static constexpr int ChannelCountMax = 6;

  UpsamplerManager(int count, UpsamplerInfo* infos, int8_t* buffer);

  UpsamplerInfo* Allocate();
  void Free(UpsamplerInfo* info);

private:
  int m_Count;
  UpsamplerInfo* m_Infos;
  int8_t* m_Buffer;
  os::SdkRecursiveMutexType m_Mutex;
  uint8_t m_Reserved[0x28];
};

static_assert(sizeof(UpsamplerManager) == 0x48);

}
}
