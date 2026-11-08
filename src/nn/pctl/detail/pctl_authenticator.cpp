#include <stdint.h>

#include "nn/result.hpp"

namespace nn::la::auth {

struct ParentalAuthenticationArg {
  bool isTemporaryUnlockAllowed;
  uint8_t reserved[3];
};

Result ShowParentalAuthentication(const ParentalAuthenticationArg& parental);

}

namespace nn::pctl::detail {

namespace {

constexpr Result ResultConfigurationCanceled = {0x16c8e};

}

// The settings authenticator always allows a temporary unlock, any applet
// failure counts as a cancel.
Result ShowAuthenticatorForConfiguration() {
  const la::auth::ParentalAuthenticationArg arg = {true, {0, 1, 0}};
  if (la::auth::ShowParentalAuthentication(arg).IsFailure()) {
    return ResultConfigurationCanceled;
  }
  return Result{};
}

}
