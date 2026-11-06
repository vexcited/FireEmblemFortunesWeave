#pragma once

#include <stddef.h>
#include <stdint.h>
#include <string.h>

#include "nn/mem/number_line_allocator.hpp"

namespace nn::mem {

namespace detail {

enum NodeState {
  NodeState_Unmanaged = 1,
  NodeState_Free = 2,
  NodeState_Allocated = 3,
};

struct Node {
  uint32_t first;
  uint32_t last;
  int state;
  union {
    Node* sizePrev;
    void* userData;
  };
  union {
    Node* sizeNext;
    void (*destructor)(void*);
  };
  Node* prev;
  Node* next;

  void LinkNext(Node* node) {
    Node* following = next;
    node->prev = this;
    node->next = following;
    next = node;
    following->prev = node;
  }

  void Unlink() {
    prev->next = next;
    next->prev = prev;
    prev = nullptr;
    next = nullptr;
  }
};

constexpr int BucketCount = 256;
constexpr int TableSize = 256;
constexpr size_t TableBytes = TableSize * sizeof(uintptr_t);
constexpr size_t NodeCacheLimit = 0x80;
constexpr uint32_t InitialLast = 0x1000000;

// Errno style codes returned by the implementation.
constexpr int ErrorNotFound = 2;
constexpr int ErrorOutOfMemory = 12;
constexpr int ErrorBusy = 16;

struct NodePool {
  size_t cachedCount;
  NumberLineAllocator::AllocateFunction allocate;
  void* allocateData;
  NumberLineAllocator::FreeFunction free;
  void* freeData;
  Node* cached;

  [[gnu::always_inline]] Node* Allocate() {
    Node* node;
    if (cached != nullptr) {
      node = cached;
      --cachedCount;
      cached = node->next;
    }
    else {
      node = static_cast<Node*>(allocate(sizeof(Node), allocateData));
      if (node == nullptr) {
        return nullptr;
      }
    }
    *node = Node{};
    return node;
  }

  [[gnu::always_inline]] void Free(Node* node) {
    if (cachedCount < NodeCacheLimit) {
      node->next = cached;
      cached = node;
      ++cachedCount;
    }
    else {
      free(node, freeData);
    }
  }
};

// Free nodes are kept in 256 buckets by size, the last one holding every
// node of at least 256. Each entry of nextBucket names the next bucket that
// may be non empty and is shortened lazily while searching.
struct FreeList {
  uint8_t nextBucket[BucketCount];
  Node buckets[BucketCount];

  [[gnu::always_inline]] void Insert(Node* node) {
    const uint32_t size = node->last + ~node->first;
    const uint32_t index = size < BucketCount - 1 ? size : BucketCount - 1;
    Node* bucket = &buckets[index];
    Node* head = bucket->sizeNext;
    bucket->sizeNext = node;
    node->sizePrev = bucket;
    node->sizeNext = head;
    head->sizePrev = node;
    if (size != 0 && head == bucket) {
      for (uint32_t i = index; i > 0; --i) {
        if (size < nextBucket[i - 1]) {
          nextBucket[i - 1] = index;
        }
      }
    }
  }

  static void Remove(Node* node) {
    node->sizePrev->sizeNext = node->sizeNext;
    node->sizeNext->sizePrev = node->sizePrev;
    node->sizePrev = nullptr;
    node->sizeNext = nullptr;
  }

  Node* Find(uint32_t count, uint32_t alignment);
};

}

using detail::Node;
using detail::NodeState_Unmanaged;
using detail::NodeState_Free;
using detail::NodeState_Allocated;
using detail::InitialLast;
using detail::BucketCount;
using detail::TableSize;

class NumberLineAllocator::Impl {
public:
  Impl(AllocateFunction allocate, void* allocateData, FreeFunction free,
    void* freeData) :
    allocate_(allocate), allocateData_(allocateData), free_(free),
    freeData_(freeData) {
    memset(table_, 0, sizeof(table_));
    memset(freeList_.nextBucket, 0xff, sizeof(freeList_.nextBucket));
    memset(freeList_.buckets, 0, sizeof(freeList_.buckets));
    for (Node& bucket : freeList_.buckets) {
      bucket.sizePrev = &bucket;
      bucket.sizeNext = &bucket;
    }

    pool_.cachedCount = 0;
    pool_.allocate = allocate;
    pool_.allocateData = allocateData;
    pool_.free = free;
    pool_.freeData = freeData;
    pool_.cached = nullptr;
    sentinel_ = Node{};
    mode_ = AllocationMode_FirstFit;
  }

  bool Initialize() {
    Node* node = pool_.Allocate();
    if (node == nullptr) {
      return false;
    }

    // The sentinel keeps pointing back to itself, only its next link is set.
    sentinel_.next = node;
    sentinel_.prev = &sentinel_;
    node->prev = &sentinel_;
    node->next = &sentinel_;
    node->first = 0;
    node->last = InitialLast;
    node->state = NodeState_Unmanaged;
    mode_ = AllocationMode_FirstFit;
    return true;
  }

  void Destroy();
  int AddRange(int first, int last);
  int RemoveRange(int first, int last);
  int Allocate(Node** node, int count);
  int Allocate(Node** node, int count, int alignment);
  int Free(int first);

  Node* Find(int first) const {
    uintptr_t entry = table_[static_cast<unsigned int>(first) >> 16];
    if (entry & 1) {
      if (first & 0xffff) {
        return nullptr;
      }
      return reinterpret_cast<Node*>(entry & ~uintptr_t(1));
    }
    if (entry == 0) {
      return nullptr;
    }

    entry = reinterpret_cast<uintptr_t*>(entry)[(first >> 8) & 0xff];
    if (entry & 1) {
      if (first & 0xff) {
        return nullptr;
      }
      return reinterpret_cast<Node*>(entry & ~uintptr_t(1));
    }
    if (entry == 0) {
      return nullptr;
    }

    return reinterpret_cast<Node**>(entry)[first & 0xff];
  }

  int GetTotalFreeSize() const {
    int total = 0;
    int index = 0;
    for (;;) {
      const Node* bucket = &freeList_.buckets[index];
      for (Node* node = bucket->sizeNext; node != bucket;
        node = node->sizeNext) {
        total += node->last - node->first;
      }
      if (index == BucketCount - 1) {
        break;
      }
      index = freeList_.nextBucket[index];
    }
    return total;
  }

  int GetAllocatableSize() const {
    int largest = 0;
    int index = 0;
    for (;;) {
      const Node* bucket = &freeList_.buckets[index];
      for (Node* node = bucket->sizeNext; node != bucket;
        node = node->sizeNext) {
        int size = node->last - node->first;
        if (size > largest) {
          largest = size;
        }
      }
      if (index == BucketCount - 1) {
        break;
      }
      index = freeList_.nextBucket[index];
    }
    return largest;
  }

  void SetAllocationMode(AllocationMode mode) {
    mode_ = mode;
  }

  AllocationMode GetAllocationMode() const {
    return mode_;
  }

private:
  void Compact();
  [[gnu::always_inline]] bool Register(Node* node);
  [[gnu::always_inline]] Node* Unregister(uint32_t first);

  AllocateFunction allocate_;
  void* allocateData_;
  FreeFunction free_;
  void* freeData_;
  uintptr_t table_[TableSize];
  detail::FreeList freeList_;
  detail::NodePool pool_;
  Node sentinel_;
  AllocationMode mode_;
};

}
