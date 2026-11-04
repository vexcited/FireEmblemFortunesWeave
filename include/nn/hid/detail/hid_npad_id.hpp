#pragma once

#include "nn/hid/hid_types.hpp"

namespace nn::hid {

constexpr NpadIdType NpadId_No1 = 0;
constexpr NpadIdType NpadId_No8 = 7;
constexpr NpadIdType NpadId_Handheld = 0x20;
constexpr NpadIdType NpadId_Other = 0x10;

namespace detail {

constexpr Result ResultNpadInvalidId = {0x58aca};

inline Result VerifyValidNpadId(const NpadIdType& id) {
  if (id <= NpadId_No8 || id == NpadId_Other || id == NpadId_Handheld) {
    return Result{};
  }
  return ResultNpadInvalidId;
}

}

}
