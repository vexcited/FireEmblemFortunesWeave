#include "nn/socket/resolver/resolver_thread_locals.hpp"

namespace nn::socket::resolver::client {

ThreadAssocEntry::ThreadAssocEntry(uint64_t threadId)
  : m_ThreadId(threadId) {}

ThreadAssocEntry::~ThreadAssocEntry() {}

UserAssocEntry::UserAssocEntry(const void* pointer) : m_Pointer(pointer) {}

}
