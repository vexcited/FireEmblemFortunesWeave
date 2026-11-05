#pragma once

#include <stdint.h>

namespace nn::nsd {

struct EnvironmentIdentifier {
  char value[8];
};

struct SettingName {
  char value[128];
};

struct Url {
  char value[256];
};

struct Fqdn {
  char value[256];
};

struct DeviceId {
  char value[16];
};

struct NasServiceName {
  char value[16];
};

struct NasServiceSetting {
  char clientId[16];
  Url redirectUri;
};

struct SaveData {
  uint8_t data[0x18bf0];
};

enum DeleteMode : int32_t {
  DeleteMode_All,
  DeleteMode_ApplicationSettings,
};

enum ImportMode : int32_t {
  ImportMode_All,
  ImportMode_ApplicationSettings,
};

}
