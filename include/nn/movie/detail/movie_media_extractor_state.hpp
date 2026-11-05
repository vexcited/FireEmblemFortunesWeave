#pragma once

#include <stdint.h>

#include "nn/movie/detail/movie_media_state.hpp"
#include "nn/result.hpp"

namespace nn::movie::detail {

class MediaExtractorState : public MediaState {
public:
  enum MediaExtractorFunctions : int32_t {
    MediaExtractorFunctions_Initialize,
    MediaExtractorFunctions_Finalize,
    MediaExtractorFunctions_SetUriMedia,
    MediaExtractorFunctions_SetInMemoryMedia,
    MediaExtractorFunctions_SetUpStreamSource,
    MediaExtractorFunctions_GetEventsForStreamSource,
    MediaExtractorFunctions_GetStreamSourceSeekPosition,
    MediaExtractorFunctions_SetUpMediaSourceMode,
    MediaExtractorFunctions_GetEventsForMediaSourceMode,
    MediaExtractorFunctions_GetMediaSourceModeSeekPosition,
    MediaExtractorFunctions_AppendMediaSourceData,
    MediaExtractorFunctions_GetTrackCount,
    MediaExtractorFunctions_SelectTrack,
    MediaExtractorFunctions_DeselectTrack,
    MediaExtractorFunctions_GetTrackProperties,
    MediaExtractorFunctions_GetTrackMimeType,
    MediaExtractorFunctions_GetTrackConfigurationSize,
    MediaExtractorFunctions_GetTrackConfiguration,
    MediaExtractorFunctions_Start,
    MediaExtractorFunctions_Stop,
    MediaExtractorFunctions_GetSampleAvailableEvent,
    MediaExtractorFunctions_GetEvents,
    MediaExtractorFunctions_SendStreamSourceData,
    MediaExtractorFunctions_SeekTo,
    MediaExtractorFunctions_GetSampleBufferSize,
    MediaExtractorFunctions_ReadSamples,
    MediaExtractorFunctions_GetSampleTime,
    MediaExtractorFunctions_GetSampleProperties,
    MediaExtractorFunctions_GetCacheRangeCount,
    MediaExtractorFunctions_GetCacheRange,
    MediaExtractorFunctions_IsCacheFull,
    MediaExtractorFunctions_Count,
  };

  MediaExtractorState();

  Result ValidateCurrentState(MediaExtractorFunctions function) const;
};

}
