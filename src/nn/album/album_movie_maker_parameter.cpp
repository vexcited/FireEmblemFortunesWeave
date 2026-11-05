#include "nn/album/album_movie_parameter.hpp"

namespace nn::album {

namespace {

bool g_IsMovieMakerErrorConversionEnabled;

}

void SetMovieMakerErrorConversionEnabled(bool isEnabled) {
  g_IsMovieMakerErrorConversionEnabled = isEnabled;
}

MovieMakerMovieParameter MovieMakerMovieParameter::GetDefaultValue() {
  return MovieMakerMovieParameter();
}

MovieMakerMovieParameter::MovieMakerMovieParameter()
  : m_Reserved0(), m_Version(0x103), m_VideoBitRate(8000000),
    m_VideoWidth(1280), m_VideoHeight(720), m_VideoFrameRate(30),
    m_VideoKeyFrameInterval(30), m_AudioBitRate(128000),
    m_AudioSampleRate(48000), m_AudioChannelCount(2),
    m_AudioSampleFormat(audio::SampleFormat_PcmInt16),
    m_VideoImageOrientation(0), m_Reserved3c() {}

int MovieMakerMovieParameter::GetVideoBitRate() const {
  return m_VideoBitRate;
}

void MovieMakerMovieParameter::SetVideoBitRate(int value) {
  m_VideoBitRate = value;
}

int MovieMakerMovieParameter::GetVideoWidth() const {
  return m_VideoWidth;
}

void MovieMakerMovieParameter::SetVideoWidth(int value) {
  m_VideoWidth = value;
}

int MovieMakerMovieParameter::GetVideoHeight() const {
  return m_VideoHeight;
}

void MovieMakerMovieParameter::SetVideoHeight(int value) {
  m_VideoHeight = value;
}

int MovieMakerMovieParameter::GetVideoFrameRate() const {
  return m_VideoFrameRate;
}

void MovieMakerMovieParameter::SetVideoFrameRate(int value) {
  m_VideoFrameRate = value;
}

int MovieMakerMovieParameter::GetVideoKeyFrameInterval() const {
  return m_VideoKeyFrameInterval;
}

void MovieMakerMovieParameter::SetVideoKeyFrameInterval(int value) {
  m_VideoKeyFrameInterval = value;
}

void MovieMakerMovieParameter::SetVideoImageOrientation(
  ImageOrientation value) {
  m_VideoImageOrientation = value;
}

int MovieMakerMovieParameter::GetAudioBitRate() const {
  return m_AudioBitRate;
}

void MovieMakerMovieParameter::SetAudioBitRate(int value) {
  m_AudioBitRate = value;
}

int MovieMakerMovieParameter::GetAudioSampleRate() const {
  return m_AudioSampleRate;
}

void MovieMakerMovieParameter::SetAudioSampleRate(int value) {
  m_AudioSampleRate = value;
}

int MovieMakerMovieParameter::GetAudioChannelCount() const {
  return m_AudioChannelCount;
}

void MovieMakerMovieParameter::SetAudioChannelCount(int value) {
  m_AudioChannelCount = value;
}

audio::SampleFormat MovieMakerMovieParameter::GetAudioSampleFormat() const {
  return static_cast<audio::SampleFormat>(m_AudioSampleFormat);
}

void MovieMakerMovieParameter::SetAudioSampleFormat(audio::SampleFormat value) {
  m_AudioSampleFormat = value;
}

}
