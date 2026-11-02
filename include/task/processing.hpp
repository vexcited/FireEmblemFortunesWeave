#pragma once

#include "startup.hpp"
#include "text/string.hpp"

namespace fw::processing {

struct SharedControl;

struct SharedControlVTable {
  uintptr_t unknown_00[2];
  void (*destroy_object)(SharedControl* control);
};

struct SharedControl {
  SharedControlVTable* vtable;
  uint64_t shared_owners;
  uint64_t weak_owners;
};

struct SharedTask {
  void* object;
  SharedControl* control;
};

struct SharedTaskVector {
  SharedTask* begin;
  SharedTask* end;
  SharedTask* capacity_end;
};

struct TaskEntry {
  uintptr_t unknown_00;
  SharedTask task;
  unsigned char unknown_18[0x18];
  text::String name;
};

struct PendingOperation {
  unsigned char unknown_00[0x290];
  uint32_t flags;
  unsigned char unknown_294[0x24];
  unsigned char lock[8];
};

struct PendingNode {
  PendingNode* next;
  unsigned char unknown_08[0x20];
  PendingOperation* operation;
};

struct PendingOperations {
  unsigned char unknown_00[0x20];
  PendingNode* first;
};

struct RenderContext {
  unsigned char unknown_00[0x1f0];
  void** name_record_end;
  unsigned char unknown_1f8[0x3180];
  TaskEntry* entries_begin;
  TaskEntry* entries_end;
  unsigned char unknown_3388[0x68];
  uint32_t width;
  uint32_t height;
  unsigned char unknown_33f8[0x68];
  PendingOperations* pending;
};

struct PrepareTask {
  uintptr_t vtable;
  RenderContext* context;
  void* work;
};

struct PrepareControl {
  SharedControl control;
  PrepareTask task;
};

struct CompositeControl {
  SharedControl control;
  unsigned char task[0xd8];
};

struct StringView {
  const char* data;
  size_t size;
};

struct FrameClock {
  uintptr_t unknown_00;
  int64_t elapsed_ticks;
};

extern RenderContext* g_render_context;
extern uint8_t g_processing_ready;
extern uint8_t g_processing_requested;
extern void* g_display;
extern uint32_t g_display_resolution;
extern uint8_t g_display_changed;
extern void* g_frame_service;
extern FrameClock* g_frame_clock;
extern void* g_composite_service;
extern SharedTaskVector g_processing_tasks;
extern SharedControlVTable g_prepare_control_vtable;
extern SharedControlVTable g_composite_control_vtable;
extern uintptr_t g_prepare_task_vtable;
extern StringView g_prepare_dependencies[2];
extern const char g_prepare_task_name[];
extern const char g_composite_task_name[];

void UpdateFrameService(void* service);
void UpdateFrameClock(FrameClock* clock);
void PollPlatformEvents();
void PrepareProcessing();
void ConstructCompositeTask(void* task, RenderContext* context);
void RegisterTask(
  RenderContext* context, SharedTask* task, const StringView* dependencies,
  size_t count, int32_t priority
);
void FinishProcessing(void* service);
void ReleaseWeak(SharedControl* control);
[[noreturn]] void TaskVectorLengthError();
[[noreturn]] void AllocationSizeError();

static_assert(sizeof(SharedControl) == 0x18);
static_assert(sizeof(SharedTask) == 0x10);
static_assert(sizeof(TaskEntry) == 0x48);
static_assert(offsetof(TaskEntry, name) == 0x30);
static_assert(offsetof(PendingOperation, flags) == 0x290);
static_assert(offsetof(PendingOperation, lock) == 0x2b8);
static_assert(offsetof(RenderContext, entries_begin) == 0x3378);
static_assert(offsetof(RenderContext, entries_end) == 0x3380);
static_assert(offsetof(RenderContext, width) == 0x33f0);
static_assert(offsetof(RenderContext, pending) == 0x3460);
static_assert(sizeof(PrepareControl) == 0x30);
static_assert(sizeof(CompositeControl) == 0xf0);

}
