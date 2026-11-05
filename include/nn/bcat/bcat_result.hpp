#pragma once

#include "nn/result.hpp"

namespace nn::bcat {

constexpr uint32_t ResultModule = 122;

constexpr Result MakeResult(uint32_t description) {
  return Result{ResultModule | (description << 9)};
}

constexpr Result ResultInvalidArgument() {
  return MakeResult(1);
}

constexpr Result ResultAlreadyMounted() {
  return MakeResult(4);
}

constexpr Result ResultNotMounted() {
  return MakeResult(5);
}

constexpr Result ResultAlreadyOpened() {
  return MakeResult(6);
}

constexpr Result ResultNotOpened() {
  return MakeResult(7);
}

constexpr Result ResultInternetRequestNotAccepted() {
  return MakeResult(8);
}

constexpr Result ResultStorageNotFound() {
  return MakeResult(10);
}

}
