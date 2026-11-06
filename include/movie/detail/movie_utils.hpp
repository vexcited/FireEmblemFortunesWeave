#pragma once

#include <stddef.h>
#include <stdint.h>

#include "movie/movie_decoder_types.hpp"
#include "movie/movie_result.hpp"
#include "nn/result.hpp"

namespace nn::movie {

enum AvcProfile : int32_t {
  AvcProfile_None,
  AvcProfile_Baseline = 1,
  AvcProfile_Main = 2,
  AvcProfile_High = 4,
  AvcProfile_Extended = 8,
};

// Levels are single bits from level 1 upwards.
enum AvcLevel : int32_t {
  AvcLevel_None,
};

enum Av1Profile : int32_t {
  Av1Profile_None,
};

enum Av1Level : int32_t {
  Av1Level_None,
};

}

namespace nn::codec {

enum VideoDecoderOutputFormat : int32_t {
  VideoDecoderOutputFormat_None,
};

enum ImageTilingMode : int32_t {
  ImageTilingMode_None,
};

}

namespace movie::detail {

MovieResult ConvertNnMovieToMovieResult(nn::Result result);
nn::Result ConvertMovieResultToNnMovie(MovieResult result);
MovieResult ConvertHttpStatusToMovieResult(uint32_t status);
int GetVideoMinCompressionRatio(nn::movie::MediaMimeType mimeType,
  int level);
int GetAudioSampleByteSize(AudioDecoderOutputFormat format);

MovieResult GetH264NalUnitStartPositionAndSize(const uint8_t** ppData,
  size_t* pSize, const uint8_t** pOutNalUnit, size_t* pOutNalUnitSize,
  size_t* pOutOffset);
MovieResult GetH264NalUnitStartPositionAndSizeOfType(const uint8_t** ppData,
  size_t* pSize, const uint8_t** pOutNalUnit, size_t* pOutNalUnitSize,
  size_t* pOutOffset, uint8_t type);

nn::movie::AvcProfile ConvertAvcCodecProfileToNnMovieProfile(
  uint32_t profile);
nn::movie::AvcLevel ConvertAvcCodecLevelToNnMovieLevel(uint32_t level);
nn::movie::Av1Profile ConvertAv1CodecProfileToNnMovieProfile(
  uint32_t profile);
nn::movie::Av1Level ConvertAv1CodecLevelToNnMovieLevel(uint32_t level);
uint32_t ConvertNnMovieProfileToAvcCodecProfile(nn::movie::AvcProfile profile);
uint32_t ConvertNnMovieLevelToAvcCodecLevel(nn::movie::AvcLevel level);

nn::codec::VideoDecoderOutputFormat
  MovieVideoDecoderOutputFormatToNnCodecVideoOutputFormat(
    VideoDecoderOutputFormat format);
nn::codec::ImageTilingMode MovieVideoCodecModeToNnCodecImageTilingMode(
  VideoCodecMode mode);

}
