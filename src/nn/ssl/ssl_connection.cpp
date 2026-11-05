#include <new>

#include "nn/socket/socket_api.hpp"
#include "nn/ssl/detail/ssl_service.hpp"
#include "nn/ssl/ssl_result.hpp"
#include "nn/ssl/ssl_types.hpp"

namespace {

struct NnmuslFileDescriptor {
  uint16_t type;
  uint16_t native;
};

constexpr uint16_t NnmuslFileDescriptorType_Socket = 4;

}

// Unexported nnmusl table lookup at 0xaf3d0, it packs the descriptor type
// and the native socket of an nnmusl file descriptor.
extern "C" NnmuslFileDescriptor nnmuslLookupFileDescriptor(int fd);

namespace nn::ssl {

namespace {

int ToNativeSocket(int socket) {
  NnmuslFileDescriptor descriptor = nnmuslLookupFileDescriptor(socket);
  return descriptor.type == NnmuslFileDescriptorType_Socket ?
    descriptor.native : -1;
}

constexpr uint64_t ServerCertChainMagic = 0x4e4d684374726543;

struct ServerCertChainEntry {
  uint32_t size;
  uint32_t offset;
};

struct ServerCertChainHeader {
  uint64_t magic;
  uint32_t count;
  uint32_t reserved;
  ServerCertChainEntry entries[1];
};

detail::ConnectionSession* GetSession(uint64_t connectionId) {
  return detail::GetSessionFromId<detail::ConnectionSession>(connectionId);
}

}

Connection::Connection()
  : m_ConnectionId(0), m_ContextId(0), m_SocketDescriptor(-1),
    m_ServerCertSize(0), m_ServerCertCount(0), m_pServerCertBuffer(nullptr),
    m_ServerCertBufferSize(0), m_LastResult() {}

Connection::~Connection() {}

Result Connection::Create(Context* pContext) {
  if (!detail::ServiceSession::IsInitialized()) {
    return ResultLibraryNotInitialized();
  }

  if (pContext == nullptr) {
    return ResultInvalidPointer();
  }

  uint64_t contextId = 0;
  if (pContext->GetContextId(&contextId).IsFailure()) {
    return ResultInvalidContext();
  }

  auto pContextSession =
    detail::GetSessionFromId<detail::ContextSession>(contextId);
  if (pContextSession == nullptr || pContextSession->Get() == nullptr) {
    return ResultInvalidContext();
  }

  void* storage = detail::SslMemoryManager::AllocateChunk(
    sizeof(detail::ConnectionSession), 0);
  if (storage == nullptr) {
    return ResultInsufficientMemory();
  }

  auto pSession = new (storage) detail::ConnectionSession();
  Result result = (*pContextSession)->CreateConnection(
    nn::sf::Out<detail::ConnectionSession>(pSession));
  if (result.IsFailure()) {
    pSession->~SharedPointer();
    detail::SslMemoryManager::Free(pSession, 0);
    return result;
  }

  m_ConnectionId = detail::GetIdFromSession(pSession);
  m_ContextId = contextId;
  return Result{};
}

Result Connection::Destroy() {
  if (!detail::ServiceSession::IsInitialized()) {
    return ResultLibraryNotInitialized();
  }

  detail::ConnectionSession* pSession = GetSession(m_ConnectionId);
  if (pSession == nullptr || pSession->Get() == nullptr) {
    return ResultInvalidReference();
  }

  if (m_SocketDescriptor >= 0) {
    socket::Close(m_SocketDescriptor);
    m_SocketDescriptor = -1;
  }

  m_ConnectionId = 0;
  m_ContextId = 0;
  m_pServerCertBuffer = nullptr;
  m_ServerCertBufferSize = 0;
  m_LastResult = Result{};
  pSession->Reset();
  pSession->~SharedPointer();
  detail::SslMemoryManager::Free(pSession, 0);
  return Result{};
}

Result Connection::SetSocketDescriptor(int socket) {
  if (!detail::ServiceSession::IsInitialized()) {
    return ResultLibraryNotInitialized();
  }

  int nativeSocket = ToNativeSocket(socket);
  detail::ConnectionSession* pSession = GetSession(m_ConnectionId);
  if (pSession == nullptr || pSession->Get() == nullptr) {
    return ResultInvalidReference();
  }

  Result result = (*pSession)->SetSocketDescriptor(nativeSocket,
    nn::sf::Out<int>(&m_SocketDescriptor));

  // The service answers -1 when it keeps the socket, which is then only
  // remembered here with the top bit set.
  m_SocketDescriptor =
    m_SocketDescriptor == -1 ? socket | 0x80000000 : socket;
  return result;
}

Result Connection::SetHostName(const char* hostName, uint32_t hostNameSize) {
  if (!detail::ServiceSession::IsInitialized()) {
    return ResultLibraryNotInitialized();
  }

  if (hostName == nullptr) {
    return ResultInvalidPointer();
  }

  detail::ConnectionSession* pSession = GetSession(m_ConnectionId);
  if (pSession == nullptr || pSession->Get() == nullptr) {
    return ResultInvalidReference();
  }

  return (*pSession)->SetHostName(nn::sf::InBuffer(hostName, hostNameSize));
}

Result Connection::SetVerifyOption(VerifyOption option) {
  if (!detail::ServiceSession::IsInitialized()) {
    return ResultLibraryNotInitialized();
  }

  detail::ConnectionSession* pSession = GetSession(m_ConnectionId);
  if (pSession == nullptr || pSession->Get() == nullptr) {
    return ResultInvalidReference();
  }

  return (*pSession)->SetVerifyOption(option);
}

Result Connection::SetServerCertBuffer(char* buffer, uint32_t bufferSize) {
  if (!detail::ServiceSession::IsInitialized()) {
    return ResultLibraryNotInitialized();
  }

  if (buffer == nullptr && m_pServerCertBuffer == nullptr) {
    return ResultInvalidPointer();
  }

  detail::ConnectionSession* pSession = GetSession(m_ConnectionId);
  if (pSession == nullptr || pSession->Get() == nullptr) {
    return ResultInvalidReference();
  }

  if (buffer != nullptr && m_pServerCertBuffer != nullptr) {
    return ResultServerCertBufferAlreadyRegistered();
  }

  m_pServerCertBuffer = buffer;
  m_ServerCertBufferSize = bufferSize;
  return Result{};
}

Result Connection::SetIoMode(IoMode mode) {
  if (!detail::ServiceSession::IsInitialized()) {
    return ResultLibraryNotInitialized();
  }

  detail::ConnectionSession* pSession = GetSession(m_ConnectionId);
  if (pSession == nullptr || pSession->Get() == nullptr) {
    return ResultInvalidReference();
  }

  return (*pSession)->SetIoMode(mode);
}

Result Connection::SetSessionCacheMode(SessionCacheMode mode) {
  if (!detail::ServiceSession::IsInitialized()) {
    return ResultLibraryNotInitialized();
  }

  detail::ConnectionSession* pSession = GetSession(m_ConnectionId);
  if (pSession == nullptr || pSession->Get() == nullptr) {
    return ResultInvalidReference();
  }

  return (*pSession)->SetSessionCacheMode(mode);
}

Result Connection::SetRenegotiationMode(RenegotiationMode mode) {
  if (!detail::ServiceSession::IsInitialized()) {
    return ResultLibraryNotInitialized();
  }

  detail::ConnectionSession* pSession = GetSession(m_ConnectionId);
  if (pSession == nullptr || pSession->Get() == nullptr) {
    return ResultInvalidReference();
  }

  return (*pSession)->SetRenegotiationMode(mode);
}

Result Connection::GetSocketDescriptor(int* pOutValue) {
  if (!detail::ServiceSession::IsInitialized()) {
    return ResultLibraryNotInitialized();
  }

  if (pOutValue == nullptr) {
    return ResultInvalidPointer();
  }

  detail::ConnectionSession* pSession = GetSession(m_ConnectionId);
  if (pSession == nullptr || pSession->Get() == nullptr) {
    return ResultInvalidReference();
  }

  Result result =
    (*pSession)->GetSocketDescriptor(nn::sf::Out<int>(pOutValue));
  if (result.IsFailure()) {
    return result;
  }

  // The top bit marks a descriptor that was only registered locally.
  if (m_SocketDescriptor != -1) {
    *pOutValue = m_SocketDescriptor & 0x7fffffff;
  }

  return Result{};
}

Result Connection::GetHostName(char* pOutBuffer, uint32_t* pOutSize,
  uint32_t bufferSize) {
  if (!detail::ServiceSession::IsInitialized()) {
    return ResultLibraryNotInitialized();
  }

  if (pOutBuffer == nullptr || pOutSize == nullptr) {
    return ResultInvalidPointer();
  }

  detail::ConnectionSession* pSession = GetSession(m_ConnectionId);
  if (pSession == nullptr || pSession->Get() == nullptr) {
    return ResultInvalidReference();
  }

  return (*pSession)->GetHostName(nn::sf::OutBuffer(pOutBuffer, bufferSize),
    nn::sf::Out<uint32_t>(pOutSize));
}

Result Connection::GetVerifyOption(VerifyOption* pOutValue) {
  if (!detail::ServiceSession::IsInitialized()) {
    return ResultLibraryNotInitialized();
  }

  if (pOutValue == nullptr) {
    return ResultInvalidPointer();
  }

  detail::ConnectionSession* pSession = GetSession(m_ConnectionId);
  if (pSession == nullptr || pSession->Get() == nullptr) {
    return ResultInvalidReference();
  }

  VerifyOption value = {};
  Result result =
    (*pSession)->GetVerifyOption(nn::sf::Out<VerifyOption>(&value));
  if (result.IsSuccess()) {
    *pOutValue = value;
  }

  return result;
}

Result Connection::GetIoMode(IoMode* pOutValue) {
  if (!detail::ServiceSession::IsInitialized()) {
    return ResultLibraryNotInitialized();
  }

  if (pOutValue == nullptr) {
    return ResultInvalidPointer();
  }

  detail::ConnectionSession* pSession = GetSession(m_ConnectionId);
  if (pSession == nullptr || pSession->Get() == nullptr) {
    return ResultInvalidReference();
  }

  IoMode value = {};
  Result result = (*pSession)->GetIoMode(nn::sf::Out<IoMode>(&value));
  if (result.IsSuccess()) {
    *pOutValue = value;
  }

  return result;
}

Result Connection::GetSessionCacheMode(SessionCacheMode* pOutValue) {
  if (!detail::ServiceSession::IsInitialized()) {
    return ResultLibraryNotInitialized();
  }

  if (pOutValue == nullptr) {
    return ResultInvalidPointer();
  }

  detail::ConnectionSession* pSession = GetSession(m_ConnectionId);
  if (pSession == nullptr || pSession->Get() == nullptr) {
    return ResultInvalidReference();
  }

  SessionCacheMode value = {};
  Result result = (*pSession)->GetSessionCacheMode(
    nn::sf::Out<SessionCacheMode>(&value));
  if (result.IsSuccess()) {
    *pOutValue = value;
  }

  return result;
}

Result Connection::GetRenegotiationMode(RenegotiationMode* pOutValue) {
  if (!detail::ServiceSession::IsInitialized()) {
    return ResultLibraryNotInitialized();
  }

  if (pOutValue == nullptr) {
    return ResultInvalidPointer();
  }

  detail::ConnectionSession* pSession = GetSession(m_ConnectionId);
  if (pSession == nullptr || pSession->Get() == nullptr) {
    return ResultInvalidReference();
  }

  RenegotiationMode value = {};
  Result result = (*pSession)->GetRenegotiationMode(
    nn::sf::Out<RenegotiationMode>(&value));
  if (result.IsSuccess()) {
    *pOutValue = value;
  }

  return result;
}

Result Connection::FlushSessionCache() {
  if (!detail::ServiceSession::IsInitialized()) {
    return ResultLibraryNotInitialized();
  }

  detail::ConnectionSession* pSession = GetSession(m_ConnectionId);
  if (pSession == nullptr || pSession->Get() == nullptr) {
    return ResultInvalidReference();
  }

  return (*pSession)->FlushSessionCache();
}

Result Connection::DoHandshake() {
  if (!detail::ServiceSession::IsInitialized()) {
    return ResultLibraryNotInitialized();
  }

  detail::ConnectionSession* pSession = GetSession(m_ConnectionId);
  if (pSession == nullptr || pSession->Get() == nullptr) {
    return ResultInvalidReference();
  }

  m_ServerCertSize = 0;
  m_ServerCertCount = 0;
  return (*pSession)->DoHandshakeGetServerCert(
    nn::sf::Out<uint32_t>(&m_ServerCertSize),
    nn::sf::Out<uint32_t>(&m_ServerCertCount),
    nn::sf::OutBuffer(m_pServerCertBuffer, m_ServerCertBufferSize));
}

Result Connection::DoHandshake(uint32_t* pOutServerCertSize,
  uint32_t* pOutServerCertCount, char* buffer, uint32_t bufferSize) {
  if (!detail::ServiceSession::IsInitialized()) {
    return ResultLibraryNotInitialized();
  }

  detail::ConnectionSession* pSession = GetSession(m_ConnectionId);
  if (pSession == nullptr || pSession->Get() == nullptr) {
    return ResultInvalidReference();
  }

  char* serverCert = m_pServerCertBuffer;
  uint32_t serverCertSize = m_ServerCertBufferSize;
  m_ServerCertSize = 0;
  m_ServerCertCount = 0;
  if (buffer != nullptr && bufferSize != 0) {
    serverCert = buffer;
    serverCertSize = bufferSize;
  }

  Result result = (*pSession)->DoHandshakeGetServerCert(
    nn::sf::Out<uint32_t>(&m_ServerCertSize),
    nn::sf::Out<uint32_t>(&m_ServerCertCount),
    nn::sf::OutBuffer(serverCert, serverCertSize));
  if (result.IsSuccess()) {
    if (pOutServerCertSize != nullptr) {
      *pOutServerCertSize = m_ServerCertSize;
    }

    if (pOutServerCertCount != nullptr) {
      *pOutServerCertCount = m_ServerCertCount;
    }
  }

  return result;
}

Result Connection::DoHandshake(uint32_t* pOutServerCertSize,
  uint32_t* pOutServerCertCount) {
  if (!detail::ServiceSession::IsInitialized()) {
    return ResultLibraryNotInitialized();
  }

  detail::ConnectionSession* pSession = GetSession(m_ConnectionId);
  if (pSession == nullptr || pSession->Get() == nullptr) {
    return ResultInvalidReference();
  }

  m_ServerCertSize = 0;
  m_ServerCertCount = 0;
  Result result = (*pSession)->DoHandshakeGetServerCert(
    nn::sf::Out<uint32_t>(&m_ServerCertSize),
    nn::sf::Out<uint32_t>(&m_ServerCertCount),
    nn::sf::OutBuffer(m_pServerCertBuffer, m_ServerCertBufferSize));
  if (result.IsSuccess()) {
    if (pOutServerCertSize != nullptr) {
      *pOutServerCertSize = m_ServerCertSize;
    }

    if (pOutServerCertCount != nullptr) {
      *pOutServerCertCount = m_ServerCertCount;
    }
  }

  return result;
}

Result Connection::GetServerCertDetail(ServerCertDetail* pOutValue,
  const char* buffer, uint32_t index) const {
  if (!detail::ServiceSession::IsInitialized()) {
    return ResultLibraryNotInitialized();
  }

  if (pOutValue == nullptr) {
    return ResultInvalidPointer();
  }

  const char* serverCert = buffer != nullptr ? buffer : m_pServerCertBuffer;
  if (serverCert == nullptr) {
    return ResultInvalidPointer();
  }

  auto header = reinterpret_cast<const ServerCertChainHeader*>(serverCert);
  if (header->magic == ServerCertChainMagic) {
    if (index >= header->count) {
      return ResultInvalidCertIndex();
    }

    pOutValue->size = header->entries[index].size;
    pOutValue->pData = serverCert + header->entries[index].offset;
    return Result{};
  }

  if (index > m_ServerCertCount) {
    return ResultInvalidCertIndex();
  }

  pOutValue->size = m_ServerCertSize;
  pOutValue->pData = serverCert;
  return Result{};
}

Result Connection::GetServerCertCount(uint32_t* pOutValue,
  const char* buffer) const {
  if (!detail::ServiceSession::IsInitialized()) {
    return ResultLibraryNotInitialized();
  }

  if (pOutValue == nullptr) {
    return ResultInvalidPointer();
  }

  const char* serverCert = buffer != nullptr ? buffer : m_pServerCertBuffer;
  if (serverCert == nullptr) {
    *pOutValue = m_ServerCertCount;
    return Result{};
  }

  auto header = reinterpret_cast<const ServerCertChainHeader*>(serverCert);
  if (header->magic != ServerCertChainMagic) {
    return ResultInvalidServerCertBuffer();
  }

  *pOutValue = header->count;
  return Result{};
}

Result Connection::GetServerCertSize(uint32_t* pOutValue) const {
  if (!detail::ServiceSession::IsInitialized()) {
    return ResultLibraryNotInitialized();
  }

  if (pOutValue == nullptr) {
    return ResultInvalidPointer();
  }

  *pOutValue = m_ServerCertSize;
  return Result{};
}

int Connection::Read(char* buffer, uint32_t bufferSize) {
  if (!detail::ServiceSession::IsInitialized()) {
    m_LastResult = ResultLibraryNotInitialized();
    return -1;
  }

  if (buffer == nullptr) {
    m_LastResult = ResultInvalidPointer();
    return -1;
  }

  if (bufferSize == 0) {
    m_LastResult = ResultBufferTooShort();
    return -1;
  }

  detail::ConnectionSession* pSession = GetSession(m_ConnectionId);
  if (pSession == nullptr || pSession->Get() == nullptr) {
    m_LastResult = ResultInvalidReference();
    return -1;
  }

  uint32_t readSize = 0;
  Result result = (*pSession)->Read(nn::sf::Out<uint32_t>(&readSize),
    nn::sf::OutBuffer(buffer, bufferSize));
  m_LastResult = result;
  if (result.IsFailure()) {
    return -1;
  }

  return readSize;
}

Result Connection::Read(char* buffer, int* pOutReadSize,
  uint32_t bufferSize) {
  Result result;
  if (!detail::ServiceSession::IsInitialized()) {
    result = ResultLibraryNotInitialized();
  }
  else if (buffer == nullptr || pOutReadSize == nullptr) {
    result = ResultInvalidPointer();
  }
  else if (bufferSize == 0) {
    result = ResultBufferTooShort();
  }
  else {
    detail::ConnectionSession* pSession = GetSession(m_ConnectionId);
    if (pSession == nullptr || pSession->Get() == nullptr) {
      result = ResultInvalidReference();
    }
    else {
      uint32_t readSize = 0;
      result = (*pSession)->Read(nn::sf::Out<uint32_t>(&readSize),
        nn::sf::OutBuffer(buffer, bufferSize));
      *pOutReadSize = result.IsSuccess() ? static_cast<int>(readSize) : -1;
    }
  }

  m_LastResult = result;
  return result;
}

int Connection::Write(const char* buffer, uint32_t bufferSize) {
  if (!detail::ServiceSession::IsInitialized()) {
    m_LastResult = ResultLibraryNotInitialized();
    return -1;
  }

  if (buffer == nullptr) {
    m_LastResult = ResultInvalidPointer();
    return -1;
  }

  if (bufferSize == 0) {
    m_LastResult = ResultBufferTooShort();
    return -1;
  }

  detail::ConnectionSession* pSession = GetSession(m_ConnectionId);
  if (pSession == nullptr || pSession->Get() == nullptr) {
    m_LastResult = ResultInvalidReference();
    return -1;
  }

  uint32_t writtenSize = 0;
  Result result = (*pSession)->Write(nn::sf::Out<uint32_t>(&writtenSize),
    nn::sf::InBuffer(buffer, bufferSize));
  m_LastResult = result;
  if (result.IsFailure()) {
    return -1;
  }

  return writtenSize;
}

Result Connection::Write(const char* buffer, int* pOutWrittenSize,
  uint32_t bufferSize) {
  Result result;
  if (!detail::ServiceSession::IsInitialized()) {
    result = ResultLibraryNotInitialized();
  }
  else if (buffer == nullptr || pOutWrittenSize == nullptr) {
    result = ResultInvalidPointer();
  }
  else if (bufferSize == 0) {
    result = ResultBufferTooShort();
  }
  else {
    detail::ConnectionSession* pSession = GetSession(m_ConnectionId);
    if (pSession == nullptr || pSession->Get() == nullptr) {
      result = ResultInvalidReference();
    }
    else {
      uint32_t writtenSize = 0;
      result = (*pSession)->Write(nn::sf::Out<uint32_t>(&writtenSize),
        nn::sf::InBuffer(buffer, bufferSize));
      *pOutWrittenSize =
        result.IsSuccess() ? static_cast<int>(writtenSize) : -1;
    }
  }

  m_LastResult = result;
  return result;
}

int Connection::Pending() {
  if (!detail::ServiceSession::IsInitialized()) {
    m_LastResult = ResultLibraryNotInitialized();
    return -1;
  }

  detail::ConnectionSession* pSession = GetSession(m_ConnectionId);
  if (pSession == nullptr || pSession->Get() == nullptr) {
    m_LastResult = ResultInvalidReference();
    return -1;
  }

  int pending = 0;
  Result result = (*pSession)->Pending(nn::sf::Out<int>(&pending));
  m_LastResult = result;
  if (result.IsFailure()) {
    return -1;
  }

  return pending;
}

Result Connection::Pending(int* pOutValue) {
  if (!detail::ServiceSession::IsInitialized()) {
    m_LastResult = ResultLibraryNotInitialized();
    return ResultLibraryNotInitialized();
  }

  detail::ConnectionSession* pSession = GetSession(m_ConnectionId);
  if (pSession == nullptr || pSession->Get() == nullptr) {
    m_LastResult = ResultInvalidReference();
    return ResultInvalidReference();
  }

  if (pOutValue == nullptr) {
    m_LastResult = ResultInvalidPointer();
    return ResultInvalidPointer();
  }

  Result result = (*pSession)->Pending(nn::sf::Out<int>(pOutValue));
  m_LastResult = result;
  return result;
}

Result Connection::Peek(char* buffer, int* pOutReadSize,
  uint32_t bufferSize) {
  Result result;
  if (!detail::ServiceSession::IsInitialized()) {
    result = ResultLibraryNotInitialized();
  }
  else if (buffer == nullptr || pOutReadSize == nullptr) {
    result = ResultInvalidPointer();
  }
  else if (bufferSize == 0) {
    result = ResultBufferTooShort();
  }
  else {
    detail::ConnectionSession* pSession = GetSession(m_ConnectionId);
    if (pSession == nullptr || pSession->Get() == nullptr) {
      result = ResultInvalidReference();
    }
    else {
      uint32_t readSize = 0;
      result = (*pSession)->Peek(nn::sf::Out<uint32_t>(&readSize),
        nn::sf::OutBuffer(buffer, bufferSize));
      if (result.IsSuccess()) {
        *pOutReadSize = readSize;
      }
    }
  }

  m_LastResult = result;
  return result;
}

Result Connection::Poll(PollEvent* pOutEvent, PollEvent* pInEvent,
  uint32_t timeout) {
  if (!detail::ServiceSession::IsInitialized()) {
    return ResultLibraryNotInitialized();
  }

  if (pOutEvent == nullptr || pInEvent == nullptr) {
    return ResultInvalidPointer();
  }

  detail::ConnectionSession* pSession = GetSession(m_ConnectionId);
  if (pSession == nullptr || pSession->Get() == nullptr) {
    return ResultInvalidReference();
  }

  PollEvent event = {};
  Result result = (*pSession)->Poll(nn::sf::Out<PollEvent>(&event),
    *pInEvent, timeout);
  if (result.IsSuccess()) {
    *pOutEvent = event;
  }

  return result;
}

Result Connection::GetLastError(Result* pOutValue) {
  if (!detail::ServiceSession::IsInitialized()) {
    return ResultLibraryNotInitialized();
  }

  if (pOutValue == nullptr) {
    return ResultInvalidPointer();
  }

  *pOutValue = m_LastResult;
  m_LastResult = Result{};
  return Result{};
}

Result Connection::GetVerifyCertError(Result* pOutValue) {
  if (!detail::ServiceSession::IsInitialized()) {
    return ResultLibraryNotInitialized();
  }

  detail::ConnectionSession* pSession = GetSession(m_ConnectionId);
  if (pSession == nullptr || pSession->Get() == nullptr) {
    return ResultInvalidReference();
  }

  if (pOutValue == nullptr) {
    return ResultInvalidPointer();
  }

  *pOutValue = (*pSession)->GetVerifyCertError();
  return Result{};
}

Result Connection::GetVerifyCertErrors(Result* pOutResults,
  uint32_t* pOutCount, uint32_t* pOutTotalCount, uint32_t count) {
  if (!detail::ServiceSession::IsInitialized()) {
    return ResultLibraryNotInitialized();
  }

  detail::ConnectionSession* pSession = GetSession(m_ConnectionId);
  if (pSession == nullptr || pSession->Get() == nullptr) {
    return ResultInvalidReference();
  }

  if (pOutResults == nullptr || pOutCount == nullptr) {
    return ResultInvalidPointer();
  }

  uint32_t totalCount = 0;
  Result result = (*pSession)->GetVerifyCertErrors(
    nn::sf::OutBuffer(pOutResults, count * sizeof(Result)),
    nn::sf::Out<uint32_t>(pOutCount), nn::sf::Out<uint32_t>(&totalCount));
  if (pOutTotalCount != nullptr) {
    *pOutTotalCount = result.IsSuccess() ? totalCount : 0;
  }

  if (result.IsFailure()) {
    return result;
  }

  if (totalCount != *pOutCount) {
    return ResultBufferTooShort();
  }

  return Result{};
}

Result Connection::GetNeededServerCertBufferSize(uint32_t* pOutValue) {
  if (!detail::ServiceSession::IsInitialized()) {
    return ResultLibraryNotInitialized();
  }

  detail::ConnectionSession* pSession = GetSession(m_ConnectionId);
  if (pSession == nullptr || pSession->Get() == nullptr) {
    return ResultInvalidReference();
  }

  if (pOutValue == nullptr) {
    return ResultInvalidPointer();
  }

  return (*pSession)->GetNeededServerCertBufferSize(
    nn::sf::Out<uint32_t>(pOutValue));
}

Result Connection::GetContextId(uint64_t* pOutValue) {
  if (pOutValue == nullptr) {
    return ResultInvalidPointer();
  }

  *pOutValue = m_ContextId;
  return Result{};
}

Result Connection::GetConnectionId(uint64_t* pOutValue) {
  if (pOutValue == nullptr) {
    return ResultInvalidPointer();
  }

  *pOutValue = m_ConnectionId;
  return Result{};
}

Result Connection::SetOption(OptionType option, bool enable) {
  if (!detail::ServiceSession::IsInitialized()) {
    return ResultLibraryNotInitialized();
  }

  detail::ConnectionSession* pSession = GetSession(m_ConnectionId);
  if (pSession == nullptr || pSession->Get() == nullptr) {
    return ResultInvalidReference();
  }

  return (*pSession)->SetOption(option, enable);
}

Result Connection::GetOption(bool* pOutValue, OptionType option) {
  if (!detail::ServiceSession::IsInitialized()) {
    return ResultLibraryNotInitialized();
  }

  if (pOutValue == nullptr) {
    return ResultInvalidPointer();
  }

  detail::ConnectionSession* pSession = GetSession(m_ConnectionId);
  if (pSession == nullptr || pSession->Get() == nullptr) {
    return ResultInvalidReference();
  }

  return (*pSession)->GetOption(nn::sf::Out<bool>(pOutValue), option);
}

Connection::CipherInfo::CipherInfo() : name(), version() {}

Result Connection::GetCipherInfo(CipherInfo* pOutValue) {
  Result result;
  if (!detail::ServiceSession::IsInitialized()) {
    result = ResultLibraryNotInitialized();
    if (pOutValue == nullptr) {
      return result;
    }
  }
  else {
    if (pOutValue == nullptr) {
      return ResultInvalidPointer();
    }

    detail::ConnectionSession* pSession = GetSession(m_ConnectionId);
    if (pSession == nullptr || pSession->Get() == nullptr) {
      result = ResultInvalidReference();
    }
    else {
      result = (*pSession)->GetCipherInfo(1,
        nn::sf::OutBuffer(pOutValue, sizeof(CipherInfo)));
    }
  }

  if (result.IsFailure()) {
    pOutValue->name[0] = '\0';
    pOutValue->version[0] = '\0';
  }

  return result;
}

Result Connection::SetNextAlpnProto(const uint8_t* protocols,
  uint32_t protocolsSize) {
  if (!detail::ServiceSession::IsInitialized()) {
    return ResultLibraryNotInitialized();
  }

  if (protocols == nullptr) {
    return ResultInvalidPointer();
  }

  if (protocolsSize == 0) {
    return ResultInvalidArgument();
  }

  detail::ConnectionSession* pSession = GetSession(m_ConnectionId);
  if (pSession == nullptr || pSession->Get() == nullptr) {
    return ResultInvalidReference();
  }

  return (*pSession)->SetNextAlpnProto(
    nn::sf::InBuffer(protocols, protocolsSize));
}

Result Connection::GetNextAlpnProto(AlpnProtoState* pOutState,
  uint8_t* pOutProtocol, uint32_t* pOutProtocolSize, uint32_t bufferSize) {
  if (!detail::ServiceSession::IsInitialized()) {
    return ResultLibraryNotInitialized();
  }

  if (pOutState == nullptr || pOutProtocol == nullptr ||
    pOutProtocolSize == nullptr) {
    return ResultInvalidPointer();
  }

  if (bufferSize == 0) {
    return ResultInvalidArgument();
  }

  detail::ConnectionSession* pSession = GetSession(m_ConnectionId);
  if (pSession == nullptr || pSession->Get() == nullptr) {
    return ResultInvalidReference();
  }

  AlpnProtoState state = {};
  Result result = (*pSession)->GetNextAlpnProto(
    nn::sf::Out<AlpnProtoState>(&state),
    nn::sf::OutBuffer(pOutProtocol, bufferSize),
    nn::sf::Out<uint32_t>(pOutProtocolSize));
  if (result.IsFailure()) {
    *pOutState = AlpnProtoState{};
    *pOutProtocol = 0;
    *pOutProtocolSize = 0;
  }
  else {
    *pOutState = state;
  }

  return result;
}

}
