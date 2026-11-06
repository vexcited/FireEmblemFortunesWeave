#include <new>

#include "nn/diag/diag_abort.hpp"
#include "nn/mem/detail/number_line_allocator_impl.hpp"

namespace nn::mem {

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
