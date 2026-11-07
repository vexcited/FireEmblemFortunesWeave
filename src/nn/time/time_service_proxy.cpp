#include "nn/sf/cmif/client/cmif_proxy_interfaces.hpp"

namespace nn::sf::cmif::client::detail {

template class CmifProxyMethods<timesrv::detail::service::ITimeZoneService,
  DomainKind>;
template class CmifProxyMethods<timesrv::detail::service::ISteadyClock,
  DomainKind>;
template class CmifProxyMethods<timesrv::detail::service::ISystemClock,
  DomainKind>;
template class CmifProxyMethods<ntc::detail::service::IEnsureNetworkClockAvailabilityService,
  PlainKind>;

}
