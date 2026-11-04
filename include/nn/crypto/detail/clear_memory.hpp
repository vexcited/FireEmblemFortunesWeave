#pragma once

#include <stddef.h>

namespace nn::crypto::detail {

void ClearMemoryImpl(void* buffer, size_t size);

}
