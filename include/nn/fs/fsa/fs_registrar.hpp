#pragma once

#include <memory>

#include "nn/fs/fsa/fs_ifile_system.hpp"
#include "nn/result.hpp"

namespace nn::fs::fsa {

Result Register(const char* name, std::unique_ptr<IFileSystem>&& fileSystem);

}
