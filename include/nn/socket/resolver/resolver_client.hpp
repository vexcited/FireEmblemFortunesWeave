#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/result.hpp"
#include "nn/socket/socket_types.hpp"

namespace nn::socket::resolver {

Result InitializeClient(uint32_t sessionCount);
Result FinalizeClient();
void EnableResolverCalls();
void DisableResolverCalls();
void WaitForAllResolverCallsToComplete();

const char* GetHostStringError(uint32_t error);
const char* GetGaiStringError(uint32_t error);
int ResolverGetOption(ResolverOption* pOutOption, ResolverOptionKey key);
int ResolverSetOption(const ResolverOption& option);
int SetSupportedProtocols(uint32_t protocols);
int GetSupportedProtocols(uint32_t* pOutProtocols);
int ResolverSetDnsAddressesRequest(const DnsAddress* addresses,
  uint32_t count);

HostEnt* GetHostEntByName(const char* name);
hostent* GetHostByName(const char* name);
HostEnt* GetHostEntByName(const char* name, const ResolverOption* options,
  size_t optionCount);
hostent* GetHostByName(const char* name, const ResolverOption* options,
  size_t optionCount);
HostEnt* GetHostEntByAddr(const void* address, uint32_t length,
  Family family);
hostent* GetHostByAddr(const void* address, uint32_t length,
  uint32_t family);
HostEnt* GetHostEntByAddr(const void* address, uint32_t length,
  Family family, const ResolverOption* options, size_t optionCount);
hostent* GetHostByAddr(const void* address, uint32_t length,
  uint32_t family, const ResolverOption* options, size_t optionCount);
AiErrno GetAddrInfo(const char* node, const char* service,
  const AddrInfo* hints, AddrInfo** pOutResult);
int GetAddrInfo(const char* node, const char* service, const addrinfo* hints,
  addrinfo** pOutResult);
AiErrno GetAddrInfo(const char* node, const char* service,
  const AddrInfo* hints, AddrInfo** pOutResult,
  const ResolverOption* options, size_t optionCount);
int GetAddrInfo(const char* node, const char* service, const addrinfo* hints,
  addrinfo** pOutResult, const ResolverOption* options, size_t optionCount);
AiErrno GetNameInfo(const SockAddr* address, uint32_t addressLength,
  char* host, size_t hostLength, char* service, size_t serviceLength,
  NameInfoFlag flags);
int GetNameInfo(const sockaddr* address, uint32_t addressLength, char* host,
  size_t hostLength, char* service, size_t serviceLength, int flags);
AiErrno GetNameInfo(const SockAddr* address, uint32_t addressLength,
  char* host, size_t hostLength, char* service, size_t serviceLength,
  NameInfoFlag flags, const ResolverOption* options, size_t optionCount);
int GetNameInfo(const sockaddr* address, uint32_t addressLength, char* host,
  size_t hostLength, char* service, size_t serviceLength, int flags,
  const ResolverOption* options, size_t optionCount);
HErrno GetHError();

}
