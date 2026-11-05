#include "nn/movie/detail/movie_media_extractor_state.hpp"

namespace nn::movie::detail {

namespace {

constexpr Result ResultNotInitialized = {0x3eb00};
constexpr Result ResultAlreadyInitialized = {0x3f500};
constexpr Result ResultInvalidState = {0x7f100};

// Errors reported for each current state when a function is not allowed.
constexpr Result StateErrors[] = {
  {0x3eb00}, {0x7eb00}, {0x7f100}, {0x7e700}, {0x7e900},
};

}

Result MediaExtractorState::ValidateCurrentState(
  MediaExtractorFunctions function) const {
  State state = GetState();
  for (int i = 0; i < ValidStateCountMax; ++i) {
    if (m_ValidStates[function][i] == state) {
      return {};
    }
  }

  if (function == MediaExtractorFunctions_Initialize) {
    return state != State_None ? ResultAlreadyInitialized
      : ResultNotInitialized;
  }

  if (static_cast<uint32_t>(state) > State_Started) {
    return ResultInvalidState;
  }

  return StateErrors[state];
}

}
