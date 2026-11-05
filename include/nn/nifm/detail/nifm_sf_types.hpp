#pragma once

#include "nn/nifm/nifm_types.hpp"

namespace nn::nifm::detail::sf {

#pragma pack(push, 1)

struct Ssid {
  uint8_t length;
  uint8_t hex[32];
};

struct WirelessSettingData {
  Ssid ssid;
  bool isNonBroadcast;
  uint8_t authentication;
  uint8_t encryption;
  char passphrase[65];
};

using IpAddressSetting = IpAddressSettingV1;
using DnsSetting = DnsSettingV1;
using IpSettingDataV1 = nifm::IpSettingDataV1;

struct NetworkProfileDataV1 {
  IpSettingDataV1 ipSetting;
  util::Uuid id;
  char networkProfileName[64];
  uint8_t networkProfileType;
  uint8_t networkInterfaceType;
  bool isAutoConnect;
  bool isLargeCapacity;
  WirelessSettingData wirelessSetting;
};

struct NetworkProfileBasicInfo {
  util::Uuid id;
  char networkProfileName[64];
  uint8_t networkProfileType;
  uint8_t networkInterfaceType;
  Ssid ssid;
  uint8_t authentication;
  uint8_t encryption;
};

struct NetworkInterfaceInfo {
  uint8_t type;
  MacAddress macAddress;
  bool isAvailable;
};

struct InternetConnectionStatus {
  uint8_t type;
  uint8_t wirelessCommunicationQuality;
  uint8_t state;
};

#pragma pack(pop)

struct NetworkProfileDataV2 {
  IpSettingDataV2 ipSetting;
  util::Uuid id;
  char networkProfileName[64];
  uint8_t networkProfileType;
  uint8_t networkInterfaceType;
  bool isAutoConnect;
  bool isLargeCapacity;
  bool isValid;
  WirelessSettingData wirelessSetting;
};

struct RewriteRule {
  uint64_t id;
  char action[510];
  char filter[510];
  uint8_t _reserved[8];
  bool isEnabled;
  uint8_t priority;
};

struct AccessPointDataV0 {
  Ssid ssid;
  MacAddress bssid;
  int32_t rssi;
  uint8_t linkLevel;
  int16_t channel;
  uint8_t authentication;
  uint8_t encryption;
  uint8_t groupEncryption;
};

struct AccessPointDataV1 {
  Ssid ssid;
  MacAddress bssid;
  int32_t rssi;
  uint8_t linkLevel;
  int16_t channel;
  uint8_t authentication;
  uint8_t encryption;
  uint8_t groupEncryption;
  bool isSupported;
};

static_assert(sizeof(NetworkProfileDataV1) == 379);
static_assert(sizeof(NetworkProfileDataV2) == 436);
static_assert(sizeof(NetworkProfileBasicInfo) == 117);
static_assert(sizeof(AccessPointDataV1) == 52);
static_assert(sizeof(RewriteRule) == 1040);

}

namespace nn::nifm {

static_assert(sizeof(NetworkProfileDataV1) == 400);
static_assert(sizeof(NetworkProfileDataV2) == 452);
static_assert(sizeof(NetworkProfileBasicInfo) == 132);
static_assert(sizeof(AccessPointData) == 68);
static_assert(sizeof(IpSettingDataV2) == 248);

}
