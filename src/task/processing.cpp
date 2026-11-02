#include "task/processing.hpp"

extern "C" void* memcpy(void* target, const void* source, size_t size);

namespace nn::vi {

void QueryDisplayBufferMaxResolution(uint32_t* resolution, const void* display)
  asm("_ZN2nn2vi31QueryDisplayBufferMaxResolutionEPNS0_19BufferMaxResolutionE"
      "PKNS0_7DisplayE");

}

namespace nn::os {

void AcquireReadLock(void* lock)
  asm("_ZN2nn2os15AcquireReadLockEPNS0_20ReaderWriterLockTypeE");
void ReleaseReadLock(void* lock)
  asm("_ZN2nn2os15ReleaseReadLockEPNS0_20ReaderWriterLockTypeE");
int64_t ConvertToTimeSpan(int64_t ticks)
  asm("_ZN2nn2os17ConvertToTimeSpanENS0_4TickE");
void SleepThread(int64_t nanoseconds)
  asm("_ZN2nn2os11SleepThreadENS_8TimeSpanE");

}

namespace nn::lmem {

void FreeToFrameHeap(detail::HeapHead* heap, FreeMode mode);

}

namespace fw::processing {
namespace {

void Retain(SharedControl* control) {
  __atomic_fetch_add(&control->shared_owners, uint64_t{1}, __ATOMIC_RELAXED);
}

void Release(SharedControl* control) {
  // The stored owner count is one less than the number of owners.
  if (__atomic_fetch_sub(
    &control->shared_owners, uint64_t{1}, __ATOMIC_ACQ_REL
  ) == 0) {
    control->vtable->destroy_object(control);
    ReleaseWeak(control);
  }
}

void Append(SharedTask task) {
  const uintptr_t end = reinterpret_cast<uintptr_t>(g_processing_tasks.end);
  const uintptr_t capacity_end = reinterpret_cast<uintptr_t>(
    g_processing_tasks.capacity_end
  );
  SharedTask* next;

  if (end < capacity_end) {
    *g_processing_tasks.end = task;
    next = g_processing_tasks.end + 1;
    Retain(task.control);
  }
  else {
    SharedTask* old_begin = g_processing_tasks.begin;
    const uintptr_t begin = reinterpret_cast<uintptr_t>(old_begin);
    const uint64_t bytes = end - begin;
    const uint64_t count = static_cast<int64_t>(bytes) >> 4;
    uint64_t capacity = count + 1;

    if ((capacity >> 60) != 0) {
      TaskVectorLengthError();
    }

    const uint64_t capacity_bytes = capacity_end - begin;
    const uint64_t doubled = static_cast<int64_t>(capacity_bytes) >> 3;

    if (doubled > capacity) {
      capacity = doubled;
    }

    if (capacity_bytes >= 0x7ffffffffffffff0) {
      capacity = 0x0fffffffffffffff;
    }

    if ((capacity >> 60) != 0) {
      AllocationSizeError();
    }

    auto* allocation = static_cast<unsigned char*>(
      memory::g_heap_manager->Allocate(capacity * 16, 16, 0)
    );
    auto* position = reinterpret_cast<SharedTask*>(allocation + bytes);
    *position = task;
    next = position + 1;
    auto* replacement = reinterpret_cast<SharedTask*>(
      reinterpret_cast<uintptr_t>(position) - count * 16
    );
    Retain(task.control);
    memcpy(replacement, old_begin, bytes);
    g_processing_tasks.begin = replacement;
    g_processing_tasks.end = next;
    g_processing_tasks.capacity_end = reinterpret_cast<SharedTask*>(
      allocation + capacity * 16
    );

    if (old_begin != nullptr) {
      memory::g_heap_manager->GetAllocator(0).Free(old_begin);
    }
  }

  g_processing_tasks.end = next;
}

TaskEntry* FindEntry(RenderContext* context, SharedTask task) {
  TaskEntry* entry = context->entries_begin;
  TaskEntry* end = context->entries_end;
  Retain(task.control);

  while (entry != end && entry->task.object != task.object) {
    ++entry;
  }

  Release(task.control);
  return entry;
}

void NamePrepareTask(text::String& name) {
  auto* bytes = reinterpret_cast<unsigned char*>(&name);
  char* destination;

  if ((bytes[0] & 1) != 0) {
    name.words[1] = 17;
    destination = reinterpret_cast<char*>(name.words[2]);
  }
  else {
    bytes[0] = 34;
    destination = reinterpret_cast<char*>(bytes + 1);
  }

  __builtin_memcpy(destination, g_prepare_task_name, 16);
  destination[16] = 'k';
  destination[17] = 0;
}

void CreatePrepareTask() {
  RenderContext* context = g_render_context;
  auto* allocation = static_cast<PrepareControl*>(
    memory::g_heap_manager->Allocate(sizeof(PrepareControl), 16, 0)
  );
  allocation->control = {&g_prepare_control_vtable, 0, 0};
  allocation->task.vtable = reinterpret_cast<uintptr_t>(&g_prepare_task_vtable);
  allocation->task.context = context;
  auto* work = static_cast<uint64_t*>(
    memory::g_heap_manager->Allocate(0x70, 16, 0)
  );

  for (size_t i = 0; i < 14; ++i) {
    work[i] = 0;
  }

  allocation->task.work = work;
  SharedTask task = {&allocation->task, &allocation->control};
  Append(task);
  SharedTask temporary = task;
  StringView dependencies[2] = {
    g_prepare_dependencies[0], g_prepare_dependencies[1]
  };
  Retain(task.control);
  RegisterTask(g_render_context, &temporary, dependencies, 2, -99999);

  if (temporary.control != nullptr) {
    Release(temporary.control);
  }

  context = g_render_context;
  Retain(task.control);
  TaskEntry* entry = FindEntry(context, task);

  if (entry != context->entries_end) {
    NamePrepareTask(entry->name);
  }

  Release(task.control);
  Release(task.control);
}

void CreateCompositeTask() {
  RenderContext* context = g_render_context;
  auto* allocation = static_cast<CompositeControl*>(
    memory::g_heap_manager->Allocate(sizeof(CompositeControl), 16, 0)
  );
  allocation->control = {&g_composite_control_vtable, 0, 0};
  ConstructCompositeTask(allocation->task, context);
  SharedTask task = {allocation->task, &allocation->control};
  Append(task);
  SharedTask temporary = task;
  Retain(task.control);
  context = g_render_context;
  auto* name = reinterpret_cast<text::String*>(
    static_cast<unsigned char*>(context->name_record_end[-1]) + 8
  );
  const auto* bytes = reinterpret_cast<const unsigned char*>(name);
  StringView dependency = (bytes[0] & 1) == 0
    ? StringView{reinterpret_cast<const char*>(bytes + 1),
                 static_cast<size_t>(bytes[0] >> 1U)}
    : StringView{reinterpret_cast<const char*>(name->words[2]), name->words[1]};
  RegisterTask(context, &temporary, &dependency, 1, 99999);
  Release(task.control);
  context = g_render_context;
  Retain(task.control);
  TaskEntry* entry = FindEntry(context, task);

  if (entry != context->entries_end) {
    entry->name.Assign(g_composite_task_name, 24);
  }

  Release(task.control);
  Release(task.control);
}

}
}

void fw::InitializeProcessing() {
  using namespace processing;
  uint8_t ready;

  do {
    uint32_t resolution = 0;
    ++g_loop_count;
    nn::vi::QueryDisplayBufferMaxResolution(&resolution, g_display);
    constexpr uint32_t widths[] = {1280, 1920, 2560, 3840};
    constexpr uint32_t heights[] = {720, 1080, 1440, 2160};
    g_render_context->height = resolution < 4 ? heights[resolution] : 1080;
    g_render_context->width = resolution < 4 ? widths[resolution] : 1920;

    if (g_display_resolution != resolution) {
      g_display_resolution = resolution;
      g_display_changed = 1;
    }

    UpdateFrameService(g_frame_service);
    UpdateFrameClock(g_frame_clock);
    PollPlatformEvents();
    PendingNode* pending = g_render_context->pending->first;

    while (pending != nullptr) {
      PendingOperation* operation = pending->operation;
      nn::os::AcquireReadLock(operation->lock);
      uint32_t flags = operation->flags;
      nn::os::ReleaseReadLock(operation->lock);

      if ((flags & 8) == 0) {
        break;
      }

      pending = pending->next;
    }

    ready = g_processing_ready;

    if (ready == 1 && (g_processing_requested & 1) == 0) {
      g_processing_requested = 1;
    }

    if (pending != nullptr) {
      ready = 0;
    }

    nn::lmem::FreeToFrameHeap(
      g_runtime_context->memory->frame_heap,
      static_cast<nn::lmem::FreeMode>(3)
    );

    if ((ready & 1) != 0) {
      PrepareProcessing();
      CreatePrepareTask();
      CreateCompositeTask();
      FinishProcessing(g_composite_service);
    }
    else {
      int64_t elapsed = nn::os::ConvertToTimeSpan(g_frame_clock->elapsed_ticks);

      if (elapsed < 16000000) {
        uint64_t delay = static_cast<uint64_t>(elapsed % 1000000)
          - static_cast<uint64_t>(elapsed) + 16000000;
        nn::os::SleepThread(static_cast<int64_t>(delay));
      }
    }
  } while (ready == 0);
}
