#pragma once

#include "nn/fssrv/sf/fssrv_sf_ifile_system.hpp"
#include "nn/sf/shared_pointer.hpp"

namespace nn::fs::fsa {

class IMultiCommitTarget {
public:
  virtual nn::sf::SharedPointer<fssrv::sf::IFileSystem>
    GetMultiCommitTarget() = 0;
};

}
