#pragma once

#include <stdint.h>

namespace nn::movie {

enum MediaMimeType : int32_t;
enum SeekMode : int32_t;

}

namespace movie {

enum AudioDecoderOutputFormat : int32_t {
  AudioDecoderOutputFormat_None,
};

enum AudioCodecMode : int32_t {
  AudioCodecMode_None,
};

enum VideoDecoderOutputFormat : int32_t {
  VideoDecoderOutputFormat_None,
};

enum VideoCodecMode : int32_t {
  VideoCodecMode_None,
};

}
