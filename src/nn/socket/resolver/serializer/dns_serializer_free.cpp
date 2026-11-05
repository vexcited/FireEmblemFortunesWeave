#include <string.h>

#include "nn/socket/detail/socket_api.hpp"
#include "nn/socket/resolver/serializer/dns_serializer.hpp"

namespace nn::socket::resolver::serializer {

namespace {

template <typename T>
void FreeAddressList(char** pList) {
  for (uint32_t index = 0; pList[index] != nullptr; ++index) {
    detail::Free(pList[index]);
    pList[index] = nullptr;
  }
}

template <typename T>
void FreeContents(T& hostEntry) {
  if (hostEntry.h_name != nullptr) {
    detail::Free(hostEntry.h_name);
    hostEntry.h_name = nullptr;
  }

  if (hostEntry.h_aliases != nullptr) {
    for (uint32_t index = 0; hostEntry.h_aliases[index] != nullptr;
      ++index) {
      detail::Free(hostEntry.h_aliases[index]);
      hostEntry.h_aliases[index] = nullptr;
    }

    detail::Free(hostEntry.h_aliases);
    hostEntry.h_aliases = nullptr;
  }

  if (hostEntry.h_addr_list != nullptr) {
    switch (hostEntry.h_length) {
      case sizeof(InAddr):
        FreeAddressList<InAddr>(hostEntry.h_addr_list);
        break;
      case sizeof(In6Addr):
        FreeAddressList<In6Addr>(hostEntry.h_addr_list);
        break;
      default:
        break;
    }

    detail::Free(hostEntry.h_addr_list);
  }

  memset(&hostEntry, 0, sizeof(hostEntry));
}

}

void FreeHostentContents(HostEnt& hostEntry) {
  FreeContents(hostEntry);
}

void FreeHostentContents(hostent& hostEntry) {
  FreeContents(hostEntry);
}

}
