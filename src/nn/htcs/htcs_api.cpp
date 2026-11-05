#include <new>

#include "nn/diag/diag_abort.hpp"
#include "nn/htcs/detail/htcs_tma.hpp"
#include "nn/htcs/detail/htcs_virtual_socket_collection.hpp"
#include "nn/htcs/htcs_api.hpp"
#include "nn/os/sleep_thread.hpp"
#include "nn/os/system_event.hpp"
#include "nn/os/timer_event.hpp"
#include "nn/os/tls.hpp"
#include "nn/sf/hipc_simple_client_session_manager.hpp"
#include "nn/util/string_util.hpp"

namespace nn::htcs {

sf::SharedPointer<tma::IHtcsManager> CreateHtcsManagerByHipc(
  detail::PortType portType);
sf::SharedPointer<tma::IHtcsManager> CreateHtcsManagerByHipc(
  detail::PortType portType, sf::HipcSimpleClientSessionManager* manager);

namespace {

bool g_DisableDisconnectionEmulation;
bool g_IsInitialized;
os::TlsSlot g_TlsSlot;
detail::virtual_socket_collection* g_Sockets;
void* g_Buffer;
DeallocateFunction g_Deallocate;
size_t g_BufferSize;
tma::IHtcsManager* g_Manager;
tma::IHtcsManager* g_Monitor;
AllocateFunction g_Allocate;
sf::HipcSimpleClientSessionManager g_SessionManager;

void InitializeImpl(void* buffer, size_t bufferSize, int sessionCount,
  detail::PortType portType) {
  g_Monitor = CreateHtcsManagerByHipc(portType).Detach();
  g_Manager = CreateHtcsManagerByHipc(portType, &g_SessionManager).Detach();

  g_SessionManager.resize_mutex.Lock();
  NN_ABORT_UNLESS(sessionCount <=
    static_cast<int>(g_SessionManager.manager.capacity));
  Result result = Result{sf::hipc::client::ResizeSessions(
    &g_SessionManager.manager, sessionCount)};
  g_SessionManager.resize_mutex.Unlock();
  NN_ABORT_UNLESS_RESULT_SUCCESS(result);

  NN_ABORT_UNLESS_RESULT_SUCCESS(g_Manager->RegisterProcessId(0));
  NN_ABORT_UNLESS_RESULT_SUCCESS(g_Monitor->MonitorManager(0));
  NN_ABORT_UNLESS_RESULT_SUCCESS(os::SdkAllocateTlsSlot(&g_TlsSlot,
    nullptr));

  g_Sockets = new (buffer) detail::virtual_socket_collection;
  g_Sockets->Init(static_cast<uint8_t*>(buffer) +
    sizeof(detail::virtual_socket_collection),
    bufferSize - sizeof(detail::virtual_socket_collection));
  g_IsInitialized = true;
}

void AllocateBuffer(AllocateFunction allocate, DeallocateFunction deallocate) {
  g_Allocate = allocate;
  g_Deallocate = deallocate;
  g_BufferSize = GetWorkingMemorySize(SocketCountMax);
  g_Buffer = g_Allocate(g_BufferSize);
}

void SetLastError(int error) {
  os::SetTlsValue(g_TlsSlot, error);
}

}

void Initialize(void* buffer, size_t bufferSize) {
  g_DisableDisconnectionEmulation = false;
  InitializeImpl(buffer, bufferSize, SessionCountMax,
    detail::PortType_Normal);
}

void Finalize() {
  g_IsInitialized = false;
  g_Sockets->~virtual_socket_collection();
  g_Sockets = nullptr;
  if (g_Buffer != nullptr) {
    g_Deallocate(g_Buffer, g_BufferSize);
    g_Buffer = nullptr;
    g_BufferSize = 0;
  }

  os::FreeTlsSlot(g_TlsSlot);
  g_Manager->Release();
  g_Monitor->Release();
  g_SessionManager.resize_mutex.Lock();
  sf::hipc::client::ResizeSessions(&g_SessionManager.manager, 0);
  g_SessionManager.resize_mutex.Unlock();
}

namespace detail {

sf::SharedPointer<tma::ISocket> socket(int& lastError) {
  sf::SharedPointer<tma::ISocket> socket;
  NN_ABORT_UNLESS_RESULT_SUCCESS(g_Manager->CreateSocket(
    sf::Out<int>(&lastError), sf::Out<sf::SharedPointer<tma::ISocket>>(
      &socket), !g_DisableDisconnectionEmulation));
  return socket;
}

int close(sf::SharedPointer<tma::ISocket> socket, int& lastError) {
  int result = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(socket->Close(sf::Out<int>(&lastError),
    sf::Out<int>(&result)));
  return result;
}

int connect(sf::SharedPointer<tma::ISocket> socket,
  const SockAddrHtcs* address, int& lastError) {
  SockAddrHtcs copy;
  copy.family = address->family;
  util::Strlcpy(copy.peerName.name, address->peerName.name,
    sizeof(copy.peerName.name));
  util::Strlcpy(copy.portName.name, address->portName.name,
    sizeof(copy.portName.name));

  int result = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(socket->Connect(sf::Out<int>(&lastError),
    sf::Out<int>(&result), copy));
  return result;
}

int bind(sf::SharedPointer<tma::ISocket> socket, const SockAddrHtcs* address,
  int& lastError) {
  SockAddrHtcs copy;
  copy.family = address->family;
  util::Strlcpy(copy.peerName.name, address->peerName.name,
    sizeof(copy.peerName.name));
  util::Strlcpy(copy.portName.name, address->portName.name,
    sizeof(copy.portName.name));

  int result = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(socket->Bind(sf::Out<int>(&lastError),
    sf::Out<int>(&result), copy));
  return result;
}

int listen(sf::SharedPointer<tma::ISocket> socket, int backlogCount,
  int& lastError) {
  int result = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(socket->Listen(sf::Out<int>(&lastError),
    sf::Out<int>(&result), backlogCount));
  return result;
}

sf::SharedPointer<tma::ISocket> accept(sf::SharedPointer<tma::ISocket> socket,
  SockAddrHtcs* address, int& lastError) {
  sf::SharedPointer<tma::ISocket> accepted;
  uint32_t taskId = 0;
  sf::NativeHandle handle;
  if (socket->AcceptStart(sf::Out<uint32_t>(&taskId),
    sf::Out<sf::NativeHandle>(&handle)).IsFailure()) {
    lastError = HTCS_EINTR;
  }
  else {
    os::SystemEventType event = {};
    os::AttachReadableHandleToSystemEvent(&event, handle.GetOsHandle(),
      handle.IsManaged(), os::EventClearMode_ManualClear);
    handle.Detach();
    os::WaitSystemEvent(&event);
    socket->AcceptResults(sf::Out<int>(&lastError),
      sf::Out<sf::SharedPointer<tma::ISocket>>(&accepted),
      sf::Out<SockAddrHtcs>(address), taskId);
    os::DestroySystemEvent(&event);
    if (lastError == 0) {
      return accepted;
    }
  }

  os::SleepThread(TimeSpan{1000000});
  return accepted;
}

namespace {

constexpr size_t SmallTransferSizeMax = 0xdfe0;

int64_t recvLarge(sf::SharedPointer<tma::ISocket> socket, void* buffer,
  size_t size, int flags, int& lastError) {
  int64_t received = 0;
  sf::NativeHandle handle;
  uint32_t taskId = 0;
  lastError = HTCS_EINTR;
  if (socket->StartRecv(sf::Out<uint32_t>(&taskId),
    sf::Out<sf::NativeHandle>(&handle), size, flags).IsFailure()) {
    os::SleepThread(TimeSpan{1000000});
    return received;
  }

  os::SystemEventType event = {};
  os::AttachReadableHandleToSystemEvent(&event, handle.GetOsHandle(),
    handle.IsManaged(), os::EventClearMode_ManualClear);
  handle.Detach();
  os::WaitSystemEvent(&event);
  os::ClearSystemEvent(&event);
  socket->EndRecv(sf::Out<int>(&lastError), sf::Out<int64_t>(&received),
    sf::OutBuffer(buffer, size), taskId);
  os::DestroySystemEvent(&event);
  return received;
}

int64_t sendLarge(sf::SharedPointer<tma::ISocket> socket, const void* buffer,
  size_t size, int flags, int& lastError) {
  int64_t sent = -1;
  uint32_t taskId = 0;
  sf::NativeHandle handle;
  int64_t maxSize = 0;
  lastError = HTCS_EINTR;
  if (socket->StartSend(sf::Out<uint32_t>(&taskId),
    sf::Out<sf::NativeHandle>(&handle), sf::Out<int64_t>(&maxSize), size,
    flags).IsFailure()) {
    os::SleepThread(TimeSpan{1000000});
    return -1;
  }

  os::SystemEventType event = {};
  os::AttachReadableHandleToSystemEvent(&event, handle.GetOsHandle(),
    handle.IsManaged(), os::EventClearMode_ManualClear);
  handle.Detach();

  const char* bytes = static_cast<const char*>(buffer);
  int64_t offset = 0;
  while (true) {
    bool wait = false;
    int64_t chunk = 0;
    int64_t remaining = size - offset;
    Result result = socket->ContinueSend(sf::Out<int64_t>(&chunk),
      sf::Out<bool>(&wait), sf::InBuffer(bytes + offset,
        remaining < maxSize ? remaining : maxSize), taskId);
    if (chunk < 1 || result.IsFailure()) {
      break;
    }
    if (wait) {
      os::WaitSystemEvent(&event);
      os::ClearSystemEvent(&event);
    }
    offset += chunk;
    if (offset >= static_cast<int64_t>(size)) {
      os::WaitSystemEvent(&event);
      break;
    }
  }

  socket->EndSend(sf::Out<int>(&lastError), sf::Out<int64_t>(&sent), taskId);
  os::DestroySystemEvent(&event);
  return sent;
}

}

int64_t recv(sf::SharedPointer<tma::ISocket> socket, void* buffer,
  size_t size, int flags, int& lastError) {
  int64_t received = -1;
  if ((flags & (HTCS_MSG_PEEK | HTCS_MSG_WAITALL)) ==
    (HTCS_MSG_PEEK | HTCS_MSG_WAITALL)) {
    lastError = HTCS_EINVAL;
    return -1;
  }

  size_t clamped = size < SmallTransferSizeMax ? size : SmallTransferSizeMax;
  size_t recvSize = (flags & HTCS_MSG_WAITALL) != 0 ? size : clamped;
  if (recvSize > SmallTransferSizeMax) {
    return recvLarge(socket, buffer, recvSize, flags, lastError);
  }

  uint32_t taskId = 0;
  sf::NativeHandle handle;
  if (socket->RecvStart(sf::Out<uint32_t>(&taskId),
    sf::Out<sf::NativeHandle>(&handle), static_cast<int>(recvSize),
    flags).IsFailure()) {
    lastError = HTCS_EINTR;
    os::SleepThread(TimeSpan{1000000});
    return received;
  }

  os::SystemEventType event = {};
  os::AttachReadableHandleToSystemEvent(&event, handle.GetOsHandle(),
    handle.IsManaged(), os::EventClearMode_ManualClear);
  handle.Detach();
  os::WaitSystemEvent(&event);
  socket->RecvResults(sf::Out<int>(&lastError), sf::Out<int64_t>(&received),
    sf::OutBuffer(buffer, recvSize), taskId);
  os::DestroySystemEvent(&event);
  return received;
}

int64_t send(sf::SharedPointer<tma::ISocket> socket, const void* buffer,
  size_t size, int flags, int& lastError) {
  int64_t sent = -1;
  if (size > SmallTransferSizeMax) {
    return sendLarge(socket, buffer, size, flags, lastError);
  }

  sf::NativeHandle handle;
  uint32_t taskId = 0;
  if (socket->SendStart(sf::Out<uint32_t>(&taskId),
    sf::Out<sf::NativeHandle>(&handle), sf::InBuffer(buffer, size),
    flags).IsFailure()) {
    lastError = HTCS_EINTR;
    os::SleepThread(TimeSpan{1000000});
    return -1;
  }

  os::SystemEventType event = {};
  os::AttachReadableHandleToSystemEvent(&event, handle.GetOsHandle(),
    handle.IsManaged(), os::EventClearMode_ManualClear);
  handle.Detach();
  os::WaitSystemEvent(&event);
  socket->SendResults(sf::Out<int>(&lastError), sf::Out<int64_t>(&sent),
    taskId);
  os::DestroySystemEvent(&event);
  return sent;
}

int select(int* readFds, int& readCount, int* writeFds, int& writeCount,
  int* exceptFds, int& exceptCount, TimeVal* timeout, int& lastError) {
  sf::NativeHandle handle;
  uint32_t taskId = 0;
  int count = -1;

  int64_t seconds = -1;
  int64_t microseconds = -1;
  if (timeout != nullptr) {
    seconds = timeout->tv_sec;
    microseconds = timeout->tv_usec;
  }

  if (g_Manager->StartSelect(sf::Out<uint32_t>(&taskId),
    sf::Out<sf::NativeHandle>(&handle), sf::InArray<int>(readFds, readCount),
    sf::InArray<int>(writeFds, writeCount),
    sf::InArray<int>(exceptFds, exceptCount), seconds,
    microseconds).IsFailure()) {
    lastError = HTCS_EINTR;
    os::SleepThread(TimeSpan{1000000});
    return -1;
  }

  os::SystemEventType event = {};
  os::AttachReadableHandleToSystemEvent(&event, handle.GetOsHandle(),
    handle.IsManaged(), os::EventClearMode_ManualClear);
  handle.Detach();
  os::WaitSystemEvent(&event);
  g_Manager->EndSelect(sf::Out<int>(&lastError), sf::Out<int>(&count),
    sf::OutArray<int>(readFds, readCount),
    sf::OutArray<int>(writeFds, writeCount),
    sf::OutArray<int>(exceptFds, exceptCount), taskId);
  os::DestroySystemEvent(&event);
  return count;
}

int shutdown(sf::SharedPointer<tma::ISocket> socket, int how,
  int& lastError) {
  int result = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(socket->Shutdown(sf::Out<int>(&lastError),
    sf::Out<int>(&result), how));
  return result;
}

int fcntl(sf::SharedPointer<tma::ISocket> socket, int command, int value,
  int& lastError) {
  int result = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(socket->Fcntl(sf::Out<int>(&lastError),
    sf::Out<int>(&result), command, value));
  return result;
}

int getBoundTcpPortNumber(sf::SharedPointer<tma::ISocket> socket,
  int& lastError) {
  uint32_t taskId = 0;
  sf::NativeHandle handle;
  int portNumber = -1;
  if (socket->GetBoundTcpPortNumberStart(sf::Out<uint32_t>(&taskId),
    sf::Out<sf::NativeHandle>(&handle)).IsFailure()) {
    lastError = HTCS_EINTR;
    os::SleepThread(TimeSpan{1000000});
    return -1;
  }

  os::SystemEventType event = {};
  os::AttachReadableHandleToSystemEvent(&event, handle.GetOsHandle(),
    handle.IsManaged(), os::EventClearMode_ManualClear);
  handle.Detach();
  os::WaitSystemEvent(&event);
  socket->GetBoundTcpPortNumberResults(sf::Out<int>(&lastError),
    sf::Out<int>(&portNumber), taskId);
  os::DestroySystemEvent(&event);
  return portNumber;
}

sf::SharedPointer<tma::ISocket> eventFd(int& lastError, uint64_t initialValue,
  int flags) {
  sf::SharedPointer<tma::ISocket> socket;
  NN_ABORT_UNLESS_RESULT_SUCCESS(g_Manager->CreateEventFd(
    sf::Out<int>(&lastError), sf::Out<sf::SharedPointer<tma::ISocket>>(
      &socket), initialValue, flags));
  return socket;
}

int eventFdRead(sf::SharedPointer<tma::ISocket> socket, int& lastError,
  uint64_t* pOutValue) {
  uint32_t taskId = 0;
  sf::NativeHandle handle;
  if (socket->EventFdReadStart(sf::Out<uint32_t>(&taskId),
    sf::Out<sf::NativeHandle>(&handle)).IsFailure()) {
    lastError = HTCS_EINTR;
    os::SleepThread(TimeSpan{1000000});
    return -1;
  }

  os::SystemEventType event = {};
  os::AttachReadableHandleToSystemEvent(&event, handle.GetOsHandle(),
    handle.IsManaged(), os::EventClearMode_ManualClear);
  handle.Detach();
  os::WaitSystemEvent(&event);
  socket->EventFdReadResults(sf::Out<int>(&lastError),
    sf::Out<uint64_t>(pOutValue), taskId);
  int result = lastError != 0 ? -1 : 0;
  os::DestroySystemEvent(&event);
  return result;
}

int eventFdWrite(sf::SharedPointer<tma::ISocket> socket, int& lastError,
  uint64_t value) {
  uint32_t taskId = 0;
  sf::NativeHandle handle;
  if (socket->EventFdWriteStart(sf::Out<uint32_t>(&taskId),
    sf::Out<sf::NativeHandle>(&handle), value).IsFailure()) {
    lastError = HTCS_EINTR;
    os::SleepThread(TimeSpan{1000000});
    return -1;
  }

  os::SystemEventType event = {};
  os::AttachReadableHandleToSystemEvent(&event, handle.GetOsHandle(),
    handle.IsManaged(), os::EventClearMode_ManualClear);
  handle.Detach();
  os::WaitSystemEvent(&event);
  socket->EventFdWriteResults(sf::Out<int>(&lastError), taskId);
  int result = lastError != 0 ? -1 : 0;
  os::DestroySystemEvent(&event);
  return result;
}

}

void Initialize(AllocateFunction allocate, DeallocateFunction deallocate) {
  g_DisableDisconnectionEmulation = false;
  AllocateBuffer(allocate, deallocate);
  InitializeImpl(g_Buffer, g_BufferSize, SessionCountMax,
    detail::PortType_Normal);
}

void Initialize(AllocateFunction allocate, DeallocateFunction deallocate,
  int sessionCount) {
  g_DisableDisconnectionEmulation = false;
  AllocateBuffer(allocate, deallocate);
  InitializeImpl(g_Buffer, g_BufferSize, sessionCount,
    detail::PortType_System);
}

void InitializeForDisableDisconnectionEmulation(AllocateFunction allocate,
  DeallocateFunction deallocate, int sessionCount) {
  g_DisableDisconnectionEmulation = true;
  AllocateBuffer(allocate, deallocate);
  InitializeImpl(g_Buffer, g_BufferSize, sessionCount,
    detail::PortType_System);
}

void InitializeForSystem(void* buffer, size_t bufferSize, int sessionCount) {
  g_DisableDisconnectionEmulation = false;
  InitializeImpl(buffer, bufferSize, sessionCount, detail::PortType_System);
}

void InitializeForDisableDisconnectionEmulation(void* buffer,
  size_t bufferSize, int sessionCount) {
  g_DisableDisconnectionEmulation = true;
  InitializeImpl(buffer, bufferSize, sessionCount, detail::PortType_System);
}

bool IsInitialized() {
  return g_IsInitialized;
}

size_t GetWorkingMemorySize(int socketCount) {
  return sizeof(detail::virtual_socket_collection) +
    detail::virtual_socket_collection::GetWorkingMemorySize(socketCount);
}

int GetBoundTcpPortNumber(int* pOutPortNumber, int descriptor) {
  int error = 0;
  int result = g_Sockets->GetBoundTcpPortNumber(descriptor, *pOutPortNumber,
    error);
  if (result < 0) {
    SetLastError(error);
  }

  return result;
}

int Socket() {
  int error = 0;
  int result = g_Sockets->Socket(error);
  if (result < 0) {
    SetLastError(error);
  }

  return result;
}

int Close(int descriptor) {
  int error = 0;
  int result = g_Sockets->Close(descriptor, error);
  if (result < 0) {
    SetLastError(error);
  }

  return result;
}

int Accept(int descriptor, SockAddrHtcs* address) {
  SockAddrHtcs dummy = {};
  if (address == nullptr) {
    address = &dummy;
  }

  int error = 0;
  int result = g_Sockets->Accept(descriptor, address, error);
  if (result < 0) {
    SetLastError(error);
  }

  return result;
}

int Bind(int descriptor, const SockAddrHtcs* address) {
  int error = 0;
  int result = g_Sockets->Bind(descriptor, address, error);
  if (result < 0) {
    SetLastError(error);
  }

  return result;
}

int Connect(int descriptor, const SockAddrHtcs* address) {
  int error = 0;
  int result = g_Sockets->Connect(descriptor, address, error);
  if (result < 0) {
    SetLastError(error);
  }

  return result;
}

int Listen(int descriptor, int backlogCount) {
  int error = 0;
  int result = g_Sockets->Listen(descriptor, backlogCount, error);
  if (result < 0) {
    SetLastError(error);
  }

  return result;
}

ssize_t Recv(int descriptor, void* buffer, size_t size, int flags) {
  int error = 0;
  ssize_t result = g_Sockets->Recv(descriptor, buffer, size, flags, error);
  if (result < 0) {
    SetLastError(error);
  }

  return result;
}

ssize_t Send(int descriptor, const void* buffer, size_t size, int flags) {
  int error = 0;
  ssize_t result = g_Sockets->Send(descriptor, buffer, size, flags, error);
  if (result < 0) {
    SetLastError(error);
  }

  return result;
}

int Shutdown(int descriptor, int how) {
  int error = 0;
  int result = g_Sockets->Shutdown(descriptor, how, error);
  if (result < 0) {
    SetLastError(error);
  }

  return result;
}

int Fcntl(int descriptor, int command, int value) {
  int error = 0;
  int result = g_Sockets->Fcntl(descriptor, command, value, error);
  if (result < 0) {
    SetLastError(error);
  }

  return result;
}

int Select(int count, FdSet* read, FdSet* write, FdSet* exception,
  TimeVal* timeout) {
  int error = 0;
  int result;
  if ((read == nullptr && write == nullptr && exception == nullptr) ||
    (timeout != nullptr && (timeout->tv_sec < 0 || timeout->tv_usec < 0))) {
    error = HTCS_EINVAL;
    result = -1;
  }
  else {
    result = g_Sockets->Select(read, write, exception, timeout, error);
    if (result >= 0) {
      return result;
    }
  }

  SetLastError(error);
  return result;
}

void FdSetZero(FdSet* set) {
  for (int i = 0; i < SocketCountMax; i++) {
    set->fds[i] = 0;
  }
}

void FdSetSet(int descriptor, FdSet* set) {
  for (int i = 0; i < SocketCountMax; i++) {
    if (set->fds[i] == 0) {
      set->fds[i] = descriptor;
      return;
    }
  }
}

void FdSetClr(int descriptor, FdSet* set) {
  for (int i = 0; i < SocketCountMax; i++) {
    if (set->fds[i] == descriptor) {
      for (int j = i; j < SocketCountMax - 1; j++) {
        set->fds[j] = set->fds[j + 1];
      }

      set->fds[SocketCountMax - 1] = 0;
      return;
    }
  }
}

bool FdSetIsSet(int descriptor, const FdSet* set) {
  for (int i = 0; i < SocketCountMax; i++) {
    if (set->fds[i] == 0) {
      return false;
    }

    if (set->fds[i] == descriptor) {
      return true;
    }
  }

  return false;
}

int EventFd(uint64_t initialValue, int flags) {
  if (initialValue == UINT64_MAX) {
    SetLastError(HTCS_EINVAL);
    return -1;
  }

  int error = 0;
  int result = g_Sockets->EventFd(initialValue, flags, error);
  if (result < 0) {
    SetLastError(error);
  }

  return result;
}

int EventFdRead(int descriptor, uint64_t* pOutValue) {
  int error = 0;
  int result = g_Sockets->EventFdRead(descriptor, pOutValue, error);
  if (result < 0) {
    SetLastError(error);
  }

  return result;
}

int EventFdWrite(int descriptor, uint64_t value) {
  int error = 0;
  int result = g_Sockets->EventFdWrite(descriptor, value, error);
  if (result < 0) {
    SetLastError(error);
  }

  return result;
}

int GetLastError() {
  return static_cast<int>(os::GetTlsValue(g_TlsSlot));
}

const HtcsPeerName GetPeerNameAny() {
  HtcsPeerName name = {};
  g_Manager->GetPeerNameAny(sf::Out<HtcsPeerName>(&name));
  return name;
}

const HtcsPeerName GetDefaultHostName() {
  HtcsPeerName name = {};
  g_Manager->GetDefaultHostName(sf::Out<HtcsPeerName>(&name));
  return name;
}

}
