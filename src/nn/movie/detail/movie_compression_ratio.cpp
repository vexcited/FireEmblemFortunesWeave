#include <stdint.h>

namespace nn::movie {

enum MediaMimeType : int32_t;

}

namespace nn::movie::detail {

namespace {

constexpr int DefaultMinCompressionRatio = 2;

}

// Higher codec levels allow larger frames, which compress at least this much.
int GetVideoMinCompressionRatio(MediaMimeType mimeType, int level) {
  switch (mimeType) {
    case 0:
      switch (level) {
        case 512:
        case 1024:
        case 2048:
          return 4;
        default:
          return DefaultMinCompressionRatio;
      }
    case 1:
    case 4:
      switch (level) {
        case 64:
        case 128:
          return 4;
        case 256:
          return 6;
        case 512:
        case 1024:
        case 2048:
        case 4096:
        case 0x2000:
          return 8;
        default:
          return DefaultMinCompressionRatio;
      }
    case 3:
      switch (level) {
        case 256:
        case 512:
        case 1024:
        case 2048:
          return 4;
        case 4096:
          return 6;
        case 0x2000:
        case 0x4000:
        case 0x8000:
        case 0x10000:
          return 8;
        default:
          return DefaultMinCompressionRatio;
      }
    default:
      return DefaultMinCompressionRatio;
  }
}

}
