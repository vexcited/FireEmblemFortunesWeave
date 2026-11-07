#include <atomic>
#include <new>

#include "nn/diag/diag_abort.hpp"
#include "nn/memory_resource.hpp"
#include "nn/os/managers.hpp"
#include "nn/os/mutex.hpp"
#include "nn/os/tls.hpp"

namespace nn::sf {

class ScopedCurrentMemoryResourceSetter {
public:
  explicit ScopedCurrentMemoryResourceSetter(MemoryResource* pResource);
  ~ScopedCurrentMemoryResourceSetter();

private:
  MemoryResource* m_pPrevious;
};

MemoryResource* GetNewDeleteMemoryResource();
MemoryResource* GetGlobalDefaultMemoryResource();
MemoryResource* SetGlobalDefaultMemoryResource(MemoryResource* pResource);
MemoryResource* GetCurrentMemoryResource();
MemoryResource* SetCurrentMemoryResource(MemoryResource* pResource);
MemoryResource* GetCurrentEffectiveMemoryResource();

namespace detail {

void* DefaultAllocateImpl(size_t size, size_t alignment, size_t offset);
void DefaultDeallocateImpl(void* pointer, size_t size, size_t alignment,
  size_t offset);

}

namespace cmif {

uint32_t GetInlineContext();
uint32_t SetInlineContext(uint32_t context);

}

uint8_t GetFsInlineContext(os::ThreadType* pThread);

namespace {

class NewDeleteMemoryResource : public MemoryResource {
private:
  void* do_allocate(size_t bytes, size_t) override {
    return ::operator new(bytes, std::nothrow);
  }

  void do_deallocate(void* pointer, size_t, size_t) override {
    ::operator delete(pointer, std::nothrow);
  }

  bool do_is_equal(const MemoryResource& other) const noexcept override {
    return this == &other;
  }
};

// The current resource lives in a thread local slot allocated on first use.
struct CurrentMemoryResourceState {
  os::MutexType mutex;
  bool reserved;
  std::atomic<bool> isInitialized;
  os::TlsSlot slot;
  MemoryResource* pGlobalDefault;
};

CurrentMemoryResourceState g_State;

[[gnu::always_inline]] void EnsureSlot() {
  if (g_State.isInitialized.load(std::memory_order_acquire)) {
    return;
  }
  os::LockMutex(&g_State.mutex);
  if (!g_State.isInitialized.load(std::memory_order_relaxed)) {
    NN_ABORT_UNLESS_RESULT_SUCCESS(
      os::SdkAllocateTlsSlot(&g_State.slot, nullptr));
    g_State.isInitialized.store(true, std::memory_order_release);
  }
  os::UnlockMutex(&g_State.mutex);
}

[[gnu::always_inline]] MemoryResource* GetSlotValue() {
  return reinterpret_cast<MemoryResource*>(os::GetTlsValue(g_State.slot));
}

// The inline context sits in the thread object.
[[gnu::always_inline]] std::atomic<uint64_t>* GetInlineContextStorage(
  os::ThreadType* pThread) {
  return reinterpret_cast<std::atomic<uint64_t>*>(
    reinterpret_cast<uintptr_t>(pThread) + 0x100);
}

}

MemoryResource* GetNewDeleteMemoryResource() {
  static NewDeleteMemoryResource s_Resource;
  return &s_Resource;
}

MemoryResource* GetGlobalDefaultMemoryResource() {
  return g_State.pGlobalDefault;
}

MemoryResource* SetGlobalDefaultMemoryResource(MemoryResource* pResource) {
  MemoryResource* pPrevious = g_State.pGlobalDefault;
  g_State.pGlobalDefault = pResource;
  return pPrevious;
}

MemoryResource* GetCurrentMemoryResource() {
  EnsureSlot();
  return GetSlotValue();
}

MemoryResource* SetCurrentMemoryResource(MemoryResource* pResource) {
  EnsureSlot();
  MemoryResource* pPrevious = GetSlotValue();
  os::SetTlsValue(g_State.slot, reinterpret_cast<uintptr_t>(pResource));
  return pPrevious;
}

MemoryResource* GetCurrentEffectiveMemoryResource() {
  EnsureSlot();
  MemoryResource* pResource = GetSlotValue();
  if (pResource == nullptr) {
    pResource = g_State.pGlobalDefault;
  }
  if (pResource != nullptr) {
    return pResource;
  }
  return GetNewDeleteMemoryResource();
}

ScopedCurrentMemoryResourceSetter::ScopedCurrentMemoryResourceSetter(
  MemoryResource* pResource) {
  EnsureSlot();
  m_pPrevious = GetSlotValue();
  os::SetTlsValue(g_State.slot, reinterpret_cast<uintptr_t>(pResource));
}

ScopedCurrentMemoryResourceSetter::~ScopedCurrentMemoryResourceSetter() {
  os::SetTlsValue(g_State.slot, reinterpret_cast<uintptr_t>(m_pPrevious));
}

namespace detail {

// The block starts with its resource, a null one meaning plain new.
void* DefaultAllocateImpl(size_t size, size_t alignment, size_t offset) {
  EnsureSlot();
  MemoryResource* pResource = GetSlotValue();
  if (pResource == nullptr) {
    pResource = g_State.pGlobalDefault;
  }
  void* pBlock = pResource != nullptr ?
    pResource->allocate(size, alignment) :
    ::operator new(size, std::nothrow);
  if (pBlock == nullptr) {
    return nullptr;
  }
  *static_cast<MemoryResource**>(pBlock) = pResource;
  return static_cast<char*>(pBlock) + offset;
}

void DefaultDeallocateImpl(void* pointer, size_t size, size_t alignment,
  size_t offset) {
  if (pointer == nullptr) {
    return;
  }
  void* pBlock = static_cast<char*>(pointer) - offset;
  MemoryResource* pResource = *static_cast<MemoryResource**>(pBlock);
  if (pResource != nullptr) {
    pResource->deallocate(pBlock, size, alignment);
  }
  else {
    ::operator delete(pBlock, std::nothrow);
  }
}

}

namespace cmif {

uint32_t GetInlineContext() {
  return static_cast<uint32_t>(GetInlineContextStorage(os::GetCurrentThread())
    ->load(std::memory_order_acquire));
}

uint32_t SetInlineContext(uint32_t context) {
  return static_cast<uint32_t>(
    GetInlineContextStorage(os::GetCurrentThread())->exchange(context));
}

}

uint8_t GetFsInlineContext(os::ThreadType* pThread) {
  return reinterpret_cast<std::atomic<uint8_t>*>(
    reinterpret_cast<uintptr_t>(pThread) + 0x100)->load(
    std::memory_order_acquire);
}

}
