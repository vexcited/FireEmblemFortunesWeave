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

MediaExtractorState::MediaExtractorState() {
  ClearValidStatesFrom(MediaExtractorFunctions_SendStreamSourceData);
  SetValidStates(MediaExtractorFunctions_Initialize, {0});
  SetValidStates(MediaExtractorFunctions_Finalize,
    {0, 1, 2, 3, 4, 5, 6, 7, 8, 9});
  SetValidStates(MediaExtractorFunctions_SetUriMedia, {1, 3});
  SetValidStates(MediaExtractorFunctions_SetInMemoryMedia, {1, 3});
  SetValidStates(MediaExtractorFunctions_SetUpStreamSource, {1});
  SetValidStates(MediaExtractorFunctions_GetEventsForStreamSource, {1});
  SetValidStates(MediaExtractorFunctions_GetStreamSourceSeekPosition,
    {1, 2, 3, 4, 6, 7, 5});
  SetValidStates(MediaExtractorFunctions_SetUpMediaSourceMode, {1});
  SetValidStates(MediaExtractorFunctions_GetEventsForMediaSourceMode,
    {1, 8, 3, 4, 5});
  SetValidStates(MediaExtractorFunctions_GetMediaSourceModeSeekPosition,
    {8, 2, 3, 4, 5, 6, 7});
  SetValidStates(MediaExtractorFunctions_AppendMediaSourceData,
    {8, 2, 3, 4, 5, 6, 7});
  SetValidStates(MediaExtractorFunctions_GetTrackCount, {3, 4});
  SetValidStates(MediaExtractorFunctions_SelectTrack, {3, 4});
  SetValidStates(MediaExtractorFunctions_DeselectTrack, {3, 4});
  SetValidStates(MediaExtractorFunctions_GetTrackProperties, {3, 4});
  SetValidStates(MediaExtractorFunctions_GetTrackMimeType, {3, 4});
  SetValidStates(MediaExtractorFunctions_GetTrackConfigurationSize, {3, 4});
  SetValidStates(MediaExtractorFunctions_GetTrackConfiguration, {3, 4});
  SetValidStates(MediaExtractorFunctions_Start, {3, 5});
  SetValidStates(MediaExtractorFunctions_Stop, {3, 5, 4});
  SetValidStates(MediaExtractorFunctions_GetSampleAvailableEvent, {3, 4});
  SetValidStates(MediaExtractorFunctions_GetEvents, {1, 3, 4});
  AddValidStates(MediaExtractorFunctions_SendStreamSourceData, {1, 3, 4});
  AddValidStates(MediaExtractorFunctions_SeekTo, {3, 4, 5});
  AddValidStates(MediaExtractorFunctions_GetSampleBufferSize, {3, 4});
  AddValidStates(MediaExtractorFunctions_ReadSamples, {3, 4});
  AddValidStates(MediaExtractorFunctions_GetSampleTime, {3, 4});
  AddValidStates(MediaExtractorFunctions_GetSampleProperties, {3, 4});
  AddValidStates(MediaExtractorFunctions_GetCacheRangeCount,
    {2, 3, 4, 5, 6, 7, 8});
  AddValidStates(MediaExtractorFunctions_GetCacheRange, {2, 3, 4, 5, 6, 7, 8});
  AddValidStates(MediaExtractorFunctions_IsCacheFull, {2, 3, 4, 5, 6, 7, 8});
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
