#include "nn/gpu/gpu_sdk_util_detail.hpp"

#include "nn/gpu/gpu_sdk_mapping.hpp"

namespace nn::gpu::sdk::util {

namespace detail {

using AllocateFunction = void* (*)(size_t size, size_t alignment,
  void* userData);
using FreeFunction = void (*)(void* pointer, void* userData);

[[gnu::noinline]] void SetUpMachine(VirtualMachineType* machine,
  const GraphicsDeviceType* const& device,
  const GpuAddressSpaceType* const& addressSpace,
  JobManagerType* const& jobManager, const AllocateFunction& allocate,
  const FreeFunction& free, void* const& userData) {
  machine->device = device;
  machine->addressSpace = addressSpace;
  machine->allocator.allocate = allocate;
  machine->allocator.free = free;
  machine->allocator.userData = userData;
  machine->allocator.count.store(0, std::memory_order_release);
  if (jobManager != nullptr) {
    jobManager->freeSlotMask = ~uint64_t(0);
    machine->mappings.manager = jobManager;
  }
  size_t count = 0;
  GpuAddressRange ranges[1] = {};
  QueryUserPartitionGpuAddressRangeList(&count, machine->addressSpace,
    ranges, 1);
  for (size_t i = 0; i < count; ++i) {
    machine->sparseRegion.Initialize(ranges[i].min, ranges[i].max);
  }
  machine->normalRange.begin =
    GetGsvPartitionGpuAddressMin(machine->addressSpace);
  machine->normalRange.end =
    GetGsvPartitionGpuAddressMax(machine->addressSpace);
}

// Drops every mapping left in the sparse region, then the region itself.
[[gnu::noinline]] void FinalizeSparseRegion(VirtualMachineType* machine) {
  uint64_t first = machine->sparseRegion.m_Begin;
  uint64_t last = machine->sparseRegion.m_End;
  if (first <= last) {
    MappingEntry* entry = nullptr;
    while (machine->mappings.FindEntry(&entry, 1, first, last)) {
      machine->mappings.Invalidate(entry);
      machine->mappings.ReleaseEntry<true>(entry);
    }
    InvalidateMappings(&machine->allocator, &machine->mappings, first, last);
  }
  machine->sparseRegion.Finalize();
}

[[gnu::noinline]] void FinalizeMachine(VirtualMachineType* machine) {
  NN_ABORT_UNLESS(machine->reservedF0 == 0);
  machine->normalRange = {};
  FinalizeSparseRegion(machine);
  NN_ABORT_UNLESS(machine->mappings.tree.IsEmpty());
  NN_ABORT_UNLESS(machine->mappings.waiters == nullptr);
  if (JobManagerType* manager = machine->mappings.manager;
    manager != nullptr) {
    NN_ABORT_UNLESS(manager->freeSlotMask == ~uint64_t(0));
    machine->mappings.manager = nullptr;
  }
  NN_ABORT_UNLESS(machine->allocator.count.load(std::memory_order_acquire) ==
    0);
  machine->device = nullptr;
  machine->addressSpace = nullptr;
}

}

void InitializeVirtualMachine(VirtualMachineType* machine,
  const GraphicsDeviceType* device, const GpuAddressSpaceType* addressSpace,
  JobManagerType* jobManager, detail::AllocateFunction allocate,
  detail::FreeFunction free, void* userData) {
  new (machine) VirtualMachineType();
  detail::SetUpMachine(machine, device, addressSpace, jobManager, allocate,
    free, userData);
}

void FinalizeVirtualMachine(VirtualMachineType* machine) {
  detail::FinalizeMachine(machine);
}

}
