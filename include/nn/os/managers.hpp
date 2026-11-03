#pragma once

#include "nn/os/synchronization.hpp"
#include "nn/util/tiny_mt.hpp"

namespace nn::os::detail {

struct RngManager {
  InternalCriticalSection lock;
  util::TinyMt generator;

  RngManager();
  uint64_t GenerateRandomU64();
};

using TlsDestructor = void (*)(uintptr_t);

struct TlsManager {
  uint32_t allocated_slots;
  uint32_t reserved04;
  TlsDestructor destructors[32];
  InternalCriticalSection lock;

  TlsManager();
};

struct VammManager {
  uintptr_t base;
  uint64_t size;
  ReaderWriterLockType lock;
  uintptr_t implementation;

  VammManager();
  bool IsVirtualAddressMemoryEnabled() const;
};

}
