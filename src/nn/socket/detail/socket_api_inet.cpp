#include "nn/socket/detail/socket_api.hpp"

namespace nn::socket::detail {

const char* InetNtop(Family family, const void* source, char* destination,
  uint32_t size) {
  return socketNtop(family, source, destination, size);
}

const char* InetNtop(int family, const void* source, char* destination,
  uint32_t size) {
  return socketNtop(family, source, destination, size);
}

int InetPton(Family family, const char* source, void* destination) {
  return socketPton(family, source, destination);
}

int InetPton(int family, const char* source, void* destination) {
  return socketPton(family, source, destination);
}

int InetAton(const char* source, InAddr* destination) {
  return socketAton(source, destination);
}

int InetAton(const char* source, in_addr* destination) {
  return socketAton(source, destination);
}

char* InetNtoa(InAddr address) {
  return socketNtoa(address);
}

char* InetNtoa(in_addr address) {
  return socketNtoa(address);
}

uint16_t InetHtons(uint16_t value) {
  return __builtin_bswap16(value);
}

uint32_t InetHtonl(uint32_t value) {
  return __builtin_bswap32(value);
}

uint64_t InetHtonll(uint64_t value) {
  return __builtin_bswap64(value);
}

uint16_t InetNtohs(uint16_t value) {
  return __builtin_bswap16(value);
}

uint32_t InetNtohl(uint32_t value) {
  return __builtin_bswap32(value);
}

uint64_t InetNtohll(uint64_t value) {
  return __builtin_bswap64(value);
}

}
