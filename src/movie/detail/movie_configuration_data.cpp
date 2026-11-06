#include <cstring>

#include "movie/detail/movie_configuration_data.hpp"
#include "nn/movie/detail/movie_std_lib_allocator.hpp"

namespace nn::movie::detail {

void* AllocateMemory(size_t alignment, size_t size,
  AllocatorInfo* allocatorInfo);

}

namespace movie::detail {

using nn::movie::MediaProperty;
using nn::movie::detail::AllocateMemory;
using nn::movie::detail::AllocatorInfo;
using nn::movie::detail::FreeMemory;

namespace {

constexpr size_t ConfigurationAlignment = 16;

}

ConfigurationData::ConfigurationData()
  : m_pAllocatorInfo(nullptr), m_pConfiguration(nullptr),
    m_ConfigurationSize(0) {
}

ConfigurationData::~ConfigurationData() {
  Finalize();
}

void ConfigurationData::Finalize() {
  if (m_pConfiguration != nullptr) {
    if (m_pAllocatorInfo != nullptr) {
      FreeMemory(m_pConfiguration, m_pAllocatorInfo);
    }

    m_pConfiguration = nullptr;
  }
}

MovieResult ConfigurationData::Initialize(AllocatorInfo* allocatorInfo,
  const MediaProperty* property, const char* configuration, size_t size) {
  if (size == 0) {
    return MovieResult_InvalidArgument;
  }

  m_pAllocatorInfo = allocatorInfo;
  CopyMediaProperties(&m_Property, const_cast<MediaProperty*>(property));
  if (m_pAllocatorInfo == nullptr) {
    return MovieResult_OutOfMemory;
  }

  void* memory = AllocateMemory(ConfigurationAlignment, size,
    m_pAllocatorInfo);
  if (memory == nullptr) {
    return MovieResult_OutOfMemory;
  }

  m_pConfiguration = static_cast<char*>(memory);
  m_ConfigurationSize = size;
  std::memcpy(m_pConfiguration, configuration, size);
  return MovieResult_Success;
}

MovieResult ConfigurationData::CopyMediaProperties(MediaProperty* pOut,
  MediaProperty* property) {
  pOut->Clear();

  int32_t channelCount = 0;
  if (property->GetInt32(&channelCount, "channel-count")) {
    pOut->SetInt32("channel-count", channelCount);
  }

  int32_t sampleRate = 0;
  if (property->GetInt32(&sampleRate, "sample-rate")) {
    pOut->SetInt32("sample-rate", sampleRate);
  }

  int32_t colorStandard = 0;
  if (property->GetInt32(&colorStandard, "color-standard")) {
    pOut->SetInt32("color-standard", colorStandard);
  }

  int32_t colorRange = 0;
  if (property->GetInt32(&colorRange, "color-range")) {
    pOut->SetInt32("color-range", colorRange);
  }

  int32_t colorTransfer = 0;
  if (property->GetInt32(&colorTransfer, "color-transfer")) {
    pOut->SetInt32("color-transfer", colorTransfer);
  }

  int32_t frameRate = 0;
  if (property->GetInt32(&frameRate, "frame-rate")) {
    pOut->SetInt32("frame-rate", frameRate);
  }

  int32_t height = 0;
  if (property->GetInt32(&height, "height")) {
    pOut->SetInt32("height", height);
  }

  int32_t width = 0;
  if (property->GetInt32(&width, "width")) {
    pOut->SetInt32("width", width);
  }

  int32_t bitRate = 0;
  if (property->GetInt32(&bitRate, "bitrate")) {
    pOut->SetInt32("bitrate", bitRate);
  }

  size_t size = 0;
  if (property->GetSize(&size, "csd-0")) {
    pOut->SetSize("csd-0", size);
  }

  if (property->GetSize(&size, "csd-1")) {
    pOut->SetSize("csd-1", size);
  }

  if (property->GetSize(&size, "csd-2")) {
    pOut->SetSize("csd-2", size);
  }

  int64_t duration = 0;
  if (property->GetInt64(&duration, "duration-us")) {
    pOut->SetInt64("duration-us", duration);
  }

  size_t maxInputSize = 0;
  if (property->GetSize(&maxInputSize, "max-input-size")) {
    pOut->SetSize("max-input-size", maxInputSize);
  }

  char mime[16] = {};
  if (property->GetString(mime, sizeof(mime), "mime")) {
    pOut->SetString("mime", mime, sizeof(mime));
  }

  char language[16] = {};
  if (property->GetString(language, sizeof(language), "language")) {
    pOut->SetString("language", language, sizeof(language));
  }

  int32_t profile = 0;
  if (property->GetInt32(&profile, "profile")) {
    pOut->SetInt32("profile", profile);
  }

  return MovieResult_Success;
}

MovieResult ConfigurationData::Allocate(void** pOutMemory, size_t size) {
  if (size == 0) {
    return MovieResult_InvalidArgument;
  }

  *pOutMemory = nullptr;
  if (m_pAllocatorInfo == nullptr) {
    return MovieResult_OutOfMemory;
  }

  *pOutMemory = AllocateMemory(ConfigurationAlignment, size,
    m_pAllocatorInfo);
  return *pOutMemory != nullptr ? MovieResult_Success :
    MovieResult_OutOfMemory;
}

MovieResult ConfigurationData::Deallocate(void* memory) {
  if (m_pAllocatorInfo != nullptr) {
    FreeMemory(memory, m_pAllocatorInfo);
  }

  return MovieResult_Success;
}

}
