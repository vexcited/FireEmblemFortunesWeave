#include <string.h>

#include "nn/socket/detail/socket_api.hpp"
#include "nn/socket/resolver/resolver_thread_locals.hpp"

namespace nn::socket::resolver::client {

ThreadLocals::ThreadLocals()
  : m_HostErrno(0), m_pHostEntry(nullptr), m_pHostEntryOld(nullptr),
    m_pHostErrorString(nullptr), m_pAddrInfoErrorString(nullptr) {}

ThreadLocals::~ThreadLocals() {}

void ThreadLocals::Reset() {
  m_HostErrno = 0;
  ClearHostEnt(&m_pHostEntry);
  ClearHostEnt(&m_pHostEntryOld);
  detail::Free(m_pHostErrorString);
  m_pHostErrorString = nullptr;
  detail::Free(m_pAddrInfoErrorString);
  m_pAddrInfoErrorString = nullptr;
}

char* ThreadLocals::SetStringFromBuffer(char** ppString,
  const uint8_t* pBuffer, size_t size) {
  char* pString = nullptr;
  if (pBuffer != nullptr) {
    int length = 0;
    for (; length != static_cast<int>(size); ++length) {
      if (pBuffer[length] == '\0') {
        break;
      }
    }

    ++length;
    pString = static_cast<char*>(detail::Alloc(length));
    if (pString == nullptr) {
      return nullptr;
    }

    memcpy(pString, pBuffer, length);
    pString[length - 1] = '\0';
    if (*ppString != nullptr) {
      detail::Free(*ppString);
    }
  }

  *ppString = pString;
  return pString;
}

char* ThreadLocals::SetHostErrorStringFromBuffer(const uint8_t* pBuffer,
  size_t size) {
  return SetStringFromBuffer(&m_pHostErrorString, pBuffer, size);
}

char* ThreadLocals::SetAddrInfoErrorStringFromBuffer(const uint8_t* pBuffer,
  size_t size) {
  return SetStringFromBuffer(&m_pAddrInfoErrorString, pBuffer, size);
}

}
