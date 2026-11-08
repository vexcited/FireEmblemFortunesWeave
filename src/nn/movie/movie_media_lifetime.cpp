// The public classes construct and destroy their allocator.
#define NN_MEM_STANDARD_ALLOCATOR_LIFETIME

#include "nn/movie/movie_media_extractor.hpp"

namespace nn::movie {

MediaExtractor::MediaExtractor() : m_pHolder(nullptr) {}

MediaExtractor::~MediaExtractor() {
  Finalize();
}

HlsMediaExtractor::HlsMediaExtractor() : m_pHolder(nullptr),
  m_PreferredPixels(0), m_MinBandwidthSamples(2) {}

HlsMediaExtractor::~HlsMediaExtractor() {
  Finalize();
}

MediaMuxer::MediaMuxer() : m_pHolder(nullptr) {}

MediaMuxer::~MediaMuxer() {
  Finalize();
}

}
