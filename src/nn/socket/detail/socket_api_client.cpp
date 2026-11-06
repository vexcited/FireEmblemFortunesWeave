#include <stdarg.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#include "nn/diag/diag_abort.hpp"
#include "nn/lmem/exp_heap.hpp"
#include "nn/lmem/exp_heap_inspection.hpp"
#include "nn/memory_resource.hpp"
#include "nn/os/mutex.hpp"
#include "nn/os/native_handle.hpp"
#include "nn/os/reader_writer_lock.hpp"
#include "nn/os/sleep_thread.hpp"
#include "nn/os/system_event.hpp"
#include "nn/os/thread_api.hpp"
#include "nn/sf/client_session.hpp"
#include "nn/socket/detail/socket_api.hpp"
#include "nn/socket/detail/socket_initialize_handle_table.hpp"
#include "nn/socket/resolver/resolver_client.hpp"
#include "nn/socket/resolver/serializer/dns_serializer.hpp"
#include "nn/socket/sf/socket_client.hpp"
#include "nn/socket/socket_api.hpp"
#include "nn/util/util_pmr.hpp"

namespace {

struct NnmuslFileDescriptor {
  uint16_t type;
  uint16_t native;
};

constexpr uint16_t NnmuslFileDescriptorType_None = 0;
constexpr uint16_t NnmuslFileDescriptorType_Socket = 4;

}

extern "C" {

// Unexported nnmusl descriptor table helpers. The lookup at 0xaf3d0 packs
// the descriptor type and the native socket, the allocation at 0xaf300
// returns a new descriptor for a native socket, the close at 0xaf760
// releases a descriptor of any type and the one at 0xaf860 releases every
// descriptor of a type.
NnmuslFileDescriptor nnmuslLookupFileDescriptor(int fd);
int nnmuslAllocateFileDescriptor(int type, int native);
int nnmuslCloseFileDescriptor(int fd);
void nnmuslCloseFileDescriptorsOfType(int type);

}

extern "C" int* __errno_location();

// The library reaches the result abort through a declaration that is not
// noreturn, so the plain abort that follows it stays reachable.
void AbortUnlessResultSuccess(const nn::Result* result)
  asm("_ZN2nn4diag6detail9AbortImplEPKNS_6ResultE");

namespace nn::lmem {

size_t GetTotalSize(detail::HeapHead* heap);

}

namespace nn::socket::detail {

[[gnu::visibility("hidden")]] int CloseNativeSocket(int socket);

namespace {

constexpr int EBadF = 9;
constexpr int EAgain = 11;
constexpr int ENoMem = 12;
constexpr int EFault = 14;
constexpr int EInval = 22;
constexpr int ECommunication = 46;
constexpr int ENotSock = 88;
constexpr int EOpNotSupp = 95;

constexpr size_t PathLengthMax = 128;
constexpr uint32_t SiocAtMark = 0x40047307;
constexpr uint32_t ShutdownAllSocketsMaskAll = 3;
constexpr StatisticsType StatisticsType_Allocator =
  static_cast<StatisticsType>(7);
constexpr size_t SocketStatisticsSize0 = 0x9c08;
constexpr size_t SocketStatisticsSize1 = 0x1204;

// Poll hands the server native sockets. Native sockets below this count map
// back to their descriptor, other descriptors are shifted past them.
constexpr int PollMappedSocketCount = 128;

struct AllocatorStatistics {
  uint32_t totalSize;
  uint32_t freeSize;
  uint32_t usedSize;
  uint32_t peakUsedSize;
};

struct NoSfEventFdEntry {
  os::SystemEventType writableEvent;
  os::SystemEventType readableEvent;
  uint32_t writableHandle;
  bool isWritableHandleManaged;
  uint32_t readableHandle;
  bool isReadableHandleManaged;
  int32_t socket;
};

// Allocates the library buffers from the exp heap built in the memory
// given to Initialize.
class ExpHeapMemoryResource final : public MemoryResource {
 public:
  lmem::detail::HeapHead* heap;

 private:
  void* do_allocate(size_t size, size_t alignment) override {
    return lmem::AllocateFromExpHeap(heap, size,
      static_cast<int>(alignment));
  }

  void do_deallocate(void* pointer, size_t /* size */,
    size_t /* alignment */) override {
    lmem::FreeToExpHeap(heap, pointer);
  }
};

// Service types follow the service the client was opened on.
enum ServiceType : uint8_t {
  ServiceType_None = 0,
  ServiceType_User = 1,
  ServiceType_Admin = 2,
  ServiceType_System = 3
};

struct ClientState {
  os::ReaderWriterLockType descriptorLock;
  os::MutexType mutex;
  int32_t sessionCount;
  int32_t initializeCount;
  InitializeHandleTable handleTable;
  ::nn::sf::SharedPointer<sf::IClient> monitor;
  ::nn::sf::SharedPointer<sf::IClient> pClient;
  ServiceType serviceType;
  os::MutexType allocatorMutex;
  bool isLibraryHeapUsed;
  MemoryResource* pAllocator;
  int32_t allocatorGeneration;
  bool isAllocatorSet;
  bool isDefaultAllocatorUsed;
  ExpHeapMemoryResource libraryHeapResource;
  uint8_t reserved130[0x8];
  size_t allocatedSize;
  size_t allocatedSizePeak;
  os::ThreadType statisticsThread;
  os::ReaderWriterLockType eventFdLock;
  NoSfEventFdEntry eventFdEntries[6];
  bool isEventFdInitialized;
  ::nn::sf::hipc::client::SessionManagerStorage sessionManager;
};

ClientState g_ClientState;

bool g_IsStatisticsThreadRunning;
os::MutexType g_StatisticsMutex = {true, false, 0, 0, nullptr, {}};

[[gnu::always_inline]] bool IsInitializedImpl() {
  os::LockMutex(&g_ClientState.mutex);
  bool isInitialized = g_ClientState.pClient != nullptr;
  os::UnlockMutex(&g_ClientState.mutex);
  return isInitialized;
}

[[gnu::always_inline]] void SetLastErrorImpl(int error) {
  if (IsInitializedImpl()) {
    *__errno_location() = error;
  }
}

bool IsHipcResultInRange(Result result, uint32_t begin, uint32_t end) {
  uint32_t description = (result.value >> 9) & 0x1fff;
  return (result.value & 0x1ff) == 11 && description >= begin &&
    description < end;
}

[[gnu::always_inline]] int ConvertResultToErrno(Result result) {
  uint32_t value = result.GetInnerValueForDebug();
  if (value == 0xd401 || value == 0x20601) {
    return EFault;
  }
  if (IsHipcResultInRange(result, 300, 350)) {
    return ECommunication;
  }
  if (value == 0xce01 || IsHipcResultInRange(result, 100, 300)) {
    return EAgain;
  }
  AbortUnlessResultSuccess(&result);
  nn::diag::detail::AbortImpl();
}

template <typename T>
[[gnu::always_inline]] T HandleResult(Result result, T* pResult, int* pError) {
  if (result.IsFailure()) {
    *pError = ConvertResultToErrno(result);
    *pResult = -1;
  }
  if (*pResult < 0) {
    SetLastErrorImpl(*pError);
  }
  return *pResult;
}

template <typename T>
::nn::sf::Out<T> Out(T* pointer) {
  return ::nn::sf::Out<T>(pointer);
}

[[gnu::always_inline]] bool GetNativeSocket(int* pOutSocket, int socket) {
  os::AcquireReadLock(&g_ClientState.descriptorLock);
  NnmuslFileDescriptor descriptor = nnmuslLookupFileDescriptor(socket);
  int error;
  if (descriptor.type == NnmuslFileDescriptorType_None) {
    error = EBadF;
  }
  else if (descriptor.type != NnmuslFileDescriptorType_Socket) {
    error = ENotSock;
  }
  else {
    *pOutSocket = descriptor.native;
    os::ReleaseReadLock(&g_ClientState.descriptorLock);
    return true;
  }
  os::ReleaseReadLock(&g_ClientState.descriptorLock);
  socket::SetLastError(static_cast<Errno>(error));
  return false;
}

constexpr size_t AllocationHeaderSize = 16;
constexpr int AllocatorGenerationCount = 16;

Result ResultAlreadyInitialized() {
  return Result{0x41b};
}

Result ResultInvalidArgument() {
  return Result{0x61b};
}

Result ResultClientCreationFailed() {
  return Result{0x81b};
}

// Called with the allocator mutex held. A block keeps its total size in
// front of the returned pointer.
[[gnu::always_inline]] void* AllocateBlock(size_t totalSize,
  bool clear = false) {
  size_t* pBlock = static_cast<size_t*>(g_ClientState.pAllocator->allocate(
    totalSize, AllocationHeaderSize));
  if (pBlock == nullptr) {
    SetLastErrorImpl(ENoMem);
    return nullptr;
  }
  if (clear) {
    memset(pBlock, 0, totalSize);
  }
  size_t used;
  if (!g_ClientState.isLibraryHeapUsed) {
    g_ClientState.allocatedSize += totalSize;
    used = g_ClientState.allocatedSize;
  }
  else {
    lmem::detail::HeapHead* heap = g_ClientState.libraryHeapResource.heap;
    used = lmem::GetTotalSize(heap) - lmem::GetExpHeapTotalFreeSize(heap);
  }
  if (g_ClientState.allocatedSizePeak < used) {
    g_ClientState.allocatedSizePeak = used;
  }
  *pBlock = totalSize;
  return pBlock + AllocationHeaderSize / sizeof(size_t);
}

[[gnu::always_inline]] void FreeImpl(void* pointer) {
  os::LockMutex(&g_ClientState.allocatorMutex);
  if (pointer != nullptr) {
    if (g_ClientState.pAllocator == nullptr) {
      *__errno_location() = EOpNotSupp;
    }
    else {
      size_t* pBlock = reinterpret_cast<size_t*>(
        static_cast<char*>(pointer) - AllocationHeaderSize);
      if (!g_ClientState.isLibraryHeapUsed) {
        g_ClientState.allocatedSize -= *pBlock;
      }
      g_ClientState.pAllocator->deallocate(pBlock, *pBlock,
        AllocationHeaderSize);
    }
  }
  os::UnlockMutex(&g_ClientState.allocatorMutex);
}

template <typename Header, typename Flags>
ssize_t RecvMsgImpl(int socket, Header* message, Flags flags) {
  NN_ABORT_UNLESS(IsInitializedImpl());
  MMsgHdr messages = {};
  if (message == nullptr) {
    SetLastErrorImpl(EInval);
    return -1;
  }
  messages.msg_hdr = *reinterpret_cast<MsgHdr*>(message);
  ssize_t result = detail::RecvMMsg(socket, &messages, 1,
    static_cast<MsgFlag>(flags), nullptr);
  if (result < 0) {
    return result;
  }
  *message = *reinterpret_cast<Header*>(&messages.msg_hdr);
  return messages.msg_len;
}

template <typename Header, typename Flags>
ssize_t SendMsgImpl(int socket, const Header* message, Flags flags) {
  NN_ABORT_UNLESS(IsInitializedImpl());
  MMsgHdr messages = {};
  if (message == nullptr) {
    SetLastErrorImpl(EInval);
    return -1;
  }
  messages.msg_hdr = *reinterpret_cast<const MsgHdr*>(message);
  ssize_t result = detail::SendMMsg(socket, &messages, 1,
    static_cast<MsgFlag>(flags));
  if (result <= 0) {
    return result;
  }
  return messages.msg_len;
}

[[gnu::always_inline]] int RegisterNativeSocket(int nativeSocket) {
  NN_ABORT_UNLESS(
    !os::IsWriteLockHeldByCurrentThread(&g_ClientState.descriptorLock));
  int fd = nnmuslAllocateFileDescriptor(NnmuslFileDescriptorType_Socket,
    nativeSocket);
  if (fd < 0) {
    CloseNativeSocket(nativeSocket);
    return -1;
  }
  return fd;
}

template <bool IsExempt, typename Domain, typename SocketType,
  typename SocketProtocol>
int SocketImpl(Domain domain, SocketType type, SocketProtocol protocol) {
  NN_ABORT_UNLESS(IsInitializedImpl());
  int result = 0;
  int error = 0;
  Result callResult;
  if (IsExempt) {
    callResult = g_ClientState.pClient->SocketExempt(Out(&result),
      Out(&error), static_cast<int32_t>(domain), static_cast<int32_t>(type),
      static_cast<int32_t>(protocol));
  }
  else {
    callResult = g_ClientState.pClient->Socket(Out(&result), Out(&error),
      static_cast<int32_t>(domain), static_cast<int32_t>(type),
      static_cast<int32_t>(protocol));
  }
  if (callResult.IsSuccess() && result >= 0) {
    result = RegisterNativeSocket(result);
    return result;
  }
  return HandleResult(callResult, &result, &error);
}

template <typename Flags>
int OpenImpl(const char* path, Flags flags) {
  NN_ABORT_UNLESS(IsInitializedImpl());
  int result;
  int error;
  if (path == nullptr) {
    SetLastErrorImpl(EInval);
    return -1;
  }
  ::nn::sf::InAutoSelectBuffer inPath(path, strnlen(path, PathLengthMax) + 1);
  Result callResult = g_ClientState.pClient->Open(Out(&result), Out(&error),
    inPath, static_cast<int32_t>(flags));
  if (callResult.IsSuccess() && result >= 0) {
    result = RegisterNativeSocket(result);
    return result;
  }
  return HandleResult(callResult, &result, &error);
}

template <typename Flags>
ssize_t RecvImpl(int socket, void* buffer, size_t length, Flags flags) {
  NN_ABORT_UNLESS(IsInitializedImpl());
  int result;
  int error;
  if (length == 0) {
    return 0;
  }
  if (buffer == nullptr) {
    SetLastErrorImpl(EInval);
    return -1;
  }
  if (length > UINT32_MAX) {
    SetLastErrorImpl(EFault);
    return -1;
  }
  ::nn::sf::OutAutoSelectBuffer outBuffer(buffer, length);
  int nativeSocket;
  if (!GetNativeSocket(&nativeSocket, socket)) {
    return -1;
  }
  Result callResult = g_ClientState.pClient->Recv(Out(&result), Out(&error),
    nativeSocket, outBuffer, static_cast<int32_t>(flags));
  return HandleResult(callResult, &result, &error);
}

template <typename Flags, typename Address>
ssize_t RecvFromImpl(int socket, void* buffer, size_t length, Flags flags,
  Address* address, uint32_t* addressLength) {
  NN_ABORT_UNLESS(IsInitializedImpl());
  int result = 0;
  int error = 0;
  if (length == 0) {
    return 0;
  }
  if (buffer == nullptr) {
    SetLastErrorImpl(EInval);
    return -1;
  }
  if (length > UINT32_MAX) {
    SetLastErrorImpl(EFault);
    return -1;
  }
  if (address == nullptr || addressLength == nullptr ||
    *addressLength == 0) {
    return detail::Recv(socket, buffer, length, flags);
  }
  ::nn::sf::OutAutoSelectBuffer outBuffer(buffer, length);
  ::nn::sf::OutAutoSelectBuffer outAddress(address, *addressLength);
  uint32_t outAddressLength = 0;
  int nativeSocket;
  if (!GetNativeSocket(&nativeSocket, socket)) {
    return -1;
  }
  Result callResult = g_ClientState.pClient->RecvFrom(Out(&result),
    Out(&error), nativeSocket, outBuffer, static_cast<int32_t>(flags),
    outAddress, Out(&outAddressLength));
  if (callResult.IsSuccess() && result >= 0) {
    *addressLength = outAddressLength;
    return result;
  }
  if (callResult.IsFailure()) {
    error = ConvertResultToErrno(callResult);
    result = -1;
  }
  detail::SetLastError(static_cast<Errno>(error));
  return result;
}

template <typename Flags>
ssize_t SendImpl(int socket, const void* buffer, size_t length, Flags flags) {
  NN_ABORT_UNLESS(IsInitializedImpl());
  int result;
  int error;
  if (length == 0) {
    return 0;
  }
  if (buffer == nullptr) {
    SetLastErrorImpl(EInval);
    return -1;
  }
  if (length > UINT32_MAX) {
    SetLastErrorImpl(EFault);
    return -1;
  }
  ::nn::sf::InAutoSelectBuffer inBuffer(buffer, length);
  int nativeSocket;
  if (!GetNativeSocket(&nativeSocket, socket)) {
    return -1;
  }
  Result callResult = g_ClientState.pClient->Send(Out(&result), Out(&error),
    nativeSocket, inBuffer, static_cast<int32_t>(flags));
  return HandleResult(callResult, &result, &error);
}

template <typename Flags, typename Address>
ssize_t SendToImpl(int socket, const void* buffer, size_t length, Flags flags,
  const Address* address, uint32_t addressLength) {
  NN_ABORT_UNLESS(IsInitializedImpl());
  int result;
  int error;
  if (address == nullptr || addressLength == 0) {
    return detail::Send(socket, buffer, length, flags);
  }
  if (length == 0) {
    return 0;
  }
  if (buffer == nullptr) {
    SetLastErrorImpl(EInval);
    return -1;
  }
  if (length > UINT32_MAX) {
    SetLastErrorImpl(EFault);
    return -1;
  }
  ::nn::sf::InAutoSelectBuffer inAddress(address, addressLength);
  ::nn::sf::InAutoSelectBuffer inBuffer(buffer, length);
  int nativeSocket;
  if (!GetNativeSocket(&nativeSocket, socket)) {
    return -1;
  }
  Result callResult = g_ClientState.pClient->SendTo(Out(&result),
    Out(&error), nativeSocket, inBuffer, static_cast<int32_t>(flags),
    inAddress);
  return HandleResult(callResult, &result, &error);
}

[[gnu::always_inline]] int WriteImpl(int socket, const void* buffer,
  size_t length) {
  NN_ABORT_UNLESS(IsInitializedImpl());
  int result;
  int error;
  if (length == 0) {
    return 0;
  }
  if (buffer == nullptr) {
    SetLastErrorImpl(EInval);
    return -1;
  }
  if (length > UINT32_MAX) {
    SetLastErrorImpl(EFault);
    return -1;
  }
  ::nn::sf::InAutoSelectBuffer inBuffer(buffer, length);
  int nativeSocket;
  if (!GetNativeSocket(&nativeSocket, socket)) {
    return -1;
  }
  Result callResult = g_ClientState.pClient->Write(Out(&result), Out(&error),
    nativeSocket, inBuffer);
  return HandleResult(callResult, &result, &error);
}

[[gnu::always_inline]] int ReadImpl(int socket, void* buffer, size_t length) {
  NN_ABORT_UNLESS(IsInitializedImpl());
  int result;
  int error;
  if (length == 0) {
    return 0;
  }
  if (buffer == nullptr) {
    SetLastErrorImpl(EInval);
    return -1;
  }
  if (length > UINT32_MAX) {
    SetLastErrorImpl(EFault);
    return -1;
  }
  ::nn::sf::OutAutoSelectBuffer outBuffer(buffer, length);
  int nativeSocket;
  if (!GetNativeSocket(&nativeSocket, socket)) {
    return -1;
  }
  Result callResult = g_ClientState.pClient->Read(Out(&result), Out(&error),
    nativeSocket, outBuffer);
  return HandleResult(callResult, &result, &error);
}

template <bool CheckLength, typename Address>
int BindImpl(int socket, const Address* address, uint32_t addressLength) {
  NN_ABORT_UNLESS(IsInitializedImpl());
  int result = 0;
  int error = 0;
  if (address == nullptr || (CheckLength && addressLength == 0)) {
    SetLastErrorImpl(EInval);
    return -1;
  }
  ::nn::sf::InAutoSelectBuffer inAddress(address, addressLength);
  int nativeSocket;
  if (!GetNativeSocket(&nativeSocket, socket)) {
    return -1;
  }
  Result callResult = g_ClientState.pClient->Bind(Out(&result), Out(&error),
    nativeSocket, inAddress);
  return HandleResult(callResult, &result, &error);
}

template <bool CheckLength, typename Address>
int ConnectImpl(int socket, const Address* address, uint32_t addressLength) {
  NN_ABORT_UNLESS(IsInitializedImpl());
  int result = 0;
  int error = 0;
  if (address == nullptr || (CheckLength && addressLength == 0)) {
    SetLastErrorImpl(EInval);
    return -1;
  }
  ::nn::sf::InAutoSelectBuffer inAddress(address, addressLength);
  int nativeSocket;
  if (!GetNativeSocket(&nativeSocket, socket)) {
    return -1;
  }
  Result callResult = g_ClientState.pClient->Connect(Out(&result),
    Out(&error), nativeSocket, inAddress);
  return HandleResult(callResult, &result, &error);
}

template <typename Address>
int GetPeerNameImpl(int socket, Address* address, uint32_t* addressLength) {
  NN_ABORT_UNLESS(IsInitializedImpl());
  int result = 0;
  int error = 0;
  if (address == nullptr || addressLength == nullptr ||
    *addressLength == 0) {
    SetLastErrorImpl(EInval);
    return -1;
  }
  ::nn::sf::OutAutoSelectBuffer outAddress(address, *addressLength);
  uint32_t outAddressLength = 0;
  int nativeSocket;
  if (!GetNativeSocket(&nativeSocket, socket)) {
    return -1;
  }
  Result callResult = g_ClientState.pClient->GetPeerName(Out(&result),
    Out(&error), nativeSocket, outAddress, Out(&outAddressLength));
  if (callResult.IsSuccess() && result >= 0) {
    *addressLength = outAddressLength;
    return result;
  }
  return HandleResult(callResult, &result, &error);
}

template <bool ConvertLength, typename Address>
int GetSockNameImpl(int socket, Address* address, uint32_t* addressLength) {
  NN_ABORT_UNLESS(IsInitializedImpl());
  int result = 0;
  int error = 0;
  if (address == nullptr || addressLength == nullptr) {
    SetLastErrorImpl(EInval);
    return -1;
  }
  if (ConvertLength && *addressLength == sizeof(SockAddrIn)) {
    *addressLength = sizeof(sockaddr_in);
  }
  else if (*addressLength == 0) {
    SetLastErrorImpl(EInval);
    return -1;
  }
  ::nn::sf::OutAutoSelectBuffer outAddress(address, *addressLength);
  uint32_t outAddressLength = 0;
  int nativeSocket;
  if (!GetNativeSocket(&nativeSocket, socket)) {
    return -1;
  }
  Result callResult = g_ClientState.pClient->GetSockName(Out(&result),
    Out(&error), nativeSocket, outAddress, Out(&outAddressLength));
  if (callResult.IsSuccess() && result >= 0) {
    *addressLength = outAddressLength;
    return result;
  }
  return HandleResult(callResult, &result, &error);
}

[[gnu::always_inline]] int GetSockOptImpl(int socket, int level, int option,
  void* value, uint32_t* valueLength, int initialResult) {
  NN_ABORT_UNLESS(IsInitializedImpl());
  int result = initialResult;
  int error = 0;
  if (value == nullptr || valueLength == nullptr || *valueLength == 0) {
    SetLastErrorImpl(EInval);
    return -1;
  }
  ::nn::sf::OutAutoSelectBuffer outValue(value, *valueLength);
  uint32_t outValueLength = 0;
  int nativeSocket;
  if (!GetNativeSocket(&nativeSocket, socket)) {
    return -1;
  }
  Result callResult = g_ClientState.pClient->GetSockOpt(Out(&result),
    Out(&error), nativeSocket, level, option, outValue,
    Out(&outValueLength));
  if (callResult.IsSuccess() && result >= 0) {
    *valueLength = outValueLength;
    return result;
  }
  return HandleResult(callResult, &result, &error);
}

[[gnu::always_inline]] int SetSockOptImpl(int socket, int level, int option,
  const void* value, uint32_t valueLength, int initialResult) {
  NN_ABORT_UNLESS(IsInitializedImpl());
  int result = initialResult;
  int error = 0;
  if (value == nullptr) {
    SetLastErrorImpl(EInval);
    return -1;
  }
  ::nn::sf::InAutoSelectBuffer inValue(value, valueLength);
  int nativeSocket;
  if (!GetNativeSocket(&nativeSocket, socket)) {
    return -1;
  }
  Result callResult = g_ClientState.pClient->SetSockOpt(Out(&result),
    Out(&error), nativeSocket, level, option, inValue);
  return HandleResult(callResult, &result, &error);
}

[[gnu::always_inline]] int ShutdownImpl(int socket, int how) {
  NN_ABORT_UNLESS(IsInitializedImpl());
  int result = 0;
  int error = 0;
  int nativeSocket;
  if (!GetNativeSocket(&nativeSocket, socket)) {
    return -1;
  }
  Result callResult = g_ClientState.pClient->Shutdown(Out(&result),
    Out(&error), nativeSocket, how);
  return HandleResult(callResult, &result, &error);
}

[[gnu::always_inline]] int FcntlImpl(int socket, int command,
  va_list arguments) {
  NN_ABORT_UNLESS(IsInitializedImpl());
  int result = 0;
  int error = 0;
  int value = va_arg(arguments, int);
  int nativeSocket;
  if (!GetNativeSocket(&nativeSocket, socket)) {
    return -1;
  }
  Result callResult = g_ClientState.pClient->Fcntl(Out(&result), Out(&error),
    nativeSocket, command, value);
  return HandleResult(callResult, &result, &error);
}

}

// Closes a native socket unless a NoSf event fd uses it.
int CloseNativeSocket(int socket) {
  os::AcquireReadLock(&g_ClientState.eventFdLock);
  if (socket >= 0 && g_ClientState.isEventFdInitialized) {
    NN_ABORT_UNLESS(os::IsReadLockHeld(&g_ClientState.eventFdLock) ||
      os::IsWriteLockHeldByCurrentThread(&g_ClientState.eventFdLock));
    bool isEventFdSocket = false;
    for (const NoSfEventFdEntry& entry : g_ClientState.eventFdEntries) {
      if (entry.socket == socket) {
        isEventFdSocket = true;
      }
    }
    if (isEventFdSocket) {
      SetLastErrorImpl(EInval);
      os::ReleaseReadLock(&g_ClientState.eventFdLock);
      return -1;
    }
  }
  os::ReleaseReadLock(&g_ClientState.eventFdLock);
  NN_ABORT_UNLESS(IsInitializedImpl());
  os::AcquireWriteLock(&g_ClientState.descriptorLock);
  int result = 0;
  int error = 0;
  Result callResult = g_ClientState.pClient->Close(Out(&result), Out(&error),
    socket);
  HandleResult(callResult, &result, &error);
  int closed = result;
  os::ReleaseWriteLock(&g_ClientState.descriptorLock);
  return closed;
}

void* Alloc(size_t size) {
  os::LockMutex(&g_ClientState.allocatorMutex);
  void* pointer;
  if (g_ClientState.pAllocator == nullptr) {
    *__errno_location() = EOpNotSupp;
    pointer = nullptr;
  }
  else {
    pointer = AllocateBlock(size + AllocationHeaderSize);
  }
  os::UnlockMutex(&g_ClientState.allocatorMutex);
  return pointer;
}

void* Calloc(size_t count, size_t size) {
  os::LockMutex(&g_ClientState.allocatorMutex);
  void* pointer;
  if (g_ClientState.pAllocator == nullptr) {
    *__errno_location() = EOpNotSupp;
    pointer = nullptr;
  }
  else {
    pointer = AllocateBlock(count * size + AllocationHeaderSize, true);
  }
  os::UnlockMutex(&g_ClientState.allocatorMutex);
  return pointer;
}

void Free(void* pointer) {
  FreeImpl(pointer);
}

char* Strdup(const char* string) {
  if (string == nullptr) {
    return nullptr;
  }
  size_t length = strlen(string);
  char* copy = static_cast<char*>(Calloc(1, length + 1));
  if (copy == nullptr) {
    return nullptr;
  }
  return strncpy(copy, string, length);
}

bool IsInitialized() {
  return IsInitializedImpl();
}

bool AllocatorIsAvailable(int generation) {
  os::LockMutex(&g_ClientState.allocatorMutex);
  bool isAvailable = g_ClientState.pAllocator != nullptr &&
    generation == g_ClientState.allocatorGeneration;
  os::UnlockMutex(&g_ClientState.allocatorMutex);
  return isAvailable;
}

int GetAllocatorGeneration() {
  os::LockMutex(&g_ClientState.allocatorMutex);
  int generation = g_ClientState.allocatorGeneration;
  os::UnlockMutex(&g_ClientState.allocatorMutex);
  return generation;
}

Result SetAllocator(MemoryResource* allocator) {
  os::LockMutex(&g_ClientState.mutex);
  os::LockMutex(&g_ClientState.allocatorMutex);
  Result result = ResultAlreadyInitialized();
  if (!g_ClientState.isLibraryHeapUsed &&
    g_ClientState.initializeCount == 0) {
    if (g_ClientState.pAllocator == allocator && allocator != nullptr &&
      g_ClientState.pAllocator != nullptr) {
      result = Result();
    }
    else if (!g_ClientState.isAllocatorSet) {
      g_ClientState.isAllocatorSet = true;
      g_ClientState.pAllocator = allocator;
      g_ClientState.allocatedSize = 0;
      g_ClientState.allocatedSizePeak = 0;
      g_ClientState.allocatorGeneration =
        (g_ClientState.allocatorGeneration + 1) % AllocatorGenerationCount;
      result = Result();
    }
  }
  os::UnlockMutex(&g_ClientState.allocatorMutex);
  os::UnlockMutex(&g_ClientState.mutex);
  return result;
}

Result GetAllocator(MemoryResource** pOutAllocator) {
  os::LockMutex(&g_ClientState.allocatorMutex);
  Result result;
  if (g_ClientState.isLibraryHeapUsed) {
    result = ResultAlreadyInitialized();
  }
  else if (pOutAllocator == nullptr) {
    result = ResultInvalidArgument();
  }
  else {
    *pOutAllocator = g_ClientState.pAllocator;
    result = Result();
  }
  os::UnlockMutex(&g_ClientState.allocatorMutex);
  return result;
}

void SetLastError(Errno error) {
  SetLastErrorImpl(static_cast<int>(error));
}

ssize_t Recv(int socket, void* buffer, size_t length, MsgFlag flags) {
  return RecvImpl(socket, buffer, length, flags);
}

ssize_t Recv(int socket, void* buffer, size_t length, int flags) {
  return RecvImpl(socket, buffer, length, flags);
}

ssize_t RecvFrom(int socket, void* buffer, size_t length, MsgFlag flags,
  SockAddr* address, uint32_t* addressLength) {
  return RecvFromImpl(socket, buffer, length, flags, address, addressLength);
}

ssize_t RecvFrom(int socket, void* buffer, size_t length, int flags,
  sockaddr* address, uint32_t* addressLength) {
  return RecvFromImpl(socket, buffer, length, flags, address, addressLength);
}

ssize_t Send(int socket, const void* buffer, size_t length, MsgFlag flags) {
  return SendImpl(socket, buffer, length, flags);
}

ssize_t Send(int socket, const void* buffer, size_t length, int flags) {
  return SendImpl(socket, buffer, length, flags);
}

ssize_t SendTo(int socket, const void* buffer, size_t length, MsgFlag flags,
  const SockAddr* address, uint32_t addressLength) {
  return SendToImpl(socket, buffer, length, flags, address, addressLength);
}

ssize_t SendTo(int socket, const void* buffer, size_t length, int flags,
  const sockaddr* address, uint32_t addressLength) {
  return SendToImpl(socket, buffer, length, flags, address, addressLength);
}

int Bind(int socket, const SockAddr* address, uint32_t addressLength) {
  return BindImpl<true>(socket, address, addressLength);
}

int Bind(int socket, const sockaddr* address, uint32_t addressLength) {
  return BindImpl<false>(socket, address, addressLength);
}

int Connect(int socket, const SockAddr* address, uint32_t addressLength) {
  return ConnectImpl<true>(socket, address, addressLength);
}

int Connect(int socket, const sockaddr* address, uint32_t addressLength) {
  return ConnectImpl<false>(socket, address, addressLength);
}

int GetPeerName(int socket, SockAddr* address, uint32_t* addressLength) {
  return GetPeerNameImpl(socket, address, addressLength);
}

int GetPeerName(int socket, sockaddr* address, uint32_t* addressLength) {
  return GetPeerNameImpl(socket, address, addressLength);
}

int GetSockName(int socket, SockAddr* address, uint32_t* addressLength) {
  return GetSockNameImpl<true>(socket, address, addressLength);
}

int GetSockName(int socket, sockaddr* address, uint32_t* addressLength) {
  return GetSockNameImpl<false>(socket, address, addressLength);
}

int GetSockOpt(int socket, Level level, Option option, void* value,
  uint32_t* valueLength) {
  return GetSockOptImpl(socket, static_cast<int>(level),
    static_cast<int>(option), value, valueLength, -1);
}

int GetSockOpt(int socket, int level, int option, void* value,
  uint32_t* valueLength) {
  return GetSockOptImpl(socket, level, option, value, valueLength, 0);
}

int Listen(int socket, int backlog) {
  NN_ABORT_UNLESS(IsInitializedImpl());
  int result = 0;
  int error = 0;
  int nativeSocket;
  if (!GetNativeSocket(&nativeSocket, socket)) {
    return -1;
  }
  Result callResult = g_ClientState.pClient->Listen(Out(&result),
    Out(&error), nativeSocket, backlog);
  return HandleResult(callResult, &result, &error);
}

int Fcntl(int socket, FcntlCommand command, ...) {
  va_list arguments;
  va_start(arguments, command);
  int result = FcntlImpl(socket, static_cast<int>(command), arguments);
  va_end(arguments);
  return result;
}

int Fcntl(int socket, int command, ...) {
  va_list arguments;
  va_start(arguments, command);
  int result = FcntlImpl(socket, command, arguments);
  va_end(arguments);
  return result;
}

int SetSockOpt(int socket, Level level, Option option, const void* value,
  uint32_t valueLength) {
  return SetSockOptImpl(socket, static_cast<int>(level),
    static_cast<int>(option), value, valueLength, -1);
}

int SetSockOpt(int socket, int level, int option, const void* value,
  uint32_t valueLength) {
  return SetSockOptImpl(socket, level, option, value, valueLength, 0);
}

int Shutdown(int socket, ShutdownMethod how) {
  return ShutdownImpl(socket, static_cast<int>(how));
}

int Shutdown(int socket, int how) {
  return ShutdownImpl(socket, how);
}

int Write(int socket, const void* buffer, size_t length) {
  return WriteImpl(socket, buffer, length);
}

int Read(int socket, void* buffer, size_t length) {
  return ReadImpl(socket, buffer, length);
}

void SetLastErrno(int error) {
  SetLastErrorImpl(error);
}

Errno GetLastError() {
  if (IsInitializedImpl()) {
    return static_cast<Errno>(*__errno_location());
  }
  return static_cast<Errno>(EInval);
}

int GetLastErrno() {
  if (IsInitializedImpl()) {
    return *__errno_location();
  }
  return EInval;
}

ssize_t RecvMMsg(int socket, mmsghdr* messages, size_t count, int flags,
  TimeSpan* timeout) {
  return detail::RecvMMsg(socket, reinterpret_cast<MMsgHdr*>(messages), count,
    static_cast<MsgFlag>(flags), timeout);
}

ssize_t SendMMsg(int socket, mmsghdr* messages, size_t count, int flags) {
  return detail::SendMMsg(socket, reinterpret_cast<MMsgHdr*>(messages), count,
    static_cast<MsgFlag>(flags));
}

int Socket(Family domain, Type type, Protocol protocol) {
  return SocketImpl<false>(domain, type, protocol);
}

int Socket(int domain, int type, int protocol) {
  return SocketImpl<false>(domain, type, protocol);
}

int SocketExempt(Family domain, Type type, Protocol protocol) {
  return SocketImpl<true>(domain, type, protocol);
}

int SocketExempt(int domain, int type, int protocol) {
  return SocketImpl<true>(domain, type, protocol);
}

int Open(const char* path, OpenFlag flags) {
  return OpenImpl(path, flags);
}

int Open(const char* path, int flags) {
  return OpenImpl(path, flags);
}

int Close(int socket) {
  return nnmuslCloseFileDescriptor(socket);
}

int DuplicateSocket(int socket, uint64_t ownerProcessId) {
  NN_ABORT_UNLESS(IsInitializedImpl());
  int result = 0;
  int error = 0;
  Result callResult = g_ClientState.pClient->DuplicateSocket(Out(&result),
    Out(&error), socket, ownerProcessId);
  if (callResult.IsSuccess() && result >= 0) {
    result = RegisterNativeSocket(result);
    return result;
  }
  return HandleResult(callResult, &result, &error);
}

void SetThreadCoreMask(uint64_t mask) {
  NN_ABORT_UNLESS(IsInitializedImpl());
  NN_ABORT_UNLESS(g_ClientState.pClient->SetThreadCoreMask(mask).IsSuccess());
}

uint64_t GetThreadCoreMask() {
  NN_ABORT_UNLESS(IsInitializedImpl());
  uint64_t mask = 0;
  NN_ABORT_UNLESS(
    g_ClientState.pClient->GetThreadCoreMask(Out(&mask)).IsSuccess());
  return mask;
}


int SockAtMark(int socket) {
  NN_ABORT_UNLESS(IsInitializedImpl());
  int value = 0;
  if (Ioctl(socket, SiocAtMark, &value, sizeof(value)) == -1) {
    return -1;
  }
  return value;
}

void FreeAddrInfo(addrinfo* addressInfo) {
  if (addressInfo != nullptr) {
    resolver::serializer::FreeAddrinfoContents(*addressInfo);
    FreeImpl(addressInfo);
  }
}

void DestroyClientMonitorByHipc(
  ::nn::sf::SharedPointer<sf::IClient>* pClient) {
  pClient->Reset();
  g_ClientState.sessionManager.resize_mutex.Lock();
  ::nn::sf::hipc::client::ResizeSessions(
    &g_ClientState.sessionManager.manager, 0);
  g_ClientState.sessionManager.resize_mutex.Unlock();
}

void DestroyClientServiceByHipc(
  ::nn::sf::SharedPointer<sf::IClient>* pClient) {
  pClient->Reset();
}

Result SetClientSessionCount(int sessionCount) {
  g_ClientState.sessionManager.resize_mutex.Lock();
  NN_ABORT_UNLESS(sessionCount <=
    static_cast<int>(g_ClientState.sessionManager.manager.capacity));
  Result result{::nn::sf::hipc::client::ResizeSessions(
    &g_ClientState.sessionManager.manager, sessionCount)};
  g_ClientState.sessionManager.resize_mutex.Unlock();
  return result;
}

Result Initialize(void* memory, size_t memorySize, size_t allocatorPoolSize,
  int concurrencyLimit) {
  return detail::Initialize(Config(memory, memorySize, allocatorPoolSize,
    concurrencyLimit));
}

ssize_t RecvMsg(int socket, MsgHdr* message, MsgFlag flags) {
  return RecvMsgImpl(socket, message, flags);
}

ssize_t RecvMsg(int socket, msghdr* message, int flags) {
  return RecvMsgImpl(socket, message, flags);
}

ssize_t SendMsg(int socket, const MsgHdr* message, MsgFlag flags) {
  return SendMsgImpl(socket, message, flags);
}

ssize_t SendMsg(int socket, const msghdr* message, int flags) {
  return SendMsgImpl(socket, message, flags);
}

int EventFd(uint64_t initialValue, int flags) {
  NN_ABORT_UNLESS(IsInitializedImpl());
  int result = 0;
  int error = 0;
  Result callResult = g_ClientState.pClient->EventFd(Out(&result),
    Out(&error), initialValue, flags);
  if (callResult.IsSuccess() && result >= 0) {
    result = RegisterNativeSocket(result);
    return result;
  }
  return HandleResult(callResult, &result, &error);
}

int ShutdownAllSockets(const SockAddr* address, uint32_t addressLength,
  ShutdownAllSocketsMask mask) {
  NN_ABORT_UNLESS(IsInitializedImpl());
  int result = 0;
  int error = 0;
  if (address == nullptr || addressLength == 0 ||
    (static_cast<uint32_t>(mask) & ShutdownAllSocketsMaskAll) == 0) {
    SetLastErrorImpl(EInval);
    return -1;
  }
  ::nn::sf::InAutoSelectBuffer inAddress(address, addressLength);
  Result callResult = g_ClientState.pClient->ShutdownAllSockets(Out(&result),
    Out(&error), inAddress, static_cast<uint32_t>(mask));
  return HandleResult(callResult, &result, &error);
}

template <typename Address>
[[gnu::always_inline]] int AcceptImpl(int socket, Address* address,
  uint32_t* addressLength) {
  NN_ABORT_UNLESS(IsInitializedImpl());
  int result = 0;
  int error = 0;
  uint32_t length = 0;
  if (address == nullptr) {
    if (addressLength != nullptr && *addressLength != 0) {
      SetLastErrorImpl(EInval);
      return -1;
    }
  }
  else if (addressLength != nullptr) {
    length = *addressLength;
  }
  uint32_t outAddressLength = length;
  ::nn::sf::OutAutoSelectBuffer outAddress(address, length);
  int nativeSocket;
  if (!GetNativeSocket(&nativeSocket, socket)) {
    return -1;
  }
  Result callResult = g_ClientState.pClient->Accept(Out(&result),
    Out(&error), nativeSocket, outAddress, Out(&outAddressLength));
  if (callResult.IsSuccess() && result >= 0) {
    if (addressLength != nullptr) {
      *addressLength = outAddressLength;
    }
    result = RegisterNativeSocket(result);
    return result;
  }
  return HandleResult(callResult, &result, &error);
}

int Accept(int socket, SockAddr* address, uint32_t* addressLength) {
  return AcceptImpl(socket, address, addressLength);
}

int Accept(int socket, sockaddr* address, uint32_t* addressLength) {
  return AcceptImpl(socket, address, addressLength);
}

int Sysctl(int* name, size_t nameLength, void* oldValue, size_t* oldLength,
  void* newValue, size_t newLength) {
  NN_ABORT_UNLESS(IsInitializedImpl());
  int result = 0;
  int error = 0;
  if ((newValue == nullptr && newLength != 0) || name == nullptr ||
    (oldValue == nullptr && oldLength != nullptr && *oldLength != 0)) {
    SetLastErrorImpl(EInval);
    return -1;
  }
  size_t length = oldLength != nullptr ? *oldLength : 0;
  if (length > UINT32_MAX || newLength > UINT32_MAX) {
    SetLastErrorImpl(EFault);
    return -1;
  }
  uint32_t outOldLength = static_cast<uint32_t>(length);
  ::nn::sf::OutAutoSelectBuffer outOldValue(oldValue, outOldLength);
  ::nn::sf::InAutoSelectBuffer inNewValue(newValue, newLength);
  ::nn::sf::InAutoSelectBuffer inName(name, nameLength * sizeof(int));
  Result callResult = g_ClientState.pClient->Sysctl(Out(&result), Out(&error),
    inName, outOldValue, Out(&outOldLength), inNewValue);
  if (callResult.IsSuccess() && result >= 0) {
    if (oldLength != nullptr) {
      *oldLength = outOldLength;
    }
    return result;
  }
  return HandleResult(callResult, &result, &error);
}

int Ioctl(int socket, IoctlRequest command, void* data, size_t length) {
  NN_ABORT_UNLESS(IsInitializedImpl());
  if (data == nullptr || length > UINT32_MAX) {
    SetLastErrorImpl(EInval);
    return -1;
  }
  ::nn::sf::InAutoSelectBuffer inData(data, length);
  ::nn::sf::OutAutoSelectBuffer outData(data, length);
  int result = 0;
  int error = 0;
  int nativeSocket;
  if (!GetNativeSocket(&nativeSocket, socket)) {
    return -1;
  }
  Result callResult = g_ClientState.pClient->NifIoctl(Out(&result),
    Out(&error), nativeSocket, command._storage, inData, outData);
  return HandleResult(callResult, &result, &error);
}

namespace {

constexpr int IoctlBufferCountMax = 4;
constexpr uint32_t SiocGIfConf = 0xc0106924;

struct IfConf {
  int32_t ifc_len;
  void* ifc_buf;
};

size_t GetIoctlParameterLength(uint32_t command) {
  return (command >> 16) & 0x1fff;
}

[[gnu::always_inline]] bool IsSingleBufferIoctl(uint32_t command) {
  switch (command) {
    case 0x40044266:
    case 0x4004426a:
    case 0x40044271:
    case 0x40046676:
    case 0x40046677:
    case 0x4004667f:
    case 0x40047307:
    case 0x80044270:
    case 0x8010426d:
    case 0x8020426c:
    case 0x80206910:
    case 0x80206918:
    case 0x80206919:
    case 0x80206934:
    case 0x8020693c:
    case 0x8044692b:
    case 0x8088691b:
    case 0x81206919:
    case 0x90044267:
    case 0xc0206911:
    case 0xc0206917:
    case 0xc0206920:
    case 0xc0206921:
    case 0xc0206925:
    case 0xc0206933:
    case 0xc020698b:
    case 0xc0306938:
    case 0xc050696c:
    case 0xc050696d:
    case 0xc1206949:
      return true;
    default:
      return false;
  }
}

// Returns how many buffers carry the data of a supported command, or -1.
// SIOCGIFCONF also sends the interface list its request points to.
[[gnu::noinline]] int GetIoctlBuffers(uint32_t command, void* data,
  size_t length, void** buffers, size_t* sizes) {
  buffers[0] = data;
  sizes[0] = length;
  if (length < GetIoctlParameterLength(command)) {
    return -1;
  }
  if (IsSingleBufferIoctl(command)) {
    return 1;
  }
  if (command == SiocGIfConf) {
    NN_ABORT_UNLESS(length == sizeof(IfConf));
    IfConf* request = static_cast<IfConf*>(data);
    buffers[1] = request->ifc_buf;
    sizes[1] = request->ifc_len;
    return 2;
  }
  return -1;
}

// The server rewrites the request with its own view of the list, so the
// client pointer and length are restored.
[[gnu::noinline]] void RestoreIoctlBuffers(uint32_t command, void** buffers,
  size_t* sizes, int count) {
  if (sizes[0] < GetIoctlParameterLength(command)) {
    return;
  }
  if (IsSingleBufferIoctl(command)) {
    NN_ABORT_UNLESS(count == 1);
    return;
  }
  if (command == SiocGIfConf) {
    NN_ABORT_UNLESS(sizes[0] == sizeof(IfConf));
    NN_ABORT_UNLESS(count == 2);
    IfConf* request = static_cast<IfConf*>(buffers[0]);
    request->ifc_buf = buffers[1];
    request->ifc_len = static_cast<int32_t>(sizes[1]);
  }
}

[[gnu::always_inline]] int IoctlImpl(int socket, uint32_t command,
  void* data, size_t length) {
  NN_ABORT_UNLESS(IsInitializedImpl());
  int result = 0;
  int error = 0;
  void* buffers[IoctlBufferCountMax] = {};
  size_t sizes[IoctlBufferCountMax] = {};
  if (data == nullptr) {
    SetLastErrorImpl(EInval);
    return -1;
  }
  if (length > UINT32_MAX) {
    SetLastErrorImpl(EFault);
    return -1;
  }
  int count = GetIoctlBuffers(command, data, length, buffers, sizes);
  if (count < 1 || count > IoctlBufferCountMax) {
    SetLastErrorImpl(EInval);
    return -1;
  }
  ::nn::sf::InAutoSelectBuffer inBuffer0(buffers[0], sizes[0]);
  ::nn::sf::InAutoSelectBuffer inBuffer1(buffers[1], sizes[1]);
  ::nn::sf::InAutoSelectBuffer inBuffer2(buffers[2], sizes[2]);
  ::nn::sf::InAutoSelectBuffer inBuffer3(buffers[3], sizes[3]);
  ::nn::sf::OutAutoSelectBuffer outBuffer0(buffers[0], sizes[0]);
  ::nn::sf::OutAutoSelectBuffer outBuffer1(buffers[1], sizes[1]);
  ::nn::sf::OutAutoSelectBuffer outBuffer2(buffers[2], sizes[2]);
  ::nn::sf::OutAutoSelectBuffer outBuffer3(buffers[3], sizes[3]);
  os::AcquireReadLock(&g_ClientState.descriptorLock);
  NnmuslFileDescriptor descriptor = nnmuslLookupFileDescriptor(socket);
  if (descriptor.type == NnmuslFileDescriptorType_None) {
    error = EBadF;
    os::ReleaseReadLock(&g_ClientState.descriptorLock);
    result = -1;
  }
  else if (descriptor.type != NnmuslFileDescriptorType_Socket) {
    error = ENotSock;
    os::ReleaseReadLock(&g_ClientState.descriptorLock);
    result = -1;
  }
  else {
    os::ReleaseReadLock(&g_ClientState.descriptorLock);
    Result callResult = g_ClientState.pClient->Ioctl(Out(&result),
      Out(&error), descriptor.native, command, inBuffer0, inBuffer1,
      inBuffer2, inBuffer3, outBuffer0, outBuffer1, outBuffer2, outBuffer3,
      count);
    if (callResult.IsFailure()) {
      error = ConvertResultToErrno(callResult);
      result = -1;
    }
  }
  RestoreIoctlBuffers(command, buffers, sizes, count);
  if (result < 0) {
    SetLastErrorImpl(error);
  }
  return result;
}

}

int Ioctl(int socket, uint32_t command, void* data, size_t length) {
  return IoctlImpl(socket, command, data, length);
}

int Ioctl(int socket, IoctlCommand command, void* data, size_t length) {
  return IoctlImpl(socket, static_cast<uint32_t>(command), data, length);
}

ssize_t SendMsgNoMem(int socket, const MsgHdr* message, MsgFlag flags) {
  NN_ABORT_UNLESS(IsInitializedImpl());
  MMsgHdr messages = {};
  if (message == nullptr) {
    NN_ABORT_UNLESS(IsInitializedImpl());
    socket::SetLastError(static_cast<Errno>(EInval));
    return -1;
  }
  messages.msg_hdr = *message;
  ssize_t result = detail::SendMMsgNoMem(socket, &messages, 1, flags);
  if (result <= 0) {
    return result;
  }
  return messages.msg_len;
}

ssize_t RecvMsgNoMem(int socket, MsgHdr* message, MsgFlag flags) {
  NN_ABORT_UNLESS(IsInitializedImpl());
  MMsgHdr messages = {};
  ssize_t result;
  if (message != nullptr) {
    messages.msg_hdr = *message;
    result = detail::RecvMMsgNoMem(socket, &messages, 1, flags, nullptr);
  }
  else {
    result = detail::RecvMMsgNoMem(socket, nullptr, 0, flags, nullptr);
  }
  if (result < 0) {
    return result;
  }
  *message = messages.msg_hdr;
  return messages.msg_len;
}

Result RegisterResourceStatisticsName(const char* /* name */,
  size_t /* length */) {
  return Result{UINT32_MAX};
}

Result RegisterResourceStatisticsName(const char* /* name */,
  size_t /* length */, StatisticsMemory* /* memory */) {
  return Result{UINT32_MAX};
}

int GetResourceStatistics(StatisticsType type, void* buffer, size_t size,
  uint32_t options, const char* name, size_t length) {
  NN_ABORT_UNLESS(IsInitializedImpl());
  int result = -1;
  int error = 0;
  if (buffer == nullptr) {
    SetLastErrorImpl(EInval);
    return -1;
  }
  if (size > INT32_MAX) {
    SetLastErrorImpl(EFault);
    return -1;
  }

  // Allocator statistics are answered locally unless option bit 0 asks the
  // server.
  if (type == StatisticsType_Allocator && (options & 1) == 0) {
    os::LockMutex(&g_ClientState.allocatorMutex);
    int written = -1;
    if (g_ClientState.pAllocator == nullptr) {
      SetLastErrorImpl(EFault);
    }
    else if (size < sizeof(AllocatorStatistics)) {
      SetLastErrorImpl(EInval);
    }
    else {
      AllocatorStatistics* pStatistics =
        static_cast<AllocatorStatistics*>(buffer);
      if (g_ClientState.isLibraryHeapUsed) {
        lmem::detail::HeapHead* heap = g_ClientState.libraryHeapResource.heap;
        pStatistics->totalSize = lmem::GetTotalSize(heap);
        pStatistics->freeSize = lmem::GetExpHeapTotalFreeSize(heap);
        pStatistics->usedSize =
          pStatistics->totalSize - pStatistics->freeSize;
      }
      else {
        pStatistics->totalSize = 0;
        pStatistics->freeSize = 0;
        pStatistics->usedSize = g_ClientState.allocatedSize;
      }
      pStatistics->peakUsedSize = g_ClientState.allocatedSizePeak;
      written = sizeof(AllocatorStatistics);
    }
    os::UnlockMutex(&g_ClientState.allocatorMutex);
    return written;
  }

  ::nn::sf::OutAutoSelectBuffer outStatistics(buffer, size);
  ::nn::sf::InAutoSelectBuffer inName(name, length);
  Result callResult = g_ClientState.pClient->GetResourceStatistics(
    Out(&result), Out(&error), 0, static_cast<uint32_t>(type), outStatistics,
    options, inName);
  return HandleResult(callResult, &result, &error);
}

int GetSocketStatistics(SocketStatisticsType type, void* buffer,
  size_t size) {
  NN_ABORT_UNLESS(IsInitializedImpl());
  int result = -1;
  int error = 0;
  if (buffer == nullptr ||
    (static_cast<uint32_t>(type) == 0 && size < SocketStatisticsSize0) ||
    (static_cast<uint32_t>(type) == 1 && size < SocketStatisticsSize1)) {
    SetLastErrorImpl(EInval);
    return -1;
  }
  ::nn::sf::OutAutoSelectBuffer outStatistics(buffer, size);
  Result callResult = g_ClientState.pClient->GetSocketStatistics(
    Out(&result), Out(&error), 0, static_cast<uint32_t>(type),
    outStatistics);
  return HandleResult(callResult, &result, &error);
}

Result SetSocketBufferAttribute(BufferAttribute attribute,
  BufferDirection direction, size_t size) {
  NN_ABORT_UNLESS(IsInitializedImpl());
  int result = -1;
  int error = 0;
  Result callResult = g_ClientState.pClient->Command37(Out(&result),
    Out(&error), static_cast<uint16_t>(attribute),
    static_cast<uint16_t>(direction), static_cast<uint32_t>(size));
  return Result{static_cast<uint32_t>(HandleResult(callResult, &result,
    &error))};
}

void FreeIfAddrs(IfAddrs* addresses) {
  free(addresses);
}

void FreeIfMAddrs(IfMAddrs* addresses) {
  free(addresses);
}


[[gnu::always_inline]] int PollImpl(PollFd* fds, size_t count, int timeout) {
  NN_ABORT_UNLESS(IsInitializedImpl());
  int result = 0;
  int error = 0;
  if (fds == nullptr && count != 0) {
    SetLastErrorImpl(EInval);
    return -1;
  }
  if (count * sizeof(PollFd) > UINT32_MAX) {
    SetLastErrorImpl(EFault);
    return -1;
  }

  os::AcquireReadLock(&g_ClientState.descriptorLock);
  uint16_t descriptors[PollMappedSocketCount];
  memset(descriptors, 0xff, sizeof(descriptors));
  const bool isMapped = count < PollMappedSocketCount;
  if (isMapped) {
    for (size_t i = 0; i < count; ++i) {
      const int fd = fds[i].fd;
      if (fd < 0) {
        continue;
      }
      NN_ABORT_UNLESS(os::IsReadLockHeld(&g_ClientState.descriptorLock) ||
        os::IsWriteLockHeldByCurrentThread(&g_ClientState.descriptorLock));
      NnmuslFileDescriptor descriptor = nnmuslLookupFileDescriptor(fd);
      if (descriptor.type == NnmuslFileDescriptorType_Socket &&
        descriptor.native < PollMappedSocketCount) {
        descriptors[descriptor.native] = fd;
        fds[i].fd = descriptor.native;
      }
      else if (descriptor.type != NnmuslFileDescriptorType_Socket) {
        fds[i].fd += PollMappedSocketCount;
      }
      else {
        fds[i].fd = descriptor.native;
      }
    }
  }
  os::ReleaseReadLock(&g_ClientState.descriptorLock);

  ::nn::sf::InAutoSelectBuffer inFds(fds, count * sizeof(PollFd));
  ::nn::sf::OutAutoSelectBuffer outFds(fds, count * sizeof(PollFd));
  Result callResult = g_ClientState.pClient->Poll(Out(&result), Out(&error),
    inFds, outFds, static_cast<int32_t>(count), timeout);
  HandleResult(callResult, &result, &error);

  if (isMapped) {
    for (size_t i = 0; i < count; ++i) {
      const int fd = fds[i].fd;
      if (fd < 0) {
        continue;
      }
      fds[i].fd = fd < PollMappedSocketCount ? descriptors[fd] :
        fd - PollMappedSocketCount;
    }
  }
  return result;
}

int Poll(PollFd* fds, size_t count, int timeout) {
  return PollImpl(fds, count, timeout);
}

int Poll(pollfd* fds, size_t count, int timeout) {
  return PollImpl(reinterpret_cast<PollFd*>(fds), count, timeout);
}

// Remembers the descriptor of each native socket sent to the server.
struct NativeSocketMap {
  uint16_t* descriptors;
  int nativeSocketMax;
  int count;
};

// Called with the descriptor read lock held.
[[gnu::visibility("hidden")]] void ConvertToNativeFdSet(NativeSocketMap* map,
  const FdSet* set, FdSet* nativeSet);

namespace {

constexpr int FdSetWordCount = 16;
constexpr int FdSetWordBitCount = 64;
constexpr int SelectMappedSocketCount = 128;

[[gnu::always_inline]] void AddToFdSet(FdSet* set, int fd) {
  set->fds_bits[static_cast<unsigned>(fd) / FdSetWordBitCount] |=
    1ull << (fd % FdSetWordBitCount);
}

// Called with the descriptor read lock held.
[[gnu::always_inline]] int GetNativeSocketMax(const FdSet* set,
  int nativeSocketMax) {
  for (int word = 0; word < FdSetWordCount; ++word) {
    if (set->fds_bits[word] == 0) {
      continue;
    }
    for (int bit = 0; bit < FdSetWordBitCount; ++bit) {
      if (((set->fds_bits[word] >> bit) & 1) == 0) {
        continue;
      }
      NN_ABORT_UNLESS(os::IsReadLockHeld(&g_ClientState.descriptorLock) ||
        os::IsWriteLockHeldByCurrentThread(&g_ClientState.descriptorLock));
      NnmuslFileDescriptor descriptor =
        nnmuslLookupFileDescriptor(word * FdSetWordBitCount + bit);
      int nativeSocket = descriptor.type == NnmuslFileDescriptorType_Socket ?
        descriptor.native : -1;
      if (nativeSocket >= 0 && nativeSocket < SelectMappedSocketCount &&
        nativeSocket > nativeSocketMax) {
        nativeSocketMax = nativeSocket;
      }
    }
  }
  return nativeSocketMax;
}

// Native sockets outside the map are dropped, unmapped ones keep the all
// ones descriptor.
[[gnu::always_inline]] void ConvertFromNativeFdSet(const NativeSocketMap& map,
  FdSet* set, const FdSet& nativeSet) {
  *set = {};
  for (size_t word = 0; word < FdSetWordCount; ++word) {
    uint64_t bits = nativeSet.fds_bits[word];
    if (bits == 0) {
      continue;
    }
    for (size_t bit = 0; bit < FdSetWordBitCount; ++bit) {
      size_t nativeSocket = word * FdSetWordBitCount + bit;
      if (((bits >> bit) & 1) != 0 &&
        nativeSocket <= static_cast<size_t>(map.nativeSocketMax)) {
        AddToFdSet(set, map.descriptors[nativeSocket]);
      }
    }
  }
}

[[gnu::always_inline]] int SelectImpl(int count, FdSet* readFds,
  FdSet* writeFds, FdSet* exceptFds, const TimeVal* timeout) {
  NN_ABORT_UNLESS(IsInitializedImpl());
  int result = 0;
  int error = 0;
  FdSet nativeReadFds = {};
  FdSet nativeWriteFds = {};
  FdSet nativeExceptFds = {};
  sf::SelectTimeout selectTimeout = {0, 0, true};
  if (readFds == nullptr && writeFds == nullptr && exceptFds == nullptr &&
    timeout == nullptr) {
    SetLastErrorImpl(EInval);
    result = -1;
  }

  os::AcquireReadLock(&g_ClientState.descriptorLock);
  int nativeSocketMax = -1;
  if (readFds != nullptr) {
    nativeSocketMax = GetNativeSocketMax(readFds, nativeSocketMax);
  }
  if (writeFds != nullptr) {
    nativeSocketMax = GetNativeSocketMax(writeFds, nativeSocketMax);
  }
  if (exceptFds != nullptr) {
    nativeSocketMax = GetNativeSocketMax(exceptFds, nativeSocketMax);
  }
  uint16_t descriptors[SelectMappedSocketCount];
  NativeSocketMap map = {descriptors, SelectMappedSocketCount - 1, 0};
  memset(descriptors, 0xff, sizeof(descriptors));
  int nativeCount = nativeSocketMax >= 0 ? nativeSocketMax + 1 : count;
  if (readFds != nullptr) {
    ConvertToNativeFdSet(&map, readFds, &nativeReadFds);
  }
  if (writeFds != nullptr) {
    ConvertToNativeFdSet(&map, writeFds, &nativeWriteFds);
  }
  if (exceptFds != nullptr) {
    ConvertToNativeFdSet(&map, exceptFds, &nativeExceptFds);
  }
  os::ReleaseReadLock(&g_ClientState.descriptorLock);

  size_t readSize = readFds != nullptr ? sizeof(FdSet) : 0;
  size_t writeSize = writeFds != nullptr ? sizeof(FdSet) : 0;
  size_t exceptSize = exceptFds != nullptr ? sizeof(FdSet) : 0;
  ::nn::sf::InAutoSelectBuffer inReadFds(&nativeReadFds, readSize);
  ::nn::sf::InAutoSelectBuffer inWriteFds(&nativeWriteFds, writeSize);
  ::nn::sf::InAutoSelectBuffer inExceptFds(&nativeExceptFds, exceptSize);
  ::nn::sf::OutAutoSelectBuffer outReadFds(&nativeReadFds, readSize);
  ::nn::sf::OutAutoSelectBuffer outWriteFds(&nativeWriteFds, writeSize);
  ::nn::sf::OutAutoSelectBuffer outExceptFds(&nativeExceptFds, exceptSize);
  if (timeout != nullptr) {
    selectTimeout.seconds = timeout->tv_sec;
    selectTimeout.microseconds = timeout->tv_usec;
    selectTimeout.isNull = false;
  }
  Result callResult = g_ClientState.pClient->Select(Out(&result),
    Out(&error), nativeCount, inReadFds, inWriteFds, inExceptFds, outReadFds,
    outWriteFds, outExceptFds, selectTimeout);
  if (callResult.IsFailure()) {
    error = ConvertResultToErrno(callResult);
    result = -1;
  }
  if (result < 0) {
    SetLastErrorImpl(error);
    return result;
  }

  if (readFds != nullptr) {
    ConvertFromNativeFdSet(map, readFds, nativeReadFds);
  }
  if (writeFds != nullptr) {
    ConvertFromNativeFdSet(map, writeFds, nativeWriteFds);
  }
  if (exceptFds != nullptr) {
    ConvertFromNativeFdSet(map, exceptFds, nativeExceptFds);
  }
  return result;
}

}

void ConvertToNativeFdSet(NativeSocketMap* map, const FdSet* set,
  FdSet* nativeSet) {
  if (map->descriptors == nullptr) {
    return;
  }
  for (int word = 0; word < FdSetWordCount; ++word) {
    if (set->fds_bits[word] == 0) {
      continue;
    }
    for (int bit = 0; bit < FdSetWordBitCount; ++bit) {
      if (((set->fds_bits[word] >> bit) & 1) == 0) {
        continue;
      }
      NN_ABORT_UNLESS(os::IsReadLockHeld(&g_ClientState.descriptorLock) ||
        os::IsWriteLockHeldByCurrentThread(&g_ClientState.descriptorLock));
      int fd = word * FdSetWordBitCount + bit;
      NnmuslFileDescriptor descriptor = nnmuslLookupFileDescriptor(fd);
      if (descriptor.type != NnmuslFileDescriptorType_Socket) {
        continue;
      }
      int nativeSocket = descriptor.native;
      if (nativeSocket <= map->nativeSocketMax) {
        AddToFdSet(nativeSet, nativeSocket);
        map->descriptors[nativeSocket] = static_cast<uint16_t>(fd);
      }
    }
  }
}

int Select(int count, FdSet* readFds, FdSet* writeFds, FdSet* exceptFds,
  TimeVal* timeout) {
  return SelectImpl(count, readFds, writeFds, exceptFds, timeout);
}

int Select(int count, fd_set* readFds, fd_set* writeFds, fd_set* exceptFds,
  timeval* timeout) {
  return SelectImpl(count, reinterpret_cast<FdSet*>(readFds),
    reinterpret_cast<FdSet*>(writeFds), reinterpret_cast<FdSet*>(exceptFds),
    reinterpret_cast<const TimeVal*>(timeout));
}

namespace {

constexpr int ServiceTypeCount = 3;
constexpr int SessionCountMax[ServiceTypeCount] = {28, 8, 28};
constexpr int DefaultSessionCount[ServiceTypeCount] = {28, 8, 1};
constexpr int UserSessionCountMax = 28;
constexpr int AdminSessionCountMax = 8;
constexpr int SystemSessionCountMax = 28;
constexpr int SocketFileDescriptorType = 4;

// The system service is tried first, then the admin and user ones. A zero
// session count picks the largest one the service allows.
[[gnu::noinline]] Result InitializeClient(int sessionCount, uint32_t version) {
  ServiceType serviceType;
  const char* serviceName;
  int count;
  ::nn::sf::SharedPointer<sf::IClient> monitor =
    CreateClientMonitorByHipc("bsd:s");
  if (monitor != nullptr) {
    if (static_cast<uint32_t>(sessionCount) > SystemSessionCountMax) {
      return ResultInvalidArgument();
    }
    serviceType = ServiceType_System;
    serviceName = "bsd:s";
    count = static_cast<uint32_t>(sessionCount) > 1 ? sessionCount : 1;
  }
  else {
    CreateClientMonitorByHipc("bsd:a").Swap(monitor);
    if (monitor != nullptr) {
      count = sessionCount != 0 ? sessionCount : AdminSessionCountMax;
      if (static_cast<uint32_t>(count) > AdminSessionCountMax) {
        return ResultInvalidArgument();
      }
      serviceType = ServiceType_Admin;
      serviceName = "bsd:a";
    }
    else {
      CreateClientMonitorByHipc("bsd:u").Swap(monitor);
      if (monitor == nullptr) {
        return ResultClientCreationFailed();
      }
      count = sessionCount != 0 ? sessionCount : UserSessionCountMax;
      if (static_cast<uint32_t>(count) > UserSessionCountMax) {
        return ResultInvalidArgument();
      }
      serviceType = ServiceType_User;
      serviceName = "bsd:u";
    }
  }

  ::nn::sf::SharedPointer<sf::IClient> client =
    CreateClientServiceByHipc(count, serviceName);
  if (client == nullptr) {
    return ResultClientCreationFailed();
  }
  uint32_t error = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(client->Command36(Out(&error), 0, version));
  if (error != 0 || monitor->StartMonitoring(0).IsFailure() ||
    resolver::InitializeClient(version).IsFailure()) {
    return ResultClientCreationFailed();
  }
  resolver::EnableResolverCalls();
  g_ClientState.monitor = monitor;
  g_ClientState.pClient = client;
  g_ClientState.serviceType = serviceType;
  return Result();
}

// Called with the library mutex and the NoSf event fd write lock held.
[[gnu::noinline]] Result FinalizeClient() {
  os::LockMutex(&g_StatisticsMutex);
  if (g_IsStatisticsThreadRunning) {
    g_IsStatisticsThreadRunning = false;
    os::UnlockMutex(&g_StatisticsMutex);
    os::WaitThread(&g_ClientState.statisticsThread);
    os::DestroyThread(&g_ClientState.statisticsThread);
  }
  else {
    os::UnlockMutex(&g_StatisticsMutex);
  }

  if (g_ClientState.isEventFdInitialized) {
    NN_ABORT_UNLESS(
      os::IsWriteLockHeldByCurrentThread(&g_ClientState.eventFdLock));
    for (NoSfEventFdEntry& entry : g_ClientState.eventFdEntries) {
      entry.socket = -1;
      os::DetachWritableHandleOfSystemEvent(&entry.writableEvent);
      os::DetachReadableHandleOfSystemEvent(&entry.readableEvent);
      uint32_t writableHandle = entry.writableHandle;
      bool isWritableHandleManaged = entry.isWritableHandleManaged;
      entry.writableHandle = 0;
      entry.isWritableHandleManaged = false;
      if (isWritableHandleManaged) {
        os::CloseNativeHandle(writableHandle);
      }
      uint32_t readableHandle = entry.readableHandle;
      bool isReadableHandleManaged = entry.isReadableHandleManaged;
      entry.readableHandle = 0;
      entry.isReadableHandleManaged = false;
      if (isReadableHandleManaged) {
        os::CloseNativeHandle(readableHandle);
      }
    }
    g_ClientState.isEventFdInitialized = false;
  }

  resolver::DisableResolverCalls();
  DestroyClientServiceByHipc(&g_ClientState.pClient);
  DestroyClientMonitorByHipc(&g_ClientState.monitor);
  resolver::WaitForAllResolverCallsToComplete();
  Result result = resolver::FinalizeClient();
  if (result.IsSuccess()) {
    g_ClientState.pClient.Reset();
    g_ClientState.monitor.Reset();
    g_ClientState.serviceType = ServiceType_None;
  }
  return result;
}

[[gnu::always_inline]] bool IsLibraryHeapUsed() {
  os::LockMutex(&g_ClientState.allocatorMutex);
  bool isLibraryHeapUsed = g_ClientState.isLibraryHeapUsed;
  os::UnlockMutex(&g_ClientState.allocatorMutex);
  return isLibraryHeapUsed;
}

// Called with the allocator mutex held.
[[gnu::always_inline]] void SetAllocatorLocked(MemoryResource* allocator,
  bool isLibraryHeapUsed) {
  g_ClientState.pAllocator = allocator;
  g_ClientState.isAllocatorSet = true;
  g_ClientState.allocatedSize = 0;
  g_ClientState.allocatedSizePeak = 0;
  g_ClientState.isLibraryHeapUsed = isLibraryHeapUsed;
  g_ClientState.allocatorGeneration =
    (g_ClientState.allocatorGeneration + 1) % AllocatorGenerationCount;
}

[[gnu::always_inline]] void UseDefaultAllocatorIfUnset() {
  os::LockMutex(&g_ClientState.allocatorMutex);
  if (g_ClientState.pAllocator == nullptr) {
    if (!g_ClientState.isDefaultAllocatorUsed) {
      g_ClientState.isDefaultAllocatorUsed = true;
    }
    g_ClientState.pAllocator = util::pmr::GetDefaultResource();
    g_ClientState.isAllocatorSet = true;
    g_ClientState.allocatedSize = 0;
    g_ClientState.allocatedSizePeak = 0;
    g_ClientState.allocatorGeneration =
      (g_ClientState.allocatorGeneration + 1) % AllocatorGenerationCount;
  }
  os::UnlockMutex(&g_ClientState.allocatorMutex);
}

[[gnu::always_inline]] void ClearAllocatorSet() {
  os::LockMutex(&g_ClientState.allocatorMutex);
  g_ClientState.isAllocatorSet = false;
  os::UnlockMutex(&g_ClientState.allocatorMutex);
}

// The descriptors are closed without the library locks, which their close
// takes again.
[[gnu::always_inline]] void CloseSocketFileDescriptors() {
  os::UnlockMutex(&g_ClientState.mutex);
  os::ReleaseWriteLock(&g_ClientState.eventFdLock);
  nnmuslCloseFileDescriptorsOfType(SocketFileDescriptorType);
  os::AcquireWriteLock(&g_ClientState.eventFdLock);
  os::LockMutex(&g_ClientState.mutex);
}

[[gnu::always_inline]] bool IsAligned(uintptr_t value) {
  return (value & 0xfff) == 0;
}

}

Result Initialize(const Config& config) {
  os::LockMutex(&g_ClientState.mutex);
  Result result;
  if (g_ClientState.pClient != nullptr) {
    result = ResultAlreadyInitialized();
  }
  else {
    os::LockMutex(&g_ClientState.allocatorMutex);
    if (g_ClientState.pAllocator != nullptr) {
      result = ResultAlreadyInitialized();
    }
    else if (config.m_MemoryPool == nullptr ||
      !IsAligned(reinterpret_cast<uintptr_t>(config.m_MemoryPool)) ||
      !IsAligned(config.m_MemoryPoolSize) ||
      config.m_MemoryPoolSize < config.m_AllocatorPoolSize) {
      result = ResultInvalidArgument();
    }
    else {
      lmem::detail::HeapHead* heap = lmem::CreateExpHeap(config.m_MemoryPool,
        config.m_MemoryPoolSize, 0);
      if (heap == nullptr) {
        result = ResultClientCreationFailed();
      }
      else {
        g_ClientState.libraryHeapResource.heap = heap;
        SetAllocatorLocked(&g_ClientState.libraryHeapResource, true);
        os::UnlockMutex(&g_ClientState.allocatorMutex);
        result = InitializeClient(config.m_ConcurrencyLimit,
          config.m_Version);
        if (result.IsSuccess()) {
          os::UnlockMutex(&g_ClientState.mutex);
          return result;
        }
        os::LockMutex(&g_ClientState.allocatorMutex);
        SetAllocatorLocked(nullptr, false);
        lmem::DestroyExpHeap(g_ClientState.libraryHeapResource.heap);
        g_ClientState.libraryHeapResource.heap = nullptr;
      }
    }
    os::UnlockMutex(&g_ClientState.allocatorMutex);
  }
  os::UnlockMutex(&g_ClientState.mutex);
  return result;
}

Result Initialize(int version) {
  os::LockMutex(&g_ClientState.mutex);
  Result result;
  if (IsLibraryHeapUsed()) {
    result = ResultAlreadyInitialized();
  }
  else if (g_ClientState.initializeCount > 0) {
    ++g_ClientState.initializeCount;
    result = Result();
  }
  else {
    UseDefaultAllocatorIfUnset();
    result = InitializeClient(0, version);
    if (result.IsSuccess()) {
      ++g_ClientState.initializeCount;
    }
  }
  os::UnlockMutex(&g_ClientState.mutex);
  return result;
}

Result Initialize(int* pOutHandle, int concurrencyLimit, int version) {
  os::LockMutex(&g_ClientState.mutex);
  Result result;
  if (IsLibraryHeapUsed()) {
    result = ResultAlreadyInitialized();
  }
  else if (pOutHandle == nullptr) {
    result = ResultInvalidArgument();
  }
  else if (g_ClientState.initializeCount >= 1) {
    int typeIndex = g_ClientState.serviceType - 1;
    int sessionCount = g_ClientState.sessionCount + concurrencyLimit;
    if (static_cast<uint32_t>(typeIndex) >= ServiceTypeCount) {
      result = ResultClientCreationFailed();
    }
    else if (sessionCount > SessionCountMax[typeIndex]) {
      result = ResultInvalidArgument();
    }
    else if (SetClientSessionCount(sessionCount).IsFailure()) {
      result = ResultClientCreationFailed();
    }
    else {
      int handle =
        g_ClientState.handleTable.AcquireHandleForConcurrency(concurrencyLimit);
      if (handle == -1) {
        result = ResultClientCreationFailed();
      }
      else {
        *pOutHandle = handle;
        g_ClientState.sessionCount = sessionCount;
        ++g_ClientState.initializeCount;
        result = Result();
      }
    }
  }
  else {
    UseDefaultAllocatorIfUnset();
    result = InitializeClient(concurrencyLimit, version);
    if (result.IsSuccess()) {
      int handle =
        g_ClientState.handleTable.AcquireHandleForConcurrency(concurrencyLimit);
      if (handle == -1) {
        result = ResultClientCreationFailed();
      }
      else {
        *pOutHandle = handle;
        g_ClientState.sessionCount = concurrencyLimit;
        ++g_ClientState.initializeCount;
      }
    }
  }
  os::UnlockMutex(&g_ClientState.mutex);
  return result;
}

Result Finalize() {
  os::AcquireWriteLock(&g_ClientState.eventFdLock);
  os::LockMutex(&g_ClientState.mutex);
  Result result;
  if (g_ClientState.pClient == nullptr) {
    result = ResultAlreadyInitialized();
  }
  else if (IsLibraryHeapUsed()) {
    Result finalizeResult = FinalizeClient();
    os::LockMutex(&g_ClientState.allocatorMutex);
    SetAllocatorLocked(nullptr, false);
    lmem::DestroyExpHeap(g_ClientState.libraryHeapResource.heap);
    g_ClientState.libraryHeapResource.heap = nullptr;
    os::UnlockMutex(&g_ClientState.allocatorMutex);
    if (finalizeResult.IsSuccess()) {
      CloseSocketFileDescriptors();
      result = Result();
    }
    else {
      result = ResultClientCreationFailed();
    }
  }
  else if (g_ClientState.initializeCount >
    g_ClientState.handleTable.GetCount()) {
    if (g_ClientState.initializeCount >= 2) {
      --g_ClientState.initializeCount;
      result = Result();
    }
    else {
      result = FinalizeClient();
      g_ClientState.initializeCount = 0;
      ClearAllocatorSet();
      if (result.IsSuccess()) {
        CloseSocketFileDescriptors();
      }
      else {
        result = ResultClientCreationFailed();
      }
    }
  }
  else {
    result = ResultAlreadyInitialized();
  }
  os::UnlockMutex(&g_ClientState.mutex);
  os::ReleaseWriteLock(&g_ClientState.eventFdLock);
  return result;
}

Result Finalize(int handle) {
  os::AcquireWriteLock(&g_ClientState.eventFdLock);
  os::LockMutex(&g_ClientState.mutex);
  Result result;
  if (g_ClientState.pClient == nullptr || IsLibraryHeapUsed()) {
    result = ResultAlreadyInitialized();
  }
  else {
    int concurrency =
      g_ClientState.handleTable.GetConcurrencyAndReleaseHandle(handle);
    if (concurrency == -1) {
      result = ResultInvalidArgument();
    }
    else {
      int sessionCount = g_ClientState.sessionCount - concurrency;
      int typeIndex = g_ClientState.serviceType - 1;
      bool isValid = true;
      if (sessionCount == 0) {
        if (static_cast<uint32_t>(typeIndex) < ServiceTypeCount) {
          sessionCount = DefaultSessionCount[typeIndex];
        }
        else {
          isValid = false;
        }
      }
      else if (sessionCount < 1 || sessionCount > UserSessionCountMax) {
        isValid = false;
      }

      if (!isValid) {
        result = ResultClientCreationFailed();
      }
      else if (g_ClientState.initializeCount >= 2) {
        if (SetClientSessionCount(sessionCount).IsSuccess()) {
          g_ClientState.sessionCount =
            g_ClientState.handleTable.GetCount() != 0 ? sessionCount : 0;
          --g_ClientState.initializeCount;
          result = Result();
        }
        else {
          result = ResultClientCreationFailed();
        }
      }
      else if (g_ClientState.handleTable.GetCount() != 0) {
        result = ResultClientCreationFailed();
      }
      else {
        result = FinalizeClient();
        g_ClientState.sessionCount = 0;
        g_ClientState.initializeCount = 0;
        ClearAllocatorSet();
        if (result.IsSuccess()) {
          CloseSocketFileDescriptors();
        }
        else {
          result = ResultClientCreationFailed();
        }
      }
    }
  }
  os::UnlockMutex(&g_ClientState.mutex);
  os::ReleaseWriteLock(&g_ClientState.eventFdLock);
  return result;
}

namespace {

constexpr size_t StatisticsNameLengthMax = 32;
constexpr size_t StatisticsThreadStackSize = 4096;
constexpr int StatisticsThreadPriority = 16;
constexpr TimeSpan StatisticsInterval = {500 * 1000 * 1000};

// Reports the library heap usage to the server twice a second.
void StatisticsThread(void* /* argument */) {
  os::LockMutex(&g_StatisticsMutex);
  os::UnlockMutex(&g_StatisticsMutex);
  AllocatorStatistics statistics = {};
  os::SleepThread(StatisticsInterval);
  os::LockMutex(&g_StatisticsMutex);
  while (g_IsStatisticsThreadRunning) {
    os::UnlockMutex(&g_StatisticsMutex);
    os::LockMutex(&g_ClientState.allocatorMutex);
    if (g_ClientState.pAllocator != nullptr) {
      lmem::detail::HeapHead* heap = g_ClientState.libraryHeapResource.heap;
      if (heap != nullptr) {
        statistics.totalSize = lmem::GetTotalSize(heap);
        statistics.freeSize = lmem::GetExpHeapTotalFreeSize(heap);
        statistics.usedSize = statistics.totalSize - statistics.freeSize;
        statistics.peakUsedSize = g_ClientState.allocatedSizePeak;
      }
      os::UnlockMutex(&g_ClientState.allocatorMutex);
      int name[] = {10, 2};
      Sysctl(name, 2, nullptr, nullptr, &statistics, sizeof(statistics));
    }
    else {
      os::UnlockMutex(&g_ClientState.allocatorMutex);
    }
    os::SleepThread(StatisticsInterval);
    os::LockMutex(&g_StatisticsMutex);
  }
  os::UnlockMutex(&g_StatisticsMutex);
}

// The thread reporting the heap usage starts when a stack is given.
[[gnu::noinline]] Result RegisterForStatisticsImpl(const char* name,
  size_t length, StatisticsMemory* memory) {
  NN_ABORT_UNLESS(IsInitializedImpl());
  int result = 0;
  int error = 0;
  if (name == nullptr || length > StatisticsNameLengthMax ||
    length < strnlen(name, length) + 1) {
    SetLastErrorImpl(EInval);
    return Result{UINT32_MAX};
  }
  ::nn::sf::InAutoSelectBuffer inName(name, length);
  Result callResult = g_ClientState.pClient->RegisterResourceStatisticsName(
    Out(&result), Out(&error), 0, inName, false);
  if (callResult.IsFailure()) {
    error = ConvertResultToErrno(callResult);
    result = -1;
  }
  if (result < 0) {
    SetLastErrorImpl(error);
    return Result{static_cast<uint32_t>(result)};
  }
  if (memory == nullptr) {
    return Result{static_cast<uint32_t>(result)};
  }
  os::LockMutex(&g_StatisticsMutex);
  if (!g_IsStatisticsThreadRunning) {
    NN_ABORT_UNLESS_RESULT_SUCCESS(os::CreateThread(
      &g_ClientState.statisticsThread, StatisticsThread, nullptr, memory,
      StatisticsThreadStackSize, StatisticsThreadPriority));
    g_IsStatisticsThreadRunning = true;
    os::StartThread(&g_ClientState.statisticsThread);
  }
  os::UnlockMutex(&g_StatisticsMutex);
  return Result{static_cast<uint32_t>(result)};
}

}

Result RegisterForStatistics(const char* name, size_t length) {
  return RegisterForStatisticsImpl(name, length, nullptr);
}

Result RegisterForStatistics(const char* name, size_t length,
  StatisticsMemory* memory) {
  return RegisterForStatisticsImpl(name, length, memory);
}

}
