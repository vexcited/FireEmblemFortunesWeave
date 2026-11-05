#pragma once

#include "nn/os/mutex.hpp"

namespace gxc {

class Mutex {
public:
  explicit Mutex(bool recursive) {
    nn::os::InitializeMutex(&mutex_, recursive, 0);
  }

  ~Mutex() {
    nn::os::FinalizeMutex(&mutex_);
  }

  void Lock() {
    nn::os::LockMutex(&mutex_);
  }

  void Unlock() {
    nn::os::UnlockMutex(&mutex_);
  }

private:
  nn::os::MutexType mutex_ = {};
};

}
