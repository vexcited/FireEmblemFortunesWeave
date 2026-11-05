#include "gxc/nvn/nvn_queue.hpp"

#include "gxc/memory.hpp"
#include "gxc/nvn/nvn_command_list.hpp"
#include "gxc/nvn/nvn_device.hpp"
#include "gxc/nvn/nvn_fence.hpp"

namespace gxc {

namespace {

constexpr int kComputeMemoryUnits = 85;
constexpr int kCommandMemoryUnits = 82;
constexpr int kControlMemoryUnits = 92;
constexpr size_t kQueueMemoryAlignment = 0x1000;

}

NvnQueue::NvnQueue(const QueueDesc& desc) {
  NvnDevice* device = GetNvnDevice(*this);
  int compute = GetNvnDevice(*this)->GetInteger(kComputeMemoryUnits);
  int command = GetNvnDevice(*this)->GetInteger(kCommandMemoryUnits);
  size_t control =
    8LL * GetNvnDevice(*this)->GetInteger(kControlMemoryUnits);
  size_t commandSize = 32LL * command;

  NVNqueueBuilder builder = {};
  nvnQueueBuilderSetDefaults(&builder);
  nvnQueueBuilderSetDevice(&builder, device->GetNative());
  nvnQueueBuilderSetComputeMemorySize(&builder, 8LL * compute);
  nvnQueueBuilderSetCommandMemorySize(&builder, commandSize);
  nvnQueueBuilderSetControlMemorySize(&builder, control);
  nvnQueueBuilderSetCommandFlushThreshold(&builder, commandSize);
  if (desc.type == QueueType::kSecondary) {
    nvnQueueBuilderSetFlags(&builder, 4);
    nvnQueueBuilderSetPrimaryQueue(&builder, desc.primary->GetNative());
  }
  else if (desc.type == QueueType::kGraphics) {
    nvnQueueBuilderSetFlags(&builder, 8);
  }

  size_t size = nvnQueueBuilderGetQueueMemorySize(&builder);
  memory_ = Allocate(size, kQueueMemoryAlignment);
  nvnQueueBuilderSetQueueMemory(&builder, memory_, size);
  nvnQueueInitialize(&queue_, &builder);
}

NvnQueue::~NvnQueue() {
  nvnQueueFinalize(&queue_);
  Free(memory_);
}

void NvnQueue::Submit(CommandList* commands,
  const std::optional<QueueSignal>& signal) {
  NVNcommandHandle handle =
    static_cast<NvnCommandList*>(commands)->GetHandle();
  nvnQueueSubmitCommands(&queue_, 1, &handle);
  if (signal.has_value()) {
    if (signal->fence != nullptr) {
      nvnQueueFenceSync(&queue_,
        static_cast<NvnFence*>(signal->fence)->GetSync(), 0, signal->flags);
    }

    if (signal->flush) {
      nvnQueueFlush(&queue_);
    }
  }
}

void NvnQueue::Wait(Semaphore* semaphore) {
  nvnQueueWaitSync(&queue_,
    static_cast<NvnSemaphore*>(semaphore)->GetSync());
}

Backend NvnQueue::GetBackend() const {
  return Backend::kNvn;
}

}
