#pragma once

#include <cstdint>
#include <new>

#include "nn/diag/diag_abort.hpp"
#include "nn/os/mutex.hpp"
#include "snd/memory.hpp"

namespace snd::fnd {

template <typename T>
void safeFree(T*& memory) {
  T* freed = memory;
  memory = nullptr;
  g_memory->free(freed);
}

template <typename T, uint32_t Alignment>
class FastAlloc {
public:
  class List {
  public:
    List() {
      nn::os::InitializeMutex(&mutex_, true, 0);
    }

    virtual ~List() {
      finalize();
      nn::os::FinalizeMutex(&mutex_);
    }

    void finalize() {
      if (indices_ != nullptr) {
        safeFree(buffer_);
        safeFree(indices_);
        used_ = 0;
        capacity_ = 0;
      }
    }

    bool isFull() {
      nn::os::LockMutex(&mutex_);
      uint16_t used = used_;
      uint16_t capacity = capacity_;
      nn::os::UnlockMutex(&mutex_);
      return used >= capacity;
    }

    [[gnu::always_inline]] T* pop() {
      nn::os::LockMutex(&mutex_);
      if (isFull()) {
        nn::os::UnlockMutex(&mutex_);
        nn::diag::detail::AbortImpl();
      }
      uint16_t index = indices_[used_];
      indices_[used_++] = 0xffff;
      T* object = &buffer_[index];
      nn::os::UnlockMutex(&mutex_);
      return object;
    }

    [[gnu::always_inline]] void push(T* object) {
      nn::os::LockMutex(&mutex_);
      uintptr_t offset = reinterpret_cast<uintptr_t>(object) -
        reinterpret_cast<uintptr_t>(buffer_);
      indices_[--used_] = offset / sizeof(T);
      nn::os::UnlockMutex(&mutex_);
    }

  private:
    T* buffer_ = nullptr;
    uint16_t* indices_ = nullptr;
    uint16_t used_ = 0;
    uint16_t capacity_ = 0;
    nn::os::MutexType mutex_ = {};
  };

  virtual ~FastAlloc() {
    if (initialized_ == true) {
      list_.finalize();
      initialized_ = false;
    }
  }

  template <typename... Args>
  [[gnu::always_inline]] T* alloc(Args... args) {
    return new (list_.pop()) T(args...);
  }

  [[gnu::always_inline]] void free(T* object) {
    object->~T();
    list_.push(object);
  }

private:
  List list_;
  bool initialized_ = false;
};

}
