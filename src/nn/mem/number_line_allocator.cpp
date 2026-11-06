#include "nn/mem/number_line_allocator.hpp"

#include <string.h>

#include <new>

#include "nn/diag/diag_abort.hpp"

namespace nn::mem {

namespace detail {

enum NodeState {
  NodeState_Free = 1,
  NodeState_Allocated = 2,
  NodeState_AllocatedWithData = 3,
};

struct Node {
  int first;
  int last;
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
};

constexpr int BucketCount = 256;
constexpr int TableSize = 256;
constexpr size_t NodeCacheLimit = 0x80;
constexpr int InitialLast = 0x1000000;

struct NodePool {
  size_t cachedCount;
  NumberLineAllocator::AllocateFunction allocate;
  void* allocateData;
  NumberLineAllocator::FreeFunction free;
  void* freeData;
  Node* cached;

  Node* Allocate() {
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
};

}

using detail::Node;
using detail::NodeState_Free;
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
    memset(nextBucket_, 0xff, sizeof(nextBucket_));
    memset(buckets_, 0, sizeof(buckets_));
    for (Node& bucket : buckets_) {
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
    node->state = NodeState_Free;
    mode_ = AllocationMode_FirstFit;
    return true;
  }

  void Destroy();
  int AddRange(int first, int count);
  int RemoveRange(int first, int count);
  int Allocate(Node** node, int count);
  int Allocate(Node** node, int count, int alignment);
  void Free(int first);

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
      const Node* bucket = &buckets_[index];
      for (Node* node = bucket->sizeNext; node != bucket;
        node = node->sizeNext) {
        total += node->last - node->first;
      }
      if (index == BucketCount - 1) {
        break;
      }
      index = nextBucket_[index];
    }
    return total;
  }

  int GetAllocatableSize() const {
    int largest = 0;
    int index = 0;
    for (;;) {
      const Node* bucket = &buckets_[index];
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
      index = nextBucket_[index];
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
  AllocateFunction allocate_;
  void* allocateData_;
  FreeFunction free_;
  void* freeData_;
  uintptr_t table_[TableSize];
  uint8_t nextBucket_[BucketCount];
  Node buckets_[BucketCount];
  detail::NodePool pool_;
  Node sentinel_;
  AllocationMode mode_;
};

void NumberLineAllocator::Initialize(AllocateFunction allocate,
  void* allocateData, FreeFunction free, void* freeData) {
  NN_ABORT_UNLESS(impl_ == nullptr);

  Impl* impl = new (allocate(sizeof(Impl), allocateData))
    Impl(allocate, allocateData, free, freeData);
  if (!impl->Initialize()) {
    impl->Destroy();
    free_(impl, freeData);
    diag::detail::AbortImpl();
  }

  free_ = free;
  freeData_ = freeData;
  impl_ = impl;
}

void NumberLineAllocator::Initialize(AllocateFunction allocate,
  void* allocateData, FreeFunction free, void* freeData, bool threadSafe) {
  threadSafe_ = threadSafe;
  Initialize(allocate, allocateData, free, freeData);
}

void NumberLineAllocator::Finalize() {
  NN_ABORT_UNLESS(impl_ != nullptr);
  impl_->Destroy();
  free_(impl_, freeData_);
  impl_ = nullptr;
}

bool NumberLineAllocator::AddRange(int first, int count) {
  int result;
  if (threadSafe_) {
    os::LockMutex(&mutex_);
    result = impl_->AddRange(first, count);
    os::UnlockMutex(&mutex_);
  }
  else {
    result = impl_->AddRange(first, count);
  }
  return result == 0;
}

bool NumberLineAllocator::RemoveRange(int first, int count) {
  int result;
  if (threadSafe_) {
    os::LockMutex(&mutex_);
    result = impl_->RemoveRange(first, count);
    os::UnlockMutex(&mutex_);
  }
  else {
    result = impl_->RemoveRange(first, count);
  }
  return result == 0;
}

bool NumberLineAllocator::Allocate(int* first, int count) {
  Node* node = nullptr;
  bool succeeded;
  if (threadSafe_) {
    os::LockMutex(&mutex_);
    succeeded = impl_->Allocate(&node, count) == 0;
    if (succeeded) {
      *first = node->first;
    }
    os::UnlockMutex(&mutex_);
  }
  else {
    succeeded = impl_->Allocate(&node, count) == 0;
    if (succeeded) {
      *first = node->first;
    }
  }
  return succeeded;
}

bool NumberLineAllocator::Allocate(int* first, int count, void* userData,
  void (*destructor)(void*)) {
  Node* node = nullptr;
  bool succeeded;
  if (threadSafe_) {
    os::LockMutex(&mutex_);
    succeeded = impl_->Allocate(&node, count) == 0;
    if (succeeded) {
      *first = node->first;
      node->userData = userData;
      node->destructor = destructor;
    }
    os::UnlockMutex(&mutex_);
  }
  else {
    succeeded = impl_->Allocate(&node, count) == 0;
    if (succeeded) {
      *first = node->first;
      node->userData = userData;
      node->destructor = destructor;
    }
  }
  return succeeded;
}

bool NumberLineAllocator::Allocate(int* first, int count, int alignment) {
  Node* node = nullptr;
  bool succeeded;
  if (threadSafe_) {
    os::LockMutex(&mutex_);
    succeeded = impl_->Allocate(&node, count, alignment) == 0;
    if (succeeded) {
      *first = node->first;
    }
    os::UnlockMutex(&mutex_);
  }
  else {
    succeeded = impl_->Allocate(&node, count, alignment) == 0;
    if (succeeded) {
      *first = node->first;
    }
  }
  return succeeded;
}

bool NumberLineAllocator::Allocate(int* first, int count, int alignment,
  void* userData, void (*destructor)(void*)) {
  Node* node = nullptr;
  bool succeeded;
  if (threadSafe_) {
    os::LockMutex(&mutex_);
    succeeded = impl_->Allocate(&node, count, alignment) == 0;
    if (succeeded) {
      *first = node->first;
      node->userData = userData;
      node->destructor = destructor;
    }
    os::UnlockMutex(&mutex_);
  }
  else {
    succeeded = impl_->Allocate(&node, count, alignment) == 0;
    if (succeeded) {
      *first = node->first;
      node->userData = userData;
      node->destructor = destructor;
    }
  }
  return succeeded;
}

void NumberLineAllocator::Free(int first) {
  if (threadSafe_) {
    os::LockMutex(&mutex_);
    impl_->Free(first);
    os::UnlockMutex(&mutex_);
  }
  else {
    impl_->Free(first);
  }
}

bool NumberLineAllocator::FindUserData(void** userData, int first) const {
  if (threadSafe_) {
    os::LockMutex(&mutex_);
    Node* node = impl_->Find(first);
    bool found = false;
    if (node != nullptr) {
      *userData = node->userData;
      found = true;
    }
    os::UnlockMutex(&mutex_);
    return found;
  }

  Node* node = impl_->Find(first);
  if (node == nullptr) {
    return false;
  }
  *userData = node->userData;
  return true;
}

int NumberLineAllocator::GetSizeOf(int first) const {
  if (threadSafe_) {
    os::LockMutex(&mutex_);
    Node* node = impl_->Find(first);
    int size = node != nullptr ? node->last - node->first : 0;
    os::UnlockMutex(&mutex_);
    return size;
  }

  Node* node = impl_->Find(first);
  return node != nullptr ? node->last - node->first : 0;
}

int NumberLineAllocator::GetTotalFreeSize() const {
  if (threadSafe_) {
    os::LockMutex(&mutex_);
    int size = impl_->GetTotalFreeSize();
    os::UnlockMutex(&mutex_);
    return size;
  }
  return impl_->GetTotalFreeSize();
}

int NumberLineAllocator::GetAllocatableSize() const {
  if (threadSafe_) {
    os::LockMutex(&mutex_);
    int size = impl_->GetAllocatableSize();
    os::UnlockMutex(&mutex_);
    return size;
  }
  return impl_->GetAllocatableSize();
}

void NumberLineAllocator::SetAllocationMode(AllocationMode mode) {
  if (threadSafe_) {
    os::LockMutex(&mutex_);
    impl_->SetAllocationMode(mode);
    os::UnlockMutex(&mutex_);
  }
  else {
    impl_->SetAllocationMode(mode);
  }
}

NumberLineAllocator::AllocationMode
NumberLineAllocator::GetAllocationMode() const {
  if (threadSafe_) {
    os::LockMutex(&mutex_);
    AllocationMode mode = impl_->GetAllocationMode();
    os::UnlockMutex(&mutex_);
    return mode;
  }
  return impl_->GetAllocationMode();
}

void NumberLineAllocator::Dump(size_t, int) const {
}

}
