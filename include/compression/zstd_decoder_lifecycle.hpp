/*
  Adapted from Zstandard under the BSD license.
  Copyright Meta Platforms, Inc. and affiliates. All rights reserved.
  Original license: https://github.com/facebook/zstd/blob/v1.5.6/LICENSE
  Full license text: include/compression/zstd_bit_reader.hpp.
*/

#pragma once

#include "compression/zstd_decoder.hpp"

namespace fw::compression {

size_t ReleaseDecoder(DecoderContext* context);
size_t DecompressBuffer(void* destination, size_t destination_size,
  const void* source, size_t source_size);

}
