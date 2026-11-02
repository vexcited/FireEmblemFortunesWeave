#include "startup.hpp"

namespace nn::fs {

void SetAllocator(
  void* (*allocate)(size_t), void (*free)(void*, size_t)
);

}

namespace nn::lmem {

void FreeToFrameHeap(detail::HeapHead* heap, FreeMode mode);

}

extern "C" void nninitStartup() {
  fw::g_initial_heap_manager.Construct();
  fw::memory::g_heap_manager = &fw::g_initial_heap_manager;
  fw::g_initial_heap_manager.Initialize();

  if ((fw::g_filesystem_allocator_registered & 1) == 0) {
    nn::fs::SetAllocator(
      fw::memory::AllocateForFileSystem, fw::memory::FreeForFileSystem
    );
    fw::g_filesystem_allocator_registered = 1;
  }
}

extern "C" [[noreturn]] void nnMain() {
  fw::InitializeTasks();
  fw::InitializeProcessing();

  for (;;) {
    ++fw::g_loop_count;
    fw::g_scheduler->Dispatch();
    nn::lmem::FreeToFrameHeap(
      fw::g_runtime_context->memory->frame_heap,
      static_cast<nn::lmem::FreeMode>(3)
    );
  }
}
