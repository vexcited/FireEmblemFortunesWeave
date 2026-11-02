#include "nn/audio/interleave.hpp"

#include <arm_neon.h>
#include <stddef.h>

namespace nn::audio::util {

void* Copy(void*, const void*, size_t) asm("memcpy");

template<class T, bool Single>
static T* OutputPlane(T* packed, T* const __restrict* planes,
  int channel, int count) {
  if constexpr (Single) {
    return packed + int64_t(channel) * count;
  }
  else {
    return planes[channel];
  }
}

template<class T, bool Single>
static const T* InputPlane(const T* packed, const T* const __restrict* planes,
                            int channel, int count) {
  if constexpr (Single) {
    return packed + int64_t(channel) * count;
  }
  else {
    return planes[channel];
  }
}

template<class T, bool Single>
static void CopyMono(T* output, const T* input, int count) {
  constexpr unsigned Width = 16;

  if (uint32_t(count) < Width) {
    if constexpr (Single) {
      Copy(output, input,
        uint64_t(uint32_t(count) - 1) * sizeof(T) + sizeof(T));
    }
    else {
      unsigned remaining = uint32_t(count);
      unsigned prefix = remaining & 7;

      if (prefix != 0) {
        remaining &= 8;

        do {
          *output++ = *input++;
        } while (--prefix != 0);
      }

      if (uint32_t(count) - 1 >= 7) {
        do {
          for (unsigned frame = 0; frame < 8; ++frame) {
            output[frame] = input[frame];
          }

          input += 8;
          output += 8;
          remaining -= 8;
        } while (remaining != 0);
      }
    }

    return;
  }

  auto copy_block = [](T* target, const T* source) {
    if constexpr (sizeof(T) == 2) {
      uint8x16x2_t values = vld1q_u8_x2(
        reinterpret_cast<const uint8_t*>(source));
      vst1q_u8_x2(reinterpret_cast<uint8_t*>(target), values);
    }
    else {
      uint8x16x4_t values = vld1q_u8_x4(
        reinterpret_cast<const uint8_t*>(source));
      vst1q_u8_x4(reinterpret_cast<uint8_t*>(target), values);
    }
  };

  unsigned blocks = uint32_t(count) / Width;

  for (unsigned block = 0; block < blocks; ++block) {
    copy_block(output + block * Width, input + block * Width);
  }

  if (uint32_t(count) % Width != 0) {
    copy_block(output + count - Width, input + count - Width);
  }
}

template<unsigned Channels>
static unsigned StoreChannel(unsigned index) {
  if constexpr (Channels == 6 || Channels == 8) {
    return index / 2 + (index % 2) * (Channels / 2);
  }
  else {
    return index;
  }
}

template<class T, unsigned Channels, unsigned Width>
struct ChannelBlock {
  T values[Channels][Width];
};

template<class T, unsigned Channels, unsigned Width>
static ChannelBlock<T, Channels, Width> ReadInterleaved(const T* input) {
  ChannelBlock<T, Channels, Width> block;

  for (unsigned frame = 0; frame < Width; ++frame) {
    for (unsigned channel = 0; channel < Channels; ++channel) {
      block.values[channel][frame] = input[frame * Channels + channel];
    }
  }

  return block;
}

template<class T, unsigned Channels, unsigned Width, bool Single>
static void StorePlanar(T* packed, T* const __restrict* planes, int count,
                         unsigned offset,
                         const ChannelBlock<T, Channels, Width>& block) {
  for (unsigned index = 0; index < Channels; ++index) {
    unsigned channel = StoreChannel<Channels>(index);
    T* output = OutputPlane<T, Single>(packed, planes, channel, count) + offset;

    if constexpr (Width * sizeof(T) == 16) {
      vst1q_u8(reinterpret_cast<uint8_t*>(output),
        vld1q_u8(reinterpret_cast<const uint8_t*>(block.values[channel])));
    }
    else {
      vst1_u8(reinterpret_cast<uint8_t*>(output),
        vld1_u8(reinterpret_cast<const uint8_t*>(block.values[channel])));
    }
  }
}

template<class T, unsigned Channels, bool Single>
static void Deinterleave(T* packed, T* const __restrict* planes, const T* input,
                          int count) {
  constexpr unsigned Width = 16 / sizeof(T);
  unsigned frames = count;

  if (frames >= Width) {
    unsigned blocks = frames / Width;

    for (unsigned block = 0; block < blocks; ++block) {
      auto values = ReadInterleaved<T, Channels, Width>(
        input + block * Width * Channels);
      StorePlanar<T, Channels, Width, Single>(packed, planes, count,
        block * Width, values);
    }

    if (frames % Width != 0) {
      auto values = ReadInterleaved<T, Channels, Width>(
        input + (frames - Width) * Channels);
      StorePlanar<T, Channels, Width, Single>(packed, planes, count,
        frames - Width, values);
    }

    return;
  }

  unsigned offset = 0;

  if (frames >= Width / 2) {
    auto values = ReadInterleaved<T, Channels, Width / 2>(input);
    StorePlanar<T, Channels, Width / 2, Single>(packed, planes, count,
      0, values);
    offset = Width / 2;
  }

  if (frames != offset) {
    auto values = ReadInterleaved<T, Channels, Width / 2>(
      input + offset * Channels);

    for (unsigned frame = offset; frame < frames; ++frame) {
      for (unsigned channel = 0; channel < Channels; ++channel) {
        OutputPlane<T, Single>(packed, planes, channel, count)[frame]
          = values.values[channel][frame - offset];
      }
    }
  }
}

template<class T, unsigned Channels, unsigned Width, bool Single>
static ChannelBlock<T, Channels, Width> ReadPlanar(const T* packed,
  const T* const __restrict* planes, int count, unsigned offset) {
  ChannelBlock<T, Channels, Width> block;

  for (unsigned channel = 0; channel < Channels; ++channel) {
    const T* input = InputPlane<T, Single>(packed, planes, channel, count);

    for (unsigned frame = 0; frame < Width; ++frame) {
      block.values[channel][frame] = input[offset + frame];
    }
  }

  return block;
}

template<class T, unsigned Channels, unsigned Width>
static void StoreInterleaved(T* output,
  const ChannelBlock<T, Channels, Width>& block, unsigned count = Width) {
  for (unsigned frame = 0; frame < count; ++frame) {
    for (unsigned channel = 0; channel < Channels; ++channel) {
      output[frame * Channels + channel] = block.values[channel][frame];
    }
  }
}

template<class T, unsigned Channels, bool Single>
static void Interleave(T* output, const T* packed,
  const T* const __restrict* planes, int count) {
  constexpr unsigned Width = 16 / sizeof(T);
  unsigned frames = count;

  if (frames >= Width) {
    unsigned blocks = frames / Width;

    for (unsigned block = 0; block < blocks; ++block) {
      auto values = ReadPlanar<T, Channels, Width, Single>(packed, planes,
        count, block * Width);
      StoreInterleaved(output + block * Width * Channels, values);
    }

    if (frames % Width != 0) {
      auto values = ReadPlanar<T, Channels, Width, Single>(packed, planes,
        count, frames - Width);
      StoreInterleaved(output + (frames - Width) * Channels, values);
    }

    return;
  }

  unsigned offset = 0;

  if (frames >= Width / 2) {
    auto values = ReadPlanar<T, Channels, Width / 2, Single>(packed, planes,
      count, 0);
    StoreInterleaved(output, values);
    offset = Width / 2;
  }

  if (frames != offset) {
    auto values = ReadPlanar<T, Channels, Width / 2, Single>(packed, planes,
      count, offset);
    StoreInterleaved(output + offset * Channels, values, frames - offset);
  }
}

template<class T, bool Single>
static void DeinterleaveDispatch(T* packed, T* const __restrict* planes,
  const T* input, int channels, int count) {
  switch (channels) {
    case 1:
      CopyMono<T, Single>(OutputPlane<T, Single>(packed, planes, 0, count),
        input, count);
      return;
    case 2:
      Deinterleave<T, 2, Single>(packed, planes, input, count);
      return;
    case 3:
      Deinterleave<T, 3, Single>(packed, planes, input, count);
      return;
    case 4:
      Deinterleave<T, 4, Single>(packed, planes, input, count);
      return;
    case 6:
      Deinterleave<T, 6, Single>(packed, planes, input, count);
      return;
    case 8:
      Deinterleave<T, 8, Single>(packed, planes, input, count);
      return;
  }

  int frames = count > 1 ? count : 1;
  int planes_count = channels > 1 ? channels : 1;

  for (int frame = 0; frame < frames; ++frame) {
    for (int channel = 0; channel < planes_count; ++channel) {
      OutputPlane<T, Single>(packed, planes, channel, count)[frame] = *input++;
    }
  }
}

template<class T, bool Single>
static void InterleaveDispatch(T* output, const T* packed,
                                const T* const __restrict* planes,
                                int channels, int count) {
  switch (channels) {
    case 1:
      CopyMono<T, Single>(output,
        InputPlane<T, Single>(packed, planes, 0, count), count);
      return;
    case 2:
      Interleave<T, 2, Single>(output, packed, planes, count);
      return;
    case 3:
      Interleave<T, 3, Single>(output, packed, planes, count);
      return;
    case 4:
      Interleave<T, 4, Single>(output, packed, planes, count);
      return;
    case 6:
      Interleave<T, 6, Single>(output, packed, planes, count);
      return;
    case 8:
      Interleave<T, 8, Single>(output, packed, planes, count);
      return;
  }

  int frames = count > 1 ? count : 1;
  int planes_count = channels > 1 ? channels : 1;

  for (int channel = 0; channel < planes_count; ++channel) {
    const T* input = InputPlane<T, Single>(packed, planes, channel, frames);

    for (int frame = 0; frame < frames; ++frame) {
      output[int64_t(frame) * channels + channel] = input[frame];
    }
  }
}

template<class T>
void VecDeinterleaveToSingleBuffer(T* output, const T* input,
                                   int channels, int count) {
  DeinterleaveDispatch<T, true>(output, nullptr, input, channels, count);
}

template<class T>
void VecDeinterleave(T* const __restrict* output, const T* input,
                      int channels, int count) {
  DeinterleaveDispatch<T, false>(nullptr, output, input, channels, count);
}

template<class T>
void VecInterleaveFromSingleBuffer(T* output, const T* input,
                                   int channels, int count) {
  InterleaveDispatch<T, true>(output, input, nullptr, channels, count);
}

template<class T>
void VecInterleave(T* output, const T* const __restrict* input,
                    int channels, int count) {
  InterleaveDispatch<T, false>(output, nullptr, input, channels, count);
}

template void VecDeinterleaveToSingleBuffer<int16_t>(
  int16_t*, const int16_t*, int, int);
template void VecDeinterleave<int16_t>(
  int16_t* const __restrict*, const int16_t*, int, int);
template void VecInterleaveFromSingleBuffer<int16_t>(
  int16_t*, const int16_t*, int, int);
template void VecInterleave<int16_t>(
  int16_t*, const int16_t* const __restrict*, int, int);

template void VecDeinterleaveToSingleBuffer<int32_t>(
  int32_t*, const int32_t*, int, int);
template void VecDeinterleave<int32_t>(
  int32_t* const __restrict*, const int32_t*, int, int);
template void VecInterleaveFromSingleBuffer<int32_t>(
  int32_t*, const int32_t*, int, int);
template void VecInterleave<int32_t>(
  int32_t*, const int32_t* const __restrict*, int, int);

template void VecDeinterleaveToSingleBuffer<float>(
  float*, const float*, int, int);
template void VecDeinterleave<float>(
  float* const __restrict*, const float*, int, int);
template void VecInterleaveFromSingleBuffer<float>(
  float*, const float*, int, int);
template void VecInterleave<float>(
  float*, const float* const __restrict*, int, int);

}
