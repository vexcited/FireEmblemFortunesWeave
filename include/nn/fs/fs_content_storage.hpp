#pragma once

#include "nn/fs/fs_types.hpp"
#include "nn/result.hpp"

namespace nn::fs {

const char* GetContentStorageMountName(ContentStorageId id);
Result MountContentStorage(ContentStorageId id);
Result MountContentStorage(const char* name, ContentStorageId id);
const char* GetCustomStorageDirectoryName(CustomStorageId id);

}
