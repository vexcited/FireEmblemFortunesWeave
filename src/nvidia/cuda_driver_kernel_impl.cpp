#include <stdint.h>

using CUresult = uint32_t;
using U8 = uint8_t;
using U32 = uint32_t;
using U64 = uint64_t;

constexpr CUresult kInvalidValue = 1;
constexpr CUresult kOutOfMemory = 2;
constexpr CUresult kInvalidDevice = 101;
constexpr CUresult kInvalidHandle = 400;
constexpr CUresult kNotPermitted = 801;
constexpr CUresult kInvalidResourceType = 914;
constexpr CUresult kInvalidResourceConfiguration = 915;

constexpr U64 kGranularityMask = 0x1fffff;

struct CudaDriverGlobals {
  U8 reserved0[0x118];
  U64 devices[64];
  int32_t deviceCount;
};

struct CudaAllocationProps {
  U64 words[48];
};

// Kernels cache one configured value per device and attribute.
struct CudaKernelSetting {
  U32 value;
  U32 isSet;
};

[[gnu::visibility("hidden")]] extern CudaDriverGlobals g_CudaDriver;
[[gnu::visibility("hidden")]] extern U8 g_CudaKernelLock[8];

[[gnu::visibility("hidden")]] void CudaLog(const char* tag, U32 level,
  const char* format, ...);
[[gnu::visibility("hidden")]] CUresult CudaGetCurrentContext(U64* pContext);
[[gnu::visibility("hidden")]] void CudaLock(U64 mutex, U32, U64, U32);
[[gnu::visibility("hidden")]] void CudaUnlock(U64 mutex);
[[gnu::visibility("hidden")]] void CudaLockShared(U64 mutex, U32, U64);
[[gnu::visibility("hidden")]] void CudaUnlockShared(U64 mutex);
[[gnu::visibility("hidden")]] CUresult CudaGetThreadState(U64* pState);

[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_2fae0(U64, U64*,
  U64*, U64, U64);
[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_644e0(U32*, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_a2140(U64, U64,
  U32*, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_bb080(U32, U8*);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_bbeb0(U64, U64*,
  U32*, U32);
[[gnu::visibility("hidden")]] U8 CudaDriverRoutine_d47e0(U64);
[[gnu::visibility("hidden")]] void CudaDriverRoutine_d5d50(U64, U64, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_d9290(U64*, U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_df0b0(U64, U64*,
  U64*, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_e86e0(U32*, U32,
  U32, U32*);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_e8dd0(U32**, U32*,
  U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_e9060(U32*, U32,
  U32*);
[[gnu::visibility("hidden")]] U8 CudaDriverRoutine_f2040(int32_t, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_fe6b0(U64, U64,
  CudaAllocationProps*, U64*);
[[gnu::visibility("hidden")]] U8 CudaDriverRoutine_fe960();
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_fea90(U64*,
  CudaAllocationProps*, U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_10ade0(U64, U32*,
  U64, U64, U64, U64, U32, U32);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_12c940(U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_12c9e0(U64);
[[gnu::visibility("hidden")]] U8 CudaDriverRoutine_12cad0(U64);
[[gnu::visibility("hidden")]] U8 CudaDriverRoutine_1a36a0(U64, U64*);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_1dbfc0(U64);

namespace {

[[gnu::always_inline]] inline bool IsDeviceOrdinal(int32_t device) {
  return device >= 0 && device < g_CudaDriver.deviceCount;
}

template <typename T>
[[gnu::always_inline]] inline T& At(U64 address, U64 offset) {
  return *reinterpret_cast<T*>(address + offset);
}

[[gnu::always_inline]] inline bool IsKernel(const U32* kernel) {
  if (*kernel == 2) {
    return true;
  }

  if (*kernel == 1) {
    CudaLog("CUDA", 0, "kernel is of wrong type, expected CUkernel and "
      "received CUfunction\n");
  }

  return false;
}

}

// Removed edges leave the source node marked dirty at 0x508.
[[gnu::noinline]] CUresult cuGraphRemoveDependencies_v2_impl(U64 graph,
  U64* from, U64* to, U64 edgeData, U64 count) {
  if (graph == 0) {
    CudaLog("CUDA", 0, "The source graph pointer is NULL");
    CudaLog("CUDA", 0, "Graph is not a valid source graph");
    return kInvalidValue;
  }

  if (At<U32>(graph, 4) != 1) {
    CudaLog("CUDA", 0, "The source graph pointer is invalid");
    CudaLog("CUDA", 0, "Graph is not a valid source graph");
    return kInvalidValue;
  }

  if (CudaDriverRoutine_d47e0(graph) != 0) {
    CudaLog("CUDA", 0, "Graph contains allocation and/or free nodes and "
      "therefore cannot have edges deleted");
    return kNotPermitted;
  }

  if (CudaDriverRoutine_2fae0(graph, from, to, 0, count) != 0) {
    return kInvalidValue;
  }

  for (U64 i = 0; i < count; i++) {
    const U8 hasEdge = CudaDriverRoutine_1a36a0(*to + 0x3e8, from);
    const U64 target = *to++;
    if (hasEdge == 0) {
      CudaLog("CUDA", 0, "Index %zu: The edge from node %p to node %p does "
        "not exist and therefore cannot be removed", i, *from, target);
      return kInvalidValue;
    }

    CudaDriverRoutine_d5d50(*from, target, 0);
    At<U32>(*from++, 0x508) = 2;
  }

  return 0;
}

CUresult cuGraphRemoveDependencies_impl(U64 graph, U64* from, U64* to,
  U64 count) {
  return cuGraphRemoveDependencies_v2_impl(graph, from, to, count, count);
}

// Conditional nodes keep their parent graph at 0x150 and their count at
// 0xfc.
CUresult cuGraphClone_impl(U64* pClone, U64 graph) {
  const CUresult result = CudaGetCurrentContext(nullptr);
  if (result != 0) {
    return result;
  }

  if (pClone == nullptr) {
    CudaLog("CUDA", 0, "Destination graph pointer cannot be NULL");
    return kInvalidValue;
  }

  if (graph == 0) {
    CudaLog("CUDA", 0, "The source graph pointer is NULL");
    CudaLog("CUDA", 0, "Graph is not a valid source graph");
    return kInvalidValue;
  }

  if (At<U32>(graph, 4) != 1) {
    CudaLog("CUDA", 0, "The source graph pointer is invalid");
    CudaLog("CUDA", 0, "Graph is not a valid source graph");
    return kInvalidValue;
  }

  if (CudaDriverRoutine_d47e0(graph) != 0) {
    CudaLog("CUDA", 0, "Cloning is not supported for graphs containing "
      "memory allocation or free nodes");
    return kNotPermitted;
  }

  if (At<U8>(graph, 0x14c) != 0) {
    CudaLog("CUDA", 0, "Cloning is not supported for graphs containing "
      "device-updatable kernel node(s)");
    return kNotPermitted;
  }

  const U64 parent = At<U64>(graph, 0x150);
  if (At<U32>(graph, 0xfc) != 0 ||
    (parent != 0 && At<U32>(parent, 0xfc) != 0)) {
    CudaLog("CUDA", 0, "Cloning is not supported for graphs containing or "
      "contained within a conditional node");
    return kNotPermitted;
  }

  U64 clone;
  const CUresult cloned = CudaDriverRoutine_d9290(&clone, graph);
  if (cloned == 0) {
    *pClone = clone;
  }

  return cloned;
}

// A failed allocation is retried once after trimming pools for the
// location at 0xc.
CUresult cuMemCreate_impl(U64* pHandle, U64 size, U64 prop, U64 flags) {
  U64 handle = 0;
  U64 device = 0;
  CUresult result = CudaGetCurrentContext(nullptr);
  if (result != 0) {
    return result;
  }

  if (CudaDriverRoutine_fe960() == 0) {
    return kNotPermitted;
  }

  if (pHandle == nullptr) {
    CudaLog("CUDA", 0, "Parameter handle cannot be NULL");
    return kInvalidValue;
  }

  if (prop == 0) {
    CudaLog("CUDA", 0, "Parameter prop cannot be NULL");
    return kInvalidValue;
  }

  if (flags != 0) {
    CudaLog("CUDA", 0, "Parameter flags must be 0");
    return kInvalidValue;
  }

  if (size == 0) {
    CudaLog("CUDA", 0, "Parameter size cannot be 0");
    return kInvalidValue;
  }

  if ((At<U32>(prop, 8) | 2) != 3) {
    CudaLog("CUDA", 0, "Value of prop->location.type is not valid: must be "
      "DEVICE or HOST_NUMA");
    return kInvalidValue;
  }

  if ((size & kGranularityMask) != 0) {
    CudaLog("CUDA", 0, "Requested size not aligned to minimum granularity "
      "(0x%zx bytes)", kGranularityMask + 1);
    return kInvalidValue;
  }

  CudaAllocationProps props;
  result = CudaDriverRoutine_fea90(&device, &props, prop);
  if (result != 0) {
    return result;
  }

  result = CudaDriverRoutine_fe6b0(device, size, &props, &handle);
  if (result == kOutOfMemory) {
    if (CudaDriverRoutine_f2040(At<int32_t>(prop, 0xc),
      props.words[0] & 7) == 0) {
      return kOutOfMemory;
    }

    result = CudaDriverRoutine_fe6b0(device, size, &props, &handle);
  }

  if (result == 0) {
    *pHandle = handle;
  }

  return result;
}

// Mapped handles count their references at 0x290 under the lock of their
// owner at 0x278.
CUresult cuMemRetainAllocationHandle_impl(U64* pHandle, U64 address) {
  const CUresult result = CudaGetCurrentContext(nullptr);
  if (result != 0) {
    return result;
  }

  if (CudaDriverRoutine_fe960() == 0) {
    return kNotPermitted;
  }

  if (pHandle == nullptr || address == 0) {
    if (address == 0) {
      CudaLog("CUDA", 0, "Parameter addr cannot be NULL");
    }

    if (pHandle == nullptr) {
      CudaLog("CUDA", 0, "Parameter handle is not a valid "
        "CUmemGenericAllocationHandle");
    }

    return kInvalidValue;
  }

  if (CudaDriverRoutine_12cad0(address) == 0) {
    CudaLog("CUDA", 0, "Address specified(addr: %p) must belong to a range "
      "reserved previously by cuMemAddressReserve()", address);
    return kInvalidValue;
  }

  const U64 range = CudaDriverRoutine_12c940(address);
  const U64 mapping = range != 0 ? CudaDriverRoutine_12c9e0(range) : 0;
  if (mapping == 0) {
    CudaLog("CUDA", 0, "Address specified(addr: %p) must have a valid "
      "mapping created with a call to cuMemMap()", address);
    return kInvalidValue;
  }

  U64* handle = At<U64*>(CudaDriverRoutine_1dbfc0(mapping), 0xa8);
  if (handle == nullptr) {
    CudaLog("CUDA", 0, "Failed to get a valid handle for the mapping");
    return kInvalidValue;
  }

  if ((handle[30] & 0x7c0000000000000) != 0x3c0000000000000) {
    CudaLog("CUDA", 0, "Mapping for specified address(%pmust be created with "
      "a call to cuMemMap().", address);
    return kInvalidValue;
  }

  const U64 owner = handle[79];
  CudaLockShared(owner + 0x80, 0, 0);
  handle[82]++;
  CudaUnlockShared(owner + 0x80);
  *pHandle = reinterpret_cast<U64>(handle);
  return 0;
}

CUresult cuOccupancyMaxPotentialBlockSizeWithFlags_impl(U64 pGridSize,
  U64 pBlockSize, U32* function, U64 sizeCallback, U64 sharedSize,
  U32 blockLimit, U32 flags) {
  U32* resolved = function;
  U64 state = 0;
  CUresult result = CudaGetThreadState(&state);
  if (result != 0) {
    return result;
  }

  U64 context;
  U64 green;
  result = CudaDriverRoutine_df0b0(state, &context, &green, 0);
  if (result != 0) {
    return result;
  }

  const U64 target = green != 0 ? green : context;
  if (pGridSize == 0 || pBlockSize == 0 || flags > 1) {
    return kInvalidValue;
  }

  U64 current = state;
  if (function == nullptr) {
    return kInvalidHandle;
  }

  if (*function == 1) {
    if (state == 0) {
      result = CudaGetThreadState(&current);
      if (result != 0) {
        return result;
      }
    }

    result = CudaDriverRoutine_bbeb0(current, nullptr, function, 0);
    if (result != 0) {
      return result;
    }

    resolved = function;
  }
  else if (*function == 2) {
    result = CudaDriverRoutine_e8dd0(&resolved, function, context);
    if (result != 0) {
      return result;
    }
  }
  else {
    return kInvalidHandle;
  }

  CudaLock(context + 0x18, 0, 0, 0);
  result = CudaDriverRoutine_10ade0(target, resolved, pGridSize, pBlockSize,
    sizeCallback, sharedSize, blockLimit, flags);
  CudaUnlock(context + 0x18);
  return result;
}

namespace {

// A setting is only stored again when it changes.
[[gnu::always_inline]] inline bool IsSettingCurrent(
  const CudaKernelSetting* settings, const U32* device, U32 stride,
  U32 value) {
  const U32 isSet = settings[*device * stride].isSet;
  __builtin_arm_dmb(13);
  return isSet == 1 && settings[*device * stride].value == value;
}

}

CUresult cuKernelSetCacheConfig_impl(U32* kernel, U32 config,
  int32_t device) {
  if (kernel == nullptr) {
    CudaLog("CUDA", 0, "kernel cannot be NULL\n");
    return kInvalidHandle;
  }

  if (!IsKernel(kernel)) {
    return kInvalidHandle;
  }

  CUresult result = CudaGetCurrentContext(nullptr);
  if (result != 0) {
    return result;
  }

  if (!IsDeviceOrdinal(device)) {
    CudaLog("CUDA", 0, "Parameter dev must be between 0 and %d",
      g_CudaDriver.deviceCount);
    return kInvalidDevice;
  }

  if (config >= 4) {
    CudaLog("CUDA", 0, "Invalid CUfunc_cache value %d\n", config);
    return kInvalidValue;
  }

  U32* pDevice = reinterpret_cast<U32*>(g_CudaDriver.devices[device]);
  const auto* settings = reinterpret_cast<const CudaKernelSetting*>(
    reinterpret_cast<U64>(kernel) + 0x3218);
  if (IsSettingCurrent(settings, pDevice, 2, config)) {
    return 0;
  }

  const U64 lock = reinterpret_cast<U64>(g_CudaKernelLock);
  CudaLock(lock, 0, 0, 0);
  result = CudaDriverRoutine_e9060(kernel, config, pDevice);
  CudaUnlock(lock);
  return result;
}

CUresult cuKernelSetAttribute_impl(U32 attribute, U32 value, U32* kernel,
  int32_t device) {
  if (kernel == nullptr) {
    CudaLog("CUDA", 0, "kernel cannot be NULL\n");
    return kInvalidHandle;
  }

  if (!IsKernel(kernel)) {
    return kInvalidHandle;
  }

  CUresult result = CudaGetCurrentContext(nullptr);
  if (result != 0) {
    return result;
  }

  if (!IsDeviceOrdinal(device)) {
    CudaLog("CUDA", 0, "Parameter dev must be between 0 and %d",
      g_CudaDriver.deviceCount);
    return kInvalidDevice;
  }

  U8 isSettable[8];
  result = CudaDriverRoutine_bb080(attribute, isSettable);
  if (result != 0) {
    return result;
  }

  if (isSettable[0] == 0) {
    CudaLog("CUDA", 0, "Kernel attribute %d cannot be modified\n", attribute);
    return kInvalidValue;
  }

  U32* pDevice = reinterpret_cast<U32*>(g_CudaDriver.devices[device]);
  const auto* settings = reinterpret_cast<const CudaKernelSetting*>(
    reinterpret_cast<U64>(kernel) + 0x1218 + attribute * 8);
  if (IsSettingCurrent(settings, pDevice, 16, value)) {
    return 0;
  }

  const U64 lock = reinterpret_cast<U64>(g_CudaKernelLock);
  CudaLock(lock, 0, 0, 0);
  result = CudaDriverRoutine_e86e0(kernel, attribute, value, pDevice);
  CudaUnlock(lock);
  return result;
}

// Every resource carries a checksum at 0x14 over its 0x90 bytes, all of
// them must come from one device and one green context.
CUresult cuDevResourceGenerateDesc_impl(U64 pDescription, U32* resources,
  U32 count) {
  if (pDescription == 0 || resources == nullptr) {
    return kInvalidValue;
  }

  const CUresult result = CudaGetCurrentContext(nullptr);
  if (result != 0) {
    return result;
  }

  U64 device = 0;
  if (count == 0) {
    return CudaDriverRoutine_a2140(device, pDescription, resources, count);
  }

  U64 owner = 0;
  U32* resource = resources;
  for (U32 left = count; ; resource += 36) {
    if (resource[0] != 1) {
      return kInvalidResourceType;
    }

    const U32 checksum = resource[5];
    resource[5] = 0;
    if (CudaDriverRoutine_644e0(resource, 0x90) != checksum) {
      return kInvalidResourceConfiguration;
    }

    resource[5] = checksum;
    const U64 pDevice = g_CudaDriver.devices[resource[4]];
    const U64 source = *reinterpret_cast<U64*>(resource + 2);
    if (device == 0) {
      device = pDevice;
    }

    if (pDevice != device || (owner != 0 && owner != source)) {
      return kInvalidResourceConfiguration;
    }

    owner = source;
    if (--left == 0) {
      return CudaDriverRoutine_a2140(device, pDescription, resources, count);
    }
  }
}
