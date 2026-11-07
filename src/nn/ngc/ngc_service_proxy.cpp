#include "nn/ngc/ngc_proxy_methods.hpp"
#include "nn/sf/cmif/client/cmif_proxy_interfaces.hpp"

namespace nn::sf::cmif::client::detail {

template class CmifProxyMethods<ngc::detail::IService, PlainKind>;

}
