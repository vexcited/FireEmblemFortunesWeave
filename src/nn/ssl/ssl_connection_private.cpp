#include <new>
#include <string.h>

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

constexpr uint32_t MinimumSockAddrLength = 16;

int ToNativeSocket(int socket) {
  NnmuslFileDescriptor descriptor = nnmuslLookupFileDescriptor(socket);
  return descriptor.type == NnmuslFileDescriptorType_Socket ?
    descriptor.native : -1;
}

detail::ConnectionSession* GetSession(uint64_t connectionId) {
  return detail::GetSessionFromId<detail::ConnectionSession>(connectionId);
}

}

Result ConnectionPrivate::SetDtlsSocketDescriptor(int socket,
  const socket::SockAddr* address, uint32_t addressLength) {
  if (!detail::ServiceSession::IsInitialized()) {
    return ResultLibraryNotInitialized();
  }

  // The first byte of a socket address is its length.
  if (socket == -1 || address == nullptr ||
    addressLength < MinimumSockAddrLength ||
    *reinterpret_cast<const uint8_t*>(address) < MinimumSockAddrLength) {
    return ResultInvalidArgument();
  }

  int nativeSocket = ToNativeSocket(socket);
  detail::ConnectionSession* pSession = GetSession(m_ConnectionId);
  if (pSession == nullptr || pSession->Get() == nullptr) {
    return ResultInvalidReference();
  }

  Result result = (*pSession)->SetDtlsSocketDescriptor(nativeSocket,
    nn::sf::Out<int>(&m_SocketDescriptor),
    nn::sf::InBuffer(address, addressLength));
  if (m_SocketDescriptor != -1) {
    m_SocketDescriptor = socket;
  }

  return result;
}

Result ConnectionPrivate::SetIoTimeout(uint32_t timeout) {
  if (!detail::ServiceSession::IsInitialized()) {
    return ResultLibraryNotInitialized();
  }

  detail::ConnectionSession* pSession = GetSession(m_ConnectionId);
  if (pSession == nullptr || pSession->Get() == nullptr) {
    return ResultInvalidReference();
  }

  return (*pSession)->SetIoTimeout(timeout);
}

Result ConnectionPrivate::GetIoTimeout(uint32_t* pOutValue) {
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
      result = (*pSession)->GetIoTimeout(nn::sf::Out<uint32_t>(pOutValue));
    }
  }

  if (result.IsFailure()) {
    *pOutValue = 0;
  }

  return result;
}

Result ConnectionPrivate::GetDtlsHandshakeTimeout(TimeSpan* pOutValue) {
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
      result = (*pSession)->GetDtlsHandshakeTimeout(
        nn::sf::OutBuffer(pOutValue, sizeof(TimeSpan)));
    }
  }

  if (result.IsFailure()) {
    *pOutValue = TimeSpan{};
  }

  return result;
}

Result ConnectionPrivate::SetPrivateOption(PrivateOptionType option,
  uint32_t value) {
  if (!detail::ServiceSession::IsInitialized()) {
    return ResultLibraryNotInitialized();
  }

  detail::ConnectionSession* pSession = GetSession(m_ConnectionId);
  if (pSession == nullptr || pSession->Get() == nullptr) {
    return ResultInvalidReference();
  }

  return (*pSession)->SetPrivateOption(option, value);
}

Result ConnectionPrivate::SetSrtpCiphers(const uint16_t* ciphers,
  uint32_t count) {
  if (!detail::ServiceSession::IsInitialized()) {
    return ResultLibraryNotInitialized();
  }

  if (ciphers == nullptr) {
    return ResultInvalidPointer();
  }

  if (count == 0) {
    return ResultInvalidArgument();
  }

  detail::ConnectionSession* pSession = GetSession(m_ConnectionId);
  if (pSession == nullptr || pSession->Get() == nullptr) {
    return ResultInvalidReference();
  }

  return (*pSession)->SetSrtpCiphers(
    nn::sf::InBuffer(ciphers, count * sizeof(uint16_t)));
}

Result ConnectionPrivate::GetSrtpCipher(uint16_t* pOutValue) {
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
    (*pSession)->GetSrtpCipher(nn::sf::Out<uint16_t>(pOutValue));
  if (result.IsFailure()) {
    *pOutValue = 0;
  }

  return result;
}

Result ConnectionPrivate::ExportKeyingMaterial(uint8_t* pOutBuffer,
  uint32_t bufferSize, const char* label, uint32_t labelSize,
  const uint8_t* context, uint32_t contextSize) {
  if (!detail::ServiceSession::IsInitialized()) {
    return ResultLibraryNotInitialized();
  }

  if (pOutBuffer == nullptr) {
    return ResultInvalidPointer();
  }

  if (bufferSize == 0) {
    return ResultInvalidArgument();
  }

  if (label == nullptr) {
    return ResultInvalidPointer();
  }

  if (labelSize == 0) {
    return ResultInvalidArgument();
  }

  if (strnlen(label, labelSize) != labelSize) {
    return ResultInvalidArgument();
  }

  if (context == nullptr && contextSize != 0) {
    return ResultInvalidPointer();
  }

  if (context != nullptr && contextSize == 0) {
    return ResultInvalidArgument();
  }

  detail::ConnectionSession* pSession = GetSession(m_ConnectionId);
  if (pSession == nullptr || pSession->Get() == nullptr) {
    return ResultInvalidReference();
  }

  return (*pSession)->ExportKeyingMaterial(
    nn::sf::OutBuffer(pOutBuffer, bufferSize),
    nn::sf::InBuffer(label, labelSize),
    nn::sf::InBuffer(context, contextSize));
}

Result ConnectionPrivate::GetSessionTicket(uint8_t* pOutBuffer,
  uint32_t* pOutSize, uint32_t bufferSize) {
  if (!detail::ServiceSession::IsInitialized()) {
    return ResultLibraryNotInitialized();
  }

  if (pOutSize == nullptr) {
    return ResultInvalidPointer();
  }

  detail::ConnectionSession* pSession = GetSession(m_ConnectionId);
  if (pSession == nullptr || pSession->Get() == nullptr) {
    return ResultInvalidReference();
  }

  return (*pSession)->GetSessionTicket(
    nn::sf::OutBuffer(pOutBuffer, pOutBuffer != nullptr ? bufferSize : 0),
    nn::sf::Out<uint32_t>(pOutSize));
}

Result ConnectionPrivate::SetSessionTicket(const uint8_t* ticket,
  uint32_t ticketSize) {
  if (!detail::ServiceSession::IsInitialized()) {
    return ResultLibraryNotInitialized();
  }

  if (ticket == nullptr) {
    return ResultInvalidPointer();
  }

  if (ticketSize == 0) {
    return ResultInvalidArgument();
  }

  detail::ConnectionSession* pSession = GetSession(m_ConnectionId);
  if (pSession == nullptr || pSession->Get() == nullptr) {
    return ResultInvalidReference();
  }

  return (*pSession)->SetSessionTicket(nn::sf::InBuffer(ticket, ticketSize));
}

Result ConnectionPrivate::CreateEx(Context* pContext) {
  if (!detail::ServiceSession::IsInitialized()) {
    return ResultLibraryNotInitialized();
  }

  if (!detail::ServiceSession::IsInitializedForSystem()) {
    return ResultNoSystemPrivilege();
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
  Result result = (*pContextSession)->CreateConnectionEx(
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

}
