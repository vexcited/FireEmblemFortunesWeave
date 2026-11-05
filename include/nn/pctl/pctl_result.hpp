#pragma once

#include <stdint.h>

#include "nn/result.hpp"

namespace nn::pctl {

template <uint32_t Description>
struct PctlResult {
  static constexpr uint32_t Value = 142 | Description << 9;

  static constexpr Result Make() {
    return Result{Value};
  }

  static bool Includes(Result result) {
    return result.GetInnerValueForDebug() == Value;
  }
};

using ResultFreeCommunicationRestricted = PctlResult<101>;
using ResultNotSupported = PctlResult<138>;
using ResultPairingNotActive = PctlResult<140>;
using ResultPairingAccountNotFound = PctlResult<222>;
using ResultInternetRequestNotAccepted = PctlResult<223>;

}
