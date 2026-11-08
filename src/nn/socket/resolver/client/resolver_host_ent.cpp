#include "nn/socket/detail/socket_api.hpp"
#include "nn/socket/resolver/resolver_thread_locals.hpp"

namespace nn::socket::resolver::client {

namespace {

void FreeStringList(char** pList) {
  for (char** p = pList; *p != nullptr; ++p) {
    detail::Free(*p);
    *p = nullptr;
  }
}

// Every string of the entry and its lists were allocated on their own.
template <typename T>
void ClearHostEntImpl(T** ppHostEntry) {
  T* pEntry = *ppHostEntry;
  if (pEntry == nullptr) {
    return;
  }
  if (pEntry->h_name != nullptr) {
    detail::Free(pEntry->h_name);
    pEntry->h_name = nullptr;
  }
  if (pEntry->h_aliases != nullptr) {
    FreeStringList(pEntry->h_aliases);
    detail::Free(pEntry->h_aliases);
    pEntry->h_aliases = nullptr;
  }
  if (pEntry->h_addr_list != nullptr) {
    FreeStringList(pEntry->h_addr_list);
    detail::Free(pEntry->h_addr_list);
    pEntry->h_addr_list = nullptr;
  }
  detail::Free(pEntry);
  *ppHostEntry = nullptr;
}

}

void ClearHostEnt(HostEnt** ppHostEntry) {
  ClearHostEntImpl(ppHostEntry);
}

void ClearHostEnt(hostent** ppHostEntry) {
  ClearHostEntImpl(ppHostEntry);
}

}
