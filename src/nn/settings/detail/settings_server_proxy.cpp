#include "nn/sf/cmif/client/cmif_proxy_interfaces.hpp"

namespace nn::sf::cmif::client::detail {

template class CmifProxyMethods<settings::ISystemSettingsServer, PlainKind>;
template class CmifProxyMethods<settings::IFactorySettingsServer, PlainKind>;
template class CmifProxyMethods<settings::ISettingsItemKeyIterator, PlainKind>;
template class CmifProxyMethods<settings::ISettingsServer, PlainKind>;
template class CmifProxyMethods<settings::IFirmwareDebugSettingsServer,
  PlainKind>;

}
