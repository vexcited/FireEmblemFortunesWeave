#pragma once

#include <stddef.h>
#include <stdint.h>

#include <type_traits>

namespace nn::crypto::detail {

template <typename BlockCipher, typename Self>
void UpdateImpl(Self* self, const void* data, size_t size) {
  constexpr size_t BlockSize = Self::BlockSize;
  const uint8_t* bytes = static_cast<const uint8_t*>(data);

  if (size_t buffered = self->GetBufferedDataSize(); buffered > 0) {
    size_t partial = BlockSize - buffered < size ? BlockSize - buffered : size;
    self->ProcessPartialData(bytes, partial);
    bytes += partial;
    size -= partial;
  }

  if (size >= BlockSize) {
    int blockCount = static_cast<int>(size / BlockSize);
    if constexpr (std::is_void_v<BlockCipher>) {
      self->ProcessBlocksGeneric(bytes, blockCount);
    }
    else {
      self->template ProcessBlocks<BlockCipher>(bytes, blockCount);
    }
    size_t processed = blockCount * BlockSize;
    bytes += processed;
    size -= processed;
  }

  if (size > 0) {
    self->ProcessRemainingData(bytes, size);
  }
}

template <typename BlockCipher, typename Self>
size_t UpdateImpl(Self* self, void* dst, size_t dstSize, const void* src,
  size_t srcSize) {
  constexpr size_t BlockSize = Self::BlockSize;
  uint8_t* output = static_cast<uint8_t*>(dst);
  const uint8_t* input = static_cast<const uint8_t*>(src);
  size_t processed = 0;

  if (size_t buffered = self->GetBufferedDataSize(); buffered > 0) {
    size_t partial = BlockSize - buffered < srcSize ?
      BlockSize - buffered : srcSize;
    size_t written = self->ProcessPartialData(output, input, partial);
    output += written;
    input += partial;
    srcSize -= partial;
    processed += written;
  }

  if (srcSize >= BlockSize) {
    int blockCount = static_cast<int>(srcSize / BlockSize);
    size_t written;
    if constexpr (std::is_void_v<BlockCipher>) {
      written = self->ProcessBlocksGeneric(output, input, blockCount);
    }
    else {
      written = self->template ProcessBlocks<BlockCipher>(output, input,
        blockCount);
    }
    size_t consumed = blockCount * BlockSize;
    output += written;
    input += consumed;
    srcSize -= consumed;
    processed += written;
  }

  if (srcSize > 0) {
    processed += self->ProcessRemainingData(output, input, srcSize);
  }

  return processed;
}

}
