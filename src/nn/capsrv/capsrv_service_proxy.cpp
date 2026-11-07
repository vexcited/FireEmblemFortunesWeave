#include "nn/sf/cmif/client/cmif_proxy_interfaces.hpp"

namespace nn::sf::cmif::client::detail {

template class CmifProxyMethods<capsrv::sf::IAlbumApplicationService,
  PlainKind>;
template class CmifProxyMethods<capsrv::sf::IScreenShotApplicationService,
  PlainKind>;
template class CmifProxyMethods<capsrv::sf::IAlbumAccessorApplicationSession,
  PlainKind>;

}
