#include "nn/sf/cmif/client/cmif_proxy_interfaces.hpp"

namespace nn::sf::cmif::client::detail {

template class CmifProxyMethods<pctl::detail::ipc::IParentalControlService,
  DomainKind>;

}
