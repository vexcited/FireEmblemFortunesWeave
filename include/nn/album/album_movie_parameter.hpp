#pragma once

#include <stdint.h>

#include "nn/audio/renderer_api.hpp"

namespace nn::album {

enum ImageOrientation : int32_t {};

class MovieMakerMovieParameter {
 public:
  MovieMakerMovieParameter();

  static MovieMakerMovieParameter GetDefaultValue();

  int GetVideoBitRate() const;
  void SetVideoBitRate(int value);
  int GetVideoWidth() const;
  void SetVideoWidth(int value);
  int GetVideoHeight() const;
  void SetVideoHeight(int value);
  int GetVideoFrameRate() const;
  void SetVideoFrameRate(int value);
  int GetVideoKeyFrameInterval() const;
  void SetVideoKeyFrameInterval(int value);
  void SetVideoImageOrientation(ImageOrientation value);
  int GetAudioBitRate() const;
  void SetAudioBitRate(int value);
  int GetAudioSampleRate() const;
  void SetAudioSampleRate(int value);
  int GetAudioChannelCount() const;
  void SetAudioChannelCount(int value);
  audio::SampleFormat GetAudioSampleFormat() const;
  void SetAudioSampleFormat(audio::SampleFormat value);

 private:
  uint8_t m_Reserved0[16];
  uint32_t m_Version;
  int32_t m_VideoBitRate;
  int32_t m_VideoWidth;
  int32_t m_VideoHeight;
  int32_t m_VideoFrameRate;
  int32_t m_VideoKeyFrameInterval;
  int32_t m_AudioBitRate;
  int32_t m_AudioSampleRate;
  int32_t m_AudioChannelCount;
  int32_t m_AudioSampleFormat;
  int32_t m_VideoImageOrientation;
  uint8_t m_Reserved3c[68];
};

class MovieWriterMovieParameter {
 public:
  MovieWriterMovieParameter();

  void SetVideoBitRate(int value);
  void SetVideoWidth(int value);
  void SetVideoHeight(int value);
  void SetVideoTotalFrameCount(int value);
  void SetVideoFrameRate(int value);
  void SetVideoKeyFrameInterval(int value);
  void SetVideoImageOrientation(ImageOrientation value);
  void SetAudioBitRate(int value);
  void SetAudioSampleRate(int value);
  void SetAudioChannelCount(int value);
  void SetAudioSampleFormat(audio::SampleFormat value);

 private:
  uint8_t m_Reserved0[16];
  uint32_t m_Version;
  int32_t m_VideoBitRate;
  int32_t m_VideoWidth;
  int32_t m_VideoHeight;
  int32_t m_VideoTotalFrameCount;
  int32_t m_VideoFrameRate;
  int32_t m_VideoKeyFrameInterval;
  int32_t m_AudioBitRate;
  int32_t m_AudioSampleRate;
  int32_t m_AudioChannelCount;
  int32_t m_AudioSampleFormat;
  int32_t m_VideoImageOrientation;
  uint8_t m_Reserved40[64];
};

void SetMovieMakerErrorConversionEnabled(bool isEnabled);
void SetMovieWriterErrorConversionEnabled(bool isEnabled);

}
