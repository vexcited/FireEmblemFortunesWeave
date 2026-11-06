#pragma once

#include "nn/memory_resource.hpp"

namespace nn::util::pmr {

MemoryResource* NewDeleteResource();
MemoryResource* GetDefaultResource();
MemoryResource* SetDefaultResource(MemoryResource* resource);

}
