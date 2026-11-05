#pragma once

#include <stdint.h>

#include "nn/movie/detail/movie_media_state.hpp"
#include "nn/result.hpp"

namespace nn::movie::detail {

class MediaMuxerState : public MediaState {
public:
  enum MediaMuxerFunctions : int32_t {
    MediaMuxerFunctions_Initialize,
    MediaMuxerFunctions_Finalize,
    MediaMuxerFunctions_Configure,
    MediaMuxerFunctions_AddTrack,
    MediaMuxerFunctions_GetTrackCount,
    MediaMuxerFunctions_Start,
    MediaMuxerFunctions_WriteAsync,
    MediaMuxerFunctions_Stop,
    MediaMuxerFunctions_Count,
  };

  MediaMuxerState();

  Result ValidateCurrentState(MediaMuxerFunctions function) const;
};

}
