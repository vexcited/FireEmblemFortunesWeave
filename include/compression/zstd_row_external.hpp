/*
  Adapted from Zstandard under the BSD license.
  Copyright Meta Platforms, Inc. and affiliates. All rights reserved.
  Original license: https://github.com/facebook/zstd/blob/v1.5.6/LICENSE
  Full license text: include/compression/zstd_bit_reader.hpp.
*/

#pragma once

#include "compression/zstd_row.hpp"

namespace fw::compression {

size_t SearchExternalRow4x16(MatchState* state, const uint8_t* source,
                             const uint8_t* end, size_t* offset_base);
size_t SearchExternalRow4x32(MatchState* state, const uint8_t* source,
                             const uint8_t* end, size_t* offset_base);
size_t SearchExternalRow4x64(MatchState* state, const uint8_t* source,
                             const uint8_t* end, size_t* offset_base);
size_t SearchExternalRow5x16(MatchState* state, const uint8_t* source,
                             const uint8_t* end, size_t* offset_base);
size_t SearchExternalRow5x32(MatchState* state, const uint8_t* source,
                             const uint8_t* end, size_t* offset_base);
size_t SearchExternalRow5x64(MatchState* state, const uint8_t* source,
                             const uint8_t* end, size_t* offset_base);
size_t SearchExternalRow6x16(MatchState* state, const uint8_t* source,
                             const uint8_t* end, size_t* offset_base);
size_t SearchExternalRow6x32(MatchState* state, const uint8_t* source,
                             const uint8_t* end, size_t* offset_base);
size_t SearchExternalRow6x64(MatchState* state, const uint8_t* source,
                             const uint8_t* end, size_t* offset_base);

size_t FindGreedyExternalRowMatches(MatchState* state, SequenceStore* sequences,
                                    uint32_t repeated_offsets[3],
                                    const void* source, size_t source_size);
size_t FindLazyExternalRowMatches(MatchState* state, SequenceStore* sequences,
                                  uint32_t repeated_offsets[3],
                                  const void* source, size_t source_size);
size_t FindLazy2ExternalRowMatches(MatchState* state, SequenceStore* sequences,
                                   uint32_t repeated_offsets[3],
                                   const void* source, size_t source_size);

}
