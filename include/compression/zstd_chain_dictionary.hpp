/*
  Adapted from Zstandard under the BSD license.
  Copyright Meta Platforms, Inc. and affiliates. All rights reserved.
  Original license: https://github.com/facebook/zstd/blob/v1.5.6/LICENSE
  Full license text: include/compression/zstd_bit_reader.hpp.
*/

#pragma once

#include "compression/zstd_match.hpp"

namespace fw::compression {

uint32_t InsertAndFindChainIndex(MatchState* state, const uint8_t* source);

size_t SearchPreparedChain4(MatchState* state, const uint8_t* source,
                            const uint8_t* end, size_t* offset_base);
size_t SearchPreparedChain5(MatchState* state, const uint8_t* source,
                            const uint8_t* end, size_t* offset_base);
size_t SearchPreparedChain6(MatchState* state, const uint8_t* source,
                            const uint8_t* end, size_t* offset_base);

size_t FindGreedyPreparedChainMatches(MatchState* state,
                                      SequenceStore* sequences,
                                      uint32_t repeated_offsets[3],
                                      const void* source, size_t source_size);
size_t FindLazyPreparedChainMatches(MatchState* state, SequenceStore* sequences,
                                    uint32_t repeated_offsets[3],
                                    const void* source, size_t source_size);
size_t FindLazy2PreparedChainMatches(MatchState* state,
                                     SequenceStore* sequences,
                                     uint32_t repeated_offsets[3],
                                     const void* source, size_t source_size);

size_t SearchDedicatedChain4(MatchState* state, const uint8_t* source,
                             const uint8_t* end, size_t* offset_base);
size_t SearchDedicatedChain5(MatchState* state, const uint8_t* source,
                             const uint8_t* end, size_t* offset_base);
size_t SearchDedicatedChain6(MatchState* state, const uint8_t* source,
                             const uint8_t* end, size_t* offset_base);

size_t FindGreedyDedicatedChainMatches(MatchState* state,
                                       SequenceStore* sequences,
                                       uint32_t repeated_offsets[3],
                                       const void* source, size_t source_size);
size_t FindLazyDedicatedChainMatches(MatchState* state,
                                     SequenceStore* sequences,
                                     uint32_t repeated_offsets[3],
                                     const void* source, size_t source_size);
size_t FindLazy2DedicatedChainMatches(MatchState* state,
                                      SequenceStore* sequences,
                                      uint32_t repeated_offsets[3],
                                      const void* source, size_t source_size);

size_t SearchExternalChain4(MatchState* state, const uint8_t* source,
                            const uint8_t* end, size_t* offset_base);
size_t SearchExternalChain5(MatchState* state, const uint8_t* source,
                            const uint8_t* end, size_t* offset_base);
size_t SearchExternalChain6(MatchState* state, const uint8_t* source,
                            const uint8_t* end, size_t* offset_base);

size_t FindGreedyExternalChainMatches(MatchState* state,
                                      SequenceStore* sequences,
                                      uint32_t repeated_offsets[3],
                                      const void* source, size_t source_size);
size_t FindLazyExternalChainMatches(MatchState* state, SequenceStore* sequences,
                                    uint32_t repeated_offsets[3],
                                    const void* source, size_t source_size);
size_t FindLazy2ExternalChainMatches(MatchState* state,
                                     SequenceStore* sequences,
                                     uint32_t repeated_offsets[3],
                                     const void* source, size_t source_size);

}
