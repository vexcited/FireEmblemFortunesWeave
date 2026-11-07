#include "nn/sf/cmif/client/cmif_proxy_interfaces.hpp"

namespace nn::sf::cmif::client::detail {

template class CmifProxyMethods<nifm::detail::IGeneralService, DomainKind>;
template class CmifProxyMethods<chat::IUserService, DomainKind>;
template class CmifProxyMethods<bcat::ipc::IBcatService, DomainKind>;
template class CmifProxyMethods<timesrv::detail::service::IStaticService,
  DomainKind>;
template class CmifProxyMethods<bcat::ipc::IDeliveryCacheStorageService,
  DomainKind>;
template class CmifProxyMethods<err::context::IWriterForApplication,
  DomainKind>;

}
