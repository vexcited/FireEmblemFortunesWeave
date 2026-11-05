#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/util/bit_flag_set.hpp"

namespace nn::ldn {

struct Ipv4Address {
  uint32_t raw;
};

struct SubnetMask {
  uint32_t raw;
};

struct MacAddress {
  uint8_t raw[6];
};

struct Ssid {
  uint8_t length;
  char raw[33];
};

struct NodeInfo {
  Ipv4Address ipv4Address;
  MacAddress macAddress;
  int8_t nodeId;
  bool isConnected;
  char userName[33];
  uint8_t reserved1;
  uint16_t localCommunicationVersion;
  uint8_t reserved2[16];
};

struct NetworkInfo;
struct SecurityConfig;
struct SecurityParameter;
struct NodeLatestUpdate;
struct AddressEntry;

struct IntentId {
  uint64_t localCommunicationId;
  uint8_t reserved08[2];
  uint16_t sceneId;
  uint8_t reserved0c[4];
};

struct SessionId {
  uint64_t high;
  uint64_t low;
};

struct NetworkId {
  IntentId intentId;
  SessionId sessionId;
};

struct NetworkConfig {
  IntentId intentId;
  uint16_t channel;
  uint8_t nodeCountMax;
  uint8_t reserved13;
  uint16_t localCommunicationVersion;
  uint8_t reserved16[10];
};

static_assert(sizeof(NetworkConfig) == 0x20);

struct UserConfig {
  char userName[33];
  uint8_t reserved21[15];
};

struct ScanFilter {
  NetworkId networkId;
  int32_t networkType;
  MacAddress bssid;
  Ssid ssid;
  uint8_t reserved4c[16];
  uint32_t flag;
};

static_assert(sizeof(ScanFilter) == 0x60);

enum ConnectOption : int32_t {
  ConnectOption_ShowErrorOnFailure = 1,
};

enum State : int32_t {};
enum SecurityMode : int32_t {};
enum AcceptPolicy : int32_t {};
enum DisconnectReason : int32_t {};
enum WirelessControllerRestriction : int32_t {};
enum OperationMode : int32_t {};

enum Protocol : int32_t {
  Protocol_Default,
  Protocol_NxLegacy,
  Protocol_Nx,
  Protocol_Reserved3,
  Protocol_Reserved4,
};

struct MessageFlag;

using MessageFlagSet = util::BitFlagSet<32, MessageFlag>;

struct WirelessControllerPolicyField;
struct WirelessAudioPolicyField;

using WirelessControllerPolicy =
  util::BitPack<uint32_t, WirelessControllerPolicyField>;
using WirelessAudioPolicy = util::BitPack<uint32_t, WirelessAudioPolicyField>;

class ActionFrameSettings {
 public:
  ActionFrameSettings();

  ActionFrameSettings& SetLocalCommunicationId(uint64_t id);
  ActionFrameSettings& SetPassphrase(const void* passphrase, size_t size);
  ActionFrameSettings& SetSecurityMode(SecurityMode mode);
  uint64_t GetLocalCommunicationId() const;
  SecurityMode GetSecurityMode() const;
  size_t GetPassphrase(void* buffer, size_t size) const;

 private:
  uint64_t m_LocalCommunicationId;
  SecurityMode m_SecurityMode;
  uint16_t m_PassphraseSize;
  uint8_t m_Passphrase[64];
};

SubnetMask MakeSubnetMask(uint8_t first, uint8_t second, uint8_t third,
  uint8_t fourth);
SubnetMask MakeSubnetMask(const uint8_t (&bytes)[4]);
SubnetMask MakeSubnetMask(int prefixLength);
Ipv4Address MakeNetworkAddress(Ipv4Address address, SubnetMask mask);
Ipv4Address MakeBroadcastAddress(Ipv4Address address, SubnetMask mask);
Ssid MakeSsid();
Ssid MakeSsid(const char* name);
Ssid MakeSsid(const void* data, size_t size);
bool IsValidSsid(const Ssid& ssid);

}
