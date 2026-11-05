#pragma once

#include <atomic>
#include <optional>
#include <stddef.h>

#include "nn/os/shared_memory.hpp"
#include "nn/streamplay/detail/streamplay_hid_shared_memory.hpp"

namespace nn::streamplay {

struct HidSharedMemoryConfig {
  size_t size;
  size_t offset;
};

}

namespace nn::streamplay::detail {

class HidApplicationResourceHolder {
 public:
  HidApplicationResourceHolder(uint32_t handle, bool isManaged,
    const HidSharedMemoryConfig& config);
  ~HidApplicationResourceHolder();

  const HidSharedMemoryAccessor& GetSharedMemoryAccessorRef() const;

 private:
  os::SharedMemoryType m_SharedMemory;
  std::optional<HidSharedMemoryAccessor> m_Accessor;
};

extern std::optional<HidApplicationResourceHolder>
  g_HidApplicationResourceHolder;
extern std::atomic<bool> g_IsHidApplicationResourceHolderCreated;

HidApplicationResourceHolder* GetHidApplicationResourceHolder();

}
