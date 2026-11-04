#pragma once

#include <stddef.h>

namespace nn::crypto {

bool IsSameBytes(const void* lhs, const void* rhs, size_t size);

namespace detail {

bool IsSameBytes(const void* lhs, const void* rhs, size_t size);

}

}
