#pragma once

#include <stdint.h>

#include "movie/detail/movie_media_state.hpp"
#include "movie/movie_result.hpp"

namespace movie::detail {

// The functions are named after the decoder methods that validate them.
class MediaDecoderState : public MediaState {
public:
  enum MediaDecoderFunctions : int32_t {
    MediaDecoderFunctions_Initialize,
    MediaDecoderFunctions_Finalize,
    MediaDecoderFunctions_SetUriMedia,
    MediaDecoderFunctions_SetInMemoryMedia,
    MediaDecoderFunctions_GetTrackCount,
    MediaDecoderFunctions_SelectTrack,
    MediaDecoderFunctions_DeselectTrack,
    MediaDecoderFunctions_GetTrackProperties,
    MediaDecoderFunctions_SeekTo,
    MediaDecoderFunctions_GetSeekCompletedEvent,
    MediaDecoderFunctions_GetCacheRanges,
    MediaDecoderFunctions_GetCacheRange,
    MediaDecoderFunctions_GetAudioFrameReadyEvent,
    MediaDecoderFunctions_GetAudioFrameFormatChangedEvent,
    MediaDecoderFunctions_GetAudioFrameProperties,
    MediaDecoderFunctions_GetAudioFrameRequirements,
    MediaDecoderFunctions_RegisterAudioFrame,
    MediaDecoderFunctions_AcquireAudioFrame,
    MediaDecoderFunctions_ReleaseAudioFrame,
    MediaDecoderFunctions_GetVideoFrameReadyEvent,
    MediaDecoderFunctions_GetVideoFrameFormatChangedEvent,
    MediaDecoderFunctions_GetVideoFrameProperties,
    MediaDecoderFunctions_RegisterVideoFrame,
    MediaDecoderFunctions_AcquireVideoFrame,
    MediaDecoderFunctions_ReleaseVideoFrame,
    MediaDecoderFunctions_GetVideoFrameRequirements,
    MediaDecoderFunctions_Start,
    MediaDecoderFunctions_Stop,
    MediaDecoderFunctions_Count,
  };

  MediaDecoderState();

  MovieResult ValidateCurrentState(MediaDecoderFunctions function) const;
};

}
