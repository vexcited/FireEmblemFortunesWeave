#pragma once

#include <stddef.h>

namespace nerd {

template<typename T>
bool GaussJordanInversionROK(
  T* matrix, size_t matrix_stride, T* inverse, size_t inverse_stride,
  size_t size
);

}
