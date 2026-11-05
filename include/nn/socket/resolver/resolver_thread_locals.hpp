#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/socket/socket_types.hpp"
#include "nn/util/intrusive_list.hpp"

namespace nn::socket::resolver::client {

void ClearHostEnt(HostEnt** ppHostEntry);
void ClearHostEnt(hostent** ppHostEntry);

class ThreadLocals {
public:
  ThreadLocals();
  ~ThreadLocals();

  void Reset();
  char* SetHostErrorStringFromBuffer(const uint8_t* pBuffer, size_t size);
  static char* SetStringFromBuffer(char** ppString,
    const uint8_t* pBuffer, size_t size);
  char* SetAddrInfoErrorStringFromBuffer(const uint8_t* pBuffer,
    size_t size);

  int m_HostErrno;
  HostEnt* m_pHostEntry;
  hostent* m_pHostEntryOld;
  char* m_pHostErrorString;
  char* m_pAddrInfoErrorString;
};

class ThreadAssocEntry
  : public util::IntrusiveListBaseNode<ThreadAssocEntry> {
public:
  explicit ThreadAssocEntry(uint64_t threadId);
  ~ThreadAssocEntry();

  uint64_t m_ThreadId;
  ThreadLocals m_Locals;
};

class UserAssocEntry : public util::IntrusiveListBaseNode<UserAssocEntry> {
public:
  explicit UserAssocEntry(const void* pointer);

  const void* m_Pointer;
};

}
