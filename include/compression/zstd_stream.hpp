#pragma once

#include "compression/zstd_decoder.hpp"

namespace fw::compression {

size_t DecompressStream(
  DecoderContext* context, OutputBuffer* output, InputBuffer* input);

}
