#include "movie/detail/movie_media_state.hpp"

namespace movie::detail {

MediaState::~MediaState() {
}

void MediaState::SetState(State state) {
  m_State = state;
}

MediaState::State MediaState::GetState() const {
  return m_State;
}

}
