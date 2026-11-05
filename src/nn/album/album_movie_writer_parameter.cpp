#include "nn/album/album_movie_parameter.hpp"

namespace nn::album {

namespace {

bool g_IsMovieWriterErrorConversionEnabled;

}

void SetMovieWriterErrorConversionEnabled(bool isEnabled) {
  g_IsMovieWriterErrorConversionEnabled = isEnabled;
}

MovieWriterMovieParameter::MovieWriterMovieParameter()
  : m_Reserved0(), m_Version(0x104), m_VideoBitRate(0), m_VideoWidth(0),
    m_VideoHeight(0), m_VideoTotalFrameCount(0), m_VideoFrameRate(0),
    m_VideoKeyFrameInterval(0), m_AudioBitRate(0), m_AudioSampleRate(0),
    m_AudioChannelCount(0), m_AudioSampleFormat(0),
    m_VideoImageOrientation(0), m_Reserved40() {}

void MovieWriterMovieParameter::SetVideoBitRate(int value) {
  m_VideoBitRate = value;
}

void MovieWriterMovieParameter::SetVideoWidth(int value) {
  m_VideoWidth = value;
}

void MovieWriterMovieParameter::SetVideoHeight(int value) {
  m_VideoHeight = value;
}

void MovieWriterMovieParameter::SetVideoTotalFrameCount(int value) {
  m_VideoTotalFrameCount = value;
}

void MovieWriterMovieParameter::SetVideoFrameRate(int value) {
  m_VideoFrameRate = value;
}

void MovieWriterMovieParameter::SetVideoKeyFrameInterval(int value) {
  m_VideoKeyFrameInterval = value;
}

void MovieWriterMovieParameter::SetVideoImageOrientation(
  ImageOrientation value) {
  m_VideoImageOrientation = value;
}

void MovieWriterMovieParameter::SetAudioBitRate(int value) {
  m_AudioBitRate = value;
}

void MovieWriterMovieParameter::SetAudioSampleRate(int value) {
  m_AudioSampleRate = value;
}

void MovieWriterMovieParameter::SetAudioChannelCount(int value) {
  m_AudioChannelCount = value;
}

void MovieWriterMovieParameter::SetAudioSampleFormat(
  audio::SampleFormat value) {
  m_AudioSampleFormat = value;
}

}
