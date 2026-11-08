#include <stddef.h>
#include <stdint.h>

// Leak checking allocations carry a header with the size, the block and a
// magic in front of the data, a guard word behind it, and a 0xcc fill.
struct NvOsAllocator {
  void* (*alloc)(NvOsAllocator* allocator, size_t size);
  void* (*allocAlign)(NvOsAllocator* allocator, size_t alignment,
    size_t size);
  void* (*realloc)(NvOsAllocator* allocator, void* block, size_t size);
};

struct NvOsAllocHeader {
  uint64_t reserved;
  uint64_t size;
  void* block;
  uint64_t magic;
};

extern "C" void* memset(void* destination, int value, size_t size);

namespace {

const uint64_t NvOsAllocMagic = 0xc0decafef00dfeed;
const uint64_t NvOsAllocGuard = 0xfeedbeefdeadbabe;
const uint64_t NvOsAllocFill = 0xcccccccccccccccc;
const size_t NvOsAllocFillWhole = 0x20;
const size_t NvOsAllocOverhead = sizeof(NvOsAllocHeader) + sizeof(uint64_t);

// Aligned blocks only keep the size, block and magic words in front.
const size_t NvOsAllocAlignedHeader = sizeof(NvOsAllocHeader) - 8;

[[gnu::always_inline]] inline void* Wrap(uint8_t* data, void* block,
  size_t size) {
  auto* header = reinterpret_cast<NvOsAllocHeader*>(data) - 1;
  header->size = size;
  header->block = block;
  header->magic = NvOsAllocMagic;
  *reinterpret_cast<uint64_t*>(data + size) = NvOsAllocGuard;
  return data;
}

// Short blocks are filled whole, longer ones only at both ends.
[[gnu::always_inline]] inline void* Fill(uint8_t* data, size_t size) {
  if (size <= NvOsAllocFillWhole) {
    return memset(data, 0xcc, size);
  }

  auto* head = reinterpret_cast<uint64_t*>(data);
  auto* tail = reinterpret_cast<uint64_t*>(data + size);
  head[0] = NvOsAllocFill;
  head[1] = NvOsAllocFill;
  tail[-2] = NvOsAllocFill;
  tail[-1] = NvOsAllocFill;
  return data;
}

}

extern "C" void* NvOsAllocLeak(NvOsAllocator* allocator, size_t size) {
  auto* block = static_cast<uint8_t*>(
    allocator->alloc(allocator, size + NvOsAllocOverhead));
  if (block == nullptr) {
    return nullptr;
  }

  uint8_t* data = block + sizeof(NvOsAllocHeader);
  Wrap(data, block, size);
  return Fill(data, size);
}

extern "C" void* NvOsAllocAlignLeak(NvOsAllocator* allocator,
  size_t alignment, size_t size) {
  const size_t align = alignment > 16 ? alignment : 16;
  const size_t offset = (NvOsAllocAlignedHeader + align - 1) & -align;

  uint8_t* block;
  if (alignment <= 16) {
    block = static_cast<uint8_t*>(
      allocator->alloc(allocator, size + NvOsAllocOverhead));
  }
  else {
    block = static_cast<uint8_t*>(allocator->allocAlign(allocator, align,
      size + offset + sizeof(uint64_t)));
  }

  if (block == nullptr) {
    return nullptr;
  }

  uint8_t* data = block + offset;
  Wrap(data, block, size);
  return Fill(data, size);
}

extern "C" void* NvOsReallocLeak(NvOsAllocator* allocator, void* pointer,
  size_t size) {
  void* previous = nullptr;
  if (pointer != nullptr) {
    previous = (reinterpret_cast<NvOsAllocHeader*>(pointer) - 1)->block;
  }

  auto* block = static_cast<uint8_t*>(
    allocator->realloc(allocator, previous, size + NvOsAllocOverhead));
  if (block == nullptr) {
    return nullptr;
  }

  return Wrap(block + sizeof(NvOsAllocHeader), block, size);
}
