#include "nn/gpu/gpu_sdk_util_detail.hpp"

#include "nn/gpu/gpu_sdk_mapping.hpp"
#include "nn/os/multi_wait.hpp"
#include "nn/os/sleep_thread.hpp"
#include "nn/os/time.hpp"

namespace nn::syncpt::sdk {

void InitializeMultiWaitHolder(os::MultiWaitHolderType* holder,
  SyncPointEventType* event);

}

namespace nn::detail {

[[noreturn]] void UnexpectedDefaultImpl();

}

namespace nn::gpu::sdk::util::detail {

namespace {

const int ErrorOutOfMemory = 6;
const int ErrorInvalidType = 4;
const int ErrorInvalidAddress = 11;
const int ErrorInvalidOffset = 9;
const int ErrorInvalidSize = 10;
const int ErrorNoAddressSpace = 17;

const TimeSpan JobWaitTimeout = {1000000000};
const TimeSpan JobPollInterval = {300000};

const uint16_t KindNone = 0xffff;

// The first kind falls back to the second one, which falls back to the
// first one when only one is given.
template<typename Args>
void SelectKinds(uint8_t* pOutKind, uint8_t* pOutFallbackKind,
  const Args* args) {
  uint16_t kind = args->compr_kind;
  uint16_t fallbackKind;
  if (kind == KindNone) {
    kind = args->incompr_kind;
    NN_ABORT_UNLESS(kind != KindNone);
    fallbackKind = kind;
  }
  else {
    fallbackKind = uint16_t(args->incompr_kind) == KindNone ? kind :
      args->incompr_kind;
  }
  *pOutKind = kind;
  *pOutFallbackKind = fallbackKind;
}

template<typename Args>
void UpdateKinds(Args* args, uint8_t kind) {
  if (kind != uint8_t(args->compr_kind)) {
    args->compr_kind = -1;
  }
  if (kind != uint8_t(args->incompr_kind)) {
    args->incompr_kind = -1;
  }
}

}

void UnmapSparseBuffer(VirtualMachineType* machine,
  const nvgpu_as_unmap_buffer_args* args) {
  uint64_t address = args->offset;
  MappingEntry* entry = nullptr;
  if (!machine->mappings.Find(&entry, 1, address, address)) {
    return;
  }
  uint8_t attribute = entry->attribute;
  uint64_t first = entry->address;
  uint64_t last = entry->GetLastAddress();
  machine->mappings.Invalidate(entry);
  machine->mappings.Release(entry);
  if (attribute == 1) {
    InvalidateMappings(&machine->allocator, &machine->mappings, first, last);
  }
}

void UnmapNormalBuffer(VirtualMachineType* machine,
  const nvgpu_as_unmap_buffer_args* args) {
  machine->mapMutex.Lock();
  uint64_t address = args->offset;
  MappingEntry* entry = nullptr;
  if (machine->mappings.Find(&entry, 1, address, address)) {
    switch (entry->type) {
      case 6:
        break;
      case 4: {
        NativeImageMapping* mapping = reinterpret_cast<NativeImageMapping*>(
          reinterpret_cast<uintptr_t>(entry) -
          offsetof(NativeImageMapping, entry));
        if (--mapping->mapCount != 0) {
          machine->mappings.Release(entry);
          machine->mapMutex.Unlock();
          return;
        }
        break;
      }
      default:
        nn::detail::UnexpectedDefaultImpl();
    }
    machine->mappings.Invalidate(entry);
    machine->mappings.Release(entry);
    InvalidateMappings(&machine->allocator, &machine->mappings, address,
      address);
  }
  machine->mapMutex.Unlock();
}

int ModifySparseMapping(VirtualMachineType* machine,
  nvgpu_as_mapping_modify_args* args) {
  uint64_t address = args->map_address;
  MappingEntry* entry = nullptr;
  if (!machine->mappings.Find(&entry, 1, address, address)) {
    return ErrorInvalidAddress;
  }
  int result = ErrorInvalidType;
  if (entry->type == 1) {
    uint8_t kind = 0;
    if (uint64_t size = args->buffer_size; size != 0) {
      uint8_t primaryKind;
      uint8_t fallbackKind;
      SelectKinds(&primaryKind, &fallbackKind, args);
      uint64_t first = entry->address + args->buffer_offset;
      if (NormalModifyMemoryKind4K(&kind, machine->addressSpace, first,
        first + size - 1, primaryKind, fallbackKind,
        AddressSpaceSyncFlag(1)).IsFailure()) {
        machine->mappings.Release(entry);
        return ErrorOutOfMemory;
      }
    }
    UpdateKinds(args, kind);
    result = 0;
  }
  machine->mappings.Release(entry);
  return result;
}

int ModifyNormalMapping(VirtualMachineType* machine,
  nvgpu_as_mapping_modify_args* args) {
  uint64_t address = args->map_address;
  MappingEntry* entry = nullptr;
  if (!machine->mappings.Find(&entry, 1, address, address)) {
    return ErrorInvalidAddress;
  }
  int result;
  switch (entry->type) {
    case 3:
    case 4:
      result = 0;
      break;
    case 6: {
      uint8_t primaryKind;
      uint8_t fallbackKind;
      SelectKinds(&primaryKind, &fallbackKind, args);
      uint8_t kind = 0;
      uint64_t first = entry->address + args->buffer_offset;
      result = NormalModifyVprMemoryKind(&kind, machine->addressSpace, first,
        first + args->buffer_size - 1, primaryKind, fallbackKind,
        AddressSpaceSyncFlag(1)).IsFailure() ? ErrorOutOfMemory : 0;
      break;
    }
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
  machine->mappings.Release(entry);
  return result;
}

bool WaitSyncPointEvent(syncpt::sdk::SyncPointEventType* event,
  const syncpt::sdk::SyncPointHandle& handle, TimeSpan timeout) {
  os::MultiWaitType multiWait{};
  os::InitializeMultiWait(&multiWait);
  os::MultiWaitHolderType holder{};
  syncpt::sdk::InitializeMultiWaitHolder(&holder, event);
  os::LinkMultiWaitHolder(&multiWait, &holder);
  syncpt::sdk::RequestSyncPointEvent(event, handle);
  os::MultiWaitHolderType* signaled = os::TimedWaitAny(&multiWait, timeout);
  if (signaled != &holder) {
    syncpt::sdk::CancelSyncPointEvent(event);
  }
  os::UnlinkMultiWaitHolder(&holder);
  os::FinalizeMultiWaitHolder(&holder);
  os::FinalizeMultiWait(&multiWait);
  return signaled == &holder;
}

// Waits until no tracker has a job left, retiring the finished ones.
void WaitForJobs(ObjectAllocator* allocator, MappingMap* map,
  syncpt::sdk::SyncPointEventType* event) {
  while (true) {
    ProcessAllJobs(allocator, map);
    syncpt::sdk::SyncPointHandle handle = {};
    if (!FindPendingJob(&handle, map)) {
      return;
    }
    if ((handle.value[0] | handle.value[1]) != 0) {
      WaitSyncPointEvent(event, handle, JobWaitTimeout);
    }
    else {
      os::SleepThread(JobPollInterval);
    }
  }
}

// The same wait polling the fence, for when no event could be created.
void PollForJobs(ObjectAllocator* allocator, MappingMap* map) {
  while (true) {
    ProcessAllJobs(allocator, map);
    syncpt::sdk::SyncPointHandle handle = {};
    if (!FindPendingJob(&handle, map)) {
      return;
    }
    if ((handle.value[0] | handle.value[1]) != 0) {
      os::Tick start = os::GetSystemTick();
      os::Tick timeout = os::ConvertToTick(JobWaitTimeout);
      if (!syncpt::sdk::TryWaitSyncPoint(handle)) {
        int64_t deadline = timeout.value + start.value;
        do {
          if (os::GetSystemTick().value >= deadline) {
            break;
          }
          os::SleepThread(JobPollInterval);
        } while (!syncpt::sdk::TryWaitSyncPoint(handle));
      }
    }
    else {
      os::SleepThread(JobPollInterval);
    }
  }
}

int AllocateNormalBlock(AddressBlock** pOut, ObjectAllocator* allocator,
  AddressSpaceRegion* region, uint64_t size, uint64_t alignment) {
  AddressBlock* block = allocator->New<AddressBlock>();
  if (block == nullptr) {
    return ErrorOutOfMemory;
  }
  if (alignment <= 0x10000) {
    alignment = 0x10000;
  }
  if (!region->AllocateAligned(block, size, alignment)) {
    allocator->Delete(block);
    return ErrorNoAddressSpace;
  }
  *pOut = block;
  return 0;
}

int CreateNormalMapping(NormalMapping** pOut, uint8_t* pOutKind,
  ObjectAllocator* allocator, const GpuAddressSpaceType* addressSpace,
  AddressSpaceRegion* region, const nvgpu_as_map_buffer_ex_args* args,
  uint32_t* pMemoryHandle, SparseSpace** pSpace, uint64_t size) {
  NormalMapping* mapping = allocator->New<NormalMapping>();
  if (mapping == nullptr) {
    return ErrorOutOfMemory;
  }
  AddressBlock* block = nullptr;
  uint64_t address;
  int result;
  if ((args->flags & 1) != 0 && (address = args->offset) != 0) {
    if ((address & 0xfff) != 0) {
      allocator->Delete(mapping);
      return ErrorInvalidOffset;
    }
  }
  else {
    result = AllocateNormalBlock(&block, allocator, region, size, 0x1000);
    if (result != 0) {
      allocator->Delete(mapping);
      return result;
    }
    address = block->begin;
  }
  uint64_t last = address - 1 + size;
  if (address - 1 >= last) {
    result = ErrorInvalidOffset;
  }
  else if (uint32_t gpuMemoryHandle =
    NvRmMemGetGpukMemoryHandle(*pMemoryHandle); gpuMemoryHandle == 0) {
    result = ErrorInvalidType;
  }
  else {
    uint32_t flags = args->flags;
    uint64_t offset = args->buffer_offset;
    bool isReadOnly = (flags & 0xc00) == 0x400;
    bool isUserAllocated = NvRmMemGetUserAllocated(*pMemoryHandle) != 0;
    uint8_t primaryKind;
    uint8_t fallbackKind;
    SelectKinds(&primaryKind, &fallbackKind, args);
    bool isCacheable = (args->flags & 4) != 0;
    bool isRawTexture = (args->flags & 0x1000) != 0;
    uint8_t kind = 0;
    if (NormalMapGpuMemory4K(&kind, addressSpace, address, last,
      GpuMemoryHandle{gpuMemoryHandle}, offset,
      GpuMemoryPermission(isReadOnly), GpuCacheability(isCacheable),
      primaryKind, fallbackKind, RawTextureMode(isRawTexture),
      AddressSpaceSyncFlag(1)).IsSuccess()) {
      mapping->entry.attribute = isUserAllocated;
      mapping->memoryHandle = *pMemoryHandle;
      mapping->gpuMemoryHandle = gpuMemoryHandle;
      mapping->entry.address = address;
      mapping->entry.type = 1;
      mapping->offset = offset;
      mapping->permission = GpuMemoryPermission(isReadOnly);
      mapping->entry.key = MakeMappingKey(1, last);
      mapping->block = block;
      mapping->space = *pSpace;
      mapping->cacheability = GpuCacheability(isCacheable);
      mapping->rawTextureMode = RawTextureMode(isRawTexture);
      *pMemoryHandle = 0;
      *pSpace = nullptr;
      *pOut = mapping;
      *pOutKind = kind;
      return 0;
    }
    result = ErrorOutOfMemory;
  }
  if (block != nullptr) {
    region->FreeBlock(block);
    allocator->Delete(block);
  }
  allocator->Delete(mapping);
  return result;
}

int CreateSparseMapping(SparseMapping** pOut, uint8_t* pOutKind,
  ObjectAllocator* allocator, const GpuAddressSpaceType* addressSpace,
  const nvgpu_as_map_buffer_ex_args* args, uint32_t* pMemoryHandle,
  SparseSpace** pSpace, uint64_t size) {
  SparseMapping* mapping = allocator->New<SparseMapping>();
  if (mapping == nullptr) {
    return ErrorOutOfMemory;
  }
  int result = ErrorInvalidOffset;
  uint64_t address = args->offset;
  uint64_t last;
  if (address != 0 && (address & 0xfff) == 0 &&
    !__builtin_add_overflow(size - 1, address, &last)) {
    if (uint32_t gpuMemoryHandle =
      NvRmMemGetGpukMemoryHandle(*pMemoryHandle); gpuMemoryHandle == 0) {
      result = ErrorInvalidType;
    }
    else {
      uint32_t flags = args->flags;
      uint64_t offset = args->buffer_offset;
      bool isReadOnly = (flags & 0xc00) == 0x400;
      bool isUserAllocated = NvRmMemGetUserAllocated(*pMemoryHandle) != 0;
      uint8_t primaryKind;
      uint8_t fallbackKind;
      SelectKinds(&primaryKind, &fallbackKind, args);
      bool isCacheable = (args->flags & 4) != 0;
      bool isRawTexture = (args->flags & 0x1000) != 0;
      SparseMapRequest request = {};
      request.address = address;
      request.size = size;
      request.permission = GpuMemoryPermission(isReadOnly);
      request.cacheability = GpuCacheability(isCacheable);
      request.kind = primaryKind;
      request.compressionKind = fallbackKind;
      request.rawTextureMode = RawTextureMode(isRawTexture);
      request.memory = gpuMemoryHandle;
      request.offset = offset;
      uint64_t count = 0;
      uint8_t kind = 0;
      if (ExecuteSparseMapRequests(&count, &kind, 1, addressSpace, &request,
        1, AddressSpaceSyncFlag(1)).IsSuccess()) {
        NN_ABORT_UNLESS(*pSpace != nullptr);
        mapping->space = *pSpace;
        mapping->offset = offset;
        mapping->entry.attribute = isUserAllocated;
        mapping->entry.address = address;
        mapping->memoryHandle = *pMemoryHandle;
        mapping->gpuMemoryHandle = gpuMemoryHandle;
        mapping->cacheability = GpuCacheability(isCacheable);
        mapping->rawTextureMode = RawTextureMode(isRawTexture);
        mapping->entry.type = 2;
        mapping->entry.key = MakeMappingKey(1, last);
        mapping->permission = GpuMemoryPermission(isReadOnly);
        *pMemoryHandle = 0;
        *pSpace = nullptr;
        *pOut = mapping;
        *pOutKind = kind;
        return 0;
      }
      result = ErrorOutOfMemory;
    }
  }
  allocator->Delete(mapping);
  return result;
}

int MapNormalBuffer(VirtualMachineType* machine, uint64_t* pOutAddress,
  nvgpu_as_map_buffer_ex_args* args, uint32_t* pMemoryHandle) {
  const GpuAddressSpaceType* addressSpace = machine->addressSpace;
  uint64_t size = args->mapping_size;
  if (size == 0) {
    size = NvRmMemGetSize(*pMemoryHandle);
    if (size == 0) {
      return ErrorInvalidSize;
    }
  }
  if ((size & 0xfff) != 0) {
    return ErrorInvalidSize;
  }
  SparseSpace* space = machine->sparseSpaces.Acquire(args->offset);
  bool hasRegion = false;
  int result;
  if (space != nullptr) {
    hasRegion = space->hasRegion;
    if ((args->flags & 1) == 0 && hasRegion) {
      result = ErrorInvalidOffset;
      machine->sparseSpaces.Release(space);
      return result;
    }
  }
  uint8_t kind;
  if ((args->flags & 1) != 0) {
    uint64_t first = args->offset;
    InvalidateMappings(&machine->allocator, &machine->mappings, first,
      first + size - 1);
  }
  kind = 0;
  if ((args->flags & 1) != 0 && hasRegion) {
    syncpt::sdk::SyncPointEventType event{};
    if (syncpt::sdk::CreateSyncPointEvent(&event).IsFailure()) {
      PollForJobs(&machine->allocator, &machine->mappings);
    }
    else {
      WaitForJobs(&machine->allocator, &machine->mappings, &event);
      syncpt::sdk::DestroySyncPointEvent(&event);
    }
    SparseMapping* mapping = nullptr;
    result = CreateSparseMapping(&mapping, &kind, &machine->allocator,
      addressSpace, args, pMemoryHandle, &space, size);
    if (result == 0) {
      uint64_t address = mapping->entry.address;
      machine->mappings.Insert<SparseMapping>(nullptr, &mapping->entry,
        machine);
      UpdateKinds(args, kind);
      *pOutAddress = address;
    }
  }
  else {
    NormalMapping* mapping = nullptr;
    result = CreateNormalMapping(&mapping, &kind, &machine->allocator,
      addressSpace, &machine->sparseRegion, args, pMemoryHandle, &space,
      size);
    if (result == 0) {
      uint64_t address = mapping->entry.address;
      machine->mappings.Insert<NormalMapping>(nullptr, &mapping->entry,
        machine);
      UpdateKinds(args, kind);
      *pOutAddress = address;
    }
  }
  if (space != nullptr) {
    machine->sparseSpaces.Release(space);
  }
  return result;
}

int CreateVprMapping(VirtualMachineType* machine, VprMapping** pOut,
  uint8_t* pOutKind, const nvgpu_as_map_buffer_ex_args* args,
  uint32_t* pMemoryHandle, gs::sdk::VprMemoryHandle memory) {
  uint32_t flags = args->flags;
  bool isReadOnly = (flags & 0xc00) == 0x400;
  uint8_t primaryKind;
  uint8_t fallbackKind;
  SelectKinds(&primaryKind, &fallbackKind, args);
  VprMapping* mapping = machine->allocator.New<VprMapping>();
  if (mapping == nullptr) {
    return ErrorOutOfMemory;
  }
  uint64_t address = 0;
  uint64_t last = 0;
  uint8_t kind = 0;
  if (NormalMapVprMemory(&address, &last, &kind, machine->addressSpace,
    memory, GpuMemoryPermission(isReadOnly),
    GpuCacheability((flags & 4) != 0), primaryKind, fallbackKind,
    RawTextureMode((flags & 0x1000) != 0),
    AddressSpaceSyncFlag(1)).IsFailure()) {
    machine->allocator.Delete(mapping);
    return ErrorOutOfMemory;
  }
  mapping->entry.address = address;
  mapping->entry.type = 6;
  mapping->entry.attribute = 1;
  mapping->entry.key = MakeMappingKey(1, last);
  mapping->memoryHandle = *pMemoryHandle;
  mapping->vprMemory = memory.value;
  *pMemoryHandle = 0;
  *pOut = mapping;
  *pOutKind = kind;
  return 0;
}

int MapVprBuffer(VirtualMachineType* machine, uint64_t* pOutAddress,
  nvgpu_as_map_buffer_ex_args* args, uint32_t* pMemoryHandle,
  gs::sdk::VprMemoryHandle memory) {
  machine->mapMutex.Lock();
  VprMapping* mapping = nullptr;
  uint8_t kind = 0;
  int result = CreateVprMapping(machine, &mapping, &kind, args,
    pMemoryHandle, memory);
  if (result == 0) {
    InvalidateMappings(&machine->allocator, &machine->mappings,
      mapping->entry.address, mapping->entry.GetLastAddress());
    uint64_t address = mapping->entry.address;
    machine->mappings.Insert<VprMapping>(nullptr, &mapping->entry, machine);
    UpdateKinds(args, kind);
    *pOutAddress = address;
  }
  machine->mapMutex.Unlock();
  return result;
}

int MapNativeImageBuffer(VirtualMachineType* machine, uint64_t* pOutAddress,
  const nvgpu_as_map_buffer_ex_args* args, uint32_t* pMemoryHandle,
  uint32_t image) {
  machine->mapMutex.Lock();
  uint64_t address = machine->normalRange.begin;
  bool isReadOnly = (args->flags & 0xc00) == 0x400;
  int result;
  while (true) {
    MappingEntry* entry = nullptr;
    if (address > machine->normalRange.end ||
      !machine->mappings.Find(&entry, 1, address,
        machine->normalRange.end)) {
      NativeImageMapping* mapping =
        machine->allocator.New<NativeImageMapping>();
      if (mapping != nullptr) {
        uint64_t addressMin = 0;
        uint64_t addressMax = 0;
        gsv::imgdesc::impl::user::ounce::GpuOunceUserImageDescriptor
          descriptor = {};
        gsv::GpuOunceUserImageFlags flags = {};
        if (MapNativeImage(&addressMin, &addressMax, &descriptor, &flags,
          machine->addressSpace, gs::NativeImageHandle{image},
          GpuMemoryPermission(isReadOnly)).IsSuccess()) {
          mapping->address = addressMin;
          mapping->size = addressMax;
          mapping->memoryHandle = *pMemoryHandle;
          mapping->image = image;
          mapping->isReadOnly = isReadOnly;
          mapping->entry.address = addressMin & ~uint64_t(0xfff);
          mapping->entry.type = 4;
          mapping->entry.attribute = 1;
          mapping->entry.key = MakeMappingKey(1, addressMin);
          mapping->flags = flags.value;
          *pMemoryHandle = 0;
          mapping->mapCount = 1;
          address = mapping->entry.address;
          InvalidateMappings(&machine->allocator, &machine->mappings,
            address, address);
          machine->mappings.Insert<NativeImageMapping>(nullptr,
            &mapping->entry, machine);
          result = 0;
          *pOutAddress = address;
          break;
        }
        machine->allocator.Delete(mapping);
      }
      result = ErrorOutOfMemory;
      break;
    }
    NativeImageMapping* mapping = reinterpret_cast<NativeImageMapping*>(
      reinterpret_cast<uintptr_t>(entry) -
      offsetof(NativeImageMapping, entry));
    if (entry->type == 4 && mapping->image == image &&
      mapping->isReadOnly == isReadOnly) {
      address = entry->address;
      ++mapping->mapCount;
      machine->mappings.Release(entry);
      result = 0;
      *pOutAddress = address;
      break;
    }
    address = (entry->key << 12) + 0x1000;
    machine->mappings.Release(entry);
  }
  machine->mapMutex.Unlock();
  return result;
}

int MapBufferEx(VirtualMachineType* machine,
  nvgpu_as_map_buffer_ex_args* args) {
  uint32_t memoryHandle = 0;
  int result = NvRmMemHandleFromFd(args->dmabuf_fd, &memoryHandle);
  if (result != 0) {
    return result;
  }
  uint64_t address = 0;
  if (uint32_t image = NvRmMemGetNativeImageHandle(memoryHandle);
    image != 0) {
    result = MapNativeImageBuffer(machine, &address, args, &memoryHandle,
      image);
  }
  else if (uint32_t vpr = NvRmMemGetVprMemoryHandle(memoryHandle);
    vpr != 0) {
    result = MapVprBuffer(machine, &address, args, &memoryHandle,
      gs::sdk::VprMemoryHandle{vpr});
  }
  else {
    result = MapNormalBuffer(machine, &address, args, &memoryHandle);
  }
  if (result == 0) {
    args->page_size = 0x1000;
    args->offset = address;
  }
  NvRmMemHandleFree(memoryHandle);
  return result;
}

namespace {

const size_t RemapBatchCount = 64;

uint64_t GetRemapPageSize(uint32_t flags) {
  if ((flags & 0x1000) != 0) {
    return 0x1000;
  }
  if ((flags & 0x2000) != 0) {
    return 0x10000;
  }
  return (flags & 0x4000) != 0 ? 0x20000 : 0x1000;
}

}

// Remaps sparse pages in batches. Operations the driver did not apply get
// both kinds cleared.
int Remap(VirtualMachineType* machine, nvgpu_as_remap_op* ops, size_t count) {
  size_t remaining = count;
  size_t done = 0;
  while (remaining != 0) {
    uint8_t kinds[RemapBatchCount] = {};
    size_t batch = remaining < RemapBatchCount ? remaining : RemapBatchCount;
    SparseMapRequest requests[RemapBatchCount] = {};
    for (size_t i = 0; i < batch; ++i) {
      const nvgpu_as_remap_op* op = &ops[i];
      SparseMapRequest* request = &requests[i];
      uint64_t pageSize = GetRemapPageSize(op->flags);
      request->address = op->virt_offset_in_pages * pageSize;
      request->size = op->num_pages * pageSize;
      if (op->mem_handle == 0) {
        continue;
      }
      uint32_t gpuMemoryHandle = NvRmMemGetGpukMemoryHandle(op->mem_handle);
      if (gpuMemoryHandle == 0) {
        return ErrorInvalidType;
      }
      uint16_t kind = op->compr_kind;
      uint16_t fallbackKind;
      if (kind == KindNone) {
        kind = op->incompr_kind;
        if (kind == KindNone) {
          return ErrorInvalidType;
        }
        fallbackKind = kind;
      }
      else {
        fallbackKind = op->incompr_kind;
        if (fallbackKind == KindNone) {
          fallbackKind = op->compr_kind;
        }
      }
      uint32_t flags = op->flags;
      request->kind = kind;
      request->compressionKind = fallbackKind;
      request->memory = gpuMemoryHandle;
      request->rawTextureMode = RawTextureMode((flags & 0x8000) != 0);
      request->permission = GpuMemoryPermission((flags & 0x80) != 0);
      request->cacheability = GpuCacheability((flags & 4) != 0);
      request->offset = op->mem_offset_in_pages * pageSize;
    }
    uint64_t mappedCount = 0;
    Result result = ExecuteSparseMapRequests(&mappedCount, kinds, batch,
      machine->addressSpace, requests, batch, AddressSpaceSyncFlag(1));
    done = batch < mappedCount ? batch : mappedCount;
    if (result.IsFailure()) {
      done = 0;
    }
    for (size_t i = 0; i < done; ++i) {
      UpdateKinds(&ops[i], kinds[i]);
    }
    if (done < batch) {
      break;
    }
    remaining -= done;
    ops += done;
  }
  if (remaining == 0) {
    return 0;
  }
  for (size_t i = done; i < remaining; ++i) {
    ops[i].compr_kind = -1;
    ops[i].incompr_kind = -1;
  }
  return ErrorInvalidType;
}

template void MappingMap::Insert<NormalMapping>(MappingEntry** pOut,
  MappingEntry* entry, VirtualMachineType* machine);
template void MappingMap::Insert<SparseMapping>(MappingEntry** pOut,
  MappingEntry* entry, VirtualMachineType* machine);

}
