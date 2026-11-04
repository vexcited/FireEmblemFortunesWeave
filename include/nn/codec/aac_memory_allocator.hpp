#pragma once

#include <stddef.h>

#include "nn/lmem/frame_heap.hpp"
#include "nn/util/optional.hpp"

namespace nn::codec {

enum MEMORY_SECTION {
  SECT_DATA_L1 = 0x2000,
  SECT_DATA_L2,
  SECT_DATA_L1_A,
  SECT_DATA_L1_B,
  SECT_CONSTDATA_L1,
  SECT_DATA_EXTERN = 0x4000,
  SECT_CONSTDATA_EXTERN,
};

void InitializeAacMemoryAllocator(void* buffer, size_t size,
  const util::optional<lmem::FrameHeapState>& state);
lmem::FrameHeapState FinalizeAacMemoryAllocator();

void* FDKcalloc(unsigned int count, unsigned int size);
void* FDKmalloc(unsigned int size);
void FDKfree(void* pointer);
void* FDKaalloc(unsigned int size, unsigned int alignment);
void FDKafree(void* pointer);
void* FDKcalloc_L(unsigned int count, unsigned int size,
  MEMORY_SECTION section);
void FDKfree_L(void* pointer);
void* FDKaalloc_L(unsigned int size, unsigned int alignment,
  MEMORY_SECTION section);
void FDKafree_L(void* pointer);

}
