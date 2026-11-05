#include <string.h>

#include "nn/ldn/ldn_types.hpp"

namespace nn::ldn {

namespace {

const size_t PassphraseSizeMin = 16;
const size_t PassphraseSizeMax = 64;
const int SsidLengthMax = 32;

}

ActionFrameSettings::ActionFrameSettings()
  : m_LocalCommunicationId(~uint64_t(0)), m_SecurityMode(SecurityMode(1)),
    m_PassphraseSize(0) {}

ActionFrameSettings& ActionFrameSettings::SetLocalCommunicationId(
  uint64_t id) {
  m_LocalCommunicationId = id;
  return *this;
}

ActionFrameSettings& ActionFrameSettings::SetPassphrase(
  const void* passphrase, size_t size) {
  if (size >= PassphraseSizeMin) {
    size = size < PassphraseSizeMax ? size : PassphraseSizeMax;
    m_PassphraseSize = static_cast<uint16_t>(size);
    memcpy(m_Passphrase, passphrase, size);
  }
  return *this;
}

ActionFrameSettings& ActionFrameSettings::SetSecurityMode(SecurityMode mode) {
  m_SecurityMode = mode;
  return *this;
}

uint64_t ActionFrameSettings::GetLocalCommunicationId() const {
  return m_LocalCommunicationId;
}

SecurityMode ActionFrameSettings::GetSecurityMode() const {
  return m_SecurityMode;
}

size_t ActionFrameSettings::GetPassphrase(void* buffer, size_t size) const {
  if (buffer != nullptr) {
    memcpy(buffer, m_Passphrase, size < m_PassphraseSize ? size :
      m_PassphraseSize);
  }
  return m_PassphraseSize;
}

SubnetMask MakeSubnetMask(uint8_t first, uint8_t second, uint8_t third,
  uint8_t fourth) {
  return {static_cast<uint32_t>(first << 24 | second << 16 | third << 8 |
    fourth)};
}

SubnetMask MakeSubnetMask(const uint8_t (&bytes)[4]) {
  return MakeSubnetMask(bytes[0], bytes[1], bytes[2], bytes[3]);
}

SubnetMask MakeSubnetMask(int prefixLength) {
  return {~uint32_t(0) << (32 - prefixLength)};
}

Ipv4Address MakeNetworkAddress(Ipv4Address address, SubnetMask mask) {
  return {address.raw & mask.raw};
}

Ipv4Address MakeBroadcastAddress(Ipv4Address address, SubnetMask mask) {
  return {address.raw | ~mask.raw};
}

Ssid MakeSsid() {
  Ssid ssid = {};
  return ssid;
}

Ssid MakeSsid(const char* name) {
  Ssid ssid;
  memset(ssid.raw, 0, sizeof(ssid.raw));
  uint8_t length = 0;
  while (name[length] != 0) {
    ssid.raw[length] = name[length];
    ++length;
  }
  ssid.length = length;
  ssid.raw[length] = 0;
  return ssid;
}

Ssid MakeSsid(const void* data, size_t size) {
  Ssid ssid;
  memset(ssid.raw, 0, sizeof(ssid.raw));
  const char* bytes = static_cast<const char*>(data);
  uint8_t length = 0;
  while (size > length) {
    ssid.raw[length] = bytes[length];
    ++length;
  }
  ssid.length = length;
  ssid.raw[length] = 0;
  return ssid;
}

bool IsValidSsid(const Ssid& ssid) {
  return ssid.length >= 1 && ssid.length <= SsidLengthMax &&
    ssid.raw[ssid.length] == 0;
}

}
