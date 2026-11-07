#include <stddef.h>
#include <stdint.h>

#include "nn/codec/video_server_context.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/gsdrv/gsdrv_unique_native_handle.hpp"
#include "nn/os/memory_permission.hpp"
#include "nn/os/synchronization.hpp"
#include "nn/os/transfer_memory.hpp"
#include "nn/result.hpp"
#include "nn/svc/svc_api.hpp"
#include "nn/util/util_scope_exit.hpp"

namespace nn::gpuk {

struct GpuMemoryHandle {
  uint32_t value;
};

struct MemorySize {
  uint64_t value;
};

}

namespace nn::gsv {

struct MemoryBlockModeBits {
  uint64_t value;
};

}

namespace nn::gs {

namespace cpu {

enum MemoryCacheability : uint8_t {
  MemoryCacheability_Cached,
};

}

struct NativeMemoryHandle {
  uint32_t value;
};

namespace sdk {

struct VprMemoryHandle {
  uint32_t value;
};

}

}

namespace nn::gs::sdk {

namespace detail {

class NativeMemoryManager {
public:
  void Initialize(uint32_t sessionHandle, uint64_t blockModes) {
    m_BlockModes = blockModes;
    m_SessionHandle = sessionHandle;
  }

  Result Create(NativeMemoryHandle* pOutHandle, void* address, size_t size);
  Result CreateByTransferMemory(NativeMemoryHandle* pOutHandle,
    void* address, size_t size, os::MemoryPermission permission);
  Result CreateWithTransferMemoryUnsafe(NativeMemoryHandle* pOutHandle,
    const gsdrv::WeakNativeHandle& handle, void* address, size_t size,
    os::MemoryPermission permission);
  Result CreateWithProtectedMemory(NativeMemoryHandle* pOutHandle,
    size_t size);
  Result CreateWithGpukMemHandle(NativeMemoryHandle* pOutHandle,
    void* address, size_t size, gpuk::GpuMemoryHandle gpuMemoryHandle,
    gpuk::MemorySize memorySize);
  Result CreateWithVprMemHandleGpuShared(NativeMemoryHandle* pOutHandle,
    VprMemoryHandle vprMemory, size_t offset, size_t size);

  void Lock() {
    m_Mutex.Lock();
  }

  void Unlock() {
    m_Mutex.Unlock();
  }

  // Entries are looked up by handle, 0 is never a valid handle.
  void Destroy(NativeMemoryHandle handle) {
    Lock();
    if (handle.value != 0) {
      for (Entry& entry : m_Entries) {
        if (entry.handle == handle.value) {
          DestroyUnsafe(&entry);
          break;
        }
      }
    }
    Unlock();
  }

private:
  enum EntryState : uint32_t {
    EntryState_Free,
    EntryState_TransferMemory,
    EntryState_Memory,
    EntryState_ProtectedMemory,
    EntryState_VprMemory,
  };

  struct Entry {
    EntryState state;
    uint32_t handle;
    uint64_t size;
    union {
      uintptr_t address;
      VprMemoryHandle vprMemory;
    };
    uint32_t attribute;
  };

  static const int EntryCountMax = 256;
  static const uint32_t UncachedAttribute = 0x20;
  static const uint64_t BlockModeUncached = 2;

  gsv::UserSession GetSession() const {
    return {{}, {m_SessionHandle}};
  }

  Entry* FindFreeEntry() {
    for (Entry& entry : m_Entries) {
      if (entry.state == EntryState_Free) {
        return &entry;
      }
    }
    return nullptr;
  }

  void FreeEntry(Entry* entry) {
    const size_t index = static_cast<size_t>(entry - m_Entries);
    NN_ABORT_UNLESS(index < EntryCountMax);
    m_Entries[index] = {};
  }

  Result AllocateHandle(uint32_t* pOutHandle, uint8_t type, size_t size);
  void FreeHandle(uint32_t handle);
  void DestroyUnsafe(Entry* entry);
  void DestroyProtectedUnsafe(Entry* entry);
  void DestroyProtectedMemory(uint32_t handle, size_t size,
    const VprMemoryHandle& vprMemory);

  os::SdkMutexType m_Mutex;
  uint32_t m_SessionHandle;
  uint64_t m_BlockModes;
  Entry m_Entries[EntryCountMax];
};

namespace {

constexpr Result ResultInvalidMemoryPermission() {
  return {0x100f3};
}

constexpr Result ResultNativeMemoryEntryFull() {
  return {0x80f3};
}

}

Result NativeMemoryManager::AllocateHandle(uint32_t* pOutHandle, uint8_t type,
  size_t size) {
  gsv::UserSession session = GetSession();
  uint32_t handle;
  NN_RESULT_DO(session.Invoke(0x30000007f, 0x20000007f,
    [&](uint8_t* message) {
      tipc::WriteMessage<uint8_t>(message, 8, type);
      tipc::WriteMessage<uint64_t>(message, 12, size);
    },
    [&](const uint8_t* message) {
      handle = tipc::ReadMessage<uint32_t>(message, 12);
    }));
  *pOutHandle = handle;
  return Result();
}

void NativeMemoryManager::FreeHandle(uint32_t handle) {
  gsv::UserSession session = GetSession();
  NN_ABORT_UNLESS_RESULT_SUCCESS(session.Invoke(0x100000080, 0x100000080,
    [&](uint8_t* message) {
      tipc::WriteMessage<uint32_t>(message, 8, handle);
    },
    [](const uint8_t*) {}));
}

void NativeMemoryManager::DestroyProtectedMemory(uint32_t handle,
  size_t size, const VprMemoryHandle& vprMemory) {
  static_cast<void>(size);
  gsv::UserSession session = GetSession();
  FreeHandle(handle);
  NN_ABORT_UNLESS_RESULT_SUCCESS(session.Invoke(0x10000008c, 0x10000008c,
    [&](uint8_t* message) {
      tipc::WriteMessage<uint32_t>(message, 8, vprMemory.value);
    },
    [](const uint8_t*) {}));
}

void NativeMemoryManager::DestroyProtectedUnsafe(Entry* entry) {
  switch (entry->state) {
    case EntryState_ProtectedMemory: {
      struct {
        uint32_t handle;
        uint64_t size;
        VprMemoryHandle vprMemory;
      } memory;
      memory.handle = entry->handle;
      memory.size = entry->size;
      memory.vprMemory = entry->vprMemory;
      FreeEntry(entry);
      DestroyProtectedMemory(memory.handle, memory.size, memory.vprMemory);
      break;
    }
    case EntryState_VprMemory: {
      const uint32_t handle = entry->handle;
      FreeEntry(entry);
      FreeHandle(handle);
      break;
    }
    default:
      NN_ABORT_UNLESS(false);
  }
}

void NativeMemoryManager::DestroyUnsafe(Entry* entry) {
  switch (entry->state) {
    case EntryState_TransferMemory: {
      const uint32_t handle = entry->handle;
      FreeEntry(entry);
      FreeHandle(handle);
      break;
    }
    case EntryState_Memory: {
      const uint32_t handle = entry->handle;
      const uint64_t size = entry->size;
      const uintptr_t address = entry->address;
      const uint32_t attribute = entry->attribute;
      FreeEntry(entry);
      FreeHandle(handle);
      if ((attribute & UncachedAttribute) != 0) {
        svc::SetMemoryAttribute(address, size, UncachedAttribute, 0);
      }
      break;
    }
    default:
      DestroyProtectedUnsafe(entry);
      break;
  }
}

Result NativeMemoryManager::Create(NativeMemoryHandle* pOutHandle,
  void* address, size_t size) {
  Lock();
  NN_UTIL_SCOPE_EXIT {
    Unlock();
  };

  const uint64_t blockModes = m_BlockModes;
  gsv::UserSession session = GetSession();
  uint64_t mapFlags = 0;
  uint32_t attribute = 0;
  const uintptr_t memory = reinterpret_cast<uintptr_t>(address);
  if ((blockModes & BlockModeUncached) != 0) {
    attribute = UncachedAttribute;
    NN_RESULT_DO(svc::SetMemoryAttribute(memory, size, UncachedAttribute,
      UncachedAttribute));
    mapFlags = 2;
  }
  bool isSuccess = false;
  NN_UTIL_SCOPE_EXIT {
    if (!isSuccess && (blockModes & BlockModeUncached) != 0) {
      svc::SetMemoryAttribute(memory, size, UncachedAttribute, 0);
    }
  };

  uint32_t handle = 0;
  NN_RESULT_DO(AllocateHandle(&handle, 3, size));
  NN_UTIL_SCOPE_EXIT {
    if (!isSuccess) {
      FreeHandle(handle);
    }
  };

  NN_RESULT_DO(session.Invoke(0x900000082, 0x100000082,
    [&](uint8_t* message) {
      tipc::WriteMessage<uint32_t>(message, 8, handle);
      tipc::WriteMessage<uint64_t>(message, 12, memory);
      tipc::WriteMessage<uint64_t>(message, 20, size);
      tipc::WriteMessage<uint64_t>(message, 28, mapFlags);
      tipc::WriteMessage<uint64_t>(message, 36, 0);
    },
    [](const uint8_t*) {}));

  Entry* entry = FindFreeEntry();
  if (entry == nullptr) {
    return ResultNativeMemoryEntryFull();
  }
  entry->size = size;
  entry->address = memory;
  entry->attribute = attribute;
  entry->state = EntryState_Memory;
  entry->handle = handle;
  pOutHandle->value = handle;
  isSuccess = true;
  return Result();
}

Result NativeMemoryManager::CreateByTransferMemory(
  NativeMemoryHandle* pOutHandle, void* address, size_t size,
  os::MemoryPermission permission) {
  Lock();
  NN_UTIL_SCOPE_EXIT {
    Unlock();
  };

  os::TransferMemoryType transferMemory;
  NN_RESULT_DO(os::CreateTransferMemory(&transferMemory, address, size,
    permission));
  gsdrv::UniqueNativeHandle handle;
  handle = os::DetachTransferMemory(&transferMemory);
  os::DestroyTransferMemory(&transferMemory);
  return CreateWithTransferMemoryUnsafe(pOutHandle, handle, address, size,
    permission);
}

Result NativeMemoryManager::CreateWithTransferMemoryUnsafe(
  NativeMemoryHandle* pOutHandle, const gsdrv::WeakNativeHandle& handle,
  void* address, size_t size, os::MemoryPermission permission) {
  gsv::UserSession session = GetSession();
  if (static_cast<uint32_t>(permission) > 3) {
    return ResultInvalidMemoryPermission();
  }

  uint32_t memoryHandle = 0;
  NN_RESULT_DO(AllocateHandle(&memoryHandle,
    static_cast<uint8_t>(permission), size));
  bool isSuccess = false;
  NN_UTIL_SCOPE_EXIT {
    if (!isSuccess) {
      FreeHandle(memoryHandle);
    }
  };

  const uint32_t transferMemory = handle.value;
  NN_RESULT_DO(session.Invoke(0x8000000500000081, 0x100000081,
    [&](uint8_t* message) {
      tipc::WriteMessage<uint32_t>(message, 8, 2);
      tipc::WriteMessage<uint32_t>(message, 12, transferMemory);
      tipc::WriteMessage<uint32_t>(message, 16, memoryHandle);
      tipc::WriteMessage<uint64_t>(message, 20, size);
      tipc::WriteMessage<uint64_t>(message, 28,
        reinterpret_cast<uintptr_t>(address));
    },
    [](const uint8_t*) {}));

  Entry* entry = FindFreeEntry();
  if (entry == nullptr) {
    return ResultNativeMemoryEntryFull();
  }
  entry->size = size;
  entry->address = reinterpret_cast<uintptr_t>(address);
  entry->state = EntryState_TransferMemory;
  entry->handle = memoryHandle;
  pOutHandle->value = memoryHandle;
  isSuccess = true;
  return Result();
}

Result NativeMemoryManager::CreateWithProtectedMemory(
  NativeMemoryHandle* pOutHandle, size_t size) {
  Lock();
  NN_UTIL_SCOPE_EXIT {
    Unlock();
  };

  gsv::UserSession session = GetSession();
  bool isSuccess = false;
  VprMemoryHandle vprMemory = {};
  NN_RESULT_DO(session.Invoke(0x20000008b, 0x20000008b,
    [&](uint8_t* message) {
      tipc::WriteMessage<uint64_t>(message, 8, size);
    },
    [&](const uint8_t* message) {
      vprMemory.value = tipc::ReadMessage<uint32_t>(message, 12);
    }));
  NN_UTIL_SCOPE_EXIT {
    if (!isSuccess) {
      NN_ABORT_UNLESS_RESULT_SUCCESS(session.Invoke(0x10000008c, 0x10000008c,
        [&](uint8_t* message) {
          tipc::WriteMessage<uint32_t>(message, 8, vprMemory.value);
        },
        [](const uint8_t*) {}));
    }
  };

  uint32_t handle;
  NN_RESULT_DO(session.Invoke(0x20000008d, 0x20000008d,
    [&](uint8_t* message) {
      tipc::WriteMessage<uint64_t>(message, 8, size);
    },
    [&](const uint8_t* message) {
      handle = tipc::ReadMessage<uint32_t>(message, 12);
    }));
  NN_UTIL_SCOPE_EXIT {
    if (!isSuccess) {
      FreeHandle(handle);
    }
  };

  NN_RESULT_DO(session.Invoke(0x20000008a, 0x10000008a,
    [&](uint8_t* message) {
      tipc::WriteMessage<uint32_t>(message, 8, handle);
      tipc::WriteMessage<uint32_t>(message, 12, vprMemory.value);
    },
    [](const uint8_t*) {}));

  Entry* entry = FindFreeEntry();
  if (entry == nullptr) {
    return ResultNativeMemoryEntryFull();
  }
  entry->vprMemory = vprMemory;
  entry->size = size;
  entry->state = EntryState_ProtectedMemory;
  entry->handle = handle;
  isSuccess = true;
  pOutHandle->value = handle;
  return Result();
}

Result NativeMemoryManager::CreateWithGpukMemHandle(
  NativeMemoryHandle* pOutHandle, void* address, size_t size,
  gpuk::GpuMemoryHandle gpuMemoryHandle, gpuk::MemorySize memorySize) {
  Lock();
  NN_UTIL_SCOPE_EXIT {
    Unlock();
  };

  gsv::UserSession session = GetSession();
  uint32_t handle = 0;
  NN_RESULT_DO(AllocateHandle(&handle, 3, size));
  bool isSuccess = false;
  NN_UTIL_SCOPE_EXIT {
    if (!isSuccess) {
      FreeHandle(handle);
    }
  };

  NN_RESULT_DO(session.Invoke(0xc000001b7, 0x1000001b7,
    [&](uint8_t* message) {
      tipc::WriteMessage<uint32_t>(message, 8, handle);
      tipc::WriteMessage<uint64_t>(message, 12,
        reinterpret_cast<uintptr_t>(address));
      tipc::WriteMessage<uint64_t>(message, 20, size);
      tipc::WriteMessage<uint32_t>(message, 28, gpuMemoryHandle.value);
      tipc::WriteMessage<uint64_t>(message, 32, memorySize.value);
      tipc::WriteMessage<uint64_t>(message, 40, 0);
      tipc::WriteMessage<uint64_t>(message, 48, 0);
    },
    [](const uint8_t*) {}));

  Entry* entry = FindFreeEntry();
  if (entry == nullptr) {
    return ResultNativeMemoryEntryFull();
  }
  entry->size = size;
  entry->address = reinterpret_cast<uintptr_t>(address);
  entry->attribute = 0;
  entry->state = EntryState_Memory;
  entry->handle = handle;
  pOutHandle->value = handle;
  isSuccess = true;
  return Result();
}

Result NativeMemoryManager::CreateWithVprMemHandleGpuShared(
  NativeMemoryHandle* pOutHandle, VprMemoryHandle vprMemory, size_t offset,
  size_t size) {
  Lock();
  NN_UTIL_SCOPE_EXIT {
    Unlock();
  };

  gsv::UserSession allocateSession = GetSession();
  gsv::UserSession session = GetSession();
  uint32_t handle;
  NN_RESULT_DO(allocateSession.Invoke(0x20000008d, 0x20000008d,
    [&](uint8_t* message) {
      tipc::WriteMessage<uint64_t>(message, 8, size);
    },
    [&](const uint8_t* message) {
      handle = tipc::ReadMessage<uint32_t>(message, 12);
    }));
  bool isSuccess = false;
  NN_UTIL_SCOPE_EXIT {
    if (!isSuccess) {
      FreeHandle(handle);
    }
  };

  NN_RESULT_DO(session.Invoke(0x6000001e2, 0x1000001e2,
    [&](uint8_t* message) {
      tipc::WriteMessage<uint32_t>(message, 8, handle);
      tipc::WriteMessage<uint32_t>(message, 12, vprMemory.value);
      tipc::WriteMessage<uint64_t>(message, 16, offset);
      tipc::WriteMessage<uint64_t>(message, 24, size);
    },
    [](const uint8_t*) {}));

  Entry* entry = FindFreeEntry();
  if (entry == nullptr) {
    return ResultNativeMemoryEntryFull();
  }
  entry->size = size;
  entry->vprMemory = vprMemory;
  entry->state = EntryState_VprMemory;
  entry->handle = handle;
  pOutHandle->value = handle;
  isSuccess = true;
  return Result();
}

}

using detail::NativeMemoryManager;

namespace {

NativeMemoryManager g_NativeMemoryManager;

}

void BootNativeMemoryManagement(gsv::MemoryBlockModeBits modes) {
  gsv::UserSession* session = gsv::GetUserSession();
  uint64_t blockModes;
  NN_ABORT_UNLESS_RESULT_SUCCESS(session->Invoke(0x200000083, 0x300000083,
    [&](uint8_t* message) {
      tipc::WriteMessage<uint64_t>(message, 8, modes.value);
    },
    [&](const uint8_t* message) {
      blockModes = tipc::ReadMessage<uint64_t>(message, 12);
    }));
  g_NativeMemoryManager.Initialize(gsv::GetUserSession()->session.handle,
    blockModes);
}

Result CreateNativeMemory(NativeMemoryHandle* pOutHandle, void* address,
  size_t size, os::MemoryPermission, cpu::MemoryCacheability cacheability) {
  NN_ABORT_UNLESS(cacheability == cpu::MemoryCacheability_Cached);
  NativeMemoryHandle handle = {};
  NN_RESULT_DO(g_NativeMemoryManager.Create(&handle, address, size));
  *pOutHandle = handle;
  return Result();
}

Result CreateNativeMemoryByTransferMemory(NativeMemoryHandle* pOutHandle,
  void* address, size_t size, os::MemoryPermission permission,
  cpu::MemoryCacheability cacheability) {
  NN_ABORT_UNLESS(cacheability == cpu::MemoryCacheability_Cached);
  NativeMemoryHandle handle = {};
  NN_RESULT_DO(g_NativeMemoryManager.CreateByTransferMemory(&handle, address,
    size, permission));
  *pOutHandle = handle;
  return Result();
}

Result CreateNativeMemoryWithTransferMemory(NativeMemoryHandle* pOutHandle,
  gsdrv::UniqueNativeHandle&& transferMemory, size_t size,
  os::MemoryPermission permission) {
  NativeMemoryHandle handle = {};
  g_NativeMemoryManager.Lock();
  Result result = g_NativeMemoryManager.CreateWithTransferMemoryUnsafe(
    &handle, transferMemory, nullptr, size, permission);
  g_NativeMemoryManager.Unlock();
  NN_RESULT_DO(result);
  *pOutHandle = handle;
  return Result();
}

Result CreateNativeMemoryWithTransferMemory(NativeMemoryHandle* pOutHandle,
  gsdrv::WeakNativeHandle transferMemory, size_t size,
  os::MemoryPermission permission) {
  NativeMemoryHandle handle = {};
  g_NativeMemoryManager.Lock();
  Result result = g_NativeMemoryManager.CreateWithTransferMemoryUnsafe(
    &handle, transferMemory, nullptr, size, permission);
  g_NativeMemoryManager.Unlock();
  NN_RESULT_DO(result);
  *pOutHandle = handle;
  return Result();
}

Result CreateNativeMemoryWithProtectedMemory(NativeMemoryHandle* pOutHandle,
  size_t size) {
  NativeMemoryHandle handle = {};
  NN_RESULT_DO(g_NativeMemoryManager.CreateWithProtectedMemory(&handle,
    size));
  *pOutHandle = handle;
  return Result();
}

Result CreateNativeMemoryWithGpukMemHandle(NativeMemoryHandle* pOutHandle,
  void* address, size_t size, gpuk::GpuMemoryHandle gpuMemoryHandle,
  gpuk::MemorySize memorySize) {
  NativeMemoryHandle handle = {};
  NN_RESULT_DO(g_NativeMemoryManager.CreateWithGpukMemHandle(&handle, address,
    size, gpuMemoryHandle, memorySize));
  *pOutHandle = handle;
  return Result();
}

Result CreateNativeMemoryWithVprMemHandleGpuShared(
  NativeMemoryHandle* pOutHandle, VprMemoryHandle vprMemory, size_t offset,
  size_t size) {
  NativeMemoryHandle handle = {};
  NN_RESULT_DO(g_NativeMemoryManager.CreateWithVprMemHandleGpuShared(&handle,
    vprMemory, offset, size));
  *pOutHandle = handle;
  return Result();
}

void DestroyNativeMemory(NativeMemoryHandle handle) {
  g_NativeMemoryManager.Destroy(handle);
}

}
