#include "movie/detail/movie_audio_decoder_state.hpp"

namespace movie::detail {

AudioDecoderState::AudioDecoderState() {
  m_ValidStates[AudioDecoderFunctions_Initialize][0] = State_Created;
  m_ValidStates[AudioDecoderFunctions_Initialize][1] = State_None;
  m_ValidStates[AudioDecoderFunctions_Initialize][2] = State_None;
  m_ValidStates[AudioDecoderFunctions_Initialize][3] = State_None;
  m_ValidStates[AudioDecoderFunctions_Initialize][4] = State_None;
  m_ValidStates[AudioDecoderFunctions_Initialize][5] = State_None;
  m_ValidStates[AudioDecoderFunctions_Initialize][6] = State_None;
  m_ValidStates[AudioDecoderFunctions_Initialize][7] = State_None;
  m_ValidStates[AudioDecoderFunctions_Initialize][8] = State_None;
  m_ValidStates[AudioDecoderFunctions_Finalize][0] = State_Created;
  m_ValidStates[AudioDecoderFunctions_Finalize][1] = State_Initialized;
  m_ValidStates[AudioDecoderFunctions_Finalize][2] = State_Prepared;
  m_ValidStates[AudioDecoderFunctions_Finalize][3] = State_Started;
  m_ValidStates[AudioDecoderFunctions_Finalize][4] = State_Stopped;
  m_ValidStates[AudioDecoderFunctions_Finalize][5] = State_Error;
  m_ValidStates[AudioDecoderFunctions_Finalize][6] = State_None;
  m_ValidStates[AudioDecoderFunctions_Finalize][7] = State_None;
  m_ValidStates[AudioDecoderFunctions_Finalize][8] = State_None;
  m_ValidStates[AudioDecoderFunctions_Configure][0] = State_Initialized;
  m_ValidStates[AudioDecoderFunctions_Configure][1] = State_Prepared;
  m_ValidStates[AudioDecoderFunctions_Configure][2] = State_Started;
  m_ValidStates[AudioDecoderFunctions_Configure][3] = State_Stopped;
  m_ValidStates[AudioDecoderFunctions_Configure][4] = State_None;
  m_ValidStates[AudioDecoderFunctions_Configure][5] = State_None;
  m_ValidStates[AudioDecoderFunctions_Configure][6] = State_None;
  m_ValidStates[AudioDecoderFunctions_Configure][7] = State_None;
  m_ValidStates[AudioDecoderFunctions_Configure][8] = State_None;
  m_ValidStates[AudioDecoderFunctions_GetAudioFrameRequirements][0] =
    State_Prepared;
  m_ValidStates[AudioDecoderFunctions_GetAudioFrameRequirements][1] =
    State_Started;
  m_ValidStates[AudioDecoderFunctions_GetAudioFrameRequirements][2] =
    State_Stopped;
  m_ValidStates[AudioDecoderFunctions_GetAudioFrameRequirements][3] =
    State_None;
  m_ValidStates[AudioDecoderFunctions_GetAudioFrameRequirements][4] =
    State_None;
  m_ValidStates[AudioDecoderFunctions_GetAudioFrameRequirements][5] =
    State_None;
  m_ValidStates[AudioDecoderFunctions_GetAudioFrameRequirements][6] =
    State_None;
  m_ValidStates[AudioDecoderFunctions_GetAudioFrameRequirements][7] =
    State_None;
  m_ValidStates[AudioDecoderFunctions_GetAudioFrameRequirements][8] =
    State_None;
  m_ValidStates[AudioDecoderFunctions_GetInputBufferEvent][0] =
    State_Initialized;
  m_ValidStates[AudioDecoderFunctions_GetInputBufferEvent][1] = State_Prepared;
  m_ValidStates[AudioDecoderFunctions_GetInputBufferEvent][2] = State_Started;
  m_ValidStates[AudioDecoderFunctions_GetInputBufferEvent][3] = State_Stopped;
  m_ValidStates[AudioDecoderFunctions_GetInputBufferEvent][4] = State_None;
  m_ValidStates[AudioDecoderFunctions_GetInputBufferEvent][5] = State_None;
  m_ValidStates[AudioDecoderFunctions_GetInputBufferEvent][6] = State_None;
  m_ValidStates[AudioDecoderFunctions_GetInputBufferEvent][7] = State_None;
  m_ValidStates[AudioDecoderFunctions_GetInputBufferEvent][8] = State_None;
  m_ValidStates[AudioDecoderFunctions_GetAudioFrameReadyEvent][0] =
    State_Initialized;
  m_ValidStates[AudioDecoderFunctions_GetAudioFrameReadyEvent][1] =
    State_Prepared;
  m_ValidStates[AudioDecoderFunctions_GetAudioFrameReadyEvent][2] =
    State_Started;
  m_ValidStates[AudioDecoderFunctions_GetAudioFrameReadyEvent][3] =
    State_Stopped;
  m_ValidStates[AudioDecoderFunctions_GetAudioFrameReadyEvent][4] = State_None;
  m_ValidStates[AudioDecoderFunctions_GetAudioFrameReadyEvent][5] = State_None;
  m_ValidStates[AudioDecoderFunctions_GetAudioFrameReadyEvent][6] = State_None;
  m_ValidStates[AudioDecoderFunctions_GetAudioFrameReadyEvent][7] = State_None;
  m_ValidStates[AudioDecoderFunctions_GetAudioFrameReadyEvent][8] = State_None;
  m_ValidStates[AudioDecoderFunctions_GetAudioFrameFormatChangedEvent][0] =
    State_Initialized;
  m_ValidStates[AudioDecoderFunctions_GetAudioFrameFormatChangedEvent][1] =
    State_Prepared;
  m_ValidStates[AudioDecoderFunctions_GetAudioFrameFormatChangedEvent][2] =
    State_Started;
  m_ValidStates[AudioDecoderFunctions_GetAudioFrameFormatChangedEvent][3] =
    State_Stopped;
  m_ValidStates[AudioDecoderFunctions_GetAudioFrameFormatChangedEvent][4] =
    State_None;
  m_ValidStates[AudioDecoderFunctions_GetAudioFrameFormatChangedEvent][5] =
    State_None;
  m_ValidStates[AudioDecoderFunctions_GetAudioFrameFormatChangedEvent][6] =
    State_None;
  m_ValidStates[AudioDecoderFunctions_GetAudioFrameFormatChangedEvent][7] =
    State_None;
  m_ValidStates[AudioDecoderFunctions_GetAudioFrameFormatChangedEvent][8] =
    State_None;
  m_ValidStates[AudioDecoderFunctions_Start][0] = State_Prepared;
  m_ValidStates[AudioDecoderFunctions_Start][1] = State_Started;
  m_ValidStates[AudioDecoderFunctions_Start][2] = State_Stopped;
  m_ValidStates[AudioDecoderFunctions_Start][3] = State_None;
  m_ValidStates[AudioDecoderFunctions_Start][4] = State_None;
  m_ValidStates[AudioDecoderFunctions_Start][5] = State_None;
  m_ValidStates[AudioDecoderFunctions_Start][6] = State_None;
  m_ValidStates[AudioDecoderFunctions_Start][7] = State_None;
  m_ValidStates[AudioDecoderFunctions_Start][8] = State_None;
  m_ValidStates[AudioDecoderFunctions_Stop][0] = State_Started;
  m_ValidStates[AudioDecoderFunctions_Stop][1] = State_None;
  m_ValidStates[AudioDecoderFunctions_Stop][2] = State_None;
  m_ValidStates[AudioDecoderFunctions_Stop][3] = State_None;
  m_ValidStates[AudioDecoderFunctions_Stop][4] = State_None;
  m_ValidStates[AudioDecoderFunctions_Stop][5] = State_None;
  m_ValidStates[AudioDecoderFunctions_Stop][6] = State_None;
  m_ValidStates[AudioDecoderFunctions_Stop][7] = State_None;
  m_ValidStates[AudioDecoderFunctions_Stop][8] = State_None;
  m_ValidStates[AudioDecoderFunctions_Flush][0] = State_Started;
  m_ValidStates[AudioDecoderFunctions_Flush][1] = State_None;
  m_ValidStates[AudioDecoderFunctions_Flush][2] = State_None;
  m_ValidStates[AudioDecoderFunctions_Flush][3] = State_None;
  m_ValidStates[AudioDecoderFunctions_Flush][4] = State_None;
  m_ValidStates[AudioDecoderFunctions_Flush][5] = State_None;
  m_ValidStates[AudioDecoderFunctions_Flush][6] = State_None;
  m_ValidStates[AudioDecoderFunctions_Flush][7] = State_None;
  m_ValidStates[AudioDecoderFunctions_Flush][8] = State_None;
  m_ValidStates[AudioDecoderFunctions_Decode][0] = State_Started;
  m_ValidStates[AudioDecoderFunctions_Decode][1] = State_None;
  m_ValidStates[AudioDecoderFunctions_Decode][2] = State_None;
  m_ValidStates[AudioDecoderFunctions_Decode][3] = State_None;
  m_ValidStates[AudioDecoderFunctions_Decode][4] = State_None;
  m_ValidStates[AudioDecoderFunctions_Decode][5] = State_None;
  m_ValidStates[AudioDecoderFunctions_Decode][6] = State_None;
  m_ValidStates[AudioDecoderFunctions_Decode][7] = State_None;
  m_ValidStates[AudioDecoderFunctions_Decode][8] = State_None;
  m_ValidStates[AudioDecoderFunctions_GetAudioFrameProperties][0] = State_Started;
  m_ValidStates[AudioDecoderFunctions_GetAudioFrameProperties][1] = State_None;
  m_ValidStates[AudioDecoderFunctions_GetAudioFrameProperties][2] = State_None;
  m_ValidStates[AudioDecoderFunctions_GetAudioFrameProperties][3] = State_None;
  m_ValidStates[AudioDecoderFunctions_GetAudioFrameProperties][4] = State_None;
  m_ValidStates[AudioDecoderFunctions_GetAudioFrameProperties][5] = State_None;
  m_ValidStates[AudioDecoderFunctions_GetAudioFrameProperties][6] = State_None;
  m_ValidStates[AudioDecoderFunctions_GetAudioFrameProperties][7] = State_None;
  m_ValidStates[AudioDecoderFunctions_GetAudioFrameProperties][8] = State_None;
  m_ValidStates[AudioDecoderFunctions_GetAudioFrame][0] = State_Started;
  m_ValidStates[AudioDecoderFunctions_GetAudioFrame][1] = State_None;
  m_ValidStates[AudioDecoderFunctions_GetAudioFrame][2] = State_None;
  m_ValidStates[AudioDecoderFunctions_GetAudioFrame][3] = State_None;
  m_ValidStates[AudioDecoderFunctions_GetAudioFrame][4] = State_None;
  m_ValidStates[AudioDecoderFunctions_GetAudioFrame][5] = State_None;
  m_ValidStates[AudioDecoderFunctions_GetAudioFrame][6] = State_None;
  m_ValidStates[AudioDecoderFunctions_GetAudioFrame][7] = State_None;
  m_ValidStates[AudioDecoderFunctions_GetAudioFrame][8] = State_None;
}

MovieResult AudioDecoderState::ValidateCurrentState(
  AudioDecoderFunctions function) const {
  State state = GetState();
  for (int i = 0; i < ValidStateCountMax; i++) {
    if (m_ValidStates[function][i] == state) {
      return MovieResult_Success;
    }
  }

  if (function == AudioDecoderFunctions_Initialize) {
    return state == State_Created ? MovieResult_NotInitialized
      : MovieResult_AlreadyInitialized;
  }

  switch (state) {
    case State_Created:
      return MovieResult_NotInitialized;
    case State_Initialized:
      return static_cast<MovieResult>(50);
    case State_Prepared:
    case State_Stopped:
      return static_cast<MovieResult>(53);
    case State_Started:
      return static_cast<MovieResult>(36);
    default:
      return static_cast<MovieResult>(60);
  }
}

}
