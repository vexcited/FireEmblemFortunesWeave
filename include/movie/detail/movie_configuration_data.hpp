#pragma once

#include <stddef.h>

#include "movie/movie_result.hpp"
#include "nn/movie/detail/movie_message.hpp"
#include "nn/movie/movie_media_property.hpp"

namespace movie::detail {

// A copy of the format and the codec configuration that a decoder applies
// when the input buffer it came with is decoded.
class ConfigurationData {
public:
  ConfigurationData();
  ~ConfigurationData();

  MovieResult Initialize(nn::movie::detail::AllocatorInfo* allocatorInfo,
    const nn::movie::MediaProperty* property, const char* configuration,
    size_t size);
  void Finalize();
  MovieResult CopyMediaProperties(nn::movie::MediaProperty* pOut,
    nn::movie::MediaProperty* property);
  MovieResult Allocate(void** pOutMemory, size_t size);
  MovieResult Deallocate(void* memory);

  nn::movie::detail::AllocatorInfo* m_pAllocatorInfo;
  nn::movie::MediaProperty m_Property;
  char* m_pConfiguration;
  size_t m_ConfigurationSize;
};

}
