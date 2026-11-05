#pragma once

#include <stdint.h>

#include "nn/lmem/exp_heap.hpp"
#include "nn/lmem/exp_heap_inspection.hpp"
#include "nn/os/mutex.hpp"
#include "nn/result.hpp"
#include "nn/sf/sf_buffers.hpp"
#include "nn/sf/shared_pointer.hpp"
#include "nn/ssl/ssl_types.hpp"

namespace nn::ssl::sf {

class ISslConnection : public nn::sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result SetSocketDescriptor(int socket,
    nn::sf::Out<int> pOutSocket) = 0;
  virtual Result SetHostName(const nn::sf::InBuffer& hostName) = 0;
  virtual Result SetVerifyOption(Connection::VerifyOption option) = 0;
  virtual Result SetIoMode(Connection::IoMode mode) = 0;
  virtual Result GetSocketDescriptor(nn::sf::Out<int> pOutValue) = 0;
  virtual Result GetHostName(const nn::sf::OutBuffer& hostName,
    nn::sf::Out<uint32_t> pOutSize) = 0;
  virtual Result GetVerifyOption(
    nn::sf::Out<Connection::VerifyOption> pOutValue) = 0;
  virtual Result GetIoMode(nn::sf::Out<Connection::IoMode> pOutValue) = 0;
  virtual Result DoHandshake() = 0;
  virtual Result DoHandshakeGetServerCert(
    nn::sf::Out<uint32_t> pOutServerCertSize,
    nn::sf::Out<uint32_t> pOutServerCertCount,
    const nn::sf::OutBuffer& serverCert) = 0;
  virtual Result Read(nn::sf::Out<uint32_t> pOutReadSize,
    const nn::sf::OutBuffer& buffer) = 0;
  virtual Result Write(nn::sf::Out<uint32_t> pOutWrittenSize,
    const nn::sf::InBuffer& buffer) = 0;
  virtual Result Pending(nn::sf::Out<int> pOutValue) = 0;
  virtual Result Peek(nn::sf::Out<uint32_t> pOutReadSize,
    const nn::sf::OutBuffer& buffer) = 0;
  virtual Result Poll(nn::sf::Out<Connection::PollEvent> pOutEvent,
    Connection::PollEvent event, uint32_t timeout) = 0;
  virtual Result GetVerifyCertError() = 0;
  virtual Result GetNeededServerCertBufferSize(
    nn::sf::Out<uint32_t> pOutValue) = 0;
  virtual Result SetSessionCacheMode(Connection::SessionCacheMode mode) = 0;
  virtual Result GetSessionCacheMode(
    nn::sf::Out<Connection::SessionCacheMode> pOutValue) = 0;
  virtual Result FlushSessionCache() = 0;
  virtual Result SetRenegotiationMode(Connection::RenegotiationMode mode) = 0;
  virtual Result GetRenegotiationMode(
    nn::sf::Out<Connection::RenegotiationMode> pOutValue) = 0;
  virtual Result SetOption(Connection::OptionType option, bool enable) = 0;
  virtual Result GetOption(nn::sf::Out<bool> pOutValue,
    Connection::OptionType option) = 0;
  virtual Result GetVerifyCertErrors(const nn::sf::OutBuffer& results,
    nn::sf::Out<uint32_t> pOutCount, nn::sf::Out<uint32_t> pOutTotal) = 0;
  virtual Result GetCipherInfo(uint32_t version,
    const nn::sf::OutBuffer& cipherInfo) = 0;
  virtual Result SetNextAlpnProto(const nn::sf::InBuffer& protocols) = 0;
  virtual Result GetNextAlpnProto(
    nn::sf::Out<Connection::AlpnProtoState> pOutState,
    const nn::sf::OutBuffer& protocol, nn::sf::Out<uint32_t> pOutSize) = 0;
  virtual Result SetDtlsSocketDescriptor(int socket,
    nn::sf::Out<int> pOutSocket, const nn::sf::InBuffer& address) = 0;
  virtual Result GetDtlsHandshakeTimeout(const nn::sf::OutBuffer& timeout) = 0;
  virtual Result SetPrivateOption(ConnectionPrivate::PrivateOptionType option,
    uint32_t value) = 0;
  virtual Result SetSrtpCiphers(const nn::sf::InBuffer& ciphers) = 0;
  virtual Result GetSrtpCipher(nn::sf::Out<uint16_t> pOutValue) = 0;
  virtual Result ExportKeyingMaterial(const nn::sf::OutBuffer& material,
    const nn::sf::InBuffer& label, const nn::sf::InBuffer& context) = 0;
  virtual Result SetIoTimeout(uint32_t timeout) = 0;
  virtual Result GetIoTimeout(nn::sf::Out<uint32_t> pOutValue) = 0;
  virtual Result GetSessionTicket(const nn::sf::OutBuffer& ticket,
    nn::sf::Out<uint32_t> pOutSize) = 0;
  virtual Result SetSessionTicket(const nn::sf::InBuffer& ticket) = 0;
};

class ISslContext : public nn::sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result SetOption(Context::ContextOption option, int value) = 0;
  virtual Result GetOption(nn::sf::Out<int> pOutValue,
    Context::ContextOption option) = 0;
  virtual Result CreateConnection(
    const nn::sf::Out<nn::sf::SharedPointer<ISslConnection>>& pOut) = 0;
  virtual Result GetConnectionCount(nn::sf::Out<uint32_t> pOutValue) = 0;
  virtual Result ImportServerPki(nn::sf::Out<uint64_t> pOutId,
    const nn::sf::InBuffer& certificate, CertificateFormat format) = 0;
  virtual Result ImportClientPki(nn::sf::Out<uint64_t> pOutId,
    const nn::sf::InBuffer& p12, const nn::sf::InBuffer& password) = 0;
  virtual Result RemoveServerPki(uint64_t id) = 0;
  virtual Result RemoveClientPki(uint64_t id) = 0;
  virtual Result RegisterInternalPki(nn::sf::Out<uint64_t> pOutId,
    Context::InternalPki pki) = 0;
  virtual Result AddPolicyOid(const nn::sf::InBuffer& oid) = 0;
  virtual Result ImportCrl(nn::sf::Out<uint64_t> pOutId,
    const nn::sf::InBuffer& crl) = 0;
  virtual Result RemoveCrl(uint64_t id) = 0;
  virtual Result ImportClientCertKeyPki(nn::sf::Out<uint64_t> pOutId,
    const nn::sf::InBuffer& certificate, const nn::sf::InBuffer& key,
    CertificateFormat format) = 0;
  virtual Result GeneratePrivateKeyAndCert(
    const nn::sf::OutBuffer& certificate, nn::sf::Out<uint32_t> pOutCertSize,
    const nn::sf::OutBuffer& key, nn::sf::Out<uint32_t> pOutKeySize,
    bool needsKeyAndCert, const nn::sf::InBuffer& params) = 0;
  virtual Result CreateConnectionEx(
    const nn::sf::Out<nn::sf::SharedPointer<ISslConnection>>& pOut) = 0;
};

class ISslService : public nn::sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result CreateContext(
    const nn::sf::Out<nn::sf::SharedPointer<ISslContext>>& pOut,
    Context::SslVersion version, uint64_t processId) = 0;
  virtual Result GetContextCount(nn::sf::Out<uint32_t> pOutValue) = 0;
  virtual Result GetCertificates(const nn::sf::OutBuffer& certificates,
    nn::sf::Out<uint32_t> pOutCount, const nn::sf::InBuffer& ids) = 0;
  virtual Result GetCertificateBufSize(nn::sf::Out<uint32_t> pOutSize,
    const nn::sf::InBuffer& ids) = 0;
  virtual Result DebugIoctl(const nn::sf::OutBuffer& output,
    const nn::sf::InBuffer& input, Debug::IoctlCommand command) = 0;
  virtual Result SetInterfaceVersion(uint32_t version) = 0;
  virtual Result FlushSessionCache(nn::sf::Out<uint32_t> pOutCount,
    const nn::sf::InBuffer& hostName,
    FlushSessionCacheOptionType option) = 0;
  virtual Result SetDebugOption(DebugOption option,
    const nn::sf::InBuffer& value) = 0;
  virtual Result GetDebugOption(const nn::sf::OutBuffer& value,
    DebugOption option) = 0;
  virtual Result ClearTls12FallbackFlag() = 0;
  virtual Result GetCertificate(const nn::sf::OutBuffer& info,
    const nn::sf::OutBuffer& certificates, uint32_t index) = 0;
  virtual Result GetCertificateCount(nn::sf::Out<uint32_t> pOutValue) = 0;
};

class ISslServiceForSystem : public ISslService {
 public:
  virtual Result CreateContextForSystem(
    const nn::sf::Out<nn::sf::SharedPointer<ISslContext>>& pOut,
    Context::SslVersion version, uint64_t processId) = 0;
  virtual Result SetThreadCoreMask(uint64_t mask) = 0;
  virtual Result GetThreadCoreMask(nn::sf::Out<uint64_t> pOutValue) = 0;
  virtual Result VerifySignature(PaddingMode mode,
    const nn::sf::InBuffer& data, const nn::sf::InBuffer& signature,
    const nn::sf::InBuffer& key) = 0;
};

}

namespace nn::ssl::detail {

using ConnectionSession = nn::sf::SharedPointer<sf::ISslConnection>;
using ContextSession = nn::sf::SharedPointer<sf::ISslContext>;

// Object ids are pointers to heap allocated sessions, stored with their four
// 16 bit words in reverse order.
inline uint64_t SwapHalves(uint64_t value) {
  return ((value >> 16) & 0xffff0000) | (value >> 48) |
    (((value >> 16) & 0xffff) << 32) | (value << 48);
}

template <typename T>
T* GetSessionFromId(uint64_t id) {
  return reinterpret_cast<T*>(SwapHalves(id));
}

template <typename T>
uint64_t GetIdFromSession(T* pSession) {
  return SwapHalves(reinterpret_cast<uint64_t>(pSession));
}

class ISslServiceFactoryBase {
 public:
  virtual Result CreateISslService(
    nn::sf::SharedPointer<sf::ISslService>* pOut) = 0;
  virtual Result CreateISslServiceForSystem(
    nn::sf::SharedPointer<sf::ISslServiceForSystem>* pOut) = 0;
};

class ISslServiceFactory : public ISslServiceFactoryBase {
 public:
  static Result Initialize(uint32_t concurrencyLimit, bool isSystem);
  static Result Finalize();

  Result CreateISslService(
    nn::sf::SharedPointer<sf::ISslService>* pOut) override;
  Result CreateISslServiceForSystem(
    nn::sf::SharedPointer<sf::ISslServiceForSystem>* pOut) override;
};

class ServiceSession {
 public:
  enum class Privilege : uint8_t {
    User = 0,
    System = 1,
    SystemOrUser = 2,
  };

  static Result Initialize(uint32_t concurrencyLimit, Privilege privilege);
  static Result Finalize();
  static bool IsInitialized();
  static nn::sf::SharedPointer<sf::ISslService>* GetServiceSession();
  static bool IsInitializedForSystem();
  static nn::sf::SharedPointer<sf::ISslServiceForSystem>*
  GetServiceSessionForSystem();

  static nn::sf::SharedPointer<sf::ISslService> g_ServiceSession;
  static nn::sf::SharedPointer<sf::ISslServiceForSystem>
    g_SystemServiceSession;
};

class SslMemoryManager {
 public:
  struct SfAllocator {
    lmem::detail::HeapHead* pHeap;
    os::MutexType mutex;
  };

  static Result Initialize(char* heap, size_t heapSize);
  static void Finalize();
  static void* AllocateChunk(size_t size, uint64_t id);
  static void Free(void* pointer, uint64_t id);
  static size_t GetTotalFreeSize();
  static SfAllocator* GetSfAllocator();

  static lmem::detail::HeapHead* g_Heap;
  static size_t g_HeapStartFreeSize;
  static SfAllocator g_SfAllocator;
  static char* g_pHeapHead;
  static size_t g_HeapSize;
};

}
