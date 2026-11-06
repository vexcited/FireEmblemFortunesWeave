// The allocator constructs and destroys its standard allocator.
#define NN_MEM_STANDARD_ALLOCATOR_LIFETIME

#include <new>

#include "movie/detail/movie_allocator.hpp"

namespace movie::detail {

namespace {

constexpr size_t HeaderSize = 0x1000;
constexpr uint32_t ReleasedRefCount = 0xdead00;

int AccumulateBlockSize(void* address, size_t size, void* user) {
  *static_cast<size_t*>(user) += size;
  return 1;
}

}

MovieResult Allocator::CreateInstance(IAllocator** ppOutAllocator,
  void* memory, size_t size) {
  *ppOutAllocator = nullptr;
  if (size <= HeaderSize) {
    return MovieResult_InvalidArgument;
  }

  if ((reinterpret_cast<uintptr_t>(memory) & 0xfff) != 0) {
    return MovieResult_InvalidAlignment;
  }

  Allocator* allocator = new (memory) Allocator(memory, size);
  allocator->AddRef();
  MovieResult result = allocator->Initialize();
  if (!IsSucceeded(result)) {
    allocator->Release();
    return result;
  }

  *ppOutAllocator = allocator;
  return MovieResult_Success;
}

Allocator::Allocator(void* memory, size_t size)
  : m_RefCount(0), m_IsFinalized(false), m_pMemory(memory), m_Size(size),
    m_InitialFreeSize(0) {
}

Allocator::~Allocator() {
  Finalize();
}

void Allocator::AddRef() {
  m_RefCount++;
}

// The object sits in the memory it manages, so it is only destroyed.
void Allocator::Release() {
  if (m_RefCount.fetch_sub(1) == 1) {
    m_RefCount = ReleasedRefCount;
    this->~Allocator();
  }
}

MovieResult Allocator::GetInterface(void** ppOutInterface, int id) {
  *ppOutInterface = nullptr;
  return MovieResult_MessageNotProcessed;
}

MovieResult Allocator::Initialize() {
  m_Allocator.Initialize(static_cast<uint8_t*>(m_pMemory) + HeaderSize,
    m_Size - HeaderSize);
  m_InitialFreeSize = m_Allocator.GetTotalFreeSize();
  return MovieResult_Success;
}

void Allocator::Finalize() {
  if (!m_IsFinalized.exchange(true)) {
    CalculateAllocatedMemory();
    m_Allocator.Finalize();
  }
}

size_t Allocator::CalculateAllocatedMemory() {
  size_t size = 0;
  m_Allocator.WalkAllocatedBlocks(AccumulateBlockSize, &size);
  return size;
}

void* Allocator::Allocate(size_t size) {
  return m_Allocator.Allocate(size);
}

void* Allocator::Allocate(size_t size, size_t alignment) {
  return m_Allocator.Allocate(size, alignment);
}

void Allocator::Free(void* address) {
  m_Allocator.Free(address);
}

void* Allocator::Reallocate(void* address, size_t size) {
  return m_Allocator.Reallocate(address, size);
}

}

namespace movie {

MovieResult CreateAllocator(IAllocator** ppOutAllocator, void* memory,
  size_t size) {
  *ppOutAllocator = nullptr;
  if (size <= 0x1000) {
    return MovieResult_InvalidArgument;
  }

  if ((reinterpret_cast<uintptr_t>(memory) & 0xfff) != 0) {
    return MovieResult_InvalidAlignment;
  }

  auto* allocator = new (memory) detail::Allocator(memory, size);
  allocator->AddRef();
  MovieResult result = allocator->Initialize();
  if (!IsSucceeded(result)) {
    allocator->Release();
    return result;
  }

  *ppOutAllocator = allocator;
  return MovieResult_Success;
}

}
