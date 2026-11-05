#pragma once

#include "nn/fs/fs_types.hpp"
#include "nn/result.hpp"

namespace nn::fs {

Result GetEntryType(DirectoryEntryType* outType, const char* path);

}
