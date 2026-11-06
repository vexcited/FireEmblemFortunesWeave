#include <string.h>

#include <algorithm>

#include "nn/audio/renderer_api.hpp"

namespace nn::os {

void FlushDataCache(const void* address, size_t size);

}

namespace nn::audio {
namespace {

Result ResultOutOfResource() {
  return Result{0xa99};
}

}

void SetAudioRendererExclusiveControlLeakageCheckEnabled(bool enabled) {
  detail::g_IsResourceExclusionCheckEnabled.store(enabled);
}

bool IsAudioRendererExclusiveControlLeakageCheckEnabled() {
  return detail::g_IsResourceExclusionCheckEnabled.load();
}

Result AddDeviceSink(AudioRendererConfig* config, DeviceSinkType* sink,
  FinalMixType* mix, const int8_t* input, int count, const char* name) {
  SinkInfo* info = config->_pSinkManager->Allocate(common::SinkType_Device);
  if (info == nullptr) {
    return ResultOutOfResource();
  }

  detail::CheckResourceExclusion(info);
  info->device.channelCount = count;
  memcpy(info->device.input, input, std::min(count, 6));
  memset(info->device.name, 0, sizeof(info->device.name));
  strncpy(info->device.name, name, sizeof(info->device.name) - 1);
  sink->_pSinkInfo = info;
  info->device.isDownMixParameterEnabled = false;
  memset(info->device.downMixParameter, 0,
    sizeof(info->device.downMixParameter));
  return Result{0};
}

void RemoveDeviceSink(AudioRendererConfig* config, DeviceSinkType* sink,
  FinalMixType* mix) {
  detail::CheckResourceExclusion(sink->_pSinkInfo);
  config->_pSinkManager->Free(sink->_pSinkInfo);
}

uint32_t GetSinkNodeId(const DeviceSinkType* sink) {
  return sink->_pSinkInfo->nodeId;
}

uint32_t GetSinkNodeId(const CircularBufferSinkType* sink) {
  return sink->_pSinkInfo->nodeId;
}

void SetDownMixParameter(DeviceSinkType* sink,
  const DeviceSinkType::DownMixParameter* parameter) {
  detail::CheckResourceExclusion(sink->_pSinkInfo);
  for (int i = 0; i < 4; ++i) {
    sink->_pSinkInfo->device.downMixParameter[i] = parameter->coefficient[i];
  }
}

void GetDownMixParameter(DeviceSinkType::DownMixParameter* parameter,
  const DeviceSinkType* sink) {
  *parameter = {};
  for (int i = 0; i < 4; ++i) {
    parameter->coefficient[i] = sink->_pSinkInfo->device.downMixParameter[i];
  }
}

void SetDownMixParameterEnabled(DeviceSinkType* sink, bool enabled) {
  detail::CheckResourceExclusion(sink->_pSinkInfo);
  sink->_pSinkInfo->device.isDownMixParameterEnabled = enabled;
}

bool IsDownMixParameterEnabled(const DeviceSinkType* sink) {
  return sink->_pSinkInfo->device.isDownMixParameterEnabled;
}

Result AddCircularBufferSink(AudioRendererConfig* config,
  CircularBufferSinkType* sink, FinalMixType* mix, const int8_t* input,
  int count, void* buffer, size_t size, SampleFormat format) {
  memset(buffer, 0, size);
  os::FlushDataCache(buffer, size);
  SinkInfo* info =
    config->_pSinkManager->Allocate(common::SinkType_CircularBuffer);
  if (info == nullptr) {
    return ResultOutOfResource();
  }

  detail::CheckResourceExclusion(info);
  info->circularBuffer.channelCount = count;
  memcpy(info->circularBuffer.input, input, std::min(count, 6));
  info->circularBuffer.buffer = buffer;
  info->circularBuffer.size = size;
  info->circularBuffer.format = format;
  info->circularBuffer.sampleCount = config->_pSinkManager->GetSampleCount();
  info->writeOffset = 0;
  sink->_pSinkInfo = info;
  return Result{0};
}

size_t ReadCircularBufferSink(CircularBufferSinkType* sink, void* output,
  size_t size) {
  SinkInfo* info = sink->_pSinkInfo;
  detail::CheckResourceExclusion(info);
  const int writeOffset = info->writeOffset;
  int readOffset = info->circularBuffer.readOffset;
  const size_t bufferSize = sink->_pSinkInfo->circularBuffer.size;
  const size_t wrap = static_cast<uint32_t>(readOffset)
    > static_cast<uint32_t>(writeOffset) ? bufferSize : 0;
  const size_t available = wrap - readOffset + writeOffset;
  size = std::min(size, available);

  if (size != 0) {
    auto* buffer =
      static_cast<uint8_t*>(sink->_pSinkInfo->circularBuffer.buffer);
    auto* destination = static_cast<uint8_t*>(output);
    size_t offset = readOffset;
    size_t remaining = size;
    do {
      const size_t chunk = remaining + offset > bufferSize
        ? bufferSize - offset : remaining;
      os::FlushDataCache(buffer + offset, chunk);
      memcpy(destination, buffer + offset, chunk);
      destination += chunk;
      remaining -= chunk;
      offset = (chunk + offset) % bufferSize;
    } while (remaining != 0);
    readOffset = offset;
  }
  info->circularBuffer.readOffset = readOffset;
  return size;
}

void RemoveCircularBufferSink(AudioRendererConfig* config,
  CircularBufferSinkType* sink, FinalMixType* mix) {
  detail::CheckResourceExclusion(sink->_pSinkInfo);
  config->_pSinkManager->Free(sink->_pSinkInfo);
}

size_t GetRequiredBufferSizeForCircularBufferSink(
  const AudioRendererParameter* parameter, int channelCount, int frameCount,
  SampleFormat sampleFormat) {
  const size_t sampleCount =
    static_cast<int64_t>(parameter->sampleCount) * channelCount;
  return GetSampleByteSize(sampleFormat) * (frameCount + 1) * sampleCount;
}

size_t ReadCircularBufferSink(CircularBufferSinkType* sink, void* output,
  size_t size, CircularBufferSinkType::InterleavingFormat format) {
  SinkInfo* info = sink->_pSinkInfo;
  detail::CheckResourceExclusion(info);
  const int writeOffset = info->writeOffset;
  size_t offset = info->circularBuffer.readOffset;
  const size_t bufferSize = sink->_pSinkInfo->circularBuffer.size;
  const size_t wrap = static_cast<uint32_t>(offset)
    > static_cast<uint32_t>(writeOffset) ? bufferSize : 0;
  const size_t available = wrap - offset + writeOffset;
  size = std::min(size, available);

  if (size != 0) {
    auto* buffer =
      static_cast<uint8_t*>(sink->_pSinkInfo->circularBuffer.buffer);
    if (format == CircularBufferSinkType::InterleavingFormat_Interleaved) {
      auto* destination = static_cast<int16_t*>(output);
      size_t remaining = size;
      do {
        auto* source = reinterpret_cast<const int16_t*>(buffer + offset);
        const size_t chunk = remaining + offset > bufferSize
          ? bufferSize - offset : remaining;
        os::FlushDataCache(buffer + offset, chunk);
        const int channelCount = sink->_pSinkInfo->circularBuffer.channelCount;
        const int frameCount = static_cast<int>(
          chunk / sizeof(int16_t) / static_cast<size_t>(channelCount));
        for (int i = 0; i < frameCount; ++i) {
          const int sampleCount =
            sink->_pSinkInfo->circularBuffer.sampleCount;
          const int block = i / sampleCount;
          const int sample = i % sampleCount;
          for (int channel = 0; channel < channelCount; ++channel) {
            *destination++ = source[(static_cast<int64_t>(block) *
              channelCount + channel) * sampleCount + sample];
          }
        }
        remaining -= chunk;
        offset = (chunk + offset) % bufferSize;
      } while (remaining != 0);
    }
    else {
      auto* destination = static_cast<uint8_t*>(output);
      size_t remaining = size;
      do {
        const size_t chunk = remaining + offset > bufferSize
          ? bufferSize - offset : remaining;
        os::FlushDataCache(buffer + offset, chunk);
        memcpy(destination, buffer + offset, chunk);
        destination += chunk;
        remaining -= chunk;
        offset = (chunk + offset) % bufferSize;
      } while (remaining != 0);
    }
  }
  info->circularBuffer.readOffset = offset;
  return size;
}

}
