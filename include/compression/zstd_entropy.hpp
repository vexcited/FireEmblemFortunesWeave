#pragma once

#include "compression/zstd_huffman.hpp"

namespace fw::compression {

struct FseTableHeader {
  uint16_t table_log;
  uint16_t fast;
};

struct FseEntry {
  uint16_t next_state;
  uint8_t symbol;
  uint8_t bits;
};

struct FseState {
  size_t index;
  const FseEntry* table;
};

static_assert(sizeof(FseTableHeader) == 4);
static_assert(sizeof(FseEntry) == 4);
static_assert(sizeof(FseState) == 16);

size_t ReadNormalizedCounts(
  int16_t* counts, unsigned* maximum_symbol, unsigned* table_log,
  const void* source, size_t source_size
);

size_t BuildFseTable(
  uint32_t* table, const int16_t* counts, unsigned maximum_symbol,
  unsigned table_log, void* workspace, size_t workspace_size
);

void InitializeFseState(
  FseState* state, ReverseBitStream* bits, const uint32_t* table
);

size_t DecompressFse(
  void* destination, size_t destination_size, const void* source,
  size_t source_size, unsigned maximum_log, void* workspace,
  size_t workspace_size, int flags
);

}
