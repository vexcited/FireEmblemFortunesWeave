#pragma once

#include <stddef.h>
#include <stdint.h>

#include <optional>

#include "nn/applet/applet_types.hpp"
#include "nn/os/sdk_mutex.hpp"
#include "nn/os/transfer_memory.hpp"

namespace nn::hid::utility {

// Keeps a transfer memory lent by an applet mapped until it is finalized.
class TransferMemoryHolder {
 public:
  TransferMemoryHolder();
  ~TransferMemoryHolder();

  void Initialize(uint32_t&& handle, size_t size, bool isManaged,
    os::MemoryPermission permission,
    const applet::AppletResourceUserId& aruid);
  void Finalize();
  bool IsInitialized() const;
  std::optional<applet::AppletResourceUserId> GetAruid() const;
  void* GetMappedAddress();
  size_t GetSize() const;

 private:
  bool IsInitializedImpl() const;

  mutable os::SdkMutex m_Mutex;
  std::optional<applet::AppletResourceUserId> m_Aruid;
  os::TransferMemoryType m_TransferMemory;
  void* m_pMappedAddress;
  size_t m_Size;
};

}
