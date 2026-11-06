#include "nn/socket/resolver/resolver_client.hpp"

namespace nn::socket::resolver {

HostEnt* GetHostEntByName(const char* name) {
  return GetHostEntByName(name, nullptr, 0);
}

hostent* GetHostByName(const char* name) {
  return GetHostByName(name, nullptr, 0);
}

HostEnt* GetHostEntByAddr(const void* address, uint32_t length,
  Family family) {
  return GetHostEntByAddr(address, length, family, nullptr, 0);
}

hostent* GetHostByAddr(const void* address, uint32_t length,
  uint32_t family) {
  return GetHostByAddr(address, length, family, nullptr, 0);
}

AiErrno GetAddrInfo(const char* node, const char* service,
  const AddrInfo* hints, AddrInfo** pOutResult) {
  return GetAddrInfo(node, service, hints, pOutResult, nullptr, 0);
}

int GetAddrInfo(const char* node, const char* service, const addrinfo* hints,
  addrinfo** pOutResult) {
  return GetAddrInfo(node, service, hints, pOutResult, nullptr, 0);
}

AiErrno GetNameInfo(const SockAddr* address, uint32_t addressLength,
  char* host, size_t hostLength, char* service, size_t serviceLength,
  NameInfoFlag flags) {
  return GetNameInfo(address, addressLength, host, hostLength, service,
    serviceLength, flags, nullptr, 0);
}

int GetNameInfo(const sockaddr* address, uint32_t addressLength, char* host,
  size_t hostLength, char* service, size_t serviceLength, int flags) {
  return GetNameInfo(address, addressLength, host, hostLength, service,
    serviceLength, flags, nullptr, 0);
}

}
