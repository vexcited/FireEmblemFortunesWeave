#include "nn/gpu/gpu_sdk_util_detail.hpp"

#include "nn/gs/gs_native_window.hpp"

extern "C" int NvRmMemHandleFree(uint32_t handle);

namespace nn::gs::sdk {

struct VprMemoryHandle {
  uint32_t value;
};

}

namespace nn::gpu::sdk {

Result CreateSparseRegion(const GpuAddressSpaceType* addressSpace,
  uint64_t addressMin, uint64_t addressMax, uint64_t pageSize,
  PageTableAllocMode allocMode, AddressSpaceSyncFlag syncFlag);
void DestroySparseRegion(const GpuAddressSpaceType* addressSpace,
  uint64_t addressMin, uint64_t addressMax, AddressSpaceSyncFlag syncFlag);
void NormalUnmapVprMemory(const GpuAddressSpaceType* addressSpace,
  uint64_t address, uint64_t size, gs::sdk::VprMemoryHandle memory,
  AddressSpaceSyncFlag syncFlag);
void UnmapNativeImage(const GpuAddressSpaceType* addressSpace,
  uint64_t addressMin, uint64_t addressMax, gs::NativeImageHandle image);

}

namespace nn::gpu::sdk::util::detail {

void AddressAllocator::Initialize(uint64_t begin, uint64_t end) {
  m_Head.begin = 0;
  m_Head.last = begin - 1;
  m_Head.limit = end;
  m_List.LinkNext(&m_Head.listNode);
  AddFreeBlock(&m_Head);
}

void AddressAllocator::AddFreeBlock(AddressBlock* block) {
  auto compare = [](nn::util::IntrusiveRbTreeNode* lhs,
    nn::util::IntrusiveRbTreeNode* rhs) {
    return AddressBlockCompare()(AddressBlock::FromTreeNode(lhs),
      AddressBlock::FromTreeNode(rhs));
  };
  if (block == &m_Head) {
    m_FreeTree.Insert(&block->treeNode, compare);
    m_Head.begin = 1;
  }
  else {
    m_FreeTree.Insert(&block->treeNode, compare);
  }
}

void AddressAllocator::Split(AddressBlock* block, AddressBlock* from,
  uint64_t begin, uint64_t last) {
  uint64_t first = from->last + 1;
  uint64_t limit = from->limit;
  RemoveFreeBlock(from);
  from->limit = begin - 1;
  block->begin = begin;
  block->last = last;
  block->limit = limit;
  from->listNode.GetNext()->LinkPrev(&block->listNode);
  if (begin != first) {
    AddFreeBlock(from);
  }
  if (last != limit) {
    AddFreeBlock(block);
  }
}

bool AddressAllocator::TryAllocate(AddressBlock* block, AddressBlock* from,
  uint64_t size, uint64_t alignmentMask) {
  uint64_t first = from->last + 1;
  uint64_t limit = from->limit;
  uint64_t begin = 0;
  if (first != 0) {
    begin = (first + alignmentMask) & ~alignmentMask;
    if (begin <= alignmentMask || limit < begin) {
      return false;
    }
  }
  if (limit - begin < size) {
    return false;
  }
  Split(block, from, begin, begin + size);
  return true;
}

bool AddressAllocator::TryAllocateInRange(AddressBlock* block,
  AddressBlock* from, AlignedRequest request) {
  uint64_t first = from->last + 1;
  uint64_t min = first > request.min ? first : request.min;
  uint64_t max = request.max < from->limit ? request.max : from->limit;
  if (min > max) {
    return false;
  }
  uint64_t begin = 0;
  if (min != 0) {
    begin = (min + request.alignmentMask) & ~request.alignmentMask;
    if (begin <= request.alignmentMask || max < begin) {
      return false;
    }
  }
  if (max - begin < request.size) {
    return false;
  }
  Split(block, from, begin, begin + request.size);
  return true;
}

bool AddressAllocator::Allocate(AddressBlock* block, uint64_t size,
  uint64_t lastOffset, uint64_t alignmentMask) {
  if (block->begin <= block->last) {
    return false;
  }
  AddressBlock key(size);
  nn::util::IntrusiveRbTreeNode* node = m_FreeTree.FindNotLess(
    [&key](nn::util::IntrusiveRbTreeNode* node) {
      return AddressBlockCompare()(&key, AddressBlock::FromTreeNode(node));
    });
  for (; node != nullptr; node = nn::util::IntrusiveRbTreeImpl::GetNext(node)) {
    if (TryAllocate(block, AddressBlock::FromTreeNode(node), lastOffset,
      alignmentMask)) {
      return true;
    }
  }
  return false;
}

bool AddressAllocator::AllocateInRange(AddressBlock* block, uint64_t size,
  const AlignedRequest& request) {
  if (block->begin <= block->last) {
    return false;
  }
  AddressBlock key(size);
  nn::util::IntrusiveRbTreeNode* node = m_FreeTree.FindNotLess(
    [&key](nn::util::IntrusiveRbTreeNode* node) {
      return AddressBlockCompare()(&key, AddressBlock::FromTreeNode(node));
    });
  for (; node != nullptr; node = nn::util::IntrusiveRbTreeImpl::GetNext(node)) {
    if (TryAllocateInRange(block, AddressBlock::FromTreeNode(node),
      request)) {
      return true;
    }
  }
  return false;
}

void AddressAllocator::Free(AddressBlock* block) {
  if (block->begin > block->last) {
    return;
  }
  AddressBlock* previous = AddressBlock::FromListNode(
    block->listNode.GetPrev());
  if (block->last != block->limit) {
    RemoveFreeBlock(block);
  }
  if (previous->last != previous->limit) {
    RemoveFreeBlock(previous);
  }
  previous->limit = block->limit;
  AddFreeBlock(previous);
  if (&block->listNode != &m_List) {
    block->listNode.Unlink();
  }
  block->last = 0;
  block->limit = 0;
  block->begin = -1;
}

void AddressSpaceRegion::Initialize(uint64_t begin, uint64_t end) {
  m_Begin = begin;
  m_End = end;
  m_Allocator.Initialize(begin, end);
}

bool MappingMap::Find(MappingEntry** pOut, uint8_t kind, uint64_t first,
  uint64_t last) {
  mutex.Lock();
  if (first <= last && !tree.IsEmpty()) {
    MappingEntry* entry;
    do {
      uint64_t key = MakeMappingKey(kind, first);
      nn::util::IntrusiveRbTreeNode* node = tree.FindNotLess(
        [key](nn::util::IntrusiveRbTreeNode* node) {
          return CompareValue(key, MappingEntry::FromTreeNode(node)->key);
        });
      if (node == nullptr) {
        break;
      }
      entry = MappingEntry::FromTreeNode(node);
      if (entry->GetKind() != kind || entry->address > last) {
        break;
      }
      if (entry->isValid) {
        NN_ABORT_UNLESS(++entry->referenceCount != 0);
        *pOut = entry;
        mutex.Unlock();
        return true;
      }
      first = (entry->key << 12) + 0x1000;
    } while (entry->GetLastAddress() < last && first <= last);
  }
  mutex.Unlock();
  return false;
}

void MappingMap::Release(MappingEntry* entry) {
  mutex.Lock();
  NN_ABORT_UNLESS(entry->referenceCount != 0);
  if (--entry->referenceCount == 0 && entry->jobCount == 0) {
    tree.Remove(&entry->node);
    MappingWaiter* woken = nullptr;
    MappingWaiter** link = &waiters;
    for (MappingWaiter* waiter = *link; waiter != nullptr;) {
      MappingWaiter* next = waiter->next;
      if (waiter->entry == entry) {
        *link = next;
        waiter->next = woken;
        woken = waiter;
      }
      else {
        link = &waiter->next;
      }
      waiter = next;
    }
    MappingReleaseFunction release = entry->release;
    VirtualMachineType* machine = entry->machine;
    if (release != nullptr) {
      release(&machine, entry);
    }
    while (woken != nullptr) {
      MappingWaiter* next = woken->next;
      woken->next = nullptr;
      woken->entry = nullptr;
      os::SignalEvent(&woken->event);
      woken = next;
    }
  }
  mutex.Unlock();
}

void SparseSpace::ReleaseWithRegion(VirtualMachineType* const* pMachine,
  SparseSpace* space) {
  VirtualMachineType* machine = *pMachine;
  AddressBlock* block = &space->block;
  DestroySparseRegion(machine->addressSpace, block->begin, block->last,
    AddressSpaceSyncFlag(1));
  machine->sparseRegion.Free(block);
  machine->allocator.Delete(space);
}

void SparseSpace::Release(VirtualMachineType* const* pMachine,
  SparseSpace* space) {
  VirtualMachineType* machine = *pMachine;
  AddressBlock* block = &space->block;
  machine->sparseRegion.Free(block);
  machine->allocator.Delete(space);
}

void SparseRegionMapping::Release(VirtualMachineType* const* pMachine,
  MappingEntry* entry) {
  VirtualMachineType* machine = *pMachine;
  SparseRegionMapping* mapping = reinterpret_cast<SparseRegionMapping*>(
    reinterpret_cast<uintptr_t>(entry) - offsetof(SparseRegionMapping, entry));
  SparseSpace* space = mapping->space;
  machine->allocator.Delete(mapping);
  machine->sparseSpaces.Release(space);
}

void NativeImageMapping::Release(VirtualMachineType* const* pMachine,
  MappingEntry* entry) {
  VirtualMachineType* machine = *pMachine;
  NativeImageMapping* mapping = reinterpret_cast<NativeImageMapping*>(
    reinterpret_cast<uintptr_t>(entry) - offsetof(NativeImageMapping, entry));
  UnmapNativeImage(machine->addressSpace, mapping->address, mapping->size,
    gs::NativeImageHandle{mapping->image});
  NN_ABORT_UNLESS(NvRmMemHandleFree(mapping->memoryHandle) == 0);
  machine->allocator.Delete(mapping);
}

void VprMapping::Release(VirtualMachineType* const* pMachine,
  MappingEntry* entry) {
  VirtualMachineType* machine = *pMachine;
  VprMapping* mapping = reinterpret_cast<VprMapping*>(
    reinterpret_cast<uintptr_t>(entry) - offsetof(VprMapping, entry));
  NormalUnmapVprMemory(machine->addressSpace, entry->address,
    entry->GetLastAddress(), gs::sdk::VprMemoryHandle{mapping->vprMemory},
    AddressSpaceSyncFlag(1));
  NN_ABORT_UNLESS(NvRmMemHandleFree(mapping->memoryHandle) == 0);
  machine->allocator.Delete(mapping);
}

namespace {

const int ErrorOutOfMemory = 6;
const int ErrorInvalidSize = 10;
const int ErrorNoAddressSpace = 17;

}

int AllocateSpace(VirtualMachineType* machine, AddressBlock* block,
  const nvgpu_as_alloc_space_args* args, uint64_t size) {
  uint64_t offset = args->offset;
  if ((args->flags & 1) == 0) {
    uint64_t alignment = offset > 0x1000 ? offset : 0x1000;
    uint64_t alignedSize = (size + alignment - 1) & -alignment;
    uint64_t granule = offset > 0x10000 ? offset : 0x10000;
    if (machine->sparseRegion.Allocate(block, alignedSize, granule)) {
      return 0;
    }
    return ErrorNoAddressSpace;
  }
  uint64_t last = offset + size - 1;
  InvalidateMappings(&machine->allocator, &machine->mappings, offset, last);
  if (machine->sparseRegion.AllocateFixed(block, offset, last)) {
    return 0;
  }
  return ErrorNoAddressSpace;
}

int CreateRegion(VirtualMachineType* machine, SparseSpace* space) {
  uint64_t begin = space->block.begin;
  uint64_t last = space->block.last;
  SparseRegionMapping* mapping =
    machine->allocator.New<SparseRegionMapping>();
  if (mapping == nullptr) {
    return ErrorOutOfMemory;
  }
  if (CreateSparseRegion(machine->addressSpace, begin, last, 0x1000,
    PageTableAllocMode(1), AddressSpaceSyncFlag(1)).IsFailure()) {
    machine->allocator.Delete(mapping);
    return ErrorOutOfMemory;
  }
  space->begin = begin;
  space->last = last;
  space->hasRegion = true;
  machine->sparseSpaces.Insert<&SparseSpace::ReleaseWithRegion>(&space,
    space, machine);
  MappingEntry* entry = nullptr;
  mapping->space = space;
  mapping->entry.address = begin;
  mapping->entry.key = MakeMappingKey(2, last);
  mapping->entry.type = 5;
  mapping->entry.attribute = 0;
  machine->mappings.Insert<SparseRegionMapping>(&entry, &mapping->entry,
    machine);
  space->regionEntry = entry;
  return 0;
}

int AllocateSparseSpace(VirtualMachineType* machine, uint64_t* pOutOffset,
  const nvgpu_as_alloc_space_args* args) {
  uint64_t size = uint64_t(args->pages) * args->page_size;
  if (size == 0) {
    return ErrorInvalidSize;
  }
  SparseSpace* space = machine->allocator.New<SparseSpace>();
  if (space == nullptr) {
    return ErrorOutOfMemory;
  }
  int error = AllocateSpace(machine, &space->block, args, size);
  if (error == 0) {
    if ((args->flags & 2) != 0) {
      error = CreateRegion(machine, space);
      if (error != 0) {
        machine->sparseRegion.Free(&space->block);
      }
    }
    else {
      space->hasRegion = false;
      space->begin = space->block.begin;
      space->last = space->block.last;
      machine->sparseSpaces.Insert<&SparseSpace::Release>(nullptr, space,
        machine);
    }
  }
  if (error != 0) {
    machine->allocator.Delete(space);
    return error;
  }
  *pOutOffset = space->block.begin;
  return 0;
}

void FreeSparseSpace(VirtualMachineType* machine,
  const nvgpu_as_free_space_args* args) {
  SparseSpace* space = machine->sparseSpaces.Acquire(args->offset);
  NN_ABORT_UNLESS(space != nullptr);
  machine->sparseSpaces.Invalidate(space);
  if (MappingEntry* entry = space->regionEntry; entry != nullptr) {
    space->regionEntry = nullptr;
    machine->mappings.Invalidate(entry);
    machine->mappings.Release(entry);
  }
  machine->sparseSpaces.Release(space);
}

template void MappingMap::Insert<SparseRegionMapping>(MappingEntry** pOut,
  MappingEntry* entry, VirtualMachineType* machine);
template void MappingMap::Insert<NativeImageMapping>(MappingEntry** pOut,
  MappingEntry* entry, VirtualMachineType* machine);
template void MappingMap::Insert<VprMapping>(MappingEntry** pOut,
  MappingEntry* entry, VirtualMachineType* machine);
template void SparseSpaceMap::Insert<&SparseSpace::ReleaseWithRegion>(
  SparseSpace** pOut, SparseSpace* space, VirtualMachineType* machine);
template void SparseSpaceMap::Insert<&SparseSpace::Release>(
  SparseSpace** pOut, SparseSpace* space, VirtualMachineType* machine);

}
