#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/result.hpp"
#include "nn/sf/sf_buffers.hpp"
#include "nn/sf/shared_pointer.hpp"

namespace nn::socket::resolver {

#define NN_SOCKET_RESOLVER_RESERVED(index) virtual void Reserved##index() = 0

class IResolver : public ::nn::sf::IServiceObject {
 public:
  NN_SOCKET_RESOLVER_RESERVED(2); NN_SOCKET_RESOLVER_RESERVED(3);
  NN_SOCKET_RESOLVER_RESERVED(4); NN_SOCKET_RESOLVER_RESERVED(5);
  NN_SOCKET_RESOLVER_RESERVED(6); NN_SOCKET_RESOLVER_RESERVED(7);
  virtual Result GetHostStringErrorRequest(uint32_t error,
    const ::nn::sf::OutBuffer& string) = 0;
  virtual Result GetGaiStringErrorRequest(uint32_t error,
    const ::nn::sf::OutBuffer& string) = 0;
  NN_SOCKET_RESOLVER_RESERVED(10); NN_SOCKET_RESOLVER_RESERVED(11);
  NN_SOCKET_RESOLVER_RESERVED(12); NN_SOCKET_RESOLVER_RESERVED(13);
  virtual Result GetHostByNameRequestWithOptions(uint64_t processId,
    const ::nn::sf::InBuffer& name, const ::nn::sf::OutBuffer& hostEnt,
    ::nn::sf::Out<uint32_t> pOutSize, uint32_t cancelHandle,
    const ::nn::sf::InBuffer& options, uint64_t optionCount,
    ::nn::sf::Out<int> pOutHostError, ::nn::sf::Out<int> pOutErrno) = 0;
  virtual Result GetHostByAddrRequestWithOptions(uint64_t processId,
    const ::nn::sf::InBuffer& address, uint32_t length, uint32_t family,
    const ::nn::sf::OutBuffer& hostEnt, ::nn::sf::Out<uint32_t> pOutSize,
    uint32_t cancelHandle, const ::nn::sf::InBuffer& options, uint64_t optionCount,
    ::nn::sf::Out<int> pOutHostError, ::nn::sf::Out<int> pOutErrno) = 0;
  virtual Result GetAddrInfoRequestWithOptions(uint64_t processId,
    const ::nn::sf::InBuffer& node, const ::nn::sf::InBuffer& service,
    const ::nn::sf::InBuffer& hints, const ::nn::sf::OutBuffer& addrInfo,
    ::nn::sf::Out<uint32_t> pOutSize, ::nn::sf::Out<int> pOutAiError,
    uint32_t cancelHandle, const ::nn::sf::InBuffer& options, uint64_t optionCount,
    ::nn::sf::Out<int> pOutHostError, ::nn::sf::Out<int> pOutErrno) = 0;
  virtual Result GetNameInfoRequestWithOptions(uint64_t processId,
    const ::nn::sf::InBuffer& address, const ::nn::sf::OutBuffer& host,
    const ::nn::sf::OutBuffer& service, uint32_t flags, ::nn::sf::Out<int> pOutAiError,
    uint32_t cancelHandle, const ::nn::sf::InBuffer& options, uint64_t optionCount,
    ::nn::sf::Out<int> pOutHostError, ::nn::sf::Out<int> pOutErrno) = 0;
  virtual Result ResolverSetOptionRequest(uint64_t processId,
    uint32_t count, const ::nn::sf::InBuffer& option, ::nn::sf::Out<int> pOutResult,
    ::nn::sf::Out<int> pOutErrno) = 0;
  virtual Result ResolverGetOptionRequest(uint64_t processId,
    uint32_t count, uint32_t key, const ::nn::sf::InBuffer& option,
    const ::nn::sf::OutBuffer& value, ::nn::sf::Out<uint32_t> pOutSize,
    ::nn::sf::Out<int> pOutResult, ::nn::sf::Out<int> pOutErrno) = 0;
};

class IPrivateResolver : public ::nn::sf::IServiceObject {
 public:
  NN_SOCKET_RESOLVER_RESERVED(2); NN_SOCKET_RESOLVER_RESERVED(3);
  virtual Result SetSupportedProtocols(uint32_t protocols) = 0;
  virtual Result GetSupportedProtocols(::nn::sf::Out<uint32_t> pOutProtocols) = 0;
  virtual Result ResolverSetDnsAddressesRequest(
    const ::nn::sf::InBuffer& addresses, uint32_t count) = 0;
};

#undef NN_SOCKET_RESOLVER_RESERVED

Result CreateResolverByHipc(::nn::sf::SharedPointer<IResolver>& resolver);
Result CreatePrivateResolverByHipc(
  ::nn::sf::SharedPointer<IPrivateResolver>& resolver);
bool IncrementSocketIfNeeded();
void DecrementSocketAndSignalIfNeeded();
void RefCountHelperInitialize();
void RefCountHelperFinalize();
int CreateRandomId(int& id);

}
