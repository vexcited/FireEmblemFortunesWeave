#pragma once

#include <stdint.h>

#include "nn/result.hpp"
#include "nn/socket/socket_types.hpp"
#include "nn/util/uuid.hpp"

namespace nn::nifm {

enum RequirementPreset : int32_t {};

enum ConnectionConfirmationOption : int32_t {
  ConnectionConfirmationOption_Invalid,
  ConnectionConfirmationOption_Prohibited,
  ConnectionConfirmationOption_NotRequired,
  ConnectionConfirmationOption_Preferred,
  ConnectionConfirmationOption_Required,
  ConnectionConfirmationOption_Forced,
};

enum RequestState : int32_t {
  RequestState_Invalid,
  RequestState_Free,
  RequestState_OnHold,
  RequestState_Accepted,
  RequestState_Blocking,
  RequestState_Rejected,
};

enum NetworkAccessStatus : int32_t {};
enum NetworkProfileType : int32_t {};
enum NetworkInterfaceType : int32_t {};
enum Authentication : int32_t {};
enum Encryption : int32_t {};
enum LinkLevel : int32_t {};
enum InternetConnectionType : int32_t {};
enum InternetConnectionState : int32_t {};

struct Requirement;
struct AdditionalInfo;
struct SsidListVersion;
struct Ipv4Config;
struct Ipv6Config;
struct TelemetryInfoV2;

enum PacketDirection : int32_t {};

struct ClientId {
  uint32_t value;
};

struct NetworkEmulationProfileId {
  uint32_t value;
};

struct NetworkEmulationProfile {
  char name[16];
  uint8_t _unknown0[38];
  uint8_t uplinkMode;
  uint8_t downlinkMode;
  uint8_t _unknown1[5120];
};

struct MacAddress {
  uint8_t data[6];
};

struct Ssid {
  uint8_t length;
  uint8_t hex[33];
};

struct AuthenticationSetting {
  bool isEnabled;
  char username[32];
  char password[32];
};

struct ProxySetting {
  bool isEnabled;
  uint16_t port;
  char proxyServer[100];
  AuthenticationSetting authentication;
};

#pragma pack(push, 1)

struct IpAddressSettingV1 {
  bool isAuto;
  in_addr ipAddress;
  in_addr subnetMask;
  in_addr defaultGateway;
};

struct DnsSettingV1 {
  bool isAuto;
  in_addr preferredDns;
  in_addr alternateDns;
};

struct IpSettingDataV1 {
  IpAddressSettingV1 ip;
  DnsSettingV1 dns;
  ProxySetting proxy;
  uint16_t mtu;
};

#pragma pack(pop)

struct IpAddressSetting {
  bool isAuto;
  in_addr ipAddress;
  in_addr subnetMask;
  in_addr defaultGateway;
};

struct DnsSetting {
  bool isAuto;
  in_addr preferredDns;
  in_addr alternateDns;
};

struct IpSettingDataV2 {
  IpAddressSetting ip;
  uint8_t _reserved0[16];
  DnsSetting dns;
  uint8_t _reserved1[32];
  ProxySetting proxy;
  uint16_t mtu;
};

struct WirelessSettingData {
  Ssid ssid;
  bool isNonBroadcast;
  Authentication authentication;
  Encryption encryption;
  char passphrase[65];
};

struct NetworkProfileBasicInfo {
  util::Uuid id;
  char networkProfileName[64];
  NetworkProfileType networkProfileType;
  NetworkInterfaceType networkInterfaceType;
  Ssid ssid;
  Authentication authentication;
  Encryption encryption;
};

struct NetworkProfileDataV1 {
  util::Uuid id;
  char networkProfileName[64];
  NetworkProfileType networkProfileType;
  NetworkInterfaceType networkInterfaceType;
  bool isAutoConnect;
  bool isLargeCapacity;
  WirelessSettingData wirelessSetting;
  IpSettingDataV1 ipSetting;
};

struct NetworkProfileDataV2 {
  util::Uuid id;
  char networkProfileName[64];
  NetworkProfileType networkProfileType;
  NetworkInterfaceType networkInterfaceType;
  bool isAutoConnect;
  bool isLargeCapacity;
  bool isValid;
  WirelessSettingData wirelessSetting;
  IpSettingDataV2 ipSetting;
};

struct AccessPointData {
  Ssid ssid;
  MacAddress bssid;
  int32_t rssi;
  LinkLevel linkLevel;
  int16_t channel;
  Authentication authentication;
  Encryption encryption;
  Encryption groupEncryption;
  bool isSupported;
};

struct NetworkInterfaceInfo {
  NetworkInterfaceType type;
  MacAddress macAddress;
  bool isAvailable;
};

struct InternetConnectionStatus {
  InternetConnectionType type;
  int32_t wirelessCommunicationQuality;
  InternetConnectionState state;
};

namespace detail {

class RequestClient;
class ScanRequestClient;

}

struct RequestHandle {
  void* _value;
};

inline constexpr Result ResultNotInitialized = {0xca6e};
inline constexpr Result ResultInvalidArgument = {0x1906e};
inline constexpr Result ResultOutOfRange = {0x1946e};
inline constexpr Result ResultNotSubmitted = {0x26e6e};

}
