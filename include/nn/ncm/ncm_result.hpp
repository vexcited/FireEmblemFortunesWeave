#pragma once

#include "nn/result.hpp"

namespace nn::ncm {

constexpr Result ResultContentNotFound() {
  return Result{5u | 7u << 9};
}

}
