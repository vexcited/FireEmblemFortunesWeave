#pragma once

#include <stddef.h>
#include <stdint.h>

#include <memory>
#include <new>

#include "nn/codec/video_decoder.hpp"
#include "nn/codec/video_encoder.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/gsdrv/gsdrv_unique_native_handle.hpp"
#include "nn/os/synchronization.hpp"
#include "nn/os/transfer_memory.hpp"
#include "nn/result.hpp"
#include "nn/tipc/tipc_message.hpp"

namespace nn::gsv {

struct VideoDecoderLibraryVersion {
  uint32_t value[2];
};

}

namespace nn::codec::video::detail {

enum SystemUserName : uint32_t {};

// Fixed size storage for service sessions handed out to decoders and
// encoders, guarded by its own mutex.
template <typename T, int Count>
class ServiceObjectPool {
public:
  ServiceObjectPool() = default;

  T* Allocate(uint32_t handle) {
    m_Mutex.Lock();
    T* object = nullptr;

    for (Slot& slot : m_Slots) {
      if (!slot.isUsed) {
        new (&slot.object) T{handle};
        slot.isUsed = true;
        object = &slot.object;
        break;
      }
    }

    m_Mutex.Unlock();
    return object;
  }

  void Free(T* object) {
    m_Mutex.Lock();

    for (Slot& slot : m_Slots) {
      if (slot.isUsed && &slot.object == object) {
        slot.object.~T();
        slot.isUsed = false;
        break;
      }
    }

    m_Mutex.Unlock();
  }

private:
  struct Slot {
    bool isUsed = false;
    union {
      uint8_t storage[sizeof(T)] = {};
      T object;
    };

    ~Slot() {
      if (isUsed) {
        object.~T();
      }
    }
  };

  Slot m_Slots[Count];
  os::SdkMutexType m_Mutex = {};
};

class ShimLibraryGlobal {
public:
  static ShimLibraryGlobal& GetInstance() {
    static ShimLibraryGlobal s_Instance;
    return s_Instance;
  }

  ShimLibraryGlobal();
  [[gnu::visibility("hidden")]] ~ShimLibraryGlobal();

  void SetResolutionUnlimitedModeEnabled(bool isEnabled);
  Result Initialize();
  Result InitializeForTest(const gsv::VideoDecoderLibraryVersion& version);
  Result InitializeForSystem(SystemUserName name);
  void Finalize();
  Result CreateVideoDecService(ipc::VideoDecService** service);
  void DestroyVideoDecService(ipc::VideoDecService* service);
  Result CreateVideoEncService(ipc::VideoEncService** service);
  void DestroyVideoEncService(ipc::VideoEncService* service);

private:
  using DecServicePool = ServiceObjectPool<ipc::VideoDecService, 16>;
  using EncServicePool = ServiceObjectPool<ipc::VideoEncService, 6>;

  void ResetServicePools() {
    new (&m_DecServicePool) DecServicePool();
    new (&m_EncServicePool) EncServicePool();
  }

  os::SdkMutexType m_Mutex;
  DecServicePool m_DecServicePool;
  EncServicePool m_EncServicePool;
  int64_t m_ReferenceCount;
  bool m_IsResolutionUnlimitedModeEnabled;
};

static_assert(sizeof(ShimLibraryGlobal) == 208);

Result InitializeServerContext(bool isResolutionUnlimitedModeEnabled,
  const gsv::VideoDecoderLibraryVersion& version);
Result InitializeServerContextForSystem(SystemUserName name);
void FinalizeServerContext();
Result CreateVideoDecoderService(tipc::UniqueHandle* handle);
Result CreateVideoEncoderService(tipc::UniqueHandle* handle);
Result CreateTransferMemory(gsdrv::UniqueNativeHandle* handle, void* address,
  size_t size);

}

namespace nn::codec::video {

void Initialize();
void Finalize();

}
