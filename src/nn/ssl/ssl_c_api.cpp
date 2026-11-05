#include <new>

#include "nn/ssl/ssl_result.hpp"
#include "nn/ssl/ssl_types.hpp"

struct nnsslContext;
struct nnsslConnection;

using namespace nn::ssl;

namespace {

Context* ToContext(nnsslContext* pContext) {
  return reinterpret_cast<Context*>(pContext);
}

Connection* ToConnection(nnsslConnection* pConnection) {
  return reinterpret_cast<Connection*>(pConnection);
}

constexpr uint32_t InvalidPointer = ResultInvalidPointer().value;

}

extern "C" {

uint32_t nnsslInitialize() {
  return Initialize().GetInnerValueForDebug();
}

uint32_t nnsslInitializeWithConcurrencyLimit(uint32_t concurrencyLimit) {
  return Initialize(concurrencyLimit).GetInnerValueForDebug();
}

uint32_t nnsslFinalize() {
  return Finalize().GetInnerValueForDebug();
}

uint32_t nnsslContextCreate(nnsslContext* pContext,
  Context::SslVersion version) {
  if (pContext == nullptr) {
    return InvalidPointer;
  }

  Context* context = new (pContext) Context();
  return context->Create(version).GetInnerValueForDebug();
}

uint32_t nnsslContextDestroy(nnsslContext* pContext) {
  if (pContext == nullptr) {
    return InvalidPointer;
  }

  Context* context = ToContext(pContext);
  nn::Result result = context->Destroy();
  if (result.IsSuccess()) {
    context->~Context();
  }

  return result.GetInnerValueForDebug();
}

uint32_t nnsslContextGetContextId(nnsslContext* pContext,
  uint64_t* pOutValue) {
  if (pContext == nullptr || pOutValue == nullptr) {
    return InvalidPointer;
  }

  return ToContext(pContext)->GetContextId(pOutValue).GetInnerValueForDebug();
}

uint32_t nnsslConnectionCreate(nnsslConnection* pConnection,
  nnsslContext* pContext) {
  if (pConnection == nullptr || pContext == nullptr) {
    return InvalidPointer;
  }

  Connection* connection = new (pConnection) Connection();
  return connection->Create(ToContext(pContext)).GetInnerValueForDebug();
}

uint32_t nnsslConnectionDestroy(nnsslConnection* pConnection) {
  if (pConnection == nullptr) {
    return InvalidPointer;
  }

  Connection* connection = ToConnection(pConnection);
  nn::Result result = connection->Destroy();
  if (result.IsSuccess()) {
    connection->~Connection();
  }

  return result.GetInnerValueForDebug();
}

uint32_t nnsslConnectionSetSocketDescriptor(nnsslConnection* pConnection,
  int socket) {
  if (pConnection == nullptr) {
    return InvalidPointer;
  }

  return ToConnection(pConnection)->SetSocketDescriptor(socket)
    .GetInnerValueForDebug();
}

uint32_t nnsslConnectionSetHostName(nnsslConnection* pConnection,
  const char* hostName, uint32_t hostNameSize) {
  if (pConnection == nullptr) {
    return InvalidPointer;
  }

  return ToConnection(pConnection)->SetHostName(hostName, hostNameSize)
    .GetInnerValueForDebug();
}

uint32_t nnsslConnectionSetVerifyOption(nnsslConnection* pConnection,
  Connection::VerifyOption option) {
  if (pConnection == nullptr) {
    return InvalidPointer;
  }

  return ToConnection(pConnection)->SetVerifyOption(option)
    .GetInnerValueForDebug();
}

uint32_t nnsslConnectionSetServerCertBuffer(nnsslConnection* pConnection,
  char* buffer, uint32_t bufferSize) {
  if (pConnection == nullptr) {
    return InvalidPointer;
  }

  return ToConnection(pConnection)->SetServerCertBuffer(buffer, bufferSize)
    .GetInnerValueForDebug();
}

uint32_t nnsslConnectionSetIoMode(nnsslConnection* pConnection,
  Connection::IoMode mode) {
  if (pConnection == nullptr) {
    return InvalidPointer;
  }

  return ToConnection(pConnection)->SetIoMode(mode).GetInnerValueForDebug();
}

uint32_t nnsslConnectionSetSessionCacheMode(nnsslConnection* pConnection,
  Connection::SessionCacheMode mode) {
  if (pConnection == nullptr) {
    return InvalidPointer;
  }

  return ToConnection(pConnection)->SetSessionCacheMode(mode)
    .GetInnerValueForDebug();
}

uint32_t nnsslConnectionGetSocketDescriptor(nnsslConnection* pConnection,
  int* pOutValue) {
  if (pConnection == nullptr) {
    return InvalidPointer;
  }

  return ToConnection(pConnection)->GetSocketDescriptor(pOutValue)
    .GetInnerValueForDebug();
}

uint32_t nnsslConnectionGetHostName(nnsslConnection* pConnection,
  char* pOutBuffer, uint32_t* pOutSize, uint32_t bufferSize) {
  if (pConnection == nullptr) {
    return InvalidPointer;
  }

  return ToConnection(pConnection)->GetHostName(pOutBuffer, pOutSize,
    bufferSize).GetInnerValueForDebug();
}

uint32_t nnsslConnectionGetVerifyOption(nnsslConnection* pConnection,
  Connection::VerifyOption* pOutValue) {
  if (pConnection == nullptr) {
    return InvalidPointer;
  }

  return ToConnection(pConnection)->GetVerifyOption(pOutValue)
    .GetInnerValueForDebug();
}

uint32_t nnsslConnectionGetIoMode(nnsslConnection* pConnection,
  Connection::IoMode* pOutValue) {
  if (pConnection == nullptr) {
    return InvalidPointer;
  }

  return ToConnection(pConnection)->GetIoMode(pOutValue)
    .GetInnerValueForDebug();
}

uint32_t nnsslConnectionDoHandshake(nnsslConnection* pConnection) {
  if (pConnection == nullptr) {
    return InvalidPointer;
  }

  return ToConnection(pConnection)->DoHandshake().GetInnerValueForDebug();
}

uint32_t nnsslConnectionDoHandshakeWithCertBuffer(
  nnsslConnection* pConnection, uint32_t* pOutServerCertSize,
  uint32_t* pOutServerCertCount) {
  if (pConnection == nullptr) {
    return InvalidPointer;
  }

  return ToConnection(pConnection)->DoHandshake(pOutServerCertSize,
    pOutServerCertCount).GetInnerValueForDebug();
}

uint32_t nnsslConnectionDoHandshakeWithBuffer(nnsslConnection* pConnection,
  uint32_t* pOutServerCertSize, uint32_t* pOutServerCertCount, char* buffer,
  uint32_t bufferSize) {
  if (pConnection == nullptr) {
    return InvalidPointer;
  }

  return ToConnection(pConnection)->DoHandshake(pOutServerCertSize,
    pOutServerCertCount, buffer, bufferSize).GetInnerValueForDebug();
}

uint32_t nnsslConnectionGetServerCertDetail(nnsslConnection* pConnection,
  Connection::ServerCertDetail* pOutValue, const char* buffer,
  uint32_t index) {
  if (pConnection == nullptr || pOutValue == nullptr) {
    return InvalidPointer;
  }

  return ToConnection(pConnection)->GetServerCertDetail(pOutValue, buffer,
    index).GetInnerValueForDebug();
}

uint32_t nnsslConnectionGetServerCertCount(nnsslConnection* pConnection,
  const char* buffer, uint32_t* pOutValue) {
  if (buffer == nullptr || pConnection == nullptr || pOutValue == nullptr) {
    return InvalidPointer;
  }

  return ToConnection(pConnection)->GetServerCertCount(pOutValue, buffer)
    .GetInnerValueForDebug();
}

uint32_t nnsslConnectionGetServerCertSize(nnsslConnection* pConnection,
  uint32_t* pOutValue) {
  if (pConnection == nullptr || pOutValue == nullptr) {
    return InvalidPointer;
  }

  return ToConnection(pConnection)->GetServerCertSize(pOutValue)
    .GetInnerValueForDebug();
}

uint32_t nnsslConnectionRead(nnsslConnection* pConnection, char* buffer,
  int* pOutReadSize, uint32_t bufferSize) {
  if (pConnection == nullptr) {
    return InvalidPointer;
  }

  return ToConnection(pConnection)->Read(buffer, pOutReadSize, bufferSize)
    .GetInnerValueForDebug();
}

uint32_t nnsslConnectionWrite(nnsslConnection* pConnection,
  const char* buffer, int* pOutWrittenSize, uint32_t bufferSize) {
  if (pConnection == nullptr) {
    return InvalidPointer;
  }

  return ToConnection(pConnection)->Write(buffer, pOutWrittenSize,
    bufferSize).GetInnerValueForDebug();
}

uint32_t nnsslConnectionPending(nnsslConnection* pConnection,
  int* pOutValue) {
  if (pConnection == nullptr) {
    return InvalidPointer;
  }

  return ToConnection(pConnection)->Pending(pOutValue)
    .GetInnerValueForDebug();
}

uint32_t nnsslConnectionPeek(nnsslConnection* pConnection, char* buffer,
  int* pOutReadSize, uint32_t bufferSize) {
  if (pConnection == nullptr) {
    return InvalidPointer;
  }

  return ToConnection(pConnection)->Peek(buffer, pOutReadSize, bufferSize)
    .GetInnerValueForDebug();
}

uint32_t nnsslConnectionPoll(nnsslConnection* pConnection,
  Connection::PollEvent* pOutEvent, Connection::PollEvent* pInEvent,
  uint32_t timeout) {
  if (pConnection == nullptr) {
    return InvalidPointer;
  }

  return ToConnection(pConnection)->Poll(pOutEvent, pInEvent, timeout)
    .GetInnerValueForDebug();
}

uint32_t nnsslConnectionGetVerifyCertError(nnsslConnection* pConnection,
  nn::Result* pOutValue) {
  if (pConnection == nullptr) {
    return InvalidPointer;
  }

  return ToConnection(pConnection)->GetVerifyCertError(pOutValue)
    .GetInnerValueForDebug();
}

uint32_t nnsslConnectionGetContextId(nnsslConnection* pConnection,
  uint64_t* pOutValue) {
  if (pConnection == nullptr) {
    return InvalidPointer;
  }

  return ToConnection(pConnection)->GetContextId(pOutValue)
    .GetInnerValueForDebug();
}

uint32_t nnsslConnectionGetConnectionId(nnsslConnection* pConnection,
  uint64_t* pOutValue) {
  if (pConnection == nullptr) {
    return InvalidPointer;
  }

  return ToConnection(pConnection)->GetConnectionId(pOutValue)
    .GetInnerValueForDebug();
}

uint32_t nnsslConnectionSetOption(nnsslConnection* pConnection,
  Connection::OptionType option, bool enable) {
  if (pConnection == nullptr) {
    return InvalidPointer;
  }

  return ToConnection(pConnection)->SetOption(option, enable)
    .GetInnerValueForDebug();
}

uint32_t nnsslConnectionGetOption(nnsslConnection* pConnection,
  bool* pOutValue, Connection::OptionType option) {
  if (pConnection == nullptr) {
    return InvalidPointer;
  }

  return ToConnection(pConnection)->GetOption(pOutValue, option)
    .GetInnerValueForDebug();
}

uint32_t nnsslConnectionSetNextAlpnProto(nnsslConnection* pConnection,
  const uint8_t* protocols, uint32_t protocolsSize) {
  if (pConnection == nullptr) {
    return InvalidPointer;
  }

  return ToConnection(pConnection)->SetNextAlpnProto(protocols,
    protocolsSize).GetInnerValueForDebug();
}

uint32_t nnsslConnectionGetNextAlpnProto(nnsslConnection* pConnection,
  Connection::AlpnProtoState* pOutState, uint8_t* pOutProtocol,
  uint32_t* pOutProtocolSize, uint32_t bufferSize) {
  if (pConnection == nullptr) {
    return InvalidPointer;
  }

  return ToConnection(pConnection)->GetNextAlpnProto(pOutState, pOutProtocol,
    pOutProtocolSize, bufferSize).GetInnerValueForDebug();
}

uint32_t nnsslSetDebugOption(const void* value, uint32_t valueSize,
  DebugOption option) {
  return SetDebugOption(value, valueSize, option).GetInnerValueForDebug();
}

uint32_t nnsslGetDebugOption(void* pOutValue, uint32_t valueSize,
  DebugOption option) {
  return GetDebugOption(pOutValue, valueSize, option).GetInnerValueForDebug();
}

}
