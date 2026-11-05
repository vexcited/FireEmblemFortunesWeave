#include "nn/movie/detail/movie_media_muxer_state.hpp"

namespace nn::movie::detail {

namespace {

constexpr Result ResultNotInitialized = {0x3eb00};
constexpr Result ResultAlreadyInitialized = {0x3f500};
constexpr Result ResultInvalidState = {0xcf100};

// Errors reported for each current state when a function is not allowed.
constexpr Result StateErrors[] = {
  {0x3eb00}, {0xce900}, {0xcf100}, {0xcf100}, {0xceb00},
};

}

Result MediaMuxerState::ValidateCurrentState(
  MediaMuxerFunctions function) const {
  State state = GetState();
  for (int i = 0; i < ValidStateCountMax; ++i) {
    if (m_ValidStates[function][i] == state) {
      return {};
    }
  }

  if (function == MediaMuxerFunctions_Initialize) {
    return state != State_None ? ResultAlreadyInitialized
      : ResultNotInitialized;
  }

  if (static_cast<uint32_t>(state) > State_Started) {
    return ResultInvalidState;
  }

  return StateErrors[state];
}

}
