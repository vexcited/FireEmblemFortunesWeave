#include <string.h>

#include "nn/nifm/detail/nifm_type_converter.hpp"
#include "nn/util/string_util.hpp"

namespace nn::nifm::detail {

namespace {

Ssid MakeSsid(const uint8_t* hex, size_t length) {
  Ssid ssid;
  memset(ssid.hex, 0, sizeof(ssid.hex));
  size_t copied = length < 32 ? length : 32;
  if (length != 0) {
    memcpy(ssid.hex, hex, copied);
  }
  else {
    copied = 0;
  }
  memset(ssid.hex + copied, 0, sizeof(ssid.hex) - copied);
  ssid.length = static_cast<uint8_t>(copied);
  return ssid;
}

void ConvertSsid(sf::Ssid* pOut, const Ssid& in) {
  memcpy(pOut->hex, in.hex, sizeof(pOut->hex));
  pOut->length = in.length;
}

void ConvertWirelessSetting(sf::WirelessSettingData* pOut,
  const WirelessSettingData& in) {
  ConvertSsid(&pOut->ssid, in.ssid);
  pOut->isNonBroadcast = in.isNonBroadcast;
  pOut->authentication = static_cast<uint8_t>(in.authentication);
  pOut->encryption = static_cast<uint8_t>(in.encryption);
  memcpy(pOut->passphrase, in.passphrase, sizeof(pOut->passphrase));
}

void ConvertWirelessSetting(WirelessSettingData* pOut,
  const sf::WirelessSettingData& in) {
  pOut->ssid = MakeSsid(in.ssid.hex, in.ssid.length);
  pOut->isNonBroadcast = in.isNonBroadcast;
  pOut->authentication = static_cast<Authentication>(in.authentication);
  pOut->encryption = static_cast<Encryption>(in.encryption);
  memcpy(pOut->passphrase, in.passphrase, sizeof(pOut->passphrase));
}

}

void ConvertNetworkProfileBasicInfoToSfFromNifm(
  sf::NetworkProfileBasicInfo* pOut, const NetworkProfileBasicInfo& in) {
  pOut->id = in.id;
  util::Strlcpy(pOut->networkProfileName, in.networkProfileName,
    sizeof(pOut->networkProfileName));
  pOut->networkProfileType = static_cast<uint8_t>(in.networkProfileType);
  pOut->networkInterfaceType = static_cast<uint8_t>(in.networkInterfaceType);
  ConvertSsid(&pOut->ssid, in.ssid);
  pOut->authentication = static_cast<uint8_t>(in.authentication);
  pOut->encryption = static_cast<uint8_t>(in.encryption);
}

void ConvertNetworkProfileBasicInfoToNifmFromSf(
  NetworkProfileBasicInfo* pOut, const sf::NetworkProfileBasicInfo& in) {
  pOut->id = in.id;
  util::Strlcpy(pOut->networkProfileName, in.networkProfileName,
    sizeof(pOut->networkProfileName));
  pOut->networkProfileType =
    static_cast<NetworkProfileType>(in.networkProfileType);
  pOut->networkInterfaceType =
    static_cast<NetworkInterfaceType>(in.networkInterfaceType);
  pOut->ssid = MakeSsid(in.ssid.hex, in.ssid.length);
  pOut->authentication = static_cast<Authentication>(in.authentication);
  pOut->encryption = static_cast<Encryption>(in.encryption);
}

void ConvertNetworkProfileDataToSfFromNifm(sf::NetworkProfileDataV1* pOut,
  const NetworkProfileDataV1& in) {
  pOut->id = in.id;
  util::Strlcpy(pOut->networkProfileName, in.networkProfileName,
    sizeof(pOut->networkProfileName));
  pOut->networkProfileType = static_cast<uint8_t>(in.networkProfileType);
  pOut->networkInterfaceType = static_cast<uint8_t>(in.networkInterfaceType);
  pOut->isAutoConnect = in.isAutoConnect;
  pOut->isLargeCapacity = in.isLargeCapacity;
  ConvertWirelessSetting(&pOut->wirelessSetting, in.wirelessSetting);
  pOut->ipSetting = in.ipSetting;
}

void ConvertNetworkProfileDataToSfFromNifm(sf::NetworkProfileDataV1* pOut,
  const NetworkProfileDataV2& in) {
  pOut->id = in.id;
  util::Strlcpy(pOut->networkProfileName, in.networkProfileName,
    sizeof(pOut->networkProfileName));
  pOut->networkProfileType = static_cast<uint8_t>(in.networkProfileType);
  pOut->networkInterfaceType = static_cast<uint8_t>(in.networkInterfaceType);
  pOut->isAutoConnect = in.isAutoConnect;
  pOut->isLargeCapacity = in.isLargeCapacity;
  ConvertWirelessSetting(&pOut->wirelessSetting, in.wirelessSetting);
  pOut->ipSetting.ip.isAuto = in.ipSetting.ip.isAuto;
  pOut->ipSetting.ip.ipAddress = in.ipSetting.ip.ipAddress;
  pOut->ipSetting.ip.subnetMask = in.ipSetting.ip.subnetMask;
  pOut->ipSetting.ip.defaultGateway = in.ipSetting.ip.defaultGateway;
  pOut->ipSetting.dns.isAuto = in.ipSetting.dns.isAuto;
  pOut->ipSetting.dns.preferredDns = in.ipSetting.dns.preferredDns;
  pOut->ipSetting.dns.alternateDns = in.ipSetting.dns.alternateDns;
  pOut->ipSetting.mtu = in.ipSetting.mtu;
  memcpy(&pOut->ipSetting.proxy, &in.ipSetting.proxy,
    sizeof(pOut->ipSetting.proxy));
}

void ConvertNetworkProfileDataToSfFromNifm(sf::NetworkProfileDataV2* pOut,
  const NetworkProfileDataV2& in) {
  pOut->id = in.id;
  util::Strlcpy(pOut->networkProfileName, in.networkProfileName,
    sizeof(pOut->networkProfileName));
  pOut->networkProfileType = static_cast<uint8_t>(in.networkProfileType);
  pOut->networkInterfaceType = static_cast<uint8_t>(in.networkInterfaceType);
  pOut->isAutoConnect = in.isAutoConnect;
  pOut->isLargeCapacity = in.isLargeCapacity;
  pOut->isValid = in.isValid;
  ConvertWirelessSetting(&pOut->wirelessSetting, in.wirelessSetting);
  memcpy(&pOut->ipSetting, &in.ipSetting, sizeof(pOut->ipSetting));
}

void ConvertNetworkProfileDataToNifmFromSf(NetworkProfileDataV1* pOut,
  const sf::NetworkProfileDataV1& in) {
  pOut->id = in.id;
  util::Strlcpy(pOut->networkProfileName, in.networkProfileName,
    sizeof(pOut->networkProfileName));
  pOut->networkProfileType =
    static_cast<NetworkProfileType>(in.networkProfileType);
  pOut->networkInterfaceType =
    static_cast<NetworkInterfaceType>(in.networkInterfaceType);
  pOut->isAutoConnect = in.isAutoConnect;
  pOut->isLargeCapacity = in.isLargeCapacity;
  ConvertWirelessSetting(&pOut->wirelessSetting, in.wirelessSetting);
  memcpy(&pOut->ipSetting, &in.ipSetting, sizeof(pOut->ipSetting));
}

void ConvertNetworkProfileDataToNifmFromSf(NetworkProfileDataV2* pOut,
  const sf::NetworkProfileDataV1& in) {
  memset(pOut, 0, sizeof(*pOut));
  pOut->id = in.id;
  util::Strlcpy(pOut->networkProfileName, in.networkProfileName,
    sizeof(pOut->networkProfileName));
  pOut->networkProfileType =
    static_cast<NetworkProfileType>(in.networkProfileType);
  pOut->networkInterfaceType =
    static_cast<NetworkInterfaceType>(in.networkInterfaceType);
  pOut->isAutoConnect = in.isAutoConnect;
  pOut->isLargeCapacity = in.isLargeCapacity;
  pOut->isValid = true;
  ConvertWirelessSetting(&pOut->wirelessSetting, in.wirelessSetting);
  pOut->ipSetting.ip.isAuto = in.ipSetting.ip.isAuto;
  pOut->ipSetting.ip.ipAddress = in.ipSetting.ip.ipAddress;
  pOut->ipSetting.ip.subnetMask = in.ipSetting.ip.subnetMask;
  pOut->ipSetting.ip.defaultGateway = in.ipSetting.ip.defaultGateway;
  pOut->ipSetting.dns.isAuto = in.ipSetting.dns.isAuto;
  pOut->ipSetting.dns.preferredDns = in.ipSetting.dns.preferredDns;
  pOut->ipSetting.dns.alternateDns = in.ipSetting.dns.alternateDns;
  pOut->ipSetting.mtu = in.ipSetting.mtu;
  memcpy(&pOut->ipSetting.proxy, &in.ipSetting.proxy,
    sizeof(pOut->ipSetting.proxy));
}

void ConvertNetworkProfileDataToNifmFromSf(NetworkProfileDataV2* pOut,
  const sf::NetworkProfileDataV2& in) {
  pOut->id = in.id;
  util::Strlcpy(pOut->networkProfileName, in.networkProfileName,
    sizeof(pOut->networkProfileName));
  pOut->networkProfileType =
    static_cast<NetworkProfileType>(in.networkProfileType);
  pOut->networkInterfaceType =
    static_cast<NetworkInterfaceType>(in.networkInterfaceType);
  pOut->isAutoConnect = in.isAutoConnect;
  pOut->isLargeCapacity = in.isLargeCapacity;
  pOut->isValid = in.isValid;
  ConvertWirelessSetting(&pOut->wirelessSetting, in.wirelessSetting);
  memcpy(&pOut->ipSetting, &in.ipSetting, sizeof(pOut->ipSetting));
}

void ConvertAccessPointDataToSfFromNifm(sf::AccessPointDataV1* pOut,
  const AccessPointData& in) {
  ConvertSsid(&pOut->ssid, in.ssid);
  pOut->bssid = in.bssid;
  pOut->rssi = in.rssi;
  pOut->linkLevel = static_cast<uint8_t>(in.linkLevel);
  pOut->channel = in.channel;
  pOut->authentication = static_cast<uint8_t>(in.authentication);
  pOut->encryption = static_cast<uint8_t>(in.encryption);
  pOut->groupEncryption = static_cast<uint8_t>(in.groupEncryption);
  pOut->isSupported = in.isSupported;
}

void ConvertAccessPointDataToNifmFromSf(AccessPointData* pOut,
  const sf::AccessPointDataV1& in) {
  pOut->ssid = MakeSsid(in.ssid.hex, in.ssid.length);
  pOut->bssid = in.bssid;
  pOut->rssi = in.rssi;
  pOut->linkLevel = static_cast<LinkLevel>(in.linkLevel);
  pOut->channel = in.channel;
  pOut->authentication = static_cast<Authentication>(in.authentication);
  pOut->encryption = static_cast<Encryption>(in.encryption);
  pOut->groupEncryption = static_cast<Encryption>(in.groupEncryption);
  pOut->isSupported = in.isSupported;
}

void ConvertNetworkInterfaceInfoToSfFromNifm(sf::NetworkInterfaceInfo* pOut,
  const NetworkInterfaceInfo& in) {
  pOut->type = static_cast<uint8_t>(in.type);
  pOut->macAddress = in.macAddress;
  pOut->isAvailable = in.isAvailable;
}

void ConvertNetworkInterfaceInfoToNifmFromSf(NetworkInterfaceInfo* pOut,
  const sf::NetworkInterfaceInfo& in) {
  pOut->type = static_cast<NetworkInterfaceType>(in.type);
  pOut->macAddress = in.macAddress;
  pOut->isAvailable = in.isAvailable;
}

void ConvertInternetConnectionStatusToSfFromNifm(
  sf::InternetConnectionStatus* pOut, const InternetConnectionStatus& in) {
  pOut->type = static_cast<uint8_t>(in.type);
  pOut->wirelessCommunicationQuality =
    static_cast<uint8_t>(in.wirelessCommunicationQuality);
  pOut->state = static_cast<uint8_t>(in.state);
}

void ConvertInternetConnectionStatusToNifmFromSf(
  InternetConnectionStatus* pOut, const sf::InternetConnectionStatus& in) {
  pOut->type = static_cast<InternetConnectionType>(in.type);
  pOut->wirelessCommunicationQuality = in.wirelessCommunicationQuality;
  pOut->state = static_cast<InternetConnectionState>(in.state);
}

void ConvertAccessPointDataToSfFromNifm(sf::AccessPointDataV0* pOut,
  const AccessPointData& in) {
  ConvertSsid(&pOut->ssid, in.ssid);
  pOut->bssid = in.bssid;
  pOut->rssi = in.rssi;
  pOut->linkLevel = static_cast<uint8_t>(in.linkLevel);
  pOut->channel = in.channel;
  pOut->authentication = static_cast<uint8_t>(in.authentication);
  pOut->encryption = static_cast<uint8_t>(in.encryption);
  pOut->groupEncryption = static_cast<uint8_t>(in.groupEncryption);
}

}
