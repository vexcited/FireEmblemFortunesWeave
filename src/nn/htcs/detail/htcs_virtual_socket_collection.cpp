#include <string.h>

#include <new>

#include "nn/htcs/detail/htcs_virtual_socket_collection.hpp"
#include "nn/htcs/htcs_api.hpp"

namespace nn::detail {

[[noreturn]] void UnexpectedDefaultImpl();

}

namespace nn::htcs::detail {

sf::SharedPointer<tma::ISocket> socket(int& lastError);
sf::SharedPointer<tma::ISocket> eventFd(int& lastError, uint64_t initialValue,
  int flags);
int close(sf::SharedPointer<tma::ISocket> socket, int& lastError);
int bind(sf::SharedPointer<tma::ISocket> socket, const SockAddrHtcs* address,
  int& lastError);
int listen(sf::SharedPointer<tma::ISocket> socket, int backlogCount,
  int& lastError);
int fcntl(sf::SharedPointer<tma::ISocket> socket, int command, int value,
  int& lastError);
int shutdown(sf::SharedPointer<tma::ISocket> socket, int how,
  int& lastError);
int connect(sf::SharedPointer<tma::ISocket> socket,
  const SockAddrHtcs* address, int& lastError);
ssize_t recv(sf::SharedPointer<tma::ISocket> socket, void* buffer,
  size_t size, int flags, int& lastError);
ssize_t send(sf::SharedPointer<tma::ISocket> socket, const void* buffer,
  size_t size, int flags, int& lastError);
int getBoundTcpPortNumber(sf::SharedPointer<tma::ISocket> socket,
  int& lastError);
int eventFdRead(sf::SharedPointer<tma::ISocket> socket, int& lastError,
  uint64_t* pOutValue);
int eventFdWrite(sf::SharedPointer<tma::ISocket> socket, int& lastError,
  uint64_t value);

namespace {

constexpr int HTCS_F_GETFL = 3;
constexpr int HTCS_F_SETFL = 4;
constexpr int HTCS_O_NONBLOCK = 4;

sf::SharedPointer<tma::ISocket> CreatePrimitive(int type, int& lastError,
  uint64_t initialValue, int flags) {
  switch (type) {
    case 0:
      return detail::socket(lastError);
    case 1:
      return detail::eventFd(lastError, initialValue, flags);
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

}

int virtual_socket::SetSocket(sf::SharedPointer<tma::ISocket> newSocket,
  int& lastError) {
  if (socket || !newSocket) {
    return 0;
  }

  socket = newSocket;
  if (doBind) {
    int result = detail::bind(socket, &address, lastError);
    if (result != 0) {
      return result;
    }
  }

  if (fcntlCommand != -1) {
    int result = detail::fcntl(socket, fcntlCommand, fcntlValue, lastError);
    if (result != 0) {
      return result;
    }
  }

  if (listenBacklogCount > 0) {
    return detail::listen(socket, listenBacklogCount, lastError);
  }

  return 0;
}

virtual_socket_collection::virtual_socket_collection() {
  os::detail::ClearMutexMembers(&m_Mutex);
  os::InitializeMutex(&m_Mutex, true, 0);
  m_NextId = 1;
  m_List = nullptr;
  m_ListCount = 0;
  m_ListSize = 0;
}

virtual_socket_collection::~virtual_socket_collection() {
  Clear();
  for (int i = 0; i < m_ListSize; i++) {
    m_List[i].~virtual_socket();
  }

  os::FinalizeMutex(&m_Mutex);
}

void virtual_socket_collection::Clear() {
  os::LockMutex(&m_Mutex);
  m_ListCount = 0;
  memset(m_List, 0, m_ListSize * sizeof(virtual_socket));
  os::UnlockMutex(&m_Mutex);
}

size_t virtual_socket_collection::GetWorkingMemorySize(int socketCount) {
  return socketCount * sizeof(virtual_socket);
}

void virtual_socket_collection::Init(void* buffer, size_t bufferSize) {
  m_Buffer = buffer;
  m_BufferSize = bufferSize;
  m_List = static_cast<virtual_socket*>(buffer);

  int count = static_cast<int>(bufferSize / sizeof(virtual_socket));
  m_ListSize = count < SocketCountMax ? count : SocketCountMax;
  for (int i = 0; i < m_ListSize; i++) {
    new (&m_List[i]) virtual_socket;
  }
}

void virtual_socket_collection::SetSize(int size) {}

int virtual_socket_collection::Socket(int& lastError) {
  lastError = 0;
  return CreateSocket(sf::SharedPointer<tma::ISocket>(), lastError);
}

int virtual_socket_collection::Close(int id, int& lastError) {
  lastError = 0;
  os::LockMutex(&m_Mutex);
  int index = Find(id, &lastError);
  if (index < 0) {
    os::UnlockMutex(&m_Mutex);
    return -1;
  }

  sf::SharedPointer<tma::ISocket> socket = m_List[index].socket;
  for (int i = index; i < m_ListCount - 1; i++) {
    m_List[i] = m_List[i + 1];
  }

  m_List[m_ListCount - 1] = virtual_socket();
  m_ListCount--;
  os::UnlockMutex(&m_Mutex);

  if (socket) {
    detail::close(socket, lastError);
    lastError = 0;
  }

  return 0;
}

int virtual_socket_collection::Bind(int id, const SockAddrHtcs* address,
  int& lastError) {
  lastError = 0;
  sf::SharedPointer<tma::ISocket> socket = GetSocket(id, &lastError);
  if (socket) {
    return detail::bind(socket, address, lastError);
  }

  if (lastError == HTCS_EBADF) {
    return -1;
  }

  int result;
  os::LockMutex(&m_Mutex);
  int index = Find(id, &lastError);
  if (index >= 0) {
    virtual_socket& entry = m_List[index];
    if (HasAddr(address)) {
      result = -1;
      lastError = entry.doBind ? HTCS_EINVAL : HTCS_EADDRINUSE;
    }
    else if (!entry.doBind) {
      lastError = 0;
      result = 0;
      entry.doBind = true;
      entry.address = *address;
    }
    else {
      result = -1;
      lastError = HTCS_EINVAL;
    }
  }
  else {
    result = -1;
  }

  os::UnlockMutex(&m_Mutex);
  return result;
}

int virtual_socket_collection::Listen(int id, int backlogCount,
  int& lastError) {
  lastError = 0;
  sf::SharedPointer<tma::ISocket> socket = GetSocket(id, &lastError);
  if (socket) {
    return detail::listen(socket, backlogCount, lastError);
  }

  if (lastError == HTCS_EBADF) {
    return -1;
  }

  int result = -1;
  os::LockMutex(&m_Mutex);
  int index = Find(id, nullptr);
  if (index >= 0) {
    virtual_socket& entry = m_List[index];
    // The original tests the whole byte.
    if (*reinterpret_cast<const uint8_t*>(&entry.doBind) != 0) {
      entry.listenBacklogCount = backlogCount > 1 ? backlogCount : 1;
      lastError = 0;
      result = 0;
    }
    else {
      lastError = HTCS_EINVAL;
      result = -1;
    }
  }

  os::UnlockMutex(&m_Mutex);
  return result;
}

int virtual_socket_collection::Fcntl(int id, int command, int value,
  int& lastError) {
  lastError = 0;
  sf::SharedPointer<tma::ISocket> socket = GetSocket(id, &lastError);
  if (socket) {
    return detail::fcntl(socket, command, value, lastError);
  }

  if (lastError == HTCS_EBADF) {
    return -1;
  }

  int result = -1;
  os::LockMutex(&m_Mutex);
  int index = Find(id, nullptr);
  if (index >= 0) {
    virtual_socket& entry = m_List[index];
    lastError = 0;
    if (command == HTCS_F_GETFL) {
      result = entry.fcntlValue;
    }
    else if (command == HTCS_F_SETFL) {
      entry.fcntlCommand = HTCS_F_SETFL;
      entry.fcntlValue = value;
      entry.blocking = (value & HTCS_O_NONBLOCK) == 0;
      result = 0;
    }
    else {
      lastError = HTCS_EINVAL;
      result = -1;
    }
  }

  os::UnlockMutex(&m_Mutex);
  return result;
}

int virtual_socket_collection::GetBoundTcpPortNumber(int id, int& portNumber,
  int& lastError) {
  lastError = 0;
  sf::SharedPointer<tma::ISocket> socket = GetSocket(id, &lastError);
  if (!socket) {
    if (lastError != HTCS_EBADF) {
      lastError = HTCS_ENOTCONN;
    }

    return -1;
  }

  portNumber = detail::getBoundTcpPortNumber(socket, lastError);
  return portNumber < 0 ? -1 : 0;
}

int virtual_socket_collection::Shutdown(int id, int how, int& lastError) {
  lastError = 0;
  sf::SharedPointer<tma::ISocket> socket = GetSocket(id, &lastError);
  if (!socket) {
    if (lastError != HTCS_EBADF) {
      lastError = HTCS_ENOTCONN;
    }

    return -1;
  }

  return detail::shutdown(socket, how, lastError);
}

ssize_t virtual_socket_collection::Recv(int id, void* buffer, size_t size,
  int flags, int& lastError) {
  lastError = 0;
  sf::SharedPointer<tma::ISocket> socket = FetchSocket(id, lastError);
  if (!socket) {
    if (lastError != HTCS_EBADF) {
      lastError = HTCS_ENOTCONN;
    }

    return -1;
  }

  if (lastError != 0) {
    return -1;
  }

  return detail::recv(socket, buffer, size, flags, lastError);
}

ssize_t virtual_socket_collection::Send(int id, const void* buffer,
  size_t size, int flags, int& lastError) {
  lastError = 0;
  sf::SharedPointer<tma::ISocket> socket = FetchSocket(id, lastError);
  if (!socket) {
    if (lastError != HTCS_EBADF) {
      lastError = HTCS_ENOTCONN;
    }

    return -1;
  }

  if (lastError != 0) {
    return -1;
  }

  return detail::send(socket, buffer, size, flags, lastError);
}

int virtual_socket_collection::Connect(int id, const SockAddrHtcs* address,
  int& lastError) {
  lastError = 0;
  sf::SharedPointer<tma::ISocket> socket = FetchSocket(id, lastError);
  if (!socket) {
    if (lastError != HTCS_EBADF) {
      lastError = HTCS_EADDRNOTAVAIL;
    }

    return -1;
  }

  if (lastError != 0) {
    return -1;
  }

  return detail::connect(socket, address, lastError);
}

int virtual_socket_collection::EventFd(uint64_t initialValue, int flags,
  int& lastError) {
  lastError = 0;
  return CreateEventFd(sf::SharedPointer<tma::ISocket>(), lastError,
    initialValue, flags);
}

int virtual_socket_collection::EventFdRead(int id, uint64_t* pOutValue,
  int& lastError) {
  lastError = 0;
  sf::SharedPointer<tma::ISocket> socket = FetchSocket(id, lastError);
  if (!socket) {
    if (lastError != HTCS_EBADF) {
      lastError = HTCS_ENOTCONN;
    }

    return -1;
  }

  if (lastError != 0) {
    return -1;
  }

  return detail::eventFdRead(socket, lastError, pOutValue);
}

int virtual_socket_collection::EventFdWrite(int id, uint64_t value,
  int& lastError) {
  lastError = 0;
  sf::SharedPointer<tma::ISocket> socket = FetchSocket(id, lastError);
  if (!socket) {
    if (lastError != HTCS_EBADF) {
      lastError = HTCS_ENOTCONN;
    }

    return -1;
  }

  if (lastError != 0) {
    return -1;
  }

  return detail::eventFdWrite(socket, lastError, value);
}

int virtual_socket_collection::CreateSocket(
  sf::SharedPointer<tma::ISocket> socket, int& lastError) {
  lastError = 0;
  if (m_ListCount >= m_ListSize) {
    if (socket) {
      int error = 0;
      detail::close(socket, error);
    }

    lastError = HTCS_EMFILE;
    return -1;
  }

  os::LockMutex(&m_Mutex);
  int id = CreateId();
  Insert(id, socket);
  os::UnlockMutex(&m_Mutex);
  return id;
}

int virtual_socket_collection::CreateEventFd(
  sf::SharedPointer<tma::ISocket> socket, int& lastError,
  uint64_t initialValue, int flags) {
  int id = CreateSocket(socket, lastError);
  if (id < 0) {
    return id;
  }

  os::LockMutex(&m_Mutex);
  int index = Find(id, &lastError);
  if (index >= 0) {
    m_List[index].type = 1;
    m_List[index].eventFdInitialValue = initialValue;
    m_List[index].eventFdFlags = flags;
  }
  else {
    id = -1;
  }

  os::UnlockMutex(&m_Mutex);
  return id;
}

int virtual_socket_collection::Add(sf::SharedPointer<tma::ISocket> socket) {
  if (!socket) {
    return -1;
  }

  int error;
  return CreateSocket(socket, error);
}

int virtual_socket_collection::CreateId() {
  int id;
  do {
    id = m_NextId++;
    if (m_NextId <= 0) {
      m_NextId = 1;
    }
  } while (Find(id, nullptr) >= 0);

  return id;
}

void virtual_socket_collection::Insert(int id,
  sf::SharedPointer<tma::ISocket> socket) {
  if (m_ListCount == 0) {
    m_List[0].id = id;
    m_List[0].socket = socket;
  }
  else {
    int i;
    for (i = m_ListCount; i > 0; i--) {
      if (m_List[i - 1].id < id) {
        break;
      }

      m_List[i] = m_List[i - 1];
    }

    m_List[i].id = id;
    m_List[i].socket = socket;
  }

  m_ListCount++;
}

int virtual_socket_collection::Find(int id, int* pOutError) {
  int left = 0;
  int right = m_ListCount - 1;
  while (left <= right) {
    int middle = (left + right) / 2;
    if (m_List[middle].id == id) {
      return middle;
    }

    if (m_List[middle].id <= id) {
      left = middle + 1;
    }
    else {
      right = middle - 1;
    }
  }

  if (pOutError != nullptr) {
    *pOutError = HTCS_EBADF;
  }

  return -1;
}

int virtual_socket_collection::FindByPrimitive(int primitive) {
  for (int i = 0; i < m_ListSize; i++) {
    if (m_List[i].primitive == primitive) {
      return i;
    }
  }

  return -1;
}

bool virtual_socket_collection::HasAddr(const SockAddrHtcs* address) {
  for (int i = 0; i < m_ListCount; i++) {
    const SockAddrHtcs& other = m_List[i].address;
    if (address->family == other.family &&
      strcmp(address->peerName.name, other.peerName.name) == 0 &&
      strcmp(address->portName.name, other.portName.name) == 0) {
      return true;
    }
  }

  return false;
}

sf::SharedPointer<tma::ISocket> virtual_socket_collection::GetSocket(int id,
  int* pOutError) {
  sf::SharedPointer<tma::ISocket> socket;
  os::LockMutex(&m_Mutex);
  int index = Find(id, pOutError);
  if (index >= 0) {
    socket = m_List[index].socket;
  }

  os::UnlockMutex(&m_Mutex);
  return socket;
}

sf::SharedPointer<tma::ISocket> virtual_socket_collection::FetchSocket(int id,
  int& lastError) {
  os::LockMutex(&m_Mutex);
  lastError = 0;
  sf::SharedPointer<tma::ISocket> socket = GetSocket(id, &lastError);
  if (!socket && lastError == 0) {
    socket = RealizeSocket(id);
  }

  os::UnlockMutex(&m_Mutex);
  return socket;
}

sf::SharedPointer<tma::ISocket> virtual_socket_collection::RealizeSocket(
  int id) {
  int lastError = 0;
  int type = 0;
  uint64_t initialValue = 0;
  int flags = 0;
  os::LockMutex(&m_Mutex);
  int index = Find(id, &lastError);
  if (index >= 0) {
    type = m_List[index].type;
    initialValue = m_List[index].eventFdInitialValue;
    flags = m_List[index].eventFdFlags;
  }

  os::UnlockMutex(&m_Mutex);

  sf::SharedPointer<tma::ISocket> socket;
  CreatePrimitive(type, lastError, initialValue, flags).Swap(socket);
  if (!socket) {
    return socket;
  }

  os::LockMutex(&m_Mutex);
  index = Find(id, &lastError);
  if (index < 0) {
    os::UnlockMutex(&m_Mutex);
    int error = 0;
    detail::close(socket, error);
    socket.Reset();
    return socket;
  }

  m_List[index].SetSocket(socket, lastError);
  os::UnlockMutex(&m_Mutex);
  return socket;
}

int virtual_socket_collection::GetSockets(int* primitives, FdSet* set,
  int& lastError, bool& isClosed) {
  lastError = 0;
  isClosed = false;
  if (set == nullptr) {
    return 0;
  }

  int count = 0;
  for (int i = 0; i < SocketCountMax; i++) {
    int id = set->fds[i];
    if (id == 0) {
      break;
    }

    int primitive = -1;
    os::LockMutex(&m_Mutex);
    int index = Find(id, &lastError);
    if (index >= 0) {
      virtual_socket& entry = m_List[index];
      if (entry.primitive == -1 && entry.socket) {
        entry.socket->GetPrimitive(sf::Out<int>(&entry.primitive));
      }

      primitive = m_List[index].primitive;
    }

    os::UnlockMutex(&m_Mutex);
    if (lastError != 0) {
      return 0;
    }

    if (primitive == -1) {
      if (!RealizeSocket(id)) {
        isClosed = true;
        return 0;
      }

      os::LockMutex(&m_Mutex);
      index = Find(id, &lastError);
      if (index >= 0) {
        virtual_socket& entry = m_List[index];
        entry.socket->GetPrimitive(sf::Out<int>(&entry.primitive));
        primitive = m_List[index].primitive;
      }

      os::UnlockMutex(&m_Mutex);
      if (lastError != 0) {
        return 0;
      }
    }

    if (primitive != -1) {
      primitives[count++] = primitive;
    }
  }

  return count;
}

void virtual_socket_collection::SetSockets(FdSet* set, int* primitives,
  int count) {
  if (set == nullptr) {
    return;
  }

  FdSetZero(set);
  for (int i = 0; i < count; i++) {
    os::LockMutex(&m_Mutex);
    int index = FindByPrimitive(primitives[i]);
    if (index >= 0) {
      set->fds[i] = m_List[index].id;
    }

    os::UnlockMutex(&m_Mutex);
  }
}

}
