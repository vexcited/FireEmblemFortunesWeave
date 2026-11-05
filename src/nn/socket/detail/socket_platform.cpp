#include <string.h>

#include "nn/socket/detail/socket_api.hpp"

namespace nn::util {

int SNPrintf(char* buffer, size_t size, const char* format, ...);

}

namespace nn::socket::detail {

char* socketNtoa(InAddr address) {
  static char s_Buffer[16];
  util::SNPrintf(s_Buffer, sizeof(s_Buffer), "%d.%d.%d.%d",
    address.S_addr & 0xff, (address.S_addr >> 8) & 0xff,
    (address.S_addr >> 16) & 0xff, address.S_addr >> 24);
  return s_Buffer;
}

char* socketNtoa(in_addr address) {
  static char s_Buffer[16];
  util::SNPrintf(s_Buffer, sizeof(s_Buffer), "%d.%d.%d.%d",
    address.s_addr & 0xff, (address.s_addr >> 8) & 0xff,
    (address.s_addr >> 16) & 0xff, address.s_addr >> 24);
  return s_Buffer;
}

char* socketNtoaR(InAddr address, char* buffer, size_t size) {
  util::SNPrintf(buffer, size, "%d.%d.%d.%d", address.S_addr & 0xff,
    (address.S_addr >> 8) & 0xff, (address.S_addr >> 16) & 0xff,
    address.S_addr >> 24);
  return buffer;
}

char* socketNtoaR(in_addr address, char* buffer, size_t size) {
  util::SNPrintf(buffer, size, "%d.%d.%d.%d", address.s_addr & 0xff,
    (address.s_addr >> 8) & 0xff, (address.s_addr >> 16) & 0xff,
    address.s_addr >> 24);
  return buffer;
}

const char* socketNtop(int family, const void* source, char* destination,
  uint32_t size) {
  return socketNtop(static_cast<Family>(family), source, destination, size);
}

int socketPton(int family, const char* source, void* destination) {
  return socketPton(static_cast<Family>(family), source, destination);
}

void CopyToPlatform(sockaddr_in* pOut, const SockAddrIn* pIn) {
  if (pIn != nullptr) {
    pOut->sin_len = pIn->sin_len;
    pOut->sin_family = static_cast<uint8_t>(pIn->sin_family);
    pOut->sin_port = pIn->sin_port;
    pOut->sin_addr.s_addr = pIn->sin_addr.S_addr;
    memcpy(pOut->sin_zero, pIn->sin_zero, sizeof(pOut->sin_zero));
  }
}

void CopyFromPlatform(SockAddrIn* pOut, const sockaddr_in* pIn) {
  if (pOut != nullptr) {
    pOut->sin_len = pIn->sin_len;
    pOut->sin_family = static_cast<Family>(pIn->sin_family);
    pOut->sin_port = pIn->sin_port;
    pOut->sin_addr.S_addr = pIn->sin_addr.s_addr;
    memcpy(pOut->sin_zero, pIn->sin_zero, sizeof(pOut->sin_zero));
  }
}

void FreeCopiedAddrInfo(AddrInfo* addressInfo) {
  if (addressInfo != nullptr) {
    Free(addressInfo->ai_canonname);
    Free(addressInfo->ai_addr);
    FreeCopiedAddrInfo(addressInfo->ai_next);
    Free(addressInfo);
  }
}

void CopyToPlatform(fd_set* pOut, const FdSet* pIn) {
  if (pIn != nullptr) {
    memcpy(pOut, pIn, sizeof(*pOut));
  }
}

void CopyFromPlatform(FdSet* pOut, const fd_set* pIn) {
  if (pOut != nullptr) {
    memcpy(pOut, pIn, sizeof(*pOut));
  }
}

}
