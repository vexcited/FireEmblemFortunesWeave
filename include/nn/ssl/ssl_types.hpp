#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/os/time.hpp"
#include "nn/result.hpp"

namespace nn::socket {

struct SockAddr;

}

namespace nn::ssl {

enum class SslServiceVersionType : uint32_t {};
enum class PaddingMode : uint32_t {};
enum class DebugOption : uint32_t {};
enum class CertificateFormat : uint32_t {};
enum class CaCertificateId : uint32_t {};

enum class FlushSessionCacheOptionType : uint32_t {
  SingleHost = 0,
  AllHosts = 1,
};

struct BuiltInCertificateInfoBase {
  CaCertificateId certificateId;
  uint32_t status;
  uint64_t certificateSize;
  const uint8_t* pCertificate;
};

class BuiltInManager {
 public:
  static Result GetBuiltInCertificates(
    BuiltInCertificateInfoBase** ppOutInfos, uint8_t* buffer,
    uint32_t bufferSize, CaCertificateId* ids, uint32_t idCount);
  static Result GetBuiltInCertificateBufSize(uint32_t* pOutSize,
    CaCertificateId* ids, uint32_t idCount);
};

class Context {
 public:
  enum class SslVersion : uint32_t {};
  enum class ContextOption : uint32_t {};
  enum class InternalPki : uint32_t {};

  Context();
  ~Context();

  Result Create(SslVersion version);
  Result Destroy();
  Result SetOption(ContextOption option, int value);
  Result GetOption(int* pOutValue, ContextOption option);
  Result GetContextId(uint64_t* pOutValue);
  Result ImportServerPki(uint64_t* pOutId, const char* certificate,
    uint32_t certificateSize, CertificateFormat format);
  Result ImportClientPki(uint64_t* pOutId, const char* p12,
    const char* password, uint32_t p12Size, uint32_t passwordSize);
  Result RemovePki(uint64_t id);
  Result RegisterInternalPki(uint64_t* pOutId, InternalPki pki);
  Result AddPolicyOid(const char* oid, uint32_t oidSize);
  Result ImportCrl(uint64_t* pOutId, const char* crl, uint32_t crlSize);

 protected:
  uint64_t m_ContextId;
};

class ContextPrivate : public Context {
 public:
  struct KeyAndCertParams {
    uint32_t keyType;
    uint32_t keySize;
    const char* pSubject;
    char commonName[64];
    uint32_t commonNameLength;

    KeyAndCertParams();
  };

  Result ImportClientPki(uint64_t* pOutId, const char* certificate,
    const char* key, uint32_t certificateSize, uint32_t keySize,
    CertificateFormat format);
  Result GeneratePrivateKeyAndCert(char* pOutCertificate,
    uint32_t* pOutCertificateSize, char* pOutKey, uint32_t* pOutKeySize,
    uint32_t certificateBufferSize, uint32_t keyBufferSize,
    const KeyAndCertParams& params);
};

class Connection {
 public:
  enum class VerifyOption : uint32_t {};
  enum class IoMode : uint32_t {};
  enum class SessionCacheMode : uint32_t {};
  enum class RenegotiationMode : uint32_t {};
  enum class PollEvent : uint32_t {};
  enum class OptionType : uint32_t {};
  enum class AlpnProtoState : uint32_t {};

  struct ServerCertDetail {
    uint32_t size;
    const char* pData;
  };

  struct CipherInfo {
    char name[64];
    char version[8];

    CipherInfo();
  };

  Connection();
  ~Connection();

  Result Create(Context* pContext);
  Result Destroy();
  Result SetSocketDescriptor(int socket);
  Result SetHostName(const char* hostName, uint32_t hostNameSize);
  Result SetVerifyOption(VerifyOption option);
  Result SetServerCertBuffer(char* buffer, uint32_t bufferSize);
  Result SetIoMode(IoMode mode);
  Result SetSessionCacheMode(SessionCacheMode mode);
  Result SetRenegotiationMode(RenegotiationMode mode);
  Result GetSocketDescriptor(int* pOutValue);
  Result GetHostName(char* pOutBuffer, uint32_t* pOutSize,
    uint32_t bufferSize);
  Result GetVerifyOption(VerifyOption* pOutValue);
  Result GetIoMode(IoMode* pOutValue);
  Result GetSessionCacheMode(SessionCacheMode* pOutValue);
  Result GetRenegotiationMode(RenegotiationMode* pOutValue);
  Result FlushSessionCache();
  Result DoHandshake();
  Result DoHandshake(uint32_t* pOutServerCertSize,
    uint32_t* pOutServerCertCount, char* buffer, uint32_t bufferSize);
  Result DoHandshake(uint32_t* pOutServerCertSize,
    uint32_t* pOutServerCertCount);
  Result GetServerCertDetail(ServerCertDetail* pOutValue, const char* buffer,
    uint32_t index) const;
  Result GetServerCertCount(uint32_t* pOutValue, const char* buffer) const;
  Result GetServerCertSize(uint32_t* pOutValue) const;
  int Read(char* buffer, uint32_t bufferSize);
  Result Read(char* buffer, int* pOutReadSize, uint32_t bufferSize);
  int Write(const char* buffer, uint32_t bufferSize);
  Result Write(const char* buffer, int* pOutWrittenSize, uint32_t bufferSize);
  int Pending();
  Result Pending(int* pOutValue);
  Result Peek(char* buffer, int* pOutReadSize, uint32_t bufferSize);
  Result Poll(PollEvent* pOutEvent, PollEvent* pInEvent, uint32_t timeout);
  Result GetLastError(Result* pOutValue);
  Result GetVerifyCertError(Result* pOutValue);
  Result GetVerifyCertErrors(Result* pOutResults, uint32_t* pOutCount,
    uint32_t* pOutTotalCount, uint32_t count);
  Result GetNeededServerCertBufferSize(uint32_t* pOutValue);
  Result GetContextId(uint64_t* pOutValue);
  Result GetConnectionId(uint64_t* pOutValue);
  Result SetOption(OptionType option, bool enable);
  Result GetOption(bool* pOutValue, OptionType option);
  Result GetCipherInfo(CipherInfo* pOutValue);
  Result SetNextAlpnProto(const uint8_t* protocols, uint32_t protocolsSize);
  Result GetNextAlpnProto(AlpnProtoState* pOutState, uint8_t* pOutProtocol,
    uint32_t* pOutProtocolSize, uint32_t bufferSize);

 protected:
  uint64_t m_ConnectionId;
  uint64_t m_ContextId;
  int m_SocketDescriptor;
  uint32_t m_ServerCertSize;
  uint32_t m_ServerCertCount;
  char* m_pServerCertBuffer;
  uint32_t m_ServerCertBufferSize;
  Result m_LastResult;
};

class ConnectionPrivate : public Connection {
 public:
  enum class PrivateOptionType : uint32_t {};

  Result SetDtlsSocketDescriptor(int socket, const socket::SockAddr* address,
    uint32_t addressLength);
  Result SetIoTimeout(uint32_t timeout);
  Result GetIoTimeout(uint32_t* pOutValue);
  Result GetDtlsHandshakeTimeout(TimeSpan* pOutValue);
  Result SetPrivateOption(PrivateOptionType option, uint32_t value);
  Result SetSrtpCiphers(const uint16_t* ciphers, uint32_t count);
  Result GetSrtpCipher(uint16_t* pOutValue);
  Result ExportKeyingMaterial(uint8_t* pOutBuffer, uint32_t bufferSize,
    const char* label, uint32_t labelSize, const uint8_t* context,
    uint32_t contextSize);
  Result GetSessionTicket(uint8_t* pOutBuffer, uint32_t* pOutSize,
    uint32_t bufferSize);
  Result SetSessionTicket(const uint8_t* ticket, uint32_t ticketSize);
  Result CreateEx(Context* pContext);
};

class Debug {
 public:
  enum class IoctlCommand : uint32_t {};

  struct Output {
    char* pBuffer;
    uint64_t bufferSize;
  };

  struct Input {
    char* pBuffer;
    uint64_t bufferSize;
  };

  struct HeapTrackPoint {
    char name[16];
    bool isStarted;

    HeapTrackPoint();
  };

  static Result Ioctl(Output* pOutput, Input* pInput, IoctlCommand command);
};

Result Initialize();
Result Initialize(uint32_t concurrencyLimit);
Result InitializeForSystem();
Result InitializeForSystem(uint32_t concurrencyLimit);
Result Finalize();
Result SetInterfaceVersion(SslServiceVersionType version);
Result SetThreadCoreMask(uint64_t mask);
Result GetThreadCoreMask(uint64_t* pOutValue);
Result VerifySignature(PaddingMode mode, const char* data, size_t dataSize,
  const char* signature, size_t signatureSize, const char* key,
  size_t keySize);
Result SetDebugOption(const void* value, uint32_t valueSize,
  DebugOption option);
Result GetDebugOption(void* pOutValue, uint32_t valueSize, DebugOption option);
Result FlushSessionCache(uint32_t* pOutCount, const char* hostName,
  uint32_t hostNameSize, FlushSessionCacheOptionType option);
Result ClearTls12FallbackFlag();
Result GetSslResultFromValue(Result* pOutValue, const char* value,
  uint32_t valueSize);

}
