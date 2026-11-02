#pragma once

#include "memory/heap_manager.hpp"
#include "task/scheduler.hpp"

namespace nn::lmem {
namespace detail {

struct HeapHead;

}

enum class FreeMode : uint32_t;

}

namespace fw {

struct FrameHeapOwner {
  unsigned char unknown_00[0xb0];
  nn::lmem::detail::HeapHead* frame_heap;
};

struct RuntimeContext {
  unsigned char unknown_00[0x838];
  FrameHeapOwner* memory;
};

extern memory::HeapManager g_initial_heap_manager;
extern uint8_t g_filesystem_allocator_registered;
extern uint32_t g_loop_count;
extern task::Scheduler* g_scheduler;
extern RuntimeContext* g_runtime_context;

void InitializeTasks();
void InitializeProcessing();

static_assert(offsetof(FrameHeapOwner, frame_heap) == 0xb0);
static_assert(offsetof(RuntimeContext, memory) == 0x838);

}

extern "C" void nninitStartup();
extern "C" [[noreturn]] void nnMain();
