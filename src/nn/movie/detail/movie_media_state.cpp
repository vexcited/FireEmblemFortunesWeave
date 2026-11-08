#include "nandroid/MovieHeap.h"
#include "nn/movie/detail/movie_media_state.hpp"

namespace nn::movie::detail {

MediaState::~MediaState() {
}

void MediaState::SetState(State state) {
  m_State = state;
}

MediaState::State MediaState::GetState() const {
  return m_State;
}

}
