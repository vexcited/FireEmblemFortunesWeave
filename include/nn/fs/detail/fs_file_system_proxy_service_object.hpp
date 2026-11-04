#pragma once

#include "nn/fssrv/sf/fssrv_sf_ifile_system_proxy.hpp"
#include "nn/sf/shared_pointer.hpp"

namespace nn::fs::detail {

nn::sf::SharedPointer<fssrv::sf::IFileSystemProxy>
  GetFileSystemProxyServiceObject();

}
