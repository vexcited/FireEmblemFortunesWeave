#include "nn/sf/cmif/client/cmif_proxy_interfaces.hpp"

namespace nn::sf::cmif::client::detail {

template class CmifProxyMethods<::nns::hosbinder::IHOSBinderDriver, DomainKind>;
template class CmifProxyMethods<grcsrv::IMovieWriter, DomainKind>;
template class CmifProxyMethods<grcsrv::IMovieMaker, DomainKind>;
template class CmifProxyMethods<grcsrv::IGameMovieTrimmer, DomainKind>;

}
