#include "nn/socket/detail/socket_api.hpp"
#include "nn/socket/resolver/resolver_client.hpp"

namespace nn::socket::detail {

HostEnt* GetHostEntByName(const char* name, const ResolverOption* options,
  size_t optionCount) {
  return resolver::GetHostEntByName(name, options, optionCount);
}

hostent* GetHostByName(const char* name, const ResolverOption* options,
  size_t optionCount) {
  return resolver::GetHostByName(name, options, optionCount);
}

HostEnt* GetHostEntByAddr(const void* address, uint32_t length,
  Family family, const ResolverOption* options, size_t optionCount) {
  return resolver::GetHostEntByAddr(address, length, family, options,
    optionCount);
}

hostent* GetHostByAddr(const void* address, uint32_t length, int family,
  const ResolverOption* options, size_t optionCount) {
  return resolver::GetHostByAddr(address, length, family, options,
    optionCount);
}

const char* HStrError(HErrno error) {
  return resolver::GetHostStringError(static_cast<uint32_t>(error));
}

const char* HStrError(int error) {
  return resolver::GetHostStringError(error);
}

const char* GAIStrError(AiErrno error) {
  return resolver::GetGaiStringError(static_cast<uint32_t>(error));
}

const char* GAIStrError(int error) {
  return resolver::GetGaiStringError(error);
}

int ResolverGetOption(ResolverOption* pOutOption, uint32_t key) {
  return resolver::ResolverGetOption(pOutOption,
    static_cast<ResolverOptionKey>(key));
}

int ResolverSetOption(const ResolverOption& option) {
  return resolver::ResolverSetOption(option);
}

int SetSupportedProtocols(uint32_t protocols) {
  return resolver::SetSupportedProtocols(protocols);
}

int GetSupportedProtocols(uint32_t* pOutProtocols) {
  return resolver::GetSupportedProtocols(pOutProtocols);
}

int ResolverSetDnsAddresses(const DnsAddress* addresses, uint32_t count) {
  return resolver::ResolverSetDnsAddressesRequest(addresses, count);
}

AiErrno GetAddrInfo(const char* node, const char* service,
  const AddrInfo* hints, AddrInfo** pOutResult,
  const ResolverOption* options, size_t optionCount) {
  return resolver::GetAddrInfo(node, service, hints, pOutResult, options,
    optionCount);
}

int GetAddrInfo(const char* node, const char* service, const addrinfo* hints,
  addrinfo** pOutResult, const ResolverOption* options, size_t optionCount) {
  return resolver::GetAddrInfo(node, service, hints, pOutResult, options,
    optionCount);
}

AiErrno GetNameInfo(const SockAddr* address, uint32_t addressLength,
  char* host, size_t hostLength, char* service, size_t serviceLength,
  NameInfoFlag flags, const ResolverOption* options, size_t optionCount) {
  return resolver::GetNameInfo(address, addressLength, host, hostLength,
    service, serviceLength, flags, options, optionCount);
}

int GetNameInfo(const sockaddr* address, uint32_t addressLength, char* host,
  uint32_t hostLength, char* service, uint32_t serviceLength, int flags,
  const ResolverOption* options, size_t optionCount) {
  return resolver::GetNameInfo(address, addressLength, host, hostLength,
    service, serviceLength, flags, options, optionCount);
}

void FreeAddrInfo(AddrInfo* addressInfo) {
  FreeCopiedAddrInfo(addressInfo);
}

HErrno GetHError() {
  return resolver::GetHError();
}

int GetHErrno() {
  return static_cast<int>(resolver::GetHError());
}

}
