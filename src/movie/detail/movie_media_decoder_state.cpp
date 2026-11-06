#include "movie/detail/movie_media_decoder_state.hpp"

namespace movie::detail {

MediaDecoderState::MediaDecoderState() {
  m_ValidStates[MediaDecoderFunctions_Initialize][0] = State_Created;
  m_ValidStates[MediaDecoderFunctions_Initialize][1] = State_None;
  m_ValidStates[MediaDecoderFunctions_Initialize][2] = State_None;
  m_ValidStates[MediaDecoderFunctions_Initialize][3] = State_None;
  m_ValidStates[MediaDecoderFunctions_Initialize][4] = State_None;
  m_ValidStates[MediaDecoderFunctions_Initialize][5] = State_None;
  m_ValidStates[MediaDecoderFunctions_Initialize][6] = State_None;
  m_ValidStates[MediaDecoderFunctions_Initialize][7] = State_None;
  m_ValidStates[MediaDecoderFunctions_Initialize][8] = State_None;
  m_ValidStates[MediaDecoderFunctions_Finalize][0] = State_Created;
  m_ValidStates[MediaDecoderFunctions_Finalize][1] = State_Initialized;
  m_ValidStates[MediaDecoderFunctions_Finalize][2] = State_Prepared;
  m_ValidStates[MediaDecoderFunctions_Finalize][3] = State_Started;
  m_ValidStates[MediaDecoderFunctions_Finalize][4] = State_Stopped;
  m_ValidStates[MediaDecoderFunctions_Finalize][5] = State_Error;
  m_ValidStates[MediaDecoderFunctions_Finalize][6] = State_None;
  m_ValidStates[MediaDecoderFunctions_Finalize][7] = State_None;
  m_ValidStates[MediaDecoderFunctions_Finalize][8] = State_None;
  m_ValidStates[MediaDecoderFunctions_SetUriMedia][0] = State_Initialized;
  m_ValidStates[MediaDecoderFunctions_SetUriMedia][1] = State_Stopped;
  m_ValidStates[MediaDecoderFunctions_SetUriMedia][2] = State_None;
  m_ValidStates[MediaDecoderFunctions_SetUriMedia][3] = State_None;
  m_ValidStates[MediaDecoderFunctions_SetUriMedia][4] = State_None;
  m_ValidStates[MediaDecoderFunctions_SetUriMedia][5] = State_None;
  m_ValidStates[MediaDecoderFunctions_SetUriMedia][6] = State_None;
  m_ValidStates[MediaDecoderFunctions_SetUriMedia][7] = State_None;
  m_ValidStates[MediaDecoderFunctions_SetUriMedia][8] = State_None;
  m_ValidStates[MediaDecoderFunctions_SetInMemoryMedia][0] = State_Initialized;
  m_ValidStates[MediaDecoderFunctions_SetInMemoryMedia][1] = State_Stopped;
  m_ValidStates[MediaDecoderFunctions_SetInMemoryMedia][2] = State_None;
  m_ValidStates[MediaDecoderFunctions_SetInMemoryMedia][3] = State_None;
  m_ValidStates[MediaDecoderFunctions_SetInMemoryMedia][4] = State_None;
  m_ValidStates[MediaDecoderFunctions_SetInMemoryMedia][5] = State_None;
  m_ValidStates[MediaDecoderFunctions_SetInMemoryMedia][6] = State_None;
  m_ValidStates[MediaDecoderFunctions_SetInMemoryMedia][7] = State_None;
  m_ValidStates[MediaDecoderFunctions_SetInMemoryMedia][8] = State_None;
  m_ValidStates[MediaDecoderFunctions_GetTrackCount][0] = State_Prepared;
  m_ValidStates[MediaDecoderFunctions_GetTrackCount][1] = State_Started;
  m_ValidStates[MediaDecoderFunctions_GetTrackCount][2] = State_Stopped;
  m_ValidStates[MediaDecoderFunctions_GetTrackCount][3] = State_None;
  m_ValidStates[MediaDecoderFunctions_GetTrackCount][4] = State_None;
  m_ValidStates[MediaDecoderFunctions_GetTrackCount][5] = State_None;
  m_ValidStates[MediaDecoderFunctions_GetTrackCount][6] = State_None;
  m_ValidStates[MediaDecoderFunctions_GetTrackCount][7] = State_None;
  m_ValidStates[MediaDecoderFunctions_GetTrackCount][8] = State_None;
  m_ValidStates[MediaDecoderFunctions_SelectTrack][0] = State_Prepared;
  m_ValidStates[MediaDecoderFunctions_SelectTrack][1] = State_Stopped;
  m_ValidStates[MediaDecoderFunctions_SelectTrack][2] = State_None;
  m_ValidStates[MediaDecoderFunctions_SelectTrack][3] = State_None;
  m_ValidStates[MediaDecoderFunctions_SelectTrack][4] = State_None;
  m_ValidStates[MediaDecoderFunctions_SelectTrack][5] = State_None;
  m_ValidStates[MediaDecoderFunctions_SelectTrack][6] = State_None;
  m_ValidStates[MediaDecoderFunctions_SelectTrack][7] = State_None;
  m_ValidStates[MediaDecoderFunctions_SelectTrack][8] = State_None;
  m_ValidStates[MediaDecoderFunctions_DeselectTrack][0] = State_Prepared;
  m_ValidStates[MediaDecoderFunctions_DeselectTrack][1] = State_Stopped;
  m_ValidStates[MediaDecoderFunctions_DeselectTrack][2] = State_None;
  m_ValidStates[MediaDecoderFunctions_DeselectTrack][3] = State_None;
  m_ValidStates[MediaDecoderFunctions_DeselectTrack][4] = State_None;
  m_ValidStates[MediaDecoderFunctions_DeselectTrack][5] = State_None;
  m_ValidStates[MediaDecoderFunctions_DeselectTrack][6] = State_None;
  m_ValidStates[MediaDecoderFunctions_DeselectTrack][7] = State_None;
  m_ValidStates[MediaDecoderFunctions_DeselectTrack][8] = State_None;
  m_ValidStates[MediaDecoderFunctions_GetTrackProperties][0] = State_Prepared;
  m_ValidStates[MediaDecoderFunctions_GetTrackProperties][1] = State_Started;
  m_ValidStates[MediaDecoderFunctions_GetTrackProperties][2] = State_Stopped;
  m_ValidStates[MediaDecoderFunctions_GetTrackProperties][3] = State_None;
  m_ValidStates[MediaDecoderFunctions_GetTrackProperties][4] = State_None;
  m_ValidStates[MediaDecoderFunctions_GetTrackProperties][5] = State_None;
  m_ValidStates[MediaDecoderFunctions_GetTrackProperties][6] = State_None;
  m_ValidStates[MediaDecoderFunctions_GetTrackProperties][7] = State_None;
  m_ValidStates[MediaDecoderFunctions_GetTrackProperties][8] = State_None;
  m_ValidStates[MediaDecoderFunctions_SeekTo][0] = State_Prepared;
  m_ValidStates[MediaDecoderFunctions_SeekTo][1] = State_Started;
  m_ValidStates[MediaDecoderFunctions_SeekTo][2] = State_None;
  m_ValidStates[MediaDecoderFunctions_SeekTo][3] = State_None;
  m_ValidStates[MediaDecoderFunctions_SeekTo][4] = State_None;
  m_ValidStates[MediaDecoderFunctions_SeekTo][5] = State_None;
  m_ValidStates[MediaDecoderFunctions_SeekTo][6] = State_None;
  m_ValidStates[MediaDecoderFunctions_SeekTo][7] = State_None;
  m_ValidStates[MediaDecoderFunctions_SeekTo][8] = State_None;
  m_ValidStates[MediaDecoderFunctions_GetSeekCompletedEvent][0] =
    State_Initialized;
  m_ValidStates[MediaDecoderFunctions_GetSeekCompletedEvent][1] =
    State_Prepared;
  m_ValidStates[MediaDecoderFunctions_GetSeekCompletedEvent][2] = State_Started;
  m_ValidStates[MediaDecoderFunctions_GetSeekCompletedEvent][3] = State_Stopped;
  m_ValidStates[MediaDecoderFunctions_GetSeekCompletedEvent][4] = State_None;
  m_ValidStates[MediaDecoderFunctions_GetSeekCompletedEvent][5] = State_None;
  m_ValidStates[MediaDecoderFunctions_GetSeekCompletedEvent][6] = State_None;
  m_ValidStates[MediaDecoderFunctions_GetSeekCompletedEvent][7] = State_None;
  m_ValidStates[MediaDecoderFunctions_GetSeekCompletedEvent][8] = State_None;
  m_ValidStates[MediaDecoderFunctions_GetCacheRanges][0] = State_Prepared;
  m_ValidStates[MediaDecoderFunctions_GetCacheRanges][1] = State_Started;
  m_ValidStates[MediaDecoderFunctions_GetCacheRanges][2] = State_Stopped;
  m_ValidStates[MediaDecoderFunctions_GetCacheRanges][3] = State_None;
  m_ValidStates[MediaDecoderFunctions_GetCacheRanges][4] = State_None;
  m_ValidStates[MediaDecoderFunctions_GetCacheRanges][5] = State_None;
  m_ValidStates[MediaDecoderFunctions_GetCacheRanges][6] = State_None;
  m_ValidStates[MediaDecoderFunctions_GetCacheRanges][7] = State_None;
  m_ValidStates[MediaDecoderFunctions_GetCacheRanges][8] = State_None;
  m_ValidStates[MediaDecoderFunctions_GetCacheRange][0] = State_Prepared;
  m_ValidStates[MediaDecoderFunctions_GetCacheRange][1] = State_Started;
  m_ValidStates[MediaDecoderFunctions_GetCacheRange][2] = State_Stopped;
  m_ValidStates[MediaDecoderFunctions_GetCacheRange][3] = State_None;
  m_ValidStates[MediaDecoderFunctions_GetCacheRange][4] = State_None;
  m_ValidStates[MediaDecoderFunctions_GetCacheRange][5] = State_None;
  m_ValidStates[MediaDecoderFunctions_GetCacheRange][6] = State_None;
  m_ValidStates[MediaDecoderFunctions_GetCacheRange][7] = State_None;
  m_ValidStates[MediaDecoderFunctions_GetCacheRange][8] = State_None;
  m_ValidStates[MediaDecoderFunctions_GetAudioFrameReadyEvent][0] =
    State_Prepared;
  m_ValidStates[MediaDecoderFunctions_GetAudioFrameReadyEvent][1] =
    State_Started;
  m_ValidStates[MediaDecoderFunctions_GetAudioFrameReadyEvent][2] =
    State_Stopped;
  m_ValidStates[MediaDecoderFunctions_GetAudioFrameReadyEvent][3] = State_None;
  m_ValidStates[MediaDecoderFunctions_GetAudioFrameReadyEvent][4] = State_None;
  m_ValidStates[MediaDecoderFunctions_GetAudioFrameReadyEvent][5] = State_None;
  m_ValidStates[MediaDecoderFunctions_GetAudioFrameReadyEvent][6] = State_None;
  m_ValidStates[MediaDecoderFunctions_GetAudioFrameReadyEvent][7] = State_None;
  m_ValidStates[MediaDecoderFunctions_GetAudioFrameReadyEvent][8] = State_None;
  m_ValidStates[MediaDecoderFunctions_GetAudioFrameFormatChangedEvent][0] =
    State_Prepared;
  m_ValidStates[MediaDecoderFunctions_GetAudioFrameFormatChangedEvent][1] =
    State_Started;
  m_ValidStates[MediaDecoderFunctions_GetAudioFrameFormatChangedEvent][2] =
    State_Stopped;
  m_ValidStates[MediaDecoderFunctions_GetAudioFrameFormatChangedEvent][3] =
    State_None;
  m_ValidStates[MediaDecoderFunctions_GetAudioFrameFormatChangedEvent][4] =
    State_None;
  m_ValidStates[MediaDecoderFunctions_GetAudioFrameFormatChangedEvent][5] =
    State_None;
  m_ValidStates[MediaDecoderFunctions_GetAudioFrameFormatChangedEvent][6] =
    State_None;
  m_ValidStates[MediaDecoderFunctions_GetAudioFrameFormatChangedEvent][7] =
    State_None;
  m_ValidStates[MediaDecoderFunctions_GetAudioFrameFormatChangedEvent][8] =
    State_None;
  m_ValidStates[MediaDecoderFunctions_GetAudioFrameProperties][0] =
    State_Prepared;
  m_ValidStates[MediaDecoderFunctions_GetAudioFrameProperties][1] =
    State_Started;
  m_ValidStates[MediaDecoderFunctions_GetAudioFrameProperties][2] =
    State_Stopped;
  m_ValidStates[MediaDecoderFunctions_GetAudioFrameProperties][3] = State_None;
  m_ValidStates[MediaDecoderFunctions_GetAudioFrameProperties][4] = State_None;
  m_ValidStates[MediaDecoderFunctions_GetAudioFrameProperties][5] = State_None;
  m_ValidStates[MediaDecoderFunctions_GetAudioFrameProperties][6] = State_None;
  m_ValidStates[MediaDecoderFunctions_GetAudioFrameProperties][7] = State_None;
  m_ValidStates[MediaDecoderFunctions_GetAudioFrameProperties][8] = State_None;
  m_ValidStates[MediaDecoderFunctions_GetAudioFrameRequirements][0] = State_Started;
  m_ValidStates[MediaDecoderFunctions_GetAudioFrameRequirements][1] = State_None;
  m_ValidStates[MediaDecoderFunctions_GetAudioFrameRequirements][2] = State_None;
  m_ValidStates[MediaDecoderFunctions_GetAudioFrameRequirements][3] = State_None;
  m_ValidStates[MediaDecoderFunctions_GetAudioFrameRequirements][4] = State_None;
  m_ValidStates[MediaDecoderFunctions_GetAudioFrameRequirements][5] = State_None;
  m_ValidStates[MediaDecoderFunctions_GetAudioFrameRequirements][6] = State_None;
  m_ValidStates[MediaDecoderFunctions_GetAudioFrameRequirements][7] = State_None;
  m_ValidStates[MediaDecoderFunctions_GetAudioFrameRequirements][8] = State_None;
  m_ValidStates[MediaDecoderFunctions_RegisterAudioFrame][0] = State_Initialized;
  m_ValidStates[MediaDecoderFunctions_RegisterAudioFrame][1] = State_Prepared;
  m_ValidStates[MediaDecoderFunctions_RegisterAudioFrame][2] = State_Started;
  m_ValidStates[MediaDecoderFunctions_RegisterAudioFrame][3] = State_Stopped;
  m_ValidStates[MediaDecoderFunctions_RegisterAudioFrame][4] = State_None;
  m_ValidStates[MediaDecoderFunctions_RegisterAudioFrame][5] = State_None;
  m_ValidStates[MediaDecoderFunctions_RegisterAudioFrame][6] = State_None;
  m_ValidStates[MediaDecoderFunctions_RegisterAudioFrame][7] = State_None;
  m_ValidStates[MediaDecoderFunctions_RegisterAudioFrame][8] = State_None;
  m_ValidStates[MediaDecoderFunctions_AcquireAudioFrame][0] = State_Started;
  m_ValidStates[MediaDecoderFunctions_AcquireAudioFrame][1] = State_None;
  m_ValidStates[MediaDecoderFunctions_AcquireAudioFrame][2] = State_None;
  m_ValidStates[MediaDecoderFunctions_AcquireAudioFrame][3] = State_None;
  m_ValidStates[MediaDecoderFunctions_AcquireAudioFrame][4] = State_None;
  m_ValidStates[MediaDecoderFunctions_AcquireAudioFrame][5] = State_None;
  m_ValidStates[MediaDecoderFunctions_AcquireAudioFrame][6] = State_None;
  m_ValidStates[MediaDecoderFunctions_AcquireAudioFrame][7] = State_None;
  m_ValidStates[MediaDecoderFunctions_AcquireAudioFrame][8] = State_None;
  m_ValidStates[MediaDecoderFunctions_ReleaseAudioFrame][0] =
    State_Started;
  m_ValidStates[MediaDecoderFunctions_ReleaseAudioFrame][1] =
    State_None;
  m_ValidStates[MediaDecoderFunctions_ReleaseAudioFrame][2] =
    State_None;
  m_ValidStates[MediaDecoderFunctions_ReleaseAudioFrame][3] =
    State_None;
  m_ValidStates[MediaDecoderFunctions_ReleaseAudioFrame][4] =
    State_None;
  m_ValidStates[MediaDecoderFunctions_ReleaseAudioFrame][5] =
    State_None;
  m_ValidStates[MediaDecoderFunctions_ReleaseAudioFrame][6] =
    State_None;
  m_ValidStates[MediaDecoderFunctions_ReleaseAudioFrame][7] =
    State_None;
  m_ValidStates[MediaDecoderFunctions_ReleaseAudioFrame][8] =
    State_None;
  m_ValidStates[MediaDecoderFunctions_GetVideoFrameReadyEvent][0] =
    State_Prepared;
  m_ValidStates[MediaDecoderFunctions_GetVideoFrameReadyEvent][1] =
    State_Started;
  m_ValidStates[MediaDecoderFunctions_GetVideoFrameReadyEvent][2] =
    State_Stopped;
  m_ValidStates[MediaDecoderFunctions_GetVideoFrameReadyEvent][3] = State_None;
  m_ValidStates[MediaDecoderFunctions_GetVideoFrameReadyEvent][4] = State_None;
  m_ValidStates[MediaDecoderFunctions_GetVideoFrameReadyEvent][5] = State_None;
  m_ValidStates[MediaDecoderFunctions_GetVideoFrameReadyEvent][6] = State_None;
  m_ValidStates[MediaDecoderFunctions_GetVideoFrameReadyEvent][7] = State_None;
  m_ValidStates[MediaDecoderFunctions_GetVideoFrameReadyEvent][8] = State_None;
  m_ValidStates[MediaDecoderFunctions_GetVideoFrameFormatChangedEvent][0] =
    State_Prepared;
  m_ValidStates[MediaDecoderFunctions_GetVideoFrameFormatChangedEvent][1] =
    State_Started;
  m_ValidStates[MediaDecoderFunctions_GetVideoFrameFormatChangedEvent][2] =
    State_Stopped;
  m_ValidStates[MediaDecoderFunctions_GetVideoFrameFormatChangedEvent][3] =
    State_None;
  m_ValidStates[MediaDecoderFunctions_GetVideoFrameFormatChangedEvent][4] =
    State_None;
  m_ValidStates[MediaDecoderFunctions_GetVideoFrameFormatChangedEvent][5] =
    State_None;
  m_ValidStates[MediaDecoderFunctions_GetVideoFrameFormatChangedEvent][6] =
    State_None;
  m_ValidStates[MediaDecoderFunctions_GetVideoFrameFormatChangedEvent][7] =
    State_None;
  m_ValidStates[MediaDecoderFunctions_GetVideoFrameFormatChangedEvent][8] =
    State_None;
  m_ValidStates[MediaDecoderFunctions_GetVideoFrameProperties][0] =
    State_Prepared;
  m_ValidStates[MediaDecoderFunctions_GetVideoFrameProperties][1] =
    State_Started;
  m_ValidStates[MediaDecoderFunctions_GetVideoFrameProperties][2] =
    State_Stopped;
  m_ValidStates[MediaDecoderFunctions_GetVideoFrameProperties][3] =
    State_None;
  m_ValidStates[MediaDecoderFunctions_GetVideoFrameProperties][4] =
    State_None;
  m_ValidStates[MediaDecoderFunctions_GetVideoFrameProperties][5] =
    State_None;
  m_ValidStates[MediaDecoderFunctions_GetVideoFrameProperties][6] =
    State_None;
  m_ValidStates[MediaDecoderFunctions_GetVideoFrameProperties][7] =
    State_None;
  m_ValidStates[MediaDecoderFunctions_GetVideoFrameProperties][8] =
    State_None;
  m_ValidStates[MediaDecoderFunctions_RegisterVideoFrame][0] =
    State_Initialized;
  m_ValidStates[MediaDecoderFunctions_RegisterVideoFrame][1] =
    State_Prepared;
  m_ValidStates[MediaDecoderFunctions_RegisterVideoFrame][2] =
    State_Started;
  m_ValidStates[MediaDecoderFunctions_RegisterVideoFrame][3] =
    State_Stopped;
  m_ValidStates[MediaDecoderFunctions_RegisterVideoFrame][4] = State_None;
  m_ValidStates[MediaDecoderFunctions_RegisterVideoFrame][5] = State_None;
  m_ValidStates[MediaDecoderFunctions_RegisterVideoFrame][6] = State_None;
  m_ValidStates[MediaDecoderFunctions_RegisterVideoFrame][7] = State_None;
  m_ValidStates[MediaDecoderFunctions_RegisterVideoFrame][8] = State_None;
  m_ValidStates[MediaDecoderFunctions_AcquireVideoFrame][0] = State_Started;
  m_ValidStates[MediaDecoderFunctions_AcquireVideoFrame][1] = State_None;
  m_ValidStates[MediaDecoderFunctions_AcquireVideoFrame][2] = State_None;
  m_ValidStates[MediaDecoderFunctions_AcquireVideoFrame][3] = State_None;
  m_ValidStates[MediaDecoderFunctions_AcquireVideoFrame][4] = State_None;
  m_ValidStates[MediaDecoderFunctions_AcquireVideoFrame][5] = State_None;
  m_ValidStates[MediaDecoderFunctions_AcquireVideoFrame][6] = State_None;
  m_ValidStates[MediaDecoderFunctions_AcquireVideoFrame][7] = State_None;
  m_ValidStates[MediaDecoderFunctions_AcquireVideoFrame][8] = State_None;
  m_ValidStates[MediaDecoderFunctions_ReleaseVideoFrame][0] = State_Started;
  m_ValidStates[MediaDecoderFunctions_ReleaseVideoFrame][1] = State_None;
  m_ValidStates[MediaDecoderFunctions_ReleaseVideoFrame][2] = State_None;
  m_ValidStates[MediaDecoderFunctions_ReleaseVideoFrame][3] = State_None;
  m_ValidStates[MediaDecoderFunctions_ReleaseVideoFrame][4] = State_None;
  m_ValidStates[MediaDecoderFunctions_ReleaseVideoFrame][5] = State_None;
  m_ValidStates[MediaDecoderFunctions_ReleaseVideoFrame][6] = State_None;
  m_ValidStates[MediaDecoderFunctions_ReleaseVideoFrame][7] = State_None;
  m_ValidStates[MediaDecoderFunctions_ReleaseVideoFrame][8] = State_None;
  m_ValidStates[MediaDecoderFunctions_GetVideoFrameRequirements][0] = State_Prepared;
  m_ValidStates[MediaDecoderFunctions_GetVideoFrameRequirements][1] = State_Started;
  m_ValidStates[MediaDecoderFunctions_GetVideoFrameRequirements][2] = State_Stopped;
  m_ValidStates[MediaDecoderFunctions_GetVideoFrameRequirements][3] = State_None;
  m_ValidStates[MediaDecoderFunctions_GetVideoFrameRequirements][4] = State_None;
  m_ValidStates[MediaDecoderFunctions_GetVideoFrameRequirements][5] = State_None;
  m_ValidStates[MediaDecoderFunctions_GetVideoFrameRequirements][6] = State_None;
  m_ValidStates[MediaDecoderFunctions_GetVideoFrameRequirements][7] = State_None;
  m_ValidStates[MediaDecoderFunctions_GetVideoFrameRequirements][8] = State_None;
  m_ValidStates[MediaDecoderFunctions_Start][0] = State_Prepared;
  m_ValidStates[MediaDecoderFunctions_Start][1] = State_None;
  m_ValidStates[MediaDecoderFunctions_Start][2] = State_None;
  m_ValidStates[MediaDecoderFunctions_Start][3] = State_None;
  m_ValidStates[MediaDecoderFunctions_Start][4] = State_None;
  m_ValidStates[MediaDecoderFunctions_Start][5] = State_None;
  m_ValidStates[MediaDecoderFunctions_Start][6] = State_None;
  m_ValidStates[MediaDecoderFunctions_Start][7] = State_None;
  m_ValidStates[MediaDecoderFunctions_Start][8] = State_None;
  m_ValidStates[MediaDecoderFunctions_Stop][0] = State_Started;
  m_ValidStates[MediaDecoderFunctions_Stop][1] = State_None;
  m_ValidStates[MediaDecoderFunctions_Stop][2] = State_None;
  m_ValidStates[MediaDecoderFunctions_Stop][3] = State_None;
  m_ValidStates[MediaDecoderFunctions_Stop][4] = State_None;
  m_ValidStates[MediaDecoderFunctions_Stop][5] = State_None;
  m_ValidStates[MediaDecoderFunctions_Stop][6] = State_None;
  m_ValidStates[MediaDecoderFunctions_Stop][7] = State_None;
  m_ValidStates[MediaDecoderFunctions_Stop][8] = State_None;
}

MovieResult MediaDecoderState::ValidateCurrentState(
  MediaDecoderFunctions function) const {
  State state = GetState();
  for (int i = 0; i < ValidStateCountMax; i++) {
    if (m_ValidStates[function][i] == state) {
      return MovieResult_Success;
    }
  }

  if (state == State_Created) {
    return MovieResult_NotInitialized;
  }

  if (function == MediaDecoderFunctions_Initialize) {
    return MovieResult_AlreadyInitialized;
  }

  if (function >= MediaDecoderFunctions_Finalize &&
    function <= MediaDecoderFunctions_SetInMemoryMedia) {
    return static_cast<MovieResult>(155);
  }

  switch (state) {
    case State_Initialized:
      return static_cast<MovieResult>(156);
    case State_Prepared:
      return static_cast<MovieResult>(157);
    case State_Started:
      return static_cast<MovieResult>(158);
    case State_Stopped:
      return static_cast<MovieResult>(160);
    default:
      return static_cast<MovieResult>(161);
  }
}

}
