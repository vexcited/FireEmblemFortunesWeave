#pragma once

#include <stdint.h>

#include "nn/nfp/nfp_client.hpp"
#include "nn/os/mutex.hpp"

namespace nn::nfp {

struct TagInfo {
  uint8_t data[88];
};

struct RegisterInfo {
  uint8_t data[256];
};

struct AmiiboSettingsStartParam {
  DeviceHandle handle;
  uint8_t applicationData[32];
  uint8_t option;
  uint8_t reserved[7];
};

enum AmiiboSettingsMode : uint8_t {
  AmiiboSettingsMode_NicknameAndOwnerSettings,
  AmiiboSettingsMode_GameDataEraser,
  AmiiboSettingsMode_Restorer,
  AmiiboSettingsMode_Formatter,
};

enum AmiiboSettingsFlag : uint8_t {
  AmiiboSettingsFlag_None = 1 << 0,
  AmiiboSettingsFlag_TagInfo = 1 << 1,
  AmiiboSettingsFlag_RegisterInfo = 1 << 2,
};

#pragma pack(push, 4)

struct ReturnValueForAmiiboSettings {
  uint8_t flags;
  uint8_t reserved1[3];
  DeviceHandle handle;
  TagInfo tagInfo;
  RegisterInfo registerInfo;
  uint8_t reserved164[36];
};

struct StartParamForAmiiboSettings {
  uint8_t reserved0;
  AmiiboSettingsMode mode;
  uint8_t flags;
  uint8_t option;
  DeviceHandle handle;
  TagInfo tagInfo;
  RegisterInfo registerInfo;
  uint8_t applicationData[32];
  uint8_t reserved184[36];
};

#pragma pack(pop)

static_assert(sizeof(ReturnValueForAmiiboSettings) == 392);
static_assert(sizeof(StartParamForAmiiboSettings) == 424);

namespace detail {

os::Mutex& RefMutexForAmiiboSettings();
void GetBufferForAmiiboSettings(ReturnValueForAmiiboSettings** pOutReturnValue,
  StartParamForAmiiboSettings** pOutStartParam);
Result StartAmiiboSettings(ReturnValueForAmiiboSettings* pOutReturnValue,
  const StartParamForAmiiboSettings& startParam);

}

}
