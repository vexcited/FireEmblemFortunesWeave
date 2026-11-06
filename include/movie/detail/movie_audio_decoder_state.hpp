#pragma once

#include <stdint.h>

#include "movie/detail/movie_media_state.hpp"
#include "movie/movie_result.hpp"

namespace movie::detail {

// The functions are named after the AudioDecoderImpl methods that validate
// them.
class AudioDecoderState : public MediaState {
public:
  enum AudioDecoderFunctions : int32_t {
    AudioDecoderFunctions_Initialize,
    AudioDecoderFunctions_Finalize,
    AudioDecoderFunctions_Configure,
    AudioDecoderFunctions_GetAudioFrameRequirements,
    AudioDecoderFunctions_GetInputBufferEvent,
    AudioDecoderFunctions_GetAudioFrameReadyEvent,
    AudioDecoderFunctions_GetAudioFrameFormatChangedEvent,
    AudioDecoderFunctions_Start,
    AudioDecoderFunctions_Stop,
    AudioDecoderFunctions_Flush,
    AudioDecoderFunctions_Decode,
    AudioDecoderFunctions_GetAudioFrameProperties,
    AudioDecoderFunctions_GetAudioFrame,
    AudioDecoderFunctions_Count,
  };

  AudioDecoderState();

  MovieResult ValidateCurrentState(AudioDecoderFunctions function) const;
};

}
