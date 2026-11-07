#include "nn/sf/exp_heap_proxy.hpp"
#include "nn/sf/hipc.hpp"
#include "nn/socket/resolver/resolver_interfaces.hpp"

namespace nn::socket::resolver {

extern sf::ExpHeapAllocator g_ResolverProxyHeap;

extern uintptr_t ResolverProxyVtable[];
extern uintptr_t PrivateResolverProxyVtable[];

namespace {

// Both resolvers share one heap, a failed connection keeps the old proxy.
template <typename Interface>
[[gnu::always_inline]] Result CreateProxyByHipc(
  sf::SharedPointer<Interface>& resolver, const char* pServiceName,
  uintptr_t* pVtable, size_t referenceVtableOffset) {
  uint32_t handle = 0;
  sf::hipc::InitializeHipcServiceResolution();
  const Result result{sf::hipc::ConnectToHipcService(&handle, pServiceName)};
  sf::hipc::FinalizeHipcServiceResolution();
  if (result.IsFailure()) {
    return result;
  }
  sf::SharedPointer<Interface>(sf::detail::CreateExpHeapProxy<Interface>(
    g_ResolverProxyHeap, handle, pVtable, referenceVtableOffset), false)
    .Swap(resolver);
  return result;
}

}

Result CreateResolverByHipc(sf::SharedPointer<IResolver>& resolver) {
  return CreateProxyByHipc(resolver, "sfdnsres", ResolverProxyVtable, 23);
}

Result CreatePrivateResolverByHipc(
  sf::SharedPointer<IPrivateResolver>& resolver) {
  return CreateProxyByHipc(resolver, "dns:priv", PrivateResolverProxyVtable,
    10);
}

}
