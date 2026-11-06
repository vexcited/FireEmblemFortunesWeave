#include "nn/mem/detail/number_line_allocator_impl.hpp"

namespace nn::mem {

namespace detail {

Node* FreeList::Find(uint32_t count, uint32_t alignment) {
  const uint32_t clamped = count < BucketCount ? count : BucketCount;
  // A zero count wraps to an index past every bucket, as in the original.
  size_t index = static_cast<size_t>(clamped) - 1;
  Node* bucket = &buckets[index];
  Node* node;
  if (alignment == 1) {
    // Every node of a bucket below the last one is large enough.
    while (index < BucketCount - 1) {
      node = bucket->sizeNext;
      if (node != bucket) {
        Remove(node);
        return node;
      }
      size_t next = nextBucket[index];
      bucket = &buckets[next];
      while (bucket->sizeNext == bucket && next != BucketCount - 1) {
        next = nextBucket[next];
        nextBucket[index] = next;
        bucket = &buckets[next];
      }
      index = next;
    }
    for (node = bucket->sizeNext; node != bucket; node = node->sizeNext) {
      if (node->last - node->first >= count) {
        Remove(node);
        return node;
      }
    }
    return nullptr;
  }

  while (index < BucketCount - 1) {
    for (node = bucket->sizeNext; node != bucket; node = node->sizeNext) {
      uint32_t first = node->first;
      uint32_t size = node->last - node->first;
      if (size < count) {
        continue;
      }
      while (first % alignment != 0) {
        ++first;
        if (--size < count) {
          break;
        }
      }
      if (size >= count) {
        Remove(node);
        return node;
      }
    }
    size_t next = nextBucket[index];
    bucket = &buckets[next];
    while (bucket->sizeNext == bucket) {
      if (next == BucketCount - 1) {
        next = BucketCount;
        break;
      }
      next = nextBucket[next];
      bucket = &buckets[next];
      nextBucket[index] = next;
    }
    index = next;
  }
  for (node = bucket->sizeNext; node != bucket; node = node->sizeNext) {
    uint32_t first = node->first;
    uint32_t size = node->last - node->first;
    if (size < count) {
      continue;
    }
    while (first % alignment != 0) {
      ++first;
      if (--size < count) {
        break;
      }
    }
    if (size >= count) {
      Remove(node);
      return node;
    }
  }
  return nullptr;
}

}

void NumberLineAllocator::Impl::Destroy() {
  for (Node* node = sentinel_.next; node != &sentinel_;) {
    Node* next = node->next;
    if (node->state == NodeState_Allocated && node->destructor != nullptr) {
      node->destructor(node->userData);
    }
    pool_.Free(node);
    node = next;
  }
  for (Node* node = pool_.cached; node != nullptr;) {
    Node* next = node->next;
    pool_.free(node, pool_.freeData);
    node = next;
  }
  for (uintptr_t entry : table_) {
    if (entry == 0 || (entry & 1) != 0) {
      continue;
    }
    uintptr_t* level2 = reinterpret_cast<uintptr_t*>(entry);
    for (int i = 0; i < TableSize; ++i) {
      if (level2[i] != 0 && (level2[i] & 1) == 0) {
        free_(reinterpret_cast<void*>(level2[i]), freeData_);
      }
    }
    free_(level2, freeData_);
  }
}

// Merges neighbors that are both unmanaged or both free.
void NumberLineAllocator::Impl::Compact() {
  for (Node* node = sentinel_.next; node != &sentinel_;) {
    Node* next = node->next;
    if (node->state == NodeState_Unmanaged) {
      while (next->state == NodeState_Unmanaged) {
        next->Unlink();
        node->last = next->last;
        pool_.Free(next);
        next = node->next;
      }
    }
    else if (node->state == NodeState_Free) {
      while (next->state == NodeState_Free) {
        const uint32_t first = node->first;
        const uint32_t last = node->last;
        node->last = next->last;
        detail::FreeList::Remove(next);
        next->Unlink();
        pool_.Free(next);
        if (first + BucketCount > last) {
          detail::FreeList::Remove(node);
          freeList_.Insert(node);
        }
        next = node->next;
      }
    }
    node = next;
  }
}

inline bool NumberLineAllocator::Impl::Register(Node* node) {
  const uint32_t first = node->first;
  const uint32_t size = node->last - first;
  uintptr_t& level1 = table_[first >> 16];
  if (level1 == 0) {
    if ((first & 0xffff) == 0 && size >= 0x10000) {
      level1 = reinterpret_cast<uintptr_t>(node) | 1;
      return true;
    }
    void* table = allocate_(detail::TableBytes, allocateData_);
    if (table == nullptr) {
      return false;
    }
    memset(table, 0, detail::TableBytes);
    level1 = reinterpret_cast<uintptr_t>(table);
  }

  uintptr_t& level2 = reinterpret_cast<uintptr_t*>(level1)[(first >> 8) & 0xff];
  if (level2 == 0) {
    if ((first & 0xff) == 0 && size >= 0x100) {
      level2 = reinterpret_cast<uintptr_t>(node) | 1;
      return true;
    }
    void* table = allocate_(detail::TableBytes, allocateData_);
    if (table == nullptr) {
      return false;
    }
    memset(table, 0, detail::TableBytes);
    level2 = reinterpret_cast<uintptr_t>(table);
  }

  reinterpret_cast<Node**>(level2)[first & 0xff] = node;
  return true;
}

inline Node* NumberLineAllocator::Impl::Unregister(uint32_t first) {
  uintptr_t& level1 = table_[first >> 16];
  if (level1 & 1) {
    if (first & 0xffff) {
      return nullptr;
    }
    Node* node = reinterpret_cast<Node*>(level1 & ~uintptr_t(1));
    level1 = 0;
    return node;
  }
  if (level1 == 0) {
    return nullptr;
  }

  uintptr_t& level2 = reinterpret_cast<uintptr_t*>(level1)[(first >> 8) & 0xff];
  if (level2 & 1) {
    if (first & 0xff) {
      return nullptr;
    }
    Node* node = reinterpret_cast<Node*>(level2 & ~uintptr_t(1));
    level2 = 0;
    return node;
  }
  if (level2 == 0) {
    return nullptr;
  }

  Node*& slot = reinterpret_cast<Node**>(level2)[first & 0xff];
  Node* node = slot;
  slot = nullptr;
  return node;
}

int NumberLineAllocator::Impl::AddRange(int first, int last) {
  Compact();
  Node* node = sentinel_.next;
  while (first >= node->last) {
    node = node->next;
  }
  if (node->last < last || node->first > first) {
    return detail::ErrorBusy;
  }
  if (node->state != NodeState_Unmanaged) {
    return detail::ErrorBusy;
  }

  const uint32_t size = last - first;
  if (node->first == first) {
    if (node->last == last) {
      node->state = NodeState_Free;
      freeList_.Insert(node);
      return 0;
    }
    Node* rest = pool_.Allocate();
    if (rest == nullptr) {
      return detail::ErrorOutOfMemory;
    }
    rest->first = node->first + size;
    rest->last = node->last;
    rest->state = NodeState_Unmanaged;
    node->last = rest->first;
    node->state = NodeState_Free;
    freeList_.Insert(node);
    node->LinkNext(rest);
    return 0;
  }

  if (node->last == last) {
    Node* added = pool_.Allocate();
    if (added == nullptr) {
      return detail::ErrorOutOfMemory;
    }
    added->first = first;
    added->last = last;
    added->state = NodeState_Free;
    node->last = first;
    node->LinkNext(added);
    freeList_.Insert(added);
    return 0;
  }

  Node* added = pool_.Allocate();
  if (added == nullptr) {
    return detail::ErrorOutOfMemory;
  }
  Node* rest = pool_.Allocate();
  if (rest == nullptr) {
    pool_.Free(added);
    return detail::ErrorOutOfMemory;
  }
  added->first = first;
  added->last = last;
  added->state = NodeState_Free;
  rest->first = last;
  rest->last = node->last;
  rest->state = NodeState_Unmanaged;
  node->last = first;
  node->LinkNext(added);
  added->LinkNext(rest);
  freeList_.Insert(added);
  return 0;
}

int NumberLineAllocator::Impl::RemoveRange(int first, int last) {
  Compact();
  Node* node = sentinel_.next;
  while (first >= node->last) {
    node = node->next;
  }
  if (node->last < last || node->first > first) {
    return detail::ErrorBusy;
  }
  if (node->state != NodeState_Free) {
    return detail::ErrorBusy;
  }

  detail::FreeList::Remove(node);
  const uint32_t size = last - first;
  if (node->first == first) {
    if (node->last == last) {
      node->state = NodeState_Unmanaged;
      return 0;
    }
    Node* rest = pool_.Allocate();
    if (rest == nullptr) {
      return detail::ErrorOutOfMemory;
    }
    rest->first = node->first + size;
    rest->last = node->last;
    rest->state = NodeState_Free;
    node->last = rest->first;
    node->state = NodeState_Unmanaged;
    node->LinkNext(rest);
    freeList_.Insert(rest);
    return 0;
  }

  if (node->last == last) {
    Node* removed = pool_.Allocate();
    if (removed == nullptr) {
      return detail::ErrorOutOfMemory;
    }
    removed->first = first;
    removed->last = last;
    removed->state = NodeState_Unmanaged;
    node->last = first;
    node->LinkNext(removed);
    freeList_.Insert(node);
    return 0;
  }

  Node* removed = pool_.Allocate();
  if (removed == nullptr) {
    return detail::ErrorOutOfMemory;
  }
  Node* rest = pool_.Allocate();
  if (rest == nullptr) {
    pool_.Free(removed);
    return detail::ErrorOutOfMemory;
  }
  removed->first = first;
  removed->last = last;
  removed->state = NodeState_Unmanaged;
  rest->first = last;
  rest->last = node->last;
  rest->state = NodeState_Free;
  node->last = first;
  node->LinkNext(removed);
  removed->LinkNext(rest);
  freeList_.Insert(node);
  freeList_.Insert(rest);
  return 0;
}

int NumberLineAllocator::Impl::Allocate(Node** pOut, int count) {
  Node* node = freeList_.Find(count, 1);
  if (node == nullptr) {
    Compact();
    node = freeList_.Find(count, 1);
    if (node == nullptr) {
      return detail::ErrorNotFound;
    }
  }

  if (node->first + count != node->last) {
    Node* rest = pool_.Allocate();
    if (rest == nullptr) {
      freeList_.Insert(node);
      return detail::ErrorOutOfMemory;
    }
    if (static_cast<uint32_t>(count) >= BucketCount) {
      // Large blocks are taken from the end of the free range.
      rest->first = node->last - count;
      rest->last = node->last;
      if (!Register(rest)) {
        freeList_.Insert(node);
        pool_.Free(rest);
        return detail::ErrorOutOfMemory;
      }
      node->last = rest->first;
      freeList_.Insert(node);
      node->LinkNext(rest);
      node = rest;
    }
    else {
      rest->first = node->first + count;
      rest->last = node->last;
      rest->state = NodeState_Free;
      node->last = rest->first;
      if (!Register(node)) {
        node->last = rest->last;
        freeList_.Insert(node);
        pool_.Free(rest);
        return detail::ErrorOutOfMemory;
      }
      freeList_.Insert(rest);
      node->LinkNext(rest);
    }
  }
  else if (!Register(node)) {
    freeList_.Insert(node);
    return detail::ErrorOutOfMemory;
  }

  node->userData = nullptr;
  node->destructor = nullptr;
  node->state = NodeState_Allocated;
  *pOut = node;
  return 0;
}

int NumberLineAllocator::Impl::Allocate(Node** pOut, int count,
  int alignment) {
  Node* node = freeList_.Find(count, alignment);
  if (node == nullptr) {
    Compact();
    node = freeList_.Find(count, alignment);
    if (node == nullptr) {
      return detail::ErrorNotFound;
    }
  }

  if (node->first + count == node->last) {
    if (!Register(node)) {
      freeList_.Insert(node);
      return detail::ErrorOutOfMemory;
    }
  }
  else if (node->first % alignment == 0) {
    Node* rest = pool_.Allocate();
    if (rest == nullptr) {
      freeList_.Insert(node);
      return detail::ErrorOutOfMemory;
    }
    rest->first = node->first + count;
    rest->last = node->last;
    rest->state = NodeState_Free;
    node->last = rest->first;
    if (!Register(node)) {
      node->last = rest->last;
      freeList_.Insert(node);
      pool_.Free(rest);
      return detail::ErrorOutOfMemory;
    }
    freeList_.Insert(rest);
    node->LinkNext(rest);
  }
  else {
    Node* allocated = pool_.Allocate();
    if (allocated == nullptr) {
      freeList_.Insert(node);
      return detail::ErrorOutOfMemory;
    }
    Node* rest = pool_.Allocate();
    if (rest == nullptr) {
      pool_.Free(allocated);
      freeList_.Insert(node);
      return detail::ErrorOutOfMemory;
    }

    uint32_t first = node->first;
    uint32_t size = node->last - node->first;
    if (size >= count) {
      uint32_t last = first + count;
      bool isFound = true;
      while (first % alignment != 0) {
        ++first;
        ++last;
        if (--size < count) {
          isFound = false;
          break;
        }
      }
      if (isFound) {
        allocated->first = first;
        allocated->last = last;
      }
    }

    rest->first = allocated->last;
    rest->last = node->last;
    rest->state = NodeState_Free;
    node->last = allocated->first;
    if (!Register(allocated)) {
      node->last = rest->last;
      freeList_.Insert(node);
      pool_.Free(allocated);
      pool_.Free(rest);
      return detail::ErrorOutOfMemory;
    }
    freeList_.Insert(node);
    freeList_.Insert(rest);
    node->LinkNext(allocated);
    allocated->LinkNext(rest);
    node = allocated;
  }

  node->userData = nullptr;
  node->destructor = nullptr;
  node->state = NodeState_Allocated;
  *pOut = node;
  return 0;
}

int NumberLineAllocator::Impl::Free(int first) {
  Node* node = Unregister(first);
  if (node == nullptr) {
    return detail::ErrorNotFound;
  }
  if (node->destructor != nullptr) {
    node->destructor(node->userData);
  }
  node->state = NodeState_Free;

  // Small blocks wait for the next compaction unless best fit is used.
  if (mode_ != AllocationMode_BestFit &&
    node->first + BucketCount > node->last) {
    freeList_.Insert(node);
    return 0;
  }

  Node* next = node->next;
  if (next->state == NodeState_Free) {
    detail::FreeList::Remove(next);
    next->Unlink();
    node->last = next->last;
    pool_.Free(next);
  }

  Node* prev = node->prev;
  if (prev->state != NodeState_Free) {
    freeList_.Insert(node);
    return 0;
  }
  const uint32_t prevLast = prev->last;
  prev->last = node->last;
  if (prev->first + BucketCount > prevLast) {
    detail::FreeList::Remove(prev);
    freeList_.Insert(prev);
  }
  node->Unlink();
  pool_.Free(node);
  return 0;
}

}
