#include <stdint.h>

#include "nn/diag/unexpected_default.hpp"

namespace nn::kpr {

enum KeyCodeMapMode : int {};

namespace detail {

struct KeyCodeMapStorage {
  uint32_t supportedModes;
};

namespace {

const int KeyCodeMapModeCount = 9;

}

bool IsKeyCodeMapModeSupported(const KeyCodeMapStorage& storage,
  KeyCodeMapMode mode) {
  if (static_cast<uint32_t>(mode) >= KeyCodeMapModeCount) {
    nn::detail::UnexpectedDefaultImpl();
  }
  return (storage.supportedModes & (1u << mode)) != 0;
}

}

}
