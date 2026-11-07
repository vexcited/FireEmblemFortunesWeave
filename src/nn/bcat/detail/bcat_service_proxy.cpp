#include "nn/sf/cmif/client/cmif_proxy_interfaces.hpp"

namespace nn::sf::cmif::client::detail {

template class CmifProxyMethods<bcat::ipc::IDeliveryCacheDirectoryService,
  DomainKind>;
template class CmifProxyMethods<bcat::ipc::IDeliveryCacheProgressService,
  DomainKind>;
template class CmifProxyMethods<bcat::ipc::IDeliveryCacheFileService,
  DomainKind>;

}
