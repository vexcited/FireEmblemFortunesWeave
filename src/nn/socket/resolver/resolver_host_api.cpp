#include "nn/socket/resolver/resolver_client.hpp"

namespace nn::socket::resolver {

[[gnu::visibility("hidden")]] HostEnt* GetHostEntByNameImpl(const char* name,
  const ResolverOption* options, size_t optionCount);
[[gnu::visibility("hidden")]] hostent* GetHostByNameImpl(const char* name,
  const ResolverOption* options, size_t optionCount);

HostEnt* GetHostEntByName(const char* name, const ResolverOption* options,
  size_t optionCount) {
  return GetHostEntByNameImpl(name, options, optionCount);
}

hostent* GetHostByName(const char* name, const ResolverOption* options,
  size_t optionCount) {
  return GetHostByNameImpl(name, options, optionCount);
}

}
