#include "nn/sf/cmif/client/cmif_proxy_interfaces.hpp"

namespace nn::sf::cmif::client::detail {

template class CmifProxyMethods<audio::devmgr::ISystemSession, PlainKind>;
template class CmifProxyMethods<audio::detail::IAudioInManager, PlainKind>;
template class CmifProxyMethods<audio::sysmix::IUserSession, DomainKind>;
template class CmifProxyMethods<audio::detail::IAudioOutManager, PlainKind>;
template class CmifProxyMethods<audio::karaoke::IClientSession, PlainKind>;
template class CmifProxyMethods<audio::detail::ISpatialDownmixOutputModeManager,
  PlainKind>;
template class CmifProxyMethods<audio::devmgr::IUserSession, PlainKind>;
template class CmifProxyMethods<audio::sysmix::IExternalStreamSession,
  DomainKind>;
template class CmifProxyMethods<audio::adspshell::IAdspShellSession, PlainKind>;
template class CmifProxyMethods<audio::dpm::IClientSession, PlainKind>;

}
