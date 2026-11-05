#pragma once

#include "nn/fssrv/sf/fssrv_sf_iprogram_registry.hpp"
#include "nn/sf/shared_pointer.hpp"

namespace nn::fs::detail {

nn::sf::SharedPointer<fssrv::sf::IProgramRegistry>
  GetProgramRegistryServiceObject();
nn::sf::SharedPointer<fssrv::sf::IFileSystemProxyForLoader>
  GetFileSystemProxyForLoaderServiceObject();

}
