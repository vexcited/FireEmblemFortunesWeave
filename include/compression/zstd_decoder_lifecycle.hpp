#pragma once

#include "compression/zstd_decoder.hpp"

namespace fw::compression {

size_t ReleaseDecoder(DecoderContext* context);
size_t DecompressBuffer(void* destination, size_t destination_size,
  const void* source, size_t source_size);

}
