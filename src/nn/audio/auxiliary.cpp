#include "nn/audio/auxiliary.hpp"

extern "C" void* memcpy(void*, const void*, size_t);

namespace nn::audio {

static_assert(sizeof(AuxInfoDsp) == 64);
static_assert(sizeof(AuxBufferInfo) == 128);
static_assert(offsetof(AuxBufferInfo, dsp) == 0x40);
static_assert(sizeof(common::SampleCounter) == 16);

namespace common {

void SampleCounter::Add(uint32_t count) {
  uint32_t value = *current;
  uint32_t start = *base;
  uint32_t next = value + count;
  *current = next - start < value - start ? start - 1 : next;
}

void SampleCounter::Reset() {
  *base = *current;
}

uint32_t SampleCounter::GetCount() const {
  uint32_t value = *current;
  return value - *base;
}

SampleCounter SampleCounter::MakeLostSampleCounter(AuxBufferInfo* info) {
  return {&info->lost_base, &info->dsp.lost};
}

SampleCounter SampleCounter::MakeAccumulatedSampleCounter(
  AuxBufferInfo* info) {
  return {&info->accumulated_base, &info->dsp.accumulated};
}

}

namespace dsp {

static void UpdateCounters(AuxBufferInfo* info, uint32_t capacity,
  uint32_t position, uint32_t increment, uint32_t& cursor) {
  auto accumulated = common::SampleCounter::MakeAccumulatedSampleCounter(info);

  if (accumulated.GetCount() >= capacity) {
    auto lost = common::SampleCounter::MakeLostSampleCounter(info);
    lost.Add(increment);
  }

  cursor = position % capacity;
  accumulated.Add(increment);
}

uint32_t ReadAuxBufferDsp(AuxBufferInfo* info, uintptr_t buffer,
  uint32_t capacity, int32_t* output, uint32_t count, uint32_t offset,
  uint32_t advance) {
  if (capacity == 0 || buffer == 0) {
    return 0;
  }

  uint32_t position = info->dsp.read + offset;

  if (position > capacity) {
    return 0;
  }

  uint32_t remaining = count;

  while (remaining != 0) {
    uint32_t available = capacity - position;
    uint32_t part = available < remaining ? available : remaining;
    auto source = reinterpret_cast<volatile int32_t*>(buffer + position * 4ul);
    InvalidateDataCache(const_cast<int32_t*>(source), part * 4ul);

    for (uint32_t index = 0; index < part; ++index) {
      *reinterpret_cast<volatile int32_t*>(output++) = *source++;
    }

    position = (position + part) % capacity;
    remaining -= part;
  }

  if (advance != 0) {
    UpdateCounters(info, capacity, info->dsp.read + advance, advance,
      info->dsp.read);
  }

  return count;
}

uint32_t WriteAuxBufferDsp(AuxBufferInfo* info, uintptr_t buffer,
  uint32_t capacity, const int32_t* input, uint32_t count, uint32_t offset,
  uint32_t advance) {
  if (capacity == 0 || buffer == 0) {
    return 0;
  }

  uint32_t position = info->dsp.write + offset;

  if (position > capacity) {
    return 0;
  }

  uint32_t remaining = count;

  while (remaining != 0) {
    uint32_t available = capacity - position;
    uint32_t part = available < remaining ? available : remaining;
    auto target = reinterpret_cast<volatile int32_t*>(buffer + position * 4ul);

    for (uint32_t index = 0; index < part; ++index) {
      *target++ = *reinterpret_cast<const volatile int32_t*>(input++);
    }

    FlushDataCache(reinterpret_cast<const void*>(buffer + position * 4ul),
      part * 4ul);
    position = (position + part) % capacity;
    remaining -= part;
  }

  if (advance != 0) {
    UpdateCounters(info, capacity, info->dsp.write + advance, advance,
      info->dsp.write);
  }

  return count;
}

static void FlushRange(uintptr_t buffer, uint32_t capacity, uint32_t start,
  uint32_t end) {
  if (end > start) {
    FlushDataCache(reinterpret_cast<const void*>(buffer + start * 4ul),
      (end - start) * 4ul);
  }
  else {
    if (capacity != start) {
      FlushDataCache(reinterpret_cast<const void*>(buffer + start * 4ul),
        (capacity - start) * 4ul);
    }

    if (end != 0) {
      FlushDataCache(reinterpret_cast<const void*>(buffer), end * 4ul);
    }
  }
}

void ReadAuxBufferDspGrouped(AuxBufferInfo* info, uintptr_t buffer,
  uint32_t capacity, int32_t** output, int channels, uint32_t count) {
  if (capacity == 0 || buffer == 0 || info->dsp.read > capacity) {
    return;
  }

  uint32_t position = info->dsp.read;
  uint32_t end = (position + count * uint32_t(channels)) % capacity;
  FlushRange(buffer, capacity, position, end);

  for (int channel = 0; channel < channels; ++channel) {
    uint32_t copied = 0;
    uint32_t remaining = count;

    while (remaining != 0) {
      uint32_t available = capacity - position;
      uint32_t part = available < remaining ? available : remaining;
      memcpy(output[channel] + copied,
        reinterpret_cast<const void*>(buffer + position * 4ul), part * 4ul);
      position = (position + part) % capacity;
      remaining -= part;
      copied += part;
    }
  }

  UpdateCounters(info, capacity, position, position, info->dsp.read);
}

void WriteAuxBufferDspGrouped(AuxBufferInfo* info, uintptr_t buffer,
  uint32_t capacity, int32_t** input, int channels, uint32_t count) {
  if (capacity == 0 || buffer == 0 || info->dsp.write > capacity) {
    return;
  }

  uint32_t start = info->dsp.write;
  uint32_t position = start;

  for (int channel = 0; channel < channels; ++channel) {
    uint32_t copied = 0;
    uint32_t remaining = count;

    while (remaining != 0) {
      uint32_t available = capacity - position;
      uint32_t part = available < remaining ? available : remaining;
      memcpy(reinterpret_cast<void*>(buffer + position * 4ul),
        input[channel] + copied, part * 4ul);
      position = (position + part) % capacity;
      remaining -= part;
      copied += part;
    }
  }

  FlushRange(buffer, capacity, start, position);
  UpdateCounters(info, capacity, position, position, info->dsp.write);
}

void ResetAuxBufferDsp(AuxInfoDsp* info) {
  info->read = 0;
  info->write = 0;
  info->accumulated = 0;
}

}
}
