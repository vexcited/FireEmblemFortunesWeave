#include "nn/socket/resolver/serializer/dns_serializer.hpp"
#include "nn/socket/socket_api.hpp"

namespace nn::socket::resolver::serializer {

ssize_t DNSSerializer::CheckToBufferArguments(const uint8_t* pBuffer,
  size_t bufferSize, size_t requiredSize, int line) {
  if (pBuffer == nullptr || bufferSize < requiredSize) {
    return -1;
  }

  return 0;
}

uint32_t DNSSerializer::InternalHton(const uint32_t& value) {
  return InetHtonl(value);
}

uint16_t DNSSerializer::InternalHton(const uint16_t& value) {
  return InetHtons(value);
}

uint32_t DNSSerializer::InternalNtoh(const uint32_t& value) {
  return InetNtohl(value);
}

uint16_t DNSSerializer::InternalNtoh(const uint16_t& value) {
  return InetNtohs(value);
}

}
