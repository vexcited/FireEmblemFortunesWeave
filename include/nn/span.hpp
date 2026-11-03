#pragma once

#include <stdint.h>

namespace nn {

template <typename T> struct Span {
  T* data;
  uintptr_t size;
};

}
