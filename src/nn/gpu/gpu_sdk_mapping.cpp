#include "nn/codec/video_server_context.hpp"
#include "nn/gpu/gpu_impl_user.hpp"
#include "nn/gsv/gsv_user_image.hpp"

namespace nn::detail {

[[noreturn]] void UnexpectedDefaultImpl();

}

namespace nn::gs::sdk {

struct VprMemoryHandle {
  uint32_t value;
};

}

namespace nn::gpu::impl::user {

extern gsv::UserSession* g_pGsvUserSession;

}

namespace nn::gpu::sdk {

using impl::user::g_DeviceSession;
using impl::user::g_JobEventPool;
using impl::user::g_pGsvUserSession;
using impl::user::g_WorkerSession;
using gsv::imgdesc::impl::user::ounce::GpuOunceUserImageDescriptor;
using gsv::GpuOunceUserImageFlags;

namespace {

constexpr Result ResultInvalidNativeImage = {0x100f3};
constexpr uint64_t PageMask = 0xfff;

[[gnu::always_inline]] bool IsMappable(
  const GpuOunceUserImageDescriptor& descriptor) {
  return descriptor.kind == 1 && descriptor.memoryKind == 1 &&
    descriptor.size != 0;
}

[[gnu::always_inline]] void UnmapNativeImageImpl(
  const GpuAddressSpaceType* addressSpace, uint64_t addressMin,
  uint64_t addressMax, gs::NativeImageHandle image) {
  const uint32_t handle = addressSpace->handle.value;
  NN_ABORT_UNLESS_RESULT_SUCCESS(g_pGsvUserSession->Invoke(0x6000001bb,
    0x1000001bb,
    [&](uint8_t* message) {
      tipc::WriteMessage<uint32_t>(message, 8, image.value);
      tipc::WriteMessage<uint32_t>(message, 12, handle);
      tipc::WriteMessage<uint64_t>(message, 16, addressMin);
      tipc::WriteMessage<uint64_t>(message, 24, addressMax);
    },
    [](const uint8_t*) {}));
}

template <typename Enum>
[[gnu::always_inline]] uint8_t ToBinaryValue(Enum value) {
  const uint8_t raw = static_cast<uint8_t>(value);
  switch (raw) {
    case 0:
    case 1:
      return raw;
    default:
      ::nn::detail::UnexpectedDefaultImpl();
  }
}

}

void SynchronizeGpuAddressSpace(const GpuAddressSpaceType* addressSpace) {
  const int index = g_JobEventPool.Acquire();
  NN_ABORT_UNLESS(g_DeviceSession.Invoke(0x2000000d8, 0x1000000d8,
    [&](uint8_t* message) {
      tipc::WriteMessage<uint32_t>(message, 8, addressSpace->handle.value);
      tipc::WriteMessage<uint32_t>(message, 12, index);
    },
    [](const uint8_t*) {}).IsSuccess());
  g_JobEventPool.Wait(index);
  g_JobEventPool.Release(index);
}

Result NormalMapGpuMemory4K(uint8_t* pOutKind,
  const GpuAddressSpaceType* addressSpace, uint64_t addressMin,
  uint64_t addressMax, GpuMemoryHandle memory, uint64_t offset,
  GpuMemoryPermission permission, GpuCacheability cacheability, uint8_t kind,
  uint8_t compressionKind, RawTextureMode rawTextureMode,
  AddressSpaceSyncFlag syncFlag) {
  const int index = g_JobEventPool.Acquire();
  const uint8_t permissionValue = ToBinaryValue(permission);
  const uint8_t cacheabilityValue = ToBinaryValue(cacheability);
  const uint8_t rawTextureModeValue = ToBinaryValue(rawTextureMode);
  const uint8_t syncFlagValue = ToBinaryValue(syncFlag);
  const GraphicsDeviceType* device = addressSpace->device;

  uint8_t mappedKind = 0;
  const Result result = g_WorkerSession.Invoke(0x10000000e3, 0x2000000e3,
    [&](uint8_t* message) {
      tipc::WriteMessage<uint32_t>(message, 8, addressSpace->handle.value);
      tipc::WriteMessage<uint64_t>(message, 12, addressMin);
      tipc::WriteMessage<uint64_t>(message, 20, addressMax);
      tipc::WriteMessage<uint32_t>(message, 28, memory.value);
      tipc::WriteMessage<uint64_t>(message, 32, offset);
      tipc::WriteMessage<uint8_t>(message, 40, permissionValue);
      tipc::WriteMessage<uint8_t>(message, 44, cacheabilityValue);
      tipc::WriteMessage<uint8_t>(message, 48, kind);
      tipc::WriteMessage<uint8_t>(message, 52, compressionKind);
      tipc::WriteMessage<uint8_t>(message, 56, rawTextureModeValue);
      tipc::WriteMessage<uint8_t>(message, 60, device->id);
      tipc::WriteMessage<uint8_t>(message, 64, syncFlagValue);
      tipc::WriteMessage<uint32_t>(message, 68, index);
    },
    [&](const uint8_t* message) {
      mappedKind = tipc::ReadMessage<uint8_t>(message, 12);
    });
  g_JobEventPool.Wait(index);
  if (result.IsSuccess()) {
    const_cast<GpuAddressSpaceType*>(addressSpace)->mappedSize.fetch_add(
      addressMax - addressMin + 1, std::memory_order_relaxed);
    *pOutKind = mappedKind;
  }
  g_JobEventPool.Release(index);
  return result;
}

void NormalUnmapGpuMemory4K(const GpuAddressSpaceType* addressSpace,
  uint64_t addressMin, uint64_t addressMax, AddressSpaceSyncFlag syncFlag) {
  const int index = g_JobEventPool.Acquire();
  const uint8_t syncFlagValue = ToBinaryValue(syncFlag);

  uint64_t unmappedSize = 0;
  const Result result = g_WorkerSession.Invoke(0x7000000e5, 0x3000000e5,
    [&](uint8_t* message) {
      tipc::WriteMessage<uint32_t>(message, 8, addressSpace->handle.value);
      tipc::WriteMessage<uint64_t>(message, 12, addressMin);
      tipc::WriteMessage<uint64_t>(message, 20, addressMax);
      tipc::WriteMessage<uint8_t>(message, 28, syncFlagValue);
      tipc::WriteMessage<uint32_t>(message, 32, index);
    },
    [&](const uint8_t* message) {
      unmappedSize = tipc::ReadMessage<uint64_t>(message, 12);
    });
  g_JobEventPool.Wait(index);
  NN_ABORT_UNLESS(result.IsSuccess());
  const_cast<GpuAddressSpaceType*>(addressSpace)->mappedSize.fetch_sub(
    unmappedSize, std::memory_order_relaxed);
  g_JobEventPool.Release(index);
}

Result NormalModifyMemoryKind4K(uint8_t* pOutKind,
  const GpuAddressSpaceType* addressSpace, uint64_t addressMin,
  uint64_t addressMax, uint8_t kind, uint8_t compressionKind,
  AddressSpaceSyncFlag syncFlag) {
  const int index = g_JobEventPool.Acquire();
  const uint8_t syncFlagValue = ToBinaryValue(syncFlag);

  uint8_t modifiedKind = 0;
  const Result result = g_WorkerSession.Invoke(0x9000000e4, 0x2000000e4,
    [&](uint8_t* message) {
      tipc::WriteMessage<uint32_t>(message, 8, addressSpace->handle.value);
      tipc::WriteMessage<uint64_t>(message, 12, addressMin);
      tipc::WriteMessage<uint64_t>(message, 20, addressMax);
      tipc::WriteMessage<uint8_t>(message, 28, kind);
      tipc::WriteMessage<uint8_t>(message, 32, compressionKind);
      tipc::WriteMessage<uint8_t>(message, 36, syncFlagValue);
      tipc::WriteMessage<uint32_t>(message, 40, index);
    },
    [&](const uint8_t* message) {
      modifiedKind = tipc::ReadMessage<uint8_t>(message, 12);
    });
  g_JobEventPool.Wait(index);
  if (result.IsSuccess()) {
    *pOutKind = modifiedKind;
  }
  g_JobEventPool.Release(index);
  return result;
}

Result CreateSparseRegion(const GpuAddressSpaceType* addressSpace,
  uint64_t addressMin, uint64_t addressMax, uint64_t pageSize,
  PageTableAllocMode allocMode, AddressSpaceSyncFlag syncFlag) {
  const int index = g_JobEventPool.Acquire();
  NN_ABORT_UNLESS(pageSize != 0 && (pageSize & (pageSize - 1)) == 0);
  const int pageShift = __builtin_ctzll(pageSize);
  NN_ABORT_UNLESS(pageShift == 12 || pageShift == 16);
  const uint8_t allocModeValue = ToBinaryValue(allocMode);
  const uint8_t syncFlagValue = ToBinaryValue(syncFlag);
  const GraphicsDeviceType* device = addressSpace->device;

  const Result result = g_WorkerSession.Invoke(0xa000000e6, 0x1000000e6,
    [&](uint8_t* message) {
      tipc::WriteMessage<uint32_t>(message, 8, addressSpace->handle.value);
      tipc::WriteMessage<uint64_t>(message, 12, addressMin);
      tipc::WriteMessage<uint64_t>(message, 20, addressMax);
      tipc::WriteMessage<uint8_t>(message, 28, pageShift);
      tipc::WriteMessage<uint8_t>(message, 32, allocModeValue);
      tipc::WriteMessage<uint8_t>(message, 36, device->id);
      tipc::WriteMessage<uint8_t>(message, 40, syncFlagValue);
      tipc::WriteMessage<uint32_t>(message, 44, index);
    },
    [](const uint8_t*) {});
  g_JobEventPool.Wait(index);
  if (result.IsSuccess()) {
    const_cast<GpuAddressSpaceType*>(addressSpace)->mappedSize.fetch_add(
      addressMax - addressMin + 1, std::memory_order_relaxed);
  }
  g_JobEventPool.Release(index);
  return result;
}

void DestroySparseRegion(const GpuAddressSpaceType* addressSpace,
  uint64_t addressMin, uint64_t addressMax, AddressSpaceSyncFlag syncFlag) {
  const int index = g_JobEventPool.Acquire();
  const uint8_t syncFlagValue = ToBinaryValue(syncFlag);

  const Result result = g_WorkerSession.Invoke(0x7000000e7, 0x1000000e7,
    [&](uint8_t* message) {
      tipc::WriteMessage<uint32_t>(message, 8, addressSpace->handle.value);
      tipc::WriteMessage<uint64_t>(message, 12, addressMin);
      tipc::WriteMessage<uint64_t>(message, 20, addressMax);
      tipc::WriteMessage<uint8_t>(message, 28, syncFlagValue);
      tipc::WriteMessage<uint32_t>(message, 32, index);
    },
    [](const uint8_t*) {});
  g_JobEventPool.Wait(index);
  NN_ABORT_UNLESS(result.IsSuccess());
  const_cast<GpuAddressSpaceType*>(addressSpace)->mappedSize.fetch_sub(
    addressMax - addressMin + 1, std::memory_order_relaxed);
  g_JobEventPool.Release(index);
}

// VPR memory is mapped by the gsv server in 64 KiB pages without a job event.
Result NormalMapVprMemory(uint64_t* pOutAddress, uint64_t* pOutSize,
  uint8_t* pOutKind, const GpuAddressSpaceType* addressSpace,
  gs::sdk::VprMemoryHandle memory, GpuMemoryPermission permission,
  GpuCacheability cacheability, uint8_t kind, uint8_t compressionKind,
  RawTextureMode rawTextureMode, AddressSpaceSyncFlag /* syncFlag */) {
  const uint32_t handle = addressSpace->handle.value;
  uint64_t address;
  uint64_t size;
  uint8_t mappedKind;
  NN_RESULT_DO(g_pGsvUserSession->Invoke(0x9000001de, 0x6000001de,
    [&](uint8_t* message) {
      tipc::WriteMessage<uint32_t>(message, 8, handle);
      tipc::WriteMessage<uint32_t>(message, 12, memory.value);
      tipc::WriteMessage<uint64_t>(message, 16, 0x10000);
      tipc::WriteMessage<uint8_t>(message, 24,
        static_cast<uint8_t>(permission));
      tipc::WriteMessage<uint8_t>(message, 28,
        static_cast<uint8_t>(cacheability));
      tipc::WriteMessage<uint8_t>(message, 32, kind);
      tipc::WriteMessage<uint8_t>(message, 36, compressionKind);
      tipc::WriteMessage<uint8_t>(message, 40,
        static_cast<uint8_t>(rawTextureMode));
    },
    [&](const uint8_t* message) {
      address = tipc::ReadMessage<uint64_t>(message, 12);
      size = tipc::ReadMessage<uint64_t>(message, 20);
      mappedKind = tipc::ReadMessage<uint8_t>(message, 28);
    }));
  *pOutAddress = address;
  *pOutSize = size;
  *pOutKind = mappedKind;
  return Result{0};
}

void NormalUnmapVprMemory(const GpuAddressSpaceType* addressSpace,
  uint64_t address, uint64_t size, gs::sdk::VprMemoryHandle memory,
  AddressSpaceSyncFlag /* syncFlag */) {
  const uint32_t handle = addressSpace->handle.value;
  NN_ABORT_UNLESS_RESULT_SUCCESS(g_pGsvUserSession->Invoke(0x6000001df,
    0x1000001df,
    [&](uint8_t* message) {
      tipc::WriteMessage<uint32_t>(message, 8, handle);
      tipc::WriteMessage<uint64_t>(message, 12, address);
      tipc::WriteMessage<uint64_t>(message, 20, size);
      tipc::WriteMessage<uint32_t>(message, 28, memory.value);
    },
    [](const uint8_t*) {}));
}

Result NormalModifyVprMemoryKind(uint8_t* pOutKind,
  const GpuAddressSpaceType* addressSpace, uint64_t address, uint64_t size,
  uint8_t kind, uint8_t compressionKind,
  AddressSpaceSyncFlag /* syncFlag */) {
  const uint32_t handle = addressSpace->handle.value;
  uint8_t modifiedKind;
  NN_RESULT_DO(g_pGsvUserSession->Invoke(0x7000001e0, 0x2000001e0,
    [&](uint8_t* message) {
      tipc::WriteMessage<uint32_t>(message, 8, handle);
      tipc::WriteMessage<uint64_t>(message, 12, address);
      tipc::WriteMessage<uint64_t>(message, 20, size);
      tipc::WriteMessage<uint8_t>(message, 28, kind);
      tipc::WriteMessage<uint8_t>(message, 32, compressionKind);
    },
    [&](const uint8_t* message) {
      modifiedKind = tipc::ReadMessage<uint8_t>(message, 12);
    }));
  *pOutKind = modifiedKind;
  return Result{0};
}


Result QueryNativeImage(size_t* pOutSize, size_t* pOutOffset,
  GpuOunceUserImageDescriptor* pOutDescriptor,
  GpuOunceUserImageFlags* pOutFlags, gs::NativeImageHandle image) {
  uint64_t base;
  GpuOunceUserImageDescriptor descriptor;
  GpuOunceUserImageFlags flags;
  NN_RESULT_DO(g_pGsvUserSession->Invoke(0x1000001bc, 0x26000001bc,
    [&](uint8_t* message) {
      tipc::WriteMessage<uint32_t>(message, 8, image.value);
    },
    [&](const uint8_t* message) {
      base = tipc::ReadMessage<uint64_t>(message, 20);
      descriptor = tipc::ReadMessage<GpuOunceUserImageDescriptor>(message, 28);
      flags = tipc::ReadMessage<GpuOunceUserImageFlags>(message, 156);
    }));
  if (!IsMappable(descriptor)) {
    return ResultInvalidNativeImage;
  }

  const uint64_t begin = base + descriptor.offset;
  *pOutSize = ((begin + descriptor.size - 1) | PageMask) - (begin & ~PageMask) +
    1;
  *pOutOffset = begin & PageMask;
  *pOutDescriptor = descriptor;
  *pOutFlags = flags;
  return Result{0};
}

Result MapNativeImage(uint64_t* pOutAddressMin, uint64_t* pOutAddressMax,
  GpuOunceUserImageDescriptor* pOutDescriptor,
  GpuOunceUserImageFlags* pOutFlags, const GpuAddressSpaceType* addressSpace,
  gs::NativeImageHandle image, GpuMemoryPermission permission) {
  const uint32_t handle = addressSpace->handle.value;
  gsv::UserSession* session = g_pGsvUserSession;
  uint8_t access;
  switch (static_cast<uint8_t>(permission)) {
    case 0:
      access = 3;
      break;
    case 1:
      access = 1;
      break;
    default:
      ::nn::detail::UnexpectedDefaultImpl();
  }

  uint64_t addressMin;
  uint64_t addressMax;
  GpuOunceUserImageDescriptor descriptor;
  GpuOunceUserImageFlags flags;
  NN_RESULT_DO(session->Invoke(0x4000001ba, 0x26000001ba,
    [&](uint8_t* message) {
      tipc::WriteMessage<uint32_t>(message, 8, image.value);
      tipc::WriteMessage<uint32_t>(message, 12, 1);
      tipc::WriteMessage<uint32_t>(message, 16, handle);
      tipc::WriteMessage<uint8_t>(message, 20, access);
    },
    [&](const uint8_t* message) {
      addressMin = tipc::ReadMessage<uint64_t>(message, 12);
      addressMax = tipc::ReadMessage<uint64_t>(message, 20);
      descriptor = tipc::ReadMessage<GpuOunceUserImageDescriptor>(message, 28);
      flags = tipc::ReadMessage<GpuOunceUserImageFlags>(message, 156);
    }));
  if (!IsMappable(descriptor)) {
    UnmapNativeImageImpl(addressSpace, addressMin, addressMax, image);
    return ResultInvalidNativeImage;
  }

  GpuAddressSpaceType* mutableAddressSpace =
    const_cast<GpuAddressSpaceType*>(addressSpace);
  mutableAddressSpace->mappedSize.fetch_add(descriptor.size,
    std::memory_order_relaxed);
  mutableAddressSpace->attachedCount.fetch_add(1, std::memory_order_relaxed);
  const uint64_t address = (addressMin & PageMask) + descriptor.offset +
    (addressMin & ~PageMask);
  *pOutAddressMin = address;
  *pOutAddressMax = address + descriptor.size - 1;
  *pOutDescriptor = descriptor;
  *pOutFlags = flags;
  return Result{0};
}

void UnmapNativeImage(const GpuAddressSpaceType* addressSpace,
  uint64_t addressMin, uint64_t addressMax, gs::NativeImageHandle image) {
  UnmapNativeImageImpl(addressSpace, addressMin, addressMax, image);
  GpuAddressSpaceType* mutableAddressSpace =
    const_cast<GpuAddressSpaceType*>(addressSpace);
  mutableAddressSpace->mappedSize.fetch_sub(addressMax - addressMin + 1,
    std::memory_order_relaxed);
  mutableAddressSpace->attachedCount.fetch_sub(1, std::memory_order_relaxed);
}

}
